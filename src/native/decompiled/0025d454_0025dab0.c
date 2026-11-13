#include "0025d454_0025dab0.h"



undefined4 fn_0025dab0(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_00401bac();
  (**(code **)(*param_1 + 0x108))(param_1);
  iVar1 = *(int *)(param_1[0x1a] + 0xc);
  if (iVar1 < 0) {
    iVar1 = param_1[0x1c];
  }
  else {
    param_1[0x1c] = iVar1;
  }
  *(int *)(param_1[0x1a] + 0x10) = iVar1;
  *(int *)(param_1[0x1a] + 0x14) = param_1[0x21] - param_1[0x20] >> 2;
  uVar2 = param_1[0x1c];
  if (((int)uVar2 < 0) || ((uint)(param_1[0x21] - param_1[0x20] >> 2) <= uVar2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1[0x20] + uVar2 * 4);
  }
  param_1[0x1f] = iVar1;
  fn_00689818(param_1,iVar1,0,0,unaff_r4,in_lr);
  param_1[0x1d] = 3;
  return 1;
}



void fn_0025d920(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  
  *param_1 = &PTR_FUN_0081d9b0;
  piVar7 = (int *)param_1[0x2e];
  for (piVar6 = (int *)param_1[0x2d]; piVar6 != piVar7; piVar6 = piVar6 + 4) {
    if ((undefined4 *)*piVar6 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*piVar6 + -3;
      iVar4 = *piVar2;
      if ((iVar4 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
        fn_001008c4(*piVar6 + -0xc,*(int *)(*piVar6 + -8) + 8,0);
      }
    }
  }
  iVar4 = param_1[0x2d];
  fn_001008c4(iVar4,param_1[0x2f] - iVar4 >> 4,0);
  puVar3 = (undefined4 *)param_1[0x2b];
  if (puVar3 != &DAT_008f9cf4) {
    piVar6 = puVar3 + -3;
    iVar4 = *piVar6;
    if ((iVar4 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar4 + -1, iVar4 == 0)))) {
      iVar4 = param_1[0x2b];
      fn_001008c4(iVar4 + -0xc,*(int *)(iVar4 + -8) + 8,0);
    }
  }
  if ((int *)param_1[0x29] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x29] + 4))();
  }
  if ((int *)param_1[0x27] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x27] + 4))();
  }
  uVar5 = param_1[0x24];
  uVar1 = uVar5;
  if ((uint)param_1[0x25] <= uVar5) {
    for (; uVar1 != param_1[0x25]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar5,(int)(param_1[0x26] - uVar5) >> 2,0);
  uVar5 = param_1[0x21];
  uVar1 = uVar5;
  if ((uint)param_1[0x22] <= uVar5) {
    for (; uVar1 != param_1[0x22]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar5,(int)(param_1[0x23] - uVar5) >> 2,0);
  fn_0068ad5c(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0025d818) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0025d81c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0025d744(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int local_30;
  
  puVar3 = (undefined4 *)fn_0068ab5c();
  *puVar3 = &PTR_FUN_0081d9b0;
  puVar3[0x19] = *(undefined4 *)(param_2 + 8);
  puVar3[0x1a] = 0xffffffff;
  puVar3[0x1b] = 0xffffffff;
  puVar3[0x1c] = 0xffffffff;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  puVar3[0x20] = 0;
  puVar3[0x21] = 0;
  puVar3[0x22] = 0;
  puVar3[0x23] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar6 = 2;
  puVar3[0x21] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0);
  iVar6 = puVar3[0x21];
  puVar3[0x22] = iVar6 + 8;
  puVar3[0x23] = iVar6 + 0x80;
  piVar5 = puVar3 + 0x24;
  *piVar5 = 0;
  puVar3[0x25] = 0;
  puVar3[0x26] = 0;
  local_30 = 2;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar5 = (int)puVar4;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    puVar4 = puVar4 + 1;
  }
  uVar7 = 0;
  puVar3[0x26] = *piVar5 + 0x80;
  puVar3[0x25] = *piVar5 + 8;
  puVar3[0x27] = 0;
  puVar3[0x29] = 0;
  *(undefined1 *)(puVar3 + 0x2a) = 0;
  puVar3[0x2b] = &DAT_008f9cf4;
  puVar3[0x2c] = 0;
  puVar3[0x2d] = 0;
  puVar3[0x2e] = 0;
  puVar3[0x2f] = 0;
  puVar3[0x30] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar7;
    DAT_008f9e30 = uVar7;
    DAT_008f9e34 = uVar7;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  uVar7 = DAT_008f9e2c;
  puVar3[0x34] = 2;
  puVar3[0x31] = uVar7;
  puVar3[0x32] = uVar1;
  puVar3[0x33] = uVar2;
  return puVar3;
}



void fn_0025d4b4(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float local_18;
  float local_14 [3];
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  fn_0036c354(param_1[0x17]);
  if (*(char *)(param_1[0x17] + 8) == '\0') goto LAB_0025d670;
  uVar2 = (**(code **)(*(int *)param_1[0x27] + 100))();
  if (-1 < (int)uVar2) {
    *(char *)(param_1 + 0x28) = (char)uVar2;
    *(byte *)(*(int *)param_1[0x24] + 0x44) =
         *(byte *)(*(int *)param_1[0x24] + 0x44) & 0xfe | (uVar2 & 0xff) == 0;
    *(byte *)(*(int *)(param_1[0x24] + 4) + 0x44) =
         (uVar2 & 0xff) == 1 | *(byte *)(*(int *)(param_1[0x24] + 4) + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*(int *)param_1[0x27] + 0x90))();
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*(int *)param_1[0x27] + 0x98))();
    if (iVar3 < 0) goto LAB_0025d670;
    iVar3 = fn_006c3ba0(param_1[0x17]);
    if (iVar3 == 0) {
      iVar3 = param_1[0x1e];
      bVar5 = *(byte *)(param_1[0x17] + 10);
      bVar7 = (*(byte *)(iVar3 + 0xd1) & 3) != bVar5;
      *(byte *)(iVar3 + 0xd0) = *(byte *)(iVar3 + 0xd0) | bVar7 << 2;
      if (bVar7) goto LAB_0025d5f4;
      goto LAB_0025d604;
    }
    if (*(char *)(param_1[0x17] + 0x5c) != '\0') {
      fn_0068ab44(param_1,0x100094d);
      goto LAB_0025d670;
    }
    *(undefined1 *)(param_1[0x17] + 0x31) = 2;
    uVar6 = *(undefined4 *)(param_1[0x17] + 0x44);
  }
  else {
    iVar3 = fn_006c3ba0(param_1[0x17]);
    if (iVar3 == 0) {
      iVar3 = param_1[0x1e];
      bVar5 = *(byte *)(param_1[0x17] + 10);
      bVar7 = (*(byte *)(iVar3 + 0xd1) & 3) != bVar5;
      *(byte *)(iVar3 + 0xd0) = *(byte *)(iVar3 + 0xd0) | bVar7 << 2;
      if (bVar7) {
LAB_0025d5f4:
        *(byte *)(iVar3 + 0xd1) = bVar5 | *(byte *)(iVar3 + 0xd1) & 0xfc;
      }
LAB_0025d604:
      fn_0036c054(param_1[0x17],param_1 + 0x2b);
      fn_00190d50(param_1[0x1e],param_1[0x2b]);
      goto LAB_0025d670;
    }
    if ((char)param_1[0x28] == '\0') {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1[0x17] + 0x31) = uVar1;
    if ((char)param_1[0x28] == '\0') {
      uVar6 = *(undefined4 *)(param_1[0x17] + 0x40);
    }
    else {
      uVar6 = *(undefined4 *)(param_1[0x17] + 0x44);
    }
  }
  fn_0068ab44(param_1,uVar6);
  (**(code **)(*param_1 + 0x108))(param_1);
LAB_0025d670:
  if (0 < *(int *)(param_1[0x17] + 0x54)) {
    fVar8 = (float)VectorSignedToFloat(*(int *)(param_1[0x17] + 0x54),(byte)(in_fpscr >> 0x16) & 3);
    if (param_1[0x30] < 0x437f0000) {
      local_14[0] = (float)param_1[0x30] + 255.0 / fVar8;
      local_18 = 255.0;
      pfVar4 = local_14;
      if (255.0 < local_14[0]) {
        pfVar4 = &local_18;
      }
      fVar8 = *pfVar4;
      param_1[0x30] = (int)fVar8;
      uVar6 = VectorFloatToUnsigned(fVar8,3);
      *(char *)(param_1[0x1f] + 0x45) = (char)uVar6;
    }
  }
  return;
}



void fn_0025d454(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  undefined4 uVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fStack_18;
  float afStack_14 [3];
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  if ((char)param_1[0x35] != '\0') {
    (**(code **)(*param_1 + 0xfc))(param_1);
    *(undefined1 *)(param_1 + 0x35) = 0;
    return;
  }
  fn_0069d0b0(param_1[0xf]);
  (**(code **)(*param_1 + 0x100))(param_1);
  if ((char)param_1[3] != '\x03') {
    return;
  }
  fn_0036c354(param_1[0x17]);
  if (*(char *)(param_1[0x17] + 8) == '\0') goto LAB_0025d670;
  uVar2 = (**(code **)(*(int *)param_1[0x27] + 100))();
  if (-1 < (int)uVar2) {
    *(char *)(param_1 + 0x28) = (char)uVar2;
    *(byte *)(*(int *)param_1[0x24] + 0x44) =
         *(byte *)(*(int *)param_1[0x24] + 0x44) & 0xfe | (uVar2 & 0xff) == 0;
    *(byte *)(*(int *)(param_1[0x24] + 4) + 0x44) =
         (uVar2 & 0xff) == 1 | *(byte *)(*(int *)(param_1[0x24] + 4) + 0x44) & 0xfe;
  }
  iVar3 = (**(code **)(*(int *)param_1[0x27] + 0x90))();
  if (iVar3 < 0) {
    iVar3 = (**(code **)(*(int *)param_1[0x27] + 0x98))();
    if (iVar3 < 0) goto LAB_0025d670;
    iVar3 = fn_006c3ba0(param_1[0x17]);
    if (iVar3 == 0) {
      iVar3 = param_1[0x1e];
      bVar5 = *(byte *)(param_1[0x17] + 10);
      bVar7 = (*(byte *)(iVar3 + 0xd1) & 3) != bVar5;
      *(byte *)(iVar3 + 0xd0) = *(byte *)(iVar3 + 0xd0) | bVar7 << 2;
      if (bVar7) goto LAB_0025d5f4;
      goto LAB_0025d604;
    }
    if (*(char *)(param_1[0x17] + 0x5c) != '\0') {
      fn_0068ab44(param_1,0x100094d);
      goto LAB_0025d670;
    }
    *(undefined1 *)(param_1[0x17] + 0x31) = 2;
    uVar6 = *(undefined4 *)(param_1[0x17] + 0x44);
  }
  else {
    iVar3 = fn_006c3ba0(param_1[0x17]);
    if (iVar3 == 0) {
      iVar3 = param_1[0x1e];
      bVar5 = *(byte *)(param_1[0x17] + 10);
      bVar7 = (*(byte *)(iVar3 + 0xd1) & 3) != bVar5;
      *(byte *)(iVar3 + 0xd0) = *(byte *)(iVar3 + 0xd0) | bVar7 << 2;
      if (bVar7) {
LAB_0025d5f4:
        *(byte *)(iVar3 + 0xd1) = bVar5 | *(byte *)(iVar3 + 0xd1) & 0xfc;
      }
LAB_0025d604:
      fn_0036c054(param_1[0x17],param_1 + 0x2b);
      fn_00190d50(param_1[0x1e],param_1[0x2b]);
      goto LAB_0025d670;
    }
    if ((char)param_1[0x28] == '\0') {
      uVar1 = 3;
    }
    else {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1[0x17] + 0x31) = uVar1;
    if ((char)param_1[0x28] == '\0') {
      uVar6 = *(undefined4 *)(param_1[0x17] + 0x40);
    }
    else {
      uVar6 = *(undefined4 *)(param_1[0x17] + 0x44);
    }
  }
  fn_0068ab44(param_1,uVar6);
  (**(code **)(*param_1 + 0x108))(param_1);
LAB_0025d670:
  if (0 < *(int *)(param_1[0x17] + 0x54)) {
    fVar8 = (float)VectorSignedToFloat(*(int *)(param_1[0x17] + 0x54),(byte)(in_fpscr >> 0x16) & 3);
    if (param_1[0x30] < 0x437f0000) {
      afStack_14[0] = (float)param_1[0x30] + 255.0 / fVar8;
      fStack_18 = 255.0;
      pfVar4 = afStack_14;
      if (255.0 < afStack_14[0]) {
        pfVar4 = &fStack_18;
      }
      fVar8 = *pfVar4;
      param_1[0x30] = (int)fVar8;
      uVar6 = VectorFloatToUnsigned(fVar8,3);
      *(char *)(param_1[0x1f] + 0x45) = (char)uVar6;
    }
  }
  return;
}


