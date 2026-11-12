#include "0017f8e0_0017fd10a.h"



int fn_0017fb98(uint param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 != 1) {
    if ((param_1 & 1) != 0) {
      iVar1 = 0x20;
    }
    if (param_2 != 2) {
      if ((param_1 & 2) != 0) {
        iVar1 = iVar1 + 0xc;
      }
      if (param_2 != 4) {
        if ((param_1 & 4) != 0) {
          iVar1 = iVar1 + 0xc;
        }
        if (param_2 != 8) {
          iVar1 = 0;
        }
      }
    }
  }
  return iVar1;
}



void fn_0017faa8(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *local_20 [2];
  
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2 != 0) {
    fn_0017f8e0(param_1);
  }
  local_20[0] = (undefined4 *)fn_00145b00(0x60,&DAT_00812c8c);
  if (local_20[0] != (undefined4 *)0x0) {
    local_20[0][1] = 0;
    local_20[0][2] = 0;
    local_20[0][3] = 0;
    local_20[0][4] = 0;
    local_20[0][5] = 0;
    local_20[0][6] = 0;
    local_20[0][8] = 0;
    local_20[0][9] = 0;
    local_20[0][10] = 0;
    local_20[0][0x15] = 1;
    *(undefined1 *)(local_20[0] + 0x14) = 1;
    *(undefined1 *)((int)local_20[0] + 0x51) = 0;
    local_20[0][0x13] = 0;
    local_20[0][0x16] = 0;
    local_20[0][0x17] = 0;
    *local_20[0] = &DAT_00858818;
  }
  *(undefined1 *)(local_20[0] + 0x14) = *(undefined1 *)(param_1 + 0xa2);
  fn_0017f494(local_20[0],*(undefined4 *)(param_1 + 0x6c));
  fn_00184068(param_1 + 0x84,local_20);
  *(undefined4 *)(param_1 + 0x9c) = param_4;
  *(undefined1 *)(param_1 + 0xa3) = param_3;
  return;
}



void fn_0017faa4(int param_1,undefined4 param_2,undefined1 param_3,undefined4 param_4)

{
  undefined4 *apuStack_20 [2];
  
  if (*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84) >> 2 != 0) {
    fn_0017f8e0(param_1);
  }
  apuStack_20[0] = (undefined4 *)fn_00145b00(0x60,&DAT_00812c8c);
  if (apuStack_20[0] != (undefined4 *)0x0) {
    apuStack_20[0][1] = 0;
    apuStack_20[0][2] = 0;
    apuStack_20[0][3] = 0;
    apuStack_20[0][4] = 0;
    apuStack_20[0][5] = 0;
    apuStack_20[0][6] = 0;
    apuStack_20[0][8] = 0;
    apuStack_20[0][9] = 0;
    apuStack_20[0][10] = 0;
    apuStack_20[0][0x15] = 1;
    *(undefined1 *)(apuStack_20[0] + 0x14) = 1;
    *(undefined1 *)((int)apuStack_20[0] + 0x51) = 0;
    apuStack_20[0][0x13] = 0;
    apuStack_20[0][0x16] = 0;
    apuStack_20[0][0x17] = 0;
    *apuStack_20[0] = &DAT_00858818;
  }
  *(undefined1 *)(apuStack_20[0] + 0x14) = *(undefined1 *)(param_1 + 0xa2);
  fn_0017f494(apuStack_20[0],*(undefined4 *)(param_1 + 0x6c));
  fn_00184068(param_1 + 0x84,apuStack_20);
  *(undefined4 *)(param_1 + 0x9c) = param_4;
  *(undefined1 *)(param_1 + 0xa3) = param_3;
  return;
}



void fn_0017f8e0(int param_1)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = *(int **)(param_1 + 0x84);
  while (*(int **)(param_1 + 0x88) != piVar8) {
    (**(code **)(*(int *)*piVar8 + 0x20))();
    if ((int *)*piVar8 != (int *)0x0) {
      (**(code **)(*(int *)*piVar8 + 4))();
    }
    piVar1 = *(int **)(param_1 + 0x88);
    if (*(int **)(param_1 + 0x84) != piVar1) {
      piVar4 = piVar8 + 1;
      if (piVar4 != piVar1) {
        piVar7 = piVar8;
        if (piVar4 < piVar1) {
          uVar6 = (int)piVar1 - (int)piVar4;
          if (0 < (int)uVar6) {
            uVar2 = (uVar6 & 7) >> 2;
            if (uVar2 != 0) {
              *piVar8 = *piVar4;
            }
            uVar5 = (uint)(uVar2 != 0);
            for (; (int)uVar2 < (int)uVar6 >> 2; uVar2 = uVar2 + 2) {
              piVar8[uVar5] = piVar4[uVar5];
              piVar8[uVar5 + 1] = piVar4[uVar5 + 1];
              uVar5 = uVar5 + 2;
            }
          }
        }
        else {
          do {
            piVar3 = piVar4 + 1;
            *piVar7 = *piVar4;
            piVar4 = piVar3;
            piVar7 = piVar7 + 1;
          } while (piVar3 != piVar1);
        }
      }
      *(int *)(param_1 + 0x88) = *(int *)(param_1 + 0x88) + -4;
    }
  }
  piVar8 = *(int **)(param_1 + 0x90);
  while (*(int **)(param_1 + 0x94) != piVar8) {
    (**(code **)(*(int *)*piVar8 + 0x20))();
    if ((int *)*piVar8 != (int *)0x0) {
      (**(code **)(*(int *)*piVar8 + 4))();
    }
    piVar1 = *(int **)(param_1 + 0x94);
    if (*(int **)(param_1 + 0x90) != piVar1) {
      piVar4 = piVar8 + 1;
      if (piVar4 != piVar1) {
        piVar7 = piVar8;
        if (piVar4 < piVar1) {
          uVar6 = (int)piVar1 - (int)piVar4;
          if (0 < (int)uVar6) {
            uVar2 = (uVar6 & 7) >> 2;
            if (uVar2 != 0) {
              *piVar8 = *piVar4;
            }
            uVar5 = (uint)(uVar2 != 0);
            for (; (int)uVar2 < (int)uVar6 >> 2; uVar2 = uVar2 + 2) {
              piVar8[uVar5] = piVar4[uVar5];
              piVar8[uVar5 + 1] = piVar4[uVar5 + 1];
              uVar5 = uVar5 + 2;
            }
          }
        }
        else {
          do {
            piVar3 = piVar4 + 1;
            *piVar7 = *piVar4;
            piVar4 = piVar3;
            piVar7 = piVar7 + 1;
          } while (piVar3 != piVar1);
        }
      }
      *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) + -4;
    }
  }
  return;
}


