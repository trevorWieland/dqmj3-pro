#include "0063adb4_0063b500a.h"



void fn_0063b164(undefined4 *param_1)

{
  *param_1 = &DAT_008595d8;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined1 *)((int)param_1 + 6) = 0;
  *(undefined1 *)((int)param_1 + 7) = 1;
  return;
}



void fn_0063b0fc(int param_1,int param_2,int param_3)

{
  int iVar1;
  int unaff_r4;
  
  *(char *)(param_1 + 6) = (char)param_2;
  if (param_2 < param_3) {
    unaff_r4 = 1;
  }
  *(char *)(param_1 + 7) = (char)param_3;
  for (iVar1 = param_2; iVar1 < param_3; iVar1 = (int)(char)((char)iVar1 + '\x01')) {
    *(ushort *)(param_1 + 4) =
         *(ushort *)(param_1 + 4) | (ushort)(unaff_r4 << (iVar1 - param_2 & 0xffU));
  }
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x0063b0f0) */

void fn_0063b050(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 + 0x180388;
  if (param_1 == 0x23f) {
    fn_0063b0d8(iVar1,4,1);
  }
  else if (param_1 == 0x240) {
    fn_0063b0d8(iVar1,5,1);
  }
  else if (param_1 == 0x241) {
    fn_0063b0d8(iVar1,6,1);
  }
  *(uint *)(param_2 + 0x185eb8) = *(uint *)(param_2 + 0x185eb8) | 8;
  return;
}



void fn_0063b000(undefined4 param_1)

{
  undefined1 auStack_10 [16];
  
  fn_0061daa0(param_1,auStack_10);
  fn_00655430(auStack_10);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0063ae20) */
/* WARNING: Removing unreachable block (ram,0x0063ae24) */

void fn_0063adb4(char *param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  param_2 = param_2 + 0x180388;
  if (*param_1 != '\0') {
    iVar5 = 0x10;
    do {
      if (*(char *)(param_2 + iVar5 * 0x418 + -0x3c6c) != '\0') goto LAB_0063ae64;
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < 0x14);
    iVar5 = 0x18;
    do {
      if (*(char *)(param_2 + iVar5 * 0x418 + -0x3c6c) != '\0') goto LAB_0063ae64;
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < 0x1c);
    iVar5 = 0;
LAB_0063ae64:
    uVar2 = iVar5 - 0x10;
    bVar6 = 7 < uVar2;
    if (bVar6) {
      uVar2 = iVar5 - 0x18;
    }
    if (bVar6 && 7 < uVar2) {
      iVar5 = 0;
    }
    else {
      iVar3 = param_2 + iVar5 * 0x418;
      iVar5 = iVar3 + -0x4080;
      if ((iVar5 != 0) && (iVar4 = fn_006f447c(iVar5), iVar4 != 0)) {
        uVar2 = 0;
        do {
          if ('\0' < *(char *)(iVar3 + -0x4025 + (uint)(byte)(&DAT_007e195c)[uVar2])) {
            bVar1 = (&DAT_007e195c)[uVar2];
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1) = 0;
            *(undefined1 *)(iVar3 + -0x4025 + (uint)bVar1 + 0x61) = 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0xb);
      }
    }
    *(undefined2 *)(iVar5 + 0x280) = 0;
    *(undefined2 *)(iVar5 + 0x282) = 0;
  }
  if (param_1[1] != '\0') {
    iVar5 = 0x14;
    do {
      if (*(char *)(param_2 + iVar5 * 0x418 + -0x3c6c) != '\0') goto LAB_0063af70;
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < 0x18);
    iVar5 = 0x1c;
    do {
      if (*(char *)(param_2 + iVar5 * 0x418 + -0x3c6c) != '\0') goto LAB_0063af70;
      iVar5 = (int)(char)((char)iVar5 + '\x01');
    } while (iVar5 < 0x20);
    iVar5 = 0;
LAB_0063af70:
    uVar2 = iVar5 - 0x10;
    bVar6 = 7 < uVar2;
    if (bVar6) {
      uVar2 = iVar5 - 0x18;
    }
    if (bVar6 && 7 < uVar2) {
      iVar5 = 0;
    }
    else {
      param_2 = param_2 + iVar5 * 0x418;
      iVar5 = param_2 + -0x4080;
      if ((iVar5 != 0) && (iVar3 = fn_006f447c(iVar5), iVar3 != 0)) {
        uVar2 = 0;
        do {
          if ('\0' < *(char *)(param_2 + -0x4025 + (uint)(byte)(&DAT_007e195c)[uVar2])) {
            bVar1 = (&DAT_007e195c)[uVar2];
            *(undefined1 *)(param_2 + -0x4025 + (uint)bVar1) = 0;
            *(undefined1 *)(param_2 + -0x4025 + (uint)bVar1 + 0x61) = 0;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0xb);
      }
    }
    *(undefined2 *)(iVar5 + 0x280) = 0;
    *(undefined2 *)(iVar5 + 0x282) = 0;
  }
  return;
}


