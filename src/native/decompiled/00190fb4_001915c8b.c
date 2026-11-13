#include "00190fb4_001915c8b.h"



undefined1 * fn_001915c8(undefined1 *param_1,int param_2,undefined4 param_3)

{
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 auStack_68 [88];
  
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  if (param_2 != 0) {
    fn_0017821c(auStack_68,param_1,0x48);
    fn_0019bed8(auStack_68,&local_78,param_2,param_3);
    param_1 = auStack_68;
  }
  return param_1;
}



void fn_001915c4(void)

{
  return;
}



void fn_00191564(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uStack_4;
  
  uStack_4 = param_4;
  fn_0019bfc0(param_1,param_2,param_3,&uStack_4);
  return;
}



void fn_001914c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x20) * 0x1c);
  *puVar1 = 0;
  *(undefined4 *)(puVar1 + 4) = param_2;
  *(undefined4 *)(puVar1 + 8) = param_3;
  *(undefined4 *)(puVar1 + 0xc) = param_4;
  *(uint *)(puVar1 + 0x10) = *(uint *)(puVar1 + 0x10) | 1;
  fn_00150284();
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if (((DAT_008e3108 == param_1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_0019143c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_008e3104;
  puVar2 = (undefined1 *)(*(int *)(DAT_008e3104 + 0x18) + *(int *)(DAT_008e3104 + 0x20) * 0x1c);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = param_1;
  *(undefined4 *)(puVar2 + 8) = param_2;
  *(undefined4 *)(puVar2 + 0xc) = param_3;
  *(uint *)(puVar2 + 0x10) = *(uint *)(puVar2 + 0x10) | 1;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_001913c8(uint *param_1)

{
  uint uVar1;
  uint in_s0;
  
  if (0xff000000 < in_s0 << 1) {
    *param_1 = in_s0;
    return;
  }
  uVar1 = ((in_s0 & 0x7fffffff) >> 0x17) - 0x7f;
  if ((int)uVar1 < 0x17) {
    if ((int)uVar1 < 0) {
      *param_1 = in_s0 & 0x80000000;
      return;
    }
    uVar1 = 0x7fffff >> (uVar1 & 0xff);
    if ((in_s0 & uVar1) != 0) {
      *param_1 = in_s0 & ~uVar1;
      return;
    }
  }
  *param_1 = in_s0;
  return;
}



bool fn_00191284(int param_1,int param_2)

{
  return *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x2c) + 0x18) ==
         *(int *)(*(int *)(*(int *)(param_1 + 4) + 8) + param_2 * 0xc + 4);
}


