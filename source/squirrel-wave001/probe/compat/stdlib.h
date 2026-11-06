#ifndef SQ_PROBE_STDLIB_H
#define SQ_PROBE_STDLIB_H
#include "common.h"
extern "C" {
void *malloc(size_t);
void *realloc(void *,size_t);
void free(void *);
void abort(void) __attribute__((noreturn));
int abs(int);
int atoi(const char *);
long strtol(const char *,char **,int);
unsigned long strtoul(const char *,char **,int);
double strtod(const char *,char **);
}
#endif
