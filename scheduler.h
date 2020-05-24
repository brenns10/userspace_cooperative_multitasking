#pragma once

/**
 * Called once initialize the scheduler.
 */
void scheduler_init(void);

/**
 * Can be called outside a task context, or within a task context, in order to
 * create a new task and add it to the list in a runnable state.
 */
void scheduler_create_task(void (*func)(void*), void *arg);

/**
 * Run the scheduler until all tasks are completed.
 */
void scheduler_run(void);

/**
 * Exit the current task. If there is no current task, well, we exit the process
 * with an angry message.
 */
void scheduler_exit_current_task(void);

/**
 * Relinquish control for a while. Returns whenever the scheduler decides.
 */
void scheduler_relinquish(void);
