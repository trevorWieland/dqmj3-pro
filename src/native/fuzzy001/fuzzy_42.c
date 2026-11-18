/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005d212c .. 005f6ef0.
 */
#include "decompiled.h"
#include "fuzzy_42.h"


void fn_005d212c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = DAT_0084c334;
  return;
}



void fn_005d24bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00448adc();
  *puVar1 = DAT_0084c348;
  return;
}



void fn_005d2a24(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_0084c4bc;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_005d3804(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0084c4e8;
  puVar1[0x3a] = 0;
  *(undefined1 *)(puVar1 + 0x3b) = 0;
  return;
}



void fn_005d3db8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036e354(param_1,param_2,DAT_007c71f4,1);
  *puVar1 = DAT_0084c748;
  return;
}



void fn_005d9e10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003492e4();
  *puVar1 = DAT_0084d050;
  *(undefined2 *)(puVar1 + 7) = 0;
  return;
}



void fn_005daf2c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x44,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dafb8(iVar1,param_1);
  return;
}



void fn_005db3d0(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x8e4,param_2,0x8d8);
  return;
}



void fn_005db3e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db418(iVar1,param_1);
  return;
}



void fn_005db494(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8f0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db4c4(iVar1,param_1);
  return;
}



void fn_005db510(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x110,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db540(iVar1,param_1);
  return;
}



void fn_005db628(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db658(iVar1,param_1);
  return;
}



void fn_005db740(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005db770(iVar1,param_1);
  return;
}



void fn_005db96c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dba24(iVar1,param_1);
  return;
}



void fn_005dbc68(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005dbc98(iVar1,param_1);
  return;
}



void fn_005dbd60(int param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x140) = 0;
  iVar1 = fn_0023c2a8();
  fn_0067901c(*(undefined4 *)(param_1 + 0x174),*(undefined4 *)(iVar1 + 0x38));
  *(undefined4 *)(param_1 + 0x104) = 0xf;
  fn_0068ab44(param_1,0x100094b);
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x14f) = 0;
  *(undefined1 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined1 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined1 *)(param_1 + 0x160) = 0;
  return;
}



void fn_005de870(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005deab4(iVar1,param_1);
  return;
}



void fn_005e0784(void)

{
  fn_0016e9e0((char *)DAT_005e0874);
  return;
}



void fn_005e1844(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  fn_0012bc84(0x207,piVar2 + 2);
  iVar1 = fn_00153d6c();
  *(undefined1 *)(*piVar2 + iVar1 * 0x10 + 0xc) = 0;
  fn_0012b2f0(*(undefined4 *)(*piVar2 + iVar1 * 0x10));
  fn_0012b574();
  fn_0012bc84(0x208,iVar1 * 0x10 + 8 + *piVar2);
  return;
}



void fn_005e619c(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  fn_0012bc84(0x203,&local_10);
  fn_005e1b90(*(int *)(param_1 + 4) + 8,local_10);
  fn_0010fa70(local_10);
  return;
}



void fn_005e807c(undefined4 *param_1)

{
  *param_1 = DAT_00858c4c;
  fn_002feef8(param_1[2]);
  *param_1 = DAT_00858ca4;
  fn_002feef8(param_1[1]);
  fn_002feef8(param_1);
  return;
}



void fn_005ea63c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 0x148) + 0x9c) = param_2;
  return;
}



undefined4 * fn_005f2c70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x10,DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4 * fn_005f3584(undefined4 *param_1)

{
  *param_1 = DAT_00858eb4;
  (**(code **)(*(int *)param_1[1] + 0xc))((int *)param_1[1],param_1[3]);
  param_1[3] = 0;
  return param_1;
}



void fn_005f3990(undefined4 *param_1)

{
  *param_1 = DAT_00858eec;
  fn_002feef8(param_1[2]);
  fn_005f1264(param_1);
  fn_002feef8();
  return;
}



int fn_005f6e14(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00144128(**(undefined4 **)(param_1 + 4),(char *)DAT_00144260);
  if (iVar1 < 0) {
    iVar1 = -1;
  }
  return iVar1;
}



void fn_005f6ef0(undefined4 *param_1)

{
  *param_1 = DAT_00859490;
  fn_002feef8(param_1[1]);
  fn_002feef8(param_1);
  return;
}

