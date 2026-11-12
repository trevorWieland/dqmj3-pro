/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00505cc4 .. 005210b0.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined1 fn_00505cc4(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x9c) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x88), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



void fn_00509204(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



void fn_00509218(int param_1)

{
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0xc) = 0;
  return;
}



undefined4 fn_0050a29c(int param_1)

{
  if (*(int *)(param_1 + 0xd4) != 0) {
    *(int *)(param_1 + 0x10c) = param_1 + 0xc;
  }
  return *(undefined4 *)(param_1 + 0x10c);
}



void fn_0050a62c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



void fn_0050a718(int param_1)

{
  fn_004edc34(param_1 + 0x340);
  fn_00513f10(param_1);
  fn_004edc70(param_1 + 0x340);
  return;
}



void fn_0050a998(int param_1)

{
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  return;
}



void fn_0050aef0(int param_1,uint param_2)

{
  if (param_2 <= *(uint *)(param_1 + 0x2c)) {
    *(uint *)(param_1 + 0x34) = param_2;
  }
  return;
}



int fn_0050b144(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 0x3c);
  if ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2) {
    do {
      iVar1 = fn_006d70ac(*piVar2 + 4,param_2);
      if (iVar1 != 0) {
        return *piVar2;
      }
      piVar2 = piVar2 + 1;
    } while ((int *)(param_1 + *(int *)(param_1 + 0x38) * 4 + 0x3c) != piVar2);
  }
  return 0;
}



void fn_0050be34(undefined4 *param_1)

{
  *param_1 = 1000;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



undefined4 fn_0050c67c(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 0;
}



void fn_0050d060(int param_1)

{
  fn_004ed810(param_1 + 4);
  return;
}



void fn_0050d090(int param_1,int param_2)

{
  fn_004ed810(param_1 + 4,param_2 + 4);
  *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(param_1 + 0x22) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(param_1 + 0x25) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(param_1 + 0x23) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(param_1 + 0x24) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x26) = *(undefined1 *)(param_2 + 0x26);
  return;
}



void fn_0050eee8(int param_1)

{
  fn_00518378();
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



void fn_00512f30(undefined4 *param_1)

{
  *(undefined2 *)(param_1 + 7) = 500;
  *(undefined2 *)((int)param_1 + 0x1e) = 0x90;
  *(undefined1 *)(param_1 + 10) = 0xfd;
  *(undefined1 *)((int)param_1 + 0x29) = 5;
  *(undefined1 *)((int)param_1 + 0x2a) = 0xff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)((int)param_1 + 0x2b) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  return;
}



void fn_00513d48(int param_1)

{
  if (*(char *)(param_1 + 0x118) != '\0') {
    *(undefined1 *)(param_1 + 0x118) = 0;
  }
  return;
}



void fn_005147b4(int *param_1)

{
  (**(code **)(*param_1 + 0x14))(param_1);
  if (param_1[6] != 0) {
    fn_004ecfd0();
    param_1[6] = 0;
  }
  if (param_1[5] != 0) {
    fn_00656b7c();
    param_1[5] = 0;
  }
  return;
}



void fn_00514c1c(int param_1)

{
  fn_00518378();
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



undefined4 fn_00515738(int param_1)

{
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return 0;
}



void fn_00516cc8(undefined4 *param_1)

{
  param_1[1] = 0;
  fn_004ed714(param_1 + 3);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  return;
}



int fn_00516db8(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  iVar1 = fn_0014f590(param_1 + 0xc);
  return iVar1 + -0xc;
}



void fn_00516df8(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  fn_001694e4(*(int *)(param_1 + 0x1c) + param_3 + 0x14,param_2,param_4);
  return;
}



void fn_00516e0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined1 param_6)

{
  int iVar1;
  
  iVar1 = param_1 + *(int *)(param_1 + 200) * 0x10;
  *(undefined4 *)(iVar1 + 0x18) = param_2;
  *(undefined4 *)(iVar1 + 0x1c) = param_3;
  *(undefined4 *)(iVar1 + 0x20) = param_4;
  *(undefined1 *)(iVar1 + 0x24) = param_5;
  *(undefined1 *)(iVar1 + 0x25) = param_6;
  *(int *)(param_1 + 200) = *(int *)(param_1 + 200) + 1;
  return;
}



void fn_00516e40(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *param_1 = param_3;
  param_1[3] = *param_2;
  *(undefined1 *)(param_1 + 5) = param_4;
  *(undefined1 *)((int)param_1 + 0x15) = param_5;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  param_1[0x32] = 0;
  return;
}



void fn_00517020(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = param_3;
  return;
}



void fn_0051f718(int param_1,undefined4 param_2,undefined2 param_3,undefined4 param_4)

{
  fn_001694e4(param_1 + 0xc,param_2,0xfc);
  fn_001694e4(param_1,param_4,6);
  *(undefined2 *)(param_1 + 6) = param_3;
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}



int fn_00520e30(int param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 < *(ushort *)(param_1 + 4)) {
    iVar1 = param_1 + param_2 * 8 + 0xc;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



undefined4 fn_005210b0(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != 0) {
    param_4 = *(int *)(param_1 + 0x10);
  }
  if ((iVar2 != 0 && param_4 != 0) && (param_2 < *(ushort *)(param_1 + 4))) {
    uVar1 = *(undefined4 *)(iVar2 + param_2 * 4);
  }
  else {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

