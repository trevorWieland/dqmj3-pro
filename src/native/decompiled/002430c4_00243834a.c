#include "002430c4_00243834a.h"



void fn_00243414(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008937a0,1);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00243470;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00243470:
  *(int **)(param_1 + 0x14) = piVar1;
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 8) + 0x2c))
                            (*(int **)(param_1 + 8),DAT_008937a4,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a934) {
        piVar3 = piVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(int **)(param_1 + 0x18) = piVar3;
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar4 < 0x425c0001) {
    iVar4 = 0x425c0000;
  }
  *(int *)(param_1 + 0x20) = iVar4;
  piVar3[0xf] = iVar4;
  piVar3[0x10] = piVar3[0x10];
  *(byte *)(piVar3 + 0x11) = *(byte *)(piVar3 + 0x11) & 0xef | 0x10;
  iVar4 = *(int *)(param_1 + 0x14);
  *(undefined4 *)(iVar4 + 0x3c) = *(undefined4 *)(param_1 + 0x20);
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
  fn_0069e710(param_1);
  fn_00243550(param_1,&DAT_00243544);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00243134) */
/* WARNING: Removing unreachable block (ram,0x00243138) */
/* WARNING: Removing unreachable block (ram,0x0024313c) */

undefined4 * fn_002430c4(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  puVar1 = (undefined4 *)fn_0069e7cc(param_1);
  *puVar1 = &DAT_0081d398;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  piVar6 = (int *)0x0;
  iVar2 = fn_00100fc6(0x80,0);
  puVar1[5] = iVar2;
  iVar2 = puVar1[5];
  puVar1[6] = iVar2;
  puVar1[7] = iVar2 + 0x80;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  iVar2 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0025e920(iVar2,param_2,param_3);
  }
  piVar5 = (int *)puVar1[10];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    puVar1[10] = piVar3;
  }
  piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,(char *)&DAT_00243358,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a928) goto LAB_0024321c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  piVar3 = (int *)0x0;
LAB_0024321c:
  iVar2 = fn_00145b00(0x44,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00307cc4(iVar2,param_2,piVar3,param_4,puVar1[4]);
  }
  piVar5 = (int *)puVar1[8];
  if (piVar5 != piVar3) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))();
    }
    puVar1[8] = piVar3;
  }
  (**(code **)(*(int *)puVar1[8] + 0x10))();
  piVar3 = (int *)(**(code **)(*param_3 + 0x2c))(param_3,&DAT_00243368,1);
  if (piVar3 != (int *)0x0) {
    puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
    do {
      if (puVar4 == &DAT_0089a928) {
        piVar6 = piVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  iVar2 = fn_00145b00(0x24,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00243834(iVar2,param_2,piVar6,param_4,puVar1[4]);
  }
  piVar6 = (int *)puVar1[9];
  if (piVar6 != piVar3) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    puVar1[9] = piVar3;
  }
  (**(code **)(*(int *)puVar1[9] + 0x10))();
  return puVar1;
}


