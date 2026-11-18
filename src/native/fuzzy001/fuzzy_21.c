/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 003af118 .. 003d9114.
 */
#include "decompiled.h"
#include "fuzzy_21.h"


void fn_003af118(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  *puVar1 = DAT_0082e764;
  *(undefined1 *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



void fn_003b8be8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350(param_1,param_2,0,0x7b);
  *puVar1 = DAT_0082ed94;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  return;
}



void fn_003c0fcc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003fedc0();
  *puVar1 = DAT_0082fc28;
  return;
}



void fn_003c4014(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c4280(iVar1,param_1);
  return;
}



void fn_003c4424(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c4988(iVar1,param_1);
  return;
}



void fn_003c4a5c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c4b98(iVar1,param_1);
  return;
}



void fn_003c6ec0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c6f10(iVar1,param_1);
  return;
}



void fn_003c700c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c70f0(iVar1,param_1);
  return;
}



void fn_003c7b14(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x180,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003c7d20(iVar1,param_1);
  return;
}



void fn_003c9204(void)

{
  fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_003cc07c(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
}



void fn_003cc1f4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cc224(iVar1,param_1);
  return;
}



void fn_003cc328(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = DAT_00830cf4;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1a] = 0xffffffff;
  puVar1[0x19] = uVar2;
  puVar1[0x1b] = 0xffffffff;
  return;
}



void fn_003cc368(int param_1)

{
  fn_0016a43c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x88));
  fn_0016a43c(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x84));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x7c),*(undefined4 *)(param_1 + 0x80));
}



void fn_003cc448(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x90,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003ccfa4(iVar1,param_1);
  return;
}



void fn_003cd068(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016dd44();
  *puVar1 = DAT_00830f14;
  return;
}



void fn_003cd9d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x84,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cdd60(iVar1,param_1);
  return;
}



void fn_003cf2d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003cf788(iVar1,param_1);
  return;
}



void fn_003d0bac(undefined4 *param_1)

{
  *param_1 = DAT_008311bc;
  return;
}



void fn_003d1ee8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003d2038(iVar1,param_1);
  return;
}



void fn_003d4048(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x98) + 0x2c))
            (*(int **)(param_1 + 0x98),0xffffffff,0xffffffff,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003d7d94(int param_1)

{
  int iVar1;
  
  fn_001db0c0();
  fn_005eeda8(*(undefined4 *)(param_1 + 0xe4));
  if ((DAT_00897850 == 0) || (iVar1 = fn_0066eb04(), iVar1 == 0)) {
    if (*(int *)(param_1 + 0x19c) == 0) {
      fn_003d7bb8(param_1,1);
      return;
    }
  }
  else if (*(int *)(param_1 + 0x19c) == 1) {
    fn_003d7bb8(param_1,0);
    return;
  }
  return;
}



void fn_003d824c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,3);
  *puVar1 = DAT_00831974;
  if (param_3 == (undefined1 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = *param_3;
  }
  *(undefined1 *)(puVar1 + 0x16) = uVar2;
  return;
}



void fn_003d8b08(undefined4 *param_1)

{
  *param_1 = DAT_008319c8;
  if (param_1[0x1d] != -1) {
    fn_00216938(param_1[5]);
    param_1[0x1d] = 0xffffffff;
  }
  fn_00226f48(param_1);
  fn_002feef8();
  return;
}



int fn_003d9010(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xc);
  *puVar1 = DAT_00831a18;
  iVar2 = fn_002fe2dc(puVar1 + 0x1c);
  return iVar2 + -0x70;
}



void fn_003d9114(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0xe);
  *puVar1 = DAT_00831a40;
  return;
}

