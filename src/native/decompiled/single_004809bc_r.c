#include "single_004809bc_r.h"


extern undefined4 register0x00000054;

/* WARNING: Type propagation algorithm not settling */

void fn_004809bc(int *param_1,int param_2,undefined1 *param_3,uint *param_4,uint *param_5)

{
  int *piVar1;
  uint **ppuVar2;
  int iVar3;
  undefined4 extraout_r1;
  int iVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  uint *local_28;
  
  piVar1 = (int *)(param_2 + 0x105c);
  local_28 = param_4;
  (**(code **)(*piVar1 + 8))();
  if ((*(char *)(param_2 + 0xc) != '\0') && (*(char *)(param_2 + 0x1087) == '\0')) {
    *param_4 = 0;
    goto LAB_00480adc;
  }
  if (*(int *)(param_2 + 0x1050) < 0) {
    iVar3 = *(int *)(param_2 + 0x1054);
    iVar4 = *(int *)(param_2 + 0x1058);
    *param_1 = *(int *)(param_2 + 0x1050);
    param_1[1] = iVar3;
    param_1[2] = iVar4;
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  local_28 = *(uint **)(*(int *)(param_2 + 0x10b4) + 0x18);
  ppuVar2 = &local_28;
  if (param_5 < local_28) {
    ppuVar2 = (uint **)register0x00000054;
  }
  puVar7 = (undefined1 *)*ppuVar2;
  *param_4 = (uint)puVar7;
  if (puVar7 == (undefined1 *)0x0) goto LAB_00480adc;
  iVar3 = *(int *)(param_2 + 0x10b4);
  puVar8 = (undefined1 *)(*(int *)(iVar3 + 0x1c) - *(int *)(iVar3 + 0x14));
  puVar5 = (undefined1 *)register0x00000054;
  if (puVar7 < puVar8) {
    puVar5 = puVar7;
  }
  iVar4 = *(int *)(iVar3 + 4) + *(int *)(iVar3 + 0x14);
  if (puVar7 < puVar8) {
LAB_00480ab0:
    fn_00301a9c(param_3,iVar4,puVar5);
  }
  else {
    fn_00301a9c(param_3,iVar4,puVar8);
    puVar5 = puVar7 + -(int)puVar8;
    if (puVar5 != (undefined1 *)0x0) {
      iVar4 = *(int *)(iVar3 + 4);
      param_3 = param_3 + (int)puVar8;
      goto LAB_00480ab0;
    }
  }
  iVar3 = *(int *)(param_2 + 0x10b4);
  uVar6 = *param_4;
  fn_00169f1c(*(int *)(iVar3 + 0x14) + uVar6,*(undefined4 *)(iVar3 + 0x1c));
  *(undefined4 *)(iVar3 + 0x14) = extraout_r1;
  *(uint *)(iVar3 + 0x18) = *(int *)(iVar3 + 0x18) - uVar6;
LAB_00480adc:
  *param_1 = 0x10001;
  param_1[1] = (int)&DAT_007dba44;
  param_1[2] = 0x71;
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}


