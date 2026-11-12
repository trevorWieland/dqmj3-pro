/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ca394 .. 006d6880.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"



int fn_006ca394(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
}



bool fn_006cbb1c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_0065fd34(*(undefined4 *)(param_1 + 0x1a0),*(undefined4 *)(param_2 + 0x164),0);
  return iVar1 != 0;
}



bool fn_006ccba8(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 0xb4) + 0x10) + param_2 * 0x104) == '\x05';
}



undefined4 fn_006ccbd8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(byte *)(param_1 + 4) == 0) || (3 < *(byte *)(param_1 + 4))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006cd5cc(int param_1)

{
  return *(short *)(param_1 + 0x130) == 3;
}



bool fn_006cd5e4(int param_1)

{
  return *(short *)(param_1 + 0x130) == 1;
}



void fn_006cd5f8(int param_1,undefined2 *param_2)

{
  param_2[3] = *(undefined2 *)(param_1 + 0x134);
  param_2[2] = *(undefined2 *)(param_1 + 0x136);
  param_2[1] = *(undefined2 *)(param_1 + 0x138);
  *param_2 = *(undefined2 *)(param_1 + 0x13a);
  return;
}



void fn_006cd620(int param_1,uint *param_2,undefined4 *param_3)

{
  *param_2 = (uint)*(ushort *)(param_1 + 0x132);
  *param_3 = 1;
  return;
}



bool fn_006cd64c(int param_1)

{
  return *(short *)(param_1 + 0x130) != 0;
}



int fn_006cd6fc(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x188;
  }
  else {
    param_1 = param_1 + 0x144c;
  }
  return param_1;
}



bool fn_006cd71c(int param_1)

{
  return *(short *)(param_1 + 0x130) == 2;
}



undefined4 fn_006d000c(int param_1,undefined4 param_2,uint param_3)

{
  if (*(uint *)(param_1 + 0x134) < param_3) {
    param_3 = *(uint *)(param_1 + 0x134);
  }
  if (*(int *)(param_1 + 0x138) != 0) {
    memory_copy_unaligned(param_2,*(int *)(param_1 + 0x138),param_3);
  }
  return *(undefined4 *)(param_1 + 0x134);
}



void fn_006d00f4(undefined4 param_1,undefined4 param_2)

{
  memory_copy_unaligned(param_2,param_1,0x70);
  return;
}



void fn_006d0170(undefined4 param_1,undefined4 param_2)

{
  material_word_pair_assign(param_2,param_1);
  return;
}



uint fn_006d0c7c(int param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8);
  return uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18;
}



int fn_006d1124(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 4) >> 1;
}



undefined4 fn_006d12a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((*(char *)(param_1 + 0xc) != '\0') || (iVar1 = *(int *)(param_1 + 8), iVar1 == 0)) ||
     (param_2 == 0)) {
    return 0;
  }
  if (param_2 == 10) {
    uVar2 = *(undefined4 *)(iVar1 + 0x28);
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x2c);
  }
  return uVar2;
}



undefined4 fn_006d12d8(void)

{
  int iVar1;
  
  iVar1 = fn_0045c8f4();
  return *(undefined4 *)(iVar1 + 0xc);
}



bool fn_006d19b8(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x94);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  return iVar2 != 0 && cVar1 != '\x05';
}



bool fn_006d1a20(int param_1)

{
  char cVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x9c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  return iVar2 != 0 && cVar1 != '\x05';
}



undefined4 fn_006d1a94(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x2c) + 4) + 8);
  }
  return uVar1;
}



undefined4 fn_006d2790(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0x44) - *(int *)(param_1 + 0x40) >> 2)) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 0x40) + param_2 * 4);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006d370c(int param_1)

{
  return *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc);
}



bool fn_006d3b74(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



int fn_006d3b8c(int *param_1)

{
  return (*param_1 >> 0x1f) + 1;
}



undefined8 fn_006d3e5c(undefined8 *param_1)

{
  return *param_1;
}



/* flag_mask_includes -- 0x006d3ef4, 20 bytes, ARM, 50 call sites, byte-identical.
 *
 * True when every bit set in `flags` is set in the mask word at self+0x2c.
 */
bool flag_mask_includes(int self,uint flags)

{
  return (flags & ~*(uint *)(self + 0x2c)) == 0;
}



int fn_006d45c4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x65c);
  iVar1 = *(int *)(param_1 + 0x678) + (param_3 - *(int *)(param_1 + 0x668));
  if (iVar1 < 0) {
    iVar1 = iVar1 + iVar2;
  }
  else if (iVar2 <= iVar1) {
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}



undefined4 fn_006d53d8(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x14) + 0x1240);
}



undefined4 fn_006d6594(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(ushort *)(param_1 + 0x42) == param_2) {
    uVar1 = 0;
  }
  else if (param_2 == 1) {
    uVar1 = 1;
  }
  else {
    uVar1 = 2;
  }
  return uVar1;
}



bool fn_006d67e4(int param_1)

{
  return *(int *)(*(int *)(param_1 + 0x1200) + 0x40) != 0;
}



bool fn_006d6880(uint param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0xe);
  if (uVar1 != 0xff) {
    param_1 = (uint)*(byte *)(param_1 + 0xf);
  }
  return uVar1 != 0xff && uVar1 != param_1;
}

