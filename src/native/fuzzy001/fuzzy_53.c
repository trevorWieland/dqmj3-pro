/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 006ffd3c .. 0077f768.
 */
#include "decompiled.h"
#include "fuzzy_53.h"


void fn_006ffd3c(void)

{
  fn_004b8d6c(DAT_008d188c);
  return;
}



void fn_0070026c(void)

{
  uint uVar1;
  
  fn_00166ad8(0x20000);
  uVar1 = fn_0015fa88();
  DAT_008bfbd8 = uVar1 >> 3;
  return;
}



void fn_007073a8(void)

{
  fn_0065754c(DAT_008f2d30);
  return;
}



void fn_00708a6c(void)

{
  fn_004c9eac(DAT_008ee168);
  fn_004c9eac(DAT_008ee18c);
  return;
}



void fn_0071997c(void)

{
  fn_00658e6c(DAT_008c0620);
  return;
}



undefined4 fn_007292d0(uint param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_1 < 0x20) &&
     (puVar1 = *(undefined4 **)(DAT_008bfad8 + param_1 * 4 + 0x828), puVar1 != (undefined4 *)0x0)) {
    uVar2 = *puVar1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_00735084(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(DAT_008bfab0 + 0xc) == '\0') {
    uVar1 = 0x800;
  }
  else {
    uVar1 = 0x801;
  }
  *param_1 = uVar1;
  return;
}



undefined4 fn_00740b44(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    uVar1 = fn_001b8438(1,0xfffffe6d,(char *)DAT_007d5f08);
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 4);
}



void fn_00741310(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_001b9684();
  fn_001b8438(1,uVar1,(char *)DAT_007d5ebc);
  return;
}



void fn_00748134(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x2c] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x144))(param_1);
  fn_006899f4(param_1,param_1[0x2c],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_00748990(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x39] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x150))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
  fn_006899f4(param_1,param_1[0x39],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_007492a8(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x34] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x148))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x144))(param_1);
  fn_006899f4(param_1,param_1[0x34],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0074a3ec(undefined4 *param_1)

{
  *param_1 = DAT_00852630;
  fn_0014e6e4(param_1);
  fn_00170c3c(param_1);
  return;
}



void fn_0074a4a0(undefined4 *param_1)

{
  *param_1 = DAT_00852630;
  fn_0014e6e4(param_1);
  fn_00170c3c(param_1);
  return;
}



void fn_007606ac(undefined4 *param_1)

{
  *param_1 = DAT_008586a4;
  return;
}



void fn_0076252c(int param_1)

{
  *(undefined4 *)(param_1 + 0x104) = 7;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_0077f768(void)

{
  fn_0066e530(DAT_00897850);
  return;
}

