#include "00469dc8_00469dc8.h"



int * fn_00469dc8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  undefined *local_38;
  undefined1 local_34;
  int *local_30;
  undefined4 local_2c;
  uint local_28;
  ushort local_24 [4];
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x1c) & 4) == 0)) {
    iVar1 = fn_0015ece0(0x20);
    local_30 = (int *)0x0;
    if (iVar1 != 0) {
      local_30 = (int *)fn_004b54dc();
    }
  }
  else {
    iVar1 = fn_00455040(0x20,0);
    if ((iVar1 == 0) ||
       (local_30 = (int *)fn_0045b64c(iVar1,*(int *)(param_1 + 0x10) + 6), local_30 == (int *)0x0))
    {
      return (int *)0x0;
    }
    if (local_30[3] == 0) {
      (**(code **)(*local_30 + 4))();
      return (int *)0x0;
    }
  }
  piVar2 = local_30 + 1;
  local_38 = &DAT_00852740;
  do {
    bVar5 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar5);
  *piVar2 = *piVar2 + 1;
  local_34 = 0;
  puVar4 = (uint *)(local_30 + 1);
  local_2c = 0;
  do {
    uVar3 = *puVar4 - 1;
    bVar5 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar5);
  *puVar4 = uVar3;
  bVar5 = uVar3 == 0;
  if (bVar5) {
    uVar3 = (uint)*(byte *)(local_30 + 2);
  }
  if (bVar5 && uVar3 == 0) {
    *(undefined1 *)(local_30 + 2) = 1;
    (**(code **)(*local_30 + 4))();
  }
  uVar3 = *(uint *)(param_3 + 8);
  local_28 = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
             uVar3 >> 0x18;
  fn_0015ef58(local_30,&local_28,4,0xffffffff);
  local_24[0] = *(ushort *)(param_3 + 6) << 8 | *(ushort *)(param_3 + 6) >> 8;
  fn_0015ef58(local_30,local_24,2,0xffffffff);
  fn_0015ef58(local_30,*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0xc),
               *(undefined4 *)(param_1 + 0x10),0xffffffff);
  if ((param_1 == 0) || ((*(byte *)(param_1 + 0x1c) & 4) == 0)) {
    iVar1 = fn_0015ece0(0x150);
    piVar2 = (int *)0x0;
    if (iVar1 != 0) {
      piVar2 = (int *)fn_004bc1a4(iVar1,0,param_2,0,local_30,0);
    }
LAB_00469fd8:
    *(undefined1 *)(piVar2 + 9) = 0;
    fn_00454d0c(&local_38);
    return piVar2;
  }
  iVar1 = fn_00455040(0x150,0);
  if ((iVar1 != 0) &&
     (piVar2 = (int *)fn_00491934(iVar1,0,param_2,0,local_30,0), piVar2 != (int *)0x0)) {
    if (((*(ushort *)(piVar2 + 0xf) & 0x40) == 0) || (piVar2[0x46] != 0)) goto LAB_00469fd8;
    (**(code **)(*piVar2 + 4))();
  }
  fn_00454d0c(&local_38);
  return (int *)0x0;
}


