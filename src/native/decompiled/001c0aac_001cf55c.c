#include "001c0aac_001cf55c.h"



void fn_001cf55c(undefined4 param_1)

{
  DAT_00898898 = param_1;
  return;
}



bool fn_001cf540(void)

{
  return DAT_00898898 != 0;
}



void fn_001c942c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = (int *)*(int *)(param_1 + 0x50);
  while (piVar6 != (int *)(param_1 + 0x50)) {
    iVar2 = *piVar6;
    fn_0017d90c(param_1 + 0x4c);
    fn_002feef8(piVar6 + -2);
    piVar6 = (int *)iVar2;
  }
  iVar2 = *(int *)(param_1 + 0x44);
  while (iVar2 != param_1 + 0x44) {
    iVar4 = iVar2 + -0x18;
    iVar2 = fn_00150c1c(param_1 + 0x40);
    if (iVar4 != 0) {
      fn_00147ff0();
      fn_002feef8(iVar4);
    }
  }
  fn_001c88b8(param_1);
  puVar1 = *(undefined4 **)(param_1 + 0x2c);
  while (puVar3 = puVar1, puVar3 != (undefined4 *)(param_1 + 0x2c)) {
    puVar1 = (undefined4 *)*puVar3;
    fn_0054a6c8(puVar3[-1],puVar3[-2]);
    fn_0017d90c(param_1 + 0x28,puVar3);
    if (puVar3 != (undefined4 *)&NotUsed) {
      iVar2 = fn_001588d4(puVar3 + -3);
      fn_002feef8(iVar2 + -8);
    }
  }
  fn_001218d4(DAT_00897800,DAT_0089877c);
  fn_001c8df0(param_1,DAT_0089815c);
  fn_001c8df0(param_1,DAT_00898158);
  piVar6 = (int *)*(int *)(param_1 + 0x20);
  while (piVar5 = piVar6, piVar5 != (int *)(param_1 + 0x20)) {
    piVar6 = (int *)*piVar5;
    for (iVar2 = piVar5[-1]; 0 < iVar2; iVar2 = iVar2 + -1) {
      fn_001c8ec4(param_1,piVar5 + -3);
    }
  }
  piVar6 = *(int **)(param_1 + 0x14);
  while (piVar6 != (int *)(param_1 + 0x14)) {
    iVar2 = (int)(piVar6 + -0xb);
    piVar6 = (int *)*piVar6;
    fn_001c8398(param_1,param_1 + 0x10,iVar2);
  }
  piVar6 = *(int **)(param_1 + 8);
  while (piVar6 != (int *)(param_1 + 8)) {
    iVar2 = (int)(piVar6 + -0xb);
    piVar6 = (int *)*piVar6;
    fn_001c8398(param_1,param_1 + 4,iVar2);
  }
  return;
}



void fn_001c7f04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_stack_00000008;
  
  fn_005e0974(DAT_00898154,param_1,param_2,param_3,in_stack_00000008);
  return;
}



void fn_001c7eb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  fn_005e08b8(DAT_00898154,param_1,param_9,param_2,param_3,param_4,param_5,param_6,param_7,param_8)
  ;
  return;
}



void fn_001c686c(int param_1)

{
  int iVar1;
  undefined1 *puVar2;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[4] = 0;
  puVar2[3] = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = 0;
  *(undefined4 *)(puVar2 + 0x10) = 0;
  *(undefined4 *)(puVar2 + 0x14) = 0;
  puVar2[0x18] = 0;
  *(undefined4 *)(puVar2 + 0x1c) = 0;
  *(undefined4 *)(puVar2 + 0x20) = 0;
  *(undefined4 *)(puVar2 + 0x24) = 0;
  *(undefined4 *)(puVar2 + 0x28) = 0;
  *(undefined4 *)(puVar2 + 0x2c) = 0;
  *(undefined4 *)(puVar2 + 0x30) = 0;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3c] = 0;
  puVar2[0x3d] = 0;
  puVar2[0x3e] = 0;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  puVar2[0x41] = 0;
  puVar2[0x42] = 0;
  puVar2[0x43] = 0;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  *(undefined4 *)(puVar2 + 0x48) = 0;
  puVar2[0x4c] = 0;
  puVar2[0x4d] = 0;
  puVar2[0x4e] = 0;
  puVar2[0x4f] = 0;
  puVar2[0x50] = 0;
  *(undefined4 *)(puVar2 + 0x54) = 0;
  *(undefined4 *)(puVar2 + 0x58) = 0;
  puVar2[0x5c] = 0;
  puVar2[0xd] = 0;
  switch(*(undefined1 *)(param_1 + 4)) {
  case 0:
    if ((1 < *(byte *)(DAT_008977e0 + 0x170)) && (*(char *)(DAT_008977e0 + 0x219) == '\0')) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    return;
  case 1:
    if (1 < *(byte *)(DAT_008977e0 + 0x170)) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    break;
  case 2:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8(param_1);
  case 3:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8(param_1);
  case 4:
    if ((1 < *(byte *)(DAT_008977e0 + 0x170)) && (*(char *)(DAT_008977e0 + 0x219) == '\0')) {
                    /* WARNING: Subroutine does not return */
      fn_0011dda8();
    }
    return;
  case 5:
    iVar1 = fn_006f75ac(DAT_008977e0);
    if (iVar1 != 0) {
      iVar1 = fn_006f75ac(DAT_008977e0);
                    /* WARNING: Subroutine does not return */
      fn_0011dda8(*(undefined4 *)(iVar1 + 8));
    }
    break;
  case 6:
    fn_001c5a1c(param_1);
    return;
  case 7:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8(param_1);
  case 8:
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  return;
}



int fn_001c23ac(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + 0x68) != 0) {
    fn_0074637c();
  }
  fn_001c93c8(*(undefined4 *)(iVar1 + 0x40));
  fn_001c93c8(*(undefined4 *)(iVar1 + 0x44));
  (**(code **)(**(int **)(iVar1 + 0x38) + 0x18))();
  fn_001070c4(*(undefined4 *)(iVar1 + 0x4c));
  fn_00313b70(*(undefined4 *)(iVar1 + 0x30));
  fn_0023e6c8(*(undefined4 *)(iVar1 + 0x48));
  fn_00234438(*(undefined4 *)(iVar1 + 0x54));
  fn_005ed450(*(undefined4 *)(iVar1 + 0x28));
  fn_00692a34(*(undefined4 *)(iVar1 + 0x2c));
  (**(code **)(**(int **)(iVar1 + 0x10) + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  (**(code **)(*DAT_00897810 + 8))(DAT_00897810,1);
  fn_002546e4(*(undefined4 *)(iVar1 + 0xf0));
  return (int)*(char *)(iVar1 + 0x50);
}



undefined4 fn_001c0aac(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined2 auStack_248 [272];
  undefined4 local_28;
  undefined4 local_24;
  
  puVar5 = auStack_248;
  iVar1 = fn_001bdd9c(param_2);
  uVar6 = fn_001be608(param_2,0x2f);
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  iVar2 = (int)uVar6;
  if (iVar2 != iVar1) {
    iVar4 = iVar1 + -1;
  }
  if (iVar2 != iVar1 && iVar2 != iVar4) {
    fn_001bd144(param_2);
    iVar4 = param_1 + 0x2c;
    fn_001930b8();
    local_28 = 0;
    local_24 = 0;
    fn_00102388(&local_28);
    while ((iVar1 = fn_0010239a(iVar4,0x105,&local_28), iVar1 != 0 &&
           (iVar2 = fn_00101ce8(puVar5,iVar4,iVar1,&local_28), iVar2 != 0))) {
      puVar5 = puVar5 + 1;
      iVar4 = iVar4 + iVar1;
    }
    *puVar5 = 0;
    uVar3 = fn_0044d750(auStack_248);
    *(uint *)(param_1 + 0x14) = uVar3;
    if ((int)uVar3 < 0) {
      if ((((uVar3 & 0x3fc00) == 0x4400) && (0xb3 < (uVar3 & 0x3ff))) && ((uVar3 & 0x3ff) < 200)) {
        *(undefined4 *)(param_1 + 8) = 0xffffffff;
        *(undefined4 *)(param_1 + 4) = 0;
      }
      else {
        *(undefined4 *)(param_1 + 4) = 0xb;
        *(undefined4 *)(param_1 + 8) = 0xffffff80;
      }
      goto LAB_001c0bbc;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
LAB_001c0bbc:
  return *(undefined4 *)(param_1 + 4);
}


