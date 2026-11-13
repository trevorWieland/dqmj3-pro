#include "00488a7c_00488d14.h"



int fn_00488d14(int param_1)

{
  int iVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined *puVar4;
  uint uVar5;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint uVar6;
  
  while (*(int *)(param_1 + 0x3c) != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x38) * 4);
    if (iVar1 != 0) {
      pcVar3 = *(code **)(iVar1 + -8);
      if (pcVar3 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar3)();
      }
    }
    fn_00169f1c(*(int *)(param_1 + 0x38) + 1,*(undefined4 *)(param_1 + 0x40));
    *(undefined4 *)(param_1 + 0x38) = extraout_r1;
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + -1;
  }
  *(undefined ***)(param_1 + 0x4c) = &PTR_LAB_008533fc;
  puVar4 = &DAT_0085319c;
  *(undefined **)(param_1 + 0x50) = &DAT_0085319c;
  uVar2 = *(uint *)(param_1 + 0x28);
  uVar6 = *(uint *)(param_1 + 0x2c);
  if (uVar2 < uVar6) {
    puVar4 = (undefined *)(uVar6 - uVar2);
  }
  if (uVar2 < uVar6) {
    puVar4 = (undefined *)((int)puVar4 << 0x1d);
  }
  if (uVar2 < uVar6) {
    uVar5 = (uint)puVar4 >> 0x1f;
  }
  else {
    uVar5 = 0;
  }
  uVar5 = uVar5 + 1;
  if ((int)uVar5 < ((int)(uVar6 - uVar2) >> 2) + 1) {
    do {
      uVar5 = uVar5 + 2;
    } while ((int)uVar5 < ((int)(uVar6 - uVar2) >> 2) + 1);
  }
  if (uVar2 != 0) {
    if (*(code **)(uVar2 - 8) == (code *)0x0) {
      fn_0030233c();
      uVar5 = extraout_r1_01;
    }
    else {
      (**(code **)(uVar2 - 8))();
      uVar5 = extraout_r1_00;
    }
  }
  uVar2 = *(uint *)(param_1 + 8);
  uVar6 = *(uint *)(param_1 + 0xc);
  if (uVar2 < uVar6) {
    uVar5 = uVar6 - uVar2;
  }
  if (uVar2 < uVar6) {
    uVar5 = uVar5 << 0x1d;
  }
  if (uVar2 < uVar6) {
    uVar5 = uVar5 >> 0x1f;
  }
  else {
    uVar5 = 0;
  }
  iVar1 = uVar5 + 1;
  if (iVar1 < ((int)(uVar6 - uVar2) >> 2) + 1) {
    do {
      iVar1 = iVar1 + 2;
    } while (iVar1 < ((int)(uVar6 - uVar2) >> 2) + 1);
  }
  if (uVar2 != 0) {
    if (*(code **)(uVar2 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar2 - 8))();
    }
  }
  return param_1;
}



undefined4 * fn_00488b38(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_r1;
  int *piVar6;
  uint uVar7;
  uint local_28 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_28[0] = param_3;
  puVar3 = local_28;
  if (param_3 < 0x20) {
    puVar3 = local_28 + 1;
  }
  local_28[1] = 0x20;
  uVar7 = *puVar3;
  puVar1 = (undefined4 *)fn_0015ece0(uVar7 << 2);
  *(undefined4 **)(param_1 + 8) = puVar1;
  for (uVar5 = local_28[0]; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  iVar2 = *(int *)(param_1 + 8);
  *(uint *)(param_1 + 0x10) = iVar2 + uVar7 * 4;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0xc) = iVar2 + local_28[0] * 4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  piVar6 = (int *)(param_1 + 0x28);
  *piVar6 = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar3 = local_28 + 1;
  if (0x1f < param_3) {
    puVar3 = local_28;
  }
  local_28[0] = param_3;
  local_28[1] = 0x20;
  uVar7 = *puVar3;
  puVar1 = (undefined4 *)fn_0015ece0(uVar7 << 2);
  *piVar6 = (int)puVar1;
  for (uVar5 = local_28[0]; uVar5 != 0; uVar5 = uVar5 - 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  *(uint *)(param_1 + 0x30) = *piVar6 + uVar7 * 4;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x2c) = *piVar6 + local_28[0] * 4;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(uint *)(param_1 + 0x40) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0x554;
  puVar1 = (undefined4 *)fn_004745d8(param_1 + 0x4c,0x100000);
  iVar2 = 0;
  *puVar1 = &PTR_LAB_00854110;
  puVar1[10] = 0;
  puVar1[0xb] = param_2;
  if (0 < (int)param_3) {
    do {
      iVar4 = fn_0015ece0(0x24);
      if (iVar4 != 0) {
        *(undefined **)(iVar4 + 4) = &DAT_008528bc;
        *(undefined4 *)(iVar4 + 8) = 0;
        *(undefined4 *)(iVar4 + 0xc) = 0;
        *(undefined1 *)(iVar4 + 9) = 2;
      }
      *(int *)(puVar1[-9] + puVar1[-6] * 4) = iVar4;
      fn_00169f1c(puVar1[-6] + 1,puVar1[-3]);
      puVar1[-6] = extraout_r1;
      iVar2 = iVar2 + 1;
      puVar1[-4] = puVar1[-4] + 1;
    } while (iVar2 < (int)param_3);
  }
  return puVar1 + -0x13;
}



void fn_00488a7c(int param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  code *pcVar3;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int *piVar4;
  int iVar5;
  
  if (param_2 == (int *)0x0) {
    return;
  }
  piVar1 = (int *)*param_2;
  if (piVar1 != (int *)0x0) {
    piVar4 = *(int **)(param_1 + 0x78);
    if (piVar4 == (int *)0x0) {
      pcVar3 = *(code **)(*piVar1 + 4);
      piVar2 = piVar1;
    }
    else {
      piVar2 = piVar4 + 1;
      (**(code **)(piVar4[1] + 8))();
      iVar5 = *piVar4;
      *(int **)(*(int *)(iVar5 + 4) + *(int *)(iVar5 + 0x10) * 4) = piVar1;
      fn_00169f1c(*(int *)(iVar5 + 0x10) + 1,*(undefined4 *)(iVar5 + 0x1c));
      *(undefined4 *)(iVar5 + 0x10) = extraout_r1;
      *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + 1;
      pcVar3 = *(code **)(*piVar2 + 0xc);
    }
    (*pcVar3)(piVar2);
  }
  *(int **)(*(int *)(param_1 + 0x28) + *(int *)(param_1 + 0x34) * 4) = param_2;
  fn_00169f1c(*(int *)(param_1 + 0x34) + 1,*(undefined4 *)(param_1 + 0x40));
  *(undefined4 *)(param_1 + 0x34) = extraout_r1_00;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  return;
}


