#include "../../source/squirrel-wave045/initialization.h"
#include "../../source/squirrel-wave041/capture.h"
#include "../../source/squirrel-wave035/exception.h"

#if defined(_WIN32)
__declspec(selectany) int _fltused=0;
#endif

void sq_prototype_deallocate011(void *pointer,SqPrototypeU32 bytes)
{sq_startup_release045(pointer,bytes);}
void sq_script_closure_deallocate017(void *pointer,SqPrototypeU32 bytes)
{sq_startup_release045(pointer,bytes);}
void sq_weak_deallocate014(void *pointer,SqPrototypeU32 bytes)
{sq_startup_release045(pointer,bytes);}
void *sq_weak_allocate014(SqPrototypeU32 bytes)
{return sq_startup_allocate045(bytes,_Alignof(SqWeakReference014));}
void *sq_native_create_allocate016(SqPrototypeU32 bytes)
{return sq_startup_allocate045(bytes,_Alignof(SqNativeClosure013));}
void *sq_native_create_reallocate016(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_startup_resize045(old,previous,next,_Alignof(SqPrefixObject012));}
void *sq_lookup_reallocate020(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_startup_resize045(old,previous,next,1);}
void *sq_class_allocate030(SqPrototypeU32 bytes)
{return sq_startup_allocate045(bytes,_Alignof(SqClass030));}
void *sq_class_reallocate030(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_startup_resize045(old,previous,next,_Alignof(SqPrefixObject012));}
void sq_class_deallocate030(void *pointer,SqPrototypeU32 bytes)
{sq_startup_release045(pointer,bytes);}
SqTable019 *sq_class_allocate_table030(void)
{return sq_startup_allocate045(sizeof(SqTable019),_Alignof(SqTable019));}
void *sq_execute_allocate_table031(SqPrototypeU32 bytes)
{return sq_startup_allocate045(bytes,_Alignof(SqTable019));}
void *sq_exception_reallocate035(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_startup_resize045(old,previous,next,_Alignof(SqTrap028));}
void *sq_script_create_allocate041(SqPrototypeU32 bytes)
{return sq_startup_allocate045(bytes,_Alignof(SqScriptClosure017));}
void *sq_script_create_reallocate041(void *old,SqPrototypeU32 previous,SqPrototypeU32 next)
{return sq_startup_resize045(old,previous,next,_Alignof(SqPrefixObject012));}
