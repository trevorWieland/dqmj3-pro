#ifndef DQMJ3_DIAGNOSTIC_SHELL_H
#define DQMJ3_DIAGNOSTIC_SHELL_H
typedef unsigned int u32;
typedef struct { int left; int top; int width; int height; } ShellRect;
void shell_reset(void);
void shell_resume(int resumed);
void shell_surface(int role, int token, int ready);
void shell_step(int owner);
void shell_restore(int ticks);
void shell_button(int button, int down);
void shell_axis(int x, int y);
int shell_snapshot(int field);
int shell_smoke(void);
void shell_rect(int width, int height, int role, int view, int secondary, ShellRect *result);
long long shell_route(int width, int height, int role, int secondary, int x, int y);
long long shell_touch(int width, int height, int role, int x, int y);
int shell_self_test(void);
#endif
