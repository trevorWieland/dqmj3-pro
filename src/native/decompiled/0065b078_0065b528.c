#include "0065b078_0065b528.h"



void fn_0065b528(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  undefined4 uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  undefined4 uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  undefined4 uStack_44;
  undefined4 uStack_28;
  undefined4 uStack_24;
  float fStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fn_001daaf8();
  uStack_28 = 0x41f00000;
  uStack_24 = 0x41900000;
  fStack_20 = 52.0;
  fStack_98 = *(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x1a0);
  fStack_94 = *(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x1a4);
  fStack_90 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x1a8);
  fVar3 = 180.0;
  fStack_80 = *(float *)(param_1 + 0x2c);
  fStack_7c = *(float *)(param_1 + 0x30);
  fStack_78 = *(float *)(param_1 + 0x34);
  fn_0017fe34();
  fn_005df8f8();
  fStack_7c = fVar3 + fStack_7c;
  in_fpscr = in_fpscr & 0xfffffff;
  fVar5 = ABS(fStack_7c * 40.743664);
  fVar4 = ABS(fStack_78 * 40.743664);
  for (fVar3 = ABS(fStack_80 * 40.743664); 0x477fffff < (int)fVar3; fVar3 = fVar3 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar5; fVar5 = fVar5 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar6 = VectorFloatToUnsigned(fVar3,3);
  uVar7 = VectorFloatToUnsigned(fVar5,3);
  uVar1 = uVar6 & 0xff;
  uVar8 = VectorFloatToUnsigned(fVar4,3);
  uVar2 = uVar7 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar6 = uVar8 & 0xff;
  fVar9 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)(&DAT_007d6f24)[uVar1 * 4] + (fVar3 - fVar10) * (float)(&DAT_007d6f2c)[uVar1 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar1 * 4] + (fVar3 - fVar10) * (float)(&DAT_007d6f28)[uVar1 * 4];
  fStack_48 = (float)(&DAT_007d6f24)[uVar2 * 4] +
              (fVar5 - fVar9) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar3 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar5 - fVar9) * (float)(&DAT_007d6f28)[uVar2 * 4];
  if (fStack_80 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  fVar5 = (float)(&DAT_007d6f20)[uVar6 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f28)[uVar6 * 4];
  fVar4 = (float)(&DAT_007d6f24)[uVar6 * 4] + (fVar4 - fVar11) * (float)(&DAT_007d6f2c)[uVar6 * 4];
  if (fStack_7c * 40.743664 < 0.0) {
    fVar3 = -fVar3;
  }
  if (fStack_78 * 40.743664 < 0.0) {
    fVar5 = -fVar5;
  }
  fStack_70 = fVar4 * fStack_48;
  fStack_60 = fVar5 * fStack_48;
  fStack_4c = fVar10 * fStack_48;
  fStack_48 = fVar12 * fStack_48;
  fStack_50 = -fVar3;
  fStack_6c = fVar10 * fVar4 * fVar3 - fVar12 * fVar5;
  fStack_58 = fVar12 * fVar5 * fVar3 - fVar10 * fVar4;
  fStack_68 = fVar10 * fVar5 + fVar12 * fVar4 * fVar3;
  fStack_5c = fVar12 * fVar4 + fVar10 * fVar5 * fVar3;
  uStack_64 = 0;
  uStack_54 = 0;
  uStack_44 = 0;
  fStack_a8 = 0.0;
  fStack_a4 = 0.0;
  fStack_a0 = fStack_20;
  fn_0016947c(&fStack_a8,&fStack_70);
  fStack_98 = fStack_98 + fStack_a8;
  fStack_94 = fStack_94 + fStack_a4;
  fStack_90 = fStack_90 + fStack_a0;
  uStack_1c = 0x3f800000;
  uStack_18 = 0x3f800000;
  uStack_14 = 0x3f800000;
  fn_0021197c(param_1,*(undefined4 *)(param_1 + 0x1ac),&uStack_28,&uStack_1c,&fStack_80,&fStack_98)
  ;
  return;
}



undefined4 fn_0065b4e4(int param_1)

{
  undefined4 uVar1;
  undefined4 in_s1;
  
  uVar1 = fn_002113c8();
  fn_0069ed78(*(undefined4 *)(param_1 + 0xe4),s_hitnode_008c6d08);
  *(undefined4 *)(param_1 + 0x1a0) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = in_s1;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  fn_0065b540(param_1);
  return uVar1;
}



void fn_0065b4ac(int param_1)

{
  fn_00210fdc();
  if ((*(char *)(param_1 + 0x19c) == '\x01') && (*(int *)(param_1 + 0x1b4) < 0x1e)) {
    fn_001da030(param_1,0);
    return;
  }
  return;
}



bool fn_0065b3d8(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x138))();
  if (iVar1 != 0) {
    fn_002a6ed8(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0x10),1);
  }
  return iVar1 != 0;
}



undefined4 fn_0065b388(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_002113c8();
  *(undefined4 *)(param_1 + 0x168) = 0x42480000;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x174) = 0;
  uVar2 = 0x43340000;
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  return uVar1;
}



undefined4 fn_0065b290(int param_1,int param_2)

{
  bool bVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(char *)(param_2 + 0xdc) != '\0') {
    return 0;
  }
  pfVar2 = *(float **)(param_2 + 0x100);
  fVar6 = (*(float *)(param_1 + 0x20) + *(float *)(param_1 + 0x16c)) -
          (*(float *)(param_2 + 0x20) + *pfVar2);
  fVar5 = (*(float *)(param_1 + 0x24) + *(float *)(param_1 + 0x170)) -
          (*(float *)(param_2 + 0x24) + pfVar2[1]);
  fVar3 = (*(float *)(param_1 + 0x28) + *(float *)(param_1 + 0x174)) -
          (*(float *)(param_2 + 0x28) + pfVar2[2]);
  bVar1 = fVar6 == 0.0;
  fVar4 = pfVar2[1];
  if (bVar1) {
    fVar4 = fVar5;
  }
  if ((!bVar1 || (!bVar1 || fVar4 != 0.0)) || fVar3 != 0.0) {
    fVar3 = fVar6 * fVar6 + fVar5 * fVar5 + fVar3 * fVar3;
    fVar4 = *(float *)(*(int *)(param_2 + 0x100) + 0xc) + *(float *)(param_1 + 0x168);
    fn_001a4a80();
    if (fVar4 <= fVar3) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_0065b144(int *param_1)

{
  int iVar1;
  
  if (((char)param_1[0x68] == '\0') &&
     (iVar1 = (**(code **)(*param_1 + 0x138))(param_1), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x68) = 1;
    fn_00318bf4(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 8),1);
    (**(code **)(*(int *)param_1[0x67] + 0x54))((int *)param_1[0x67],1);
    param_1[0x4e] = param_1[0x4e] | 2;
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}



void fn_0065b0c8(int *param_1)

{
  undefined4 uVar1;
  
  fn_001db0c0();
  if ((*(char *)((int)param_1 + 0x1a1) != '\0') && (*(char *)((int)param_1 + 0x1a1) == '\x01')) {
    if (0.0 <= (float)param_1[0x3e] - 0.05) {
                    /* WARNING: Could not recover jumptable at 0x0065b134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0xd8))(param_1);
      return;
    }
    uVar1 = fn_006f7a70(DAT_008977e0);
    fn_002ff3b4(uVar1,param_1[0x4f]);
    *(undefined1 *)((int)param_1 + 0x1a1) = 0;
  }
  return;
}



undefined4 fn_0065b078(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_002113c8();
  *(undefined4 *)(param_1 + 0x168) = 0x42480000;
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0x41f00000;
  *(undefined4 *)(param_1 + 0x174) = 0;
  uVar2 = 0x43340000;
  fn_0017fe34();
  *(undefined4 *)(param_1 + 0x178) = uVar2;
  return uVar1;
}


