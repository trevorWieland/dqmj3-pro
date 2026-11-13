#include "003794bc_00379d24.h"



/* WARNING: Removing unreachable block (ram,0x002298c4) */

void fn_00379d24(int *param_1)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  
  fn_001da0b0();
  iVar2 = fn_006a9948(param_1);
  if (iVar2 == 0) {
    param_1[0x4e] = param_1[0x4e] & 0xfffffff7U | 2;
                    /* WARNING: Could not recover jumptable at 0x00379d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
  (**(code **)(param_1[0x67] + 0xc))(param_1 + 0x67);
  *(undefined1 *)((int)param_1 + 0x1a1) = 1;
  uVar3 = param_1[0x6a];
  if ((int)uVar3 < 0) {
    return;
  }
  if (uVar3 < 0x60) {
    pbVar1 = (byte *)(*(int *)(*(int *)(DAT_00897804 + 0x14) + 4) +
                     ((int)(uVar3 + ((uint)((int)uVar3 >> 0x1f) >> 0x1d)) >> 3) + 0x898);
    *pbVar1 = *pbVar1 | (byte)(1 << ((int)uVar3 % 8 & 0xffU));
    return;
  }
  return;
}



void fn_00379c9c(int *param_1,byte param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  cVar1 = *(char *)((int)param_1 + 0x1a1);
  if (cVar1 != '\x01') {
    param_2 = *(byte *)(param_1 + 0x4e);
  }
  if (cVar1 == '\x01' || (param_2 & 2) == 0) {
    fn_00210f78(param_1);
    return;
  }
  if (cVar1 != '\x02') {
    return;
  }
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar3 = (**(code **)(*piVar2 + 0x3c))();
  if (iVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00379d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0xd8))(param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00379cf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xd8))(param_1);
  return;
}



void fn_00379c5c(undefined4 *param_1)

{
  *param_1 = &DAT_00828c20;
  if ((int *)param_1[0x71] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x71] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00379bb4(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)fn_00211c48(param_1,0x24);
  *puVar2 = &DAT_00828c20;
  uVar4 = param_2[1];
  uVar5 = param_2[2];
  puVar2[0x67] = *param_2;
  puVar2[0x68] = uVar4;
  puVar2[0x69] = uVar5;
  uVar4 = param_3[1];
  uVar5 = param_3[2];
  puVar2[0x6a] = *param_3;
  puVar2[0x6b] = uVar4;
  puVar2[0x6c] = uVar5;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar1 = DAT_008f9e34;
  uVar5 = DAT_008f9e30;
  uVar4 = DAT_008f9e2c;
  puVar2[0x70] = 0xffffffff;
  puVar2[0x6d] = uVar4;
  puVar2[0x6e] = uVar5;
  puVar2[0x6f] = uVar1;
  puVar2[0x71] = 0;
  return puVar2;
}



undefined4 fn_00379b04(int *param_1)

{
  int iVar1;
  
  if ((char)param_1[0x16] == '\0') {
    return 0;
  }
  iVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1[0x70] != -1) {
    iVar1 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c));
    if (iVar1 == 0) {
      return 1;
    }
    if (param_1[0x70] != -1) {
      (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
      param_1[0x70] = -1;
    }
  }
  iVar1 = fn_0023de00(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7551);
  param_1[0x70] = iVar1;
  return 1;
}



undefined4 fn_003798c4(int *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  float local_48;
  int local_44;
  float local_3c [4];
  int iStack_2c;
  int iStack_28;
  
  uVar1 = fn_002113c8();
  local_4c = param_1[0x67];
  piVar2 = param_1 + 0x68;
  if ((float)param_1[0x6b] < (float)param_1[0x68]) {
    piVar2 = param_1 + 0x6b;
  }
  local_44 = param_1[0x69];
  local_48 = (float)*piVar2;
  (**(code **)(*param_1 + 0x10))(param_1,&local_4c);
  fVar4 = (float)param_1[0x6a] - (float)param_1[0x67];
  fn_00525bd0();
  iVar5 = 0;
  fVar4 = fVar4 * 0.024543693 - 1.5707964;
  fn_005df8f8();
  local_4c = iVar5;
  local_48 = fVar4;
  local_44 = iVar5;
  (**(code **)(*param_1 + 0x14))(param_1,&local_4c);
  fVar4 = (float)param_1[0x6a] - (float)param_1[0x67];
  fVar6 = (float)param_1[0x6c] - (float)param_1[0x69];
  fn_001a4a80();
  fn_001a4a80();
  fVar7 = 0.1;
  fVar4 = SQRT(fVar4 + fVar6);
  local_3c[0] = fVar4 / DAT_008c8e3c + 0.1;
  local_3c[1] = 1.0;
  local_3c[2] = 1.0;
  (**(code **)(*param_1 + 0x18))(param_1,local_3c);
  fn_003794bc(param_1);
  iVar5 = param_1[0xb];
  local_54 = param_1[0xc];
  local_50 = param_1[0xd];
  local_58 = iVar5;
  fn_00163890();
  local_58 = iVar5;
  fn_00163890();
  fn_00163890();
  iStack_2c = param_1[0xf];
  iStack_28 = param_1[0x10];
  local_3c[3] = fVar7 + fVar4 * 0.5;
  uVar3 = fn_006f72b4(DAT_008977e0);
  fn_0021d190(uVar3,param_1 + 8,&local_58,local_3c + 3);
  (**(code **)(*param_1 + 0x54))(param_1,1);
  (**(code **)(*param_1 + 0x58))(param_1,0);
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  fn_001dbc64(param_1,0);
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7551);
  return uVar1;
}



void fn_00379880(int param_1)

{
  if (*(int *)(param_1 + 0x1c0) != -1) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    *(undefined4 *)(param_1 + 0x1c0) = 0xffffffff;
  }
  fn_001d9f9c(param_1);
  return;
}



bool fn_003797cc(int param_1,int *param_2)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 0x58) == '\0') ||
     ((((iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 1 &&
        (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 2)) &&
       (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 3)) &&
      ((iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 5 &&
       (iVar1 = (**(code **)(*param_2 + 0x50))(param_2), iVar1 != 6)))))) {
    return false;
  }
  iVar1 = fn_0065fd34(*(undefined4 *)(param_1 + 0x1c4),param_2[0x59],param_1 + 0x1b4);
  return iVar1 != 0;
}



void fn_003794bc(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_78;
  float local_74;
  float local_70;
  float local_68;
  float local_64;
  float local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_4c;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float fStack_34;
  float fStack_30;
  float local_28;
  float local_24;
  float fStack_20;
  
  if (*(int *)(param_1 + 0x1c4) == 0) {
    iVar2 = fn_00145b00(0xfc,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_0065fdf0();
    }
    piVar4 = *(int **)(param_1 + 0x1c4);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0x1c4) = piVar3;
    }
  }
  local_78 = DAT_008c8e30 * *(float *)(param_1 + 0x38);
  local_74 = DAT_008c8e34 * *(float *)(param_1 + 0x3c);
  local_70 = DAT_008c8e38 * *(float *)(param_1 + 0x40);
  fVar10 = *(float *)(param_1 + 0x2c) * 40.743664;
  fVar8 = *(float *)(param_1 + 0x30) * 40.743664;
  fVar12 = *(float *)(param_1 + 0x34) * 40.743664;
  uVar1 = in_fpscr & 0xfffffff;
  fVar9 = ABS(fVar8);
  fVar7 = ABS(fVar12);
  for (fVar11 = ABS(fVar10); 0x477fffff < (int)fVar11; fVar11 = fVar11 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  uVar13 = VectorFloatToUnsigned(fVar11,3);
  uVar14 = VectorFloatToUnsigned(fVar9,3);
  uVar6 = uVar13 & 0xff;
  uVar15 = VectorFloatToUnsigned(fVar7,3);
  fVar17 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar5 = uVar14 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar14 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar13 = uVar15 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar16 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar11 - fVar17) * (float)(&DAT_007d6f28)[uVar6 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar11 - fVar17) * (float)(&DAT_007d6f2c)[uVar6 * 4]
  ;
  local_40 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar9 - fVar18) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar11 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar9 - fVar18) * (float)(&DAT_007d6f28)[uVar5 * 4];
  if (fVar10 < 0.0) {
    fVar16 = -fVar16;
  }
  fVar9 = (float)(&DAT_007d6f20)[uVar13 * 4] + (fVar7 - fVar19) * (float)(&DAT_007d6f28)[uVar13 * 4]
  ;
  fVar7 = (float)(&DAT_007d6f24)[uVar13 * 4] + (fVar7 - fVar19) * (float)(&DAT_007d6f2c)[uVar13 * 4]
  ;
  if (fVar8 < 0.0) {
    fVar11 = -fVar11;
  }
  if (fVar12 < 0.0) {
    fVar9 = -fVar9;
  }
  local_68 = fVar7 * local_40;
  local_58 = fVar9 * local_40;
  local_44 = fVar16 * local_40;
  local_40 = fVar17 * local_40;
  local_48 = -fVar11;
  local_60 = fVar16 * fVar9 + fVar17 * fVar7 * fVar11;
  local_54 = fVar17 * fVar7 + fVar16 * fVar9 * fVar11;
  local_64 = fVar16 * fVar7 * fVar11 - fVar17 * fVar9;
  local_50 = fVar17 * fVar9 * fVar11 - fVar16 * fVar7;
  local_5c = 0;
  local_4c = 0;
  local_3c = 0;
  fn_0016947c(&local_38,&local_68,&local_78);
  local_28 = *(float *)(param_1 + 0x20) + local_38;
  fStack_20 = *(float *)(param_1 + 0x28) + fStack_30;
  local_24 = *(float *)(param_1 + 0x24) + fStack_34;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1c4),&DAT_008c8e30,param_1 + 0x38,param_1 + 0x2c,
               &local_28);
  return;
}


