#include "00321614_00321fecaab.h"



undefined4 * fn_003216f4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  *param_1 = &DAT_00823268;
  if ((undefined4 *)param_1[6] != &DAT_008f9cf4) {
    piVar3 = (undefined4 *)param_1[6] + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(param_1[6] + -0xc,*(int *)(param_1[6] + -8) + 8,0);
    }
  }
  puVar2 = (undefined4 *)param_1[5];
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = param_1[5];
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  puVar2 = (undefined4 *)param_1[4];
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = param_1[4];
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  puVar2 = (undefined4 *)param_1[3];
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = param_1[3];
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  return param_1;
}



int fn_00321644(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00823268;
  *(undefined1 *)(puVar1 + 2) = 1;
  iVar2 = fn_00168a24(puVar1 + 3,&LAB_003216e0,auStack_18);
  iVar2 = fn_00168a24(iVar2 + 4,&LAB_003216e0,auStack_14);
  iVar2 = fn_00168a24(iVar2 + 4,&LAB_003216e0,auStack_10);
  iVar2 = fn_00168a24(iVar2 + 4,&LAB_003216e0,auStack_c);
  *(undefined1 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x18) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined1 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 0;
  return iVar2 + -0x18;
}


