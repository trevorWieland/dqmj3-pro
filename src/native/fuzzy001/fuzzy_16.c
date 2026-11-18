/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00339850 .. 0036c5c4.
 */
#include "decompiled.h"
#include "fuzzy_16.h"


void fn_00339850(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = DAT_00824c7c;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  *(undefined1 *)((int)puVar1 + 0x91) = 0;
  return;
}



void fn_0034c6b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00825a94;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  return;
}



void fn_0034d1e8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003fedc0();
  puVar1[0x40] = 0;
  *puVar1 = DAT_00825e1c;
  return;
}



void fn_00352dc0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00352e48(iVar1,param_1);
  return;
}



void fn_003573c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x158,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00357b48(iVar1,param_1);
  return;
}



void fn_00359f2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0035a0cc();
  *puVar1 = DAT_00826a7c;
  return;
}



void fn_00359f90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0035a0cc();
  *puVar1 = DAT_00826a90;
  return;
}



void fn_0035aaac(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  short *psVar2;
  int iVar3;
  
  *(undefined4 *)(param_1 + 0xc) = param_2;
  uVar1 = fn_006f756c(DAT_008977e0);
  psVar2 = (short *)fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x10) = (int)*psVar2;
  uVar1 = fn_006f756c(DAT_008977e0);
  iVar3 = fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(int *)(param_1 + 0x14) = (int)*(short *)(iVar3 + 2);
  uVar1 = fn_006f756c(DAT_008977e0);
  iVar3 = fn_006bad1c(uVar1,*(undefined4 *)(param_1 + 0xc));
  *(uint *)(param_1 + 0x18) = (uint)*(byte *)(iVar3 + 7);
  return;
}



void fn_0035ab10(undefined4 *param_1)

{
  param_1[2] = 0xffffffff;
  *param_1 = DAT_00826af0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0xffffffff;
  param_1[5] = 0xffffffff;
  param_1[6] = 0xffffffff;
  DAT_00891214 = param_1;
  param_1[1] = 4;
  return;
}



void fn_0035d6d4(undefined4 *param_1)

{
  *param_1 = DAT_00826b40;
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7558);
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



void fn_0035e474(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 != -1) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00279ae4(uVar1,iVar2);
  }
  iVar2 = *(int *)(param_1 + 0x18);
  if (iVar2 == -1) {
    return;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  fn_00279ae4(uVar1,iVar2);
  return;
}



void fn_00361c9c(int param_1)

{
  fn_001da39c();
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a4));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1a8));
  fn_001d9f9c(param_1);
  return;
}



void fn_00361d2c(int param_1)

{
  int iVar1;
  
  fn_001db0c0();
  if (((*(char *)(param_1 + 0x19c) == '\0') || (*(char *)(param_1 + 0x19c) != '\x01')) ||
     (iVar1 = fn_006b4cd0(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0xe8)),
     iVar1 == 0)) {
    return;
  }
  *(undefined1 *)(param_1 + 0x19c) = 0;
  fn_001da39c(param_1);
  fn_001d9f6c(param_1,*(undefined4 *)(param_1 + 0x1a4));
  return;
}



void fn_00361e38(int param_1)

{
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b0));
  fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),*(undefined4 *)(param_1 + 0x1b4));
  fn_001d9f9c(param_1);
  return;
}



void fn_003623cc(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00362424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



void fn_003628bc(int *param_1)

{
  int iVar1;
  
  fn_001db0c4();
  iVar1 = param_1[0x5a];
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      iVar1 = (**(code **)(*param_1 + 0x48))(param_1);
      if (iVar1 != 0) {
        param_1[0x5a] = 2;
      }
    }
    else if (iVar1 == 2) {
      param_1[0x5a] = 3;
      (**(code **)(*param_1 + 0x58))(param_1,0);
                    /* WARNING: Could not recover jumptable at 0x00362914. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x54))(param_1,0);
      return;
    }
  }
  return;
}



void fn_00362c9c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00362d64(iVar1,param_1);
  return;
}



void fn_00369238(void)

{
  int iVar1;
  
  iVar1 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_006f7a0c(DAT_008977e0);
  fn_006c3a70(*(undefined4 *)(iVar1 + 0x30));
  return;
}



void fn_0036a860(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 0x800,param_2,0xd5c);
  return;
}



void fn_0036a874(int *param_1,undefined4 param_2)

{
  fn_0017821c(*param_1 + 0x155c,param_2,0x8e8);
  return;
}



void fn_0036a9f8(int *param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0036aa10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x34))(param_1,0,0xffffffff);
  return;
}



void fn_0036b628(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb80(*(undefined4 *)(param_1[0x2f] + 0x10));
  *(undefined4 *)(param_1[0x2f] + 0x10) = uVar1;
  fn_0036bae4(uVar1,param_1[0x29],param_1 + 0x31);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



bool fn_0036ba6c(undefined4 *param_1)

{
  int iVar1;
  
  if (param_1 == (undefined4 *)0x0) {
    return false;
  }
  iVar1 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*param_1);
  return iVar1 != 0;
}



void fn_0036c5c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0036c678(iVar1,param_1);
  return;
}

