#include "00662860_00662be4.h"



void fn_00662be4(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = DAT_008ccfb8;
  puVar3 = (undefined4 *)(DAT_008ccfb8 + 0x18);
  iVar2 = *(int *)(DAT_008ccfb8 + 0x1c) + -1;
  *(int *)(DAT_008ccfb8 + 0x1c) = iVar2;
  if (iVar2 == 0) {
    (**(code **)(iVar1 + 0x20))(*puVar3);
    *puVar3 = 0;
  }
  DAT_008ccfbc = DAT_008ccfbc + -1;
  if (DAT_008ccfbc == 0) {
    (*DAT_008ccfc0)(DAT_008ccfb8);
    DAT_008ccfb8 = 0;
  }
  fn_0012d73c(*param_1);
  *param_1 = 0;
  fn_0012d73c(param_1[1]);
  param_1[1] = 0;
  return;
}



undefined4 fn_00662bd0(void)

{
  return *(undefined4 *)(DAT_008ccfb8 + 0xc);
}



bool fn_00662ae8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_008ccfb8 != 0) {
    iVar1 = *(int *)(DAT_008ccfb8 + 0xc);
  }
  return DAT_008ccfb8 != 0 && iVar1 != 0;
}



int fn_00662a4c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x5c,&DAT_00812c8c);
  iVar2 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    iVar2 = fn_00663c40(puVar1 + 2,puVar1);
    iVar2 = fn_0066401c(iVar2 + 0x28,iVar2 + -8);
    *(undefined1 *)(iVar2 + 0x28) = 0;
    iVar2 = iVar2 + -0x30;
  }
  return iVar2;
}



int fn_00662a00(int param_1)

{
  fn_0012a2d8();
  fn_0012a2d8(param_1 + 8);
  return param_1;
}



void fn_00662950(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 uVar6;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  local_30 = param_1;
  iStack_2c = param_2;
  uStack_28 = param_3;
  iVar3 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  uVar4 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 8);
  do {
    psVar5 = (short *)(param_2 + uVar4 * 2);
    if ((0 < *psVar5) && (uVar4 == 2 || uVar4 == 3)) {
      fn_0025b3bc(uVar6);
    }
    iVar1 = uVar4 * 2;
    iVar2 = uVar4 * 2;
    uVar4 = uVar4 + 1;
    *(short *)((int)&local_40 + iVar2) = *(short *)(iVar3 + iVar1) - *psVar5;
  } while (uVar4 < 4);
  local_38 = local_40;
  uStack_34 = local_3c;
  fn_00662860(local_30,&local_38,param_3);
  return;
}



void fn_00662860(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (param_3 == 0) {
    fn_00166824();
    local_48 = CONCAT31(((unsigned int)(local_48) >> 8) & 0xffffff,2);
    fn_00229ae0(param_1 + 0x10,4,param_1,1,1,&local_48);
  }
  else {
    iVar3 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
    uVar4 = 0;
    local_38 = *(undefined4 *)(DAT_00897804 + 8);
    do {
      psVar5 = (short *)(iVar3 + uVar4 * 2);
      if ((0 < *psVar5) && (uVar4 == 2 || uVar4 == 3)) {
        fn_0025b3bc(local_38);
      }
      iVar1 = uVar4 * 2;
      iVar2 = uVar4 * 2;
      uVar4 = uVar4 + 1;
      *(short *)((int)&local_48 + iVar2) = *(short *)(param_2 + iVar1) - *psVar5;
    } while (uVar4 < 4);
    local_30 = local_48;
    local_2c = local_44;
    *(undefined4 *)(param_1 + 8) = local_48;
    *(undefined4 *)(param_1 + 0xc) = local_44;
  }
  fn_0025bafc(*(undefined4 *)(DAT_00897804 + 8),param_2);
  return;
}


