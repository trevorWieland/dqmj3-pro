/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003f81c0 .. 00411bf0.
 */
#include "decompiled.h"
#include "fuzzy_25.h"


void fn_003f81c0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003f82b0();
  *puVar1 = DAT_00835924;
  *(undefined1 *)(puVar1 + 0xd) = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  return;
}



void fn_003f847c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00835978;
  return;
}



void fn_003f84d4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0083598c;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  *(undefined1 *)(puVar1 + 7) = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



void fn_003fad58(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00835db0;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  return;
}



void fn_003fd47c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_0083675c;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1a] = uVar2;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return;
}



void fn_003fdee8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_0083686c;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  return;
}



void fn_003ff930(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c7460,1);
  *puVar1 = DAT_008370c8;
  return;
}



void fn_00400f88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_00837470;
  *(undefined1 *)(puVar1 + 5) = 1;
  puVar1[6] = 0;
  return;
}



void fn_00401010(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_00837488;
  *(undefined1 *)(puVar1 + 5) = 1;
  *(undefined1 *)((int)puVar1 + 0x15) = 0;
  return;
}



void fn_00401b70(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_008374a0;
  puVar1[0x2d] = 0;
  *(undefined1 *)(puVar1 + 0x2e) = 0;
  puVar1[0x2f] = 0;
  return;
}



void fn_00401ee4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401f7c(iVar1,param_1);
  return;
}



void fn_00401fbc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00401fec(iVar1,param_1);
  return;
}



void fn_0040428c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_004042bc(iVar1,param_1);
  return;
}



int fn_004059d8(int param_1)

{
  return (int)*(short *)(DAT_008923f4 + param_1 * 6);
}



void fn_004094a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = DAT_00837c7c;
  *(undefined1 *)(puVar1 + 1) = 0;
  *(undefined1 *)((int)puVar1 + 5) = 0;
  puVar1[2] = 0;
  return;
}



void fn_0040b268(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x238,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0040b754(iVar1,param_1);
  return;
}



void fn_0040ba04(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = DAT_00837f80;
  return;
}



void fn_0040c1fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x23);
  *puVar1 = DAT_00837fd8;
  return;
}



void fn_0040c45c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x1c);
  *puVar1 = DAT_00838000;
  return;
}



void fn_0040c488(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003d8360(param_1,param_2,0x20);
  *puVar1 = DAT_00838028;
  return;
}



void fn_0040cfcc(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,7);
  *puVar1 = DAT_00838098;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



void fn_0040d138(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xe);
  *puVar1 = DAT_008380c0;
  return;
}



void fn_004104b4(void)

{
  fn_0012d73c(DAT_00894c68);
  DAT_00894c68 = 0;
  return;
}



undefined4 fn_00410d04(void)

{
  fn_00410868();
  return 1;
}



void fn_00411914(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00411944(iVar1,param_1);
  return;
}



void fn_00411bf0(undefined4 param_1,int param_2)

{
  fn_0022f750(*(undefined4 *)(DAT_00893e40 + param_2 * 4));
  return;
}

