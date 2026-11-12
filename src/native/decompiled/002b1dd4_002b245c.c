#include "002b1dd4_002b245c.h"



void fn_002b245c(int param_1,uint param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int *piVar2;
  
  if ((uint)(*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2) <= param_2) {
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2);
  }
  piVar2 = *(int **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if (piVar2 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
    do {
      if (puVar1 == &DAT_008938a4) goto LAB_002b24dc;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_002b24dc:
  fn_0031cfec(piVar2,param_3);
  return;
}



undefined1 * fn_002b2234(int param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  uint local_28;
  undefined1 auStack_24 [4];
  undefined4 *local_20 [2];
  
  uVar4 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (uVar4 <= param_2) {
    local_28 = uVar4;
    fn_002ff628(9,&DAT_008c764f,&DAT_008c764f,param_2);
  }
  piVar6 = *(int **)(*(int *)(param_1 + 0x14) + param_2 * 4);
  if (piVar6 != (int *)0x0) {
    puVar1 = (undefined4 *)(**(code **)(*piVar6 + 0xc))(piVar6);
    do {
      if (puVar1 == &DAT_008938a4) goto LAB_002b22b8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  piVar6 = (int *)0x0;
LAB_002b22b8:
  if (param_3 == 0) {
    fn_0031cf9c(piVar6,&DAT_002b2458);
    fn_0031cfec(piVar6,0xffffffff);
    fn_0031cf50(piVar6,0xffffffff);
                    /* WARNING: Could not recover jumptable at 0x002b2440. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    puVar5 = (undefined1 *)(**(code **)(*piVar6 + 0x30))(piVar6,0);
    return puVar5;
  }
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar2 = fn_0028aad0(uVar8,param_3);
  fn_0020bbc4(&local_28,uVar2);
  fn_00231210(local_20,param_3,1);
  fn_0031cf9c(piVar6,local_20[0]);
  uVar2 = 2;
  iVar7 = 0;
  do {
    iVar3 = fn_00144df4(uVar8,iVar7);
    if (iVar3 == param_3) {
      uVar2 = 0;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  iVar7 = 0;
  do {
    iVar3 = fn_006b8538(uVar8,iVar7);
    if (iVar3 == param_3) {
      uVar2 = 1;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  fn_0031cfec(piVar6,uVar2);
  uVar2 = fn_006bfe90(auStack_24);
  fn_0031cf50(piVar6,uVar2);
  uVar4 = fn_006c0108(auStack_24);
  fn_0031ce7c(piVar6,uVar4 < 10);
  (**(code **)(*piVar6 + 0x30))(piVar6,1);
  if (local_20[0] != &DAT_008f9cf4) {
    piVar6 = local_20[0] + -3;
    iVar7 = *piVar6;
    if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_20[0] + -3,local_20[0][-2] + 8,0);
    }
  }
  return (undefined1 *)&local_28;
}



void fn_002b20c0(void)

{
  undefined4 *puVar1;
  undefined1 in_stack_00000004;
  undefined1 in_stack_00000008;
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  puVar1[5] = 0;
  *puVar1 = &DAT_0081ecd4;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  *(undefined1 *)(puVar1 + 9) = in_stack_00000004;
  *(undefined1 *)((int)puVar1 + 0x25) = in_stack_00000008;
  puVar1[10] = &DAT_008f9cf4;
  return;
}



void fn_002b20a4(int param_1,byte param_2)

{
  *(byte *)(param_1 + 0x25) = param_2;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       param_2 | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  return;
}



void fn_002b209c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(byte *)(iVar1 + 0x25) = param_2;
  iVar1 = *(int *)(iVar1 + 0x1c);
  *(byte *)(iVar1 + 0x44) = param_2 | *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



void fn_002b1fa0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  iVar1 = fn_00100b58(param_2);
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
       0 < iVar1 | *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  if (0 < iVar1) {
    if (param_3 == 0) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x20),param_2);
      return;
    }
    piVar5 = *(int **)(param_1 + 0x1c);
    if (piVar5 != (int *)0x0) {
      puVar2 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
      do {
        if (puVar2 == &DAT_0089a934) goto LAB_002b2020;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    piVar5 = (int *)0x0;
LAB_002b2020:
    fn_00688ea0(piVar5,*(undefined4 *)(param_1 + 0x20),param_2);
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x3c);
    uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x40);
    iVar1 = *(int *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
    *(undefined4 *)(iVar1 + 0x40) = uVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    iVar1 = *(int *)(param_1 + 0x14);
    *(undefined4 *)(iVar1 + 0x3c) = uVar3;
    *(undefined4 *)(iVar1 + 0x40) = uVar4;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x002b1fe4) */
/* WARNING: Removing unreachable block (ram,0x002b1ff8) */
/* WARNING: Removing unreachable block (ram,0x002b2008) */
/* WARNING: Removing unreachable block (ram,0x002b2010) */
/* WARNING: Removing unreachable block (ram,0x002b201c) */
/* WARNING: Removing unreachable block (ram,0x002b2020) */

void fn_002b1f94(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  iVar2 = fn_00100b58(param_2);
  iVar3 = *(int *)(iVar1 + 0x20);
  *(byte *)(iVar3 + 0x44) = 0 < iVar2 | *(byte *)(iVar3 + 0x44) & 0xfe;
  if (iVar2 < 1) {
    return;
  }
  fn_00190d50(*(undefined4 *)(iVar1 + 0x20),param_2);
  return;
}



void fn_002b1f48(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x24) = (char)param_2;
  iVar2 = *(int *)(param_1 + 0x14);
  bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe;
  if (param_2 == 0) {
    *(byte *)(iVar2 + 0x44) = bVar1 | 1;
    iVar2 = *(int *)(param_1 + 0x18);
    bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    *(byte *)(iVar2 + 0x44) = bVar1;
    iVar2 = *(int *)(param_1 + 0x18);
    bVar1 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar2 + 0x44) = bVar1;
  return;
}



void fn_002b1f40(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(char *)(iVar1 + 0x24) = (char)param_2;
  iVar3 = *(int *)(iVar1 + 0x14);
  bVar2 = *(byte *)(iVar3 + 0x44) & 0xfe;
  if (param_2 == 0) {
    *(byte *)(iVar3 + 0x44) = bVar2 | 1;
    iVar1 = *(int *)(iVar1 + 0x18);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe;
  }
  else {
    *(byte *)(iVar3 + 0x44) = bVar2;
    iVar1 = *(int *)(iVar1 + 0x18);
    bVar2 = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar1 + 0x44) = bVar2;
  return;
}



void fn_002b1f0c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_10;
  
  *(char *)(param_1 + 0x2c) = (char)param_2;
  local_10 = 0xffffffff;
  fn_0068b37c(param_2,&local_10);
  iVar1 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar1 + 0xac) = local_10;
  *(undefined4 *)(iVar1 + 0xb0) = local_10;
  return;
}



void fn_002b1f04(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_10;
  
  iVar1 = *(int *)(param_1 + 0x14);
  *(char *)(iVar1 + 0x2c) = (char)param_2;
  uStack_10 = 0xffffffff;
  fn_0068b37c(param_2,&uStack_10);
  iVar1 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar1 + 0xac) = uStack_10;
  *(undefined4 *)(iVar1 + 0xb0) = uStack_10;
  return;
}



void fn_002b1dd4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_0089327c,1);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893280,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893284,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893288,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_002b1e84;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_002b1e84:
  *(int **)(param_1 + 0x20) = piVar2;
  if (*(char *)(param_1 + 0x24) == '\0') {
    *(byte *)(*(int *)(param_1 + 0x14) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x14) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0x18) + 0x44) = *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  }
  else {
    *(byte *)(*(int *)(param_1 + 0x14) + 0x44) = *(byte *)(*(int *)(param_1 + 0x14) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe | 1;
  }
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(param_1 + 0x25) | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  return;
}


