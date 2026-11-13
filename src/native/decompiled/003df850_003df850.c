#include "003df850_003df850.h"



void fn_003df850(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  char *pcVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar2 = fn_0022cdf0();
  if (iVar2 == 0) {
    return;
  }
  fn_003bbdc0(param_1);
  if (*(int *)(param_1 + 0xa8) != -1) {
    iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 100));
    uVar3 = fn_00176970();
    fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd0),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd2),(byte)(in_fpscr >> 0x16) & 3)
    ;
    *(float *)(iVar2 + 0x10) = (fVar8 / fVar7) * fVar6;
  }
  if (*(int *)(param_1 + 0xac) != -1) {
    iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 100));
    uVar3 = fn_00176970();
    fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd6),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xd8),(byte)(in_fpscr >> 0x16) & 3)
    ;
    *(float *)(iVar2 + 0x10) = (fVar7 / fVar8) * fVar6;
  }
  if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) == *(char *)(param_1 + 0x122)) {
    if (((((*(short *)(*(int *)(param_1 + 0x98) + 0x1c) != *(short *)(param_1 + 0xb4)) ||
          (iVar2 = fn_001f890c(param_1 + 0x110,*(int *)(param_1 + 0x98) + 0xac), iVar2 != 0)) ||
         (*(char *)(*(int *)(param_1 + 0x98) + 0x1e) != *(char *)(param_1 + 0xb6))) ||
        ((*(char *)(*(int *)(param_1 + 0x98) + 0x26) != *(char *)(param_1 + 0xb7) ||
         (*(char *)(*(int *)(param_1 + 0x98) + 0x45a) != *(char *)(param_1 + 0x123))))) ||
       (*(char *)(*(int *)(param_1 + 0x98) + 0x45b) != *(char *)(param_1 + 0x124))) {
      fn_003df43c(param_1);
    }
    if ((*(short *)(*(int *)(param_1 + 0x98) + 0x2a) != *(short *)(param_1 + 0xd0)) ||
       (*(short *)(*(int *)(param_1 + 0x98) + 0x2c) != *(short *)(param_1 + 0xd2))) {
      fn_003df77c(param_1);
      fn_003dee20(param_1);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x2e) != *(char *)(param_1 + 0xd4)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x2e);
      *(undefined1 *)(param_1 + 0xd4) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x134),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xd4));
      iVar2 = *(int *)(param_1 + 0x130);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x30) != *(short *)(param_1 + 0xd6)) {
      *(undefined2 *)(param_1 + 0xd6) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x30);
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_48 = (uint)*(short *)(param_1 + 0xd6);
      fn_0018a618(&local_44,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_44,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x138),&local_44);
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x32) != *(short *)(param_1 + 0xd8)) {
      *(undefined2 *)(param_1 + 0xd8) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x32);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_48 = (uint)*(short *)(param_1 + 0xd8);
      fn_0018a618(&local_3c,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_3c,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x13c),&local_3c);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x34) != *(char *)(param_1 + 0xda)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x34);
      *(undefined1 *)(param_1 + 0xda) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x140),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xda));
      iVar2 = *(int *)(param_1 + 0x13c);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x36) != *(short *)(param_1 + 0xdc)) {
      *(undefined2 *)(param_1 + 0xdc) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x36);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_48 = (uint)*(short *)(param_1 + 0xdc);
      fn_0018a618(&local_3c,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_3c,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x144),&local_3c);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x38) != *(char *)(param_1 + 0xde)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x38);
      *(undefined1 *)(param_1 + 0xde) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x148),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xde));
      iVar2 = *(int *)(param_1 + 0x144);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x3a) != *(short *)(param_1 + 0xe0)) {
      *(undefined2 *)(param_1 + 0xe0) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x3a);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_48 = (uint)*(short *)(param_1 + 0xe0);
      fn_0018a618(&local_3c,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_3c,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x14c),&local_3c);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x3c) != *(char *)(param_1 + 0xe2)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x3c);
      *(undefined1 *)(param_1 + 0xe2) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x150),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xe2));
      iVar2 = *(int *)(param_1 + 0x14c);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x3e) != *(short *)(param_1 + 0xe4)) {
      *(undefined2 *)(param_1 + 0xe4) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x3e);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_48 = (uint)*(short *)(param_1 + 0xe4);
      fn_0018a618(&local_3c,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_3c,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x154),&local_3c);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x40) != *(char *)(param_1 + 0xe6)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x40);
      *(undefined1 *)(param_1 + 0xe6) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x158),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xe6));
      iVar2 = *(int *)(param_1 + 0x154);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if (*(short *)(*(int *)(param_1 + 0x98) + 0x42) != *(short *)(param_1 + 0xe8)) {
      *(undefined2 *)(param_1 + 0xe8) = *(undefined2 *)(*(int *)(param_1 + 0x98) + 0x42);
      local_44 = 0;
      local_40 = 0;
      local_3c = 0;
      local_48 = (uint)*(short *)(param_1 + 0xe8);
      fn_0018a618(&local_44,5,4,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_44,4);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x15c),&local_44);
    }
    if (*(char *)(*(int *)(param_1 + 0x98) + 0x44) != *(char *)(param_1 + 0xea)) {
      uVar1 = *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x44);
      *(undefined1 *)(param_1 + 0xea) = uVar1;
      uVar3 = fn_00230bcc(uVar1,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0x160),uVar3);
      fn_0068b174(&local_44,*(undefined1 *)(param_1 + 0xea));
      iVar2 = *(int *)(param_1 + 0x15c);
      *(undefined4 *)(iVar2 + 0xac) = local_44;
      *(undefined4 *)(iVar2 + 0xb0) = local_44;
    }
    if ((*(int *)(*(int *)(param_1 + 0x98) + 0x48) != *(int *)(param_1 + 0xec)) ||
       (*(int *)(*(int *)(param_1 + 0x98) + 0x4c) != *(int *)(param_1 + 0xf0))) {
      *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(*(int *)(param_1 + 0x98) + 0x48);
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_48 = *(uint *)(param_1 + 0xec);
      fn_0018a618(&local_3c,9,8,&DAT_003df6b4);
      if (*(char *)(*(int *)(param_1 + 0x98) + 0x338) != '\0') {
        fn_0022ef60(&local_3c,6);
      }
      fn_00190d50(*(undefined4 *)(param_1 + 0x164),&local_3c);
      fn_003df5cc(param_1);
      if (*(int *)(param_1 + 0xb0) != -1) {
        iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 100));
        fVar6 = 0.0;
        if (*(short *)(param_1 + 0xb4) != 0) {
          uVar3 = fn_00176970(iVar2);
          fVar6 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
          uVar1 = fn_00661570((int)*(short *)(param_1 + 0xb4));
          iVar4 = fn_002467b4(*(undefined1 *)(*(int *)(param_1 + 0x98) + 0x24),uVar1);
          fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xec) - iVar4,
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar8 = (float)VectorSignedToFloat(*(int *)(param_1 + 0xf0) - iVar4,
                                             (byte)(in_fpscr >> 0x16) & 3);
          fVar6 = (fVar7 / fVar8) * fVar6;
        }
        *(float *)(iVar2 + 0x10) = fVar6;
      }
    }
    fn_003deda0(param_1);
    if (*(char *)(param_1 + 0x124) == '\0') {
      pcVar5 = (char *)&DAT_003df73c;
    }
    else {
      pcVar5 = (char *)&DAT_003df728;
    }
    uVar3 = fn_0022f750(pcVar5);
    fn_0022cd58(param_1,uVar3);
    iVar2 = 0;
    *(byte *)(*(int *)(param_1 + 0x174) + 0x44) =
         *(char *)(param_1 + 0x124) == '\0' | *(byte *)(*(int *)(param_1 + 0x174) + 0x44) & 0xfe;
    do {
      fn_0042ec00(*(undefined4 *)(param_1 + 0x98),iVar2,&local_40,&local_48);
      iVar4 = param_1 + iVar2 * 4;
      if ((*(short *)(iVar4 + 0xf4) != (short)local_40) ||
         ((uint)*(ushort *)(iVar4 + 0xf6) != (local_48 & 0xffff))) {
        fn_003deef4(param_1,iVar2);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 7);
  }
  else {
    fn_003e0184();
  }
  if (*(int **)(param_1 + 0x128) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x128) + 0x14))();
  }
  fn_003bbde0(param_1);
  return;
}


