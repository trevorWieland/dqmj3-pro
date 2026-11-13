#include "005ef7ac_005eff40aa.h"



undefined4 *
fn_005efae4(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined1 *)(param_1 + 0x12) = 0;
  *(char *)((int)param_1 + 0x49) = (char)param_1 + ',';
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  piVar1 = (int *)fn_00100fc6(0xc,0,param_3,param_4,param_4);
  iVar2 = fn_00100fc6(0x300,0);
  piVar1[2] = iVar2;
  *piVar1 = param_1[0xc];
  piVar1[1] = 0x20;
  param_1[0xc] = piVar1;
  puVar3 = (undefined1 *)piVar1[2];
  param_1[0xe] = puVar3;
  param_1[0xf] = puVar3 + 0x300;
  param_1[0xe] = puVar3 + 0x18;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0x10] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0x10] + 8) = param_1[0x10];
  *(undefined4 *)(param_1[0x10] + 0xc) = param_1[0x10];
  param_1[0x13] = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return param_1;
}



void fn_005ef7ac(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = 0;
  iVar8 = (int)(param_1[6] - param_1[5]) >> 0x1f;
  if ((int)(param_1[6] - param_1[5]) / 0xc + iVar8 != iVar8) {
    do {
      puVar6 = (undefined4 *)(param_1[5] + uVar5 * 0xc);
      fn_002feca8(puVar6[2]);
      puVar6[2] = 0;
      fn_002feef8(puVar6[1]);
      puVar6[1] = 0;
      *puVar6 = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[6] - param_1[5]) / 0xc));
  }
  uVar4 = param_1[5];
  param_1[5] = 0;
  uVar3 = param_1[6];
  param_1[6] = 0;
  iVar8 = param_1[7];
  param_1[7] = 0;
  uVar5 = uVar4;
  if (uVar3 < uVar4) {
    do {
      uVar5 = uVar5 + 0xc;
    } while (uVar5 != uVar3);
  }
  fn_001008c4(uVar4,(int)(iVar8 - uVar4) / 0xc,0);
  iVar7 = param_1[0x10];
  iVar8 = *(int *)(iVar7 + 8);
  while (iVar8 != iVar7) {
    if (*(int **)(iVar8 + 0x14) != (int *)0x0) {
      (**(code **)(**(int **)(iVar8 + 0x14) + 4))();
    }
    iVar1 = *(int *)(iVar8 + 0xc);
    if (*(int *)(iVar8 + 0xc) == 0) {
      iVar1 = *(int *)(iVar8 + 4);
      while (iVar2 = iVar1, iVar8 == *(int *)(iVar2 + 0xc)) {
        iVar8 = iVar2;
        iVar1 = *(int *)(iVar2 + 4);
      }
      if (*(int *)(iVar8 + 0xc) != iVar2) {
        iVar8 = iVar2;
      }
    }
    else {
      do {
        iVar8 = iVar1;
        iVar1 = *(int *)(iVar8 + 8);
      } while (*(int *)(iVar8 + 8) != 0);
    }
  }
  uVar5 = 0;
  iVar8 = (int)(param_1[9] - param_1[8]) >> 0x1f;
  if ((int)(param_1[9] - param_1[8]) / 0xc + iVar8 != iVar8) {
    do {
      puVar6 = (undefined4 *)(param_1[8] + uVar5 * 0xc);
      fn_002feca8(puVar6[2]);
      puVar6[2] = 0;
      fn_002feef8(puVar6[1]);
      puVar6[1] = 0;
      *puVar6 = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[9] - param_1[8]) / 0xc));
  }
  uVar4 = param_1[8];
  param_1[8] = 0;
  uVar3 = param_1[9];
  param_1[9] = 0;
  iVar8 = param_1[10];
  param_1[10] = 0;
  uVar5 = uVar4;
  if (uVar3 < uVar4) {
    do {
      uVar5 = uVar5 + 0xc;
    } while (uVar5 != uVar3);
  }
  fn_001008c4(uVar4,(int)(iVar8 - uVar4) / 0xc,0);
  if ((int *)param_1[0x13] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x13] + 4))();
    param_1[0x13] = 0;
  }
  uVar5 = 0;
  iVar8 = (int)(param_1[3] - param_1[2]) >> 0x1f;
  if ((int)(param_1[3] - param_1[2]) / 0xc + iVar8 != iVar8) {
    do {
      puVar6 = (undefined4 *)(param_1[2] + uVar5 * 0xc);
      fn_002feca8(puVar6[2]);
      puVar6[2] = 0;
      fn_002feef8(puVar6[1]);
      puVar6[1] = 0;
      *puVar6 = 0;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[3] - param_1[2]) / 0xc));
  }
  uVar4 = param_1[2];
  param_1[2] = 0;
  uVar3 = param_1[3];
  param_1[3] = 0;
  iVar8 = param_1[4];
  param_1[4] = 0;
  uVar5 = uVar4;
  if (uVar3 < uVar4) {
    do {
      uVar5 = uVar5 + 0xc;
    } while (uVar5 != uVar3);
  }
  fn_001008c4(uVar4,(int)(iVar8 - uVar4) / 0xc,0);
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
    param_1[0xb] = 0;
  }
  puVar6 = (undefined4 *)*param_1;
  if ((puVar6 != (undefined4 *)0x0) && (*(char *)(param_1 + 1) != '\0')) {
    (**(code **)*puVar6)(puVar6);
    (**(code **)(*(int *)puVar6[1] + 0xc))((int *)puVar6[1],puVar6);
  }
  *param_1 = 0;
  return;
}


