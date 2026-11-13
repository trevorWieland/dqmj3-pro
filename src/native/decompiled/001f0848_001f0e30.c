#include "001f0848_001f0e30.h"



void fn_001f0e30(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  param_1 = param_1 + param_2 * 0x2c;
  if ((((*(char *)(param_1 + 0x9c) == '\0') &&
       (iVar1 = fn_003035b0(param_3,DAT_00892258), iVar1 != 0)) || ((int)param_2 < 0)) ||
     ((0x4f < param_2 || (iVar1 = *(int *)(param_1 + 0x8c), iVar1 == 0)))) {
    return;
  }
  fn_001da54c(iVar1,*(undefined4 *)(iVar1 + 0xe4),param_3,param_4);
  return;
}



void fn_001f0dc4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_0015b054();
  uVar2 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) &&
     (iVar1 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_2), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar2 = fn_0025f9d8(DAT_00897800,uVar2,param_2);
  fn_0015b0dc(uVar2);
  return;
}



void fn_001f0d74(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar2 == 0) {
    return;
  }
  iVar1 = fn_006f7a84(DAT_008977e0);
  fn_001c72c0(iVar2,iVar1 + 0x20);
  return;
}



undefined4 fn_001f0a7c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_1a0 [128];
  undefined1 auStack_120 [128];
  undefined1 auStack_a0 [128];
  
  uVar3 = *(undefined4 *)(param_1 + 0x10);
  fn_0011d1bc(uVar3);
  fn_001ec69c(param_1,uVar3);
  *(undefined4 *)(param_1 + 0xe58) = param_2;
  fn_00101a50(auStack_1a0,0x40,L"rom:/data/Script/Field/Demo/demo%03d/demo%03d.nut",param_2,param_2
              );
  iVar1 = fn_006a8cbc(param_1,L"rom:/data/Script/Field/Demo/demoCommon.nut",(char *)&DAT_001f0c18);
  uVar3 = 0;
  if ((iVar1 != 0) && (iVar1 = fn_006a8cbc(param_1,auStack_1a0,(char *)&DAT_001f14b4), uVar3 = 0, iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    fn_00101a50(auStack_120,0x40,L"rom:/data/Script/Field/Demo/demo%03d/demo%03d.bin",
                 *(undefined4 *)(param_1 + 0xe58),*(undefined4 *)(param_1 + 0xe58));
    uVar3 = fn_001287b4();
    iVar1 = fn_0011c184(auStack_120,uVar3,0x80,5);
    *(int *)(param_1 + 0x74) = iVar1;
    if ((iVar1 != 0) && (iVar1 = fn_00145ac0(), iVar1 != 0)) {
      iVar1 = *(int *)(param_1 + 0x78);
      uVar3 = fn_00145ac0(*(undefined4 *)(param_1 + 0x74));
      *(undefined4 *)(iVar1 + 4) = uVar3;
    }
    fn_00101a50(auStack_a0,0x40,L"rom:/data/Script/Field/Demo/demo%03d/demo%03d.mes",
                 *(undefined4 *)(param_1 + 0xe58),*(undefined4 *)(param_1 + 0xe58));
    if (0 < *(int *)(param_1 + 0x80)) {
      fn_0025fa58(DAT_00897800);
      *(undefined4 *)(param_1 + 0x80) = 0;
    }
    uVar3 = fn_001287b4();
    uVar3 = fn_0011c184(auStack_a0,uVar3,0x80,5);
    iVar1 = fn_00145ac0();
    if (iVar1 != 0) {
      uVar2 = fn_00121838(DAT_00897800,auStack_a0,1);
      *(undefined4 *)(param_1 + 0x80) = uVar2;
    }
    fn_0012d73c(uVar3);
    fn_00698fb8(DAT_008977e0,1);
    uVar3 = 1;
  }
  return uVar3;
}



void fn_001f091c(int *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  
  uVar2 = fn_006bb28c(param_1[0x3a0],param_1[0x396]);
  uVar3 = fn_006abf40(param_1,uVar2);
  if ((uVar3 < 0xfffffffe) && (uVar3 != 0 && uVar3 != 0xfffffffd)) {
    uVar3 = 0;
  }
  param_1[0x39d] = uVar3;
  local_44 = *(undefined4 *)(DAT_008977e0 + 0x1e4);
  uStack_40 = *(undefined4 *)(DAT_008977e0 + 0x1e8);
  uStack_3c = *(undefined4 *)(DAT_008977e0 + 0x1ec);
  uStack_38 = *(undefined4 *)(DAT_008977e0 + 0x1f0);
  uStack_34 = *(undefined4 *)(DAT_008977e0 + 500);
  uStack_30 = *(undefined4 *)(DAT_008977e0 + 0x1f8);
  uStack_2c = *(undefined4 *)(DAT_008977e0 + 0x1fc);
  local_28 = *(undefined4 *)(DAT_008977e0 + 0x200);
  local_24 = *(undefined4 *)(DAT_008977e0 + 0x204);
  local_20 = *(undefined4 *)(DAT_008977e0 + 0x208);
  local_1c = *(int *)(DAT_008977e0 + 0x20c);
  local_18 = *(undefined4 *)(DAT_008977e0 + 0x210);
  uStack_14 = *(undefined4 *)(DAT_008977e0 + 0x214);
  local_48 = param_1[0x397];
  fn_006f77d4(DAT_008977e0,&local_48,local_48,local_48,(int)(char)local_20);
  *(char *)(param_1 + 0x39e) = (char)local_20;
  param_1[0x39f] = local_1c;
  iVar4 = param_1[0x39d];
  if (iVar4 == -3) {
    (**(code **)(*param_1 + 0x24))(param_1,param_2);
    param_1[0x39d] = 0;
    return;
  }
  if (iVar4 != -2) {
    if (iVar4 == -1) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (iVar4 != 0) {
      return;
    }
    cVar1 = fn_00682c34();
    local_18 = fn_006afd2c(*(undefined4 *)(DAT_008977e0 + 0x1c),local_48,(int)cVar1,
                            (int)(char)local_20);
    iVar4 = fn_006f612c(*(undefined4 *)(DAT_008977e0 + 0x3c),&local_48);
    if (iVar4 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0x24))(param_1,param_2);
  return;
}



void fn_001f08e4(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 in_lr;
  undefined8 uVar5;
  
  puVar4 = *(undefined4 **)(DAT_00897804 + 0x28);
  uVar1 = fn_00229714(puVar4,1);
  uVar5 = fn_0077f194(uVar1,*puVar4,100,param_4,unaff_r4,in_lr);
  iVar3 = (int)((ulonglong)uVar5 >> 0x20);
  piVar2 = (int *)uVar5;
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
  }
  if (piVar2 != (int *)0x0 && iVar3 != 0) {
    *(undefined1 *)(piVar2 + 2) = param_2;
    fn_0024e8c4(piVar2,0);
    return;
  }
  return;
}



void fn_001f08c4(void)

{
  int *piVar1;
  
  if (*(int *)(DAT_00897804 + 0x68) == 0) {
    return;
  }
  piVar1 = *(int **)(*(int *)(DAT_00897804 + 0x68) + 4);
  if ((piVar1 != (int *)0x0) && (*piVar1 < 999999)) {
    *piVar1 = *piVar1 + 1;
  }
  return;
}



void fn_001f0898(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18a) = param_3;
  }
  return;
}



void fn_001f0848(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float local_88;
  float local_84;
  float local_80;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float local_60;
  float fStack_5c;
  float fStack_58;
  float local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float fStack_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  piVar4 = *(int **)(param_1 + param_2 * 0x2c + 0x8c);
  if (piVar4 == (int *)0x0) {
    return;
  }
  iVar1 = fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar4 + 200))(piVar4,0);
  fn_006f7a84(DAT_008977e0);
  fn_001ea9c0();
  piVar4[0x5f] = piVar4[0xc];
  if (*(char *)((int)piVar4 + 0x189) == '\0') {
    piVar4[0x60] = piVar4[0xc];
  }
  else {
    fVar6 = *(float *)(iVar1 + 0x20) - (float)piVar4[8];
    fn_00525bd0();
    piVar4[0x60] = (int)(fVar6 * 0.024543693);
    piVar4[0xc] = (int)(fVar6 * 0.024543693);
    (**(code **)(*piVar4 + 0x44))(piVar4,9,4,0);
  }
  piVar4[0x6a] = 0;
  piVar4[0x6b] = 4;
  if ((char)piVar4[99] != '\x01') {
    return;
  }
  fn_006f6628(piVar4,&local_78);
  local_48 = local_78 + local_54;
  fStack_44 = local_74 + local_50;
  fStack_40 = local_70 + fStack_4c;
  local_88 = local_60;
  local_84 = fStack_5c;
  local_80 = fStack_58;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar8 = ABS(fStack_68 * 40.743664);
  fVar7 = ABS(fStack_64 * 40.743664);
  for (fVar6 = ABS(local_6c * 40.743664); 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar9 = VectorFloatToUnsigned(fVar6,3);
  uVar10 = VectorFloatToUnsigned(fVar8,3);
  uVar11 = VectorFloatToUnsigned(fVar7,3);
  uVar5 = uVar10 & 0xff;
  uVar2 = uVar9 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar9 = uVar11 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar15 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  local_10 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar8 - fVar12) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar6 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar8 - fVar12) * (float)(&DAT_007d6f28)[uVar5 * 4];
  if (local_6c * 40.743664 < 0.0) {
    fVar13 = -fVar13;
  }
  fVar12 = (float)(&DAT_007d6f20)[uVar9 * 4] + (fVar7 - fVar15) * (float)(&DAT_007d6f28)[uVar9 * 4];
  fVar8 = (float)(&DAT_007d6f24)[uVar9 * 4] + (fVar7 - fVar15) * (float)(&DAT_007d6f2c)[uVar9 * 4];
  if (fStack_68 * 40.743664 < 0.0) {
    fVar6 = -fVar6;
  }
  if (fStack_64 * 40.743664 < 0.0) {
    fVar12 = -fVar12;
  }
  local_38 = fVar8 * local_10;
  local_18 = -fVar6;
  local_28 = fVar12 * local_10;
  local_14 = fVar13 * local_10;
  local_10 = fVar14 * local_10;
  local_34 = fVar13 * fVar8 * fVar6 - fVar14 * fVar12;
  local_20 = fVar14 * fVar12 * fVar6 - fVar13 * fVar8;
  local_30 = fVar13 * fVar12 + fVar14 * fVar8 * fVar6;
  fStack_24 = fVar14 * fVar8 + fVar13 * fVar12 * fVar6;
  local_2c = 0;
  local_1c = 0;
  fn_0016947c(&local_88,&local_38);
  local_88 = local_88 + local_78;
  local_84 = local_84 + local_74;
  local_80 = local_80 + local_70;
  uVar3 = fn_006f7a5c(DAT_008977e0);
  fn_001d6a64(uVar3,&local_48,&local_88);
  piVar4 = (int *)fn_006f7a84(DAT_008977e0);
  (**(code **)(*piVar4 + 0x54))(piVar4,0);
  return;
}


