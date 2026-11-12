#include "0014f1e0_0014f600a.h"



undefined4 * fn_0014f480(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_00855a18;
  if (param_1[3] != 0) {
    pcVar1 = *(code **)(param_1[3] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return param_1;
}



undefined4 fn_0014f470(void)

{
  return DAT_008b64c0;
}



void fn_0014f440(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x1c) = param_3;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = param_2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  uVar1 = fn_00170e68();
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}



int * fn_0014f3a4(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x380);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x380;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x1c);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



int * fn_0014f308(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(char *)((int)param_1 + 0x19) = (char)param_1;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x400);
  piVar1[2] = iVar2;
  *piVar1 = *param_1;
  piVar1[1] = 0x20;
  *param_1 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[2] = iVar2;
  param_1[3] = iVar2 + 0x400;
  puVar3 = (undefined1 *)param_1[2];
  param_1[2] = (int)(puVar3 + 0x20);
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[4] = (int)puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(int *)(param_1[4] + 8) = param_1[4];
  *(int *)(param_1[4] + 0xc) = param_1[4];
  return param_1;
}



undefined4 * fn_0014f2b0(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_008558c4;
  if (param_1[3] != 0) {
    pcVar1 = *(code **)(param_1[3] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  return param_1;
}



bool fn_0014f200(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar2 = param_1[9];
  bVar3 = uVar2 <= uVar1;
  if (bVar3) {
    uVar2 = param_1[10];
  }
  if (bVar3 && uVar1 <= uVar2) {
    fn_0015ed58(param_1 + 3);
    (**(code **)(*param_1 + 0x20))(param_1);
  }
  return bVar3 && uVar1 <= uVar2;
}



void fn_0014f1e0(undefined4 *param_1)

{
  *param_1 = &DAT_00853740;
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}


