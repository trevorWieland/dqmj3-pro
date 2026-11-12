#include "005a8624_005a8e78a.h"



void fn_005a8a44(int param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Could not recover jumptable at 0x005a8a54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + param_3 * 4) + 0x28))();
  return;
}



void fn_005a8828(undefined4 param_1)

{
  fn_00313870(param_1,0);
  fn_00313870(param_1,10);
  return;
}



void fn_005a8624(int param_1,char *param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined1 local_48 [4];
  float local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  float local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  iVar3 = param_1 + (char)(*param_2 + -0x14) * 8;
  bVar9 = *(char *)(iVar3 + 0x2c) != '\0';
  cVar1 = '\0';
  if (bVar9) {
    cVar1 = *(char *)(iVar3 + 0x2d);
  }
  if ((bVar9 && cVar1 != '\0') && (iVar3 = *(int *)(iVar3 + 0x30), -1 < iVar3)) {
    local_48[0] = 0;
    fn_006e8554(&local_30,param_1);
    local_40 = local_30;
    uStack_3c = uStack_2c;
    local_38 = (float)uStack_28;
    uStack_34 = uStack_24;
    uVar2 = fn_006e836c(&local_40,local_48,param_2,iVar3,*(undefined4 *)(param_1 + 0x24),
                         param_1 + 4);
    uVar4 = 0;
    iVar3 = 0;
    do {
      iVar5 = param_1 + uVar4 * 4;
      iVar6 = iVar3;
      if (*(int *)(iVar5 + 0x10) != 0) {
        iVar6 = iVar3 + 1;
        *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x59) = *(undefined1 *)(param_1 + 0x2a);
        *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x5a) = uVar2;
        *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x5b) = local_48[0];
        *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x40) + 0xec) = iVar3;
      }
      uVar4 = uVar4 + 1 & 0xff;
      iVar3 = iVar6;
    } while (uVar4 < 4);
    return;
  }
  uVar4 = 0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    iVar5 = param_1 + uVar7 * 4;
    iVar6 = iVar3;
    if (*(int *)(iVar5 + 0x10) != 0) {
      *(undefined1 *)(*(int *)(iVar5 + 0x10) + 0x59) = *(undefined1 *)(param_1 + 0x2a);
      piVar8 = *(int **)(iVar5 + 0x10);
      if (piVar8[1] - *piVar8 >> 2 == 0) {
        fn_002ff628(9,&DAT_008c7669,&DAT_008c7669,0,0);
      }
      fn_005797d8(*(undefined4 *)(*(int *)*piVar8 + 0x28),&uStack_3c,2);
      iVar6 = iVar3 + 1;
      *(int *)(*(int *)(*(int *)(iVar5 + 0x10) + 0x40) + 0xec) = iVar3;
      fn_00578d34(*(undefined4 *)(*(int *)(iVar5 + 0x10) + 0x40),local_48,0);
      if (local_44 < local_38) {
        uVar4 = uVar4 | 1;
      }
      else {
        uVar4 = uVar4 | 2;
      }
    }
    uVar7 = uVar7 + 1 & 0xff;
    iVar3 = iVar6;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    iVar6 = param_1 + uVar7 * 4;
    iVar3 = *(int *)(iVar6 + 0x10);
    if (iVar3 != 0) {
      if (uVar4 == 1) {
        *(undefined1 *)(iVar3 + 0x5a) = 6;
      }
      else if (uVar4 == 2) {
        *(undefined1 *)(iVar3 + 0x5a) = 7;
      }
      else {
        *(undefined1 *)(iVar3 + 0x5a) = 5;
      }
      *(undefined1 *)(*(int *)(iVar6 + 0x10) + 0x5b) = 0;
    }
    uVar7 = uVar7 + 1 & 0xff;
  } while (uVar7 < 4);
  return;
}


