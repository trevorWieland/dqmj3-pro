#include "006a9e9c_006aa580.h"



undefined4 fn_006aa580(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (*(char *)(*(int *)(param_1 + 400) + 0x3c) == '\0') {
    iVar2 = fn_006a9938(param_1);
    if ((iVar2 != 0) || (iVar2 = fn_006a99b0(param_1), uVar1 = 0, iVar2 != 0)) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006aa538(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_2 == -1 || param_2 == 4) || (*(int *)(param_1 + param_2 * 4 + 0x1f8) == 0)) ||
     (iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(iVar1 + 0x1c);
  }
  return iVar1;
}



int fn_006aa52c(int param_1)

{
  int iVar1;
  
  iVar1 = (int)*(char *)(param_1 + 0x208);
  if (((iVar1 == -1 || iVar1 == 4) || (*(int *)(param_1 + iVar1 * 4 + 0x1f8) == 0)) ||
     (iVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc)), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(iVar1 + 0x1c);
  }
  return iVar1;
}



bool fn_006aa490(int param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 0x22d);
  bVar2 = *(char *)(param_1 + 0x1b1) == '\0' &&
          ((cVar1 != '\a' && cVar1 != '\x02') && 1 < *(byte *)(DAT_008977e0 + 0x170));
  if ((cVar1 == '\x06') || ((cVar1 == '\v' && (*(int *)(param_1 + 0x438) != 5)))) {
    bVar2 = false;
  }
  iVar3 = *(int *)(param_1 + 0x30c);
  bVar4 = iVar3 == -1;
  if (bVar4) {
    iVar3 = *(int *)(param_1 + 0x308);
  }
  if (!bVar4 || iVar3 != -1) {
    bVar2 = false;
  }
  if (*(char *)(param_1 + 0x261) != '\0') {
    bVar2 = false;
  }
  if (*(char *)(param_1 + 0x3e1) == '\0') {
    bVar2 = false;
  }
  return bVar2;
}



undefined4 fn_006aa334(int param_1)

{
  return *(undefined4 *)(param_1 + *(char *)(param_1 + 0x208) * 4 + 0x1f8);
}



undefined4 fn_006aa2ec(int param_1)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x208) == -1) ||
     ((iVar1 = fn_006aa6ec(param_1,0xffffffff), iVar1 != 0 && (*(char *)(param_1 + 0x3e2) != '\0'))
     )) {
    return 1;
  }
  return 0;
}



undefined4 fn_006aa22c(int param_1,float *param_2)

{
  float in_s0;
  float fVar1;
  
  fVar1 = *param_2 - *(float *)(param_1 + 0x20);
  if (fVar1 != 0.0 || (fVar1 != 0.0 || param_2[2] - *(float *)(param_1 + 0x28) != 0.0)) {
    fn_00525bd0();
    fVar1 = fVar1 * 0.024543693 - *(float *)(param_1 + 0x30);
    fn_005df8f8();
    if ((in_s0 < fVar1) || (fVar1 < -in_s0)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006aa190(int param_1,int param_2)

{
  float in_s0;
  float fVar1;
  
  fVar1 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  if (fVar1 != 0.0 ||
      (fVar1 != 0.0 || *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28) != 0.0)) {
    fn_00525bd0();
    fVar1 = fVar1 * 0.024543693 - *(float *)(param_1 + 0x30);
    fn_005df8f8();
    if ((in_s0 < fVar1) || (fVar1 < -in_s0)) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006aa0fc(int param_1,int param_2)

{
  undefined4 uVar1;
  float in_s0;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 0x20) - *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  if ((fVar4 == 0.0 && (fVar4 == 0.0 && fVar3 == 0.0)) ||
     (fVar2 = *(float *)(*(int *)(param_1 + 0x100) + 0xc) +
              *(float *)(*(int *)(param_2 + 0x100) + 0xc) + in_s0,
     fVar4 * fVar4 + fVar3 * fVar3 <= fVar2 * fVar2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006a9eb4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined1 local_58 [16];
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float fStack_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  
  fVar6 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar4 = *(float *)(param_1 + 0x30) * 40.743664;
  fVar9 = *(float *)(param_1 + 0x34) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar7 = ABS(fVar4);
  fVar5 = ABS(fVar9);
  for (fVar8 = ABS(fVar6); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar8,3);
  uVar11 = VectorFloatToUnsigned(fVar7,3);
  uVar3 = uVar10 & 0xff;
  uVar12 = VectorFloatToUnsigned(fVar5,3);
  uVar2 = uVar11 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar10 = uVar12 & 0xff;
  fVar15 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar8 - fVar14) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar14 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar8 - fVar14) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_20 = (float)(&DAT_007d6f24)[uVar2 * 4] +
             (fVar7 - fVar16) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar7 - fVar16) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if (fVar6 < 0.0) {
    fVar13 = -fVar13;
  }
  fVar7 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar5 - fVar15) * (float)(&DAT_007d6f28)[uVar10 * 4]
  ;
  fVar5 = (float)(&DAT_007d6f24)[uVar10 * 4] + (fVar5 - fVar15) * (float)(&DAT_007d6f2c)[uVar10 * 4]
  ;
  if (fVar4 < 0.0) {
    fVar8 = -fVar8;
  }
  if (fVar9 < 0.0) {
    fVar7 = -fVar7;
  }
  local_48 = fVar5 * local_20;
  local_38 = fVar7 * local_20;
  local_24 = fVar13 * local_20;
  local_20 = fVar14 * local_20;
  local_28 = -fVar8;
  local_44 = fVar13 * fVar5 * fVar8 - fVar14 * fVar7;
  local_30 = fVar14 * fVar7 * fVar8 - fVar13 * fVar5;
  local_40 = fVar13 * fVar7 + fVar14 * fVar5 * fVar8;
  fStack_34 = fVar14 * fVar5 + fVar13 * fVar7 * fVar8;
  local_3c = 0;
  local_2c = 0;
  local_1c = 0;
  fn_0016947c(local_58,&local_48,*(undefined4 *)(param_1 + 0x100));
  fn_0065fdd0(*(undefined4 *)(param_1 + 0x164));
  return;
}



void fn_006a9e9c(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float fVar11;
  undefined4 uVar12;
  float fVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_58 [16];
  float fStack_48;
  float fStack_44;
  float fStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  
  puVar2 = *(undefined4 **)(param_1 + 0x100);
  uVar7 = *param_2;
  uVar10 = param_2[1];
  uVar12 = param_2[2];
  puVar2[3] = in_s0;
  *puVar2 = uVar7;
  puVar2[1] = uVar10;
  puVar2[2] = uVar12;
  fVar8 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar5 = *(float *)(param_1 + 0x30) * 40.743664;
  fVar13 = *(float *)(param_1 + 0x34) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar9 = ABS(fVar5);
  fVar6 = ABS(fVar13);
  for (fVar11 = ABS(fVar8); 0x477fffff < (int)fVar11; fVar11 = fVar11 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar14 = VectorFloatToUnsigned(fVar11,3);
  uVar15 = VectorFloatToUnsigned(fVar9,3);
  uVar4 = uVar14 & 0xff;
  uVar16 = VectorFloatToUnsigned(fVar6,3);
  uVar3 = uVar15 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar20 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar14 = uVar16 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar17 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar11 - fVar18) * (float)(&DAT_007d6f28)[uVar4 * 4]
  ;
  fVar18 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar11 - fVar18) * (float)(&DAT_007d6f2c)[uVar4 * 4]
  ;
  fStack_20 = (float)(&DAT_007d6f24)[uVar3 * 4] +
              (fVar9 - fVar20) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  fVar11 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar9 - fVar20) * (float)(&DAT_007d6f28)[uVar3 * 4];
  if (fVar8 < 0.0) {
    fVar17 = -fVar17;
  }
  fVar9 = (float)(&DAT_007d6f20)[uVar14 * 4] + (fVar6 - fVar19) * (float)(&DAT_007d6f28)[uVar14 * 4]
  ;
  fVar6 = (float)(&DAT_007d6f24)[uVar14 * 4] + (fVar6 - fVar19) * (float)(&DAT_007d6f2c)[uVar14 * 4]
  ;
  if (fVar5 < 0.0) {
    fVar11 = -fVar11;
  }
  if (fVar13 < 0.0) {
    fVar9 = -fVar9;
  }
  fStack_48 = fVar6 * fStack_20;
  fStack_38 = fVar9 * fStack_20;
  fStack_24 = fVar17 * fStack_20;
  fStack_20 = fVar18 * fStack_20;
  fStack_28 = -fVar11;
  fStack_44 = fVar17 * fVar6 * fVar11 - fVar18 * fVar9;
  fStack_30 = fVar18 * fVar9 * fVar11 - fVar17 * fVar6;
  fStack_40 = fVar17 * fVar9 + fVar18 * fVar6 * fVar11;
  fStack_34 = fVar18 * fVar6 + fVar17 * fVar9 * fVar11;
  uStack_3c = 0;
  uStack_2c = 0;
  uStack_1c = 0;
  fn_0016947c(auStack_58,&fStack_48,*(undefined4 *)(param_1 + 0x100));
  fn_0065fdd0(*(undefined4 *)(param_1 + 0x164));
  return;
}


