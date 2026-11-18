/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005b8cec .. 005dafac.
 */
#include "decompiled.h"
#include "fuzzy_40.h"


void fn_005b8cec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = DAT_00848ee0;
  puVar1[0x1a] = 0xffffffff;
  return;
}



void fn_005ba2a4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005bb974();
  *puVar1 = DAT_00849248;
  return;
}


void fn_005bc600(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0x108);
  if ((iVar1 == 0) || (iVar1 != 1 && iVar1 != 2)) {
    iVar1 = fn_006e8f88(param_1);
    iVar2 = fn_0023c2a8();
    fn_004a2190(iVar2 + 0x30,iVar1 + 0x5a8);
    fn_0068ab44(param_1,0x100094b);
    fn_006899f4(param_1,0xf8,0,1);
    *(undefined4 *)(param_1 + 0x10c) = 0;
    *(undefined4 *)(param_1 + 0x108) = 2;
  }
  return;
}

void fn_005bc928(int *param_1)

{
  (**(code **)(*param_1 + 0x108))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005bc950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x148))(param_1);
  return;
}



void fn_005bfefc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005bff2c(iVar1,param_1);
  return;
}



void fn_005bff54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005bff84(iVar1,param_1);
  return;
}



void fn_005c0650(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x134,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c18a8(iVar1,param_1);
  return;
}



void fn_005c19d0(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_005c19e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c1a14(iVar1,param_1);
  return;
}



void fn_005c1a50(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c1a80(iVar1,param_1);
  return;
}



void fn_005c2e0c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c2e3c(iVar1,param_1);
  return;
}



void fn_005c4358(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c44cc(iVar1,param_1);
  return;
}



void fn_005c6770(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c6900(iVar1,param_1);
  return;
}



void fn_005c6db4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x160,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005c6de4(iVar1,param_1);
  return;
}



void fn_005c9ff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005ca198(iVar1,param_1);
  return;
}



void fn_005ca240(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x2c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005ca2b8(iVar1,param_1);
  return;
}



void fn_005ca60c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  puVar1[0x16] = 0;
  *puVar1 = DAT_0084b28c;
  return;
}



void fn_005cad8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cadbc(iVar1,param_1);
  return;
}



void fn_005cade4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cae14(iVar1,param_1);
  return;
}



void fn_005cc2e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cc3dc(iVar1,param_1);
  return;
}



void fn_005cc478(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x74,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cc4a8(iVar1,param_1);
  return;
}



void fn_005ccf90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xe4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cd19c(iVar1,param_1);
  return;
}



void fn_005cd328(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cd3e0(iVar1,param_1);
  return;
}



void fn_005cd860(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0066e158(DAT_00898840);
  if (iVar1 == 0) {
    fn_00321598(*(undefined4 *)(param_1 + 100));
    fn_006899f4(param_1,0xe0,0,1);
    return;
  }
  return;
}



void fn_005cd920(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cd950(iVar1,param_1);
  return;
}



void fn_005dafac(int param_1,int param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + param_2 + 8) = param_3;
  return;
}

