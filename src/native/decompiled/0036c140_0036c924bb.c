#include "0036c140_0036c924bb.h"



void fn_0036c924(int param_1,undefined2 param_2,undefined2 param_3)

{
  *(undefined2 *)(param_1 + 0x544) = param_2;
  *(undefined2 *)(param_1 + 0x546) = param_3;
  return;
}



int fn_0036c82c(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  *param_1 = &PTR_LAB_00827970;
  iVar1 = fn_001588d4(param_1 + 10);
  iVar1 = fn_001588d4(iVar1 + -4);
  piVar6 = *(int **)(iVar1 + -8);
  piVar3 = (int *)(iVar1 + -0x18);
  if (piVar6 != (int *)0x0) {
    piVar5 = (int *)*piVar6;
    while (piVar4 = piVar5, piVar4 != piVar6) {
      piVar5 = *(int **)(iVar1 + -8);
      if (piVar4 != *(int **)(iVar1 + -8)) {
        piVar5 = (int *)*piVar4;
        *(int **)piVar4[1] = piVar5;
        *(int *)(*piVar4 + 4) = piVar4[1];
        *(int *)(iVar1 + -4) = *(int *)(iVar1 + -4) + -1;
        fn_001588d4(piVar4 + 2);
        *piVar4 = *(int *)(iVar1 + -0x14);
        *(int **)(iVar1 + -0x14) = piVar4;
      }
    }
    puVar2 = *(undefined4 **)(iVar1 + -8);
    *puVar2 = *(undefined4 *)(iVar1 + -0x14);
    *(undefined4 **)(iVar1 + -0x14) = puVar2;
    piVar6 = (int *)*piVar3;
    while (piVar6 != (int *)0x0) {
      *piVar3 = *piVar6;
      fn_001008c4(piVar6[2],piVar6[1],0);
      fn_001008c4(piVar6,1,0);
      piVar6 = (int *)*piVar3;
    }
    *(undefined4 *)(iVar1 + -0x14) = 0;
    *(undefined4 *)(iVar1 + -0x10) = 0;
    *(undefined4 *)(iVar1 + -0xc) = 0;
  }
  return iVar1 + -0x24;
}



void fn_0036c678(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *local_28;
  undefined1 auStack_24 [8];
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &PTR_LAB_00827970;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 1;
  *(undefined1 *)((int)puVar1 + 10) = 1;
  local_28 = &DAT_008f9cf4;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  piVar6 = puVar1 + 3;
  puVar1[8] = 0;
  fn_00785420(auStack_24,&local_28);
  puVar2 = (undefined4 *)puVar1[4];
  if (puVar2 == (undefined4 *)0x0) {
    if (puVar1[5] == puVar1[6]) {
      if (*piVar6 == 0) {
        uVar7 = 0x20;
      }
      else {
        uVar3 = *(uint *)(*piVar6 + 4);
        uVar7 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (uVar7 < uVar3 + 0x20) {
          uVar7 = uVar3 + 0x20;
        }
      }
      piVar4 = (int *)fn_00100fc6(0xc,0);
      iVar5 = fn_00100fc6(uVar7 * 0xc,0);
      piVar4[2] = iVar5;
      *piVar4 = *piVar6;
      piVar4[1] = uVar7;
      *piVar6 = (int)piVar4;
      iVar5 = piVar4[2];
      puVar1[5] = iVar5;
      puVar1[6] = iVar5 + uVar7 * 0xc;
    }
    puVar2 = (undefined4 *)puVar1[5];
    puVar1[5] = puVar2 + 3;
  }
  else {
    puVar1[4] = *puVar2;
  }
  puVar1[7] = puVar2;
  *puVar2 = puVar2;
  *(undefined4 *)(puVar1[7] + 4) = puVar1[7];
  fn_001588d4(auStack_24);
  fn_001588d4(&local_28);
  puVar1[9] = &DAT_008f9cf4;
  puVar1[10] = &DAT_008f9cf4;
  puVar1[0xb] = 3;
  *(undefined1 *)(puVar1 + 0xc) = 1;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  puVar1[0xe] = 0x1000950;
  puVar1[0xd] = 0;
  puVar1[0x11] = 0x100094c;
  puVar1[0x10] = 0x100094b;
  puVar1[0xf] = 0x1000950;
  *(undefined1 *)(puVar1 + 0x12) = 0;
  *(undefined1 *)((int)puVar1 + 0x49) = 1;
  puVar1[0x13] = 0;
  *(undefined1 *)(puVar1 + 0x14) = 0;
  *(undefined1 *)((int)puVar1 + 0x51) = 0;
  puVar1[0x15] = 0;
  puVar1[0x16] = 0;
  *(undefined1 *)(puVar1 + 0x17) = 0;
  *(undefined1 *)((int)puVar1 + 0x5d) = 1;
  *(undefined1 *)((int)puVar1 + 0x5e) = 1;
  *(undefined1 *)((int)puVar1 + 0x5f) = 0;
  *(undefined1 *)(puVar1 + 0x18) = 0;
  puVar1[0x19] = 0x14f000f;
  *(undefined1 *)(puVar1 + 0x1a) = 1;
  return;
}


