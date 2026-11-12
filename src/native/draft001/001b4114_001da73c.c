/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 001b4114 .. 001da73c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_001b4114(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vm_stack_at(param_1,*(int *)(param_1 + 0x34) + 1);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  iVar1 = vm_stack_at(param_1,*(undefined4 *)(param_1 + 0x34));
  fn_00665b00(*(undefined4 *)(iVar1 + 4),uVar2);
  return 0;
}



undefined4 fn_001b5300(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = vm_stack_at(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 4) + 0x24) + 0x1c) * 2 + 2;
  if (iVar1 < 0xc) {
    iVar1 = 0xc;
  }
  uVar2 = fn_0074254c(param_1,iVar1);
  fn_00742460(uVar2,param_1,0xfffffffe);
  return 1;
}



undefined4 fn_001b831c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00741850(param_1,1);
  if (iVar1 < 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_001ba40c(int param_1)

{
  vm_stack_push(param_1,param_1 + 0x38);
  return 1;
}



undefined4 fn_001ba420(void)

{
  fn_007431cc();
  return 0;
}



undefined4 fn_001ba430(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = vm_stack_at(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_007432e4(param_1);
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    vm_stack_push(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_001bafc4(int param_1)

{
  vm_stack_push(param_1,*(int *)(param_1 + 0x8c) + 0x34);
  return 1;
}



undefined4 fn_001bb180(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = vm_stack_at(param_1,*(int *)(param_1 + 0x34) + 1);
  iVar2 = fn_00743124(param_1);
  if (iVar2 < 0) {
    uVar1 = 0xffffffff;
  }
  else {
    vm_stack_push(param_1,uVar1);
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_001bc878(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0024d7ec();
  fn_001580cc(param_1,uVar1);
  return 1;
}



undefined4 fn_001bd58c(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)vm_stack_at(param_1,*(int *)(param_1 + 0x34) + 1);
  fn_00742020(param_1,*piVar1 != 0x1000001);
  return 0;
}



undefined4 fn_001bd5c8(void)

{
  fn_00743258();
  return 0;
}



undefined4 fn_001bd64c(undefined4 param_1)

{
  fn_007437c8(param_1,1);
  return 1;
}



void fn_001be988(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_0030233c();
  return;
}



undefined4 fn_001c003c(undefined4 param_1)

{
  fn_007434e8(param_1,1);
  return 1;
}



int fn_001c232c(int *param_1)

{
  return *param_1 + 0x70;
}



int fn_001c2350(int *param_1)

{
  return *param_1 + 0xf4;
}



bool fn_001c2ee0(void)

{
  int iVar1;
  
  iVar1 = fn_00145adc();
  return iVar1 != 0;
}



void fn_001c4990(int *param_1)

{
  (**(code **)(*param_1 + 300))(param_1,0);
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001da39c(param_1);
  return;
}



void fn_001c6c38(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  return;
}



undefined4 fn_001c7120(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  if ((*(char *)(param_1 + 4) == '\0') &&
     (iVar1 = param_1 + param_2 * 0x10, *(int *)(iVar1 + 0x5c) != param_3)) {
    *(int *)(iVar1 + 0x60) = param_3;
    *(undefined1 *)(param_1 + 0x5b) = 1;
    return 1;
  }
  return 0;
}



void fn_001cb820(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0016ddf0(*(undefined4 *)(param_1 + 0x5c),param_2,param_3,0);
  return;
}



void fn_001cc0e0(int *param_1,int param_2)

{
  *(int *)*param_1 = ((int *)*param_1)[2] - param_2;
  return;
}



void fn_001d2340(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 2;
  return;
}



void fn_001d4398(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 4;
  return;
}



void fn_001d4470(int param_1)

{
  fn_001d1150(param_1 + 0x148);
  *(undefined1 *)(param_1 + 4) = 3;
  return;
}



void fn_001d5f80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_001d6030(param_1);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x30);
  return;
}



void fn_001d7084(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0xf4) = *param_2;
  *(undefined4 *)(param_1 + 0xf8) = param_2[1];
  *(undefined4 *)(param_1 + 0xfc) = param_2[2];
  return;
}



void fn_001d8a20(int param_1)

{
  *(undefined1 *)(param_1 + 0xc) = 0;
  fn_001d68cc(param_1,0);
  *(undefined1 *)(param_1 + 0x15c) = 1;
  return;
}



void fn_001d9610(int param_1)

{
  fn_002feca8(*(undefined4 *)(param_1 + 0x158));
  *(undefined4 *)(param_1 + 0x158) = 0;
  return;
}



void fn_001da73c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xe4) == 0) {
    return;
  }
  if (param_2 == 0) {
    uVar1 = fn_0017fde4();
    fn_0017fcfc(uVar1,1);
    return;
  }
  uVar1 = fn_0017fde4();
  fn_0017fc28(uVar1,1);
  return;
}

