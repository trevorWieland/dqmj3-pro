/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0064e7ac .. 0065cfc8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_0064e7ac(undefined4 param_1,int param_2)

{
  return *(short *)(param_2 + 0x280) != 0;
}



int fn_0064fb64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006f4044(param_2);
  iVar2 = fn_006f4520(param_2);
  return iVar1 + iVar2 * 2;
}



int fn_0064fb88(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00176dc0(param_2);
  iVar2 = fn_006f2fa8(param_2);
  return iVar1 - iVar2;
}



int fn_0064fbac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00176e70(param_2);
  iVar2 = fn_006f2fa8(param_2);
  return iVar1 - iVar2;
}



bool fn_0064fea0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f1838(*param_1,(int)*(short *)(param_1 + 1),param_1[2],param_2);
  return iVar1 != 0;
}



bool fn_006506c8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00620708(param_3,*(undefined4 *)(*param_1 + 8));
  return *(short *)(param_2 + 0x1c) <= iVar1;
}



int fn_006507bc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00620b48(param_3,*(undefined4 *)(*param_1 + 8),1);
  if (*(char *)(*(int *)(*param_1 + 8) + 1) == '\x01') {
    iVar1 = -iVar1;
  }
  return iVar1;
}



bool fn_00651144(int param_1,int param_2)

{
  return *(short *)(param_2 + 0x280) == *(short *)(param_1 + 4);
}



void fn_00654ecc(int param_1)

{
  fn_001801a4();
  *(undefined1 *)(param_1 + 0x67) = 0;
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}



int fn_00654ee8(void)

{
  int iVar1;
  
  iVar1 = fn_0069ccc0();
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_00655d48(int param_1)

{
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



void fn_00655d8c(int param_1)

{
  if (*(int *)(param_1 + 0x6c) < *(int *)(param_1 + 0x68) + -1) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + 1;
  }
  return;
}



void fn_00656270(int param_1)

{
  if (0 < *(int *)(param_1 + 0x18)) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x14) = 0;
  }
  return;
}



void fn_00656490(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 5;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_006564a8(int param_1,undefined2 param_2,undefined1 param_3,undefined2 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 2;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  *(undefined2 *)(param_1 + 0xe) = param_4;
  return;
}



void fn_006564c0(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined1 *)(param_1 + 5) = param_3;
  *(undefined1 *)(param_1 + 4) = 3;
  *(undefined1 *)(param_1 + 6) = param_4;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_006564d8(int param_1,undefined2 param_2)

{
  *(undefined1 *)(param_1 + 4) = 4;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 0xc) = param_2;
  return;
}



void fn_00656774(int *param_1)

{
  int iVar1;
  
  fn_00158768(param_1 + 1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *param_1 = 0;
  }
  return;
}



void fn_006568c4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void fn_00656aec(undefined4 *param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (param_3 != 0)) {
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  return;
}



void fn_00656bb8(int param_1)

{
  fn_00170704(param_1 + 0x10);
  return;
}



void fn_00656ca4(int param_1)

{
  fn_001707b4(param_1 + 0x10);
  return;
}



void fn_00658e20(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_1 = (int)param_2;
  param_2[1] = (int)param_1;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
  }
  return;
}



void fn_00658e3c(int *param_1)

{
  if (*param_1 != 0) {
    *(int *)(*param_1 + 4) = param_1[1];
  }
  if ((int *)param_1[1] != (int *)0x0) {
    *(int *)param_1[1] = *param_1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



void fn_00659498(int param_1)

{
  fn_003956e0();
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  fn_00127adc(param_1 + 0x14);
  return;
}



void fn_0065b4ac(int param_1)

{
  fn_00210fdc();
  if ((*(char *)(param_1 + 0x19c) == '\x01') && (*(int *)(param_1 + 0x1b4) < 0x1e)) {
    fn_001da030(param_1,0);
    return;
  }
  return;
}



undefined4 fn_0065bebc(short *param_1,short *param_2)

{
  if ((*param_1 < *param_2) || ((*param_1 <= *param_2 && (param_1[1] < param_2[1])))) {
    return 1;
  }
  return 0;
}



bool fn_0065c2e8(short *param_1,short *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0066173c((int)*param_1);
  iVar2 = fn_0066173c((int)*param_2);
  return iVar1 < iVar2;
}



bool fn_0065cfa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00661058();
  iVar2 = fn_00661058(param_2);
  return iVar1 < iVar2;
}



bool fn_0065cfc8(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00660ff8();
  iVar2 = fn_00660ff8(param_2);
  return iVar1 < iVar2;
}

