#include "005e0004_005e0784.h"



void fn_005e0784(void)

{
  fn_0016e9e0((char *)&DAT_005e0874);
  return;
}



void fn_005e06b8(void)

{
  int iVar1;
  undefined1 *local_28 [4];
  undefined4 local_18;
  undefined1 *local_14;
  undefined *local_10;
  undefined1 *local_c;
  
  fn_005f3aac(1);
  DAT_008d28c0 = 1;
  DAT_008d28c4 = 1;
  DAT_008d28c8 = 1;
  DAT_0089a4e8 = 1;
  local_28[0] = &LAB_005e087c;
  local_18 = 4;
  local_14 = &LAB_0010fbd0;
  local_10 = &DAT_0010fbec;
  local_c = &LAB_0010fbe0;
  iVar1 = fn_0014e2f4(&DAT_0089a4fc,&local_18,&DAT_0010b2a0,local_28,&DAT_008d38d0,0xf,0xfffffffe,0
                      );
  if (iVar1 < 0) {
    fn_0015e294();
  }
  return;
}



void fn_005e062c(undefined4 *param_1)

{
  *param_1 = &DAT_00858910;
  if (param_1[1] != 0) {
    fn_00142abc();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



void fn_005e0618(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined4 in_s3;
  
  puVar1 = (undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + param_2 * 0x10);
  *puVar1 = in_s0;
  puVar1[1] = in_s1;
  puVar1[2] = in_s2;
  puVar1[3] = in_s3;
  return;
}



void fn_005e05d4(undefined4 *param_1)

{
  int *piVar1;
  
  *param_1 = &DAT_00858900;
  piVar1 = (int *)param_1[1];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      fn_00142b64(*piVar1,piVar1[1]);
    }
    fn_002feef8(piVar1);
  }
  fn_002feef8(param_1);
  return;
}



void fn_005e0004(char *param_1,int *param_2,float *param_3)

{
  int *piVar1;
  int iVar2;
  float *pfVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int *local_e0 [2];
  int *local_d8 [2];
  undefined4 local_d0;
  undefined2 local_cc;
  undefined2 local_ca;
  undefined1 local_c8;
  undefined1 local_b4;
  
  uVar7 = *(undefined4 *)(param_1 + 0x814);
  uVar8 = *(undefined4 *)(param_1 + 0x818);
  uVar9 = *(undefined4 *)(param_1 + 0x81c);
  uVar10 = *(undefined4 *)(param_1 + 0x820);
  uVar11 = *(undefined4 *)(param_1 + 0x824);
  uVar12 = *(undefined4 *)(param_1 + 0x828);
  uVar14 = *(undefined4 *)(param_1 + 0x82c);
  iVar2 = *(int *)(*(int *)(param_1 + 0x7cc) + 4);
  *(undefined4 *)(iVar2 + 0x12940) = *(undefined4 *)(param_1 + 0x810);
  *(undefined4 *)(iVar2 + 0x12944) = uVar7;
  *(undefined4 *)(iVar2 + 0x12948) = uVar8;
  *(undefined4 *)(iVar2 + 0x1294c) = uVar9;
  *(undefined4 *)(iVar2 + 0x12950) = uVar10;
  *(undefined4 *)(iVar2 + 0x12954) = uVar11;
  *(undefined4 *)(iVar2 + 0x12958) = uVar12;
  *(undefined4 *)(iVar2 + 0x1295c) = uVar14;
  uVar7 = *(undefined4 *)(param_1 + 0x834);
  uVar8 = *(undefined4 *)(param_1 + 0x838);
  uVar9 = *(undefined4 *)(param_1 + 0x83c);
  uVar10 = *(undefined4 *)(param_1 + 0x840);
  uVar11 = *(undefined4 *)(param_1 + 0x844);
  uVar12 = *(undefined4 *)(param_1 + 0x848);
  uVar14 = *(undefined4 *)(param_1 + 0x84c);
  *(undefined4 *)(iVar2 + 0x12960) = *(undefined4 *)(param_1 + 0x830);
  *(undefined4 *)(iVar2 + 0x12964) = uVar7;
  *(undefined4 *)(iVar2 + 0x12968) = uVar8;
  *(undefined4 *)(iVar2 + 0x1296c) = uVar9;
  *(undefined4 *)(iVar2 + 0x12970) = uVar10;
  *(undefined4 *)(iVar2 + 0x12974) = uVar11;
  *(undefined4 *)(iVar2 + 0x12978) = uVar12;
  *(undefined4 *)(iVar2 + 0x1297c) = uVar14;
  uVar7 = *(undefined4 *)(param_1 + 0x7d4);
  uVar8 = *(undefined4 *)(param_1 + 0x7d8);
  uVar9 = *(undefined4 *)(param_1 + 0x7dc);
  uVar10 = *(undefined4 *)(param_1 + 0x7e0);
  uVar11 = *(undefined4 *)(param_1 + 0x7e4);
  uVar12 = *(undefined4 *)(param_1 + 0x7e8);
  uVar14 = *(undefined4 *)(param_1 + 0x7ec);
  iVar2 = *(int *)(*(int *)(param_1 + 0x7cc) + 4);
  *(undefined4 *)(iVar2 + 0x12900) = *(undefined4 *)(param_1 + 2000);
  *(undefined4 *)(iVar2 + 0x12904) = uVar7;
  *(undefined4 *)(iVar2 + 0x12908) = uVar8;
  *(undefined4 *)(iVar2 + 0x1290c) = uVar9;
  *(undefined4 *)(iVar2 + 0x12910) = uVar10;
  *(undefined4 *)(iVar2 + 0x12914) = uVar11;
  *(undefined4 *)(iVar2 + 0x12918) = uVar12;
  *(undefined4 *)(iVar2 + 0x1291c) = uVar14;
  uVar7 = *(undefined4 *)(param_1 + 0x7f4);
  uVar8 = *(undefined4 *)(param_1 + 0x7f8);
  uVar9 = *(undefined4 *)(param_1 + 0x7fc);
  uVar10 = *(undefined4 *)(param_1 + 0x800);
  uVar11 = *(undefined4 *)(param_1 + 0x804);
  uVar12 = *(undefined4 *)(param_1 + 0x808);
  uVar14 = *(undefined4 *)(param_1 + 0x80c);
  *(undefined4 *)(iVar2 + 0x12920) = *(undefined4 *)(param_1 + 0x7f0);
  *(undefined4 *)(iVar2 + 0x12924) = uVar7;
  *(undefined4 *)(iVar2 + 0x12928) = uVar8;
  *(undefined4 *)(iVar2 + 0x1292c) = uVar9;
  *(undefined4 *)(iVar2 + 0x12930) = uVar10;
  *(undefined4 *)(iVar2 + 0x12934) = uVar11;
  *(undefined4 *)(iVar2 + 0x12938) = uVar12;
  *(undefined4 *)(iVar2 + 0x1293c) = uVar14;
  fn_005e0484(*(undefined4 *)(*(int *)(param_1 + 0x7cc) + 4),(int)*param_1,param_2);
  if (param_2 == (int *)0x0) {
    fn_0012bc84(0x208,local_e0);
  }
  else {
    local_e0[0] = (int *)*param_2;
  }
  piVar1 = local_e0[0];
  local_e0[0] = (int *)fn_006ceb64(param_1 + 0x850,local_e0[0],1);
  if (*(int *)(param_1 + 0x8d0) == 0) {
    local_e0[0] = (int *)fn_0016ffac(local_e0[0],1);
  }
  else {
    fn_001a379c(&local_d0);
    local_b4 = 0;
    local_d0 = fn_006e9f20(*(undefined4 *)(param_1 + 0x8d0));
    local_cc = fn_006e9f2c(*(undefined4 *)(param_1 + 0x8d0));
    local_ca = fn_006e9f38(*(undefined4 *)(param_1 + 0x8d0));
    local_c8 = fn_006e9e4c(*(undefined4 *)(param_1 + 0x8d0));
    local_e0[0] = (int *)fn_001ab7ac(&local_d0,local_e0[0],1);
  }
  local_e0[0] = (int *)fn_00176818(param_1 + 0x8d4,local_e0[0]);
  if (param_2 == (int *)0x0) {
    fn_001467e4((int)local_e0[0] - (int)piVar1 & 0xfffffffc);
    fn_0012bc84(0x208,local_d8);
  }
  else {
    *param_2 = (int)local_e0[0];
    local_d8[0] = local_e0[0];
  }
  piVar1 = local_d8[0];
  if ((param_3 != (float *)0x0) && (iVar2 = 0, 0 < *(int *)(param_1 + 4))) {
    do {
      pfVar3 = (float *)(*(int *)(param_1 + 8) + iVar2 * 0xc);
      iVar2 = iVar2 + 1;
      *pfVar3 = *pfVar3 + *param_3;
      pfVar3[1] = pfVar3[1] + param_3[1];
      pfVar3[2] = pfVar3[2] + param_3[2];
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  fn_0014ff08(*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 4) * 0xc);
  fn_0014ff08(*(undefined4 *)(param_1 + 0xc),*(int *)(param_1 + 4) << 4);
  fn_0014ff08(*(undefined4 *)(param_1 + 0x10),*(int *)(param_1 + 4) << 3);
  piVar4 = local_d8[0];
  if (param_3 != (float *)0x0) {
    fVar15 = *param_3;
    fVar17 = param_3[1];
    fVar16 = param_3[2];
    iVar2 = 0;
    if (0 < *(int *)(param_1 + 4)) {
      do {
        iVar6 = iVar2 + 1;
        pfVar3 = (float *)(*(int *)(param_1 + 8) + iVar2 * 0xc);
        *pfVar3 = *pfVar3 + -fVar15;
        pfVar3[1] = pfVar3[1] + -fVar17;
        pfVar3[2] = pfVar3[2] + -fVar16;
        iVar2 = iVar6;
      } while (iVar6 < *(int *)(param_1 + 4));
    }
  }
  *local_d8[0] = 0;
  local_d8[0][1] = 0xf0201;
  local_d8[0][2] = 0;
  local_d8[0][3] = 0xf0202;
  fn_00301f50(local_d8[0] + 4,0x98);
  piVar13 = piVar4 + 0x2a;
  iVar2 = 0;
  piVar4[5] = -0x7dc0fdfd;
  iVar6 = 0xc;
  do {
    iVar6 = iVar6 + -1;
    piVar13[2] = 0;
    piVar13[3] = 0;
    piVar13[4] = 0;
    piVar13[5] = 0;
    *piVar13 = iVar2;
    piVar13[1] = -0x7fc0fdce;
    piVar13 = piVar13 + 6;
    iVar2 = iVar2 + 1;
  } while (iVar6 != 0);
  piVar4 = piVar4 + 0x72;
  iVar2 = *(int *)(param_1 + 0x18);
  piVar13 = (int *)(param_1 + 0x18);
  local_d8[0] = piVar4;
  if (iVar2 == 0) {
    iVar2 = fn_001830e0(piVar13,param_1 + 0x1c);
    iVar2 = (iVar2 - (int)piVar13) + -4 >> 2;
    *piVar13 = iVar2;
  }
  fn_0017821c(piVar4,param_1 + 0x1c,iVar2 << 2);
  local_d8[0] = piVar4 + *piVar13;
  piVar4 = (int *)fn_006cf79c(param_1 + 0x18,local_d8[0],param_1 + 0x7a8);
  iVar2 = 0;
  do {
    if (*(int *)(param_1 + iVar2 * 0x70 + 0x178) == 0) {
      puVar5 = (uint *)(piVar4 + 1);
      *piVar4 = 0;
      piVar4 = piVar4 + 2;
      *puVar5 = iVar2 * 3 + 0x205U | 0xf0000;
    }
    else {
      *piVar4 = 0;
      piVar4[1] = iVar2 * 3 + 0x203U | 0x802f0000;
      piVar13 = piVar4 + 3;
      piVar4[2] = 0;
      piVar4 = piVar4 + 4;
      *piVar13 = 0;
    }
    if (param_1[iVar2 * 0x14 + 0x6b8] != '\0') {
      *piVar4 = iVar2;
      piVar4[1] = -0x7fc0fdce;
      piVar4[2] = 0;
      piVar4[3] = 0;
      piVar13 = piVar4 + 5;
      piVar4[4] = 0;
      piVar4 = piVar4 + 6;
      *piVar13 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xc);
  *piVar4 = 0;
  piVar4[1] = 0xf0201;
  piVar4[2] = 0;
  piVar4[3] = 0xf0202;
  local_d8[0] = piVar4;
  fn_00301f50(piVar4 + 4,0x98);
  piVar13 = piVar4 + 0x2a;
  iVar2 = 0;
  piVar4[5] = -0x7dc0fdfd;
  iVar6 = 0xc;
  do {
    iVar6 = iVar6 + -1;
    piVar13[2] = 0;
    piVar13[3] = 0;
    piVar13[4] = 0;
    piVar13[5] = 0;
    *piVar13 = iVar2;
    piVar13[1] = -0x7fc0fdce;
    piVar13 = piVar13 + 6;
    iVar2 = iVar2 + 1;
  } while (iVar6 != 0);
  local_d8[0] = piVar4 + 0x72;
  if (param_2 == (int *)0x0) {
    fn_001467e4((int)local_d8[0] - (int)piVar1 & 0xfffffffc);
  }
  else {
    *param_2 = (int)local_d8[0];
  }
  return;
}



void fn_005e0484(int param_1,uint param_2,int *param_3)

{
  uint *puVar1;
  int iVar2;
  undefined1 uVar3;
  uint *local_28;
  int local_24;
  
  if (param_3 == (int *)0x0) {
    fn_0012bc84(0x208,&local_28);
  }
  else {
    local_28 = (uint *)*param_3;
  }
  puVar1 = local_28;
  *local_28 = *(byte *)(param_1 + 0x128f2) | 0x80000000;
  local_28[1] = 0xf02c0;
  fn_001ad5b4(local_28 + 2,param_1 + 0x12900,0xff02c1);
  local_28 = puVar1 + 0x14;
  *local_28 = *(byte *)(param_1 + 0x128fa) | 0x80000000;
  puVar1[0x15] = 0xf02c0;
  fn_001ad5b4(puVar1 + 0x16,param_1 + 0x12940,0xff02c1);
  local_28 = puVar1 + 0x28;
  if (param_3 == (int *)0x0) {
    fn_001467e4((int)local_28 - (int)puVar1 & 0xfffffffc);
  }
  else {
    *param_3 = (int)local_28;
  }
  uVar3 = 1;
  if (param_2 == 0) {
    uVar3 = 3;
  }
  if ((1 < param_2) && (param_2 == 2)) {
    uVar3 = 2;
  }
  *(undefined1 *)(param_1 + 0x2a0) = uVar3;
  if (param_3 == (int *)0x0) {
    fn_0012bc84(0x208,&local_24);
  }
  else {
    local_24 = *param_3;
  }
  iVar2 = local_24;
  local_24 = fn_006cf4c4(param_1 + 8);
  if (param_3 == (int *)0x0) {
    fn_001467e4(local_24 - iVar2 & 0xfffffffc);
  }
  else {
    *param_3 = local_24;
  }
  return;
}


