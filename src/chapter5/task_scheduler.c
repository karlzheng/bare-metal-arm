#include <stdio.h>
#include "task_scheduler.h"

static task_desc task_list[MAX_TASKS] = {0};
static uint8_t task_list_idx;

/* This function sets up our task list
 * with new tasks added by initilaizing the task_desc
 * of each new task with it's entry function pointer and duration
 * A maximum of MAX_TASKS are supported
 */
task_scheduler_err task_scheduler_add_task(task_start_fptr start, systime_t duration) {
    task_desc new_task;

    if(task_list_idx >= MAX_TASKS) {
        return SCHEDULER_TOO_MANY_TASKS;
    }

    // initilaize new task added
    new_task.start = start;
    new_task.duration = duration;
    new_task.last_run = 0;

    // add initialized new task to the task list
    task_list[task_list_idx] = new_task;
    task_list_idx++;

    return SCHEDULER_OKAY;
}


/* This function is where the magic happens - 
 * the tasks in the task list are scheduled here.
 */
void task_scheduler_run(void) {
    uint8_t idx;
    while(1) {
        
        // Go through each task_desc in the list
        for(idx = 0; idx < task_list_idx; idx++) {
            task_desc* curr_task = &task_list[idx];
            
            /* if the task_desc is not initialized - no valid entry function pointer
             * move to the next task_desc
             */
            if(curr_task->start == NULL) {
                continue;
            }
            
            /* With a valid task_desc, check if has been run for it's duration
             * since the last time it ran. If not, update it's last run time 
             * and start the task by calling it's entry function
             */
            if(system_time_get() - curr_task->last_run >= curr_task->duration) {
                curr_task->last_run = system_time_get();
                curr_task->start();
            }
        }
    }
}
