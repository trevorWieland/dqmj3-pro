#include "001d068c_001d8a5c.h"



void fn_001d8a5c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  float in_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined8 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  
  if ((*(char *)(param_1 + 0xd) != '\x03') && (*(char *)(DAT_008977e0 + 0x170) == '\0')) {
    return;
  }
  fn_006f7a84();
  iVar2 = fn_006aae08();
  if (iVar2 == 0) {
    switch(*(undefined1 *)(param_1 + 0xd)) {
    case 0:
    case 3:
    case 4:
    case 7:
      fn_001d8164(param_1);
      break;
    case 1:
      fn_001d88a4(param_1);
      break;
    case 5:
      fn_001d72d4(param_1);
      break;
    case 6:
      fn_001d8778(param_1);
    }
  }
  fn_001d674c(param_1);
  fn_001d6030(param_1);
  uVar17 = 0;
  if (*(char *)(param_1 + 0x15f) == '\0') {
    fn_0033cd5c(param_1 + 0x60);
    iVar2 = fn_006c163c(param_1 + 0x60);
    uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
    if (iVar2 == 0) {
      in_s0 = *(float *)(param_1 + 0x74);
      fn_001d70a0(param_1);
    }
    else {
      *(undefined4 *)(param_1 + 0x154) = uVar4;
      *(undefined4 *)(param_1 + 0x158) = uVar4;
    }
  }
  else {
    fn_001d622c(param_1);
  }
  piVar3 = (int *)fn_006f72e0(DAT_008977e0);
  iVar2 = (**(code **)(*piVar3 + 0x68))();
  uVar4 = (undefined4)((ulonglong)uVar17 >> 0x20);
  if (iVar2 == 0) {
    iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
    uVar17 = CONCAT44(uVar4,*(undefined4 *)(iVar2 + 0x68));
    uVar4 = 0;
    fn_006f7a84(DAT_008977e0);
    iVar2 = fn_006aa6e0();
    if (iVar2 == 0) {
      fn_006f7a84(DAT_008977e0);
      iVar2 = fn_006a99b0();
      if (iVar2 == 0) goto LAB_001d8c38;
    }
    fn_006f7a84(DAT_008977e0);
    fn_006aab00();
    if ((float)uVar17 < in_s0) {
      uVar4 = 1;
    }
  }
  else {
    piVar3 = (int *)fn_006f72e0(DAT_008977e0);
    piVar3 = (int *)(**(code **)(*piVar3 + 0x78))();
    uVar4 = (**(code **)(*piVar3 + 0x1c))();
  }
LAB_001d8c38:
  fVar18 = (float)((ulonglong)uVar17 >> 0x20);
  iVar2 = fn_006f7a0c(DAT_008977e0);
  fn_003696cc(*(undefined4 *)(iVar2 + 0x30),uVar4);
  iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  iVar5 = (**(code **)(**(int **)(iVar2 + 600) + 0x18))();
  if (iVar5 == 1) {
    fVar19 = *(float *)(iVar2 + 0x98);
    fVar20 = *(float *)(iVar2 + 0xa8);
    fVar16 = *(float *)(iVar2 + 0xb8);
    pfVar6 = (float *)fn_006dcd40(iVar2);
    fVar23 = *pfVar6;
    fVar21 = pfVar6[1];
    fVar22 = pfVar6[2];
    pfVar6 = (float *)fn_006dcd10(iVar2);
    fVar7 = *pfVar6;
    fVar8 = pfVar6[1];
    fVar9 = pfVar6[2];
    if ((((fVar19 != fVar23 || (fVar19 != fVar23 || fVar20 != fVar21)) || fVar16 != fVar22) &&
        ((fVar7 != fVar18 || (fVar7 != fVar18 || fVar8 != fVar18)) || fVar9 != fVar18)) &&
       (bVar1 = fVar8 * (fVar22 - fVar16) - fVar9 * (fVar21 - fVar20) != fVar18,
       (bVar1 || (bVar1 || fVar9 * (fVar23 - fVar19) - fVar7 * (fVar22 - fVar16) != fVar18)) ||
       fVar7 * (fVar21 - fVar20) - fVar8 * (fVar23 - fVar19) != fVar18)) {
      fn_00176d68(*(undefined4 *)(param_1 + 4));
      fn_00545778();
      iVar2 = fn_00176d68(*(undefined4 *)(param_1 + 4));
      uVar4 = *(undefined4 *)(iVar2 + 0x14c);
      uVar10 = *(undefined4 *)(iVar2 + 0x150);
      uVar11 = *(undefined4 *)(iVar2 + 0x154);
      uVar12 = *(undefined4 *)(iVar2 + 0x158);
      uVar13 = *(undefined4 *)(iVar2 + 0x15c);
      uVar14 = *(undefined4 *)(iVar2 + 0x160);
      uVar15 = *(undefined4 *)(iVar2 + 0x164);
      *(undefined4 *)(param_1 + 0x108) = *(undefined4 *)(iVar2 + 0x148);
      *(undefined4 *)(param_1 + 0x10c) = uVar4;
      *(undefined4 *)(param_1 + 0x110) = uVar10;
      *(undefined4 *)(param_1 + 0x114) = uVar11;
      *(undefined4 *)(param_1 + 0x118) = uVar12;
      *(undefined4 *)(param_1 + 0x11c) = uVar13;
      *(undefined4 *)(param_1 + 0x120) = uVar14;
      *(undefined4 *)(param_1 + 0x124) = uVar15;
      uVar4 = *(undefined4 *)(iVar2 + 0x16c);
      uVar10 = *(undefined4 *)(iVar2 + 0x170);
      uVar11 = *(undefined4 *)(iVar2 + 0x174);
      *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)(iVar2 + 0x168);
      *(undefined4 *)(param_1 + 300) = uVar4;
      *(undefined4 *)(param_1 + 0x130) = uVar10;
      *(undefined4 *)(param_1 + 0x134) = uVar11;
    }
  }
  return;
}



void fn_001d068c(int param_1,short *param_2,short *param_3)

{
  undefined1 uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  short *psVar10;
  int iVar11;
  int iVar12;
  short *psVar13;
  uint uVar14;
  int iVar15;
  bool bVar16;
  
  iVar11 = (int)param_2[1];
  iVar12 = (int)*param_2;
  bVar16 = iVar11 == 0x295 || iVar11 == 0x296;
  if (iVar11 != 0x295 && iVar11 != 0x296) {
    bVar16 = iVar11 == 0x29b;
  }
  if (bVar16) {
    iVar11 = fn_00661518(iVar11);
  }
  *param_3 = (short)iVar11;
  uVar1 = fn_00661094(iVar11);
  *(undefined1 *)(param_3 + 1) = uVar1;
  iVar5 = fn_0015b064(iVar11);
  if ((iVar5 != 0) && (iVar6 = fn_00100b58(), iVar6 + 1U < 0xd)) {
    fn_001003e0(param_3 + 2,iVar5);
  }
  uVar1 = fn_00661600(iVar11);
  *(undefined1 *)(param_3 + 0x1ff) = uVar1;
  uVar1 = fn_00661534(iVar11);
  *(undefined1 *)((int)param_3 + 0x3ff) = uVar1;
  sVar3 = fn_0066161c(iVar11);
  param_3[0x201] = sVar3;
  uVar4 = fn_006616a8(iVar11);
  param_3[0x200] = uVar4;
  if (((char)param_2[3] == '\0') && (iVar5 = fn_0013ad98(iVar12), iVar5 == 2)) {
    *(undefined1 *)(param_3 + 0x1ff) = 7;
    *(undefined1 *)((int)param_3 + 0x3ff) = 0;
  }
  else {
    uVar1 = fn_00661600(iVar11);
    *(undefined1 *)(param_3 + 0x1ff) = uVar1;
    uVar1 = fn_00661534(iVar11);
    *(undefined1 *)((int)param_3 + 0x3ff) = uVar1;
  }
  uVar4 = fn_0066161c(iVar11);
  param_3[0x201] = uVar4 & 0xff;
  uVar4 = fn_006616a8(iVar11);
  param_3[0x200] = uVar4 & 0xff;
  cVar2 = (char)param_2[3];
  if (cVar2 == '\0') {
LAB_001d07d4:
    sVar3 = fn_002e9d44(iVar12);
    param_3[0x10] = sVar3;
    sVar3 = fn_002e9d9c(iVar12);
    param_3[0x11] = sVar3;
    iVar5 = fn_002e9d9c(iVar12);
    if (iVar5 == 10000) {
      fn_00654cc4(param_3 + 0x203,4,1);
      param_3[0x11] = 9999;
    }
    sVar3 = fn_002ea074(iVar12);
    param_3[0x12] = sVar3;
    sVar3 = fn_002ea124(iVar12);
    param_3[0x13] = sVar3;
    sVar3 = fn_002e9df4(iVar12);
    param_3[0x14] = sVar3;
    sVar3 = fn_002e9b88(iVar12);
    param_3[0x15] = sVar3;
    *(undefined4 *)(param_3 + 0x16) = *(undefined4 *)(param_3 + 0x10);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x12);
    *(undefined4 *)(param_3 + 0x1a) = *(undefined4 *)(param_3 + 0x14);
    param_3[0xe] = param_3[0x16];
    param_3[0xf] = param_3[0x17];
    uVar1 = fn_002e9ce8(iVar12);
    *(undefined1 *)(param_3 + 0x2c) = uVar1;
    if (*(char *)(param_1 + 4) == '\x05') {
      uVar1 = fn_002ea308((int)*param_2);
    }
    else {
      uVar1 = fn_00215e7c(iVar12);
    }
    uVar14 = 0;
    *(undefined1 *)((int)param_3 + 0x59) = uVar1;
    iVar5 = 0;
    do {
      sVar3 = fn_002ea474(iVar12,uVar14 & 0xff);
      iVar6 = iVar5;
      if ((int)sVar3 - 1U < 699) {
        iVar6 = iVar5 + 1;
        (param_3 + 0x90)[iVar5 + 2] = sVar3;
      }
      uVar14 = uVar14 + 1;
      iVar5 = iVar6;
    } while ((int)uVar14 < 6);
    *(char *)(param_3 + 0x90) = (char)iVar6;
    uVar7 = fn_002e9be0(iVar12);
    psVar13 = param_3 + 0x142;
    sVar3 = fn_00660a50((int)*(char *)((int)param_3 + 0x59));
    *psVar13 = sVar3;
    iVar5 = 1;
    iVar6 = 0;
    if (*(char *)((int)param_3 + 0x59) == 0) {
      iVar15 = 2;
    }
    else {
      iVar15 = *(char *)((int)param_3 + 0x59) + 1;
    }
    if (0 < iVar15) {
      do {
        iVar8 = fn_006616f4((int)*param_3,iVar6);
        if (iVar8 - 1U < 0x21f) {
          psVar10 = psVar13 + iVar5;
          iVar5 = iVar5 + 1;
          *psVar10 = (short)iVar8;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar15);
    }
    iVar15 = 0;
    iVar6 = fn_006614d0(uVar7);
    if (0 < iVar6) {
      do {
        iVar6 = fn_00661248((int)*param_3,iVar15);
        if (iVar6 - 1U < 0x21f) {
          psVar10 = psVar13 + iVar5;
          iVar5 = iVar5 + 1;
          *psVar10 = (short)iVar6;
        }
        iVar15 = iVar15 + 1;
        iVar6 = fn_006614d0(uVar7);
      } while (iVar15 < iVar6);
    }
    fn_00654c74(psVar13);
    uVar7 = fn_002e9be0(iVar12);
    iVar5 = 0;
    do {
      uVar9 = fn_00661430(iVar11,iVar5,uVar7);
      fn_00358258(param_3 + 0x1d2,iVar5,uVar9);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1a);
    uVar14 = 1;
    do {
      uVar7 = fn_001f89d8(uVar14 & 0xff,*(undefined1 *)((int)param_3 + uVar14 + 0x3a4),
                           param_3 + 0x142,0x4c);
      fn_00358258(param_3 + 0x1d2,uVar14,uVar7);
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < 0x1a);
    switch(*(undefined1 *)(param_1 + 4)) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      iVar5 = fn_00174870();
      if ((*(uint *)(iVar5 + 0x18) >> 8 & 1) != 0 && param_3 != (short *)0x0) {
        *(undefined1 *)((int)param_3 + 0x3bb) = 5;
        *(undefined1 *)((int)param_3 + 0x3d5) = 1;
        *(undefined1 *)((int)param_3 + 0x3bd) = 5;
        *(undefined1 *)((int)param_3 + 0x3d7) = 1;
      }
    }
    cVar2 = fn_002e99b0(iVar12);
    *(char *)(param_3 + 0x1fd) = cVar2;
    if (cVar2 == '\x05') {
      sVar3 = param_3[0x90];
      uVar1 = 0;
      if ((char)sVar3 != '\x01') {
        uVar7 = fn_005f65d4();
        fn_00300f74(uVar7,(char)sVar3);
        uVar1 = extraout_r1;
      }
      *(undefined1 *)(param_3 + 0x1fe) = uVar1;
    }
    else if ((cVar2 == '\x06' || cVar2 == '\a') || (cVar2 != '\b')) {
      *(undefined1 *)(param_3 + 0x1fe) = 0;
    }
    else {
      uVar7 = fn_005f65d4();
      fn_00300f74(uVar7,2);
      *(undefined1 *)(param_3 + 0x1fe) = extraout_r1_00;
    }
    iVar5 = fn_002ea1ec(iVar12);
    if (iVar5 == 1) {
      uVar1 = 5;
    }
    else if (iVar5 == 2) {
      uVar1 = 6;
    }
    else if (iVar5 == 3) {
      uVar1 = 7;
    }
    else {
      uVar1 = 0xff;
    }
    *(undefined1 *)((int)param_3 + 0x3fb) = uVar1;
    fn_00358c20(iVar11);
    sVar3 = fn_00358548();
    param_3[0x1fa] = sVar3;
    uVar1 = fn_002e9f9c(iVar12);
    *(undefined1 *)(param_3 + 0x1fc) = uVar1;
    sVar3 = fn_002ea4e0(iVar12);
    param_3[0x1fb] = sVar3;
    uVar7 = fn_002ea2b0(iVar12);
  }
  else {
    if (cVar2 != '\x01') {
      if (cVar2 != '\x02') {
        uVar7 = *(undefined4 *)(param_3 + 0x204);
        goto LAB_001d0b88;
      }
      goto LAB_001d07d4;
    }
    fn_006ca25c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),param_3,iVar11);
    sVar3 = fn_00358548(iVar11);
    param_3[0x1fa] = sVar3;
    uVar1 = fn_006c9900(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),iVar11,0);
    *(undefined1 *)(param_3 + 0x1fc) = uVar1;
    sVar3 = fn_006c8ac0(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),iVar11);
    param_3[0x1fb] = sVar3;
    *(undefined1 *)(param_3 + 0x1fd) = 9;
    uVar7 = fn_006ca788(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4),iVar11);
  }
  *(undefined4 *)(param_3 + 0x204) = uVar7;
LAB_001d0b88:
  *(undefined4 *)(param_3 + 0x206) = uVar7;
  fn_0035826c(param_3);
  fn_001cfc80(param_1,param_3);
  fn_00358834(param_3);
  *(undefined4 *)(param_3 + 0x16) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_3 + 0x12);
  *(undefined4 *)(param_3 + 0x1a) = *(undefined4 *)(param_3 + 0x14);
  sVar3 = fn_00176dc0(param_3);
  param_3[0xe] = sVar3;
  sVar3 = fn_00176e70(param_3);
  cVar2 = *(char *)((int)param_3 + 0x59);
  param_3[0xf] = sVar3;
  if (cVar2 == '\x02') {
    fn_00144834(0x216,1);
    return;
  }
  if (cVar2 == '\x03') {
    fn_00144834(0x217,1);
    return;
  }
  if (cVar2 == '\x04') {
    fn_00144834(0x218,1);
    return;
  }
  return;
}


