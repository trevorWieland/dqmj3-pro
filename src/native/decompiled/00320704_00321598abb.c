#include "00320704_00321598abb.h"



undefined4 * fn_003211f8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_00823254;
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



int fn_0032118c(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = &DAT_00823254;
  iVar2 = fn_00168a24(puVar1 + 2,&LAB_003211e4,auStack_10);
  iVar2 = fn_00168a24(iVar2 + 4,&LAB_003211e4,auStack_c);
  *(undefined4 *)(iVar2 + 4) = 0;
  *(undefined4 *)(iVar2 + 8) = 0;
  *(undefined1 *)(iVar2 + 0xc) = 0;
  *(undefined1 *)(iVar2 + 0xd) = 1;
  return iVar2 + -0xc;
}


