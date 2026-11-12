#include "0044a610_0044b18ca.h"



void fn_0044aa1c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039f9e8();
  puVar1[0x56] = 0;
  *puVar1 = &PTR_FUN_0083f08c;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  return;
}



void fn_0044a960(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_0044a90c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896a84) goto LAB_0044a954;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0044a954:
  *(undefined4 **)(param_1 + 0x158) = puVar1;
  return;
}



void fn_0044a894(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_0039f2d4();
  fn_0039e774(param_1);
  iVar1 = *(int *)(param_1 + 0x16c);
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x178) = 0;
  iVar2 = *(int *)(param_1 + 0x17c);
  *(undefined4 *)(param_1 + 0x17c) = 0;
  fn_001008c4(iVar1,iVar2 - iVar1 >> 2,0);
  fn_0039ec68(param_1);
  fn_0039e5ac(param_1);
  fn_002c4100(param_1);
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}



void fn_0044a824(int param_1)

{
  fn_002c3d68();
  (**(code **)(**(int **)(param_1 + 0x164) + 0xc))();
  fn_006899f4(param_1,0xd4,1);
  *(undefined4 *)(param_1 + 0x15c) = 3;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}



void fn_0044a770(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = fn_006ba284();
  iVar3 = fn_006ba274(param_1);
  param_2 = iVar2 * iVar3 + param_2;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0x38);
  if (((param_2 < 0) || (iVar2 = fn_006b876c(uVar4), iVar2 <= param_2)) ||
     (iVar2 = fn_0028bb88(uVar4,param_2), iVar2 == 0)) {
    return;
  }
  fn_0044aa54(*(undefined4 *)(param_1 + 0x158),iVar2);
  uVar1 = fn_0029272c(iVar2);
  *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x903) = uVar1;
  iVar2 = fn_006896fc(param_1,0xe7);
  if (iVar2 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x158) + 0x1b) = 0;
  }
  fn_00689930(param_1,0xe7,0);
  return;
}



void fn_0044aa54(int param_1,int param_2)

{
  fn_0017821c(param_1 + 0x908,param_2 + 0x8e0,400);
  *(undefined1 *)(param_1 + 0xa98) = *(undefined1 *)(param_2 + 0xa70);
  *(undefined4 *)(param_1 + 0xa9c) = *(undefined4 *)(param_2 + 0xa84);
  fn_0017821c(param_1 + 0x1c,param_2 + 4,0x8d8);
  *(char *)(param_1 + 0x8f5) = (char)((*(byte *)(param_2 + 0xa74) & 3) >> 1);
  *(char *)(param_1 + 0x8f6) = (char)((*(byte *)(param_2 + 0xa74) & 7) >> 2);
  *(char *)(param_1 + 0x8f7) = (char)((*(byte *)(param_2 + 0xa74) & 0xf) >> 3);
  *(undefined1 *)(param_1 + 0x904) = 0;
  return;
}



void fn_0044a610(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_20 [12];
  
  fn_002c3e78();
  iVar5 = 0;
  iVar1 = fn_006ba274(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006ce9d8(param_1,iVar5);
      if (iVar1 == 0) {
        fn_00229d40(param_1,iVar5);
        fn_0039e714(param_1,iVar5);
        fn_0039e754(param_1,iVar5);
        fn_00688a08(param_1,iVar5);
      }
      else {
        fn_0031b78c(param_1,iVar5,1,iVar1 + 4);
        fn_00291a64(iVar1,auStack_20);
        fn_0039e574(param_1,iVar5,auStack_20);
        fn_0039e4e4(param_1,iVar5,*(byte *)(iVar1 + 0xa74) & 1,(*(byte *)(iVar1 + 0xa74) & 3) >> 1)
        ;
        iVar2 = fn_006cea38(param_1,iVar5);
        iVar2 = *(int *)(param_1 + 0x170) + iVar2;
        puVar3 = (uint *)(*(int *)(param_1 + 0x16c) +
                         ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1b)) >> 5) * 4);
        uVar4 = iVar2 % 0x20;
        if ((int)uVar4 < 0) {
          puVar3 = puVar3 + -1;
          uVar4 = uVar4 + 0x20;
        }
        fn_0039e548(param_1,iVar5,(*puVar3 & 1 << (uVar4 & 0xff)) != 0);
        fn_0039f0e8(param_1,iVar5,iVar1);
      }
      iVar5 = iVar5 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar5 < iVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}


