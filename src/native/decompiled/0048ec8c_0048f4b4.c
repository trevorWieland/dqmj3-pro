#include "0048ec8c_0048f4b4.h"



void fn_0048f4b4(undefined4 param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 local_18;
  
  piVar1 = *(int **)(param_2 + 0x18);
  local_18 = param_4;
  (**(code **)(*piVar1 + 8))(piVar1);
  local_18 = *param_3;
  fn_00459d70(param_1,param_2,&local_18);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0048f46c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  fn_00459cb0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0048f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0048f434(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  fn_00459c64(param_1);
                    /* WARNING: Could not recover jumptable at 0x0048f468. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0048f3ec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 0x18);
  (**(code **)(*piVar1 + 8))(piVar1);
  fn_00459ba0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0048f430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0048f314(int param_1)

{
  int iVar1;
  undefined1 *puStack_30;
  undefined *puStack_2c;
  uint local_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  
  iVar1 = (**(code **)(param_1 + 0x68))(param_1 + 0x70);
  if (iVar1 == 0) {
    fn_0013d0fc(&local_28);
    if (uStack_24 < *(uint *)(param_1 + 0x7c) ||
        *(uint *)(param_1 + 0x7c) - uStack_24 < (uint)(local_28 <= *(uint *)(param_1 + 0x78))) {
      fn_004b301c(param_1,1);
      *(undefined4 *)(param_1 + 0x24) = 100;
      return;
    }
    uStack_20 = 0x8001000b;
    puStack_1c = &DAT_007dba44;
    uStack_18 = 0x71;
    fn_0048f2b0(param_1);
    return;
  }
  iVar1 = (**(code **)(param_1 + 0x6c))(param_1 + 0x70);
  if (iVar1 == 0) {
    puStack_30 = &DAT_80010001;
    puStack_2c = &DAT_007dba44;
    local_28 = 0x71;
    fn_0048f2b0(param_1,&puStack_30);
    return;
  }
  puStack_30 = (undefined1 *)0x10001;
  puStack_2c = &DAT_007dba44;
  local_28 = 0x71;
  fn_0048f2b0(param_1,&puStack_30);
  return;
}



void fn_0048f2b0(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x74));
  if (iVar1 != 0) {
    local_18 = *param_2;
    iStack_14 = param_2[1];
    iStack_10 = param_2[2];
    if (local_18 < 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 2;
    }
    fn_00455e8c(iVar1,uVar2,&local_18,1);
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_0048f210(undefined4 *param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  bool bVar3;
  
  piVar1 = (int *)param_1[0x36];
  if (piVar1 != (int *)0x0) {
    param_3 = -1;
    param_4 = (uint *)(piVar1 + 1);
  }
  *param_1 = &DAT_00855a38;
  if (piVar1 != (int *)0x0) {
    do {
      uVar2 = *param_4 + param_3;
      bVar3 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar3);
    *param_4 = uVar2;
    bVar3 = uVar2 == 0;
    if (bVar3) {
      uVar2 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar3 && uVar2 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[0x24] = &DAT_0085316c;
  if ((code *)param_1[-2] == (code *)0x0) {
    fn_0030233c(param_1 + -2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048f298. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[-2])();
  return;
}



void fn_0048f0f8(void)

{
  int iVar1;
  
  iVar1 = fn_0048f128();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048f118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_0048f128(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar5 = 0;
  *param_1 = &PTR_FUN_00853cdc;
  uVar2 = param_1[1];
  if ((int)(param_1[2] - uVar2) >> 2 != 0) {
    do {
      piVar1 = *(int **)(uVar2 + uVar5 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      uVar2 = param_1[1];
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)((int)(param_1[2] - uVar2) >> 2));
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    uVar2 = extraout_r1;
  }
  uVar5 = param_1[1];
  uVar4 = param_1[2];
  if (uVar5 < uVar4) {
    uVar2 = uVar4 - uVar5;
  }
  if (uVar5 < uVar4) {
    uVar2 = uVar2 << 0x1d;
  }
  if (uVar5 < uVar4) {
    uVar2 = uVar2 >> 0x1f;
  }
  else {
    uVar2 = 0;
  }
  iVar3 = uVar2 + 1;
  if (iVar3 < ((int)(uVar4 - uVar5) >> 2) + 1) {
    do {
      iVar3 = iVar3 + 2;
    } while (iVar3 < ((int)(uVar4 - uVar5) >> 2) + 1);
  }
  if (uVar5 != 0) {
    if (*(code **)(uVar5 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar5 - 8))();
    }
  }
  return param_1;
}



undefined4 * fn_0048efe8(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  
  piVar1 = param_1 + 1;
  *param_1 = &PTR_FUN_00853cdc;
  *piVar1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  puVar2 = (undefined4 *)fn_0015ece0(0x80);
  iVar4 = 2;
  *piVar1 = (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar4 = iVar4 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar4 != 0);
  param_1[3] = *piVar1 + 0x80;
  param_1[2] = *piVar1 + 8;
  puVar2 = (undefined4 *)fn_0015ece0(4);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_008531ac;
  }
  *(undefined4 **)*piVar1 = puVar2;
  iVar4 = fn_0015ece0(0x9f8);
  uVar3 = 0;
  if (iVar4 != 0) {
    uVar3 = fn_00471194();
  }
  *(undefined4 *)(*piVar1 + 4) = uVar3;
  puVar2 = (undefined4 *)fn_0015ece0(0x38);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00852bfc;
    puVar2[1] = &DAT_00852760;
    puVar2[2] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
  }
  param_1[4] = puVar2;
  return param_1;
}



void fn_0048ee54(int param_1,int param_2)

{
  (**(code **)(**(int **)(*(int *)(param_1 + 4) + (uint)*(byte *)(param_2 + 0x24) * 4) + 0xc))();
  return;
}



void fn_0048ec8c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    if (*(int *)(*(int *)(param_1 + 0x6c) + 4) == 0) {
      if (*param_2 == -0x7f97ffff) {
        if (*(int *)(param_1 + 0x80) == 200) {
          puVar4 = (undefined1 *)(*(int *)(param_1 + 0x7c) + 20000);
        }
        else {
          puVar4 = &DAT_000059d8 + *(int *)(param_1 + 0x80);
        }
        *(undefined1 **)(*(int *)(param_1 + 0x6c) + 4) = puVar4;
      }
      else {
        uVar2 = fn_00482944(param_2);
        *(undefined4 *)(*(int *)(param_1 + 0x6c) + 4) = uVar2;
      }
    }
    iVar3 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
    if (iVar3 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  if (*(char *)(param_1 + 0x22) == '\x05') {
    return;
  }
  fn_004b2f04(param_1);
  return;
}


