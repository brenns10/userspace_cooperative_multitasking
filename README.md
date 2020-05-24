Userspace Cooperative Mutitasking Scheduler
===========================================

This is a simple example of "threads" implemented in userspace, which
cooperatively hand off control to one another. The API is quite simple:

```
/*
 * Functions called to initialize, add tasks, and run the scheduler.
 */
void scheduler_init(void);
void scheduler_create_task(void (*func)(void*), void *arg);
void scheduler_run(void);

/*
 * Functions called by tasks to exit or hand off control.
 */
void scheduler_exit_current_task(void);
void scheduler_relinquish(void);
```

You can find the implementation of this API in `scheduler.c` and an example of
using it in `main.c`.

This project involves platform-specific `x86_64` assembly and thus only runs on
these platforms. It is, however, quite easy to port to other architectures.

## Compile and run

This project uses the Meson build system. Install `meson` and `ninja` packages
if you don't already have those commands.

```
$ meson build
$ ninja -C build
$ build/main
```
