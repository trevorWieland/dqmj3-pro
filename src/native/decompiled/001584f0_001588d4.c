#include "001584f0_001588d4.h"



int * fn_001588d4(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
    piVar2 = (undefined4 *)*param_1 + -3;
    iVar1 = *piVar2;
    if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
    }
  }
  return param_1;
}



int fn_00158844(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = *(uint *)(*(int *)(param_1 + 0x18) + -4);
  uVar1 = fn_002febd8(param_2);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x18) + -4);
  if (uVar2 < uVar5) {
    uVar5 = uVar2;
  }
  iVar3 = fn_001010c8(*(int *)(param_1 + 0x18),param_2);
  if (iVar3 != 0 || uVar5 != uVar1) {
    for (iVar3 = *(int *)(param_1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
      iVar4 = fn_00158844(iVar3,param_2);
      if (iVar4 != 0) {
        return iVar4;
      }
    }
    param_1 = 0;
  }
  return param_1;
}



undefined4 * fn_001587b0(int param_1)

{
  undefined4 *puVar1;
  
  fn_00170704();
  puVar1 = *(undefined4 **)(param_1 + 0x24);
  if (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x24) = *puVar1;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
      fn_0014e79c(puVar1,*(int *)(param_1 + 0x18) + (int)puVar1,0);
    }
  }
  fn_001707b4(param_1 + 0x30);
  return puVar1;
}



void fn_00158758(int param_1)

{
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x54) = 0xffffffff;
  return;
}



undefined4 fn_00158690(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int extraout_r1;
  undefined4 uVar3;
  
  piVar2 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  while( true ) {
    piVar2 = param_1 + 5;
    fn_00170704(piVar2);
    if (0 < param_1[10]) break;
    fn_001707b4(piVar2);
    fn_0014ded0(param_1 + 1);
  }
  uVar3 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  fn_00169f1c(param_1[9] + 1,param_1[8]);
  param_1[9] = extraout_r1;
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    fn_0014df84(param_1 + 3,1);
  }
  fn_001707b4(piVar2);
  param_1 = param_1 + 0xb;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return uVar3;
}



undefined4 fn_00158660(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined1 auStack_2 [2];
  
  if (param_2 != 0) {
    iVar2 = fn_001585d4(param_1 + 4,auStack_2 + -6);
    uVar4 = 0;
    if (iVar2 != 0) {
      uVar4 = param_4;
    }
    return uVar4;
  }
  piVar3 = (int *)(param_1 + 0x30);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + 1;
  while( true ) {
    iVar2 = param_1 + 0x18;
    fn_00170704(iVar2);
    if (0 < *(int *)(param_1 + 0x2c)) break;
    fn_001707b4(iVar2);
    fn_0014ded0(param_1 + 8);
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 0x28) * 4);
  fn_00169f1c(*(int *)(param_1 + 0x28) + 1,*(undefined4 *)(param_1 + 0x24));
  *(undefined4 *)(param_1 + 0x28) = extraout_r1;
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
  if (0 < *(int *)(param_1 + 0x34)) {
    fn_0014df84(param_1 + 0x10,1);
  }
  fn_001707b4(iVar2);
  piVar3 = (int *)(param_1 + 0x30);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + -1;
  return uVar4;
}



undefined4 fn_001585d4(int *param_1,undefined4 *param_2)

{
  int extraout_r1;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  fn_00170704(piVar1);
  if (param_1[10] < 1) {
    fn_001707b4(piVar1);
    return 0;
  }
  *param_2 = *(undefined4 *)(*param_1 + param_1[9] * 4);
  fn_00169f1c(param_1[9] + 1,param_1[8]);
  param_1[9] = extraout_r1;
  param_1[10] = param_1[10] + -1;
  if (0 < param_1[0xc]) {
    fn_0014df84(param_1 + 3,1);
  }
  fn_001707b4(piVar1);
  return 1;
}



void fn_00158514(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  
  *param_1 = param_2;
  param_1[8] = param_3;
  param_1[9] = 0;
  param_1[10] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xb);
  } while (!bVar1);
  param_1[0xb] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 0xc);
  } while (!bVar1);
  param_1[0xc] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 1);
  } while (!bVar1);
  param_1[1] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 2);
  } while (!bVar1);
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0x7fff;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 3);
  } while (!bVar1);
  param_1[3] = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1 + 4);
  } while (!bVar1);
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)((int)param_1 + 0x12) = 0x7fff;
  fn_0013c500(param_1 + 5);
  return;
}



void fn_001584f0(int param_1)

{
  bool bVar1;
  
  fn_0013c500(param_1 + 0x2c);
  *(int *)(param_1 + 0x38) = param_1 + 0x6c;
  *(undefined4 *)(param_1 + 0x58) = 0x20;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 100));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 100) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x68));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x68) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x3c));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined2 *)(param_1 + 0x40));
  } while (!bVar1);
  *(undefined2 *)(param_1 + 0x40) = 0;
  *(undefined2 *)(param_1 + 0x42) = 0x7fff;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined4 *)(param_1 + 0x44));
  } while (!bVar1);
  *(undefined4 *)(param_1 + 0x44) = 0;
  do {
    bVar1 = (bool)hasExclusiveAccess((undefined2 *)(param_1 + 0x48));
  } while (!bVar1);
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0x7fff;
  fn_0013c500(param_1 + 0x4c);
  return;
}


