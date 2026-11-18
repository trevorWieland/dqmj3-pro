/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 001c38bc .. 001f1e48.
 */
#include "decompiled.h"
#include "fuzzy_05.h"


void fn_001c38bc(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0033928c(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x20));
  return;
}



void fn_001c38e0(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_00339254(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x20));
  return;
}



void fn_001c6d58(int param_1)

{
  fn_00696764(DAT_008977e0,*(undefined4 *)(param_1 + 0x34));
  fn_00698fb8(DAT_008977e0,1);
  return;
}



void fn_001c7d8c(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x15) = 0;
  uVar1 = fn_006b6244(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 8) = uVar1;
  return;
}



void fn_001c7e78(undefined4 *param_1)

{
  param_1[4] = 0;
  *param_1 = DAT_0081bb5c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)((int)param_1 + 0x15) = 0;
  return;
}



void fn_001caa80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00660458();
  puVar1[0x33] = 0;
  puVar1[0x32] = 1;
  *puVar1 = DAT_0081bbdc;
  puVar1[0x34] = 0;
  *(undefined1 *)(puVar1 + 0x35) = 1;
  *(undefined1 *)((int)puVar1 + 0xd5) = 0;
  puVar1[0x36] = 0;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  return;
}



void fn_001cf55c(undefined4 param_1)

{
  DAT_00898898 = param_1;
  return;
}



void fn_001da0b0(int param_1,int param_2)

{
  if ((param_2 == 0) || (*(float *)(param_1 + 0xf8) == 0.0)) {
    *(uint *)(param_1 + 0x138) = *(uint *)(param_1 + 0x138) & 0xffffffef | param_2 << 4;
  }
  return;
}



void fn_001daac0(int param_1)

{
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e640(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0xe8),0);
  *(undefined4 *)(param_1 + 0xe8) = 0xffffffff;
  return;
}



bool fn_001e2420(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a48(DAT_008977e0);
  return *(char *)(iVar1 + 4) == '\x04';
}



void fn_001e5690(void)

{
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80f3);
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80f4);
                    /* WARNING: Could not recover jumptable at 0x001e56e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0x10))(*(int **)(DAT_008977e0 + 0x2c),0x80e9);
  return;
}



void fn_001e6b44(undefined4 param_1)

{
  fn_001ea890(param_1,9);
  fn_00698fb8(DAT_008977e0,1);
  return;
}



void fn_001ebfa0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  *(undefined4 *)(*(int *)(iVar1 + 0x30) + 0x90) = param_2;
  return;
}



void fn_001ebfc4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_0026f904(*(int *)(iVar1 + 0x44),param_2);
  return;
}



void fn_001ec030(void)

{
  fn_00241f00(*(undefined4 *)(DAT_00897804 + 0x18));
  return;
}



void fn_001ec044(int param_1)

{
  fn_00694b14(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001ec0b8(int param_1)

{
  fn_006f75ac(DAT_008977e0);
  fn_0016b40c();
  *(undefined1 *)(param_1 + 0xf90) = 1;
  return;
}



void fn_001ec3dc(void)

{
  fn_002e2c68(*(undefined4 *)(DAT_00897804 + 0x20));
  return;
}



void fn_001f04a8(undefined4 param_1,uint param_2)

{
  if (param_2 < 6) {
    fn_0025b21c(*(undefined4 *)(DAT_00897804 + 8));
    return;
  }
  return;
}



void fn_001f05cc(int param_1)

{
  fn_006962dc(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f05f0(void)

{
  fn_006f7a70(DAT_008977e0);
  fn_002fee00();
  return;
}



void fn_001f063c(void)

{
  fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
  return;
}



void fn_001f1234(void)

{
  fn_002b0b18(*(undefined4 *)(DAT_00897804 + 100));
  return;
}



void fn_001f154c(void)

{
  fn_006f75ac(DAT_008977e0);
  fn_0038fef0();
  return;
}



void fn_001f16ac(void)

{
  fn_002426c8(*(undefined4 *)(DAT_00897804 + 0x1c),0xffffffff);
  return;
}



void fn_001f16c4(void)

{
  fn_002e2df0(*(undefined4 *)(DAT_00897804 + 0x20));
  return;
}



void fn_001f1864(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c));
  *(undefined4 *)(param_1 + 0xe5c) = uVar1;
  return;
}



void fn_001f1a90(void)

{
  fn_001296e8(DAT_00898840);
  fn_005f3c7c(0);
  return;
}



bool fn_001f1ac4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006b62fc(*(undefined4 *)(DAT_00897804 + 8));
  return param_2 <= iVar1;
}



void fn_001f1b38(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_00219400(uVar1,param_2);
  return;
}



void fn_001f1b5c(void)

{
  fn_006f7a5c(DAT_008977e0);
  fn_001d8a20();
  return;
}



void fn_001f1e48(int param_1)

{
  fn_00697af8(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}

