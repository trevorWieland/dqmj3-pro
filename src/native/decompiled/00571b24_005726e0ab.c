#include "00571b24_005726e0ab.h"



void fn_00571fd8(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = &PTR_LAB_00840f44;
  puVar1 = (undefined1 *)param_1[5];
  if (puVar1 != &DAT_008f9d04) {
    piVar2 = (int *)(puVar1 + -0xc);
    iVar4 = *piVar2;
    if ((iVar4 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar4 + -1, iVar4 == 0)))) {
      iVar4 = param_1[5];
      fn_001008c4(iVar4 + -0xc,*(int *)(iVar4 + -8) + 0xe,0);
    }
  }
  puVar3 = (undefined4 *)param_1[4];
  if (puVar3 == &DAT_008f9cf4) goto LAB_00572080;
  piVar2 = puVar3 + -3;
  iVar4 = *piVar2;
  if (iVar4 != -1) {
    if (piVar2 == &DAT_008f9ce8) goto LAB_00572080;
    *piVar2 = iVar4 + -1;
    if (iVar4 != 0) goto LAB_00572080;
  }
  iVar4 = param_1[4];
  fn_001008c4(iVar4 + -0xc,*(int *)(iVar4 + -8) + 8,0);
LAB_00572080:
  func_0x0039574c(param_1);
  return;
}



undefined4 * fn_00571f88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  puVar1[4] = &DAT_008f9cf4;
  *puVar1 = &PTR_LAB_00840f44;
  puVar1[5] = &DAT_008f9d04;
  fn_00571b24(puVar1);
  return puVar1;
}


