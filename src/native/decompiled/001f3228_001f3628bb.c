#include "001f3228_001f3628bb.h"



undefined4 fn_001f3628(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(*(int *)(param_1 + 0xe88) + 0x15) == '\0') &&
      (iVar1 = fn_00145b00(0xc,&DAT_00812c8c), iVar1 != 0)) &&
     (iVar1 = fn_004021c0(iVar1,param_2,param_3), iVar1 != 0)) {
    uVar2 = fn_0015a130(param_1);
    return uVar2;
  }
  return 0xffffffff;
}



void fn_001f35f0(int param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(iVar1 + 400) = *param_3;
    *(undefined4 *)(iVar1 + 0x194) = uVar2;
    *(undefined4 *)(iVar1 + 0x198) = uVar3;
  }
  return;
}



void fn_001f358c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((((iVar1 != 0) && (-1 < (int)param_2)) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(uint *)(iVar1 + 0x138) = *(uint *)(iVar1 + 0x138) & 0xffffff7f | param_3 << 7;
  }
  return;
}



undefined4 fn_001f3530(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0xe4c);
  if ((iVar3 == 0) || (iVar1 = fn_006abd58(), iVar1 == 0)) {
    return 0xffffffff;
  }
  uVar2 = fn_0035b7f0(iVar3,iVar1 + 0x20,iVar1 + 0x2c,iVar1 + 0x38,0,0,1);
  return uVar2;
}


