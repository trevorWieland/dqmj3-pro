/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00387104 .. 003aa4ec.
 */
#include "decompiled.h"
#include "fuzzy_19.h"


void fn_00387104(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c73fc,1);
  *puVar1 = DAT_0082a100;
  return;
}



void fn_00387168(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_00893af0,1);
  *puVar1 = DAT_0082a218;
  return;
}



void fn_003871cc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c747c,1);
  *puVar1 = DAT_0082a330;
  return;
}



void fn_00388a80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003e208c();
  *puVar1 = DAT_0082a6a8;
  return;
}



void fn_0038feb4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = DAT_0082af58;
  puVar1[0x2d] = 0;
  return;
}



void fn_0039525c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004111d0();
  puVar1[0x34] = 0;
  *puVar1 = DAT_0082b67c;
  return;
}



void fn_0039528c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003952bc(iVar1,param_1);
  return;
}



void fn_003952fc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039532c(iVar1,param_1);
  return;
}



void fn_00395380(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003953b0(iVar1,param_1);
  return;
}



void fn_003956ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039571c(iVar1,param_1);
  return;
}



void fn_00395ffc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xcc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003960cc(iVar1,param_1);
  return;
}



int fn_00397a0c(void)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = DAT_0082bdd0;
  iVar2 = fn_0059e280(puVar1 + 0x2c);
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  *(undefined4 *)(iVar2 + 0x24) = 0;
  *(undefined4 *)(iVar2 + 0x28) = 1;
  *(undefined4 *)(iVar2 + 0x2c) = 0;
  *(undefined1 *)(iVar2 + 0x30) = 0;
  *(undefined1 *)(iVar2 + 0x31) = 0;
  return iVar2 + -0xb0;
}



void fn_00397a78(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_0082bdd0;
  iVar1 = fn_0059e2ac(param_1 + 0x2c);
  fn_002c471c(iVar1 + -0xb0);
  return;
}



void fn_003995c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00399738(iVar1,param_1);
  return;
}



void fn_00399dc8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039a1d8(iVar1,param_1);
  return;
}



void fn_0039a0fc(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2c] + 0x10));
  *(undefined4 *)(param_1[0x2c] + 0x10) = uVar1;
  (**(code **)(*param_1 + 0x13c))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_0039a13c(int *param_1)

{
  fn_0036bae4(*(undefined4 *)(param_1[0x2c] + 0x10),param_1[0x29],param_1 + 0x2e);
                    /* WARNING: Could not recover jumptable at 0x0039a168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x124))(param_1);
  return;
}



void fn_0039d284(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if (((uVar1 & 0x14f000f) != 0) && (*(char *)(*(int *)(param_1 + 100) + 8) == '\x01')) {
    *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 0;
  }
  return;
}



void fn_0039d308(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = DAT_0082cb74;
  return;
}



void fn_0039e3b0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039e3e0(iVar1,param_1);
  return;
}



void fn_003a066c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x78,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0710(iVar1,param_1);
  return;
}



void fn_003a0bb0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0be4(iVar1,param_1);
  return;
}



void fn_003a0c24(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x80,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a0fb8(iVar1,param_1);
  return;
}



void fn_003a1538(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(200,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a1aec(iVar1,param_1);
  return;
}



void fn_003a1f68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003a1f98(iVar1,param_1);
  return;
}



void fn_003aa4ec(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x84,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003aa8bc(iVar1,param_1);
  return;
}

