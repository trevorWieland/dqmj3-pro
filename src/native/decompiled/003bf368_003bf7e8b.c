#include "003bf368_003bf7e8b.h"



/* WARNING: Removing unreachable block (ram,0x003bf9ac) */
/* WARNING: Removing unreachable block (ram,0x003bf890) */
/* WARNING: Removing unreachable block (ram,0x003bf934) */
/* WARNING: Removing unreachable block (ram,0x003bfa24) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffc8 : 0x003bf894 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003bf7e8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int local_24;
  
  puVar1 = (undefined4 *)fn_0039b5d8();
  *puVar1 = &PTR_FUN_0082f898;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar4 = 7;
  puVar1[0x27] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  iVar4 = puVar1[0x27];
  puVar1[0x28] = iVar4 + 0x1c;
  puVar1[0x29] = iVar4 + 0x80;
  piVar5 = puVar1 + 0x2a;
  *piVar5 = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar5 = (int)puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x2c] = *piVar5 + 0x80;
  puVar1[0x2b] = *piVar5 + 0x10;
  iVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00689144();
  }
  puVar1[0x2d] = uVar3;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 1;
  piVar5 = puVar1 + 0x30;
  *piVar5 = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar5 = (int)puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0x31] = *piVar5 + 0x10;
  puVar1[0x32] = *piVar5 + 0x80;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  local_24 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x33] = puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xffffffff;
    }
    puVar2 = puVar2 + 1;
  }
  iVar4 = puVar1[0x33];
  puVar1[0x34] = iVar4 + 0x10;
  puVar1[0x35] = iVar4 + 0x80;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  local_24 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x36] = puVar2;
  for (; local_24 != 0; local_24 = local_24 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0xffffffff;
    }
    puVar2 = puVar2 + 1;
  }
  iVar4 = puVar1[0x36];
  puVar1[0x38] = iVar4 + 0x80;
  puVar1[0x37] = iVar4 + 8;
  puVar1[0x39] = 0xffffffff;
  puVar1[0x3a] = 0xffffffff;
  puVar1[0x3b] = 0xffffffff;
  puVar1[0x3c] = 0xffffffff;
  puVar1[0x3d] = 0;
  return puVar1;
}



/* WARNING: Removing unreachable block (ram,0x003bf7a8) */

void fn_003bf754(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 != 0) {
    fn_0022cf0c(param_1);
    fn_003bf608(param_1,0);
    fn_003bed3c(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0xac);
    for (puVar2 = *(undefined4 **)(param_1 + 0xa8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
      (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
    }
    fn_006890bc(*(undefined4 *)(param_1 + 0xb4));
    *(undefined1 *)(param_1 + 0xbc) = 0;
  }
  return;
}



void fn_003bf608(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  ushort local_2c [12];
  
  uVar3 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
  uVar2 = (uint)((ulonglong)uVar3 >> 0x20);
  uVar1 = (uint)uVar3;
  if (param_2 == 0) {
    uVar2 = *(uint *)(param_1 + 0xf4);
  }
  if (param_2 != 0 || uVar2 != uVar1) {
    *(uint *)(param_1 + 0xf4) = uVar1;
    fn_0018a618(local_2c + 2,8,7,L"%03d%02d%02d",(uVar1 / 0x3c) / 0x3c,(uVar1 / 0x3c) % 0x3c,
                 uVar1 % 0x3c);
    uVar2 = 0;
    do {
      local_2c[0] = local_2c[uVar2 + 2];
      uVar1 = (uint)local_2c[0];
      local_2c[1] = 0;
      if (uVar1 == 0x34) {
LAB_003bf6d8:
        uVar1 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c) >> 2;
        if (uVar1 <= uVar2) {
          fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar2,uVar1);
        }
        fn_00190d50(*(undefined4 *)(*(int *)(param_1 + 0x9c) + uVar2 * 4),local_2c);
      }
      else {
        if (0x34 < uVar1) {
          if (4 < uVar1 - 0x35) goto LAB_003bf718;
          goto LAB_003bf6d8;
        }
        if (uVar1 == 0x31) goto LAB_003bf6d8;
        if (uVar1 < 0x32) {
          if (uVar1 == 0x20 || uVar1 == 0x30) goto LAB_003bf6d8;
        }
        else if (uVar1 == 0x32 || uVar1 == 0x33) goto LAB_003bf6d8;
      }
LAB_003bf718:
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < 7);
  }
  return;
}


