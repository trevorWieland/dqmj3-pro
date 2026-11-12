#include "00378368_00378bf0.h"



int fn_00378bf0(int param_1)

{
  return (int)*(short *)(DAT_008924c4 + param_1 * 6);
}



void fn_00378bd8(void)

{
  DAT_008924c4 = 0;
  DAT_008924c8 = 0;
  return;
}



int fn_00378bbc(int param_1)

{
  return (int)*(short *)(DAT_008924c4 + param_1 * 6 + 2);
}



int fn_00378ba8(void)

{
  return (int)(short)DAT_008924c8;
}



undefined4 fn_00378b18(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (((param_1 == 0) || (param_4 < (int)(uint)(param_3 == 0))) ||
     (iVar1 = fn_00147e6c(param_1,&DAT_00378b9c,4), iVar1 != 0)) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar1 = 6;
  iVar2 = 0;
  DAT_008924c8 = fn_0011c134(param_3 - 4,param_4 - (uint)(param_3 < 4));
  if (iVar1 != 0 || iVar2 != 0) {
    param_1 = 0;
  }
  if ((int)-(param_4 + (uint)(4 < param_3)) < 0 ==
      (SBORROW4(0,param_4) != SBORROW4(-param_4,(uint)(4 < param_3)))) {
    DAT_008924c8 = 0;
  }
  DAT_008924c4 = param_1;
  return 1;
}



undefined1 fn_00378afc(int param_1)

{
  return *(undefined1 *)(DAT_008924c4 + param_1 * 6 + 4);
}



undefined4 * fn_00378a8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00828b88;
  fn_0028e434(puVar1[4],&DAT_007bcf9c);
  fn_0028e434(puVar1[5],&DAT_007bcfd8);
  fn_0028e434(puVar1[3],&DAT_007bd000);
  fn_0028e434(puVar1[6],&DAT_007bd03c);
  return puVar1;
}



void fn_00378a14(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_001f7624();
  fn_001f748c(param_1,0xa6,1);
  puVar1 = (undefined4 *)fn_001f74f8(param_1,0xa6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890abc) goto LAB_00378a78;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00378a78:
  fn_003f7f24(puVar1,1);
  return;
}



void fn_003789ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_00828b74;
  return;
}



void fn_00378980(undefined4 *param_1)

{
  *param_1 = &DAT_00828b54;
  if (*(char *)(param_1 + 6) == '\x01') {
    fn_001594e4(DAT_008977e4,param_1[5],1);
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
    param_1[5] = 0;
  }
  fn_0033818c(param_1);
  fn_002feef8();
  return;
}



void fn_003786f8(undefined4 param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_38 [32];
  
  fn_00117984();
  fn_0010fa20();
  uVar1 = fn_006eb278();
  fn_001028d4(auStack_38,(char *)&DAT_00378828);
  iVar3 = *param_2;
  uVar2 = fn_002febd8(auStack_38);
  iVar3 = fn_00190fe0(*(int *)(iVar3 + 0x30) + 0x58,auStack_38,uVar2);
  if (iVar3 == 0xffff) {
    fn_001028d4(auStack_38,(char *)&DAT_00378828);
    iVar3 = *param_2;
    uVar2 = fn_002febd8(auStack_38);
    iVar3 = fn_00190fe0(*(int *)(iVar3 + 0x30) + 0x58,auStack_38,uVar2);
  }
  iVar3 = *(int *)(*(int *)(*(int *)(*param_2 + 0x30) + 0x54) + iVar3 * 4);
  uVar1 = fn_005e29c4(uVar1,0);
  fn_005e9048(uVar1,*(char *)(iVar3 + 0x29) == '\x01',*(undefined1 *)(iVar3 + 0x2c),
               *(undefined1 *)(iVar3 + 0x2d),*(undefined1 *)(iVar3 + 0x2e),
               *(undefined1 *)(iVar3 + 0x28));
  return;
}



void fn_00378368(int param_1)

{
  int iVar1;
  float *pfVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  uint in_fpscr;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 uVar25;
  float fVar26;
  
  fn_00338090();
  fVar23 = 0.0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = fVar23;
    DAT_008f9e30 = fVar23;
    DAT_008f9e34 = fVar23;
  }
  uVar25 = CONCAT44(DAT_008f9e2c,DAT_008f9e34);
  fVar26 = DAT_008f9e30;
  iVar1 = fn_00174864(DAT_008977e4);
  iVar1 = fn_00176d68(*(undefined4 *)(iVar1 + 4));
  pfVar2 = (float *)fn_006dcd40();
  fVar10 = *(float *)(iVar1 + 0x58);
  fVar9 = *(float *)(iVar1 + 0x78);
  fVar8 = *pfVar2 - fVar10;
  fVar15 = *(float *)(iVar1 + 0x68);
  fVar18 = pfVar2[2] - fVar9;
  fVar17 = pfVar2[1] - fVar15;
  fVar20 = 1.0 / SQRT(fVar8 * fVar8 + fVar17 * fVar17 + fVar18 * fVar18);
  fVar17 = fVar17 * fVar20 * 1.5;
  fVar24 = fVar10 + fVar8 * fVar20 * 1.5;
  fVar8 = fVar15 + fVar17;
  fVar18 = fVar9 + fVar18 * fVar20 * 1.5;
  fVar10 = fVar10 - fVar24;
  bVar6 = fVar10 == fVar23;
  if (bVar6) {
    fVar17 = fVar15 - fVar8;
  }
  uVar7 = in_fpscr & 0xfffffff | (uint)(bVar6 && fVar17 == fVar23) << 0x1e;
  bVar5 = false;
  if (bVar6) {
    bVar5 = SUB41(uVar7 >> 0x1e,0);
  }
  bVar6 = false;
  if (bVar5) {
    uVar7 = in_fpscr & 0xfffffff | (uint)(fVar9 - fVar18 == fVar23) << 0x1e;
    bVar6 = SUB41(uVar7 >> 0x1e,0);
  }
  if (!bVar6) {
    fVar17 = -(fVar15 - fVar8);
    fn_00525bd0();
    fVar26 = 0.024543693;
    uVar25 = CONCAT44(fVar17 * 0.024543693,(int)uVar25);
    fn_00525bd0();
    fVar26 = fVar10 * fVar26;
  }
  iVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x14));
  fVar15 = (float)((ulonglong)uVar25 >> 0x20) * 40.743664;
  fVar20 = (float)uVar25 * 40.743664;
  uVar7 = uVar7 & 0xfffffff;
  fVar10 = ABS(fVar26 * 40.743664);
  fVar9 = ABS(fVar20);
  for (fVar17 = ABS(fVar15); 0x477fffff < (int)fVar17; fVar17 = fVar17 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar9; fVar9 = fVar9 - 65536.0) {
  }
  uVar11 = VectorFloatToUnsigned(fVar17,3);
  uVar12 = VectorFloatToUnsigned(fVar10,3);
  uVar13 = VectorFloatToUnsigned(fVar9,3);
  uVar4 = uVar12 & 0xff;
  uVar3 = uVar11 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar7 >> 0x16) & 3);
  uVar11 = uVar13 & 0xff;
  fVar19 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar7 >> 0x16) & 3);
  fVar21 = (float)VectorUnsignedToFloat(uVar13 & 0xffff,(byte)(uVar7 >> 0x16) & 3);
  fVar14 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar17 - fVar16) * (float)(&DAT_007d6f28)[uVar3 * 4]
  ;
  fVar22 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar17 - fVar16) * (float)(&DAT_007d6f2c)[uVar3 * 4]
  ;
  fVar16 = (float)(&DAT_007d6f24)[uVar4 * 4] + (fVar10 - fVar19) * (float)(&DAT_007d6f2c)[uVar4 * 4]
  ;
  fVar17 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar10 - fVar19) * (float)(&DAT_007d6f28)[uVar4 * 4]
  ;
  if (fVar15 < fVar23) {
    fVar14 = -fVar14;
  }
  fVar10 = (float)(&DAT_007d6f20)[uVar11 * 4] +
           (fVar9 - fVar21) * (float)(&DAT_007d6f28)[uVar11 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar11 * 4] + (fVar9 - fVar21) * (float)(&DAT_007d6f2c)[uVar11 * 4]
  ;
  if (fVar26 * 40.743664 < fVar23) {
    fVar17 = -fVar17;
  }
  if (fVar20 < fVar23) {
    fVar10 = -fVar10;
  }
  *(float *)(iVar1 + 0x4c) = fVar9 * fVar16;
  *(float *)(iVar1 + 0x5c) = fVar10 * fVar16;
  *(float *)(iVar1 + 0x6c) = -fVar17;
  *(float *)(iVar1 + 0x50) = fVar14 * fVar9 * fVar17 - fVar22 * fVar10;
  *(float *)(iVar1 + 0x54) = fVar14 * fVar10 + fVar22 * fVar9 * fVar17;
  *(float *)(iVar1 + 0x70) = fVar14 * fVar16;
  *(float *)(iVar1 + 0x74) = fVar22 * fVar16;
  *(float *)(iVar1 + 0x60) = fVar22 * fVar9 + fVar14 * fVar10 * fVar17;
  *(float *)(iVar1 + 100) = fVar22 * fVar10 * fVar17 - fVar14 * fVar9;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(float *)(iVar1 + 0x58) = fVar24;
  *(float *)(iVar1 + 0x68) = fVar8;
  *(float *)(iVar1 + 0x78) = fVar18;
  *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
                    /* WARNING: Could not recover jumptable at 0x003786c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))();
  return;
}


