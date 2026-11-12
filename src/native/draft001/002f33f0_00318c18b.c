/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00305b50 .. 00318c18.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


void fn_00305b50(int param_1)

{
  fn_00243550(*(undefined4 *)(param_1 + 0x40));
  return;
}



void fn_00305bb8(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x48));
  return;
}



void fn_00306990(int param_1)

{
  fn_00190d50(*(undefined4 *)(param_1 + 0x2c));
  return;
}



undefined4 fn_00307ba8(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x20);
  }
  return uVar1;
}



void fn_003095fc(int param_1)

{
  if (*(int *)(param_1 + 0xa0) != 0) {
    fn_00151954(*(int *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4));
    *(undefined4 *)(param_1 + 0xa0) = 0;
  }
  return;
}



void fn_00309b70(undefined4 param_1,char *param_2,int param_3,int param_4,int param_5)

{
  char cVar1;
  byte bVar2;
  
  if ((param_3 != 0 && param_4 != 0) && ((param_5 != 0 || (*param_2 != param_2[1])))) {
    cVar1 = param_2[1];
    if (cVar1 == '\0') {
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe;
      *(byte *)(param_4 + 0x44) = *(byte *)(param_4 + 0x44) & 0xfe;
      return;
    }
    if (cVar1 == '\x01') {
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe | 1;
      bVar2 = *(byte *)(param_4 + 0x44) & 0xfe;
    }
    else {
      if (cVar1 != '\x02') {
        return;
      }
      *(byte *)(param_3 + 0x44) = *(byte *)(param_3 + 0x44) & 0xfe;
      bVar2 = *(byte *)(param_4 + 0x44) & 0xfe | 1;
    }
    *(byte *)(param_4 + 0x44) = bVar2;
  }
  return;
}



void fn_0030bf18(void)

{
  fn_0030bf28();
  fn_002feef8();
  return;
}



undefined4 fn_0030de48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 0x2ec + 0x138);
  if ((iVar1 == 1 || iVar1 == 3) || (iVar1 == 4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0030e6d0(int param_1,int param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + param_2 * 0x2ec + 0x138) = param_3;
  return;
}



uint fn_0030e880(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



void fn_00310754(int param_1)

{
  if (*(int *)(param_1 + 0xb4) == 0) {
    fn_002c3d68(param_1);
    *(undefined4 *)(param_1 + 0xbc) = 1;
  }
  return;
}



undefined4 fn_00311350(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_002b0b84(*param_1);
  if (iVar1 == 0) {
    iVar1 = fn_002b0b50(*param_1);
    iVar2 = fn_0011a36c(param_1 + 2);
    if (iVar1 == iVar2) {
      iVar1 = fn_002b0b78(*param_1);
      iVar2 = fn_0011a3c4(param_1 + 2);
      if (iVar1 == iVar2) {
        iVar1 = fn_002b0b2c(*param_1);
        iVar2 = fn_0011a314(param_1 + 2);
        if (iVar1 == iVar2) {
          return 0;
        }
      }
    }
  }
  return 1;
}



void fn_00318be8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}



void fn_00318bf4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x10) = param_2;
  *(int *)(param_1 + 8) = param_2 + *(int *)(param_1 + 8);
  return;
}



void fn_00318c18(int param_1,int param_2)

{
  *(int *)(param_1 + 0x1c) = param_2 + *(int *)(param_1 + 0x1c);
  return;
}

