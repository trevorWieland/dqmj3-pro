/* Byte-exact functions drafted from the Ghidra decompilation corpus.
 *
 * Each function below was decompiled from the original image, mechanically
 * rewritten to compile (see work/drafter/README.md), compiled with the measured
 * original compiler profile (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork
 * --c99 -O3 -Otime) and kept only because its placed bytes equal the original
 * extent byte for byte. Nothing here is fitted: a single differing byte would
 * have kept the function out of this file.
 *
 * Address range of this file's functions: 006f6564 .. 006f7a5c.
 * Decompiler pseudo-types are explained in decompiled.h; every name the
 * functions call or address is declared in symbols.h.
 */

#include "decompiled.h"
#include "symbols.h"


bool fn_006f6564(int param_1)

{
  return *(int *)(param_1 + 0x2f8) != -1;
}



int fn_006f6e30(int *param_1,int param_2)

{
  return *param_1 + param_2 * 0x44;
}



undefined4 fn_006f6fc4(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (*(char *)(*param_1 + 4) != '\x03')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006f6fe8(int *param_1)

{
  undefined4 uVar1;
  
  if ((*param_1 == 0) || (*(char *)(*param_1 + 4) != '\x02')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



undefined4 fn_006f72a0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x68) * 4);
}



undefined4 fn_006f72b4(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x84) * 4);
}



undefined4 fn_006f72c8(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x60) * 4) + 8);
}



undefined4 fn_006f72e0(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x88) * 4);
}



undefined4 fn_006f7388(int param_1)

{
  return *(undefined4 *)
          (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4) + 0x40);
}



undefined4 fn_006f74f4(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x6c) * 4);
}



undefined4 fn_006f7508(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 100) * 4);
}



undefined4 fn_006f751c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0xa0) * 4);
}



undefined4 fn_006f756c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x90) * 4);
}



undefined4 fn_006f75ac(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x8c) * 4);
}



undefined4 fn_006f7624(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x98) * 4);
}



undefined4 fn_006f7984(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x74) * 4);
}



undefined4 fn_006f7a0c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4);
}



undefined4 fn_006f7a48(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x80) * 4);
}



undefined4 fn_006f7a5c(int param_1)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x78) * 4);
}

