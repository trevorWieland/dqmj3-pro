#include "004b5f40_004b6424.h"



undefined4 fn_004b6424(undefined4 param_1,undefined4 param_2)

{
  undefined1 auStack_10 [8];
  
  fn_004bebd8(auStack_10,param_1,param_2);
  fn_00170fa4(param_1,auStack_10);
  fn_00170f54(auStack_10);
  return param_1;
}



int fn_004b63a4(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar3 = iVar1 == 0;
  if (!bVar3) {
    iVar1 = iVar1 + -4;
    bVar3 = iVar1 == 0;
  }
  if (!bVar3) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 4) = 0;
  }
  else {
    iVar1 = fn_002febd8(param_2);
    iVar1 = iVar1 + 1;
    piVar2 = (int *)fn_0015ece0(iVar1 * 2 + 4);
    *piVar2 = iVar1;
    *(int **)(param_1 + 4) = piVar2 + 1;
    fn_0017fe44(param_2,piVar2 + 1,iVar1);
  }
  return param_1;
}



undefined4 * fn_004b637c(undefined4 *param_1,int param_2)

{
  *param_1 = &DAT_00855a94;
  fn_0015e6f0(param_1 + 1,*(undefined4 *)(param_2 + 4));
  return param_1;
}



undefined4 * fn_004b6318(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_00855a94;
  if (param_2 == 0) {
    param_1[1] = 0;
  }
  else {
    iVar1 = fn_002febd8(param_2);
    iVar1 = iVar1 + 1;
    piVar2 = (int *)fn_0015ece0(iVar1 * 2 + 4);
    *piVar2 = iVar1;
    param_1[1] = piVar2 + 1;
    fn_0017fe44(param_2,piVar2 + 1,iVar1);
  }
  return param_1;
}



void fn_004b62bc(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  bVar3 = iVar1 == 0;
  if (!bVar3) {
    iVar1 = iVar1 + -4;
    bVar3 = iVar1 == 0;
  }
  if (!bVar3) {
    if (*(code **)(iVar1 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar1 + -8))();
    }
  }
  piVar2 = (int *)fn_0015ece0(param_2 * 2 + 4);
  *piVar2 = param_2;
  *(int **)(param_1 + 4) = piVar2 + 1;
  *(undefined2 *)(piVar2 + 1) = 0;
  return;
}



undefined4 fn_004b626c(undefined *param_1,undefined *param_2)

{
  int iVar1;
  
  while( true ) {
    while( true ) {
      if (param_1 == param_2) {
        return 1;
      }
      if (param_1 != (undefined *)0x0) break;
      param_1 = &DAT_007db524;
    }
    if (param_2 != (undefined *)0x0) break;
    param_2 = &DAT_007db524;
  }
  iVar1 = fn_00101d80();
  if (iVar1 == 0) {
    return 1;
  }
  return 0;
}



void fn_004b6230(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_218 [512];
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  fn_0010288c(auStack_218,0x100,param_2,&uStack_8);
  fn_0013d438(param_1,auStack_218);
  return;
}



int fn_004b61c8(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (uint)*(byte *)(param_1 + 4) * 0x1b0;
  if (DAT_008b637e != '\0') {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 != 0) {
      return *(int *)(&DAT_008e77c0 + iVar1) + *piVar2 * 0xd0;
    }
  }
  return iVar1 + 0x8e77c8;
}



int fn_004b616c(int param_1)

{
  int *piVar1;
  
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar1 != 0) {
      return *(int *)(&DAT_008e77c0 + param_1 * 0x1b0) + *piVar1 * 0xd0;
    }
  }
  return param_1 * 0x1b0 + 0x8e77c8;
}



undefined4
fn_004b6080(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,int param_5)

{
  undefined4 uVar1;
  
  if (*(int **)(param_1 + 0x3c) != (int *)0x0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0x1c))();
      *(undefined4 *)(param_5 + 8) = 0;
      *(undefined2 *)(param_5 + 6) = 0;
    }
    else {
      uVar1 = (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))();
      *(undefined4 *)(param_5 + 8) = 0;
      *(undefined2 *)(param_5 + 6) = 0;
    }
    switch(uVar1) {
    case 0:
      *param_4 = 0;
      return 0;
    case 4:
      if (*(char *)(param_1 + 0x40) != '\0') {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return 0xffffffff;
}



void fn_004b604c(int param_1)

{
  int *piVar1;
  bool bVar2;
  
  piVar1 = (int *)(uint)*(byte *)(param_1 + 4);
  bVar2 = piVar1 != (int *)0x3;
  if (bVar2) {
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  if (bVar2 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}



undefined4 fn_004b5f90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  bool bVar4;
  
  bVar4 = *(char *)(param_1 + 0x40) != '\0';
  piVar1 = (int *)0x0;
  if (bVar4) {
    piVar1 = *(int **)(param_1 + 0x3c);
  }
  if (bVar4 && piVar1 != (int *)0x0) {
    if (*(char *)(param_1 + 0x2c) == '\0') {
      pcVar3 = *(code **)(*piVar1 + 0x20);
    }
    else {
      pcVar3 = *(code **)(**(int **)(param_1 + 0x3c) + 0x10);
    }
    uVar2 = (*pcVar3)();
    switch(uVar2) {
    case 0:
      return 0;
    case 4:
      if (*(char *)(param_1 + 0x40) != '\0') {
        *(undefined1 *)(param_1 + 0x40) = 0;
      }
    }
  }
  return 0xffffffff;
}



undefined4 fn_004b5f40(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  *(char *)(param_1 + 0x2c) = (char)param_2;
  puVar1 = *(undefined4 **)(param_1 + 0x3c);
  if ((puVar1 == (undefined4 *)0x0) ||
     (iVar2 = (**(code **)*puVar1)(puVar1,param_2 == 0), iVar2 == 0)) {
    return 0;
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return 1;
}


