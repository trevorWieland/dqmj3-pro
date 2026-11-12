/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 00319a0c .. 003492a8.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


undefined4 fn_00319a0c(int param_1)

{
  if (*(char *)(param_1 + 0x11) == '\0') {
    *(undefined1 *)(param_1 + 0x11) = 1;
    fn_002b06b8(*(undefined4 *)(param_1 + 4));
  }
  return 1;
}



undefined4 fn_00319a78(void)

{
  fn_00319a94();
  return 1;
}



void fn_0031a8d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  return;
}



void fn_0031a914(int param_1,undefined2 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined2 *)(*(int *)(param_1 + 4) + 0x10) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x12) = param_3;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x13) = param_4;
  return;
}



void fn_0031a964(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x14c))(param_1);
  if (iVar1 != 0) {
    param_1[0x2c] = 1;
  }
  return;
}



void fn_0031b554(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0x8c) = *param_2;
  do {
    local_10 = *(undefined4 *)(param_1 + 0x8c);
    fn_00688d44(*(undefined4 *)(*(int *)(param_1 + 0x24) + iVar1 * 4),&local_10);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x10);
  return;
}



void fn_0031e148(int param_1)

{
  fn_0025e4dc(*(undefined4 *)(param_1 + 0x30));
  return;
}



void fn_003212dc(int param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x38) = param_4;
  return;
}



void fn_00321584(int param_1,undefined1 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 0x3d) = param_2;
  *(undefined1 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = param_3;
  return;
}



void fn_0032453c(int param_1)

{
  fn_0036e15c();
  fn_006899f4(param_1,0xcd,0,1);
  *(undefined4 *)(param_1 + 0xd8) = 0x1f;
  return;
}



void fn_00327970(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x3c);
  if (param_2 == 0) {
    param_3 = *(int *)(param_1 + 0x38);
  }
  if (param_2 == 0 && param_3 == iVar1) {
    return;
  }
  *(byte *)(*(int *)(param_1 + 0x48) + 0x44) =
       *(int *)(param_1 + 0x70) != iVar1 | *(byte *)(*(int *)(param_1 + 0x48) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) =
       *(int *)(param_1 + 0x6c) != iVar1 | *(byte *)(*(int *)(param_1 + 0x4c) + 0x44) & 0xfe;
  if (((*(int *)(param_1 + 0x70) == iVar1) && (iVar2 = *(int *)(param_1 + 0x74), iVar2 != 0)) ||
     ((*(int *)(param_1 + 0x6c) == iVar1 && (iVar2 = *(int *)(param_1 + 0x78), iVar2 != 0)))) {
    fn_00190d50(*(undefined4 *)(param_1 + 0x44),iVar2);
    return;
  }
  fn_00688c04(*(undefined4 *)(param_1 + 0x44),iVar1,0);
  return;
}



void fn_00328874(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x58) = 0;
  fn_0036c5f4(*param_1,param_2,1,0,1,1,0,0,1);
  *(undefined1 *)(*param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)(*param_1 + 0x51) = 1;
  return;
}



void fn_00328a30(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 0;
  return;
}



void fn_003297d4(undefined4 param_1)

{
  fn_0039e5ac();
  fn_002c4100(param_1);
  return;
}



void fn_00329ea4(int param_1)

{
  fn_002c4100();
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



void fn_00338948(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x6c) != 0) {
      fn_003d0fe4();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}



void fn_00338974(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + uVar1 * 4 + 0x6c) != 0) {
      fn_003d1a10();
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 4);
  return;
}



uint fn_00338bd4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 1;
  uVar2 = 0;
  do {
    if (*(int *)(param_1 + uVar2 * 4 + 0x6c) != 0) {
      uVar1 = fn_003d11f8();
      uVar3 = uVar3 & uVar1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 4);
  return uVar3;
}



void fn_003398b0(undefined2 *param_1,undefined2 *param_2,undefined1 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *(undefined2 *)((int)param_2 + 3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_2 + 5);
  *(undefined1 *)(param_1 + 3) = *param_3;
  *(undefined1 *)((int)param_1 + 7) = param_3[1];
  return;
}



void fn_003399ac(undefined4 *param_1,undefined1 *param_2)

{
  *param_1 = *(undefined4 *)(param_2 + 4);
  param_1[1] = *(undefined4 *)(param_2 + 8);
  param_1[2] = *(undefined4 *)(param_2 + 0x10);
  param_1[3] = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 4) = *param_2;
  *(undefined1 *)((int)param_1 + 0x11) = param_2[0xc];
  return;
}



void fn_003399fc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  return;
}



undefined4 fn_0033b410(int param_1)

{
  fn_002caccc();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return 0;
}



void fn_0033eb30(int *param_1)

{
  (**(code **)(*param_1 + 0x54))(param_1,0);
  fn_001d9fcc(param_1);
  return;
}



void fn_0033f7f8(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x3c) == 0) || (fn_00341c04(), param_2 == 0)) {
    return;
  }
  fn_00688bf4(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(param_1 + 0x2c));
  return;
}



void fn_00340474(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2 + *(int *)(param_1 + 0x38);
  return;
}



void fn_003410ec(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + param_2 + 0x53) = param_3;
  return;
}



int fn_0034514c(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_1 != 0) {
    iVar1 = (int)(short)param_1 * (int)(short)param_1 * 0x14;
  }
  return iVar1;
}



undefined1 fn_003492a8(int param_1)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x18) = 0;
  return uVar1;
}

