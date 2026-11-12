#include "005a12ec_005a1b5ca.h"



void fn_005a162c(int param_1,undefined1 param_2)

{
  fn_00430ae0();
  *(undefined1 *)(*(int *)(param_1 + 0x120) + 0x48) = param_2;
  return;
}



undefined4 fn_005a15e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = fn_002c11d0(param_1,5,0);
    if (*(int *)(*(int *)(iVar1 + 4) + iVar2 * 4) == param_2) {
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return 0;
}



void fn_005a14f0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  ulonglong uVar4;
  
  uVar4 = (ulonglong)param_5;
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x48] + 0x46) = 0;
    iVar2 = 0;
    do {
      fn_005a13cc(param_1,iVar2,0);
      param_5 = (uint)uVar4;
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  fn_004309e8(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x48] + 0x46) = 1;
    (**(code **)(*(int *)param_1[0x48] + 0x2c))((int *)param_1[0x48],param_3,0);
    fn_005a13cc(param_1,param_3,1);
  }
  if (5 < param_2) {
    (**(code **)(*param_1 + 400))(param_1,0);
  }
  cVar1 = (char)param_1[0x3f];
  bVar3 = cVar1 == '\x01';
  if (bVar3) {
    cVar1 = *(char *)((int)param_1 + 0xe5);
  }
  if ((bVar3 && cVar1 == '\0') && (iVar2 = param_1[0x3c], iVar2 != 0)) {
    *(bool *)(iVar2 + 0x7f) = param_2 == 1;
    fn_0031ef00(iVar2,0,0);
    return;
  }
  return;
}



void fn_005a13cc(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  if (((param_2 == 0) && ((param_3 == 0 || (iVar1 = fn_005a1648(), iVar1 != 0)))) ||
     (param_1[0x47] == 0)) {
    fn_002b20a4(param_1[0x46],param_3);
                    /* WARNING: Could not recover jumptable at 0x005a1448. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x46] + 0x1c));
    return;
  }
  fn_002b20a4(param_1[0x47],param_3);
                    /* WARNING: Could not recover jumptable at 0x005a1420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x47] + 0x1c));
  return;
}



undefined4 fn_005a1648(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint local_18 [3];
  
  iVar1 = fn_002c11d0(param_1,5,0);
  uVar7 = 0;
  if (iVar1 != 0) {
    local_18[0] = *(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 2;
    local_18[1] = 0x20;
    puVar2 = local_18;
    if (local_18[0] < 0x20) {
      puVar2 = local_18 + 1;
    }
    uVar8 = *puVar2;
    puVar3 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
    puVar6 = *(undefined4 **)(iVar1 + 8);
    puVar4 = puVar3;
    for (puVar5 = *(undefined4 **)(iVar1 + 4); puVar5 != puVar6; puVar5 = puVar5 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar5;
      }
      puVar4 = puVar4 + 1;
    }
    uVar7 = puVar3[2];
    puVar4 = (undefined4 *)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) & 0xfffffffcU) + (int)puVar3)
    ;
    puVar5 = puVar3;
    if (puVar4 < puVar3) {
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar4);
    }
    fn_001008c4(puVar3,(int)(uVar8 * 4) >> 2,0);
  }
  return uVar7;
}



void fn_005a12ec(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  
  iVar8 = 0;
  do {
    iVar1 = fn_002c11d0(param_1,5,0);
    piVar9 = (int *)(iVar1 + 4);
    uVar7 = *(int *)(iVar1 + 8) - *piVar9 >> 2;
    if (uVar7 < 0x20) {
      uVar7 = 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
    puVar5 = *(undefined4 **)(iVar1 + 8);
    puVar3 = puVar2;
    for (puVar4 = (undefined4 *)*piVar9; puVar4 != puVar5; puVar4 = puVar4 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar4;
      }
      puVar3 = puVar3 + 1;
    }
    iVar1 = *(int *)(iVar1 + 8);
    iVar6 = *piVar9;
    puVar4 = puVar2;
    if (puVar2[iVar8] != 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x114) + iVar8 * 4 + 0x1c) = puVar2[iVar8];
    }
    for (; puVar4 != (undefined4 *)((iVar1 - iVar6 & 0xfffffffcU) + (int)puVar2);
        puVar4 = puVar4 + 1) {
    }
    fn_001008c4(puVar2,(int)(uVar7 * 4) >> 2,0);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  return;
}


