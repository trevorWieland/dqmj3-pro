/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003dd7a8 .. 004058e4.
 */
#include "decompiled.h"
#include "fuzzy_23.h"


void fn_003dd7a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  puVar1[7] = 0;
  *puVar1 = DAT_00831dac;
  *(undefined1 *)(puVar1 + 8) = 0;
  *(undefined1 *)((int)puVar1 + 0x21) = 0;
  return;
}



void fn_003dd810(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = DAT_00831dc0;
  return;
}



void fn_003e0d78(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b5d8();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00832288;
  return;
}



void fn_003e36e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_00832b38;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  return;
}



void fn_003e68c8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c7474,1);
  *puVar1 = DAT_00833248;
  return;
}



void fn_003e783c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_008334c4;
  *(undefined1 *)(puVar1 + 0x3a) = 0;
  return;
}



void fn_003e8044(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0044aa1c();
  puVar1[0x59] = 0;
  *puVar1 = DAT_0083360c;
  return;
}



void fn_003e8754(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_0083374c;
  return;
}



void fn_003ebb38(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ebc7c(iVar1,param_1);
  return;
}



void fn_003ed3ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066e3bc(DAT_00898840);
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 4) = 1;
  fn_003dcc90(*(undefined4 *)(*(int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x3c) + 4) + 8));
  return;
}



void fn_003ed4ac(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    (**(code **)(*param_1 + 0x10))(param_1);
    if (param_1[1] == 0) {
                    /* WARNING: Could not recover jumptable at 0x003ed510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 8))(param_1);
      return;
    }
    if (param_1[1] == 1) {
                    /* WARNING: Could not recover jumptable at 0x003ed4fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x14))(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_003ef408(int param_1)

{
  undefined4 uVar1;
  
  if (((*(char *)(param_1 + 0x88) == '\0') && (*(float *)(*(int *)(param_1 + 0x68) + 0x24) == 0.0))
     && (*(float *)(*(int *)(param_1 + 0x6c) + 0x24) == 0.0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_003ef888(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = DAT_00834594;
  *(undefined1 *)(puVar1 + 0x22) = 0;
  *(undefined1 *)((int)puVar1 + 0x89) = 1;
  puVar1[0x23] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return;
}



void fn_003ef9f0(int param_1)

{
  *(undefined1 *)(param_1 + 0x76) = 1;
  return;
}



void fn_003f01b4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f01e4(iVar1,param_1);
  return;
}



void fn_003f09ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f0ccc(iVar1,param_1);
  return;
}



void fn_003f2510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f2aa4(iVar1,param_1);
  return;
}



void fn_003f2ae4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,3);
  *puVar1 = DAT_00834e20;
  return;
}



void fn_003f2f54(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003432cc();
  puVar1[5] = 0xffffffff;
  *puVar1 = DAT_00834e54;
  return;
}



void fn_003f3398(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,2);
  *puVar1 = DAT_00834e7c;
  return;
}



void fn_003f4634(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = DAT_00834eb4;
  return;
}



void fn_003f4738(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0040e3f0();
  *puVar1 = DAT_00834fa4;
  return;
}



void fn_003f4f48(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00318bc4(param_1,1);
  *puVar1 = DAT_0083504c;
  return;
}



void fn_003f5178(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00318bc4(param_1,0);
  *puVar1 = DAT_00835088;
  return;
}



void fn_003f6bb4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003f6e28(iVar1,param_1);
  return;
}



void fn_003f728c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00749ddc();
  *puVar1 = DAT_008357a0;
  return;
}



undefined1 fn_004058e4(int param_1)

{
  return *(undefined1 *)(DAT_008923f4 + param_1 * 6 + 4);
}

