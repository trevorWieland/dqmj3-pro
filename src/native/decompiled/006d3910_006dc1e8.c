#include "006d3910_006dc1e8.h"



void fn_006dc1e8(int param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_10 [16];
  
  puVar1 = (undefined4 *)fn_004c4994(auStack_10,*(undefined4 *)(param_1 + 4),0);
  *puVar1 = &DAT_00857390;
  fn_006d4120(auStack_10);
  return;
}



int fn_006da454(void)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)(DAT_008c06a0 + 4) + 8))();
  return iVar1 + 4;
}



void fn_006da340(undefined4 param_1,undefined1 *param_2,undefined1 param_3,int param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  undefined1 uVar2;
  int *piVar3;
  int iStack_10;
  
  if (param_4 == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 6;
  }
  *param_2 = uVar2;
  param_2[1] = param_3;
  param_2[2] = 5;
  param_2[3] = param_5;
  piVar3 = (int *)(DAT_008c06a0 + 4);
  iStack_10 = param_4;
  uVar1 = (**(code **)(*(int *)(DAT_008c06a0 + 4) + 8))();
  (**(code **)(*piVar3 + 0xc))(piVar3,param_2 + 4,&iStack_10,uVar1);
  return;
}



void fn_006d9328(int param_1)

{
  int iVar1;
  
  if ((DAT_008bf4d4 - 0x100000U < 0x3ff00000) &&
     (iVar1 = fn_0050c6d8(DAT_008bf4d4 + 0x10,*(undefined4 *)(param_1 + 0x74),0x210),
     iVar1 - 0x100000U < 0x3ff00000)) {
    fn_006d9728(iVar1 + 0x18);
    return;
  }
  return;
}



void fn_006d9728(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint local_18;
  int local_14;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  local_18 = 0;
  local_14 = 0;
  fn_004f01f4(&local_18);
  iVar2 = local_18 - *(uint *)(param_1 + 8);
  iVar3 = local_14 - (*(int *)(param_1 + 0xc) + (uint)(local_18 < *(uint *)(param_1 + 8)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  fn_0011c134(iVar2,iVar3,*puVar1,puVar1[1]);
  return;
}



void fn_006d8aec(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int local_c8 [35];
  uint local_3c;
  char local_38 [12];
  char local_2c [8];
  
  iVar1 = DAT_008c06a0;
  iVar7 = DAT_008bf4e0;
  iVar8 = DAT_008bf4cc;
  iVar10 = *(int *)(DAT_008bf4d4 + 100);
  if (((iVar10 - 0x100000U < 0x3ff00000) && (DAT_008bf4cc - 0x100000U < 0x3ff00000)) &&
     (DAT_008c06a0 - 0x100000U < 0x3ff00000)) {
    uVar9 = 0;
    uVar5 = 0;
    local_3c = (uint)*(byte *)(DAT_008bf4e0 + 99);
    fn_00301f50(local_c8 + 0xc,0x5c);
    local_c8[0] = 0;
    local_c8[1] = 0;
    local_c8[2] = 0;
    local_c8[3] = 0;
    local_c8[4] = 0;
    local_c8[5] = 0;
    local_c8[6] = 0;
    local_c8[7] = 0;
    local_c8[8] = 0;
    local_c8[9] = 0;
    local_c8[10] = 0;
    local_c8[0xb] = 0;
    for (piVar6 = (int *)(iVar8 + 0x3c);
        piVar6 != (int *)(iVar8 + *(int *)(iVar8 + 0x38) * 4 + 0x3c); piVar6 = piVar6 + 1) {
      if (((*(char *)(*piVar6 + 0x20) == '\x05') &&
          (iVar2 = fn_006d92e4(iVar7,*(undefined1 *)(*piVar6 + 0x14)), iVar2 != 0)) &&
         ((iVar2 = fn_006da484(iVar10,local_3c,*(undefined1 *)(*piVar6 + 0x14),local_2c),
          -1 < iVar2 && ((local_2c[0] != -3 && (*(char *)(*piVar6 + 0x14) != local_2c[0])))))) {
        iVar2 = fn_006db878(iVar1);
        local_c8[uVar9 + 0xc] = iVar2;
        uVar9 = uVar9 + 1 & 0xff;
        uVar3 = 0;
        while (uVar3 != uVar5) {
          if ((local_38[uVar3] == local_2c[0]) || (uVar3 = uVar3 + 1, (int)uVar5 < (int)uVar3))
          goto LAB_006d8c5c;
        }
        uVar5 = uVar5 + 1 & 0xff;
        local_38[uVar3] = local_2c[0];
      }
LAB_006d8c5c:
    }
    iVar7 = 0;
    if (uVar5 != 0) {
      do {
        uVar4 = fn_006d9e9c(iVar8,local_38[iVar7]);
        iVar10 = fn_006db878(iVar1,uVar4);
        local_c8[iVar7] = iVar10;
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)uVar5);
    }
    DAT_008ed974 = (undefined1)uVar9;
    iVar8 = 0;
    do {
      uVar4 = 0xffffffff;
      if (local_c8[iVar8 + 0xc] != 0) {
        uVar4 = fn_004ed478();
      }
      iVar7 = iVar8 + 1;
      (&DAT_008ed978)[iVar8] = uVar4;
      iVar8 = iVar7;
    } while (iVar7 <= (int)uVar5);
    DAT_008ed9d4 = (undefined1)uVar5;
    iVar8 = 0;
    if (uVar5 != 0) {
      do {
        uVar4 = 0xffffffff;
        if (local_c8[iVar8] != 0) {
          uVar4 = fn_004ed478();
        }
        iVar7 = iVar8 + 1;
        (&DAT_008ed9d8)[iVar8] = uVar4;
        iVar8 = iVar7;
      } while (iVar7 < (int)uVar5);
    }
  }
  return;
}



void fn_006d5d14(int param_1)

{
  if (DAT_008bf500 == '\0') {
    return;
  }
  fn_006d6880(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_006d5cf0(int param_1)

{
  if (DAT_008bf500 == '\0') {
    return;
  }
  fn_006d685c(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_006d5c74(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006d5c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x54))();
  return;
}



void fn_006d590c(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x006d5918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x30))();
  return;
}



void fn_006d3b24(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 2) == '\x05') {
    uVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = uVar1;
  }
  else {
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void fn_006d3ad0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(param_2 + 2) == '\x04') {
    uVar1 = *param_2;
    *param_1 = &DAT_00855a94;
    fn_0015e6f0(param_1 + 1,uVar1);
    return;
  }
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,&DAT_007db524);
  return;
}



void fn_006d3ab0(void)

{
  return;
}



undefined8 fn_006d3910(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 local_18;
  
  iVar4 = *(int *)(param_1 + 4);
  if (iVar4 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    local_18 = param_4;
    iVar1 = fn_00100b58(iVar4);
    piVar2 = (int *)fn_0015ece0(iVar1 + 5);
    piVar3 = piVar2 + 1;
    *piVar2 = iVar1 + 1;
    fn_00173bf4(iVar4,piVar3,iVar1 + 1);
  }
  local_18 = 0;
  uVar6 = fn_00102d92(piVar3,&local_18,10);
  piVar2 = (int *)uVar6;
  bVar5 = piVar3 == (int *)0x0;
  if (!bVar5) {
    piVar2 = piVar3 + -1;
    bVar5 = piVar2 == (int *)0x0;
  }
  if (!bVar5) {
    if ((code *)piVar2[-2] == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*(code *)piVar2[-2])();
    }
  }
  return uVar6;
}


