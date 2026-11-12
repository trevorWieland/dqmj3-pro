/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00579d50 .. 005b73e8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00579d50(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(short *)(param_1 + 4) = (short)param_2;
  }
  return;
}



void fn_00579d5c(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(short *)(param_1 + 6) = (short)param_2;
  }
  return;
}



void fn_0057a084(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 9) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void fn_0057ac08(int param_1)

{
  fn_0057a784();
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x10c) = 2;
  return;
}



int fn_0057dcdc(int param_1)

{
  return *(int *)(param_1 + 8) + 0x90;
}



bool fn_00580fac(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0xa4) & 1 << (param_2 & 0xff)) != 0;
}



void fn_00581008(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002febd8(param_2);
  fn_001782b8(param_1 + 0x58,param_2,iVar1 + 1);
  return;
}



void fn_00581540(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0xcc));
  *(undefined1 *)(param_1 + 0xdc) = 0;
  return;
}



void fn_005831b0(undefined4 param_1)

{
  fn_00583248();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_00583fec(int param_1)

{
  fn_0039536c();
  *(undefined1 *)(param_1 + 0x14) = 1;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



void fn_0058408c(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  return;
}



void fn_0058453c(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



void fn_005849d4(int param_1)

{
  fn_005848d4();
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}



void fn_00587ad4(int param_1)

{
  fn_002feca8(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



int fn_00587af0(int param_1)

{
  return *(int *)(param_1 + 0xc) * 0x28;
}



undefined4 fn_0059ce34(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  fn_0040f564(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c),1);
  iVar1 = fn_0077f7d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x100) + 0x3c) + 4),1);
  if (iVar1 != 0) {
    iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
    if (iVar1 == 0) {
      uVar2 = 1;
      *(undefined4 *)(param_1 + 0x118) = 0;
    }
    else {
      iVar1 = fn_0040f628(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x3c));
      if (iVar1 == 1) {
        *(undefined4 *)(param_1 + 0x118) = 1;
        uVar2 = 1;
        *(undefined4 *)(param_1 + 0x11c) = 1;
      }
    }
  }
  return uVar2;
}



void fn_005a17d4(int *param_1)

{
  (**(code **)(*param_1 + 0x110))(param_1,7,1,0,1);
  return;
}



void fn_005a2f10(int param_1)

{
  fn_002d66fc(*(undefined4 *)(param_1 + 0x18));
  return;
}



void fn_005a2f18(int param_1)

{
  fn_002d6810(*(undefined4 *)(param_1 + 0x18));
  fn_002d691c(*(undefined4 *)(param_1 + 0x18));
  return;
}



void fn_005a7090(int param_1)

{
  *(byte *)(*(int *)(param_1 + 0x88) + 0x44) = *(byte *)(*(int *)(param_1 + 0x88) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) = *(byte *)(*(int *)(param_1 + 0x8c) + 0x44) & 0xfe;
  return;
}



void fn_005a9ce0(void)

{
  fn_005aa084();
  fn_002feef8();
  return;
}



void fn_005aa074(void)

{
  fn_005aa084();
  fn_002feef8();
  return;
}



void fn_005aa9bc(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0xc))(param_1);
  param_1[2] = param_2;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}



void fn_005aaa54(int param_1)

{
  fn_003956e0();
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  return;
}



int fn_005ab500(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba284();
  return iVar1 * 9 + param_2;
}



uint fn_005ab530(int param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_2 == 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x44);
  }
  else if (param_2 == 1) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0xe4) + 0x48);
  }
  else if (param_2 == 2) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xe4) + 0x4c);
  }
  else if (param_2 == 3) {
    uVar1 = (uint)*(byte *)(*(int *)(param_1 + 0xe4) + 0x4d);
  }
  return uVar1;
}



void fn_005aeb68(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xc) = param_2;
  *(undefined1 *)(param_1 + 8) = 0;
  return;
}



void fn_005aebc0(undefined4 param_1)

{
  fn_005ca640();
  fn_0022ccb4(param_1);
  return;
}



void fn_005b46b0(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x19) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  return;
}



void fn_005b4758(int param_1)

{
  fn_0039536c();
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  return;
}



void fn_005b73e8(int param_1,int param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + param_2 * 4 + 0x66) = *param_3;
  return;
}

