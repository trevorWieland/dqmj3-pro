#include "003c1f64_003c3168a.h"



void fn_003c2ad4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xdb);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896770) goto LAB_003c2b20;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003c2b20:
  puVar1[5] = 0xd9;
  iVar3 = fn_006be118(*(undefined4 *)(param_1 + 0x164));
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      iVar4 = fn_006c5268(param_1,iVar5);
      if (iVar4 != 0) {
        fn_005841e4(puVar1,iVar5);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  puVar1[6] = 1;
  return;
}



void fn_003c2090(undefined4 param_1)

{
  fn_0039ec68();
  fn_0039e774(param_1);
  fn_0039e5ac(param_1);
  fn_002c4100(param_1);
  return;
}



void fn_003c1ff8(undefined4 *param_1)

{
  *param_1 = &DAT_0082ffd0;
  fn_003c1e5c(param_1);
  param_1[0xd] = 0;
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
  }
  if ((int *)param_1[0x11] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x11] + 4))();
  }
  if ((int *)param_1[0x10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x10] + 4))();
  }
  if ((int *)param_1[0xf] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xf] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



void fn_003c1fbc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_0082ffd0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *(undefined1 *)(puVar1 + 0xe) = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  return;
}



void fn_003c1f64(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_0040f6c0();
  }
  piVar4 = *(int **)(param_1 + 0x3c);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x3c) = piVar3;
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar1 + 0x10);
    piVar3 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskNetworkConnect_008c6e38);
    *piVar3 = (int)&DAT_00859ed8;
    fn_00675c38(piVar3);
  }
  piVar4 = *(int **)(param_1 + 0x44);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0x44) = piVar3;
  }
  iVar2 = fn_00145b00(0x9c,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    puVar1 = (undefined4 *)fn_005f62c0();
    puVar1[8] = &DAT_00859420;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    *puVar1 = &DAT_00859b38;
    iVar2 = fn_00119b40(puVar1 + 0x10);
    piVar3 = (int *)(iVar2 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar2 + 0x18,s_TaskGetHostList_008c6def);
    *piVar3 = (int)&DAT_00859d84;
    fn_00673204(piVar3);
  }
  piVar4 = *(int **)(param_1 + 0x48);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))();
    }
    *(int **)(param_1 + 0x48) = piVar3;
  }
  return;
}


