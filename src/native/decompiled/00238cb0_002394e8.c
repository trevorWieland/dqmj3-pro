#include "00238cb0_002394e8.h"



undefined4 fn_002394e8(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00239598,4), iVar1 != 0)) {
    psVar4 = (short *)0x0;
  }
  else {
    psVar4 = (short *)(param_1 + 4);
  }
  iVar2 = 0x50;
  iVar3 = 0;
  iVar1 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar2 != 0 || iVar3 != 0) {
    psVar4 = (short *)0x0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    iVar1 = 0;
  }
  DAT_00892454 = psVar4;
  DAT_00892458 = iVar1;
  DAT_00892450 = 0;
  if (0 < iVar1) {
    do {
      if (*psVar4 != 0) {
        DAT_00892450 = DAT_00892450 + 1;
      }
      iVar1 = iVar1 + -1;
      psVar4 = psVar4 + 0x28;
    } while (iVar1 != 0);
  }
  return 1;
}



void fn_00239394(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00145b00(0x361e8,&DAT_00812c8c);
  *(undefined4 *)(param_1 + 4) = uVar1;
  fn_00301f50(uVar1,0x361e8);
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_00315964(iVar2,*(int *)(param_1 + 4) + 8);
  }
  *(undefined4 *)(param_1 + 8) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_0033a0e0(iVar2,*(int *)(param_1 + 4) + 0x298);
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_002d760c(iVar2,*(int *)(param_1 + 4) + 0x1d208);
  }
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_002faa60(iVar2,*(int *)(param_1 + 4) + 0x1da94);
  }
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  iVar2 = fn_00145b00(8,&DAT_00812c8c);
  uVar1 = 0;
  if (iVar2 != 0) {
    uVar1 = fn_00339f6c(iVar2,*(int *)(param_1 + 4) + 0x1ebcc);
  }
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  return;
}



void fn_002392ec(int param_1)

{
  if (*(int **)(param_1 + 0x18) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x18) + 4))();
  }
  *(undefined4 *)(param_1 + 0x18) = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x14) + 4))();
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x10) + 4))();
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  fn_002feef8(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void fn_002390cc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  float in_s0;
  float fVar7;
  float in_s1;
  float fVar8;
  float fVar9;
  float in_s2;
  float fVar10;
  float fVar11;
  float fVar12;
  uint local_88 [3];
  float local_7c;
  float fStack_78;
  float fStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30 [6];
  
  local_34 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0x35);
  uVar1 = fn_0017484c(DAT_008977e4);
  iVar2 = fn_006be4c8(uVar1,&local_34);
  if (*(int *)(param_1 + 8) == 0) {
    iVar5 = 0;
  }
  else {
    local_30[0] = (uint)*(byte *)(*(int *)(param_1 + 8) + 0x35);
    uVar1 = fn_0017484c(DAT_008977e4);
    iVar5 = fn_006be4c8(uVar1,local_30);
  }
  if (iVar2 != 0) {
    local_88[0] = (uint)*(byte *)(iVar2 + 0x35);
    uVar1 = fn_0017484c(DAT_008977e4);
    uVar1 = fn_006be4c8(uVar1,local_88);
    fn_00187f94();
    fn_00204ca4(uVar1);
  }
  if (iVar5 != 0) {
    local_88[0] = (uint)*(byte *)(iVar5 + 0x35);
    uVar1 = fn_0017484c(DAT_008977e4);
    uVar1 = fn_006be4c8(uVar1,local_88);
    fn_00187f94();
    fn_00204ca4(uVar1);
  }
  fn_003a1bc0(param_1);
  local_54 = *(undefined4 *)(iVar2 + 0xc);
  uStack_50 = *(undefined4 *)(iVar2 + 0x10);
  uStack_4c = *(undefined4 *)(iVar2 + 0x14);
  fn_001829a0(iVar2);
  local_60 = in_s0;
  fStack_5c = in_s1;
  fStack_58 = in_s2;
  iVar3 = fn_00174828(DAT_008977e4);
  iVar4 = fn_001748ec(iVar2);
  fVar7 = *(float *)(param_1 + 0xc);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar10 = *(float *)(param_1 + 0x14);
  uStack_70 = *(undefined4 *)(param_1 + 0x18);
  uStack_6c = *(undefined4 *)(param_1 + 0x1c);
  uStack_68 = *(undefined4 *)(param_1 + 0x20);
  uStack_64 = *(undefined4 *)(param_1 + 0x24);
  local_88[0] = (uint)*(char *)(iVar3 + iVar4 * 0x418 + -0x4027);
  local_7c = fVar7;
  fStack_78 = fVar8;
  fStack_74 = fVar10;
  fn_001c2f8c(&local_54,param_1 + 0x48,param_1 + 0x60,&local_7c);
  if (iVar5 != 0) {
    fn_001829a0(iVar2);
    fVar9 = fVar8;
    fVar11 = fVar8;
    fVar12 = fVar10;
    fn_001829a0(iVar5);
    local_60 = (fVar7 + fVar8) * 0.5;
    fStack_5c = (fVar11 + fVar9) * 0.5;
    fStack_58 = (fVar12 + fVar10) * 0.5;
  }
  local_48 = *(undefined4 *)(param_1 + 0x2c);
  puVar6 = (undefined4 *)(param_1 + 0x34);
  local_40 = *(undefined4 *)(param_1 + 0x38);
  uStack_3c = *(undefined4 *)(param_1 + 0x3c);
  uStack_38 = *(undefined4 *)(param_1 + 0x40);
  if (iVar5 == 0) {
    puVar6 = (undefined4 *)(param_1 + 0x30);
    local_48 = *(undefined4 *)(param_1 + 0x28);
  }
  local_44 = *puVar6;
  fn_001c3904(&local_60,param_1 + 0x54,param_1 + 0x6c,&local_48);
  return;
}



void fn_00238fec(undefined4 param_1,undefined4 param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  uVar1 = fn_001287b4();
  iVar2 = fn_0011c184(param_1,uVar1,0x80,5);
  if (iVar2 != 0) {
    iVar3 = fn_00145ac0();
    if (iVar3 == 0) {
      fn_0012d73c(iVar2);
      return;
    }
    fn_005f5f90(auStack_28);
    uVar1 = fn_0012a26c(iVar2);
    uVar4 = fn_00145ac0(iVar2);
    fn_005f5d60(auStack_28,uVar4,uVar1);
    fn_006edec8(auStack_28);
    uVar1 = fn_002fecec();
    *param_3 = uVar1;
    fn_005f5eac(auStack_28,uVar1);
    fn_005f5d98(auStack_28);
    fn_005f601c(auStack_28);
    fn_00118624(auStack_20,*param_3);
    fn_0012d73c(iVar2);
    uVar1 = fn_00176d74(auStack_20,param_2);
    *(undefined4 *)(param_4 + 4) = uVar1;
    fn_005f5d3c(auStack_20);
  }
  return;
}



void fn_00238e44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00205be4();
  puVar1[0x11] = 0;
  *puVar1 = &DAT_0081d0dc;
  puVar1[0x26] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  *(undefined2 *)(puVar1 + 0x2b) = 0;
  *(undefined1 *)((int)puVar1 + 0xae) = 1;
  *(undefined1 *)((int)puVar1 + 0xaf) = 1;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  puVar1[0x13] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  puVar1[0x15] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x17] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1a) = 0;
  puVar1[0x1b] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1c) = 0;
  puVar1[0x1d] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  puVar1[0x1f] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  puVar1[0x21] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  puVar1[0x23] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  puVar1[0x25] = 0xffffffff;
  return;
}



void fn_00238e10(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x30) == 0 && param_2 == 0) {
    return;
  }
  fn_0017fd10(param_1);
  fn_001747e0(param_1);
  return;
}



undefined4 fn_00238cb0(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int *piVar4;
  uint local_18;
  
  param_1[2] = param_2;
  local_18 = param_3;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c,param_3,param_4,param_1,param_2);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar4 = (int *)param_1[1];
  if (piVar4 != piVar2) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    param_1[1] = (int)piVar2;
  }
  iVar1 = fn_0017481c(DAT_008977e4);
  uVar3 = param_1[2];
  if (((int)uVar3 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= uVar3)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + uVar3 * 0x34;
  }
  fn_0069ee38(param_1[1],iVar1,0);
  (**(code **)(*param_1 + 0x1c))(param_1,1);
  (**(code **)(*param_1 + 0x14))(param_1,1);
  if (local_18 != 0xffffffff) {
    fn_0079d450(param_1 + 0x26,&local_18);
    iVar1 = fn_0017481c(DAT_008977e4);
    if (((int)local_18 < 0) ||
       ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= local_18)) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(iVar1 + 4) + local_18 * 0x34;
    }
    fn_0069eb10(param_1[1],iVar1,0);
  }
  return 1;
}


