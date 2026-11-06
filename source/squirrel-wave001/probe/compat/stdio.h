#ifndef SQ_PROBE_STDIO_H
#define SQ_PROBE_STDIO_H
#include "common.h"
#include <stdarg.h>
extern "C" {
int fflush(void *);
int printf(const char *,...);
int sprintf(char *,const char *,...);
int vsprintf(char *,const char *,va_list);
}
#endif
