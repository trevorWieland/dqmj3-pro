/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006d689c .. 006e6044.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined1 fn_006d689c(int param_1,uint param_2)

{
  if ((param_2 == 0) || (0xc < param_2)) {
    return 0;
  }
  return *(undefined1 *)(*(int *)(param_1 + 4) + param_2 * 0x10 + -0x10);
}



undefined4 fn_006d6c60(int param_1)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x174;
  fn_004edc34(iVar2);
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 0x14 + 0x3c) != 0) {
      fn_004edc70(iVar2);
      return 1;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 0x10);
  fn_004edc70(iVar2);
  return 0;
}



undefined4 fn_006d8a4c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = param_2[1];
  }
  if (*param_2 != 0 && iVar1 != 0) {
    for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)(param_1 + 4); piVar2 = (int *)piVar2[1])
    {
      if (piVar2 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



char fn_006d920c(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 100) == '\x01') {
    cVar1 = '\0';
  }
  else {
    if ((*(char *)(param_1 + 0x65) == '\x01') ||
       (cVar1 = *(char *)(*(int *)(param_1 + 0x30) + 0x58), cVar1 == '\0')) {
      return *(char *)(param_1 + 0x65);
    }
    if (cVar1 == '\x02') {
      cVar1 = '\x04';
    }
    else {
      cVar1 = '\x05';
    }
  }
  return cVar1;
}



uint fn_006d9268(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    uVar2 = fn_006d897c();
  }
  if (*(int *)(param_1 + 0x24) != 0) {
    uVar1 = fn_006d897c();
    uVar2 = uVar2 | uVar1;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = fn_006d897c();
    uVar2 = uVar2 | uVar1;
  }
  return uVar2;
}



undefined4 fn_006d9464(int param_1)

{
  if ((*(int *)(param_1 + 100) == 0) || (*(char *)(param_1 + 0x71) != '\x04')) {
    return 0;
  }
  return *(undefined4 *)(param_1 + (uint)(*(char *)(param_1 + 0xb5) == '\0') * 4 + 0xc4);
}



undefined1 fn_006d9598(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x02') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



undefined1 fn_006d95d0(int param_1)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0xa4) == '\x01') &&
     (cVar1 = *(char *)(param_1 + 0x90), (cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04')) {
    return 1;
  }
  return 0;
}



int fn_006d9934(int param_1)

{
  return *(int *)(param_1 + 0x104) + -0x14;
}



undefined4 fn_006da264(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d70ac(param_1 + 4,param_2 + 4);
  if ((((((iVar1 == 0) || (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14))) ||
        (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18))) ||
       ((*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c) ||
        (*(char *)(param_1 + 0x25) != *(char *)(param_2 + 0x25))))) ||
      ((*(char *)(param_1 + 0x20) != *(char *)(param_2 + 0x20) ||
       ((*(char *)(param_1 + 0x21) != *(char *)(param_2 + 0x21) ||
        (*(char *)(param_1 + 0x22) != *(char *)(param_2 + 0x22))))))) ||
     ((*(char *)(param_1 + 0x23) != *(char *)(param_2 + 0x23) ||
      ((*(char *)(param_1 + 0x24) != *(char *)(param_2 + 0x24) ||
       (*(char *)(param_1 + 0x26) != *(char *)(param_2 + 0x26))))))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



int fn_006db058(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006da104(param_1 + 4);
  iVar2 = fn_006da104(param_1 + 0x2c);
  return iVar2 + iVar1;
}



undefined4 fn_006db160(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006da264(param_1 + 4,param_2 + 4);
  if ((iVar1 == 0) || (iVar1 = fn_006da264(param_1 + 0x2c,param_2 + 0x2c), iVar1 == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_006db1a0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x58) == '\x01' || *(char *)(param_1 + 0x58) == '\x03') {
    uVar1 = *(undefined4 *)(param_1 + 0x60);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_006dbad0(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  return bVar1 && param_1 == 0;
}



uint fn_006dbaec(uint param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(param_1 + 0x20) == '\x05';
  if (bVar1) {
    param_1 = (uint)*(byte *)(param_1 + 0x52);
  }
  if (!bVar1 || param_1 != 1) {
    param_1 = 0;
  }
  return param_1;
}



undefined1 fn_006dc220(int param_1,undefined4 param_2,uint param_3)

{
  undefined1 uVar1;
  
  if (param_3 < *(byte *)(param_1 + 0x3f)) {
    uVar1 = 0;
  }
  else {
    fn_001694e4(param_2,param_1 + 0x40,(uint)*(byte *)(param_1 + 0x3f));
    uVar1 = *(undefined1 *)(param_1 + 0x3f);
  }
  return uVar1;
}



int fn_006df488(int param_1)

{
  return (uint)*(ushort *)(param_1 + 2) * 0x18;
}



int fn_006e2db4(int param_1)

{
  return param_1 + *(int *)(param_1 + 4);
}



int fn_006e381c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x1c);
}



int fn_006e3828(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x14);
}



int fn_006e395c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



int fn_006e3968(int param_1)

{
  return param_1 + *(int *)(param_1 + 0x10);
}



void fn_006e54a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  fn_0055a6ac(param_2,param_3,param_4,param_5,param_6);
  return;
}



int fn_006e5ca4(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_006e602c(int param_1)

{
  return param_1 + *(int *)(param_1 + 0xc);
}



int fn_006e6038(int param_1,int param_2)

{
  return *(int *)(param_1 + 4) + param_2;
}



int fn_006e6044(int param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)(param_1 + 0x14);
  if (param_2 < *puVar1) {
    iVar2 = (int)puVar1 + puVar1[param_2 * 2 + 2];
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

