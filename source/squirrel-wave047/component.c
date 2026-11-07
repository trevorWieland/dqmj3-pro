#include "component.h"
#include "fixture_mixed.h"
const SqPrototypeU32 sq_component047_abi[]={1,0x100000,16,8192,sizeof(SqVm040),sizeof(SqSharedState040),sizeof(void*),8,256,257};
SqPrototypeU32 sq_component_execute047(void *arena,SqPrototypeU32 bytes,SqPrototypeU32 profile,SqPrototypeI32 value,SqPrototypeU32 flags,SqPrototypeU32 cleanup,SqPrototypeU32 *output,SqPrototypeU32 capacity)
{
    if(!arena||((__UINTPTR_TYPE__)arena&15)||bytes<0x100000||!output||capacity<128||capacity>8192||flags>1||cleanup>1)return 0;
    if(profile!=8&&profile!=256&&profile!=257)return 0;
    if(profile==8&&(value<0||value>16))return 0;
    if(value< -1000000||value>1000000)return 0;
    if(!fixture_bind028(arena,bytes))return 0;
    fixture_prepare047(profile,value,flags,1);fixture_run047(cleanup);return fixture_snapshot047(output,capacity);
}
