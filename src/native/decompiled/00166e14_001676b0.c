#include "00166e14_001676b0.h"



int * fn_001676b0(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar3 = 0x20;
  if (0x1f < param_2) {
    uVar3 = param_2;
  }
  param_1[2] = 0;
  puVar1 = (undefined1 *)fn_0015ece0(uVar3);
  *param_1 = (int)puVar1;
  for (uVar2 = param_2; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  param_1[2] = *param_1 + uVar3;
  param_1[1] = *param_1 + param_2;
  return param_1;
}



void fn_001675c4(int *param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int extraout_r1;
  
  piVar3 = param_1 + 0xc;
  do {
    iVar2 = *piVar3 + 1;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2;
  while( true ) {
    piVar3 = param_1 + 5;
    fn_00170704(piVar3);
    uVar4 = param_1[10];
    if (uVar4 < (uint)param_1[8]) break;
    fn_001707b4(piVar3);
    fn_0014ded0(param_1 + 3);
  }
  fn_00169f1c(param_1[9] + uVar4,param_1[8],param_1[9],uVar4,iVar2);
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    fn_0014df84(param_1 + 1,1);
  }
  fn_001707b4(piVar3);
  param_1 = param_1 + 0xc;
  do {
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = *param_1 + -1;
  return;
}



void fn_001675b0(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int extraout_r1;
  int iVar5;
  
  *(undefined1 *)(param_1 + 0x28) = 1;
  piVar3 = (int *)(param_1 + 0x68);
  do {
    iVar2 = *piVar3 + 1;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2;
  while( true ) {
    iVar5 = param_1 + 0x4c;
    fn_00170704(iVar5);
    uVar4 = *(uint *)(param_1 + 0x60);
    if (uVar4 < *(uint *)(param_1 + 0x58)) break;
    fn_001707b4(iVar5);
    fn_0014ded0(param_1 + 0x44);
  }
  fn_00169f1c(*(int *)(param_1 + 0x5c) + uVar4,*(undefined4 *)(param_1 + 0x58),
               *(int *)(param_1 + 0x5c),uVar4,iVar2);
  *(undefined4 *)(*(int *)(param_1 + 0x38) + extraout_r1 * 4) = 0;
  *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
  if (0 < *(int *)(param_1 + 100)) {
    fn_0014df84(param_1 + 0x3c,1);
  }
  fn_001707b4(iVar5);
  piVar3 = (int *)(param_1 + 0x68);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = *piVar3 + -1;
  return;
}



undefined4 * fn_0016752c(undefined4 param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  
  puVar4 = *(undefined4 **)(param_2 + 4);
  while( true ) {
    if (puVar4 == (undefined4 *)(param_2 + 4)) {
      return (undefined4 *)0x0;
    }
    uVar5 = *(uint *)(puVar4[-2] + -4);
    uVar1 = fn_00100b58(param_3);
    uVar3 = *(uint *)(puVar4[-2] + -4);
    if (uVar3 < uVar5) {
      uVar5 = uVar3;
    }
    iVar2 = fn_001006de(puVar4[-2],param_3);
    if (iVar2 == 0 && uVar5 == uVar1) break;
    puVar4 = (undefined4 *)*puVar4;
  }
  return puVar4 + -4;
}



int fn_00167500(undefined4 param_1,int *param_2,int param_3,int param_4)

{
  while( true ) {
    if (param_2 == (int *)param_3) {
      return 0;
    }
    if (param_2[-0xb] == param_4) break;
    param_2 = (int *)*param_2;
  }
  return (int)(param_2 + -0xb);
}



void fn_00167470(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;
  
  iVar2 = DAT_008bfab0;
  puVar3 = (undefined4 *)(DAT_008bfab0 + 0x6a0);
  if (param_1 == 0x10) {
    *puVar3 = 0;
    *(undefined4 *)(iVar2 + 0x6e8) = 0;
    return;
  }
  puVar4 = (undefined4 *)(DAT_008bfab0 + 0x458 + param_1 * 0x18);
  uVar1 = *puVar4;
  puVar3[param_1 + 1] = uVar1;
  puVar3[param_1 + 0x13] = uVar1;
  iVar2 = puVar4[2];
  bVar6 = iVar2 == 0x1400;
  if (!bVar6) {
    iVar2 = iVar2 + -0x1401;
    bVar6 = iVar2 == 0;
  }
  if (bVar6) {
    iVar2 = 1;
  }
  else if (iVar2 == 1) {
    iVar2 = 2;
  }
  else if (iVar2 == 5) {
    iVar2 = 4;
  }
  else {
    iVar2 = 0;
  }
  iVar5 = puVar4[3];
  if (iVar5 == 0) {
    iVar5 = puVar4[1] * iVar2;
  }
  puVar3[param_1 + 0x23] = iVar5;
  return;
}



undefined4 fn_00167030(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 < 0) {
    uVar1 = fn_00173d4c();
  }
  else {
    uVar1 = fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34),param_3,param_4,param_4);
  }
  uVar2 = fn_00173d4c(param_1,0xffffffff);
  uVar3 = fn_00173d4c(param_1,0xfffffffe);
  iVar4 = fn_001987e4(param_1,uVar1,uVar3,uVar2,0);
  if (iVar4 == 0) {
    uVar1 = fn_00173d4c(param_1,0xfffffffe);
    fn_0019828c(param_1,uVar1);
    return 0xffffffff;
  }
  fn_00173cd0(param_1,2);
  return 0;
}



undefined4 fn_00166f0c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x34);
  if (iVar5 < 3) {
    fn_0019813c(param_1,(char *)&DAT_00166ff8,iVar5,param_4,param_4);
    return 0xffffffff;
  }
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c(param_1);
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  iVar2 = *piVar1;
  iVar5 = 0;
  if (iVar2 != 0xa000020) {
    iVar5 = iVar2 + -0x8000000;
  }
  if (iVar2 == 0xa000020 || iVar5 == 0x4000) {
    piVar3 = (int *)fn_00173d4c(param_1,0xfffffffe);
    if (*piVar3 == 0x1000001) {
      uVar4 = fn_001581d0(param_1,(char *)&DAT_00167018);
      return uVar4;
    }
    uVar4 = fn_00173d4c(param_1,0xffffffff);
    fn_00173d60(param_1,piVar1,piVar3,uVar4,param_3 != 0);
    fn_00173cd0(param_1,2);
  }
  return 0;
}



undefined4 fn_00166e14(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (param_2 < 0) {
    piVar1 = (int *)fn_00173d4c();
  }
  else {
    piVar1 = (int *)fn_00173d40(param_1,param_2 + -1 + *(int *)(param_1 + 0x34));
  }
  iVar4 = *piVar1;
  if (iVar4 == 0xa000020) {
    uVar2 = *(undefined4 *)(piVar1[1] + 0x28);
  }
  else {
    if (iVar4 < 0xa000021) {
      if (iVar4 == 0x8000010) {
        return *(undefined4 *)(piVar1[1] + 0x14);
      }
      if (iVar4 != 0x8000040) {
        if (iVar4 == 0x8004000) {
          iVar4 = piVar1[1];
LAB_00166efc:
          return *(undefined4 *)(iVar4 + 0x58);
        }
LAB_00166eb0:
        uVar2 = fn_00191f28(iVar4);
        uVar3 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),100);
        fn_001028d4(uVar3,(char *)&DAT_007e09b4,uVar2);
        uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
        uVar2 = fn_001581d0(param_1,uVar2);
        return uVar2;
      }
    }
    else if (iVar4 != 0xa000080) {
      if (iVar4 == 0xa008000) {
        iVar4 = *(int *)(piVar1[1] + 0x1c);
        goto LAB_00166efc;
      }
      goto LAB_00166eb0;
    }
    uVar2 = *(undefined4 *)(piVar1[1] + 0x1c);
  }
  return uVar2;
}


