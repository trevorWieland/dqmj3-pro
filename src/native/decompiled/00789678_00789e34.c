#include "00789678_00789e34.h"



void fn_00789e34(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  iVar1 = iVar3;
  if (iVar3 != iVar2) {
    do {
      fn_002fedf4(iVar1);
      iVar1 = iVar1 + 0x2c;
    } while (iVar1 != iVar2);
    param_1[1] = param_1[1] + ((iVar2 - iVar3) / 0x2c) * -0x2c;
  }
  return;
}



int * fn_00789b34(int *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  for (piVar3 = (int *)*param_1; piVar3 != piVar4; piVar3 = piVar3 + 10) {
    if ((undefined1 *)*piVar3 != &DAT_008f9d04) {
      piVar2 = (int *)((undefined1 *)*piVar3 + -0xc);
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 0xe,0);
      }
    }
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x28,0);
  return param_1;
}



void fn_0078998c(int *param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint local_30;
  int *piStack_2c;
  uint local_28;
  
  local_28 = param_2;
  piStack_2c = param_1;
  puVar3 = &local_30;
  if (0x6666666 < param_2) {
    local_30 = 0x6666666;
    fn_002ff628(8,&DAT_008c761d);
  }
  if ((uint)((param_1[2] - *param_1) / 0x28) < local_28) {
    uVar8 = (param_1[1] - *param_1) / 0x28;
    local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_30 < uVar8 + 0x20) {
      local_30 = uVar8 + 0x20;
    }
    if (local_30 <= local_28) {
      puVar3 = &local_28;
    }
    uVar8 = *puVar3;
    iVar1 = fn_00100fc6(uVar8 * 0x28,0);
    iVar9 = param_1[1];
    iVar4 = iVar1;
    for (iVar6 = *param_1; iVar6 != iVar9; iVar6 = iVar6 + 0x28) {
      if (iVar4 != 0) {
        fn_001c6ba4(iVar4,iVar6);
      }
      iVar4 = iVar4 + 0x28;
    }
    piVar7 = (int *)param_1[1];
    for (piVar5 = (int *)*param_1; piVar5 != piVar7; piVar5 = piVar5 + 10) {
      if ((undefined1 *)*piVar5 != &DAT_008f9d04) {
        piVar2 = (int *)((undefined1 *)*piVar5 + -0xc);
        iVar6 = *piVar2;
        if ((iVar6 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 0xe,0);
        }
      }
    }
    fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x28,0);
    iVar6 = *param_1;
    *param_1 = iVar1;
    param_1[1] = iVar1 + ((param_1[1] - iVar6) / 0x28) * 0x28;
    param_1[2] = iVar1 + uVar8 * 0x28;
  }
  return;
}



void fn_007898e0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)param_1[1];
  piVar5 = (int *)*param_1;
  if (piVar5 != piVar4) {
    piVar3 = piVar5;
    do {
      if ((undefined1 *)*piVar3 != &DAT_008f9d04) {
        piVar1 = (int *)((undefined1 *)*piVar3 + -0xc);
        iVar2 = *piVar1;
        if ((iVar2 == -1) || ((piVar1 != &DAT_008f9cf8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(*piVar3 + -0xc,*(int *)(*piVar3 + -8) + 0xe,0);
        }
      }
      piVar3 = piVar3 + 10;
    } while (piVar3 != piVar4);
    param_1[1] = param_1[1] + (((int)piVar4 - (int)piVar5) / 0x28) * -0x28;
  }
  return;
}



void fn_00789678(int *param_1,int *param_2,int param_3)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  uint uVar9;
  
  piVar2 = (int *)param_1[1];
  uVar1 = ((int)piVar2 - *param_1) / 0x28;
  if (uVar1 < (uint)((param_1[2] - *param_1) / 0x28)) {
    param_1[1] = (int)(piVar2 + 10);
    piVar7 = piVar2;
    if (piVar2 != (int *)0x0) {
      fn_001c6ba4(piVar2,piVar2 + -10);
    }
    while (param_2 != piVar7 + -10) {
      fn_003007d0(piVar2 + -10,piVar7 + -0x14);
      iVar4 = piVar7[-0x12];
      iVar6 = piVar7[-0x11];
      piVar2[-9] = piVar7[-0x13];
      piVar2[-8] = iVar4;
      piVar2[-7] = iVar6;
      iVar4 = piVar7[-0xf];
      iVar6 = piVar7[-0xe];
      piVar2[-6] = piVar7[-0x10];
      piVar2[-5] = iVar4;
      piVar2[-4] = iVar6;
      iVar4 = piVar7[-0xc];
      iVar6 = piVar7[-0xb];
      piVar2[-3] = piVar7[-0xd];
      piVar2[-2] = iVar4;
      piVar2[-1] = iVar6;
      piVar2 = piVar2 + -10;
      piVar7 = piVar7 + -10;
    }
    fn_003007d0(param_2,param_3);
    iVar4 = *(int *)(param_3 + 8);
    iVar6 = *(int *)(param_3 + 0xc);
    param_2[1] = *(int *)(param_3 + 4);
    param_2[2] = iVar4;
    param_2[3] = iVar6;
    iVar4 = *(int *)(param_3 + 0x14);
    iVar6 = *(int *)(param_3 + 0x18);
    param_2[4] = *(int *)(param_3 + 0x10);
    param_2[5] = iVar4;
    param_2[6] = iVar6;
    iVar4 = *(int *)(param_3 + 0x20);
    iVar6 = *(int *)(param_3 + 0x24);
    param_2[7] = *(int *)(param_3 + 0x1c);
    param_2[8] = iVar4;
    param_2[9] = iVar6;
    return;
  }
  uVar9 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar9 < uVar1 + 0x20) {
    uVar9 = uVar1 + 0x20;
  }
  iVar6 = fn_00100fc6(uVar9 * 0x28,0);
  iVar4 = iVar6;
  for (piVar2 = (int *)*param_1; piVar2 != param_2; piVar2 = piVar2 + 10) {
    if (iVar4 != 0) {
      fn_001c6ba4(iVar4,piVar2);
    }
    iVar4 = iVar4 + 0x28;
  }
  iVar4 = iVar6 + (((int)param_2 - *param_1) / 0x28) * 0x28;
  if (iVar4 != 0) {
    fn_001c6ba4(iVar4,param_3);
  }
  piVar7 = (int *)param_1[1];
  iVar4 = iVar6 + (((int)param_2 - *param_1) / 0x28) * 0x28;
  for (; param_2 != piVar7; param_2 = param_2 + 10) {
    iVar4 = iVar4 + 0x28;
    if (iVar4 != 0) {
      fn_001c6ba4(iVar4,param_2);
    }
  }
  piVar7 = (int *)*param_1;
  piVar8 = (int *)param_1[1];
  iVar4 = (int)piVar8 - (int)piVar7;
  if (piVar7 != piVar8) {
    piVar2 = &DAT_008f9cf8;
  }
  if (piVar7 != piVar8) {
    do {
      if ((int *)*piVar7 != piVar2 + 3) {
        piVar3 = (int *)*piVar7 + -3;
        iVar5 = *piVar3;
        if ((iVar5 == -1) || ((piVar3 != piVar2 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
        }
      }
      piVar7 = piVar7 + 10;
    } while (piVar7 != piVar8);
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x28,0);
  *param_1 = iVar6;
  param_1[1] = iVar6 + (iVar4 / 0x28) * 0x28 + 0x28;
  param_1[2] = iVar6 + uVar9 * 0x28;
  return;
}


