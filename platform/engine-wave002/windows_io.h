#ifndef DQM_ENGINE_WINDOWS_IO_H
#define DQM_ENGINE_WINDOWS_IO_H
#include "../app-shell/win32_api.h"
int engine_io_start(int handle);
int engine_io_poll(void);
void engine_io_close(void);
int engine_disk_checkpoint(int write_mode);
#endif
