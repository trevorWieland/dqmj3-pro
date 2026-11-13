#include "00108748_00108eb4.h"



undefined4 * fn_00108eb4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0081c238;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)(param_1 + 0xd) = 0xff;
  *(undefined1 *)((int)param_1 + 0x35) = 0;
  *(undefined1 *)((int)param_1 + 0x36) = 0;
  param_1[0xe] = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001223a8();
  }
  param_1[0xf] = uVar2;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001223a8();
  }
  param_1[0x10] = uVar2;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001135f0();
  }
  param_1[0x11] = uVar2;
  iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001138ec();
  }
  param_1[0x12] = uVar2;
  iVar1 = fn_00145b00(0x54,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00112918();
  }
  param_1[0x13] = uVar2;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00113360();
  }
  param_1[0x14] = uVar2;
  iVar1 = fn_00145b00(0x50,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001139cc();
  }
  param_1[0x15] = uVar2;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  return param_1;
}



void fn_00108e58(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00118e24();
  }
  DAT_008987bc = uVar2;
  return;
}



void fn_00108d1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001138cc(iVar1,(char *)&DAT_00108dd8);
  }
  *(undefined4 *)(param_1 + 4) = uVar2;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001138ac(iVar1,(char *)&DAT_00108df0);
  }
  *(undefined4 *)(param_1 + 8) = uVar2;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  fn_0011050c(uVar2,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0xc),L"rom:/data/Layout/common/HomeNixSign.arc",
                       &DAT_00108e08,1,1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 0xc),uVar2,(char *)&DAT_00108e14,&DAT_00108e10,1,1,0)
  ;
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  return;
}



void fn_00108c94(int param_1)

{
  fn_001103e0(*(undefined4 *)(param_1 + 0xc),param_1 + 0x18);
  fn_00110460(*(undefined4 *)(param_1 + 0xc),param_1 + 0x14);
  fn_001104a8(*(undefined4 *)(param_1 + 0xc),param_1 + 0x10);
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}



void fn_00108bd8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,DAT_0089815c);
  if (*(int *)(*(int *)(iVar1 + 8) + 8) == 0) {
    fn_0011705c();
  }
  uVar2 = fn_0012ebb4(param_1,param_1 + 4,DAT_0089815c);
  fn_00110aa8(param_1,uVar2);
  iVar1 = fn_0012ebb4(param_1,param_1 + 4,DAT_00898158);
  if (*(int *)(*(int *)(iVar1 + 8) + 8) == 0) {
    fn_0011705c();
  }
  uVar2 = fn_0012ebb4(param_1,param_1 + 4,DAT_00898158);
  fn_00110aa8(param_1,uVar2);
  return;
}



void fn_001089c8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = DAT_00898158;
  uVar2 = fn_001287b4();
  uVar2 = fn_0012e958(*(undefined4 *)(param_1 + 0x10),uVar1,uVar2,1);
  iVar3 = fn_0012ebb4(param_1,param_1 + 4,uVar1);
  if (iVar3 == 0) {
    iVar3 = fn_00145b00(0x18,&DAT_00812c8c);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_0012ec2c(iVar3,uVar2,uVar1);
    }
    fn_0017d948(param_1 + 4,param_1 + 8,iVar3 + 0x10);
  }
  else {
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  uVar1 = DAT_00898158;
  iVar3 = fn_0012ebb4(param_1,param_1 + 4,DAT_00898158);
  if (*(int *)(*(int *)(iVar3 + 8) + 8) == 0) {
    iVar4 = fn_00148c5c(*(undefined4 *)(param_1 + 0x10),uVar1);
    uVar2 = 0;
    if (iVar4 != 0) {
      uVar2 = fn_0015a320(*(undefined4 *)(param_1 + 0x10),uVar1);
    }
    fn_001422a0(*(undefined4 *)(iVar3 + 8),uVar2);
    (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),0x3f);
  }
  uVar1 = DAT_0089815c;
  uVar2 = fn_001287b4();
  uVar2 = fn_0012e958(*(undefined4 *)(param_1 + 0x10),uVar1,uVar2,1);
  iVar3 = fn_0012ebb4(param_1,param_1 + 4,uVar1);
  if (iVar3 == 0) {
    iVar3 = fn_00145b00(0x18,&DAT_00812c8c);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_0012ec2c(iVar3,uVar2,uVar1);
    }
    fn_0017d948(param_1 + 4,param_1 + 8,iVar3 + 0x10);
  }
  else {
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 1;
  }
  uVar1 = DAT_0089815c;
  iVar3 = fn_0012ebb4(param_1,param_1 + 4,DAT_0089815c);
  if (*(int *)(*(int *)(iVar3 + 8) + 8) != 0) {
    return;
  }
  iVar4 = fn_00148c5c(*(undefined4 *)(param_1 + 0x10),uVar1);
  uVar2 = 0;
  if (iVar4 != 0) {
    uVar2 = fn_0015a320(*(undefined4 *)(param_1 + 0x10),uVar1);
  }
  fn_001422a0(*(undefined4 *)(iVar3 + 8),uVar2);
                    /* WARNING: Could not recover jumptable at 0x00108bc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(iVar3 + 8) + 0x38))(*(int **)(iVar3 + 8),0x3f);
  return;
}



void fn_00108948(void)

{
  undefined4 local_18;
  int iStack_14;
  undefined1 auStack_10 [4];
  
  fn_002feca8(DAT_00898150);
  DAT_00898150 = 0;
  iStack_14 = DAT_008cfddc;
  local_18 = *(undefined4 *)(DAT_008cfddc + 8);
  fn_0011b908(auStack_10,&DAT_008cfdcc,&local_18,&iStack_14);
  DAT_0089814c = 0;
  fn_0012d73c(DAT_00898148);
  return;
}



undefined4 fn_00108910(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00118290();
  DAT_00898148 = fn_0011c184(L"patch:/data/Parameter/EffectParam.tp",uVar1,0x80,5);
  fn_00110888();
  return 1;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 fn_001088e0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x44);
  while( true ) {
    if (puVar2 == (undefined4 *)(param_1 + 0x44)) {
      return _UndefinedInstruction;
    }
    if (puVar2[-6] == param_2) break;
    puVar2 = (undefined4 *)*puVar2;
  }
  uVar1 = fn_00108908(puVar2 + -6);
  return uVar1;
}



undefined4 * fn_00108748(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)*param_1;
  if (piVar2 != (int *)0x0) {
    if ((int *)piVar2[0x79] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[0x79] + 4))();
    }
    piVar2[0x79] = 0;
    fn_0010fee0(piVar2);
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
    *piVar2 = 0;
    fn_002feca8(piVar2[0x38]);
    piVar2[0x38] = 0;
    iVar1 = fn_00128dc4(piVar2 + 0x3a);
    iVar1 = fn_00120ec8(iVar1 + -0x18);
    if (*(int **)(iVar1 + -0x68) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + -0x68) + 0xc))();
    }
    fn_002feef8(*(undefined4 *)(iVar1 + -0x78));
    if (*(int **)(iVar1 + -0x7c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + -0x7c) + 4))();
    }
    if (*(int **)(iVar1 + -0x98) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + -0x98) + 4))();
    }
    if (*(int **)(iVar1 + -0x9c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + -0x9c) + 8))();
    }
    puVar3 = *(undefined4 **)(iVar1 + -0xb4);
    if ((puVar3 != (undefined4 *)0x0) && (*(char *)(iVar1 + -0xb0) != '\0')) {
      (**(code **)*puVar3)(puVar3);
      (**(code **)(*(int *)puVar3[1] + 0xc))((int *)puVar3[1],puVar3);
    }
    fn_002feef8(iVar1 + -0xd0);
  }
  return param_1;
}


