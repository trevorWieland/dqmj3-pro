#include "0046ef10_0046f6a8a.h"



void fn_0046f0bc(void)

{
  fn_0048d330();
  return;
}



undefined4 * fn_0046f01c(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_20;
  int iStack_1c;
  undefined1 auStack_18 [8];
  
  *param_1 = &DAT_00853b98;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0x98;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  iVar1 = fn_00769f74(param_1 + 2);
  param_1[6] = iVar1;
  *(undefined4 *)(iVar1 + 4) = 0;
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  *(undefined4 *)(param_1[6] + 0xc) = param_1[6];
  *param_1 = &DAT_0085318c;
  iStack_1c = param_1[6];
  local_20 = *(undefined4 *)(iStack_1c + 8);
  fn_0076a024(auStack_18,param_1 + 2,&local_20,&iStack_1c);
  return param_1;
}



undefined4 * fn_0046ef10(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  *param_1 = &PTR_FUN_00853120;
  if (param_1[0x1e] != 0) {
    fn_0047e514(param_1[0x1e],0xffffffff);
    if ((int *)param_1[0x1e] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0x1e] + 4))();
    }
    if (DAT_008b637e != '\0') {
      piVar1 = (int *)fn_001775e8(DAT_008b63d8);
      if (*piVar1 != 0) {
        *(undefined1 *)(DAT_008e9304 + *piVar1) = 0;
        goto code_r0x0046ef84;
      }
    }
    DAT_008e9308 = 0;
  }
code_r0x0046ef84:
  piVar1 = (int *)fn_004b7748();
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
    (**(code **)(*piVar1 + 4))(piVar1);
  }
  param_1[0x1f] = &PTR_LAB_008533fc;
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[0x20] = &DAT_0085319c;
  return param_1;
}


