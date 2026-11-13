#include "002ae4f8_002afc68b.h"



bool fn_002afc68(void)

{
  float in_s0;
  float in_s1;
  
  return in_s0 < in_s1;
}



void fn_002af9ac(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  fn_006f7a5c(DAT_008977e0);
  fn_001d8a20();
  fn_00692fb0(*(undefined4 *)(DAT_008977e0 + 0x40));
  fn_006f7ab8(DAT_008977e0);
  fn_001f6470();
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021c488(uVar1,0);
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021d7a0(uVar1,0);
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_0021c420(uVar1,0);
  *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x30) = 0;
  puVar4 = *(undefined4 **)(param_1 + 0x20);
  puVar5 = *(undefined4 **)(param_1 + 0x1c);
  puVar3 = puVar5;
  if (puVar5 != puVar4) {
    do {
      (**(code **)*puVar3)(puVar3);
      puVar3 = puVar3 + 7;
    } while (puVar3 != puVar4);
    iVar2 = (int)((longlong)((int)puVar4 - (int)puVar5) * -0x6db6db6d +
                  ((ulonglong)(uint)((int)puVar4 - (int)puVar5) << 0x20) >> 0x20);
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar2 >> 4) - (iVar2 >> 0x1f)) * -0x1c;
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  fn_002ab194(param_1);
  uVar1 = fn_006f7a48(DAT_008977e0);
  fn_00128744(uVar1,0xffffffff);
  return;
}



void fn_002af828(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



undefined4 fn_002af7a8(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  *(undefined1 *)(param_1 + 0x50) = 0;
  piVar1 = (int *)fn_001beb90();
  piVar2 = *(int **)(param_1 + 0x54);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x54) = piVar1;
  }
  piVar1 = (int *)fn_001c00cc();
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(int **)(param_1 + 0x58) = piVar1;
  }
  fn_00144834(0x4f,0);
  return 1;
}



void fn_002af704(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977e0 + 0x28),0xd2);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894eec) {
        if (puVar1 != (undefined4 *)0x0) {
          fn_00395754();
        }
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x58) + 4))();
    *(undefined4 *)(param_1 + 0x58) = 0;
  }
  if (*(int **)(param_1 + 0x54) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x54) + 4))();
    *(undefined4 *)(param_1 + 0x54) = 0;
  }
  return;
}



void fn_002af684(void)

{
  fn_006f9b80();
  return;
}


