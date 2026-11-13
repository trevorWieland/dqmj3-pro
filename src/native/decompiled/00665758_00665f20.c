#include "00665758_00665f20.h"



/* WARNING: Removing unreachable block (ram,0x006660b4) */
/* WARNING: Removing unreachable block (ram,0x006660c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00665f20(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_28;
  int *local_24;
  uint local_20;
  int *local_1c;
  
  fn_0019e864(param_1 + 0x44,&DAT_008c06e8);
  local_28 = 0x1000001;
  local_24 = (int *)0x0;
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  fn_001a51e0(param_1 + 0x20,0,&local_28);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  if (((local_28 & 0x8000000) != 0) &&
     (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  local_28 = 0x1000001;
  local_24 = (int *)0x0;
  local_20 = 0x1000001;
  local_1c = (int *)0x0;
  fn_001a51e0(param_1 + 0x2c,0,&local_28);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  if (((local_28 & 0x8000000) != 0) &&
     (iVar2 = local_24[1], local_24[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_24 + 8))();
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      puVar1 = (uint *)(*(int *)(param_1 + 0x38) + uVar4 * 8);
      if (((*puVar1 & 0x8000000) != 0) &&
         (iVar2 = *(int *)(puVar1[1] + 4) + -1, *(int *)(puVar1[1] + 4) = iVar2, iVar2 == 0)) {
        (**(code **)(*(int *)puVar1[1] + 8))();
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < *(uint *)(param_1 + 0x3c));
  }
  *(undefined4 *)(param_1 + 0x3c) = 0;
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4) + -1;
    *(int *)(iVar2 + 4) = iVar3;
    if (iVar3 == 0) {
      (**(code **)(**(int **)(param_1 + 0x18) + 8))();
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  if (iVar2 != 0) {
    iVar3 = *(int *)(iVar2 + 4) + -1;
    *(int *)(iVar2 + 4) = iVar3;
    if (iVar3 == 0) {
      (**(code **)(**(int **)(param_1 + 0x1c) + 8))();
    }
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return;
}



void fn_00665ee0(undefined4 *param_1)

{
  if ((code *)param_1[0x14] != (code *)0x0) {
    (*(code *)param_1[0x14])(param_1[0x13],0);
  }
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x5c);
  return;
}



void fn_00665da8(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  (**(code **)(**(int **)(param_1 + 0x18) + 0xc))(*(int **)(param_1 + 0x18),param_2);
  piVar1 = *(int **)(param_1 + 0x1c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))(piVar1,param_2);
  }
  fn_0024d77c(param_1 + 0x44,param_2);
  uVar2 = 0;
  if (*(int *)(param_1 + 0x24) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x20) + uVar2 * 0x10,param_2);
      fn_0024d77c(*(int *)(param_1 + 0x20) + uVar2 * 0x10 + 8,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x24));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x30) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x2c) + uVar2 * 0x10,param_2);
      fn_0024d77c(*(int *)(param_1 + 0x2c) + uVar2 * 0x10 + 8,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x30));
  }
  uVar2 = 0;
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x38) + uVar2 * 8,param_2);
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x3c));
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



undefined4 fn_00665ccc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint local_18;
  int *local_14;
  
  local_18 = 0x1000001;
  local_14 = (int *)0x0;
  iVar1 = fn_001a1dc8(*(undefined4 *)(param_1 + 0x18),param_2,&local_18);
  if (iVar1 == 0) {
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
    return 0;
  }
  if (((uint)local_14 & 0x2000000) == 0) {
    iVar1 = *(int *)(param_1 + 0x2c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x20);
  }
  fn_0019e864(param_3,iVar1 + ((uint)local_14 & 0xffffff) * 0x10 + 8);
  if (((local_18 & 0x8000000) != 0) &&
     (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
    (**(code **)(*local_14 + 8))();
  }
  return 1;
}



void fn_00665bd4(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0x24);
  return;
}



void fn_00665b00(int param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 0x1c);
  if ((iVar7 != 0) && (iVar3 = 0, 0 < iVar7)) {
    do {
      puVar1 = (uint *)(*(int *)(param_2 + 0x18) + iVar3 * 8);
      uVar5 = *puVar1;
      piVar4 = (int *)puVar1[1];
      if ((uVar5 & 0x8000000) != 0) {
        piVar4[1] = piVar4[1] + 1;
      }
      if (*(uint *)(param_1 + 0x20) <= *(uint *)(param_1 + 0x1c)) {
        iVar6 = *(uint *)(param_1 + 0x1c) << 1;
        if (iVar6 == 0) {
          iVar6 = 4;
        }
        uVar2 = fn_0018388c(*(undefined4 *)(param_1 + 0x18),*(uint *)(param_1 + 0x20) << 3,
                             iVar6 << 3);
        *(undefined4 *)(param_1 + 0x18) = uVar2;
        *(int *)(param_1 + 0x20) = iVar6;
      }
      puVar1 = (uint *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x1c) * 8);
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + 1;
      if (puVar1 != (uint *)0x0) {
        puVar1[1] = (uint)piVar4;
        *puVar1 = uVar5;
        if ((uVar5 & 0x8000000) != 0) {
          piVar4[1] = piVar4[1] + 1;
        }
      }
      if (((uVar5 & 0x8000000) != 0) && (iVar6 = piVar4[1], piVar4[1] = iVar6 + -1, iVar6 + -1 == 0)
         ) {
        (**(code **)(*piVar4 + 8))(piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar7);
  }
  return;
}



undefined4 * fn_00665a44(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint local_20;
  int *local_1c;
  
  puVar1 = (undefined4 *)fn_002fece8(0x24);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0;
    *puVar1 = &DAT_00850d74;
    puVar1[2] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    local_20 = 0x1000001;
    local_1c = (int *)0x0;
    fn_0019d320(puVar1 + 6,param_2,&local_20);
    if (((local_20 & 0x8000000) != 0) &&
       (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_1c + 8))();
    }
    puVar1[5] = param_1;
    puVar1[3] = 0;
    puVar1[4] = 0;
    fn_0019e8c4(param_1 + 0x44,puVar1);
  }
  return puVar1;
}



void fn_006659d4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if ((*(uint *)(param_1 + 4) & 0x80000000) != 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + 0x1c);
  iVar1 = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80000000;
  if (0 < iVar2) {
    do {
      fn_0024d77c(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  fn_0024d73c(*(int *)(param_1 + 0x14) + 0x44,param_1);
  fn_0019e8c4(param_2,param_1);
  return;
}



undefined4 * fn_00665974(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x30,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_00665964(undefined4 *param_1)

{
  fn_00144298(*param_1);
  return;
}



void fn_00665758(undefined4 *param_1)

{
  fn_00664c70(*param_1);
  return;
}


