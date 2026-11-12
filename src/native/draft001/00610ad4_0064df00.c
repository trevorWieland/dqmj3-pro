/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00610ad4 .. 0064df00.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_00610ad4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac54(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610b34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,1,0xffffffff);
  return iVar1 <= iVar2;
}



bool fn_00610b64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad18(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae20(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,0,2);
  return iVar1 <= iVar2;
}



bool fn_00610c64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac20(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c8c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf74(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610cb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad7c(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610cdc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad68(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610d04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae80(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,0,1);
  return iVar1 <= iVar2;
}



bool fn_00610e9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa18(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610ec4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf88(param_3);
  return iVar1 <= iVar2;
}



int fn_00610eec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006cb074(param_3);
  if (param_1 != 0x91) {
    if (((iVar1 == 0) || (iVar1 = fn_006cb054(param_3), iVar1 == 0)) ||
       (iVar2 = fn_006a7ab8(param_1), iVar2 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



bool fn_00610f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cb040(param_3);
  return iVar1 <= iVar2;
}



int fn_00610f64(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006cb0bc(param_3);
  if (param_1 != 0x97) {
    if (((iVar1 == 0) || (iVar1 = fn_006cb09c(param_3), iVar1 == 0)) ||
       (iVar2 = fn_006a7ab8(param_1), iVar2 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



bool fn_006113f4(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}



bool fn_0061140c(int *param_1,int *param_2)

{
  return *param_1 < *param_2;
}



bool fn_00611424(int param_1,int param_2)

{
  return *(float *)(param_1 + 0x10) < *(float *)(param_2 + 0x10);
}



void fn_00615e18(int param_1,ushort *param_2)

{
  *(ushort *)(param_1 + 4) = *param_2 & 0x7fff;
  *(byte *)(param_1 + 1) = (byte)(*param_2 >> 0xf);
  *(ushort *)(param_1 + 6) = param_2[1];
  *(ushort *)(param_1 + 8) = param_2[2];
  *(ushort *)(param_1 + 10) = param_2[3];
  *(ushort *)(param_1 + 0xc) = param_2[4];
  *(ushort *)(param_1 + 0xe) = param_2[5];
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 6);
  return;
}



void fn_00615ecc(undefined4 param_1)

{
  fn_00107aac();
  fn_0010d9d4(param_1);
  return;
}



void fn_00616834(undefined4 *param_1)

{
  (**(code **)*param_1)(param_1);
  fn_0019d680(param_1,0xa8);
  return;
}



int fn_0061dcc4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0x14;
  iVar1 = fn_006f4850(param_2 + 0xe8);
  if (iVar1 != 0) {
    iVar2 = 10;
  }
  return param_1 * iVar2 + 100;
}



undefined4 fn_0061fc60(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0061be08();
  if ((iVar1 == 0) && (iVar1 = fn_00145adc(param_2 + 0xe8), iVar1 != 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006228ac(int param_1)

{
  return param_1 + *(int *)(param_1 + 4) * 0x1a0 + 0x2088;
}



bool fn_0063ad98(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 0xc;
  if (*pbVar1 == 1) {
    param_1 = (byte *)(uint)*param_1;
  }
  return *pbVar1 == 1 && param_1 == (byte *)0x0;
}



int fn_0064d48c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f2fa8(param_2);
  return iVar1 + *(short *)(param_2 + 0x1c) * 2;
}



uint fn_0064d55c(short *param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = fn_006f44fc(param_2,(int)*param_1);
  return uVar1 ^ 1;
}



int fn_0064df00(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006f4044(param_2);
  return iVar1 + *(short *)(param_2 + 0x1e) * 2;
}

