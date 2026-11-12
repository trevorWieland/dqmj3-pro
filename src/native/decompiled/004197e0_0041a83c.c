#include "004197e0_0041a83c.h"



void fn_0041a83c(int *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined1 auStack_50 [68];
  
  (**(code **)(*param_1 + 0x11c))(param_1);
  iVar1 = param_1[0x27];
  if (*(char *)(iVar1 + 0x7c) == '\0') {
    puVar2 = &DAT_0041a978;
  }
  else {
    puVar2 = (undefined *)fn_0022f584((char *)&DAT_0041a97c,0);
  }
  fn_00101a50(auStack_50,0x40,L"%ls%ls",puVar2,iVar1 + 0x1c);
  fn_00385b60(param_1,auStack_50);
  fn_0031c7d0(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f5));
  fn_0031ca5c(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f6));
  fn_0031c040(param_1[0x25],(int)*(char *)(param_1[0x27] + 0x8f7));
  fn_00290aa4(param_1[0x28]);
  fn_00290ae4(param_1[0x28],*(undefined1 *)(param_1[0x27] + 0x76));
  return;
}



void fn_0041a80c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0041a9e4(iVar1,param_1);
  return;
}



int fn_0041a6ec(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined1 auStack_58 [68];
  
  puVar5 = *(undefined4 **)(param_1 + 0x98);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_0041a734;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_0041a734:
  *(undefined4 **)(param_1 + 0x9c) = puVar5;
  iVar2 = fn_003fcd9c(param_1);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (*(char *)(iVar3 + 0x7c) == '\0') {
      puVar4 = &DAT_0041a978;
    }
    else {
      puVar4 = (undefined *)fn_0022f584((char *)&DAT_0041a97c,0);
    }
    fn_00101a50(auStack_58,0x40,L"%ls%ls",puVar4,iVar3 + 0x1c);
    fn_00385b60(param_1,auStack_58);
    fn_0031c7d0(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f5));
    fn_0031ca5c(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f6));
    fn_0031c040(*(undefined4 *)(param_1 + 0x94),(int)*(char *)(*(int *)(param_1 + 0x9c) + 0x8f7));
  }
  fn_00290ae4(*(undefined4 *)(param_1 + 0xa0),*(undefined1 *)(*(int *)(param_1 + 0x9c) + 0x76));
  return iVar2;
}



void fn_0041a6c8(int param_1)

{
  fn_00290aa4(*(undefined4 *)(param_1 + 0xa0));
  fn_003fcd98(param_1);
  *(undefined4 *)(param_1 + 0x9c) = 0;
  return;
}



undefined4 * fn_0041a52c(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_003bba60();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0083982c;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  fn_0031ca98(puVar1,DAT_008940fc,DAT_00894100,DAT_00894104);
  piVar4 = *(int **)(puVar1[0x1d] + 0x10);
  piVar2 = (int *)fn_00172c98(puVar1[0x1d],(char *)&DAT_0041a698);
  uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_0041a6a4,1);
  puVar1[0x2b] = uVar3;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,DAT_00894138,1);
  puVar1[0x2c] = uVar3;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,DAT_0089413c,1);
  puVar1[0x2d] = uVar3;
  uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,DAT_00894140,1);
  puVar1[0x2e] = uVar3;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_00894144,1);
  puVar1[0x2f] = uVar3;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_00894148,1);
  puVar1[0x30] = uVar3;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_0089414c,1);
  puVar1[0x31] = uVar3;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_00894150,1);
  puVar1[0x32] = uVar3;
  uVar3 = (**(code **)(*piVar4 + 0x2c))(piVar4,DAT_00894154,1);
  puVar1[0x33] = uVar3;
  return puVar1;
}



void fn_0041a504(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar2 = fn_003dd794(*(undefined4 *)(param_1 + 0x9c));
  if (iVar2 != 0) {
    fn_0041a024(param_1);
  }
  if (0 < *(int *)(*(int *)(param_1 + 0x78) + 0x1c)) {
    fn_006890bc(*(undefined4 *)(param_1 + 0x78));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
    iVar2 = *(int *)(param_1 + 0x78);
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    iVar1 = *(int *)(iVar1 + 0x10);
    uVar3 = *(undefined4 *)(iVar2 + 8);
    uVar4 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(iVar2 + 4);
    *(undefined4 *)(iVar1 + 0x20) = uVar3;
    *(undefined4 *)(iVar1 + 0x24) = uVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  if (*(int **)(param_1 + 0x94) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0022cf84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x94) + 0x14))();
  return;
}



undefined4 fn_00419f80(undefined4 param_1)

{
  fn_00121838(DAT_00897800,DAT_0089878c,1);
  fn_00121838(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",1);
  fn_00121838(DAT_00897800,DAT_00898794,1);
  fn_0041a024(param_1);
  return 1;
}



void fn_00419f28(undefined4 param_1)

{
  fn_001218d4(DAT_00897800,DAT_0089878c);
  fn_001218d4(DAT_00897800,DAT_00898794);
  fn_001218d4(DAT_00897800,L"rom:/data/Message/DiscMessage.mes");
  fn_0022ccb4(param_1);
  return;
}



void fn_00419ec4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008396cc;
  uVar1 = param_1[0x33];
  uVar2 = uVar1;
  if ((uint)param_1[0x34] < uVar1) {
    do {
      uVar2 = uVar2 + 0x10;
    } while (uVar2 != param_1[0x34]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x35] - uVar1) >> 4,0);
  fn_003966bc(param_1);
  fn_002feef8();
  return;
}



void fn_00419aac(undefined4 param_1)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_00419810(int *param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  undefined4 *local_18 [2];
  
  iVar5 = (**(code **)(*param_1 + 0x154))(param_1);
  if (iVar5 == 0) {
    iVar5 = fn_006ba284(param_1);
    iVar1 = fn_006ba274(param_1);
    uVar2 = iVar5 * iVar1 + param_2;
    if (((int)uVar2 < 0) || ((uint)(param_1[0x34] - param_1[0x33] >> 4) <= uVar2)) {
      iVar5 = 0;
    }
    else {
      iVar5 = param_1[0x33] + uVar2 * 0x10;
    }
    uVar3 = fn_0036bb90((int)*(short *)(iVar5 + 10),0);
    fn_0068974c(param_1,uVar3,1);
    *(undefined1 *)(param_1 + 0x2f) = 2;
    return;
  }
  local_18[0] = param_4;
  iVar5 = fn_006ba284();
  iVar1 = fn_006ba274(param_1);
  uVar2 = iVar5 * iVar1 + param_2;
  if (((int)uVar2 < 0) || ((uint)(param_1[0x34] - param_1[0x33] >> 4) <= uVar2)) {
    iVar5 = 0;
  }
  else {
    iVar5 = param_1[0x33] + uVar2 * 0x10;
  }
  uVar3 = fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),*(undefined4 *)(iVar5 + 4));
  fn_00231690(local_18,uVar3,0);
  fn_0015b0dc(local_18[0]);
  fn_0015b0dc(local_18[0]);
  uVar3 = fn_0022f584((char *)&DAT_00419700,0);
  fn_0068974c(param_1,uVar3,1);
  *(undefined4 *)(param_1[0x17] + 0x40) = 0;
  *(undefined1 *)(param_1 + 0x2f) = 1;
  if (local_18[0] != &DAT_008f9cf4) {
    piVar4 = local_18[0] + -3;
    iVar5 = *piVar4;
    if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
      fn_001008c4(local_18[0] + -3,local_18[0][-2] + 8,0);
    }
  }
  return;
}



undefined4 * fn_004197e0(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint local_20;
  uint local_1c [3];
  
  iVar1 = fn_00145b00(0xd8,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_00396678(iVar1,param_1);
  puVar2[0x32] = 0;
  *puVar2 = &DAT_008396cc;
  puVar2[0x33] = 0;
  puVar10 = puVar2 + 0x33;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  local_20 = 100;
  if ((uint)((int)(puVar2[0x35] - puVar2[0x33]) >> 4) < 100) {
    uVar11 = (int)(puVar2[0x34] - puVar2[0x33]) >> 4;
    local_1c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_1c[0] < uVar11 + 0x20) {
      local_1c[0] = uVar11 + 0x20;
    }
    puVar7 = local_1c;
    if (local_1c[0] < 0x65) {
      puVar7 = &local_20;
    }
    uVar11 = *puVar7;
    puVar3 = (undefined4 *)fn_00100fc6(uVar11 << 4,0);
    puVar9 = (undefined4 *)puVar2[0x34];
    puVar4 = puVar3;
    for (puVar8 = (undefined4 *)*puVar10; puVar8 != puVar9; puVar8 = puVar8 + 4) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar12 = puVar8[1];
        uVar13 = puVar8[2];
        uVar14 = puVar8[3];
        *puVar4 = *puVar8;
        puVar4[1] = uVar12;
        puVar4[2] = uVar13;
        puVar4[3] = uVar14;
      }
      puVar4 = puVar4 + 4;
    }
    uVar5 = *puVar10;
    uVar6 = uVar5;
    if ((uint)puVar2[0x34] < uVar5) {
      do {
        uVar6 = uVar6 + 0x10;
      } while (uVar6 != puVar2[0x34]);
    }
    fn_001008c4(uVar5,(int)(puVar2[0x35] - uVar5) >> 4,0);
    uVar6 = *puVar10;
    puVar2[0x33] = puVar3;
    puVar2[0x34] = (puVar2[0x34] - uVar6 & 0xfffffff0) + (int)puVar3;
    puVar2[0x35] = puVar3 + uVar11 * 4;
  }
  return puVar2;
}


