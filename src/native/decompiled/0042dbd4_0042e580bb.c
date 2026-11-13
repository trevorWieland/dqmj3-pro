#include "0042dbd4_0042e580bb.h"



void fn_0042e580(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0042e7dc(iVar1,param_1);
  return;
}



void fn_0042e414(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 unaff_r4;
  uint uVar6;
  undefined4 in_lr;
  uint local_20;
  
  uVar6 = 0;
  local_20 = param_4;
  if (*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2 != 0) {
    do {
      uVar3 = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2;
      if (uVar3 <= uVar6) {
        fn_002ff628(9,&DAT_008c7662,&DAT_008c7662,uVar6);
        local_20 = uVar3;
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x1c) + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        if ((undefined4 *)piVar1[1] != &DAT_008f9cf4) {
          piVar2 = (undefined4 *)piVar1[1] + -3;
          iVar5 = *piVar2;
          if ((iVar5 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(piVar1[1] + -0xc,*(int *)(piVar1[1] + -8) + 8,0);
          }
        }
        if ((undefined4 *)*piVar1 != &DAT_008f9cf4) {
          piVar2 = (undefined4 *)*piVar1 + -3;
          iVar5 = *piVar2;
          if ((iVar5 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(*piVar1 + -0xc,*(int *)(*piVar1 + -8) + 8,0);
          }
        }
        fn_002feef8(piVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 2));
  }
  uVar3 = *(uint *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = 0;
  uVar4 = *(uint *)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x20) = 0;
  iVar5 = *(int *)(param_1 + 0x24);
  *(undefined4 *)(param_1 + 0x24) = 0;
  uVar6 = uVar3;
  if (uVar4 < uVar3) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != uVar4);
  }
  fn_002feef8(uVar3,(int)(iVar5 - uVar3) >> 2,0,local_20,unaff_r4,in_lr);
  return;
}



void fn_0042e3dc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_0083bd4c;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  return;
}


