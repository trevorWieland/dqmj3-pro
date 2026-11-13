#include "003473fc_00347c90.h"



void fn_00347c90(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  if (param_1[8] != param_1[9]) {
    (**(code **)(*param_1 + 0x38))();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1[0x13] + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  if (param_1[8] != param_1[9]) {
    param_1[8] = param_1[9];
  }
  return;
}



void fn_00347bb8(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      uVar5 = 0;
      iVar3 = iVar1 + *(int *)(param_1 + 0x24) * 0xc + iVar2 * 3;
      if (iVar3 < 0x204) {
        uVar5 = *(undefined4 *)(**(int **)(param_1 + 0x18) + iVar3 * 4);
      }
      piVar4 = (int *)0x0;
      if (iVar1 == 0) {
        piVar4 = (int *)(param_1 + 0x28);
      }
      else if (iVar1 == 1) {
        piVar4 = (int *)(param_1 + 0x34);
      }
      else if (iVar1 == 2) {
        piVar4 = (int *)(param_1 + 0x40);
      }
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*piVar4 + iVar2 * 4) = uVar5;
    } while (iVar1 < 3);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x4c) + iVar2 * 4) + 0x2c) =
         *(undefined4 *)(param_1 + 0x5c);
    (**(code **)(**(int **)(*(int *)(param_1 + 0x4c) + iVar2 * 4) + 0x38))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  return;
}



void fn_00347a54(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      uVar6 = 0;
      iVar4 = iVar2 + *(int *)(param_1 + 0x24) * 0xc + iVar3 * 3;
      if (iVar4 < 0x204) {
        uVar6 = *(undefined4 *)(**(int **)(param_1 + 0x18) + iVar4 * 4);
      }
      piVar5 = (int *)0x0;
      if (iVar2 == 0) {
        piVar5 = (int *)(param_1 + 0x28);
      }
      else if (iVar2 == 1) {
        piVar5 = (int *)(param_1 + 0x34);
      }
      else if (iVar2 == 2) {
        piVar5 = (int *)(param_1 + 0x40);
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(*piVar5 + iVar3 * 4) = uVar6;
    } while (iVar2 < 3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xac);
  do {
    uVar1 = fn_00172c98(uVar6,(&DAT_00893680)[iVar3]);
    iVar2 = fn_00145b00(0x30,&DAT_00812c8c);
    if (iVar2 == 0) {
      piVar5 = (int *)0x0;
    }
    else {
      iVar4 = 0;
      if (iVar3 == 0) {
        iVar4 = param_1 + 0x28;
      }
      else if (iVar3 == 1) {
        iVar4 = param_1 + 0x34;
      }
      else if (iVar3 == 2) {
        iVar4 = param_1 + 0x40;
      }
      piVar5 = (int *)fn_003064c8(iVar2,*(undefined4 *)(param_1 + 4),uVar1,1,
                                   *(undefined4 *)(param_1 + 0x10),iVar4,
                                   (int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x58),1,
                                   (int)*(char *)(param_1 + 0x15));
    }
    (**(code **)(*piVar5 + 0x10))(piVar5);
    *(int **)(*(int *)(param_1 + 0x4c) + iVar3 * 4) = piVar5;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00347890) */
/* WARNING: Removing unreachable block (ram,0x00347814) */
/* WARNING: Removing unreachable block (ram,0x0034790c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffdc : 0x00347818 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_003477b8(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_28;
  
  puVar1 = (undefined4 *)fn_002e4414();
  *puVar1 = &DAT_00825310;
  puVar1[8] = 0;
  puVar1[9] = 0;
  piVar4 = puVar1 + 10;
  *piVar4 = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  local_28 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  puVar1[0xb] = *piVar4 + 0x10;
  puVar1[0xc] = *piVar4 + 0x80;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  local_28 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0xd] = puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0xd];
  puVar1[0xe] = iVar3 + 0x10;
  puVar1[0xf] = iVar3 + 0x80;
  puVar1[0x10] = 0;
  puVar1[0x11] = 0;
  puVar1[0x12] = 0;
  local_28 = 2;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x10] = puVar2;
  for (; local_28 != 0; local_28 = local_28 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x10];
  puVar1[0x12] = iVar3 + 0x80;
  puVar1[0x11] = iVar3 + 8;
  return puVar1;
}



void fn_00347760(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(param_1 + 0x40) + iVar1 * 4);
    (**(code **)(*piVar2 + 0x18))(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x40) + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return;
}



void fn_003476f4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  if (param_1[8] != param_1[9]) {
    (**(code **)(*param_1 + 0x38))();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1[0x10] + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  if (param_1[8] != param_1[9]) {
    param_1[8] = param_1[9];
  }
  return;
}



void fn_00347664(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  do {
    iVar1 = 0;
    do {
      iVar3 = iVar1 + *(int *)(param_1 + 0x24) * 8;
      piVar4 = (int *)0x0;
      if (iVar1 == 0) {
        piVar4 = (int *)(param_1 + 0x28);
      }
      else if (iVar1 == 1) {
        piVar4 = (int *)(param_1 + 0x34);
      }
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*piVar4 + iVar2 * 4) =
           *(undefined4 *)(**(int **)(param_1 + 0x18) + (iVar3 + iVar2 * 2) * 4);
    } while (iVar1 < 2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 0;
  do {
    (**(code **)(**(int **)(*(int *)(param_1 + 0x40) + iVar2 * 4) + 0x38))();
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_00347530(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  iVar3 = 0;
  do {
    iVar1 = 0;
    do {
      iVar4 = iVar1 + *(int *)(param_1 + 0x24) * 8;
      piVar5 = (int *)0x0;
      if (iVar1 == 0) {
        piVar5 = (int *)(param_1 + 0x28);
      }
      else if (iVar1 == 1) {
        piVar5 = (int *)(param_1 + 0x34);
      }
      iVar1 = iVar1 + 1;
      *(undefined4 *)(*piVar5 + iVar3 * 4) =
           *(undefined4 *)(**(int **)(param_1 + 0x18) + (iVar4 + iVar3 * 2) * 4);
    } while (iVar1 < 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  iVar3 = 0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xac);
  do {
    uVar2 = fn_00172c98(uVar6,(&DAT_00893664)[iVar3]);
    iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar1 != 0) {
      iVar4 = 0;
      if (iVar3 == 0) {
        iVar4 = param_1 + 0x28;
      }
      else if (iVar3 == 1) {
        iVar4 = param_1 + 0x34;
      }
      piVar5 = (int *)fn_003064c8(iVar1,*(undefined4 *)(param_1 + 4),uVar2,1,
                                   *(undefined4 *)(param_1 + 0x10),iVar4,
                                   (int)*(char *)(param_1 + 0x14),0,0,0);
    }
    (**(code **)(*piVar5 + 0x10))(piVar5);
    *(int **)(*(int *)(param_1 + 0x40) + iVar3 * 4) = piVar5;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24);
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * fn_003473fc(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;
  int in_stack_00000004;
  int in_stack_00000008;
  undefined1 auStack_20 [12];
  
  puVar1 = (undefined4 *)fn_0069e7cc();
  *puVar1 = &DAT_008252e0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  if (0 < in_stack_00000008) {
    iVar2 = fn_00300f74(in_stack_00000004 * 100,in_stack_00000008);
    puVar1[9] = iVar2;
    if (100 < iVar2) {
      iVar2 = 100;
    }
    puVar1[9] = iVar2;
    (**(code **)(_Reset + 0x10))(0,1);
    (**(code **)(*(int *)puVar1[6] + 0x10))((int *)puVar1[6],0);
    VectorSignedToFloat(puVar1[9],(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*(int *)puVar1[5] + 0x5c))();
    uVar3 = puVar1[7];
    fn_0018a618(auStack_20,4,3,&DAT_00347380,in_stack_00000004);
    fn_00190d50(uVar3,auStack_20);
    uVar3 = puVar1[8];
    fn_0018a618(auStack_20,4,3,&DAT_00347380,in_stack_00000008);
    fn_00190d50(uVar3,auStack_20);
  }
  return puVar1;
}


