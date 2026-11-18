/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003952bc .. 003c2c88.
 */
#include "decompiled.h"
#include "fuzzy_20.h"


void fn_003952bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0082b7dc;
  puVar1[3] = 0;
  return;
}



void fn_0039532c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0082b7f0;
  *(undefined1 *)(puVar1 + 2) = 0;
  return;
}



void fn_0039571c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0082b838;
  return;
}



void fn_003960cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005c21cc();
  *puVar1 = DAT_0082b890;
  return;
}



void fn_00399738(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00416e5c();
  puVar1[0x37] = 0;
  *puVar1 = DAT_0082c2e8;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  return;
}



void fn_0039e3e0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_00893ae0,1);
  *puVar1 = DAT_0082cedc;
  return;
}



void fn_003a0be4(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_0082d69c;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_003abb70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ac02c(iVar1,param_1);
  return;
}



void fn_003ad8f8(undefined4 param_1)

{
  fn_003ad5b0(param_1,1);
  return;
}



void fn_003ae8b0(undefined4 param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x3e9);
  fn_001d9f9c(param_1);
  return;
}



void fn_003aedd4(undefined4 param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x11d2a);
  fn_001d9f9c(param_1);
  return;
}



void fn_003af0cc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003af118(iVar1,param_1);
  return;
}



void fn_003af8a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003afc00(iVar1,param_1);
  return;
}



void fn_003b078c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b0f3c(iVar1,param_1);
  return;
}



void fn_003b1644(int *param_1)

{
  fn_00215cb4(param_1[5],param_1 + 0x19,param_1[0x18]);
  if (*(byte *)(param_1 + 0x19) < 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x003b167c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x2c))(param_1,6);
  return;
}



void fn_003b59fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,2);
  *puVar1 = DAT_0082ea70;
  return;
}



void fn_003b674c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}



void fn_003b7014(int param_1)

{
  fn_00301f50(param_1 + 0x10,0x3cc);
  fn_00301f50(param_1 + 0x3dc,0x1e60);
  return;
}



undefined4 fn_003b8054(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_003b7f00(param_1,L"rom:/data/Menu/Env/mnenv000.bch");
  if (param_2 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



void fn_003b884c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b8be8(iVar1,param_1);
  return;
}



void fn_003b9ccc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b9cfc(iVar1,param_1);
  return;
}



void fn_003bab90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003bb9c4(iVar1,param_1);
  return;
}



void fn_003bd084(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003bd438(iVar1,param_1);
  return;
}



void fn_003bf5d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003bf7e8(iVar1,param_1);
  return;
}



void fn_003c0ec8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c0fcc(iVar1,param_1);
  return;
}



void fn_003c15bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x200,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c1708(iVar1,param_1);
  return;
}



void fn_003c2c88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x17c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c310c(iVar1,param_1);
  return;
}

