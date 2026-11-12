#include "00347cfc_00348450.h"



void fn_00348450(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(param_1 + 100) + iVar1 * 4);
    (**(code **)(*piVar2 + 0x18))(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 100) + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 5);
  return;
}



void fn_0034842c(int param_1)

{
  fn_0036a948();
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  return;
}



void fn_003483c0(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0069e748();
  if (param_1[8] != param_1[9]) {
    (**(code **)(*param_1 + 0x38))();
  }
  iVar2 = 0;
  do {
    piVar1 = *(int **)(param_1[0x19] + iVar2 * 4);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  if (param_1[8] != param_1[9]) {
    param_1[8] = param_1[9];
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_003482d0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar2 = 0;
LAB_003482dc:
  iVar3 = 0;
LAB_003482e4:
  do {
    uVar4 = 0;
    iVar1 = iVar3 + *(int *)(param_1 + 0x24) * 0x14 + iVar2 * 5;
    if (iVar1 < 0x204) {
      uVar4 = *(undefined4 *)(**(int **)(param_1 + 0x18) + iVar1 * 4);
    }
    switch(iVar3) {
    case 0:
      iVar1 = *(int *)(param_1 + 0x28);
      iVar3 = 1;
      break;
    case 1:
      iVar1 = *(int *)(param_1 + 0x34);
      iVar3 = 2;
      break;
    case 2:
      iVar1 = *(int *)(param_1 + 0x40);
      iVar3 = 3;
      break;
    case 3:
      iVar1 = *(int *)(param_1 + 0x4c);
      iVar3 = 4;
      break;
    case 4:
      *(undefined4 *)(*(int *)(param_1 + 0x58) + iVar2 * 4) = uVar4;
      goto LAB_00348384;
    default:
      goto LAB_00348370;
    }
    *(undefined4 *)(iVar1 + iVar2 * 4) = uVar4;
  } while( true );
LAB_00348370:
  iVar3 = iVar3 + 1;
  *(undefined4 *)(_Reset + iVar2 * 4) = uVar4;
  if (4 < iVar3) goto LAB_00348384;
  goto LAB_003482e4;
LAB_00348384:
  iVar2 = iVar2 + 1;
  if (3 < iVar2) {
    iVar2 = 0;
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 100) + iVar2 * 4) + 0x38))();
      iVar2 = iVar2 + 1;
    } while (iVar2 < 5);
    return;
  }
  goto LAB_003482dc;
}



void fn_00348100(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 auStack_40 [36];
  
  iVar6 = 0;
  do {
    iVar4 = 0;
    do {
      uVar5 = 0;
      iVar2 = iVar4 + *(int *)(param_1 + 0x24) * 0x14 + iVar6 * 5;
      if (iVar2 < 0x204) {
        uVar5 = *(undefined4 *)(**(int **)(param_1 + 0x18) + iVar2 * 4);
      }
      piVar3 = (int *)0x0;
      switch(iVar4) {
      case 0:
        piVar3 = (int *)(param_1 + 0x28);
        break;
      case 1:
        piVar3 = (int *)(param_1 + 0x34);
        break;
      case 2:
        piVar3 = (int *)(param_1 + 0x40);
        break;
      case 3:
        piVar3 = (int *)(param_1 + 0x4c);
        break;
      case 4:
        piVar3 = (int *)(param_1 + 0x58);
      }
      iVar4 = iVar4 + 1;
      *(undefined4 *)(*piVar3 + iVar6 * 4) = uVar5;
    } while (iVar4 < 5);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  iVar6 = 0;
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 8) + 0xac);
  do {
    fn_0017d96c(auStack_40,0x20,0x1f,(char *)&DAT_003482bc,iVar6);
    uVar1 = fn_00172c98(uVar5,auStack_40);
    iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar4 != 0) {
      iVar2 = 0;
      switch(iVar6) {
      case 0:
        iVar2 = param_1 + 0x28;
        break;
      case 1:
        iVar2 = param_1 + 0x34;
        break;
      case 2:
        iVar2 = param_1 + 0x40;
        break;
      case 3:
        iVar2 = param_1 + 0x4c;
        break;
      case 4:
        iVar2 = param_1 + 0x58;
      }
      piVar3 = (int *)fn_003064c8(iVar4,*(undefined4 *)(param_1 + 4),uVar1,1,
                                   *(undefined4 *)(param_1 + 0x10),iVar2,
                                   (int)*(char *)(param_1 + 0x14),(int)*(char *)(param_1 + 0x70),1,0
                                  );
    }
    (**(code **)(*piVar3 + 0x10))(piVar3);
    *(int **)(*(int *)(param_1 + 100) + iVar6 * 4) = piVar3;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 5);
  if (*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x24)) {
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x24);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00347ee0) */
/* WARNING: Removing unreachable block (ram,0x00347dec) */
/* WARNING: Removing unreachable block (ram,0x00347e68) */
/* WARNING: Removing unreachable block (ram,0x00347f5c) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd4 : 0x00347df0 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_00347d78(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined1 in_stack_00000014;
  int local_30;
  
  puVar1 = (undefined4 *)fn_002e4414();
  *puVar1 = &DAT_00825354;
  puVar1[7] = in_stack_00000008;
  puVar1[8] = in_stack_0000000c;
  puVar1[9] = in_stack_0000000c;
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
  local_30 = 4;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x10] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x10];
  puVar1[0x11] = iVar3 + 0x10;
  puVar1[0x12] = iVar3 + 0x80;
  puVar1[0x13] = 0;
  puVar1[0x14] = 0;
  puVar1[0x15] = 0;
  local_30 = 3;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  puVar1[0x13] = puVar2;
  for (; local_30 != 0; local_30 = local_30 + -1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = puVar1[0x13];
  puVar1[0x15] = iVar3 + 0x80;
  puVar1[0x14] = iVar3 + 0xc;
  *(undefined1 *)(puVar1 + 0x16) = in_stack_00000014;
  puVar1[0x17] = 0x1f;
  return puVar1;
}



void fn_00347d20(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  do {
    piVar2 = *(int **)(*(int *)(param_1 + 0x4c) + iVar1 * 4);
    (**(code **)(*piVar2 + 0x18))(piVar2);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(piVar2);
    }
    *(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar1 * 4) = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}



void fn_00347cfc(int param_1)

{
  fn_0036a948();
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  return;
}


