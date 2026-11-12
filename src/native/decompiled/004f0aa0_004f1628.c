#include "004f0aa0_004f1628.h"



undefined4 * fn_004f1628(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_001782b8((int)param_1 + 0x21,DAT_008c066c,0x3f);
  *param_1 = 0xffffffff;
  param_1[1] = 0x7fffffff;
  param_1[2] = 0;
  param_1[3] = 0x80000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return param_1;
}



void fn_004f161c(int param_1,undefined4 param_2)

{
  fn_001782b8(param_1 + 0x21,param_2,0x3f);
  return;
}



void fn_004f15b4(uint *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((char)param_1[8] == '\0') {
    return;
  }
  uVar1 = param_1[2];
  uVar3 = param_1[3];
  if ((int)(param_4 - (uVar3 + (param_3 < uVar1))) < 0 ==
      (SBORROW4(param_4,uVar3) != SBORROW4(param_4 - uVar3,(uint)(param_3 < uVar1)))) {
    uVar3 = param_4;
    uVar1 = param_3;
  }
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[6];
  if ((int)(uVar3 - (param_4 + (uVar1 < param_3))) < 0 ==
      (SBORROW4(uVar3,param_4) != SBORROW4(uVar3 - param_4,(uint)(uVar1 < param_3)))) {
    uVar3 = param_4;
    uVar1 = param_3;
  }
  param_1[4] = param_3;
  param_1[5] = param_4;
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[6] = uVar2 + 1;
  param_1[7] = param_1[7] + (uint)(0xfffffffe < uVar2);
  return;
}



void fn_004f1470(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14);
    if (iVar1 != ((param_1 + 4) - *(int *)(param_1 + 0x14)) + 4) {
      do {
        if (*(uint *)(iVar1 + 0x14) < *(uint *)(param_2 + 0x14) ||
            *(uint *)(param_2 + 0x14) - *(uint *)(iVar1 + 0x14) <
            (uint)(*(uint *)(iVar1 + 0x10) <= *(uint *)(param_2 + 0x10))) {
          fn_004f0b78(param_1 + 4,*(int *)(param_1 + 0x14) + iVar1,
                       *(int *)(param_1 + 0x14) + param_2);
          return;
        }
        iVar2 = *(int *)(param_1 + 0x14);
        iVar1 = *(int *)(iVar1 + iVar2 + 4) - iVar2;
      } while (iVar1 != ((param_1 + 4) - iVar2) + 4);
    }
    fn_004f0b78(param_1 + 4,param_1 + 8,*(int *)(param_1 + 0x14) + param_2);
    return;
  }
  iVar2 = *(int *)(param_1 + 0x48);
  iVar1 = iVar2 + 0xb8;
  iVar3 = *(int *)(iVar2 + 0xc0) - *(int *)(iVar2 + 200);
  if (iVar3 != (iVar1 - *(int *)(iVar2 + 200)) + 4) {
    do {
      if (*(uint *)(iVar3 + 0x14) < *(uint *)(param_2 + 0x14) ||
          *(uint *)(param_2 + 0x14) - *(uint *)(iVar3 + 0x14) <
          (uint)(*(uint *)(iVar3 + 0x10) <= *(uint *)(param_2 + 0x10))) {
        fn_004f0b78(iVar1,iVar3 + *(int *)(iVar2 + 200),*(int *)(iVar2 + 200) + param_2);
        return;
      }
      iVar5 = *(int *)(iVar2 + 200);
      iVar3 = *(int *)(iVar3 + iVar5 + 4) - iVar5;
    } while (iVar3 != (iVar1 - iVar5) + 4);
  }
  fn_00657410(iVar2 + 0xa0);
  piVar6 = (int *)(*(int *)(iVar2 + 200) + param_2);
  piVar4 = (int *)(iVar2 + 0xbc);
  iVar1 = *piVar4;
  piVar6[1] = (int)piVar4;
  *piVar6 = iVar1;
  *(int **)(*piVar4 + 4) = piVar6;
  *piVar4 = (int)piVar6;
  *(int *)(iVar2 + 0xc4) = *(int *)(iVar2 + 0xc4) + 1;
  return;
}



void fn_004f1208(int param_1)

{
  DAT_008edd88 = *(undefined4 *)(param_1 + 0x38);
  return;
}



undefined1 * fn_004f0e14(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = fn_004ed5b0();
  if (iVar1 == 0) {
    return &DAT_e0a1482b;
  }
  iVar1 = fn_004ed5a0();
  if (iVar1 == 0) {
    return &DAT_e0a14827;
  }
  if (DAT_008bf49c != 0) {
    return &DAT_d8a1482e;
  }
  if (0x1f < param_1) {
    return (undefined1 *)0xe0e14826;
  }
  puVar2 = (undefined4 *)fn_004ecfe0(0x50);
  if (puVar2 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    *puVar2 = &DAT_00856d7c;
    puVar2[2] = 0;
    puVar2[3] = 0;
    fn_004f0c04();
    puVar2[5] = 0xffffffff;
    puVar2[7] = 0;
    puVar2[8] = 0;
    fn_004f0c04();
    puVar2[10] = 0xffffffff;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    puVar2[0xe] = 0;
    iVar3 = fn_004edc74(puVar2 + 0xf,6);
    iVar1 = iVar3 + -0x3c;
    *(undefined4 *)(iVar3 + -0x28) = 0x18;
    *(undefined4 *)(iVar3 + -0x14) = 0x18;
    iVar4 = fn_004ecfe0(0xcc);
    uVar5 = 0;
    if (iVar4 != 0) {
      uVar5 = fn_004ef6c0(iVar4,param_1,iVar3);
    }
    *(undefined4 *)(iVar3 + 0xc) = uVar5;
  }
  DAT_008bf49c = iVar1;
  return (undefined1 *)0x0;
}



bool fn_004f0dfc(uint param_1)

{
  return param_1 < 0x59f;
}



undefined4 fn_004f0dd4(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0x59f) {
    DAT_008c35f8 = (undefined2)param_1;
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



bool fn_004f0db8(uint param_1)

{
  return param_1 < DAT_008c35f8;
}



undefined4 fn_004f0d94(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < DAT_008c35f8) {
    uVar1 = 0;
    DAT_008c35fc = param_1;
  }
  else {
    uVar1 = 0xe0e14826;
  }
  return uVar1;
}



undefined8 fn_004f0d34(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (param_2 & 0xffff00ff) << 8 | (param_2 & 0xff00ff00) >> 8;
  uVar1 = (param_1 & 0xff00ff00) >> 8 | (param_1 & 0xff00ff) << 8;
  return CONCAT44(uVar1 >> 0x10 | uVar1 << 0x10,uVar2 >> 0x10 | uVar2 << 0x10);
}



undefined4 * fn_004f0ce8(void)

{
  int iVar1;
  
  if (((DAT_008c0650 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c0650), iVar1 != 0)) {
    DAT_008c0658 = 0x4174f;
    DAT_008c065c = 0;
  }
  return &DAT_008c0658;
}



undefined4 * fn_004f0c48(void)

{
  int iVar1;
  
  if (((DAT_008c0654 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c0654), iVar1 != 0)) {
    if (((DAT_008c0650 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c0650), iVar1 != 0)) {
      DAT_008c0658 = 0x4174f;
      DAT_008c065c = 0;
    }
    DAT_008c0660 = (undefined4)((ulonglong)DAT_008c0658 * 1000);
    DAT_008c0664 = DAT_008c065c * 1000 + (int)((ulonglong)DAT_008c0658 * 1000 >> 0x20);
  }
  return &DAT_008c0660;
}



void fn_004f0c1c(int param_1,int *param_2)

{
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return;
}



void fn_004f0c04(int param_1)

{
  *(int *)(param_1 + 4) = param_1 + 4;
  *(int *)(param_1 + 8) = param_1 + 4;
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_004f0ba0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  puVar1 = *(undefined4 **)(param_1 + 0x54);
  while (puVar1 != (undefined4 *)(param_1 + 0x50)) {
    puVar2 = (undefined4 *)puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
    fn_004f0ab4(param_1 + 0x5c,param_1 + 0x60,*(int *)(param_1 + 0x6c) + (int)puVar1);
    puVar1 = puVar2;
  }
  *(int *)(param_1 + 0x50) = param_1 + 0x50;
  *(int *)(param_1 + 0x54) = param_1 + 0x50;
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



void fn_004f0aa0(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)(*(int *)(param_1 + 0x28) + param_2);
  *piVar1 = param_1 + 0x1c;
  piVar1[1] = *(int *)(param_1 + 0x20);
  **(undefined4 **)(param_1 + 0x20) = piVar1;
  *(int **)(param_1 + 0x20) = piVar1;
  *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
  return;
}


