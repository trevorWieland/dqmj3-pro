#include "003d0164_003d01b4.h"



void fn_003d0164(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uVar7;
  
  pcVar6 = *(code **)(**(int **)(param_1 + 0x24) + 8);
  if (-1 < param_2) {
    iVar1 = (*pcVar6)();
    fn_003d01b4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar1 + 8),param_2);
    return;
  }
  iVar1 = (*pcVar6)();
  iVar2 = *(int *)(param_1 + 8);
  iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),*(undefined4 *)(param_1 + 0x28),
                       *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(iVar1 + 8),unaff_r4,unaff_r5,
                       unaff_r6);
  *(int *)(iVar2 + 4) = iVar1;
  uVar7 = *(undefined4 *)(iVar1 + 0x10);
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"tb_battlesub_00");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a930) goto LAB_003d021c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d021c:
  *(int **)(iVar2 + 8) = piVar3;
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"sub_windows");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a934) goto LAB_003d0268;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d0268:
  *(int **)(iVar2 + 0xc) = piVar3;
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"category_Win_00");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a934) goto LAB_003d02b0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d02b0:
  *(int **)(iVar2 + 0x10) = piVar3;
  uVar5 = fn_0038cc08(iVar2,uVar7,"pos_bar");
  *(undefined4 *)(iVar2 + 0x14) = uVar5;
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"scr_bar_mid");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a92c) goto LAB_003d0310;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d0310:
  *(int **)(iVar2 + 0x18) = piVar3;
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"scr_bar_slider");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a92c) goto LAB_003d0358;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d0358:
  *(int **)(iVar2 + 0x1c) = piVar3;
  piVar3 = (int *)fn_0038cc08(iVar2,uVar7,"scr_bar_slider_d");
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a92c) goto LAB_003d03a0;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_003d03a0:
  *(int **)(iVar2 + 0x20) = piVar3;
  *(byte *)(*(int *)(iVar2 + 8) + 0x44) = *(byte *)(*(int *)(iVar2 + 8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0xc) + 0x44) = *(byte *)(*(int *)(iVar2 + 0xc) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x10) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0x18) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x18) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0x1c) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x1c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(iVar2 + 0x20) + 0x44) = *(byte *)(*(int *)(iVar2 + 0x20) + 0x44) & 0xfe;
  return;
}



void fn_003d01b4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00178f9c(param_2,param_3);
  *(int *)(param_1 + 4) = iVar1;
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d0408);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_003d021c;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d021c:
  *(int **)(param_1 + 8) = piVar2;
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d041c);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a934) goto LAB_003d0268;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d0268:
  *(int **)(param_1 + 0xc) = piVar2;
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d042c);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a934) goto LAB_003d02b0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d02b0:
  *(int **)(param_1 + 0x10) = piVar2;
  uVar4 = fn_0038cc08(param_1,uVar5,(char *)&DAT_003d043c);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d0444);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a92c) goto LAB_003d0310;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d0310:
  *(int **)(param_1 + 0x18) = piVar2;
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d0454);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a92c) goto LAB_003d0358;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d0358:
  *(int **)(param_1 + 0x1c) = piVar2;
  piVar2 = (int *)fn_0038cc08(param_1,uVar5,(char *)&DAT_003d0464);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a92c) goto LAB_003d03a0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_003d03a0:
  *(int **)(param_1 + 0x20) = piVar2;
  *(byte *)(*(int *)(param_1 + 8) + 0x44) = *(byte *)(*(int *)(param_1 + 8) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0xc) + 0x44) = *(byte *)(*(int *)(param_1 + 0xc) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x10) + 0x44) = *(byte *)(*(int *)(param_1 + 0x10) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x18) + 0x44) = *(byte *)(*(int *)(param_1 + 0x18) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x1c) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe;
  return;
}


