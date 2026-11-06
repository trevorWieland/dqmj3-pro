#ifndef SQ_PROBE_SETJMP_H
#define SQ_PROBE_SETJMP_H
#ifdef _WIN64
struct __attribute__((aligned(16))) SqJumpWord{unsigned long long parts[2];};
typedef SqJumpWord jmp_buf[16];
extern "C" int _setjmp(jmp_buf,void *) __attribute__((returns_twice));
#define setjmp(b) _setjmp(b,0)
#else
typedef unsigned long long jmp_buf[32];
extern "C" int setjmp(jmp_buf) __attribute__((returns_twice));
#endif
extern "C" void longjmp(jmp_buf,int) __attribute__((noreturn));
#endif
