/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006aae08 .. 006b5db4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_006aae08(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x30c) == -1;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x308);
  }
  return !bVar1 || param_1 != -1;
}



void fn_006abc14(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00154ac8(uVar2);
  return;
}



void fn_006abc8c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00144834(uVar2,param_3);
  return;
}



void fn_006abff4(int param_1)

{
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  fn_006c2968();
  return;
}



void fn_006ad250(void)

{
  short *psVar1;
  
  psVar1 = (short *)fn_002283d0();
  if (psVar1 == (short *)0x0) {
    return;
  }
  fn_002ea524((int)*psVar1);
  return;
}



void fn_006ad7c4(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00163d44(uVar2);
  return;
}



void fn_006ad81c(int param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if ((param_2 != 0) &&
     (puVar1 = (undefined4 *)fn_00176d74(*(undefined4 *)(param_1 + 0xe50)),
     puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  fn_00163d68(uVar2,param_3);
  return;
}



int fn_006ada94(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return (int)*(short *)(iVar1 + param_2 * 100 + 0xc);
}



int fn_006adab8(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return iVar1 + param_2 * 100 + 0x18;
}



int fn_006adb24(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return (int)*(short *)(iVar1 + param_2 * 100 + 0x10);
}



int fn_006adb48(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(*param_1);
  return iVar1 + param_2 * 100 + 4;
}



int fn_006afe90(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x74;
}



int fn_006b09bc(int param_1)

{
  char cVar1;
  int iVar2;
  
  if (((*(char *)(param_1 + 0x16d) != '\0') ||
      (iVar2 = fn_0013ad98((int)*(short *)(*(int *)(param_1 + 0x19c) + 2)), iVar2 == 0)) &&
     (cVar1 = *(char *)(param_1 + 0x36c), cVar1 != '\0')) {
    if (cVar1 == '\x01') {
      return (int)*(short *)(*(int *)(param_1 + 0x19c) + 6);
    }
    if (cVar1 == '\x02') {
      return (int)*(short *)(*(int *)(param_1 + 0x19c) + 8);
    }
  }
  return (int)*(short *)(*(int *)(param_1 + 0x19c) + 2);
}



undefined4 fn_006b130c(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 1) &&
     (((iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 7 ||
       (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 10)) ||
      (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 5)))) {
    return 1;
  }
  return 0;
}



int fn_006b31cc(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006b38f4(param_1[1] + 0x90);
  iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
  return iVar1 - iVar2;
}



char fn_006b389c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return '\x02';
    }
    if (cVar1 == '\x02') {
      return param_1[1];
    }
  }
  return '\0';
}



char fn_006b38c8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return '\0';
    }
    if (cVar1 == '\x02') {
      return param_1[2];
    }
  }
  return '\x02';
}



int fn_006b3e10(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 9);
  if (cVar1 == '\x02') {
    param_1 = 1;
  }
  else {
    if (cVar1 == '\0') {
      param_1 = *(int *)(param_1 + 0xa8);
    }
    if (cVar1 != '\0' || param_1 != 1) {
      param_1 = 0;
    }
  }
  return param_1;
}



int fn_006b3e34(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b38f4(param_1 + 0x90);
  return iVar1 - *(int *)(param_1 + 0xa8);
}



uint fn_006b4cf4(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_00692ec8(param_2);
  return uVar1 ^ 1;
}



int fn_006b519c(int param_1)

{
  return *(int *)(param_1 + 4) + 4;
}



int fn_006b5288(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + 0x50c);
}



int fn_006b5298(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x84 + 0x30;
}



undefined2 fn_006b52b0(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x50e);
}



undefined4 fn_006b53cc(uint param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 6);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 7);
  }
  if (bVar2 && cVar1 == '\0') {
    bVar2 = *(char *)(param_1 + 5) != '\x04';
    if (bVar2) {
      param_1 = (uint)*(byte *)(param_1 + 8);
    }
    if (!bVar2 || param_1 == 5) {
      return 1;
    }
  }
  return 0;
}



int fn_006b5640(int *param_1)

{
  return *(int *)(*param_1 + 0x28) - *(int *)(*param_1 + 0x24) >> 2;
}



bool fn_006b5db4(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0;
}

