#include "003e0184_003e5aa4.h"



void fn_003e5aa4(int *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002c3dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x130))();
  return;
}



undefined4 fn_003e56e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar16 *local_4c;
  char *pcStack_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  undefined4 local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  
  fn_002c8d7c();
  fn_002c330c(&local_4c);
  local_4c = L"rom:/data/Layout/common/shop_01.arc";
  pcStack_48 = "shop_01.bflyt";
  local_38 = param_1[0x2f];
  local_44 = param_1[0x2f];
  if (7 < local_44) {
    local_44 = 8;
    local_20 = 1;
  }
  local_40 = (**(code **)(*param_1 + 0x144))(param_1);
  uVar1 = (**(code **)(*param_1 + 0x138))(param_1);
  fn_00147974(&local_30,uVar1);
  local_1f = 0;
  if ((char)param_1[0x30] == '\0') {
    local_1e = 1;
    uVar1 = fn_0022f750((char *)&DAT_003e5948);
    fn_00147974(&local_2c,uVar1);
    local_34 = 0x428c0000;
    local_1d = 1;
  }
  fn_002c29a0(param_1,&local_4c);
  fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
  iVar2 = param_1[0x1d];
  if ((char)param_1[0x30] == '\0') {
    *(undefined1 *)(iVar2 + 0x81) = 1;
    fn_0031f3f4(iVar2,0);
    iVar2 = param_1[0x1d];
    *(undefined1 *)(iVar2 + 0x83) = 0;
    fn_0031f954(iVar2,0);
  }
  else {
    *(undefined1 *)(iVar2 + 0x81) = 0;
    fn_0031f3f4(iVar2,0);
    iVar2 = param_1[0x1d];
    *(undefined1 *)(iVar2 + 0x83) = 0xff;
    fn_0031f954(iVar2,0);
  }
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  return 1;
}



void fn_003e42e8(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003e4334;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e4334:
  uVar3 = fn_0022eefc((int)*(short *)(&DAT_007c71a0 +
                                      *(int *)(*(int *)(param_1 + 0xb8) + param_2 * 4) * 8),0);
  uVar4 = fn_0022f750(*(undefined4 *)
                        (&DAT_007c719c + *(int *)(*(int *)(param_1 + 0xb8) + param_2 * 4) * 8));
  fn_00321118(puVar1,uVar4,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_003e0b80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (param_2 == 0) {
    uVar5 = 0;
    do {
      iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x9c),(&DAT_008956b0)[uVar5]);
      uVar5 = uVar5 + 1;
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    } while (uVar5 < 3);
  }
  iVar1 = 0;
  if (0 < *(int *)(&DAT_007c7564 + param_2 * 4)) {
    uVar8 = 0;
    do {
      piVar2 = (int *)(*(int *)(&DAT_008956a4 + param_2 * 4) + iVar1 * 8);
      iVar7 = *piVar2;
      iVar6 = piVar2[1];
      if (iVar7 != 0) {
        local_68 = uVar8;
        local_64 = uVar8;
        local_60 = uVar8;
        local_5c = uVar8;
        local_58 = uVar8;
        local_54 = uVar8;
        local_50 = uVar8;
        local_4c = uVar8;
        local_48 = uVar8;
        local_44 = uVar8;
        local_40 = uVar8;
        local_3c = uVar8;
        local_38 = uVar8;
        local_34 = uVar8;
        local_30 = uVar8;
        local_2c = uVar8;
        fn_001028d4(&local_68,(char *)&DAT_003e0d04,iVar1);
        local_28 = fn_0068897c(*(undefined4 *)(param_1 + 0x9c),&local_68);
        uVar3 = fn_00230008(iVar7);
        fn_00190d50(local_28,uVar3);
      }
      if (iVar6 != 0) {
        local_68 = uVar8;
        local_64 = uVar8;
        local_60 = uVar8;
        local_5c = uVar8;
        local_58 = uVar8;
        local_54 = uVar8;
        local_50 = uVar8;
        local_4c = uVar8;
        local_48 = uVar8;
        local_44 = uVar8;
        local_40 = uVar8;
        local_3c = uVar8;
        local_38 = uVar8;
        local_34 = uVar8;
        local_30 = uVar8;
        local_2c = uVar8;
        fn_001028d4(&local_68,(char *)&DAT_003e0d14,iVar1);
        uVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x9c),&local_68);
        uVar4 = fn_00230008(iVar6);
        fn_00190d50(uVar3,uVar4);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(&DAT_007c7564 + param_2 * 4));
  }
  return;
}



void fn_003e0184(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  int local_38 [9];
  
  fn_003df43c();
  fn_003df77c(param_1);
  fn_003dee20(param_1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x2e);
  *(undefined1 *)(param_1 + 0xd4) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x134),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xd4));
  iVar3 = *(int *)(param_1 + 0x130);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x30);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xd6);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x138),local_38 + 1);
  *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x32);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xd8);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x13c),local_38 + 1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x34);
  *(undefined1 *)(param_1 + 0xda) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x140),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xda));
  iVar3 = *(int *)(param_1 + 0x13c);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x36);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xdc);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x144),local_38 + 1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x38);
  *(undefined1 *)(param_1 + 0xde) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x148),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xde));
  iVar3 = *(int *)(param_1 + 0x144);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x3a);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xe0);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x14c),local_38 + 1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x3c);
  *(undefined1 *)(param_1 + 0xe2) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x150),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xe2));
  iVar3 = *(int *)(param_1 + 0x14c);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x3e);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xe4);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x154),local_38 + 1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x40);
  *(undefined1 *)(param_1 + 0xe6) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x158),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xe6));
  iVar3 = *(int *)(param_1 + 0x154);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x42);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[0] = (int)*(short *)(param_1 + 0xe8);
  fn_0018a618(local_38 + 1,5,4,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,4);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x15c),local_38 + 1);
  uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x44);
  *(undefined1 *)(param_1 + 0xea) = uVar1;
  uVar2 = fn_00230bcc(uVar1,0);
  fn_00190d50(*(undefined4 *)(param_1 + 0x160),uVar2);
  fn_0068b174(local_38,*(undefined1 *)(param_1 + 0xea));
  iVar3 = *(int *)(param_1 + 0x15c);
  *(int *)(iVar3 + 0xac) = local_38[0];
  *(int *)(iVar3 + 0xb0) = local_38[0];
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x48);
  local_38[1] = 0;
  local_38[2] = 0;
  local_38[3] = 0;
  local_38[4] = 0;
  local_38[5] = 0;
  local_38[0] = *(int *)(param_1 + 0xec);
  fn_0018a618(local_38 + 1,9,8,&DAT_003df6b4);
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
    fn_0022ef60(local_38 + 1,6);
  }
  fn_00190d50(*(undefined4 *)(param_1 + 0x164),local_38 + 1);
  fn_003df5cc(param_1);
  if (*(int *)(param_1 + 0xb0) != -1) {
    iVar3 = fn_001854ac(*(undefined4 *)(param_1 + 100));
    fVar6 = 0.0;
    if (*(short *)(param_1 + 0xb4) != 0) {
      uVar2 = fn_00176970(iVar3);
      fVar6 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      uVar1 = fn_00661570((int)*(short *)(param_1 + 0xb4));
      iVar4 = fn_002467b4(*(undefined1 *)(*(int *)(param_1 + 0x98) + 0x24),uVar1);
      fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xec) - iVar4,
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xf0) - iVar4,
                                         (byte)(in_fpscr >> 0x16) & 3);
      fVar6 = (fVar7 / fVar8) * fVar6;
    }
    *(float *)(iVar3 + 0x10) = fVar6;
  }
  fn_003deda0(param_1);
  if (*(char *)(param_1 + 0x124) == '\0') {
    pcVar5 = (char *)&DAT_003df73c;
  }
  else {
    pcVar5 = (char *)&DAT_003df728;
  }
  uVar2 = fn_0022f750(pcVar5);
  fn_0022cd58(param_1,uVar2);
  iVar3 = 0;
  *(byte *)(*(int *)(param_1 + 0x174) + 0x44) =
       *(char *)(param_1 + 0x124) == '\0' | *(byte *)(*(int *)(param_1 + 0x174) + 0x44) & 0xfe;
  do {
    fn_003deef4(param_1,iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 7);
  *(undefined1 *)(param_1 + 0x122) = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x338);
  return;
}


