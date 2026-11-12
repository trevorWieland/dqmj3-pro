#include "0037df4c_0037e774ba.h"



void fn_0037e698(int param_1,undefined4 param_2)

{
  fn_00688ea0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),param_2);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0037e3d8) */
/* WARNING: Removing unreachable block (ram,0x0037e360) */
/* WARNING: Removing unreachable block (ram,0x0037e454) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x0037e364 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0037e2ac(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int local_30;
  
  puVar1 = (undefined4 *)fn_002e4414();
  *puVar1 = &DAT_00829264;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 4;
  puVar1[7] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[7];
  puVar1[8] = iVar3 + 0x10;
  puVar1[9] = iVar3 + 0x80;
  piVar4 = puVar1 + 10;
  *piVar4 = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  *piVar4 = (int)puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
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
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0xd] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
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
  local_30 = 3;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x10] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x10];
  puVar1[0x12] = iVar3 + 0x80;
  puVar1[0x11] = iVar3 + 0xc;
  return puVar1;
}



void fn_0037e254(int param_1)

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
  } while (iVar1 < 3);
  return;
}


