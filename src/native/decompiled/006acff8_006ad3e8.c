#include "006acff8_006ad3e8.h"



int fn_006ad3e8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  iVar5 = *(int *)(DAT_008977e0 + 0xdc);
  iVar7 = *(int *)(DAT_008977e0 + 0xc0);
  if (iVar5 < 0) {
    return 0;
  }
  iVar2 = fn_006f7a0c(DAT_008977e0);
  iVar3 = *(int *)(iVar2 + 0x3c);
  iVar4 = 0;
  iVar2 = (*(int *)(iVar3 + 0xc) - *(int *)(iVar3 + 8)) / 0x150;
  if (0 < iVar2) {
    do {
      iVar1 = *(int *)(iVar3 + 8) + iVar4 * 0x150;
      iVar6 = *(int *)(iVar1 + 0x120);
      bVar8 = iVar6 == iVar5;
      if (bVar8) {
        iVar6 = *(int *)(iVar1 + 0x124);
      }
      if (bVar8 && iVar6 == iVar7) {
        return iVar1 + 0x12e;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return 0;
}



void fn_006ad37c(void)

{
  fn_006f7a5c(DAT_008977e0);
  fn_006a9414();
  fn_006f7a5c(DAT_008977e0);
  fn_006a9408();
  fn_006f7a84(DAT_008977e0);
  fn_006aa87c();
  return;
}



void fn_006ad35c(void)

{
  if (*(int *)(DAT_00897804 + 0x68) == 0) {
    return;
  }
  fn_006c5038();
  return;
}



undefined4 fn_006ad270(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [4];
  
  if (param_2 == 0) {
    iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  else {
    if (param_2 != 1) {
      return 0;
    }
    iVar1 = fn_006b84b0();
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      if (param_2 == 0) {
        iVar2 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),iVar3);
LAB_006ad300:
        if (iVar2 != 0) {
          fn_0020bbc4(auStack_20);
          iVar2 = fn_006bf184(auStack_1c);
          if (iVar2 != 0) {
            return 1;
          }
        }
      }
      else if (param_2 == 1) {
        iVar2 = fn_0028b348();
        goto LAB_006ad300;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



void fn_006ad250(void)

{
  short *psVar1;
  
  psVar1 = (short *)fn_002283d0();
  if (psVar1 == (short *)0x0) {
    return;
  }
  fn_002ea524((int)*psVar1);
  return;
}



void fn_006ad23c(void)

{
  fn_006b6464(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ad228(void)

{
  fn_006b6410(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



undefined4 fn_006ad1c8(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != -1) {
    iVar1 = 0;
    do {
      iVar2 = param_1 + iVar1 * 0xc;
      if (*(int *)(iVar2 + 0xe8c) == param_2) {
        return *(undefined4 *)(param_1 + iVar1 * 0xc + 0xe90);
      }
      if (*(int *)(iVar2 + 0xe98) == param_2) {
        return *(undefined4 *)(param_1 + iVar1 * 0xc + 0xe9c);
      }
      iVar1 = iVar1 + 2;
    } while (iVar1 < 0x14);
  }
  return 0xffffffff;
}



void fn_006ad1b8(undefined4 param_1,int param_2)

{
  fn_00154ac8(*(undefined4 *)(&DAT_007c1de4 + param_2 * 4));
  return;
}



undefined4 fn_006ad1b4(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  DAT_0089a4c8 = fn_0010101c();
  fn_00300f74(DAT_0089a4c8,param_2);
  return extraout_r1;
}



/* WARNING: Removing unreachable block (ram,0x006b82bc) */
/* WARNING: Removing unreachable block (ram,0x006b82e4) */

int fn_006ad198(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar1 = *(int *)(DAT_00897804 + 0x24);
  uVar3 = 1;
  iVar4 = 0;
  iVar2 = fn_006616e0();
  if (1 < iVar2) {
    do {
      iVar2 = fn_002e31e4(uVar3);
      if (((iVar2 == 0) && (iVar2 = fn_00661714(uVar3), iVar2 == param_2)) &&
         ((*(uint *)(*(int *)(iVar1 + 4) + ((int)uVar3 >> 5) * 4) & 1 << (uVar3 & 0x1f)) != 0)) {
        iVar4 = iVar4 + 1;
      }
      uVar3 = (uint)(short)((short)uVar3 + 1);
      iVar2 = fn_006616e0();
    } while ((int)uVar3 < iVar2);
  }
  return iVar4;
}



void fn_006ad17c(void)

{
  fn_006f7a84(DAT_008977e0);
  fn_006aa87c();
  return;
}



undefined4 fn_006ad120(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar3);
      if (*(char *)(iVar2 + 6) != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



void fn_006ad0ac(void)

{
  fn_006ad62c();
  return;
}



undefined4 fn_006ad0a8(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_r1;
  
  DAT_0089a4c8 = fn_0010101c();
  fn_00300f74(DAT_0089a4c8,param_2);
  return extraout_r1;
}



undefined4 fn_006ad00c(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = 0;
  if (-1 < param_3) {
    if (param_2 == 0) {
      iVar1 = fn_006b83e4(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    else if (param_2 == 1) {
      iVar1 = fn_006b84b0();
    }
    if (param_3 < iVar1) {
      if (param_2 == 0) {
        iVar1 = fn_0028b0a0(*(undefined4 *)(DAT_00897804 + 0xc),param_3);
      }
      else {
        if (param_2 != 1) {
          return 0;
        }
        iVar1 = fn_0028b348();
      }
      if (iVar1 != 0) {
        uVar2 = fn_00661094((int)*(short *)(iVar1 + 0x1c));
        return uVar2;
      }
    }
  }
  return 0;
}



void fn_006acff8(void)

{
  fn_006b7aa0(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}


