/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006ba55c .. 006c226c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


uint fn_006ba55c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x3f) >> 5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba680(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0xf) >> 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba6b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 3) >> 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_006ba6e0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c41e4(param_1 + 8);
  return iVar1 == 2;
}



undefined4 fn_006ba918(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_006ba9e8(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 4) == '\v') {
    uVar1 = *(undefined4 *)(param_1 + 8);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



char * fn_006baa30(int param_1)

{
  char *pcVar1;
  
  if (((*(char *)(param_1 + 4) == '\0') && (pcVar1 = *(char **)(param_1 + 8), pcVar1 != (char *)0x0)
      ) && (*pcVar1 == '\x06')) {
    pcVar1 = pcVar1 + 4;
  }
  else {
    pcVar1 = (char *)0x0;
  }
  return pcVar1;
}



bool fn_006bab48(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 4) == '\x01';
}



bool fn_006bab60(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 3) == '\x01';
}



bool fn_006bab78(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 6) == '\x01';
}



bool fn_006bab90(int param_1,int param_2)

{
  return *(char *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 2) == '\x01';
}



int fn_006bad1c(int param_1,int param_2)

{
  return *(int *)(param_1 + 100) + param_2 * 8;
}



int fn_006bb150(void)

{
  int iVar1;
  
  iVar1 = fn_00163d44(0x3c);
  if (iVar1 == 0) {
    iVar1 = 1;
    fn_00163d68(0x3c,1);
  }
  return iVar1 + -1;
}



int fn_006bc1dc(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (*(int *)(iVar1 + 0x98) == param_2) {
    iVar1 = iVar1 + 0x98;
  }
  else if (*(int *)(iVar1 + 0xb8) == param_2) {
    iVar1 = iVar1 + 0xb8;
  }
  else if (*(int *)(iVar1 + 0xd8) == param_2) {
    iVar1 = iVar1 + 0xd8;
  }
  else if (*(int *)(iVar1 + 0xf8) == param_2) {
    iVar1 = iVar1 + 0xf8;
  }
  else if (*(int *)(iVar1 + 0x118) == param_2) {
    iVar1 = iVar1 + 0x118;
  }
  else if (*(int *)(iVar1 + 0x138) == param_2) {
    iVar1 = iVar1 + 0x138;
  }
  else if (*(int *)(iVar1 + 0x158) == param_2) {
    iVar1 = iVar1 + 0x158;
  }
  else if (*(int *)(iVar1 + 0x178) == param_2) {
    iVar1 = iVar1 + 0x178;
  }
  else if (*(int *)(iVar1 + 0x198) == param_2) {
    iVar1 = iVar1 + 0x198;
  }
  else if (*(int *)(iVar1 + 0x1b8) == param_2) {
    iVar1 = iVar1 + 0x1b8;
  }
  else if (*(int *)(iVar1 + 0x1d8) == param_2) {
    iVar1 = iVar1 + 0x1d8;
  }
  else if (*(int *)(iVar1 + 0x1f8) == param_2) {
    iVar1 = iVar1 + 0x1f8;
  }
  else if (*(int *)(iVar1 + 0x218) == param_2) {
    iVar1 = iVar1 + 0x218;
  }
  else if (*(int *)(iVar1 + 0x238) == param_2) {
    iVar1 = iVar1 + 0x238;
  }
  else if (*(int *)(iVar1 + 600) == param_2) {
    iVar1 = iVar1 + 600;
  }
  else if (*(int *)(iVar1 + 0x278) == param_2) {
    iVar1 = iVar1 + 0x278;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



int fn_006bc48c(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x20 + 0x98;
}



int fn_006bcce8(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x1c;
}



void fn_006bd084(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar1 = *(undefined4 *)(param_1 + 0x28);
  uVar2 = *(undefined4 *)(param_1 + 0x2c);
  uVar3 = *(undefined4 *)(param_1 + 0x30);
  uVar4 = *(undefined4 *)(param_1 + 0x34);
  *param_2 = *(undefined4 *)(param_1 + 0x24);
  param_2[1] = uVar1;
  param_2[2] = uVar2;
  param_2[3] = uVar3;
  param_2[4] = uVar4;
  return;
}



undefined4 fn_006be54c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006ba624();
  return *(undefined4 *)(*(int *)(param_1 + 0x30) + iVar1 * 4);
}



undefined8 fn_006be9c0(int param_1)

{
  return **(undefined8 **)(param_1 + 4);
}



int fn_006bec1c(int *param_1)

{
  return *param_1 + 0x10;
}



bool fn_006becc4(int param_1)

{
  bool bVar1;
  
  bVar1 = *(int *)(param_1 + 0x28) != 0;
  if (bVar1) {
    param_1 = *(int *)(param_1 + 0x2c);
  }
  return bVar1 && param_1 != 0;
}



bool fn_006bf198(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_001a46f4((int)*(short *)(*param_1 + 0x1c));
  return iVar1 != 0;
}



void fn_006bfdb4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = *(undefined4 *)(iVar1 + 4);
  param_2[1] = *(undefined4 *)(iVar1 + 8);
  param_2[2] = *(undefined4 *)(iVar1 + 0xc);
  param_2[3] = *(undefined4 *)(iVar1 + 0x10);
  param_2[4] = *(undefined4 *)(iVar1 + 0x14);
  param_2[5] = *(undefined4 *)(iVar1 + 0x18);
  return;
}



int fn_006c0010(int *param_1)

{
  return *param_1 + 0x72;
}



int fn_006c001c(int *param_1)

{
  return *param_1 + 0xe0;
}



void fn_006c1ee0(int param_1)

{
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  fn_006bd3f8();
  return;
}



int fn_006c226c(int param_1,int param_2)

{
  return *(int *)(param_1 + 0x10) + param_2 * 8;
}

