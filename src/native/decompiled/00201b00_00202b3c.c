#include "00201b00_00202b3c.h"



bool fn_00202b3c(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  iVar1 = fn_001ae638(param_2);
  return iVar1 != 0;
}



void fn_00202908(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int *param_5,
                 int param_6,undefined1 param_7)

{
  byte bVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint *puVar6;
  ushort *puVar7;
  int *piVar8;
  int iVar9;
  undefined1 local_38 [4];
  int iStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  iVar2 = fn_006ebe58(DAT_008987c8);
  piVar8 = *(int **)(iVar2 + 0x34);
  puVar3 = (undefined4 *)fn_005ea5fc(DAT_008987c8);
  puVar7 = (ushort *)*puVar3;
  iVar9 = *(int *)(*piVar8 + 8);
  fn_006eb278(local_28);
  iVar2 = fn_005e19c8();
  if (*(char *)(param_1 + 200) != '\0') {
    fn_001aeaa0(param_1 + 0xc,local_30,uStack_2c);
    local_38[0] = param_7;
    iVar4 = fn_001adb24(*param_5,local_38);
    *param_5 = iVar4;
    fn_005e6958(local_28,iVar9);
    iVar4 = fn_005e58f8(local_28,param_5);
    if (iVar4 != 0) {
      if ((((byte)DAT_008c6300 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6300), iVar4 != 0)) {
        DAT_008f9e38 = 0x3f800000;
        DAT_008f9e3c = 0;
        DAT_008f9e40 = 0;
        DAT_008f9e44 = 0;
        DAT_008f9e48 = 0;
        DAT_008f9e4c = 0x3f800000;
        DAT_008f9e50 = 0;
        DAT_008f9e54 = 0;
        DAT_008f9e58 = 0;
        DAT_008f9e5c = 0;
        DAT_008f9e60 = 0x3f800000;
        DAT_008f9e64 = 0;
      }
      fn_005e60c8(local_28,param_5,&DAT_008f9e38);
    }
    puVar6 = (uint *)*param_5;
    *puVar6 = *(uint *)(*(int *)(iVar9 + 0x24) + 0xa4) | 0x7fff0000;
    puVar6[1] = 0xf02b0;
    *param_5 = (int)(puVar6 + 2);
    uVar5 = fn_006cf3fc(&DAT_00898814,puVar6 + 2,&DAT_008cfe78,2);
    uVar5 = fn_006cf3fc(&DAT_008987fc,uVar5,&DAT_008cfe98,1);
    iVar9 = fn_006cf3fc(&DAT_0089881c,uVar5,&DAT_008cfea8,1);
    *param_5 = iVar9;
    bVar1 = *(byte *)(param_1 + 0xc9);
    *puVar7 = *puVar7 | 0x400;
    *(uint *)(puVar7 + 0x16) = *(uint *)(puVar7 + 0x16) & 0xffffff | (uint)bVar1 << 0x18;
    fn_005e5874(local_28,piVar8,puVar7);
    fn_005e6304(local_28,param_5);
    fn_005e7a58(param_1 + 0xcc,param_5);
    if (param_6 == 0) {
      iVar9 = fn_001ada38(*param_5,param_1 + 0xc);
    }
    else {
      iVar9 = fn_001adaac();
    }
    *param_5 = iVar9;
  }
  *(undefined4 *)(iVar2 + 0x10) = 0;
  fn_005e6088(local_28);
  fn_005e606c(local_28);
  return;
}



void fn_002028d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = fn_001ae614(iVar1 + 0xc);
  if (iVar2 == 1) {
    fn_001ae9c0(iVar1 + 0xc,param_2);
    return;
  }
  return;
}



void fn_002026fc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_10;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  local_10 = param_4;
  fn_00735248(0x3180);
  fn_00735398(0x3180,1);
  fn_001467fc();
  fn_0011b34c();
  fn_0011b5fc();
  iVar1 = fn_006ebe58(DAT_008987c8);
  uVar2 = *(undefined4 *)(*(int *)(**(int **)(iVar1 + 0x34) + 8) + 0x24);
  local_10 = 0;
  fn_0012bc84(0x208,&local_10);
  iVar1 = local_10;
  local_10 = fn_00175e10(uVar2,local_10);
  local_10 = fn_006cf3fc(&DAT_008987dc,local_10,&DAT_008cfe48,3);
  local_10 = fn_006cf3fc(&DAT_0089880c,local_10,&DAT_008cfe48,3);
  uVar2 = fn_006cf3fc(&DAT_00898814,local_10,&DAT_008cfe78,2);
  uVar2 = fn_006cf3fc(&DAT_008987fc,uVar2,&DAT_008cfe98,1);
  local_10 = fn_006cf3fc(&DAT_0089881c,uVar2,&DAT_008cfea8,1);
  fn_001467e4(local_10 - iVar1 & 0xfffffffc);
  fn_00146578();
  return;
}



undefined4 * fn_00202228(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_006a6d8c();
  puVar1[0x8c] = 0xffffffff;
  *puVar1 = &DAT_0081c25c;
  puVar1[0x8b] = 0;
  puVar1[0x15] = &DAT_0081c330;
  puVar1[0x8d] = 0;
  puVar1[0x8e] = 0;
  *(undefined1 *)(puVar1 + 0x8f) = 0;
  *(undefined1 *)((int)puVar1 + 0x23d) = 1;
  *(undefined1 *)((int)puVar1 + 0x23e) = 1;
  *(undefined1 *)((int)puVar1 + 0x23f) = 1;
  *(undefined1 *)(puVar1 + 0x90) = 1;
  *(undefined1 *)((int)puVar1 + 0x241) = 1;
  *(undefined1 *)(puVar1 + 0x92) = 1;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_001fa2fc();
  }
  puVar1[0x93] = uVar3;
  return puVar1;
}



void fn_00201fd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  if ((((byte)DAT_008c62ec & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62ec), iVar1 != 0)) {
    DAT_008c62f0 = 0;
    DAT_008c62f4 = 0;
  }
  local_18 = DAT_008c62f0;
  uStack_14 = DAT_008c62f4;
  iVar1 = fn_006f7da4(param_1);
  if ((iVar1 != 0) || (iVar1 = fn_0069fb20(param_1), iVar1 != 0)) {
    fn_0068eb3c(&local_18,param_2);
    fn_006a4518(param_1,&local_18);
  }
  fn_00144810(DAT_008977e8);
  iVar1 = fn_006a8714();
  if (iVar1 != 0) {
    fn_0068cb14(DAT_008977e8,&local_18);
  }
  iVar1 = fn_006f7da4(param_1);
  if (iVar1 != 0) {
    if ((*(char *)((int)param_1 + 0x23e) != '\0') &&
       (uVar2 = fn_006ec83c(), (uVar2 & 0x20000) != 0)) {
      (**(code **)(*param_1 + 0x60))(param_1,1);
    }
    if ((*(char *)((int)param_1 + 0x23d) != '\0') &&
       (uVar2 = fn_006ec83c(), (uVar2 & 0x10000) != 0)) {
      (**(code **)(*param_1 + 100))(param_1);
    }
    if ((*(char *)((int)param_1 + 0x23f) != '\0') &&
       (uVar2 = fn_006ec83c(), (uVar2 & 0x80000) != 0)) {
      (**(code **)(*param_1 + 0x68))(param_1,0);
    }
    if (((char)param_1[0x90] != '\0') && (uVar2 = fn_006ec7e8(), (uVar2 & 0x40000) != 0)) {
      (**(code **)(*param_1 + 0x68))(param_1,1);
    }
    if ((*(char *)((int)param_1 + 0x241) != '\0') &&
       ((((uVar2 = fn_006ec83c(), (uVar2 & 0x10) != 0 ||
          (uVar2 = fn_006ec83c(), (uVar2 & 0x40) != 0)) ||
         (uVar2 = fn_006ec83c(), (uVar2 & 0x80) != 0)) ||
        (uVar2 = fn_006ec83c(), (uVar2 & 0x20) != 0)))) {
      (**(code **)(*param_1 + 0x94))(param_1);
    }
  }
  if ((char)param_1[0x90] != '\0') {
    fn_00144810(DAT_008977e8);
    iVar1 = fn_006a8730();
    if ((iVar1 == 1) && (uVar2 = fn_006ec888(), (uVar2 & 0x40000) != 0)) {
      (**(code **)(*param_1 + 0x70))(param_1,1);
    }
  }
  return;
}



void fn_00201b00(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  
  fn_006a5398();
  uVar2 = fn_0017fde4(param_1[0x17]);
  uVar2 = fn_00191238(uVar2,(char *)&DAT_00201e78);
  iVar3 = fn_0017fde4(param_1[0x8d]);
  fVar23 = 0.0;
  fVar24 = (float)param_1[2] + 0.0;
  fVar25 = (float)param_1[3] + 40.0;
  fVar26 = (float)param_1[4] + 0.0;
  uVar4 = fn_0017fde4(param_1[0x17]);
  iVar5 = fn_005ea5d8(uVar4,uVar2);
  fVar13 = *(float *)(iVar5 + 0xc);
  fVar11 = *(float *)(iVar5 + 0x1c);
  fVar9 = *(float *)(iVar5 + 0x2c);
  in_fpscr = in_fpscr & 0xfffffff;
  fVar12 = ABS((float)param_1[9] * 40.743664);
  fVar10 = ABS((float)param_1[10] * 40.743664);
  for (fVar14 = ABS((float)param_1[8] * 40.743664); 0x477fffff < (int)fVar14;
      fVar14 = fVar14 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar12; fVar12 = fVar12 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar10; fVar10 = fVar10 - 65536.0) {
  }
  uVar15 = VectorFloatToUnsigned(fVar14,3);
  uVar16 = VectorFloatToUnsigned(fVar12,3);
  uVar7 = uVar15 & 0xff;
  uVar17 = VectorFloatToUnsigned(fVar10,3);
  uVar8 = uVar16 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar15 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar21 = (float)VectorUnsignedToFloat(uVar16 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar15 = uVar17 & 0xff;
  fVar22 = (float)VectorUnsignedToFloat(uVar17 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar20 = (float)(&DAT_007d6f20)[uVar7 * 4] + (fVar14 - fVar18) * (float)(&DAT_007d6f28)[uVar7 * 4]
  ;
  fVar18 = (float)(&DAT_007d6f24)[uVar7 * 4] + (fVar14 - fVar18) * (float)(&DAT_007d6f2c)[uVar7 * 4]
  ;
  fVar19 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar12 - fVar21) * (float)(&DAT_007d6f28)[uVar8 * 4]
  ;
  fVar14 = (float)(&DAT_007d6f24)[uVar8 * 4] + (fVar12 - fVar21) * (float)(&DAT_007d6f2c)[uVar8 * 4]
  ;
  if ((float)param_1[8] * 40.743664 < fVar23) {
    fVar20 = -fVar20;
  }
  fVar12 = (float)(&DAT_007d6f20)[uVar15 * 4] +
           (fVar10 - fVar22) * (float)(&DAT_007d6f28)[uVar15 * 4];
  fVar10 = (float)(&DAT_007d6f24)[uVar15 * 4] +
           (fVar10 - fVar22) * (float)(&DAT_007d6f2c)[uVar15 * 4];
  if ((float)param_1[9] * 40.743664 < fVar23) {
    fVar19 = -fVar19;
  }
  if ((float)param_1[10] * 40.743664 < fVar23) {
    fVar12 = -fVar12;
  }
  *(float *)(iVar3 + 0x4c) = fVar10 * fVar14;
  *(float *)(iVar3 + 0x5c) = fVar12 * fVar14;
  *(float *)(iVar3 + 0x70) = fVar20 * fVar14;
  *(float *)(iVar3 + 0x74) = fVar18 * fVar14;
  *(float *)(iVar3 + 0x50) = fVar20 * fVar10 * fVar19 - fVar18 * fVar12;
  *(float *)(iVar3 + 100) = fVar18 * fVar12 * fVar19 - fVar20 * fVar10;
  *(float *)(iVar3 + 0x54) = fVar20 * fVar12 + fVar18 * fVar10 * fVar19;
  *(float *)(iVar3 + 0x60) = fVar18 * fVar10 + fVar20 * fVar12 * fVar19;
  *(float *)(iVar3 + 0x6c) = -fVar19;
  *(undefined4 *)(iVar3 + 0x58) = 0;
  *(undefined4 *)(iVar3 + 0x68) = 0;
  *(undefined4 *)(iVar3 + 0x78) = 0;
  *(float *)(iVar3 + 0x58) = fVar24 + fVar13;
  *(float *)(iVar3 + 0x68) = fVar25 + fVar11;
  *(float *)(iVar3 + 0x78) = fVar26 + fVar9;
  *(undefined4 *)(iVar3 + 0x7c) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x80) = 0x3f800000;
  *(undefined4 *)(iVar3 + 0x84) = 0x3f800000;
  *(uint *)(iVar3 + 0x88) = *(uint *)(iVar3 + 0x88) | 0x800;
  (**(code **)(*(int *)param_1[0x8d] + 0x10))();
  if (param_1[0x8b] < 1) {
    if (-1 < param_1[0x8c]) {
      uVar2 = fn_0017fde4(param_1[0x8d]);
      iVar3 = fn_0068c694(DAT_008977e8);
      fn_00162d54(*(undefined4 *)(iVar3 + 0x24),uVar2);
      iVar3 = fn_0068c694(DAT_008977e8);
      fn_00162d44(*(undefined4 *)(iVar3 + 0x24));
      param_1[0x8c] = -1;
    }
  }
  else {
    param_1[0x8b] = param_1[0x8b] + -1;
  }
  if ((char)param_1[0x45] == '\x02') {
    iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
    if ((iVar3 != 0) && (0x41f00000 < (int)((float)param_1[0x8e] - (float)param_1[3]))) {
      uVar2 = fn_0068eb0c(DAT_008977e8);
      fn_001cb820(uVar2,0xc,3);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
    if (iVar3 == 0) {
      piVar6 = param_1 + 0x8e;
      if ((float)param_1[0x8e] < (float)param_1[3]) {
        piVar6 = param_1 + 3;
      }
      iVar3 = *piVar6;
    }
    else {
      iVar3 = param_1[3];
    }
    param_1[0x8e] = iVar3;
  }
  iVar3 = fn_00191284(param_1[0x17],1);
  if (iVar3 != 0) {
    fn_0018367c(param_1[0x17]);
    fn_0018367c(param_1[0x17]);
    fn_0018367c(param_1[0x17]);
    fn_0018367c(param_1[0x17]);
    uVar2 = fn_006eb3c0();
    iVar3 = fn_001f9ea8(param_1[0x93],1,uVar2);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
  iVar3 = (**(code **)(*param_1 + 0x3c))(param_1);
  if ((iVar3 != 0) && ((char)param_1[0x92] == '\0')) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  uVar1 = (**(code **)(*param_1 + 0x3c))(param_1);
  *(undefined1 *)(param_1 + 0x92) = uVar1;
  return;
}


