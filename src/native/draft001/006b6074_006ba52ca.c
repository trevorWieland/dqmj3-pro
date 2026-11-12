/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006b6074 .. 006b86c4.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_006b6074(int param_1,uint param_2)

{
  return ((uint)*(byte *)(param_1 + 0xc) & 1 << (param_2 & 0xff)) != 0;
}



int fn_006b6164(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c7290(*(undefined4 *)(param_1 + 0xc));
  return iVar1 + 4;
}



int fn_006b6204(int param_1)

{
  return *(int *)(param_1 + 4) + 0x34;
}



int fn_006b621c(int param_1)

{
  return *(int *)(param_1 + 4) + 100;
}



undefined8 fn_006b6228(int param_1)

{
  return *(undefined8 *)(*(int *)(param_1 + 4) + 0x278);
}



int fn_006b62fc(int param_1)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + 0x274);
}



undefined2 fn_006b6474(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x276);
}



undefined2 fn_006b6494(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x26a);
}



int fn_006b64a4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x26c;
}



bool fn_006b6574(int param_1)

{
  return *(int *)(param_1 + 4) != 0;
}



bool fn_006b6724(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x58) != '\0';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x5a);
  }
  return bVar1 && param_1 != 0;
}



int fn_006b6740(int *param_1)

{
  return *(int *)(*param_1 + 0x68) - *(int *)(*param_1 + 100) >> 2;
}



int fn_006b6c88(int *param_1)

{
  return *(int *)(*param_1 + 0x50) - *(int *)(*param_1 + 0x4c) >> 2;
}



int fn_006b6e94(int *param_1)

{
  return *(int *)(*param_1 + 0x44) - *(int *)(*param_1 + 0x40) >> 2;
}



int fn_006b724c(int *param_1)

{
  return *param_1 + 0x40;
}



void fn_006b7664(int param_1,int param_2)

{
  fn_00145ac0(*(undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14));
  return;
}



int fn_006b8328(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = 1;
  do {
    iVar1 = fn_0028bcb0((int)(short)uVar2);
    if ((iVar1 != 0) && (iVar1 = fn_006a7ae8(uVar2 & 0xff), iVar1 == param_2)) {
      iVar3 = iVar3 + 1;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0xf8);
  return iVar3;
}



int fn_006b86c4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x24;
}

