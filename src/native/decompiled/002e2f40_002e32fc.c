#include "002e2f40_002e32fc.h"



undefined4 fn_002e32b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002e32fc();
  if (iVar1 != 0) {
    fn_0025fa58(DAT_00897800,*(undefined4 *)(iVar1 + 4));
    fn_0017d90c(param_1 + 4,iVar1 + 8);
    fn_002feef8(iVar1);
    param_2 = 0xffffffff;
  }
  return param_2;
}



int fn_002e32fc(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 8);
  while( true ) {
    if (piVar1 == (int *)(param_1 + 8)) {
      return 0;
    }
    if (piVar1[-2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return (int)(piVar1 + -2);
}



int fn_002e3264(int param_1)

{
  return param_1 * 9 + DAT_0089281c;
}



void fn_002e324c(void)

{
  DAT_0089281c = 0;
  DAT_00892820 = 0;
  return;
}



byte fn_002e322c(int param_1)

{
  return *(byte *)(param_1 * 9 + DAT_0089281c + 7) & 1;
}



byte fn_002e3228(int param_1)

{
  return *(byte *)(param_1 * 9 + DAT_0089281c + 7) & 1;
}



uint fn_002e3204(int param_1)

{
  return (*(byte *)(param_1 * 9 + DAT_0089281c + 7) & 3) >> 1;
}



byte fn_002e31e4(int param_1)

{
  return *(byte *)(param_1 * 9 + DAT_0089281c + 8) & 1;
}



void fn_002e3128(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00305244(param_1,3);
  *puVar1 = &DAT_0082093c;
  return;
}



void fn_002e30e0(undefined4 *param_1)

{
  *param_1 = &DAT_00820924;
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
    param_1[8] = 0;
  }
  fn_006887b8(param_1);
  fn_002feef8();
  return;
}



/* WARNING: Removing unreachable block (ram,0x005e0160) */
/* WARNING: Removing unreachable block (ram,0x005e0174) */
/* WARNING: Removing unreachable block (ram,0x005e0084) */
/* WARNING: Removing unreachable block (ram,0x005e0080) */
/* WARNING: Removing unreachable block (ram,0x005e0148) */
/* WARNING: Removing unreachable block (ram,0x005e014c) */
/* WARNING: Removing unreachable block (ram,0x005e0200) */
/* WARNING: Removing unreachable block (ram,0x005e0228) */
/* WARNING: Removing unreachable block (ram,0x005e0458) */

void fn_002e2f40(int param_1)

{
  uint uVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  uint *puVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 uVar17;
  bool bVar18;
  uint in_fpscr;
  int aiStack_e0 [2];
  int *apiStack_d8 [2];
  undefined4 uStack_d0;
  undefined2 uStack_cc;
  undefined2 uStack_ca;
  undefined1 uStack_c8;
  undefined1 uStack_b4;
  
  bVar18 = *(char *)(param_1 + 0x1b) != '\0';
  cVar2 = '\0';
  if (bVar18) {
    cVar2 = *(char *)(param_1 + 0x1c);
  }
  if (!bVar18 || cVar2 == '\0') {
    return;
  }
  if ((((byte)DAT_008c6304 & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c6304), iVar4 != 0)) {
    DAT_008f9e68 = 0x3f800000;
    DAT_008f9e6c = 0;
    DAT_008f9e70 = 0;
    DAT_008f9e74 = 0;
    DAT_008f9e78 = 0;
    DAT_008f9e7c = 0x3f800000;
    DAT_008f9e80 = 0;
    DAT_008f9e84 = 0;
    DAT_008f9e88 = 0;
    DAT_008f9e8c = 0;
    DAT_008f9e90 = 0x3f800000;
    DAT_008f9e94 = 0;
    DAT_008f9e98 = 0;
    DAT_008f9e9c = 0;
    DAT_008f9ea0 = 0;
    DAT_008f9ea4 = 0x3f800000;
  }
  fn_005dffcc(*(undefined4 *)(param_1 + 0x20),&DAT_008f9e68);
  fn_005dffa4(*(undefined4 *)(param_1 + 0x20),param_1 + 0x24);
  uVar5 = *(uint *)(param_1 + 0x18);
  uVar1 = (uVar5 & 0xffffff) >> 0x10;
  VectorSignedToFloat(uVar5 & 0xff,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat((uVar5 & 0xffff) >> 8,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(uVar5 >> 0x18,(byte)(in_fpscr >> 0x16) & 3);
  fn_005e0618(*(undefined4 *)(param_1 + 0x20),0,uVar5 & 0xff,uVar1);
  fn_005e0618(*(undefined4 *)(param_1 + 0x20),1);
  fn_005e0618(*(undefined4 *)(param_1 + 0x20),2);
  fn_005e0618(*(undefined4 *)(param_1 + 0x20),3);
  pcVar6 = *(char **)(*(int *)(param_1 + 0x20) + 4);
  uVar9 = *(undefined4 *)(pcVar6 + 0x814);
  uVar11 = *(undefined4 *)(pcVar6 + 0x818);
  uVar12 = *(undefined4 *)(pcVar6 + 0x81c);
  uVar13 = *(undefined4 *)(pcVar6 + 0x820);
  uVar14 = *(undefined4 *)(pcVar6 + 0x824);
  uVar15 = *(undefined4 *)(pcVar6 + 0x828);
  uVar17 = *(undefined4 *)(pcVar6 + 0x82c);
  iVar4 = *(int *)(*(int *)(pcVar6 + 0x7cc) + 4);
  *(undefined4 *)(iVar4 + 0x12940) = *(undefined4 *)(pcVar6 + 0x810);
  *(undefined4 *)(iVar4 + 0x12944) = uVar9;
  *(undefined4 *)(iVar4 + 0x12948) = uVar11;
  *(undefined4 *)(iVar4 + 0x1294c) = uVar12;
  *(undefined4 *)(iVar4 + 0x12950) = uVar13;
  *(undefined4 *)(iVar4 + 0x12954) = uVar14;
  *(undefined4 *)(iVar4 + 0x12958) = uVar15;
  *(undefined4 *)(iVar4 + 0x1295c) = uVar17;
  uVar9 = *(undefined4 *)(pcVar6 + 0x834);
  uVar11 = *(undefined4 *)(pcVar6 + 0x838);
  uVar12 = *(undefined4 *)(pcVar6 + 0x83c);
  uVar13 = *(undefined4 *)(pcVar6 + 0x840);
  uVar14 = *(undefined4 *)(pcVar6 + 0x844);
  uVar15 = *(undefined4 *)(pcVar6 + 0x848);
  uVar17 = *(undefined4 *)(pcVar6 + 0x84c);
  *(undefined4 *)(iVar4 + 0x12960) = *(undefined4 *)(pcVar6 + 0x830);
  *(undefined4 *)(iVar4 + 0x12964) = uVar9;
  *(undefined4 *)(iVar4 + 0x12968) = uVar11;
  *(undefined4 *)(iVar4 + 0x1296c) = uVar12;
  *(undefined4 *)(iVar4 + 0x12970) = uVar13;
  *(undefined4 *)(iVar4 + 0x12974) = uVar14;
  *(undefined4 *)(iVar4 + 0x12978) = uVar15;
  *(undefined4 *)(iVar4 + 0x1297c) = uVar17;
  uVar9 = *(undefined4 *)(pcVar6 + 0x7d4);
  uVar11 = *(undefined4 *)(pcVar6 + 0x7d8);
  uVar12 = *(undefined4 *)(pcVar6 + 0x7dc);
  uVar13 = *(undefined4 *)(pcVar6 + 0x7e0);
  uVar14 = *(undefined4 *)(pcVar6 + 0x7e4);
  uVar15 = *(undefined4 *)(pcVar6 + 0x7e8);
  uVar17 = *(undefined4 *)(pcVar6 + 0x7ec);
  iVar4 = *(int *)(*(int *)(pcVar6 + 0x7cc) + 4);
  *(undefined4 *)(iVar4 + 0x12900) = *(undefined4 *)(pcVar6 + 2000);
  *(undefined4 *)(iVar4 + 0x12904) = uVar9;
  *(undefined4 *)(iVar4 + 0x12908) = uVar11;
  *(undefined4 *)(iVar4 + 0x1290c) = uVar12;
  *(undefined4 *)(iVar4 + 0x12910) = uVar13;
  *(undefined4 *)(iVar4 + 0x12914) = uVar14;
  *(undefined4 *)(iVar4 + 0x12918) = uVar15;
  *(undefined4 *)(iVar4 + 0x1291c) = uVar17;
  uVar9 = *(undefined4 *)(pcVar6 + 0x7f4);
  uVar11 = *(undefined4 *)(pcVar6 + 0x7f8);
  uVar12 = *(undefined4 *)(pcVar6 + 0x7fc);
  uVar13 = *(undefined4 *)(pcVar6 + 0x800);
  uVar14 = *(undefined4 *)(pcVar6 + 0x804);
  uVar15 = *(undefined4 *)(pcVar6 + 0x808);
  uVar17 = *(undefined4 *)(pcVar6 + 0x80c);
  *(undefined4 *)(iVar4 + 0x12920) = *(undefined4 *)(pcVar6 + 0x7f0);
  *(undefined4 *)(iVar4 + 0x12924) = uVar9;
  *(undefined4 *)(iVar4 + 0x12928) = uVar11;
  *(undefined4 *)(iVar4 + 0x1292c) = uVar12;
  *(undefined4 *)(iVar4 + 0x12930) = uVar13;
  *(undefined4 *)(iVar4 + 0x12934) = uVar14;
  *(undefined4 *)(iVar4 + 0x12938) = uVar15;
  *(undefined4 *)(iVar4 + 0x1293c) = uVar17;
  fn_005e0484(*(undefined4 *)(*(int *)(pcVar6 + 0x7cc) + 4),(int)*pcVar6,0);
  fn_0012bc84(0x208,aiStack_e0);
  iVar4 = aiStack_e0[0];
  aiStack_e0[0] = fn_006ceb64(pcVar6 + 0x850,aiStack_e0[0],1);
  if (*(int *)(pcVar6 + 0x8d0) == 0) {
    aiStack_e0[0] = fn_0016ffac(aiStack_e0[0],1);
  }
  else {
    fn_001a379c(&uStack_d0);
    uStack_b4 = 0;
    uStack_d0 = fn_006e9f20(*(undefined4 *)(pcVar6 + 0x8d0));
    uStack_cc = fn_006e9f2c(*(undefined4 *)(pcVar6 + 0x8d0));
    uStack_ca = fn_006e9f38(*(undefined4 *)(pcVar6 + 0x8d0));
    uStack_c8 = fn_006e9e4c(*(undefined4 *)(pcVar6 + 0x8d0));
    aiStack_e0[0] = fn_001ab7ac(&uStack_d0,aiStack_e0[0],1);
  }
  aiStack_e0[0] = fn_00176818(pcVar6 + 0x8d4,aiStack_e0[0]);
  fn_001467e4(aiStack_e0[0] - iVar4 & 0xfffffffc);
  fn_0012bc84(0x208,apiStack_d8);
  piVar3 = apiStack_d8[0];
  fn_0014ff08(*(undefined4 *)(pcVar6 + 8),*(int *)(pcVar6 + 4) * 0xc);
  fn_0014ff08(*(undefined4 *)(pcVar6 + 0xc),*(int *)(pcVar6 + 4) << 4);
  fn_0014ff08(*(undefined4 *)(pcVar6 + 0x10),*(int *)(pcVar6 + 4) << 3);
  *apiStack_d8[0] = 0;
  apiStack_d8[0][1] = 0xf0201;
  apiStack_d8[0][2] = 0;
  apiStack_d8[0][3] = 0xf0202;
  fn_00301f50(apiStack_d8[0] + 4,0x98);
  piVar7 = apiStack_d8[0] + 0x2a;
  iVar4 = 0;
  apiStack_d8[0][5] = -0x7dc0fdfd;
  iVar10 = 0xc;
  do {
    iVar10 = iVar10 + -1;
    piVar7[2] = 0;
    piVar7[3] = 0;
    piVar7[4] = 0;
    piVar7[5] = 0;
    *piVar7 = iVar4;
    piVar7[1] = -0x7fc0fdce;
    piVar7 = piVar7 + 6;
    iVar4 = iVar4 + 1;
  } while (iVar10 != 0);
  piVar7 = apiStack_d8[0] + 0x72;
  iVar4 = *(int *)(pcVar6 + 0x18);
  piVar16 = (int *)(pcVar6 + 0x18);
  apiStack_d8[0] = piVar7;
  if (iVar4 == 0) {
    iVar4 = fn_001830e0(piVar16,pcVar6 + 0x1c);
    iVar4 = (iVar4 - (int)piVar16) + -4 >> 2;
    *piVar16 = iVar4;
  }
  fn_0017821c(piVar7,pcVar6 + 0x1c,iVar4 << 2);
  apiStack_d8[0] = piVar7 + *piVar16;
  piVar7 = (int *)fn_006cf79c(pcVar6 + 0x18,apiStack_d8[0],pcVar6 + 0x7a8);
  iVar4 = 0;
  do {
    if (*(int *)(pcVar6 + iVar4 * 0x70 + 0x178) == 0) {
      puVar8 = (uint *)(piVar7 + 1);
      *piVar7 = 0;
      piVar7 = piVar7 + 2;
      *puVar8 = iVar4 * 3 + 0x205U | 0xf0000;
    }
    else {
      *piVar7 = 0;
      piVar7[1] = iVar4 * 3 + 0x203U | 0x802f0000;
      piVar16 = piVar7 + 3;
      piVar7[2] = 0;
      piVar7 = piVar7 + 4;
      *piVar16 = 0;
    }
    if (pcVar6[iVar4 * 0x14 + 0x6b8] != '\0') {
      *piVar7 = iVar4;
      piVar7[1] = -0x7fc0fdce;
      piVar7[2] = 0;
      piVar7[3] = 0;
      piVar16 = piVar7 + 5;
      piVar7[4] = 0;
      piVar7 = piVar7 + 6;
      *piVar16 = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xc);
  *piVar7 = 0;
  piVar7[1] = 0xf0201;
  piVar7[2] = 0;
  piVar7[3] = 0xf0202;
  apiStack_d8[0] = piVar7;
  fn_00301f50(piVar7 + 4,0x98);
  piVar16 = piVar7 + 0x2a;
  iVar4 = 0;
  piVar7[5] = -0x7dc0fdfd;
  iVar10 = 0xc;
  do {
    iVar10 = iVar10 + -1;
    piVar16[2] = 0;
    piVar16[3] = 0;
    piVar16[4] = 0;
    piVar16[5] = 0;
    *piVar16 = iVar4;
    piVar16[1] = -0x7fc0fdce;
    piVar16 = piVar16 + 6;
    iVar4 = iVar4 + 1;
  } while (iVar10 != 0);
  apiStack_d8[0] = piVar7 + 0x72;
  fn_001467e4((int)apiStack_d8[0] - (int)piVar3 & 0xfffffffc);
  return;
}


