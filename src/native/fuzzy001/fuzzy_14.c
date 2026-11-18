/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00308390 .. 0033928c.
 */
#include "decompiled.h"
#include "fuzzy_14.h"


void fn_00308390(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_00821aec;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1d] = 0;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  return;
}



void fn_00308f34(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_00822068;
  return;
}



void fn_003100dc(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005f40b4(param_1,1);
  *puVar1 = DAT_0082232c;
  return;
}



void fn_0031084c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(200,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00310a10(iVar1,param_1);
  return;
}



void fn_00312c90(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_0066eb80(DAT_00898840,0xb);
  fn_00674f6c(uVar1,DAT_008c9d50,8);
  fn_0066e70c(DAT_00898840,DAT_008c9d50,0x60);
  return;
}



void fn_00313928(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00110518();
  puVar1[0x20] = 0xffffffff;
  *puVar1 = DAT_008228c8;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x22] = 0xffffffff;
  puVar1[0x23] = 0xffffffff;
  puVar1[0x24] = 0xffffffff;
  puVar1[0x25] = 0xffffffff;
  puVar1[0x26] = 0xffffffff;
  puVar1[0x27] = 0xffffffff;
  puVar1[0x28] = 0xffffffff;
  puVar1[0x29] = 0xffffffff;
  puVar1[0x2a] = 0xffffffff;
  puVar1[0x2b] = 0xffffffff;
  puVar1[0x2c] = 0xffffffff;
  return;
}



void fn_00315ddc(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x00315dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_00316048(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_00822940;
  return;
}



void fn_00317778(void)

{
  fn_0039208c(*(undefined4 *)(DAT_00897804 + 0x68));
  return;
}



void fn_00318f74(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



void fn_00318fa4(int *param_1,undefined4 param_2)

{
  fn_002a4648(*(undefined4 *)(DAT_008977e0 + 0x2c),param_1[0x6a]);
  fn_001d9f6c(param_1,param_1[0x6a]);
  (**(code **)(*param_1 + 0x58))(param_1,1);
  fn_002113c8(param_1,param_2);
  return;
}



void fn_003191f8(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



void fn_0032115c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0032118c(iVar1,param_1);
  return;
}



void fn_00321614(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00321644(iVar1,param_1);
  return;
}



void fn_00321830(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x28,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00321860(iVar1,param_1);
  return;
}



void fn_00324568(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x144,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003252b8(iVar1,param_1);
  return;
}



void fn_00325b44(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00325b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x16c))(param_1,1,0);
  return;
}



void fn_003266c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003267d8(iVar1,param_1);
  return;
}



void fn_00326800(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00326830(iVar1,param_1);
  return;
}



void fn_00329bc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x16c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00329e64(iVar1,param_1);
  return;
}



void fn_0032cff8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_00824364;
  *(undefined1 *)(puVar1 + 0x1f) = 0xff;
  return;
}



void fn_0032d434(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_008243d0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0032d458(undefined4 *param_1)

{
  *param_1 = DAT_008243d0;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0032d6a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_0082443c;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_003358b4(undefined4 param_1,undefined1 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *(undefined1 *)((int)puVar1 + 5) = param_2;
  *puVar1 = DAT_008247d8;
  *(undefined1 *)(puVar1 + 1) = 0;
  return;
}



void fn_0033818c(undefined4 *param_1)

{
  *param_1 = DAT_00824a38;
  return;
}



bool fn_0033928c(int param_1)

{
  return *(char *)(param_1 + 0x90) == '\v';
}

