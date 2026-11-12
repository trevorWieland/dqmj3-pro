#include "00656cac_00657410a.h"



void fn_00657064(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) | 2;
  iVar2 = *(int *)(param_1 + 0x48);
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x40) - iVar2);
  while (puVar1 != (undefined4 *)((param_1 + 0x3c) - *(int *)(param_1 + 0x48))) {
    if ((puVar1[1] == 0) ||
       ((param_2 != (undefined4 *)0x0 || param_3 != (undefined4 *)0x0 &&
        ((puVar1 < param_2 || (param_3 <= puVar1)))))) {
      puVar1 = (undefined4 *)(*(int *)((int)puVar1 + iVar2 + 4) - iVar2);
    }
    else {
      (**(code **)*puVar1)();
      iVar2 = *(int *)(param_1 + 0x48);
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0x40) - iVar2);
    }
  }
  *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) & 0xfffffffd;
  return;
}



int * fn_00656f68(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  fn_00656bb8();
  iVar1 = (**(code **)(*param_1 + 0x40))(param_1,param_2);
  if (iVar1 == 0) {
    fn_00656ca4(&DAT_008eef58);
    return (int *)0x0;
  }
  piVar3 = (int *)0x0;
  if ((param_1[0x1b] & 1U) != 0) {
    fn_00656bb8();
    piVar3 = param_1 + 0x14;
  }
  iVar1 = param_1[10];
  iVar4 = param_1[0xc];
  while( true ) {
    piVar2 = (int *)(iVar1 - iVar4);
    if (piVar2 == (int *)((int)param_1 + (0x24 - param_1[0xc]))) {
      if (piVar3 != (int *)0x0) {
        fn_00656ca4(piVar3);
      }
      fn_00656ca4(&DAT_008eef58);
      return param_1;
    }
    iVar1 = (**(code **)(*piVar2 + 0x40))(piVar2,param_2);
    if (iVar1 != 0) break;
    iVar1 = *(int *)((int)piVar2 + iVar4 + 4);
  }
  piVar2 = (int *)fn_00656f68(piVar2,param_2);
  if (piVar3 != (int *)0x0) {
    fn_00656ca4(piVar3);
  }
  fn_00656ca4(&DAT_008eef58);
  return piVar2;
}



void fn_00656f08(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar1 = param_1 + 0x50;
  }
  fn_00658e3c(*(int *)(param_1 + 0x48) + param_2);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + -1;
  if (iVar1 == 0) {
    return;
  }
  fn_00656ca4(iVar1);
  return;
}



void fn_00656ea0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar1 = param_1 + 0x50;
  }
  fn_00658e20(param_1 + 0x3c,*(int *)(param_1 + 0x48) + param_2);
  *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  if (iVar1 == 0) {
    return;
  }
  fn_00656ca4(iVar1);
  return;
}



void fn_00656df8(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_004ed2e8();
  if ((piVar1 == (int *)0x0) && (piVar1 = (int *)fn_006f5418(DAT_008c06d0), piVar1 == (int *)0x0))
  {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x18))(piVar1,param_1,4);
  return;
}



undefined4 * fn_00656cec(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined *local_20;
  undefined1 *local_1c;
  
  puVar1 = param_1 + 1;
  *param_1 = &DAT_00859778;
  local_1c = &DAT_00656dd0;
  local_20 = &DAT_00859700;
  param_1[2] = param_1 + 4;
  param_1[3] = 0x80;
  *puVar1 = &DAT_00859898;
  *(undefined1 *)(param_1[2] + 0x7f) = 0;
  *puVar1 = &DAT_00859884;
  iVar3 = param_1[2];
  fn_007852b8(&local_20);
  iVar2 = 0;
  do {
    if (local_1c[iVar2] == '\0') {
      if (iVar2 < 0x40001) goto LAB_00656d88;
      break;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x40001);
  iVar2 = 0;
LAB_00656d88:
  if ((int)param_1[3] <= iVar2) {
    iVar2 = param_1[3] + -1;
  }
  (**(code **)(local_20 + 8))(&local_20);
  fn_001694e4(iVar3,local_1c,iVar2);
  *(undefined1 *)(iVar3 + iVar2) = 0;
  *puVar1 = &DAT_0085974c;
  return param_1;
}



undefined4 * fn_00656cac(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00659048();
  *puVar1 = &DAT_00859728;
  puVar1[4] = 0;
  fn_0013c500();
  return puVar1;
}


