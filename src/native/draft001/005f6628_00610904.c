/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 005f6628 .. 00610904.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_005f6628(int param_1)

{
  int iVar1;
  
  iVar1 = fn_005f6c60(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  return iVar1 != 0;
}



void fn_005f81b8(undefined4 param_1)

{
  fn_005ab930();
  fn_005f84a0(param_1);
  fn_005f7f10(param_1);
  return;
}



void fn_005fbc24(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x14d) == '\0') {
    *(undefined1 *)(param_1 + 0x13c) = param_2;
    *(undefined1 *)(param_1 + 0x14d) = 1;
  }
  return;
}



void fn_005fc96c(int param_1,int param_2)

{
  *(char *)(param_1 + 0xb00) = (char)param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xb02) = 0;
  }
  return;
}



void fn_005fc980(int param_1,int param_2)

{
  *(char *)(param_1 + 0xb01) = (char)param_2;
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0xb03) = 0;
  }
  return;
}



bool fn_005fe888(int param_1,int param_2)

{
  return *(float *)(param_1 + 0x188) < *(float *)(param_2 + 0x188);
}



bool fn_005fed78(int param_1,int param_2)

{
  return *(float *)(param_1 + 0x18) < *(float *)(param_2 + 0x18);
}



undefined4 fn_00600174(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(*(int *)(param_1 + 0x18) + 0x1c) == '\0') &&
     (iVar1 = fn_00163868((int)*(short *)(param_1 + 0x10) + (int)*(short *)(param_1 + 0x12)),
     *(short *)(param_1 + 0x10) <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_0060165c(int param_1,undefined4 param_2)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_0017821c(param_1 + 0xc,param_2,0x104);
  return;
}



void fn_00601b0c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined1 *)(param_1 + 0x14) = 1;
  return;
}



void fn_00601b1c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x18) * 4) = param_2;
  return;
}



void fn_00604740(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 8) = 0;
  fn_0017821c(param_1 + 0xc,param_2,0x104);
  *(undefined4 *)(param_1 + 0x128) = param_3;
  return;
}



void fn_00604dc8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x20) < 0x14) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + *(int *)(param_1 + 0x20) * 4) = param_2;
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  return;
}



int fn_00607778(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = fn_006c4224(*(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10));
  if (iVar1 == 0) {
    return 0;
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return 1;
    }
    bVar2 = iVar1 == 4;
    if (bVar2) {
      iVar1 = 2;
    }
    if (bVar2 || iVar1 == 3) {
      return iVar1;
    }
    if (iVar1 == 7) {
      return 4;
    }
    if (iVar1 == 5 || iVar1 == 6) {
      return iVar1;
    }
    if (iVar1 == 8) {
      return 7;
    }
    if (iVar1 == 9) {
      return 8;
    }
  }
  return 0;
}



bool fn_00608ea8(int param_1,int param_2,int param_3)

{
  return *(float *)(*(int *)(param_1 + param_2 * 0x10 + 0xc) + 4) == *(float *)(param_3 + 4);
}



void fn_0060a1c4(undefined4 param_1)

{
  fn_005ab930();
  fn_00609ad8(param_1);
  fn_0060a098(param_1);
  return;
}



bool fn_0060b950(int param_1,int param_2)

{
  return *(short *)(param_1 + 8) < *(short *)(param_2 + 8);
}



bool fn_00610598(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab5c(param_3);
  return iVar1 <= iVar2;
}



bool fn_006105c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cabf0(param_3);
  return iVar1 <= iVar2;
}



bool fn_006105e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa68(param_3);
  return iVar1 <= iVar2;
}



bool fn_006106f8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa04(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610720(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf0c(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610748(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae40(param_3);
  return iVar1 <= iVar2;
}



bool fn_0061083c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab80(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610864(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caef8(param_3);
  return iVar1 <= iVar2;
}



bool fn_0061088c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac88(param_3);
  return iVar1 <= iVar2;
}



bool fn_006108b4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cab18(param_3);
  return iVar1 <= iVar2;
}



bool fn_006108dc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad54(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610904(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cacc0(param_3);
  return iVar1 <= iVar2;
}

