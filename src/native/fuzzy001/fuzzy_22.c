/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003c4280 .. 003ecf08.
 */
#include "decompiled.h"
#include "fuzzy_22.h"


void fn_003c4280(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e734c();
  puVar1[0x40] = 0;
  *puVar1 = DAT_00830124;
  return;
}



void fn_003c4988(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_00830288;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  return;
}



void fn_003c4b98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = DAT_00830398;
  puVar1[0x1a] = 0;
  *(undefined1 *)(puVar1 + 0x1b) = 0;
  return;
}



void fn_003c6f10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_008305bc;
  return;
}



void fn_003c70f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e6a94();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00830704;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  return;
}



void fn_003cc224(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_00830be4;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_003d918c(int param_1)

{
  fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
                    /* WARNING: Could not recover jumptable at 0x003d91b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 0x188))(*(int **)(param_1 + 0x14),0);
  return;
}



void fn_003d9470(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  puVar1[0x16] = 0;
  *puVar1 = DAT_00831a68;
  return;
}



void fn_003d9728(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x25);
  *puVar1 = DAT_00831a90;
  return;
}



void fn_003d9d88(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = DAT_00831ae0;
  if (param_3 == (byte *)0x0) {
    uVar2 = 0x15;
  }
  else {
    uVar2 = (uint)*param_3;
  }
  puVar1[0x16] = uVar2;
  return;
}



void fn_003da164(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,4);
  *puVar1 = DAT_00831b08;
  return;
}



void fn_003db8d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = DAT_00831b30;
  return;
}



void fn_003dd740(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003dd7a8(iVar1,param_1);
  return;
}



void fn_003dd7e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003dd810(iVar1,param_1);
  return;
}



void fn_003df748(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x19c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e0780(iVar1,param_1);
  return;
}



void fn_003e0d24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e0d78(iVar1,param_1);
  return;
}



void fn_003e0d98(undefined4 *param_1)

{
  *param_1 = DAT_00832288;
  fn_0022ccb4(param_1);
  fn_0039b600(param_1);
  fn_002feef8();
  return;
}



void fn_003e1a28(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e208c(iVar1,param_1);
  return;
}



void fn_003e2510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e26e8(iVar1,param_1);
  return;
}



void fn_003e3218(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e36e8(iVar1,param_1);
  return;
}



void fn_003e6898(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e68c8(iVar1,param_1);
  return;
}



void fn_003e7588(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e783c(iVar1,param_1);
  return;
}



void fn_003e7e08(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x168,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e8044(iVar1,param_1);
  return;
}



void fn_003e7fd8(int *param_1)

{
  int iVar1;
  
  fn_002c4304();
  if (param_1[0x57] == 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      fn_0044a864(param_1,2);
      return;
    }
  }
  else if ((param_1[0x57] == 1) && (iVar1 = fn_006f6a6c(param_1), iVar1 == 1)) {
                    /* WARNING: Could not recover jumptable at 0x003e8018. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x110))(param_1);
    return;
  }
  return;
}



void fn_003e84b8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003e8754(iVar1,param_1);
  return;
}



void fn_003ecf08(int param_1)

{
  fn_0066e620(DAT_00897850,0);
  fn_0042f204(*(undefined4 *)(param_1 + 200),0);
  fn_00760954(param_1);
  return;
}

