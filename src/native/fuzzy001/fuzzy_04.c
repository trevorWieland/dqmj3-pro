/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0016ba24 .. 001c3c7c.
 */
#include "decompiled.h"
#include "fuzzy_04.h"


void fn_0016ba24(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + param_2 + 0xd4) = param_3;
  return;
}



int fn_001880b0(int param_1)

{
  return DAT_00892844 + param_1 * 0x58 + 10;
}



undefined4 * fn_00189790(undefined4 *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0x23c;
  }
  else {
    uVar1 = 0x23d;
  }
  *param_1 = 1;
  param_1[1] = uVar1 | 0xf0000;
  return param_1 + 2;
}



void fn_0018a33c(undefined4 param_1)

{
  fn_0019e9c0(DAT_008f0bc0,param_1);
  return;
}



void fn_0018b188(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  
  iVar1 = param_1 + param_2 * 4;
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  if (*(float *)(iVar1 + 0x48) != in_s0) {
    *(float *)(iVar1 + 0x48) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 8;
  }
  return;
}



void fn_0018b1c4(int param_1)

{
  float in_s0;
  
  if (in_s0 < 0.0) {
    in_s0 = 0.0;
  }
  if (*(float *)(param_1 + 0x24) != in_s0) {
    *(float *)(param_1 + 0x24) = in_s0;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) | 0x40;
  }
  return;
}



int fn_001930b8(void)

{
  if (DAT_0089a680 == 0) {
    fn_00146594();
  }
  return DAT_0089a680;
}



void fn_00193fe4(undefined4 param_1,undefined4 param_2)

{
  fn_0019eb38(&DAT_008ef56c,param_1,param_2);
  return;
}



void fn_00194358(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *param_2;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 8;
  return;
}



void fn_00194c04(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4,undefined4 param_5
                 )

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_0019bbb0(param_2);
  if (param_4 < uVar1) {
    iVar2 = fn_001a213c(param_2);
    iVar2 = fn_0019fb30(param_3,iVar2 + param_4 * 0x24);
    (**(code **)(*param_1 + 0x2c))(param_1,iVar2);
    param_1[0xc] = iVar2;
                    /* WARNING: Could not recover jumptable at 0x00194c74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x10))(param_1,param_5);
    return;
  }
  return;
}


void fn_001a3ba8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  fn_00301a9c(*param_1 + param_1[3] * 4,param_2,param_3 << 2);
  iVar1 = param_1[3];
  param_1[3] = iVar1 + param_3;
  if (iVar1 + param_3 >= param_1[1]) {
    param_1[3] = 0;
  }
  return;
}

void fn_001a4138(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  *(undefined1 *)((int)param_2 + 0x15) = 0;
  param_2[2] = 0;
  uVar1 = fn_0018b794();
  fn_001960ec(uVar1,param_2);
  *(undefined1 *)(param_2 + 5) = 0;
  if ((code *)param_2[3] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a4180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[3])(param_2,3,param_2[4]);
  return;
}



uint fn_001a7b8c(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  fn_00193374();
  iVar2 = fn_00189e18();
  if (iVar2 == 0) {
    fn_00193380();
    return 0xffffffff;
  }
  uVar1 = *(ushort *)(*(int *)(param_1 + (uint)*(ushort *)(param_1 + 0x1320) * 4 + 0x10ac) + 2);
  fn_00193380();
  return (uint)uVar1;
}



void fn_001a8294(int param_1,undefined4 param_2)

{
  fn_00301a9c(param_1 + 0x7c,param_2,0x20);
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) | 0x40;
  return;
}



void fn_001a82cc(uint *param_1)

{
  fn_001a98f8(&DAT_008ef5bc,*param_1 & 0xff);
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



undefined4 fn_001a9968(int param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *(undefined2 *)((int)puVar2 + 0xa2) = param_3;
  *puVar2 = *puVar2 | 0x10000000;
  fn_00193380();
  return 1;
}



undefined4 fn_001ac8e0(int param_1,int param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  *puVar2 = *puVar2 | 0x10;
  fn_00193380();
  return 1;
}



undefined4 fn_001adedc(int param_1)

{
  if (0xb < param_1) {
    param_1 = 0xb;
  }
  return *(undefined4 *)(DAT_007e1390 + param_1 * 4);
}



undefined4 fn_001af920(int param_1)

{
  if (5 < param_1) {
    param_1 = 5;
  }
  return *(undefined4 *)(DAT_007e1350 + param_1 * 4);
}



void fn_001afdc8(void)

{
  fn_00166824(&DAT_008bf538,DAT_007e0a74);
  return;
}



void fn_001b10e4(undefined *param_1)

{
  int iVar1;
  
  iVar1 = fn_00192114();
  if (param_1 == (undefined *)0x0) {
    param_1 = DAT_001c1130;
  }
  *(undefined **)(iVar1 + 0xdc) = param_1;
  return;
}



void fn_001bf8f4(void)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_00145b00(0x1a0,DAT_00812c8c);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_00211c48(iVar1,0x27);
    puVar2[0x67] = 0xffffffff;
    *puVar2 = DAT_007bf5f4;
  }
  return;
}



bool fn_001c2588(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = fn_00174858(DAT_008977e4);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x4c) + 0x10);
  bVar3 = *(char *)(uVar2 + 0x76) != '\x02';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x74);
  }
  return !bVar3 || uVar2 == 2;
}



void fn_001c25c0(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003ef9f0(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



undefined4 fn_001c2a7c(int param_1)

{
  return *(undefined4 *)(DAT_007ba834 + param_1 * 4);
}



void fn_001c3330(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003d1e58(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x18));
  return;
}



bool fn_001c3c7c(void)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return *(char *)(iVar1 + 0xfc) == '\x01';
}

