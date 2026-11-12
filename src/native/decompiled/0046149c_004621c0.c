#include "0046149c_004621c0.h"



void fn_004621c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_1 + 0xb8) = param_2;
  if (*(int *)(param_1 + 0xa8) != 0) {
    fn_00465808(param_1);
  }
  fn_00465d08(param_1);
                    /* WARNING: Could not recover jumptable at 0x00462218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 fn_0046149c(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  code *pcVar6;
  bool bVar7;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  
  cVar1 = *(char *)(param_1 + 0xbc);
  if (param_2 == 2) {
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  *(char *)(param_1 + 0xbc) = (char)param_2;
  if (*(int *)(param_1 + 500) == 0) {
    return 1;
  }
  uVar5 = 0x80050007;
  if (cVar1 == '\x01') {
    if (param_2 != 2) goto LAB_00461500;
  }
  else if ((cVar1 != '\x03') || (param_2 != 0)) goto LAB_00461500;
  uVar5 = 0x10001;
LAB_00461500:
  piVar2 = *(int **)(param_1 + 0x1f0);
  pcVar6 = *(code **)(param_1 + 500);
  if (piVar2 != (int *)0x0) {
    puVar4 = (uint *)(piVar2 + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar7);
    *puVar4 = uVar3;
    bVar7 = uVar3 == 0;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(piVar2 + 2);
    }
    if (bVar7 && uVar3 == 0) {
      *(undefined1 *)(piVar2 + 2) = 1;
      (**(code **)(*piVar2 + 4))();
    }
  }
  *(undefined4 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1ec) = 0;
  *(undefined4 *)(param_1 + 500) = 0;
  puStack_2c = &DAT_007dba44;
  uStack_28 = 0x71;
  uStack_30 = uVar5;
  (*pcVar6)(param_1,&uStack_30,param_1 + 0x1f8);
  return 1;
}


