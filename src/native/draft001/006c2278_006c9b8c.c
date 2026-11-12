/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006c2278 .. 006c9b8c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


int fn_006c2278(int param_1)

{
  return *(int *)(param_1 + 0x14) - *(int *)(param_1 + 0x10) >> 3;
}



undefined4 fn_006c234c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(char *)(param_1 + 0x88) != '\0') {
    uVar1 = *(undefined4 *)(param_1 + 0x84);
  }
  return uVar1;
}



int fn_006c2578(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 0x54;
}



undefined4 fn_006c328c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_2 == 0) || (param_2 < 0x800)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_006c3970(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(param_1 + param_2 * 0xe + param_3 * 4 + 0x2c);
}



int fn_006c3ab0(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x3d8 + 0x50;
}



void fn_006c3acc(int *param_1,int param_2,undefined4 param_3)

{
  memory_copy(param_3,param_2 * 0x3d8 + 0x50 + *param_1,0x3d8);
  return;
}



int fn_006c3b40(int *param_1)

{
  return *param_1 + 0x800;
}



int fn_006c3b4c(int *param_1)

{
  return *param_1 + 0x155c;
}



void fn_006c3bc0(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  *param_2 = *(undefined2 *)(param_1 + 0x544);
  *param_3 = *(undefined2 *)(param_1 + 0x546);
  return;
}



int fn_006c3c44(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (*(int *)(param_1 + 0x4c) == iVar1) {
    iVar1 = 0;
  }
  return iVar1;
}



char fn_006c40c8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01' || cVar1 == '\x02') {
      return '\x01';
    }
    if (cVar1 != '\x03') {
      if (cVar1 == '\x04') {
        return '\x01';
      }
      if (cVar1 != '\x05') {
        return param_1[2];
      }
    }
  }
  return '\0';
}



char fn_006c410c(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[0xc];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



char fn_006c4120(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 == '\0') {
    return '\x02';
  }
  if (cVar1 != '\x01') {
    if (cVar1 == '\x02') {
      return '\0';
    }
    if (cVar1 == '\x03') {
      return '\x02';
    }
    if (cVar1 != '\x04' && cVar1 != '\x05') {
      return param_1[7];
    }
  }
  return '\x01';
}



char fn_006c4168(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[0x10];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



char fn_006c4720(char *param_1)

{
  char cVar1;
  
  if (*param_1 == '\x06') {
    cVar1 = param_1[9];
  }
  else {
    cVar1 = '\0';
  }
  return cVar1;
}



int fn_006c4a7c(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2 * 0x10 + 8;
}



bool fn_006c4f9c(void)

{
  int iVar1;
  
  iVar1 = fn_006ba4ec();
  return iVar1 < 2;
}



int fn_006c5114(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 0x18;
}



bool fn_006c55ec(uint *param_1)

{
  return (*param_1 & 0x80000001) == 1;
}



undefined1 fn_006c5d50(int param_1)

{
  undefined1 uVar1;
  
  if (*(char *)(param_1 + 0x80) == '\x05' || *(char *)(param_1 + 0x80) == '\x06') {
    uVar1 = *(undefined1 *)(param_1 + 0x7e);
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x7d);
  }
  return uVar1;
}



bool fn_006c73fc(int param_1)

{
  return *(int *)(param_1 + 0x1a0) != -1;
}



bool fn_006c76f8(int param_1)

{
  return *(int *)(param_1 + 0xc) != -1;
}



bool fn_006c7840(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 0xc));
  return iVar1 == 1;
}



int fn_006c78cc(int param_1,int param_2)

{
  return *(int *)(param_1 + 8) + param_2 * 4;
}



int fn_006c78d8(int param_1)

{
  return *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
}



int fn_006c832c(undefined4 param_1,int param_2)

{
  return *(int *)(*(int *)(param_2 + 0x10) + 4) + 8;
}



undefined2 fn_006c8a14(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  return *(undefined2 *)(iVar1 + 0xc);
}



int fn_006c8a2c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  return (int)*(short *)(iVar1 + 8);
}



void fn_006c8ac0(void)

{
  int iVar1;
  
  iVar1 = fn_006c9754();
  fn_00176dc0(iVar1 + 8);
  return;
}



int fn_006c9504(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 0x24) + param_2 * 0x40);
}



int fn_006c9b8c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 8));
  return (int)*(short *)(iVar1 + 2);
}

