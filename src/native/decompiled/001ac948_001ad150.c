#include "001ac948_001ad150.h"



void fn_001ad150(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  fVar8 = param_2[8];
  fVar9 = param_2[9];
  fVar10 = param_2[10];
  fVar11 = param_2[0xb];
  fVar12 = *param_3;
  fVar13 = param_3[1];
  fVar14 = param_3[2];
  *param_1 = *param_2 * fVar12;
  param_1[1] = fVar1 * fVar13;
  param_1[2] = fVar2 * fVar14;
  param_1[3] = fVar3;
  param_1[4] = fVar4 * fVar12;
  param_1[5] = fVar5 * fVar13;
  param_1[6] = fVar6 * fVar14;
  param_1[7] = fVar7;
  param_1[8] = fVar8 * fVar12;
  param_1[9] = fVar9 * fVar13;
  param_1[10] = fVar10 * fVar14;
  param_1[0xb] = fVar11;
  return;
}



void fn_001ad038(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar1 = param_2[3];
  fVar2 = param_2[4];
  fVar3 = param_2[5];
  fVar4 = param_2[6];
  fVar5 = param_2[7];
  fVar6 = param_2[8];
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  *param_1 = *param_2 * fVar7 + param_2[1] * fVar8 + param_2[2] * fVar9;
  param_1[1] = fVar1 * fVar7 + fVar2 * fVar8 + fVar3 * fVar9;
  param_1[2] = fVar4 * fVar7 + fVar5 * fVar8 + fVar6 * fVar9;
  return;
}



void fn_001acefc(int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((*(int *)(param_1 + 0x40) != 1) && (iVar2 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        fn_001ac8ac(iVar1,*(undefined4 *)(param_1 + 0x40));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}



void fn_001ace58(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_2 + 4) == 0) {
    *(undefined1 *)(param_2 + 0x11) = 3;
    return;
  }
  *(undefined4 *)(param_2 + 0x14) = 0;
  *(undefined1 *)(param_2 + 0x11) = 1;
  fn_00170704(iVar3 + 0x70);
  iVar4 = *(int *)(iVar3 + 0x30);
  if (iVar4 == 0) {
    *(int *)(iVar3 + 0x30) = param_2;
  }
  else {
    for (iVar1 = *(int *)(iVar4 + 0x14); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14)) {
      iVar4 = iVar1;
    }
    *(int *)(iVar4 + 0x14) = param_2;
  }
  sVar2 = *(short *)(iVar3 + 6);
  if (sVar2 == 0) {
    sVar2 = 1;
    *(undefined2 *)(iVar3 + 6) = 1;
  }
  *(short *)(param_2 + 0x12) = sVar2;
  *(short *)(iVar3 + 6) = *(short *)(iVar3 + 6) + 1;
  fn_001707b4(iVar3 + 0x70);
  return;
}



void fn_001acd50(int param_1)

{
  *(undefined1 *)(param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 0x6e) = 0;
  *(undefined1 *)(param_1 + 0x6f) = 0;
  *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) & 0xff80 | 5;
  *(undefined4 *)(param_1 + 0x68) = 0x3f800000;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x38) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 1;
  *(undefined4 *)(param_1 + 0x20) = 0x7fd8;
  *(undefined4 *)(param_1 + 0x24) = 0x3f800000;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x22;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 4;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_001ad020(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined2 *)(param_1 + 0x34) = 0;
  *(undefined2 *)(param_1 + 0x36) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  return;
}



undefined4 fn_001acb84(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  uint *puVar11;
  bool bVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined2 local_24;
  
  iVar7 = param_1;
  iVar13 = param_2;
  puVar14 = param_3;
  fn_00193374();
  iVar2 = fn_00189e18();
  if (iVar2 == 0) goto code_r0x001acd08;
  uVar10 = param_3[1];
  uVar1 = *(undefined2 *)((int)param_3 + 0x12);
  uVar3 = param_4 & 0xffff;
  uVar4 = uVar10;
  if ((param_4 & 0xc) == 0) {
    uVar8 = 1;
    if ((param_4 & 3) != 1) {
      if ((param_4 & 3) != 2) goto LAB_001acbdc;
LAB_001acc18:
      uVar8 = param_4 & 3;
      uVar4 = uVar10 << 1;
    }
  }
  else {
LAB_001acbdc:
    uVar8 = 1;
    if ((param_4 & 0xf) >> 2 == 1) {
      uVar8 = param_4 & 3;
      if (uVar8 == 1) goto LAB_001acc18;
      if (uVar8 == 2) {
        uVar4 = uVar10 << 2;
        goto LAB_001acc3c;
      }
    }
    bVar12 = (param_4 & 0xf) >> 2 == 2;
    if (bVar12) {
      uVar3 = param_4 & 3;
    }
    if (bVar12 && uVar3 == 1) {
      uVar8 = 0x92492493;
      iVar2 = (int)((longlong)(int)(uVar10 + 0xd) * -0x6db6db6d +
                    ((ulonglong)(uVar10 + 0xd) << 0x20) >> 0x20);
      uVar4 = ((iVar2 >> 3) - (iVar2 >> 0x1f)) * 8;
    }
  }
LAB_001acc3c:
  uVar4 = fn_0019e94c(*param_3,uVar4,*param_3,uVar8,iVar7,iVar13,puVar14);
  if (uVar4 == 0) {
code_r0x001acd08:
    fn_00193380();
    return 0;
  }
  puVar11 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined2 *)((int)puVar11 + 0xbe) = uVar1;
  puVar11[0x2b] = uVar4 >> 0x10 | uVar4 << 0x10;
  puVar11[0x2c] = uVar10 >> 0x10 | uVar10 << 0x10;
  local_24 = (undefined2)param_4;
  *(undefined2 *)(puVar11 + 0x2d) = local_24;
  *(ushort *)(puVar11 + 0x2f) =
       (ushort)puVar11[0x2f] & 0xfffd | ((short)*(char *)(param_3 + 4) & 1U) << 1;
  if ((param_4 & 0xf) >> 2 != 2) goto LAB_001acd24;
  puVar6 = (undefined2 *)param_3[2];
  if (puVar6 == (undefined2 *)0x0) {
LAB_001acd18:
    uVar5 = (ushort)puVar11[0x2f] & 0xfffe;
  }
  else {
    puVar9 = (undefined2 *)((int)puVar11 + 0xb6);
    *(undefined2 *)((int)puVar11 + 0xb6) = *puVar6;
    iVar7 = 1;
    do {
      iVar7 = iVar7 + -1;
      puVar9[1] = puVar6[1];
      puVar6 = puVar6 + 2;
      puVar9 = puVar9 + 2;
      *puVar9 = *puVar6;
    } while (iVar7 != 0);
    if (param_3[2] == 0) goto LAB_001acd18;
    uVar5 = (ushort)puVar11[0x2f] | 1;
  }
  *(ushort *)(puVar11 + 0x2f) = uVar5;
LAB_001acd24:
  *puVar11 = *puVar11 | 0x40200000;
  puVar11[0x29] = 0;
  fn_00193380();
  return 1;
}



undefined4 fn_001acac4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  if (*(short *)(*(int *)(param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 0x60 + param_2 * 4 +
                         0x1174) + 8) == *(short *)(param_3 + 0x12)) {
    *(short *)((int)puVar2 + 0xbe) = *(short *)(param_3 + 0x12);
    *(ushort *)(puVar2 + 0x2f) =
         (ushort)puVar2[0x2f] & 0xfffd | ((short)*(char *)(param_3 + 0x10) & 1U) << 1;
    puVar2[0x2c] = *(uint *)(param_3 + 4) >> 0x10 | *(uint *)(param_3 + 4) << 0x10;
    *puVar2 = *puVar2 | 8;
  }
  fn_00193380();
  return 1;
}



undefined4 fn_001ac948(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined2 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  bool bVar8;
  
  fn_00193374();
  iVar2 = fn_00189e18();
  if (iVar2 == 0) goto code_r0x001aca78;
  uVar6 = param_3[1];
  uVar1 = *(undefined2 *)((int)param_3 + 0x12);
  puVar7 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  uVar4 = puVar7[0x2d];
  uVar5 = uVar4 & 0xffff;
  uVar3 = uVar6;
  if ((uVar4 & 0xc) == 0) {
    if ((uVar4 & 3) != 1) {
      if ((uVar4 & 3) != 2) goto LAB_001ac9c4;
LAB_001aca00:
      uVar3 = uVar6 << 1;
    }
  }
  else {
LAB_001ac9c4:
    if ((uVar4 & 0xf) >> 2 == 1) {
      if ((uVar4 & 3) == 1) goto LAB_001aca00;
      if ((uVar4 & 3) == 2) {
        uVar3 = uVar6 << 2;
        goto LAB_001aca24;
      }
    }
    bVar8 = (uVar4 & 0xf) >> 2 == 2;
    if (bVar8) {
      uVar5 = uVar4 & 3;
    }
    if (bVar8 && uVar5 == 1) {
      iVar2 = (int)((longlong)(int)(uVar6 + 0xd) * -0x6db6db6d + ((ulonglong)(uVar6 + 0xd) << 0x20)
                   >> 0x20);
      uVar3 = ((iVar2 >> 3) - (iVar2 >> 0x1f)) * 8;
    }
  }
LAB_001aca24:
  uVar3 = fn_0019e94c(*param_3,uVar3);
  if (uVar3 != 0) {
    iVar2 = param_4 * 0x14;
    *(undefined2 *)(puVar7 + param_4 * 5 + 0x17) = uVar1;
    puVar7[param_4 * 5 + 0x13] = uVar3 >> 0x10 | uVar3 << 0x10;
    puVar7[param_4 * 5 + 0x14] = uVar6 >> 0x10 | uVar6 << 0x10;
    if (param_3[2] == 0) {
      *(ushort *)((int)puVar7 + iVar2 + 0x5a) = *(ushort *)((int)puVar7 + iVar2 + 0x5a) & 0xff00;
    }
    else {
      fn_0019bc50(puVar7 + param_4 * 5 + 0x15);
      *(undefined1 *)((int)puVar7 + iVar2 + 0x5a) = 1;
    }
    *(ushort *)((int)puVar7 + 0x4a) =
         *(ushort *)((int)puVar7 + 0x4a) | (ushort)(1 << (param_4 & 0xff));
    *(undefined1 *)((int)puVar7 + iVar2 + 0x5b) = *(undefined1 *)(param_3 + 4);
    *puVar7 = *puVar7 | 0x80000;
    fn_00193380();
    return 1;
  }
code_r0x001aca78:
  fn_00193380();
  return 0;
}


