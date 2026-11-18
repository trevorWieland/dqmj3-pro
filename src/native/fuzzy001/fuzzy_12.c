/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 002defa8 .. 002f61d0.
 */
#include "decompiled.h"
#include "fuzzy_12.h"


void fn_002defa8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003632b0();
  *puVar1 = DAT_008206b4;
  *(undefined1 *)((int)puVar1 + 0xfd) = 0;
  puVar1[0x40] = 0;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  return;
}



void fn_002e29fc(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined4 *)(iVar1 + 0x88) = 0;
  *(undefined4 *)(iVar1 + 0x8c) = 0;
  *(undefined4 *)(iVar1 + 0x90) = 0;
  return;
}



uint fn_002e2c10(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + (param_2 >> 5) * 4) >> (param_2 & 0x1f) & 1;
}



void fn_002e3128(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00305244(param_1,3);
  *puVar1 = DAT_0082093c;
  return;
}



byte fn_002e31e4(int param_1)

{
  return *(byte *)(param_1 * 9 + DAT_0089281c + 8) & 1;
}



uint fn_002e3204(int param_1)

{
  return (*(byte *)(param_1 * 9 + DAT_0089281c + 7) & 3) >> 1;
}



byte fn_002e322c(int param_1)

{
  return *(byte *)(param_1 * 9 + DAT_0089281c + 7) & 1;
}



int fn_002e3264(int param_1)

{
  return param_1 * 9 + DAT_0089281c;
}



void fn_002e3334(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_002e32fc();
  fn_0025fa84(DAT_00897800,*(undefined4 *)(iVar1 + 4),param_3);
  return;
}



void fn_002e4054(int *param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300f74(param_2,param_1[8]);
                    /* WARNING: Could not recover jumptable at 0x002e407c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 8))(param_1,(int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return;
}



void fn_002e4bbc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002e511c(iVar1,param_1);
  return;
}



void fn_002e53e0(undefined4 *param_1)

{
  *param_1 = DAT_00820b7c;
  fn_0037fb14(param_1);
  fn_0037fe64(param_1);
  fn_002feef8();
  return;
}



void fn_002e5d54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x100,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002e6640(iVar1,param_1);
  return;
}



void fn_002e8160(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = 0;
  uVar3 = *(undefined4 *)(DAT_00897804 + 0x1c);
  do {
    iVar1 = fn_006b51d8(uVar3,iVar2);
    if (iVar1 == param_1) {
      fn_002426b4(uVar3,iVar2,0);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = fn_006b51c0(uVar3);
  if (iVar2 == param_1) {
    fn_0024269c(uVar3,0);
    return;
  }
  return;
}



void fn_002e8d50(void)

{
  fn_002d6808(DAT_00897828);
  return;
}



void fn_002eb950(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00681c7c();
  if (iVar1 != 0) {
    fn_002287d0(DAT_00897894,0x10,0,1);
    fn_00682a8c();
  }
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



void fn_002ede18(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 0x89) = 0;
  uVar1 = fn_0014481c(DAT_008977e8);
  fn_002625d0(uVar1,param_1);
  return;
}



void fn_002ee050(undefined4 *param_1)

{
  *param_1 = DAT_008210e8;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_002ee274(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_00821154;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_002ee530(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_008211c0;
  puVar1[0x1f] = 0;
  *(undefined1 *)(puVar1 + 0x20) = 0;
  return;
}



undefined4 * fn_002ef988(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x20,DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = 0xffffffff;
    *puVar1 = 0;
    puVar1[2] = 0xffffffff;
    puVar1[3] = 0xffffffff;
    puVar1[4] = 0xffffffff;
    puVar1[5] = 0xffffffff;
    *(undefined1 *)(puVar1 + 6) = 0;
    puVar1[7] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4 fn_002f58c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    if (param_1 != 0) {
      fn_002f4624(DAT_008977ec,1);
    }
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



bool fn_002f5908(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  if (iVar1 == 2) {
    fn_002f4624(DAT_008977ec,1);
  }
  return iVar1 == 2;
}



bool fn_002f5d5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_003e93d0(DAT_008977ec,param_1);
  return *(char *)(iVar1 + 8) == '\x01';
}



void fn_002f5f8c(undefined4 param_1)

{
  fn_002f4624(DAT_008977ec,param_1);
  return;
}



undefined1 fn_002f6180(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return *(undefined1 *)(iVar1 + 0x3c2);
}



bool fn_002f61a4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_003e93d0(DAT_008977ec,param_1);
  return *(char *)(iVar1 + 8) == '\x02';
}



void fn_002f61d0(int param_1)

{
  if (*(int *)(param_1 + 4) == 0xb) {
    return;
  }
  fn_005f3b74(DAT_00898840,*(undefined4 *)(param_1 + 8));
  return;
}

