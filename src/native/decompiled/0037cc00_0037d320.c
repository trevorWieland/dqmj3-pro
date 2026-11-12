#include "0037cc00_0037d320.h"



void fn_0037d320(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00230a84(param_2,0);
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       iVar1 != 0 | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  if (iVar1 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x18),iVar1);
  }
  *(char *)(param_1 + 0x20) = (char)param_2;
  return;
}



void fn_0037d2b0(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002305a4(param_2,0);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       iVar1 != 0 | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  if (iVar1 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x1c),iVar1);
  }
  *(char *)(param_1 + 0x21) = (char)param_2;
  return;
}



void fn_0037d290(int param_1)

{
  fn_0069e748();
                    /* WARNING: Could not recover jumptable at 0x0037d2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))();
  return;
}



void fn_0037d12c(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),(char *)&DAT_0037d254,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_0037d188;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0037d188:
  *(int **)(param_1 + 0x18) = piVar2;
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),(char *)&DAT_0037d268);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_0037d1d4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_0037d1d4:
  *(int **)(param_1 + 0x1c) = piVar2;
  cVar1 = *(char *)(param_1 + 0x20);
  iVar4 = fn_00230a84((int)cVar1,0);
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) =
       iVar4 != 0 | *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  if (iVar4 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x18));
  }
  *(char *)(param_1 + 0x20) = cVar1;
  cVar1 = *(char *)(param_1 + 0x21);
  iVar4 = fn_002305a4((int)cVar1,0);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       iVar4 != 0 | *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  if (iVar4 != 0) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x1c));
  }
  *(char *)(param_1 + 0x21) = cVar1;
  return;
}



undefined4 * fn_0037cf68(void)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined2 *puVar5;
  uint uVar6;
  uint local_2c [3];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_00829190;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 1;
  *(undefined1 *)((int)puVar1 + 0x29) = 0;
  uVar2 = fn_00100b58(&DAT_0037d09c);
  if (uVar2 == 0) {
    puVar3 = &DAT_008f9cf4;
  }
  else {
    puVar4 = local_2c + 1;
    if (0x20 < uVar2) {
      puVar4 = local_2c;
    }
    local_2c[0] = uVar2;
    local_2c[1] = 0x20;
    uVar6 = *puVar4;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar2) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar6);
    }
    if (uVar6 == 0) {
      puVar3 = &DAT_008f9ce8;
    }
    else {
      puVar3 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
      }
      puVar3[2] = uVar2;
      puVar5 = (undefined2 *)((int)puVar3 + uVar2 * 2 + 0xc);
      *puVar3 = 0;
      puVar3[1] = uVar6;
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = 0;
      }
    }
    puVar3 = puVar3 + 3;
  }
  puVar1[0xb] = puVar3;
  fn_00301a9c(puVar3,&DAT_0037d09c,uVar2 << 1);
  *(undefined1 *)(puVar1 + 0xc) = 0;
  return puVar1;
}



void fn_0037cf4c(int param_1,byte param_2)

{
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | param_2;
  *(byte *)(param_1 + 0x29) = param_2;
  return;
}



void fn_0037cee4(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x14);
  iVar2 = fn_00100b58(param_3);
  *(byte *)(*(int *)(iVar1 + 0x20) + 0x44) =
       *(byte *)(*(int *)(iVar1 + 0x20) + 0x44) & 0xfe | 0 < iVar2;
  if (0 < iVar2) {
    fn_00190d50(*(undefined4 *)(iVar1 + 0x20),param_3);
  }
  fn_00147974(iVar1 + 0x2c,param_3);
  return;
}



void fn_0037ce88(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x14);
  iVar2 = *(int *)(iVar1 + 0x14);
  bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
  if (param_3 == 0) {
    *(byte *)(iVar2 + 0x44) = bVar3 | 1;
    iVar2 = *(int *)(iVar1 + 0x18);
    bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe;
  }
  else {
    *(byte *)(iVar2 + 0x44) = bVar3;
    iVar2 = *(int *)(iVar1 + 0x18);
    bVar3 = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar2 + 0x44) = bVar3;
  *(char *)(iVar1 + 0x28) = (char)param_3;
  return;
}



void fn_0037ce70(int param_1,int param_2,undefined4 param_3)

{
  fn_00190d50(*(undefined4 *)(*(int *)(param_1 + param_2 * 4 + 0x14) + 0x24),param_3);
  return;
}



void fn_0037ce20(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 local_10;
  
  iVar1 = *(int *)(param_1 + param_2 * 4 + 0x14);
  *(char *)(iVar1 + 0x30) = (char)param_3;
  local_10 = 0xffffffff;
  fn_0068b37c(param_3,&local_10);
  iVar2 = *(int *)(iVar1 + 0x20);
  *(undefined4 *)(iVar2 + 0xac) = local_10;
  *(undefined4 *)(iVar2 + 0xb0) = local_10;
  iVar1 = *(int *)(iVar1 + 0x24);
  *(undefined4 *)(iVar1 + 0xac) = local_10;
  *(undefined4 *)(iVar1 + 0xb0) = local_10;
  return;
}



void fn_0037cc00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  byte bVar6;
  undefined4 local_20;
  
  local_20 = param_4;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893468,1);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_0089346c,1);
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  uVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),DAT_00893470,1);
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893474,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0037ccb4;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0037ccb4:
  *(int **)(param_1 + 0x20) = piVar3;
  piVar3 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_00893478,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_0037cd00;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0037cd00:
  *(int **)(param_1 + 0x24) = piVar3;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0xa4) != 0) {
    fn_00147974(param_1 + 0x2c);
  }
  fn_0069e710(param_1);
  iVar5 = *(int *)(param_1 + 0x14);
  cVar1 = *(char *)(param_1 + 0x28);
  bVar6 = *(byte *)(iVar5 + 0x44) & 0xfe;
  if (cVar1 == '\0') {
    *(byte *)(iVar5 + 0x44) = bVar6 | 1;
    iVar5 = *(int *)(param_1 + 0x18);
    bVar6 = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  else {
    *(byte *)(iVar5 + 0x44) = bVar6;
    iVar5 = *(int *)(param_1 + 0x18);
    bVar6 = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  }
  *(byte *)(iVar5 + 0x44) = bVar6;
  *(char *)(param_1 + 0x28) = cVar1;
  bVar6 = *(byte *)(param_1 + 0x29);
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe | bVar6;
  *(byte *)(param_1 + 0x29) = bVar6;
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  iVar5 = fn_00100b58(uVar2);
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe | 0 < iVar5;
  if (0 < iVar5) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x20),uVar2);
  }
  fn_00147974(param_1 + 0x2c,uVar2);
  local_20 = 0xffffffff;
  fn_0068b37c((int)*(char *)(param_1 + 0x30),&local_20);
  iVar5 = *(int *)(param_1 + 0x20);
  *(undefined4 *)(iVar5 + 0xac) = local_20;
  *(undefined4 *)(iVar5 + 0xb0) = local_20;
  iVar5 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(iVar5 + 0xac) = local_20;
  *(undefined4 *)(iVar5 + 0xb0) = local_20;
  fn_00190d50(*(undefined4 *)(param_1 + 0x24),&DAT_0037ce1c);
  return;
}


