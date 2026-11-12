#include "003c884c_003c9218.h"



void fn_003c9218(undefined4 *param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 1) = param_2;
  *param_1 = &DAT_00830a78;
  return;
}



void fn_003c9204(void)

{
  fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_003c8c50(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  uint uVar7;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_2c;
  float local_28;
  float local_24;
  
  iVar5 = *(int *)(*(int *)(param_1 + 100) + 8);
  if (*(int *)(param_1 + 0x6c) == iVar5) {
    if (5 < *(int *)(param_1 + 0xb4)) goto LAB_003c8e38;
  }
  else {
    *(int *)(param_1 + 0x6c) = iVar5;
    fn_003c866c(param_1);
    uVar13 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
    iVar5 = fn_00176d68(uVar13);
    uVar1 = *(undefined4 *)(iVar5 + 0x58);
    uVar8 = *(undefined4 *)(iVar5 + 0x68);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar5 + 0x78);
    *(undefined4 *)(param_1 + 0x84) = uVar1;
    *(undefined4 *)(param_1 + 0x88) = uVar8;
    fn_00176d68(uVar13);
    puVar2 = (undefined4 *)fn_006dcd40();
    uVar1 = puVar2[1];
    uVar8 = puVar2[2];
    *(undefined4 *)(param_1 + 0x90) = *puVar2;
    *(undefined4 *)(param_1 + 0x94) = uVar1;
    *(undefined4 *)(param_1 + 0x98) = uVar8;
    iVar5 = *(int *)(param_1 + 0x74) + *(int *)(param_1 + 0x6c) * 0x1c;
    uVar1 = *(undefined4 *)(iVar5 + 4);
    uVar8 = *(undefined4 *)(iVar5 + 8);
    uVar13 = *(undefined4 *)(iVar5 + 0xc);
    uVar10 = *(undefined4 *)(iVar5 + 0x10);
    uVar11 = *(undefined4 *)(iVar5 + 0x14);
    uVar14 = *(undefined4 *)(iVar5 + 0x18);
    *(undefined4 *)(param_1 + 0xb4) = 0;
    *(undefined4 *)(param_1 + 0x9c) = uVar1;
    *(undefined4 *)(param_1 + 0xa0) = uVar8;
    *(undefined4 *)(param_1 + 0xa4) = uVar13;
    *(undefined4 *)(param_1 + 0xa8) = uVar10;
    *(undefined4 *)(param_1 + 0xac) = uVar11;
    *(undefined4 *)(param_1 + 0xb0) = uVar14;
  }
  *(int *)(param_1 + 0xb4) = *(int *)(param_1 + 0xb4) + 1;
  fVar3 = *(float *)(param_1 + 0x84);
  fVar6 = *(float *)(param_1 + 0x88);
  fVar9 = *(float *)(param_1 + 0x8c);
  fVar20 = *(float *)(param_1 + 0x9c);
  fVar22 = *(float *)(param_1 + 0x84);
  fVar19 = *(float *)(param_1 + 0xa0);
  fVar21 = *(float *)(param_1 + 0x88);
  fVar15 = *(float *)(param_1 + 0xa4);
  fVar18 = *(float *)(param_1 + 0x8c);
  fVar16 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb4),(byte)(in_fpscr >> 0x16) & 3);
  fVar17 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0xb4),(byte)(in_fpscr >> 0x16) & 3);
  local_2c = *(float *)(param_1 + 0x90) +
             (*(float *)(param_1 + 0xa8) - *(float *)(param_1 + 0x90)) * 0.16666667 * fVar17;
  local_28 = *(float *)(param_1 + 0x94) +
             (*(float *)(param_1 + 0xac) - *(float *)(param_1 + 0x94)) * 0.16666667 * fVar17;
  local_24 = *(float *)(param_1 + 0x98) +
             (*(float *)(param_1 + 0xb0) - *(float *)(param_1 + 0x98)) * 0.16666667 * fVar17;
  uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x24) + 8);
  iVar5 = fn_00176d68(uVar1);
  *(float *)(iVar5 + 0x58) = fVar3 + (fVar20 - fVar22) * 0.16666667 * fVar16;
  *(float *)(iVar5 + 0x68) = fVar6 + (fVar19 - fVar21) * 0.16666667 * fVar16;
  *(float *)(iVar5 + 0x78) = fVar9 + (fVar15 - fVar18) * 0.16666667 * fVar16;
  *(uint *)(iVar5 + 0x88) = *(uint *)(iVar5 + 0x88) | 0x800;
  uVar1 = fn_00176d68(uVar1);
  fn_005456f4(uVar1,&local_2c);
LAB_003c8e38:
  uVar12 = 0;
  uVar7 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
  iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
  if (iVar5 >> 4 != iVar5 >> 0x1f) {
    do {
      fn_00243e04(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar12 * 0x1c));
      uVar12 = uVar12 + 1;
      uVar7 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
      iVar5 = (int)((longlong)(int)uVar7 * -0x6db6db6d + ((ulonglong)uVar7 << 0x20) >> 0x20);
    } while (uVar12 < (uint)((iVar5 >> 4) - (iVar5 >> 0x1f)));
  }
  iVar5 = *(int *)(param_1 + 0x70);
  (**(code **)(**(int **)(iVar5 + 0x28) + 0xc))();
  (**(code **)(**(int **)(iVar5 + 0x2c) + 0xc))();
  (**(code **)(**(int **)(iVar5 + 0x30) + 0xc))();
  if ((*(float *)(*(int *)(iVar5 + 0x28) + 0x24) == 0.0) && (*(char *)(iVar5 + 0x3c) != '\0')) {
    fn_00159f34(*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 0x10));
    uVar1 = fn_001853ec(*(undefined4 *)(iVar5 + 4),s_reactor_loop_008c62c6,
                         *(undefined4 *)(iVar5 + 0xc));
    *(undefined4 *)(iVar5 + 0x10) = uVar1;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(iVar5 + 4),uVar1);
    *(int **)(iVar5 + 0x28) = piVar4;
    (**(code **)(*piVar4 + 0x50))(piVar4,1);
    *(undefined1 *)(iVar5 + 0x3c) = 0;
  }
  fn_001cb048(*(undefined4 *)(param_1 + 0x80));
  return;
}



undefined4 fn_003c8ba4(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (*(int *)(param_1 + 0xb8) < 1) {
    uVar1 = 1;
  }
  else {
    if (*(int *)(param_1 + 0xb8) == 1) {
      uVar4 = 0;
      uVar2 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
      iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
      if (iVar3 >> 4 != iVar3 >> 0x1f) {
        do {
          fn_0024405c(*(undefined4 *)(*(int *)(param_1 + 0x74) + uVar4 * 0x1c),0);
          uVar4 = uVar4 + 1;
          uVar2 = *(int *)(param_1 + 0x78) - *(int *)(param_1 + 0x74);
          iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
        } while (uVar4 < (uint)((iVar3 >> 4) - (iVar3 >> 0x1f)));
      }
      fn_001cb55c(*(undefined4 *)(param_1 + 0x80),0);
    }
    *(int *)(param_1 + 0xb8) = *(int *)(param_1 + 0xb8) + -1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * fn_003c8b74(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = fn_00145b00(0xbc,&DAT_00812c8c);
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  puVar4 = (undefined4 *)fn_0068ab5c();
  *puVar4 = &DAT_00830968;
  puVar4[0x19] = 0;
  puVar4[0x1a] = 0;
  puVar4[0x1b] = 0;
  piVar5 = (int *)fn_00145b00(0x40,&DAT_00812c8c);
  if (piVar5 != (int *)0x0) {
    *piVar5 = param_1;
    iVar3 = *(int *)(param_1 + 0xc);
    piVar5[2] = -1;
    piVar5[1] = iVar3;
    piVar5[3] = -1;
    piVar5[4] = -1;
    piVar5[5] = -1;
    piVar5[6] = -1;
    piVar5[7] = -1;
    piVar5[8] = -1;
    piVar5[9] = -1;
    piVar5[10] = 0;
    piVar5[0xb] = 0;
    piVar5[0xc] = 0;
    piVar5[0xd] = 0;
    piVar5[0xe] = 0;
    *(undefined1 *)(piVar5 + 0xf) = 0;
  }
  puVar4[0x1c] = piVar5;
  puVar4[0x1d] = 0;
  puVar4[0x1e] = 0;
  puVar4[0x1f] = 0;
  iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar6 = 0;
  if (iVar3 != 0) {
    uVar6 = fn_001cb644();
  }
  puVar4[0x20] = uVar6;
  uVar6 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar4[0x21] = DAT_008f9e2c;
  puVar4[0x22] = uVar1;
  puVar4[0x23] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar4[0x24] = DAT_008f9e2c;
  puVar4[0x25] = uVar1;
  puVar4[0x26] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar4[0x27] = DAT_008f9e2c;
  puVar4[0x28] = uVar1;
  puVar4[0x29] = uVar2;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar1 = DAT_008f9e34;
  uVar6 = DAT_008f9e30;
  puVar4[0x2a] = DAT_008f9e2c;
  puVar4[0x2b] = uVar6;
  puVar4[0x2c] = uVar1;
  puVar4[0x2d] = 0;
  puVar4[0x2e] = 8;
  return puVar4;
}



void fn_003c884c(int param_1)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *unaff_r11;
  undefined4 ***pppuVar11;
  undefined4 ***pppuVar12;
  undefined4 ***pppuVar13;
  undefined4 ***pppuVar14;
  int local_78;
  undefined4 ***local_74;
  undefined4 ***local_70;
  undefined4 ***local_6c;
  undefined4 ***local_68;
  undefined4 ***local_64;
  undefined4 ***local_60;
  undefined4 local_48;
  undefined1 auStack_40 [28];
  
  uVar2 = fn_006be118(*(undefined4 *)(param_1 + 0x68));
  pppuVar11 = (undefined4 ***)0x0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = pppuVar11;
    DAT_008f9e30 = pppuVar11;
    DAT_008f9e34 = pppuVar11;
  }
  pppuVar13 = DAT_008f9e30;
  pppuVar14 = DAT_008f9e2c;
  pppuVar12 = DAT_008f9e34;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = pppuVar11;
    DAT_008f9e30 = pppuVar11;
    DAT_008f9e34 = pppuVar11;
  }
  local_64 = DAT_008f9e30;
  local_68 = DAT_008f9e2c;
  local_60 = DAT_008f9e34;
  local_78 = 0;
  uVar7 = *(uint *)(param_1 + 0x78);
  uVar10 = *(uint *)(param_1 + 0x74);
  uVar8 = uVar7 - uVar10;
  iVar9 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  iVar4 = (int)((longlong)(int)uVar8 * -0x6db6db6d + ((ulonglong)uVar8 << 0x20) >> 0x20);
  iVar3 = iVar4 >> 4;
  iVar4 = iVar4 >> 0x1f;
  local_74 = pppuVar14;
  local_70 = pppuVar13;
  local_6c = pppuVar12;
  if ((uint)((iVar9 >> 4) - (iVar9 >> 0x1f)) < uVar2) {
    fn_0079090c((uint *)(param_1 + 0x74),uVar7,uVar2 - (iVar3 - iVar4),&local_78);
  }
  else if ((uVar2 < (uint)(iVar3 - iVar4)) && (uVar8 = uVar10 + uVar2 * 0x1c, uVar10 != uVar7)) {
    uVar10 = uVar8;
    if (uVar7 <= uVar8) {
      for (; uVar10 != uVar7; uVar10 = uVar10 + 0x1c) {
      }
    }
    iVar3 = (int)((longlong)(int)(uVar7 - uVar8) * -0x6db6db6d +
                  ((ulonglong)(uVar7 - uVar8) << 0x20) >> 0x20);
    *(uint *)(param_1 + 0x78) = uVar7 + ((iVar3 >> 4) - (iVar3 >> 0x1f)) * -0x1c;
  }
  if (0 < (int)uVar2) {
    unaff_r11 = auStack_40;
  }
  local_48 = *(undefined4 *)(*(int *)(param_1 + 4) + 0x20);
  iVar3 = 0;
  if (0 < (int)uVar2) {
    do {
      iVar4 = fn_006be0f4(*(undefined4 *)(param_1 + 0x68),iVar3);
      iVar9 = fn_00145b00(0x150,&DAT_00812c8c);
      if (iVar9 == 0) {
        iVar9 = 0;
      }
      else {
        iVar9 = fn_002440dc();
      }
      iVar5 = fn_006be0f4(*(undefined4 *)(param_1 + 0x68),iVar3);
      sVar1 = *(short *)(iVar5 + 0x120);
      iVar5 = fn_006be0f4(*(undefined4 *)(param_1 + 0x68),iVar3);
      if (*(char *)(iVar5 + 0x514) < 0) {
        iVar5 = 0;
      }
      else {
        iVar5 = iVar5 + *(char *)(iVar5 + 0x514) * 0xf0 + 0x154;
      }
      fn_00301a9c(&local_68,&DAT_007ba154,0x1e);
      fn_0029432c(iVar4 + 4,&local_68);
      if (iVar5 == 0) {
        local_78 = iVar4 + 0x68;
        fn_00243e8c(iVar9,local_48,(int)sVar1,&local_68);
      }
      else {
        fn_0020bbc4(auStack_40,iVar5);
        local_78 = fn_006bfe90(unaff_r11 + 4);
        uVar6 = fn_006bfda8(unaff_r11 + 4);
        local_6c = (undefined4 ***)(iVar5 + 0x72);
        local_70 = (undefined4 ***)(iVar4 + 0x68);
        local_74 = &local_68;
        fn_00243f58(iVar9,local_48,(int)sVar1,uVar6);
        fn_0069d9f0(*(undefined4 *)(iVar9 + 0x148),1);
      }
      fn_0069d9f0(*(undefined4 *)(iVar9 + 0x140),1);
      fn_0024405c(iVar9,1);
      iVar4 = iVar3 + 1;
      *(int *)(*(int *)(param_1 + 0x74) + iVar3 * 0x1c) = iVar9;
      iVar3 = iVar4;
    } while (iVar4 < (int)uVar2);
  }
  return;
}


