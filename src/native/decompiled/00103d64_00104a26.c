#include "00103d64_00104a26.h"



int * fn_0010483c(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar2 != 0) {
    return (int *)0x0;
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (param_3 < 1) {
    if (param_2 != 0) {
      return (int *)0x0;
    }
    uVar3 = 1;
  }
  else {
    bVar4 = param_2 == 0;
    if (bVar4) {
      param_2 = fn_002fec38(param_3 << 1);
    }
    fn_00104a92(param_1,bVar4);
    if ((bVar1 & 1) != 0) {
      fn_002feca8(param_1[2]);
    }
    param_1[3] = param_3;
    uVar3 = 0;
    param_1[2] = param_2;
  }
  fn_00104aba(param_1,uVar3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return param_1;
}



int * fn_00104528(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  bool bVar4;
  
  iVar2 = (**(code **)(*param_1 + 0x34))(param_1);
  if (iVar2 != 0) {
    return (int *)0x0;
  }
  bVar1 = *(byte *)(param_1 + 4);
  if (param_3 < 1) {
    if (param_2 != 0) {
      return (int *)0x0;
    }
    uVar3 = 1;
  }
  else {
    bVar4 = param_2 == 0;
    if (bVar4) {
      param_2 = fn_002fec38(param_3);
    }
    fn_00104a26(param_1,bVar4);
    if ((bVar1 & 1) != 0) {
      fn_002feca8(param_1[2]);
    }
    param_1[3] = param_3;
    uVar3 = 0;
    param_1[2] = param_2;
  }
  fn_00104a4e(param_1,uVar3);
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  return param_1;
}



void fn_00104a26(int param_1,int param_2)

{
  if (param_2 == 0) {
    *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) & 0xfffffffe;
    return;
  }
  *(uint *)(param_1 + 0x10) = *(uint *)(param_1 + 0x10) | 1;
  return;
}



void fn_0010436c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  int iStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  local_24 = param_1;
  iStack_20 = param_2;
  uStack_1c = param_3;
  uStack_18 = param_4;
  iVar2 = fn_0010388c(param_2 + 0x10,param_3,param_4,param_5);
  if (iVar2 == 0) {
    fn_002fedb8(local_24,param_6);
  }
  else {
    piVar3 = (int *)fn_0010386e(param_2 + 0x10,param_3);
    if (DAT_008c3d9c < *(uint *)(*piVar3 + 0xc)) {
      iVar4 = *(int *)(*(int *)(*piVar3 + 8) + DAT_008c3d9c * 4);
    }
    else {
      iVar4 = 0;
    }
    if (iVar4 == 0) {
      fn_00303370(piVar3,&DAT_008c3d9c,1,0x20,0x1041d1);
    }
    uVar1 = local_24;
    uVar5 = fn_002fed80(auStack_2c,iVar2,auStack_28);
    fn_002fedb8(uVar1,uVar5);
    fn_002fedf4(auStack_2c);
  }
  return;
}



void fn_00104362(int param_1)

{
  fn_0030406c(param_1 + 0x30);
  return;
}



void fn_00104358(int param_1)

{
  fn_0030406c(param_1 + 0x30);
  return;
}



int fn_001042c4(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  int local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  local_1c = fn_00103bf8(auStack_30);
  local_28 = fn_003007bc(8,param_2,0x103bf9,&LAB_00103c12_1);
  uVar1 = param_1[1];
  if (param_2 <= (uint)param_1[1]) {
    uVar1 = param_2;
  }
  local_20 = uVar1 << 3;
  local_24 = local_28;
  for (iVar2 = *param_1; *param_1 + local_20 != iVar2; iVar2 = iVar2 + 8) {
    fn_00303fbc(local_28,iVar2);
    local_28 = local_28 + 8;
  }
  for (; uVar1 < param_2; uVar1 = uVar1 + 1) {
    fn_00303fbc(uVar1 * 8 + local_24,local_1c);
  }
  fn_00300904(*param_1,&LAB_00103c12_1);
  iVar2 = local_24;
  param_1[1] = param_2;
  *param_1 = local_24;
  fn_00303564(auStack_2c);
  return iVar2;
}



void fn_001041b0(undefined1 param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (*(int *)(param_2 + 8) < 1) {
    fn_00302bbc();
    return;
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + -1;
  puVar1 = *(undefined1 **)(param_2 + 4);
  *(undefined1 **)(param_2 + 4) = puVar1 + 1;
  *puVar1 = param_1;
  return;
}



void fn_001041a0(void)

{
  DAT_008c3d9c = 0;
  DAT_008c3da0 = 0;
  return;
}



void fn_00104164(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  DAT_008c3dc4 = fn_002fec38(8);
  DAT_008c3dc8 = 2;
  do {
    iVar1 = iVar2 * 4;
    iVar2 = iVar2 + -1;
    *(undefined4 *)(DAT_008c3dc4 + iVar1 + -4) = 0;
  } while (iVar2 != 0);
  fn_00303b10(&DAT_008c3dc4,&LAB_001042b4_1,0x100000);
  return;
}



void fn_00104154(void)

{
  DAT_008c3db8 = 0;
  DAT_008c3dbc = 0;
  return;
}



int fn_00104130(int param_1)

{
  int iVar1;
  
  iVar1 = fn_002fedf4(param_1 + 0x10);
  return iVar1 + -0x10;
}



/* WARNING: Removing unreachable block (ram,0x00103f3a) */
/* WARNING: Removing unreachable block (ram,0x00103e0c) */
/* WARNING: Removing unreachable block (ram,0x00103dd6) */
/* WARNING: Removing unreachable block (ram,0x00103faa) */

undefined8 fn_00103d64(undefined4 param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *in_stack_ffffffe0;
  undefined4 *puVar5;
  undefined *puVar6;
  
  DAT_008c3d60 = DAT_008c3d60 + 1;
  if (DAT_008c3d60 == 1) {
    fn_00303b14(&DAT_008f8150,0,&DAT_008f7f50);
    puVar5 = &DAT_008f81a8;
    DAT_008f81a8 = fn_0085aa54;
    puVar1 = (undefined4 *)fn_00303b90(&DAT_008f81b0);
    piVar4 = puVar1 + -2;
    *piVar4 = (int)fn_0085aa54;
    *puVar1 = fn_0085aa68;
    puVar1[-1] = 0;
    fn_00303ba0(*(int *)(*piVar4 + -0xc) + (int)piVar4,&DAT_008f8150);
    fn_00303b14(&DAT_008f83f8,1,&DAT_008f81f8,0x200,puVar5);
    piVar2 = (int *)fn_00303c00(&DAT_008f8450,&DAT_008f83f8);
    fn_00303b14(&DAT_008f8698,2,&DAT_008f8498,0x200,puVar5);
    piVar3 = (int *)fn_00303c00(&DAT_008f86f0,&DAT_008f8698);
    fn_00303b14(&DAT_008f8938,2,&DAT_008f8738,0x200,&DAT_008f8938);
    puVar1 = &DAT_008f8990;
    DAT_008f9c6c = (int *)fn_00303c00(&DAT_008f8990,&DAT_008f8698);
    if (piVar4 == (int *)0x0) {
      DAT_008f9c60 = 0;
    }
    else {
      DAT_008f9c60 = *(int *)(*piVar4 + -0xc) + (int)piVar4;
    }
    if (piVar2 == (int *)0x0) {
      DAT_008f9c64 = 0;
    }
    else {
      DAT_008f9c64 = *(int *)(*piVar2 + -0xc) + (int)piVar2;
    }
    if (piVar3 == (int *)0x0) {
      DAT_008f9c68 = 0;
    }
    else {
      DAT_008f9c68 = *(int *)(*piVar3 + -0xc) + (int)piVar3;
    }
    if (DAT_008f9c6c != (int *)0x0) {
      DAT_008f9c6c = (int *)(*(int *)(*DAT_008f9c6c + -0xc) + (int)DAT_008f9c6c);
    }
    *(int **)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0x38) = piVar2;
    *(uint *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 4) =
         *(uint *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 4) | 0x2000;
    fn_00303c34(&DAT_008f8dd8,0,&DAT_008f89d8,0x200,puVar1);
    puVar5 = &DAT_008f8e30;
    puVar6 = &DAT_008f8dd8;
    DAT_008f8e30 = &DAT_0085ab68;
    puVar1 = (undefined4 *)fn_00303cb0(&DAT_008f8e38);
    piVar4 = puVar1 + -2;
    *piVar4 = (int)&DAT_0085ab68;
    *puVar1 = &DAT_0085ab7c;
    puVar1[-1] = 0;
    fn_00303cc0(*(int *)(*piVar4 + -0xc) + (int)piVar4,puVar6);
    fn_00303c34(&DAT_008f9280,1,&DAT_008f8e80,0x200,puVar6,puVar5);
    piVar2 = (int *)fn_00303d20(&DAT_008f92d8,&DAT_008f9280);
    fn_00303c34(&DAT_008f9720,2,&DAT_008f9320,0x200,puVar6,&DAT_008f9720);
    piVar3 = (int *)fn_00303d20(&DAT_008f9778,&DAT_008f9720);
    fn_00303c34(&DAT_008f9bc0,2,&DAT_008f97c0,0x200,&DAT_008f9bc0,&DAT_008f9bc0);
    in_stack_ffffffe0 = &DAT_008f9c18;
    DAT_008f9c7c = (int *)fn_00303d20(&DAT_008f9c18,&DAT_008f9720);
    if (piVar4 == (int *)0x0) {
      DAT_008f9c70 = 0;
    }
    else {
      DAT_008f9c70 = *(int *)(*piVar4 + -0xc) + (int)piVar4;
    }
    if (piVar2 == (int *)0x0) {
      DAT_008f9c74 = 0;
    }
    else {
      DAT_008f9c74 = *(int *)(*piVar2 + -0xc) + (int)piVar2;
    }
    if (piVar3 == (int *)0x0) {
      DAT_008f9c78 = 0;
    }
    else {
      DAT_008f9c78 = *(int *)(*piVar3 + -0xc) + (int)piVar3;
    }
    if (DAT_008f9c7c != (int *)0x0) {
      DAT_008f9c7c = (int *)(*(int *)(*DAT_008f9c7c + -0xc) + (int)DAT_008f9c7c);
    }
    *(int **)((int)piVar4 + *(int *)(*piVar4 + -0xc) + 0x38) = piVar2;
    *(uint *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 4) =
         *(uint *)((int)piVar3 + *(int *)(*piVar3 + -0xc) + 4) | 0x2000;
  }
  return CONCAT44(in_stack_ffffffe0,param_1);
}


