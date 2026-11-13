#include "003f8308_003f9b94aab.h"



undefined4 * fn_003f8398(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_00835964;
  puVar1 = (undefined4 *)param_1[3];
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[3];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  puVar1 = (undefined4 *)param_1[2];
  if (puVar1 != &DAT_008f9cf4) {
    piVar2 = puVar1 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[2];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 8,0);
    }
  }
  return param_1;
}



int fn_003f8338(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00835964;
  iVar2 = fn_00168a24(puVar1 + 2,&LAB_003f8384,auStack_10);
  iVar2 = fn_00168a24(iVar2 + 4,&LAB_003f8384,auStack_c);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined1 *)(iVar2 + 8) = 0;
  return iVar2 + -0xc;
}


