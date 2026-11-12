/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0020e628 .. 00219448.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0020e628(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,4,param_2);
  return;
}



void fn_0020fd10(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,2,param_2);
  return;
}



void fn_00210174(undefined4 param_1,undefined4 param_2)

{
  fn_005fe134(param_1,3,param_2);
  return;
}



void fn_002171d4(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 400) = param_3;
  return;
}



void fn_00218100(int *param_1)

{
  (**(code **)(*param_1 + 0xe0))(param_1,0);
  param_1[0xe7] = param_1[0xe7] | 0x200;
  fn_00214594(param_1);
  fn_00216824(param_1);
  fn_001d9fcc(param_1);
  param_1[0xe7] = param_1[0xe7] | 1;
  return;
}



void fn_00219400(int param_1,undefined4 param_2)

{
  *(char *)(param_1 + 0x68e) = (char)param_2;
  if (*(int *)(param_1 + 0x10) != -1) {
    fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x10),param_2);
  }
  if (*(int *)(param_1 + 0x14) == -1) {
    return;
  }
  fn_00178eec(*(undefined4 *)(param_1 + 4),*(int *)(param_1 + 0x14),param_2);
  return;
}



void fn_00219448(int param_1)

{
  fn_0021b74c(param_1,*(int *)(param_1 + 0x68) + 0x1c,param_1 + 0x13c,0);
  *(undefined4 *)(param_1 + 0x138) = 1;
  return;
}

