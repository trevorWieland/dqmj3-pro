#include "00136a78_0013a624.h"



void fn_0013a624(int *param_1)

{
  if (param_1[2] < 2) {
    param_1[2] = 0;
    (**(code **)(*param_1 + 0x14))(param_1);
    (**(code **)(*param_1 + 0x24))(param_1);
    fn_001433d8(param_1 + 6);
    if (param_1[1] < 2) {
      param_1[1] = 0;
      (**(code **)(*param_1 + 0x1c))(param_1);
      if (param_1[5] != 0) {
        fn_0012d73c();
        param_1[5] = 0;
      }
    }
    else {
      param_1[1] = param_1[1] + -1;
    }
  }
  else {
    param_1[2] = param_1[2] + -1;
  }
  return;
}



undefined4 fn_0013819c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138210,(char *)&DAT_001381f8,
                         (char *)&DAT_007bc3ae,0x3d);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_0013810c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00138180,(char *)&DAT_00138168,(char *)&DAT_007bc3ca
                         ,0x47);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_001374b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137524,(char *)&DAT_0013750c,(char *)&DAT_007bc37e,
                         0x29);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_00137420(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00137494,(char *)&DAT_0013747c,(char *)&DAT_007bc396,
                         0x33);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}



undefined4 fn_00136a78(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = fn_00157f58(param_1,0xffffffff,&local_10);
  if (iVar1 < 0) {
    uVar2 = fn_00148918((char *)&DAT_00136aec,(char *)&DAT_00136ad4,(char *)&DAT_007bc427,
                         0x6f);
    uVar2 = fn_001581d0(param_1,uVar2);
    return uVar2;
  }
  return 0;
}


