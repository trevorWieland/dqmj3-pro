#include "005f03e4_005f0cb8.h"



void fn_005f0cb8(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 != 0) {
    fn_00150ed8();
    for (piVar3 = (int *)piVar1[2]; (int *)piVar1[3] != piVar3; piVar3 = piVar3 + 2) {
      if ((char)piVar3[1] != '\0') {
        iVar2 = *piVar3;
        fn_00150e8c(*piVar1,piVar1[1],iVar2);
        *(undefined1 *)(piVar1[2] + iVar2 * 8 + 5) = 0xff;
        *(undefined1 *)(piVar1[2] + iVar2 * 8 + 4) = 0;
      }
    }
    (*(code *)**(undefined4 **)*piVar1)();
    fn_00143b48(*piVar1);
    *piVar1 = 0;
  }
  piVar1[1] = 0;
  return;
}



undefined4 fn_005f0b00(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_20;
  undefined1 local_1f;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_005e7fd0(iVar1,*puVar4,param_2);
  }
  local_1f = 1;
  local_1c = 4;
  uStack_18 = 8;
  uStack_14 = 1;
  local_20 = 0;
  uVar2 = fn_005e4c58(&local_20,param_3,uVar2);
  piVar3 = (int *)fn_005f03cc(param_2);
  fn_005e4c4c(uVar2,*(undefined1 *)
                      (*(int *)(*(int *)(*(int *)(*piVar3 + 0xc) + piVar3[100] * 4) + 0x18) +
                      piVar3[0x65] * 0x3c + 0xc));
  fn_005e4e24(uVar2,param_2);
  return uVar2;
}



void fn_005f0a90(int param_1,uint param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  for (piVar2 = (int *)puVar1[2]; (int *)puVar1[3] != piVar2; piVar2 = piVar2 + 2) {
    if (((char)piVar2[1] != '\0') && (*(byte *)((int)piVar2 + 5) == param_2)) {
      iVar3 = *piVar2;
      fn_00150e8c(*puVar1,puVar1[1],iVar3);
      *(undefined1 *)(puVar1[2] + iVar3 * 8 + 5) = 0xff;
      *(undefined1 *)(puVar1[2] + iVar3 * 8 + 4) = 0;
    }
  }
  return;
}



void fn_005f0938(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  fn_00150e8c(*puVar1,puVar1[1],param_2);
  *(undefined1 *)(puVar1[2] + param_2 * 8 + 5) = 0xff;
  *(undefined1 *)(puVar1[2] + param_2 * 8 + 4) = 0;
  return;
}



void fn_005f08dc(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 != 0) {
    iVar1 = **(int **)(param_2 + 4);
    if ((iVar1 != 0) && ((*(int **)(param_2 + 4))[1] == *(int *)(iVar1 + 0xc))) {
      fn_0053eac8(**(undefined4 **)(param_1 + 4),**(undefined4 **)(param_2 + 4));
      **(undefined4 **)(param_2 + 4) = 0;
    }
  }
  return;
}



undefined4 fn_005f0810(int param_1,undefined4 param_2,float *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint in_fpscr;
  int in_stack_00000008;
  float local_28;
  float local_24;
  float local_20;
  
  uVar1 = fn_005f0bc4(*(undefined4 *)(param_1 + 4));
  iVar2 = fn_005f03cc(param_2);
  local_28 = *param_3 + *(float *)(in_stack_00000008 + 0x110);
  local_24 = param_3[1] + *(float *)(in_stack_00000008 + 0x114);
  local_20 = param_3[2] + *(float *)(in_stack_00000008 + 0x118);
  fn_005f039c(param_2,&local_28);
  fn_005f073c(param_2,in_stack_00000008 + 0x11c);
  fn_005f076c(param_2,in_stack_00000008 + 0x104);
  VectorSignedToFloat(*(undefined4 *)(in_stack_00000008 + 0x138),(byte)(in_fpscr >> 0x16) & 3);
  fn_005f03d8(param_2);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(in_stack_00000008 + 300);
    uVar4 = *(undefined4 *)(in_stack_00000008 + 0x130);
    uVar5 = *(undefined4 *)(in_stack_00000008 + 0x134);
    *(undefined4 *)(iVar2 + 0x230) = *(undefined4 *)(in_stack_00000008 + 0x128);
    *(undefined4 *)(iVar2 + 0x234) = uVar3;
    *(undefined4 *)(iVar2 + 0x238) = uVar4;
    *(undefined4 *)(iVar2 + 0x23c) = uVar5;
    fn_0052de98(iVar2,*(undefined4 *)(in_stack_00000008 + 0x13c));
  }
  return uVar1;
}



undefined4 * fn_005f0780(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  *param_1 = &DAT_00858e3c;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x34,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_005f0664();
  }
  if (param_1[1] != iVar2) {
    fn_002feef8(param_1[1]);
    param_1[1] = iVar2;
  }
  return param_1;
}



void fn_005f076c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x14) = *param_2;
  *(undefined4 *)(iVar1 + 0x18) = uVar2;
  *(undefined4 *)(iVar1 + 0x1c) = uVar3;
  return;
}



bool fn_005f0750(int param_1)

{
  return *(int *)(**(int **)(param_1 + 4) + 4) == 0;
}



void fn_005f073c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x20) = *param_2;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *(undefined4 *)(iVar1 + 0x28) = uVar3;
  return;
}



undefined4 * fn_005f0664(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[2] = DAT_008f9e2c;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[5] = DAT_008f9e2c;
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  param_1[8] = 0x3f800000;
  param_1[9] = 0x3f800000;
  param_1[10] = 0x3f800000;
  param_1[0xb] = uVar4;
  param_1[0xc] = uVar4;
  return param_1;
}



void fn_005f03e4(int param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  float local_d0;
  float local_cc;
  float local_c8;
  undefined4 local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [48];
  undefined1 auStack_70 [48];
  undefined1 auStack_40 [48];
  
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  uVar9 = param_2[3];
  uVar13 = param_2[4];
  uVar15 = param_2[5];
  uVar17 = param_2[6];
  uVar19 = param_2[7];
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  *(undefined4 *)(param_1 + 0x90) = uVar5;
  *(undefined4 *)(param_1 + 0x94) = uVar7;
  *(undefined4 *)(param_1 + 0x98) = uVar9;
  *(undefined4 *)(param_1 + 0x9c) = uVar13;
  *(undefined4 *)(param_1 + 0xa0) = uVar15;
  *(undefined4 *)(param_1 + 0xa4) = uVar17;
  *(undefined4 *)(param_1 + 0xa8) = uVar19;
  uVar5 = param_2[9];
  uVar7 = param_2[10];
  uVar9 = param_2[0xb];
  *(undefined4 *)(param_1 + 0xac) = param_2[8];
  *(undefined4 *)(param_1 + 0xb0) = uVar5;
  *(undefined4 *)(param_1 + 0xb4) = uVar7;
  *(undefined4 *)(param_1 + 0xb8) = uVar9;
  puVar2 = *(undefined4 **)(*(int *)(*(int *)(param_1 + 0x148) + 8) + 4);
  uVar1 = in_fpscr & 0xfffffff;
  fVar6 = ABS((float)puVar2[6] * 40.743664);
  fVar4 = ABS((float)puVar2[7] * 40.743664);
  for (fVar8 = ABS((float)puVar2[5] * 40.743664); 0x477fffff < (int)fVar8; fVar8 = fVar8 - 65536.0)
  {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar10 = VectorFloatToUnsigned(fVar8,3);
  uVar11 = VectorFloatToUnsigned(fVar6,3);
  uVar12 = VectorFloatToUnsigned(fVar4,3);
  uVar3 = uVar10 & 0xff;
  fVar20 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar10 = uVar11 & 0xff;
  fVar16 = (float)VectorUnsignedToFloat(uVar11 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar11 = uVar12 & 0xff;
  fVar18 = (float)VectorUnsignedToFloat(uVar12 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar8 - fVar20) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar20 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar8 - fVar20) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_a8 = (float)(&DAT_007d6f24)[uVar10 * 4] +
             (fVar6 - fVar16) * (float)(&DAT_007d6f2c)[uVar10 * 4];
  fVar8 = (float)(&DAT_007d6f20)[uVar10 * 4] + (fVar6 - fVar16) * (float)(&DAT_007d6f28)[uVar10 * 4]
  ;
  if ((float)puVar2[5] * 40.743664 < 0.0) {
    fVar14 = -fVar14;
  }
  fVar16 = (float)(&DAT_007d6f20)[uVar11 * 4] +
           (fVar4 - fVar18) * (float)(&DAT_007d6f28)[uVar11 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar11 * 4] + (fVar4 - fVar18) * (float)(&DAT_007d6f2c)[uVar11 * 4]
  ;
  if ((float)puVar2[6] * 40.743664 < 0.0) {
    fVar8 = -fVar8;
  }
  if ((float)puVar2[7] * 40.743664 < 0.0) {
    fVar16 = -fVar16;
  }
  local_d0 = fVar6 * local_a8;
  local_c0 = fVar16 * local_a8;
  local_ac = fVar14 * local_a8;
  local_a8 = fVar20 * local_a8;
  local_b0 = -fVar8;
  local_c8 = fVar14 * fVar16 + fVar20 * fVar6 * fVar8;
  local_bc = fVar20 * fVar6 + fVar14 * fVar16 * fVar8;
  local_cc = fVar14 * fVar6 * fVar8 - fVar20 * fVar16;
  local_b8 = fVar20 * fVar16 * fVar8 - fVar14 * fVar6;
  local_c4 = 0;
  local_b4 = 0;
  local_a4 = 0;
  fn_001ad150(auStack_a0,&local_d0,puVar2 + 8);
  fn_001ad39c(auStack_70,puVar2 + 2,auStack_a0);
  fn_001ad06c(auStack_40,param_2,auStack_70);
  fn_0052dd0c(*puVar2,auStack_40);
  return;
}


