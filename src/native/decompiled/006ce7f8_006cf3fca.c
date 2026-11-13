#include "006ce7f8_006cf3fca.h"



undefined4 fn_006ceb3c(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    fn_0015e590(0xe0a046da,0x6ceb58);
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined4 fn_006ceaf4(int param_1)

{
  if (*(int *)(param_1 + 4) == 0) {
    fn_0015e590(0xe0a046da,0x6ceb10);
  }
  return *(undefined4 *)(param_1 + 4);
}



undefined8 fn_006ceaa0(int param_1)

{
  int iVar1;
  undefined8 local_10 [2];
  
  iVar1 = fn_001560d8(param_1 + 4,local_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x6ceabc);
  }
  return local_10[0];
}



int fn_006cea38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  return iVar1 * iVar2 + param_2;
}



undefined4 fn_006ce9d8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  param_2 = iVar1 * iVar2 + param_2;
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x38);
  if ((param_2 < 0) || (iVar1 = fn_006b876c(uVar3), iVar1 <= param_2)) {
    return 0;
  }
  uVar3 = fn_0028bb88(uVar3,param_2);
  return uVar3;
}



void fn_006ce7f8(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_208 [248];
  undefined1 auStack_110 [252];
  
  iVar2 = *param_3;
  if (iVar2 < 2) {
    fn_0017821c(auStack_110,param_2,0xf8);
    fn_0017821c(auStack_208,auStack_110,0xf8);
    iVar1 = 0;
    if ((iVar2 < 1) || (iVar1 = iVar2 * 0x80, iVar1 + 0x80 < 0xf9)) {
      fn_00301a9c(auStack_208 + iVar1,param_1,0x80);
    }
    else {
      fn_00301a9c(auStack_208 + iVar1,param_1,iVar2 * -0x80 + 0xf8);
    }
    fn_0017821c(param_2,auStack_208,0xf8);
    *param_3 = *param_3 + 1;
  }
  return;
}


