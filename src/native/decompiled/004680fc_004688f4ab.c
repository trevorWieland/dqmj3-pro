#include "004680fc_004688f4ab.h"



void fn_004684b8(void)

{
  int iVar1;
  
  iVar1 = fn_004684e8();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004684d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_004683bc(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_00855a58;
  *(undefined1 *)(param_1 + 1) = 3;
  param_1[2] = &DAT_008528bc;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 2;
  *(undefined1 *)(param_1 + 0xb) = 1;
  param_1[0xc] = param_2;
  param_1[0xd] = param_4;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0x10) = 1;
  uVar1 = 0;
  if (DAT_008b6504 != (int *)0x0) {
    uVar1 = (**(code **)(*DAT_008b6504 + 8))();
  }
  param_1[0xf] = uVar1;
  *param_1 = &DAT_00852e70;
  param_1[0x11] = 1;
  iVar2 = fn_00476f5c(param_1 + 0x12,param_3 + 0x5c);
  iVar2 = fn_00476f5c(iVar2 + 0x58,param_3 + 0x78);
  *(undefined4 *)(iVar2 + 0x58) = 1;
  *(undefined **)(iVar2 + 0x60) = &DAT_008529d4;
  *(undefined **)(iVar2 + 100) = &DAT_00855b14;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  *(undefined4 *)(iVar2 + 0x70) = 0;
  *(undefined4 *)(iVar2 + 0x74) = 0;
  *(undefined4 *)(iVar2 + 0x78) = param_5;
  *(undefined1 *)(iVar2 + 0x7c) = 0;
  iVar3 = fn_004b7748();
  *(int *)(iVar2 + 0x5c) = iVar3 + 0x104;
  return iVar2 + -0xa0;
}



undefined4 fn_00468314(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  bool bVar6;
  
  if (*(char *)(param_1[0x26] + 4) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x004683a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(*param_1 + 0x1c))();
    return uVar3;
  }
  iVar1 = fn_0015ece0(0x20);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_004b5404(iVar1,param_2);
  }
  fn_00476894(param_1 + 0x12,piVar2,param_3);
  puVar5 = (uint *)(piVar2 + 1);
  do {
    uVar4 = *puVar5 - 1;
    bVar6 = (bool)hasExclusiveAccess(puVar5);
  } while (!bVar6);
  *puVar5 = uVar4;
  bVar6 = uVar4 == 0;
  if (bVar6) {
    uVar4 = (uint)*(byte *)(piVar2 + 2);
  }
  if (bVar6 && uVar4 == 0) {
    *(undefined1 *)(piVar2 + 2) = 1;
    (**(code **)(*piVar2 + 4))();
  }
  return 0;
}


