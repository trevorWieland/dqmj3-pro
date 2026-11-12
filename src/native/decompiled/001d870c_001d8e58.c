#include "001d870c_001d8e58.h"



undefined4 fn_001d8e58(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined4 *local_60;
  uint local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  float local_50;
  float local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [4];
  float local_40;
  float afStack_3c [3];
  undefined1 local_30 [28];
  
  uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  local_60 = (undefined4 *)0x0;
  fn_006dcca4(uVar2,0,local_30,0);
  fn_0017fe34();
  fn_00176d68(*(undefined4 *)(param_1 + 4));
  fVar12 = 1.0;
  fn_00545310();
  iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar11 = 0;
  *(undefined4 *)(iVar3 + 0x294) = 0x37e2b819;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c6300), iVar3 != 0)) {
    DAT_008f9e38 = fVar12;
    DAT_008f9e3c = uVar11;
    DAT_008f9e40 = uVar11;
    DAT_008f9e44 = uVar11;
    DAT_008f9e48 = uVar11;
    DAT_008f9e4c = fVar12;
    DAT_008f9e50 = uVar11;
    DAT_008f9e54 = uVar11;
    DAT_008f9e58 = uVar11;
    DAT_008f9e5c = uVar11;
    DAT_008f9e60 = fVar12;
    DAT_008f9e64 = uVar11;
  }
  puVar4 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    uVar7 = *(undefined4 *)(param_1 + 4);
    puVar4[1] = param_1 + 0x108;
    *puVar4 = uVar7;
    uVar2 = fn_00176d68(uVar7);
    local_60 = &local_48;
    fn_006dcca4(uVar2,&local_54,&local_50,&local_4c);
    fVar14 = local_4c;
    fVar13 = local_50;
    uVar2 = local_48;
    fn_0052534c(&local_40,afStack_3c);
    fVar8 = fVar12 / (local_40 / afStack_3c[0]);
    fVar9 = fVar12 / SQRT(fVar8 * fVar8 + fVar13 * fVar13);
    fVar10 = fVar12 / SQRT(fVar12 + fVar8 * fVar8);
    puVar4[2] = fVar8 * fVar9;
    puVar4[3] = uVar11;
    puVar4[4] = -(fVar13 * fVar9);
    puVar4[5] = uVar11;
    puVar4[6] = -(fVar8 * fVar9);
    puVar4[7] = uVar11;
    puVar4[8] = -(fVar13 * fVar9);
    puVar4[9] = uVar11;
    puVar4[10] = uVar11;
    puVar4[0xb] = uVar11;
    puVar4[0xc] = 0xbf800000;
    puVar4[0xd] = -fVar14;
    puVar4[0xe] = uVar11;
    puVar4[0xf] = uVar11;
    puVar4[0x10] = fVar12;
    puVar4[0x11] = uVar2;
    puVar4[0x12] = uVar11;
    puVar4[0x13] = -(fVar8 * fVar10);
    puVar4[0x14] = -fVar10;
    puVar4[0x15] = uVar11;
    puVar4[0x16] = uVar11;
    puVar4[0x17] = fVar8 * fVar10;
    puVar4[0x18] = -fVar10;
    puVar4[0x19] = uVar11;
    if (puVar4[1] == 0) {
      iVar3 = fn_00176d68(uVar7);
      puVar4[1] = iVar3 + 0x148;
    }
  }
  if (*(undefined4 **)(param_1 + 8) != puVar4) {
    fn_002feef8();
    *(undefined4 **)(param_1 + 8) = puVar4;
  }
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  if (*(int *)(param_1 + 0x14c) != 0) {
    iVar3 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    puVar6 = *(undefined4 **)(param_1 + 0x14c);
    uVar2 = *(undefined4 *)(iVar3 + 600);
    *(undefined4 *)(iVar3 + 600) = 0;
    puVar4 = (undefined4 *)(iVar3 + 600);
    local_5c = CONCAT31(((unsigned int)(local_5c) >> 8) & 0xffffff,1);
    local_60 = puVar6;
    if ((undefined4 **)puVar4 != &local_60) {
      local_60 = (undefined4 *)*puVar4;
      local_5c = CONCAT31(((unsigned int)(local_5c) >> 8) & 0xffffff,*(undefined1 *)(iVar3 + 0x25c));
      *puVar4 = puVar6;
      *(undefined1 *)(iVar3 + 0x25c) = 1;
    }
    puVar4 = local_60;
    if (local_60 != (undefined4 *)0x0) {
      if ((local_5c & 0xff) != 0) {
        (**(code **)*local_60)(local_60);
        piVar5 = (int *)puVar4[1];
        (**(code **)(*piVar5 + 0xc))(piVar5,puVar4);
      }
    }
    *(undefined4 *)(param_1 + 0x150) = uVar2;
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  bVar1 = fn_002fb61c();
  *(byte *)(param_1 + 0x15d) = bVar1 ^ 1;
  uStack_58 = *(undefined4 *)(param_1 + 0x14);
  local_54 = *(undefined4 *)(param_1 + 0x18);
  local_60 = (undefined4 *)0x0;
  local_5c = uVar11;
  fn_001d5a74(param_1,&local_5c,auStack_44,&local_50);
  *(uint *)(param_1 + 0x10) = local_5c;
  *(undefined4 *)(param_1 + 0x14) = uStack_58;
  *(undefined4 *)(param_1 + 0x18) = local_54;
  fn_001d926c(param_1,auStack_44);
  *(float *)(param_1 + 0x28) = local_50;
  *(float *)(param_1 + 0x2c) = local_4c;
  *(undefined4 *)(param_1 + 0x30) = local_48;
  uVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  fn_005456f4(uVar2,param_1 + 0x28);
  *(uint *)(param_1 + 0xec) = uVar11;
  return 1;
}



void fn_001d8d5c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  fn_0016ddb4(param_1 + 0x60);
  *(undefined4 *)(param_1 + 0x80) = uVar1;
  *(undefined4 *)(param_1 + 0x84) = uVar1;
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  *(undefined4 *)(param_1 + 0x94) = uVar1;
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    fn_002feef8();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(undefined4 *)(param_1 + 0x34) = DAT_008c85a8;
  *(undefined4 *)(param_1 + 0x38) = DAT_008c85ac;
  *(undefined4 *)(param_1 + 0x3c) = DAT_008c85b0;
  *(undefined4 *)(param_1 + 0x40) = DAT_008c85b4;
  *(undefined4 *)(param_1 + 0x44) = DAT_008c85b8;
  *(undefined4 *)(param_1 + 0x48) = DAT_008c85bc;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = uVar1;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = uVar1;
  *(undefined4 *)(param_1 + 0x100) = uVar1;
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  *(undefined4 *)(param_1 + 0x144) = 0;
  return;
}



void fn_001d8a48(int param_1)

{
  undefined4 in_s0;
  
  fn_005df8f8();
  *(undefined4 *)(param_1 + 0x14) = in_s0;
  return;
}



void fn_001d8a20(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  fn_001d68cc(param_1,0);
  *(undefined1 *)(param_1 + 0x15c) = 1;
  return;
}



void fn_001d88a4(int param_1)

{
  int iVar1;
  int *piVar2;
  float in_s0;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (((DAT_008911a8 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008911a8), iVar1 != 0)) {
    in_s0 = 80.0;
    fn_0017fe34();
    DAT_008911ac = in_s0;
  }
  piVar2 = (int *)fn_006f72e0(DAT_008977e0);
  iVar1 = (**(code **)(*piVar2 + 0x48))();
  if (iVar1 != 0) {
    fn_006f7a84(DAT_008977e0);
    iVar1 = fn_001e2420();
    if (iVar1 == 0) {
      return;
    }
  }
  fn_006a8fac(param_1);
  fn_006f7a48(DAT_008977e0);
  fn_006a7de0();
  fVar4 = in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7e74();
  fVar4 = fVar4 + in_s0;
  fn_006f7a48(DAT_008977e0);
  fn_006a7e80();
  fVar3 = 0.0;
  if (fVar4 != 0.0 || (fVar4 != 0.0 || in_s0 != 0.0)) {
    piVar2 = (int *)fn_006f72e0(DAT_008977e0);
    (**(code **)(*piVar2 + 0x6c))();
    fVar5 = 3.0;
    fVar3 = fVar3 * fVar4 * 3.0;
    fn_0017fe34();
    fVar3 = *(float *)(param_1 + 0x14) + fVar3;
    fn_005df8f8();
    *(float *)(param_1 + 0x14) = fVar3;
    piVar2 = (int *)fn_006f72e0(DAT_008977e0);
    (**(code **)(*piVar2 + 0x6c))();
    fVar3 = fVar3 * in_s0 * fVar5;
    fn_0017fe34();
    fVar3 = *(float *)(param_1 + 0x10) + fVar3;
    fn_00764608();
    *(float *)(param_1 + 0x10) = fVar3;
  }
  return;
}



void fn_001d8894(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0x138) = *param_2;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x140) = uVar2;
  return;
}



void fn_001d8778(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_48 [48];
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  uVar3 = *(undefined4 *)(iVar1 + 0x28);
  *(float *)(param_1 + 0x28) = *(float *)(iVar1 + 0x20);
  *(undefined4 *)(param_1 + 0x2c) = uVar2;
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  uVar2 = fn_006f751c(DAT_008977e0);
  fn_006c1c18(uVar2,iVar1 + 0x460,0);
  fVar4 = 0.0;
  fVar6 = 30.0;
  fVar5 = -54.0;
  fn_006887f0(auStack_48);
  uVar3 = *(undefined4 *)(iVar1 + 0x464);
  in_s0 = in_s0 - ABS(fVar5);
  uVar2 = fn_006f751c(DAT_008977e0);
  fn_006c180c(uVar2,auStack_48,uVar3);
  fn_006f6988(auStack_48);
  *(float *)(param_1 + 0x170) = in_s0 + fVar4;
  *(float *)(param_1 + 0x174) = in_s1 + fVar6;
  *(float *)(param_1 + 0x178) = in_s2 + fVar4;
  fVar4 = *(float *)(iVar1 + 0x20) - (in_s0 + fVar4);
  fn_00525bd0();
  fVar4 = fVar4 * 0.024543693;
  fn_005df8f8();
  *(float *)(param_1 + 0x14) = fVar4;
  uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  fn_006a8fac(param_1);
  fn_00764608();
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  return;
}



void fn_001d870c(int param_1,float *param_2,undefined4 param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 2;
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar3 = 1.0 / fVar3;
  *(float *)(param_1 + 0x90) = (*param_2 - *(float *)(param_1 + 0x28)) * fVar3;
  *(float *)(param_1 + 0x94) = (fVar2 - *(float *)(param_1 + 0x2c)) * fVar3;
  *(float *)(param_1 + 0x98) = (fVar1 - *(float *)(param_1 + 0x30)) * fVar3;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  fVar1 = param_2[1];
  fVar3 = param_2[2];
  *(float *)(param_1 + 0x28) = *param_2;
  *(float *)(param_1 + 0x2c) = fVar1;
  *(float *)(param_1 + 0x30) = fVar3;
  return;
}


