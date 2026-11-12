#include "001131dc_00113e1c.h"



void fn_00113e1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_00123560(&DAT_00113e50,param_1,param_2,param_3,param_4,param_5);
  return;
}



void fn_00113d34(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  if (DAT_0089a658 != 0) {
    return;
  }
  local_10 = in_r3;
  iVar1 = fn_0013db70();
  if (iVar1 != 0x8a067f9) {
    if (iVar1 < 0) {
      fn_0015e590(iVar1,0x113d60);
    }
  }
  uVar2 = fn_002febd8((char *)&DAT_007d6efb);
  iVar1 = fn_0014fe94(&DAT_0089a658,(char *)&DAT_007d6efb,uVar2,0);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x113d88);
  }
  fn_00123398(DAT_0089a658);
  DAT_0089a65c = &DAT_0089a655;
  fn_00123550(&DAT_0089a65c);
  local_10 = fn_0014d9b8();
  iVar1 = fn_00123520(&local_10,0);
  if (-(iVar1 >> 0x1f) == 0) {
    return;
  }
  fn_0015e590(iVar1,0x113dd0,-(iVar1 >> 0x1f),local_10);
  return;
}



undefined4 fn_00113ce4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar1 == 3 || iVar1 == 4) || (iVar1 == 5 || iVar1 == 6)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_00113ca8(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  if ((iVar1 == 7 || iVar1 == 8) || (iVar1 == 9 || iVar1 == 10)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_00113bb4(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_008282e4;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001223a8();
  }
  param_1[0x12] = uVar2;
  *(undefined1 *)(param_1 + 0x13) = 0;
  *(undefined2 *)((int)param_1 + 0x4e) = 0;
  param_1[0x1a] = param_2;
  param_1[0x1b] = 0;
  return param_1;
}



void fn_00113bac(undefined4 *param_1)

{
  fn_001003e0(*param_1);
  return;
}



void fn_00113a24(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 unaff_r4;
  uint *puVar5;
  undefined4 in_lr;
  
  puVar5 = *(uint **)(param_1 + 4);
  fn_0012d170(puVar5);
  uVar4 = *puVar5;
  *puVar5 = 0;
  uVar2 = puVar5[1];
  puVar5[1] = 0;
  uVar3 = puVar5[2];
  puVar5[2] = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 0x14;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar4,(int)(uVar3 - uVar4) / 0x14,0);
  fn_0012d5e0(puVar5 + 3);
  fn_0012d5e0(puVar5 + 6);
  fn_0012d5e0(puVar5 + 9);
  uVar3 = puVar5[3];
  puVar5[3] = 0;
  uVar2 = puVar5[4];
  puVar5[4] = 0;
  uVar4 = puVar5[5];
  puVar5[5] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(uVar4 - uVar3) >> 2,0);
  uVar3 = puVar5[6];
  puVar5[6] = 0;
  uVar2 = puVar5[7];
  puVar5[7] = 0;
  uVar4 = puVar5[8];
  puVar5[8] = 0;
  uVar1 = uVar3;
  if (uVar2 < uVar3) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_001008c4(uVar3,(int)(uVar4 - uVar3) >> 2,0);
  uVar4 = puVar5[9];
  puVar5[9] = 0;
  uVar2 = puVar5[10];
  puVar5[10] = 0;
  uVar3 = puVar5[0xb];
  puVar5[0xb] = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 4;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(uVar3 - uVar4) >> 2,0,uVar4,unaff_r4,in_lr);
  return;
}



void fn_0011398c(int *param_1)

{
  *(undefined4 *)(*param_1 + 0x34) = 0;
  return;
}



void fn_0011360c(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_00113474(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0x80000000;
  *(undefined4 *)(param_1 + 0x4c) = 0x3de38e39;
  *(undefined4 *)(param_1 + 0x50) = 0x3de38e39;
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(param_1 + 0x28) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x80000000;
  *(undefined4 *)(param_1 + 0x34) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x38) = 0x80000000;
  *(undefined4 *)(param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00127dec(iVar1,1,4);
  }
  piVar3 = *(int **)(param_1 + 0x20);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x20) = piVar2;
  }
  fn_00127d2c(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(DAT_008977cc + 0x28));
  fn_00127cac(*(undefined4 *)(param_1 + 0x20),0);
  fn_00127cac(*(undefined4 *)(param_1 + 0x20),1);
  fn_00127cac(*(undefined4 *)(param_1 + 0x20),2);
  fn_00127cac(*(undefined4 *)(param_1 + 0x20),3);
  return;
}



int fn_00113378(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &DAT_0081fdc8;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0;
  param_1[4] = param_2;
  iVar1 = fn_001283fc();
  return iVar1 + -0x18;
}



void fn_00113340(int *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    *(undefined4 *)(*param_1 + iVar1 * 0x10) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x2a);
  return;
}



undefined4 * fn_001131dc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  puVar8 = param_1 + 1;
  *param_1 = &DAT_0081ec3c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  local_20 = 0x14;
  if ((uint)((int)(param_1[3] - param_1[1]) >> 2) < 0x14) {
    uVar9 = (int)(param_1[2] - param_1[1]) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x15) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar7 = (undefined4 *)param_1[2];
    puVar2 = puVar1;
    for (puVar6 = (undefined4 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[2] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[2]);
    }
    fn_001008c4(uVar3,(int)(param_1[3] - uVar3) >> 2,0);
    uVar4 = *puVar8;
    param_1[1] = puVar1;
    param_1[2] = (param_1[2] - uVar4 & 0xfffffffc) + (int)puVar1;
    param_1[3] = puVar1 + uVar9;
  }
  return param_1;
}


