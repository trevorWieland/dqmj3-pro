/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 004966a4 .. 004a5f6c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_004966a4(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  fn_00170fa4(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



int fn_004a0db0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_0046b240();
  if ((iVar1 != 0) && (*(char *)(param_1 + 0x98) == '\0')) {
    fn_0047ef28(param_1,param_1 + 0x9c);
    iVar2 = fn_0015ecdc(0xb0);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_0047e0b0();
    }
    iVar2 = fn_00482100(param_1,piVar3);
    if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    iVar2 = fn_0015ecdc(0x70);
    if (iVar2 == 0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)fn_00124930();
    }
    iVar2 = fn_00482100(param_1,piVar3);
    if ((iVar2 == 0) && (piVar3 != (int *)0x0)) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(undefined1 *)(param_1 + 0x98) = 1;
  }
  return iVar1;
}



int fn_004a1a28(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  fn_0079dd48(param_1 + 8,param_2 + 8);
  return param_1;
}



int fn_004a2190(int param_1,int param_2)

{
  fn_00473520();
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  fn_00170fa4(param_1 + 0x38,param_2 + 0x38);
  fn_0079dd48(param_1 + 0x40,param_2 + 0x40);
  fn_0079c5b8(param_1 + 0x4c,param_2 + 0x4c);
  fn_0014f510(param_1 + 0x58,param_2 + 0x58);
  fn_0014f510(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  return param_1;
}



void fn_004a29d0(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x3c) + 8))
            (*(int **)(param_1 + 0x3c),param_1 + 0x58,*(undefined4 *)(param_1 + 0x40),
             *(undefined4 *)(param_1 + 0x84));
  if (*(char *)(param_1 + 0x6c) == '\0') {
    fn_004b2f04(param_1);
    return;
  }
  fn_004b2e68(param_1,*(undefined4 *)(param_1 + 0x74));
  return;
}



void fn_004a5f6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  fn_004a6238();
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}

