#include "002c6500_002c7734a.h"



void fn_002c7154(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *local_3c;
  undefined4 *local_38 [2];
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  local_3c = &DAT_008f9cf4;
  uStack_30 = param_1;
  uStack_2c = param_2;
  local_28 = param_3;
  fn_002c756c(local_38,param_1,param_2);
  uVar5 = local_3c[-1];
  iVar6 = local_38[0][-1];
  if (((uint)local_3c[-2] < uVar5 + iVar6) || (1 < local_3c[-3] + 1)) {
    if (-iVar6 - 0xfU < uVar5) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-iVar6 - 0xfU);
    }
    fn_00177c88(&local_3c,local_3c[-1],0,local_38[0],local_38[0][-1],0,iVar6);
  }
  else {
    fn_00301a9c((int)local_3c + uVar5 * 2,local_38[0],(iVar6 + 1) * 2);
    local_3c[-1] = uVar5 + iVar6;
  }
  if (local_38[0] == &DAT_008f9cf4) goto LAB_002c7270;
  piVar1 = local_38[0] + -3;
  iVar6 = *piVar1;
  if (iVar6 != -1) {
    if (piVar1 == &DAT_008f9ce8) goto LAB_002c7270;
    *piVar1 = iVar6 + -1;
    if (iVar6 != 0) goto LAB_002c7270;
  }
  fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
LAB_002c7270:
  uVar7 = local_3c[-1];
  uVar2 = fn_00100b58(&DAT_002c7478);
  fn_00177c88(&local_3c,uVar7,0,&DAT_002c7478,uVar2,0,uVar2);
  fn_002c756c(local_38,param_1,local_28);
  uVar5 = local_3c[-1];
  iVar6 = local_38[0][-1];
  if (((uint)local_3c[-2] < uVar5 + iVar6) || (1 < local_3c[-3] + 1)) {
    if (-iVar6 - 0xfU < uVar5) {
      fn_002ff628(8,&DAT_008c760f,&DAT_008c760f,uVar5,-iVar6 - 0xfU);
    }
    fn_00177c88(&local_3c,local_3c[-1],0,local_38[0],local_38[0][-1],0,iVar6);
  }
  else {
    fn_00301a9c((int)local_3c + uVar5 * 2,local_38[0],(iVar6 + 1) * 2);
    local_3c[-1] = uVar5 + iVar6;
  }
  if (local_38[0] != &DAT_008f9cf4) {
    piVar1 = local_38[0] + -3;
    iVar6 = *piVar1;
    if ((iVar6 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
    }
  }
  uVar2 = fn_0022f584((char *)&DAT_002c7480,0);
  puVar3 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008942dc) goto LAB_002c73fc;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002c73fc:
  fn_00321118(puVar3,uVar2,local_3c);
  fn_00689bd0(param_1,0x49,0);
  if (local_3c != &DAT_008f9cf4) {
    piVar1 = local_3c + -3;
    iVar6 = *piVar1;
    if ((iVar6 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return;
}



void fn_002c7024(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5
                 )

{
  int iVar1;
  ulonglong uVar2;
  
  uVar2 = (ulonglong)param_5;
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x40] + 0x46) = 0;
    iVar1 = 0;
    do {
      while (iVar1 == 0) {
        fn_002b20a4(param_1[0x3c],0);
        (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x3c] + 0x1c));
        iVar1 = 1;
      }
      fn_002b20a4(param_1[0x3d],0);
      (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x3d] + 0x1c));
      param_5 = (uint)uVar2;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
  }
  fn_004309e8(param_1,param_2,param_3,param_4,param_5);
  if ((param_1[0x19] == 7) && ((**(code **)(*param_1 + 400))(param_1,0), param_1[0x19] == 7)) {
    *(undefined1 *)(param_1[0x40] + 0x46) = 1;
    (**(code **)(*(int *)param_1[0x40] + 0x2c))((int *)param_1[0x40],param_3,0);
    fn_002c6f28(param_1,param_3,1);
    return;
  }
  return;
}



void fn_002c6f28(int *param_1,int param_2,undefined4 param_3)

{
  if (param_2 == 0) {
    fn_002b20a4(param_1[0x3c],param_3);
                    /* WARNING: Could not recover jumptable at 0x002c6f84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x3c] + 0x1c));
    return;
  }
  fn_002b20a4(param_1[0x3d],param_3);
                    /* WARNING: Could not recover jumptable at 0x002c6f5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x3d] + 0x1c));
  return;
}



void fn_002c6ec0(int param_1,undefined4 param_2)

{
  fn_004309c4();
  fn_0042ff80(param_1,*(int *)(param_1 + 0xb0) + 4,param_2,0);
  fn_0022da78(*(int *)(param_1 + 0xb0) + 4,(&DAT_007c7257)[*(int *)(param_1 + 0x10c)],0);
  (**(code **)**(undefined4 **)(param_1 + 0xb0))(*(undefined4 **)(param_1 + 0xb0),0);
  fn_00430b80(param_1);
  return;
}



undefined4 fn_002c67c4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002bf534();
  fn_002c6500(param_1);
  return uVar1;
}



void fn_002c6500(int param_1)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;
  uint local_20 [3];
  
  bVar8 = *(char *)(*(int *)(param_1 + 0x108) + 0x7a) != '\0';
  if (bVar8) goto LAB_002c6618;
  iVar1 = fn_002c11d0(param_1,3,0);
  local_20[0] = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
  local_20[1] = 0x20;
  puVar2 = local_20;
  if (local_20[0] < 0x20) {
    puVar2 = local_20 + 1;
  }
  uVar7 = *puVar2;
  piVar3 = (int *)fn_00100fc6(uVar7 << 2,0);
  piVar6 = *(int **)(iVar1 + 8);
  piVar4 = piVar3;
  for (piVar5 = *(int **)(iVar1 + 4); piVar5 != piVar6; piVar5 = piVar5 + 1) {
    if (piVar4 != (int *)0x0) {
      *piVar4 = *piVar5;
    }
    piVar4 = piVar4 + 1;
  }
  piVar5 = (int *)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffffcU) + (int)piVar3);
  iVar1 = *piVar3;
  bVar9 = iVar1 != 0;
  if (!bVar9) {
    iVar1 = piVar3[1];
  }
  if (bVar9 || iVar1 != 0) {
LAB_002c65e4:
    bVar8 = true;
  }
  else {
    iVar1 = piVar3[2];
    bVar9 = iVar1 == 0;
    if (bVar9) {
      iVar1 = piVar3[3];
    }
    if (!bVar9 || iVar1 != 0) goto LAB_002c65e4;
  }
  piVar4 = piVar3;
  if (piVar5 <= piVar3) {
    for (; piVar4 != piVar5; piVar4 = piVar4 + 1) {
    }
  }
  fn_001008c4(piVar3,(int)(uVar7 * 4) >> 2,0);
LAB_002c6618:
  iVar1 = *(int *)(param_1 + 0xf0);
  if (iVar1 == 0) {
    return;
  }
  if (bVar8) {
    fn_002b1f48(iVar1,1);
    fn_002b1f0c(iVar1,0);
    return;
  }
  fn_002b1f48(iVar1,0);
  fn_002b1f0c(iVar1,1);
  return;
}


