#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <squirrel.h>
#include "sqpcheader.h"
#include "sqvm.h"
#include "sqstring.h"
extern "C" __declspec(dllimport) void ExitProcess(unsigned);
void operator delete(void *p) noexcept{free(p);}
void operator delete(void *p,size_t) noexcept{free(p);}
extern "C" int _purecall(){abort();}
typedef void (*Initializer)();
#pragma section(".CRT$XCA",read)
#pragma section(".CRT$XCZ",read)
__declspec(allocate(".CRT$XCA")) Initializer sq_ctor_start[]={0};
__declspec(allocate(".CRT$XCZ")) Initializer sq_ctor_end[]={0};
extern "C" void _initterm(Initializer *,Initializer *);
extern "C" int _fltused=0;
struct Case{const char *name;const char *source;SQInteger expected;};
static const Case cases[]={
{"integer-width-boundary","return 2147483647+1;",2147483648LL},
{"float-width-boundary","return ((16777216.0+1.0)-16777216.0).tointeger();",0},
{"arithmetic","return 6*7;",42},
{"array-constructor","return array(4).len();",4},
{"array-sort","local a=[4,1,3,2];a.sort();return a[0]*1000+a[1]*100+a[2]*10+a[3];",1234},
{"table-slot","local t={a=9};\nt.b<-12;\nreturn t.a+t.b;",21},
{"class-instance","class A{v=7;function f(){return v;}} return A().f();",7},
{"class-static","class A{static v=11;}return A.v;",11},
{"closure","local n=6;\nlocal f=function(x):(n){return n+x;};\nreturn f(8);",14},
{"try-throw","try{throw 17;}catch(e){return e;}return 0;",17},
{"generator","local f=function(){yield 3;yield 5;};\nlocal g=f();\nreturn (resume g)+(resume g);",8},
{"float-to-integer","return (1.5*4).tointeger();",6},
{"native-stack-call","return [1,2,3].len();",3},
{"loop","local n=0;for(local i=0;i<20;i++)n+=i;return n;",190}
};
static int run(){
unsigned passed=0;
for(unsigned i=0;i<sizeof(cases)/sizeof(cases[0]);i++){
HSQUIRRELVM v=sq_open(128);SQInteger result=0;
int ok=SQ_SUCCEEDED(sq_compilebuffer(v,cases[i].source,(SQInteger)strlen(cases[i].source),cases[i].name,SQTrue));
if(ok){sq_pushroottable(v);ok=SQ_SUCCEEDED(sq_call(v,1,SQTrue,SQTrue))&&SQ_SUCCEEDED(sq_getinteger(v,-1,&result))&&result==cases[i].expected;}
const char *error=0;
if(!ok){sq_getlasterror(v);sq_getstring(v,-1,&error);}
printf("{\"name\":\"%s\",\"passed\":%s,\"result\":%lld,\"errorHex\":\"",cases[i].name,ok?"true":"false",(long long)result);
if(error)for(const unsigned char *e=(const unsigned char *)error;*e;e++)printf("%02x",(unsigned)*e);
printf("\"}\n");passed+=ok;sq_close(v);
}
HSQUIRRELVM v=sq_open(64);int invalid=SQ_FAILED(sq_compilebuffer(v,"local = ;",9,"invalid-syntax",SQFalse));sq_close(v);
printf("{\"name\":\"invalid-compiler-input\",\"passed\":%s}\n",invalid?"true":"false");
unsigned lengths[]={3,64,255};SQChar data[256];
for(unsigned i=0;i<256;i++)data[i]=(SQChar)((i*29+128)&255);
for(unsigned i=0;i<3;i++)printf("{\"name\":\"hash-%u\",\"length\":%u,\"value\":%llu}\n",lengths[i],lengths[i],(unsigned long long)_hashstr(data,lengths[i]));
printf("{\"name\":\"host-width\",\"pointerBytes\":%u,\"integerBytes\":%u,\"objectBytes\":%u,\"version\":%u}\n",(unsigned)sizeof(void*),(unsigned)sizeof(SQInteger),(unsigned)sizeof(SQObject),SQUIRREL_VERSION_NUMBER);
return passed==sizeof(cases)/sizeof(cases[0])&&invalid?0:1;
}
extern "C" void mainCRTStartup(){_initterm(sq_ctor_start,sq_ctor_end);unsigned result=(unsigned)run();fflush(0);ExitProcess(result);}
