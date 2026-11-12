/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 0042ec28 .. 00460d68.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_0042ec28(int param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_00301a9c(param_1 + 0x2a0,param_2,0x34);
  return;
}



void fn_0042ec40(int param_1,int param_2,undefined2 *param_3,int *param_4,undefined1 *param_5)

{
  param_1 = param_1 + param_2 * 0x20;
  *param_3 = *(undefined2 *)(param_1 + 0x6c);
  *param_4 = param_1 + 0x6e;
  *param_5 = (char)((*(byte *)(param_1 + 0x8b) & 3) >> 1);
  return;
}



void fn_0042f204(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x905) = param_2;
  *(undefined1 *)(param_1 + 0x8f4) = 1;
  return;
}



undefined4 fn_004319a0(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_003801dc();
  fn_004318ac(param_1);
  return uVar1;
}



void fn_004339a4(int param_1)

{
  if (*(char *)(param_1 + 0xe5) == '\0') {
    fn_004318ac(param_1);
    fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),1);
    return;
  }
  fn_0068b14c(*(undefined4 *)(param_1 + 0x118),0);
  fn_0068b14c(*(undefined4 *)(param_1 + 0x11c),0);
  return;
}



void fn_00438af8(undefined4 param_1)

{
  fn_00438b90();
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_0043f0a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = param_3;
  iVar1 = fn_00749eb4(param_1,0);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
  return;
}



undefined4 fn_004424c4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006aff38(*(undefined4 *)(param_1 + 0x14),0);
  if ((iVar1 == 0) && (iVar1 = fn_006b1300(*(undefined4 *)(param_1 + 0x14),0), iVar1 == 0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00442598(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar3 = 0;
  iVar5 = *(int *)(*(int *)(param_1 + 0x14) + 0x170);
  iVar4 = *(int *)(iVar5 + 0x100);
  if (0 < iVar4) {
    do {
      iVar1 = fn_006bb544(iVar5,iVar3);
      if (*(int *)(param_1 + 0x14) != iVar1) {
        uVar2 = *(uint *)(iVar1 + 0x19c);
        bVar6 = *(short *)(uVar2 + 0x5e) != 0x14;
        if (bVar6) {
          uVar2 = (uint)*(ushort *)(uVar2 + 0x66);
        }
        if (bVar6 && uVar2 != 0x14) {
          fn_00683320(iVar1,3,0);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar4);
  }
  return;
}



void fn_0044409c(undefined4 param_1)

{
  fn_00158f6c(param_1,0x80);
  return;
}



bool fn_00444418(int param_1)

{
  return *(char *)(param_1 + 0x104) == '\r';
}



bool fn_0044442c(int param_1)

{
  return *(char *)(param_1 + 0x104) == '\f';
}



void fn_00445154(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_002febd8(param_2);
  fn_001782b8(param_1 + 0x14,param_2,iVar1 + 1);
  return;
}



void fn_0044517c(int param_1)

{
  fn_0037cb88(*(undefined4 *)(param_1 + 0x10));
  return;
}



void fn_00445654(int param_1)

{
  fn_0056a4bc();
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



void fn_00449ed0(int param_1)

{
  fn_003979d0();
  *(undefined4 *)(param_1 + 0xe8) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  return;
}



void fn_0044a864(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x15c) = param_2;
  *(undefined4 *)(param_1 + 0x160) = 0;
  return;
}



void fn_0044ab60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_002b1588(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0xc));
  if (*(char *)(param_1 + 0x10) == '\x01' || *(char *)(param_1 + 0x10) == '\x02') {
    fn_0069e464(uVar1,0xb,0);
    return;
  }
  return;
}



void fn_0044ede8(int *param_1,int param_2)

{
  *param_1 = param_2;
  if ((uint *)param_1[3] != (uint *)0x0) {
    *(uint *)param_1[3] = (uint)(param_2 - param_1[2]) >> 3;
  }
  param_1[1] = *param_1;
  param_1[3] = 0;
  param_1[2] = *param_1;
  param_1[4] = 0;
  return;
}



uint fn_00450018(uint param_1,uint param_2)

{
  return param_2 | (param_1 & 0xff0fffff) << 8;
}



int fn_004539a8(int param_1)

{
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  fn_0045388c(param_1);
  return param_1;
}



undefined4 fn_00455cd8(undefined4 param_1,int param_2)

{
  fn_0015e9d8(param_1,*(undefined4 *)(param_2 + 4));
  return param_1;
}



void fn_004569e8(int param_1,uint param_2)

{
  *(uint *)(param_1 + 8) =
       param_2 << 0x18 | (param_2 >> 8 & 0xff) << 0x10 | (param_2 >> 0x10 & 0xff) << 8 |
       param_2 >> 0x18;
  return;
}



void fn_00456a1c(int param_1,uint param_2)

{
  *(ushort *)(param_1 + 6) = (ushort)((param_2 & 0xff) << 8) | (ushort)(param_2 >> 8) & 0xff;
  return;
}



void fn_0045b5a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  fn_00494ebc(uVar2,param_2,param_3,param_4);
  return;
}



void fn_0045fb80(int param_1)

{
  fn_00170fa4(param_1 + 4);
  return;
}



void fn_00460d68(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x26c) == '\0') {
    if (param_3 == 0) {
      *(int *)(param_1 + 0xc0) = param_2;
    }
    else {
      fn_00460e38(param_1);
    }
    if (param_2 != 2) {
      *(char *)(param_1 + 0x14a) = (char)param_2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  return;
}

