#include "0051c380_0051cd8cbab.h"



undefined4 fn_0051cb64(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 - 0x100000U < 0x3ff00000) {
    iVar2 = fn_004ef80c(param_3);
    uVar1 = 0;
    if (iVar2 != 0) {
      fn_0051c9dc(param_1,1,param_2,param_3,param_4,1);
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_0051cae8(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined1 local_20 [16];
  
  bVar1 = param_2 - 0x100000U < 0x3ff00000;
  if (bVar1) {
    fn_0014f590(local_20);
    fn_004ed714(local_20);
    fn_0051c9dc(param_1,1,param_2,0xfd,local_20,1);
  }
  return bVar1;
}


