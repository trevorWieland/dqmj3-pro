/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0065bdbc .. 0066eb04.
 */
#include "decompiled.h"
#include "fuzzy_47.h"


void fn_0065bdbc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00850c24;
  return;
}



void fn_0065bf20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  puVar1[4] = 0xffffffff;
  *puVar1 = DAT_00850c38;
  return;
}



int fn_00660fe0(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x22);
}



int fn_00660ff8(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x3c);
}



undefined1 fn_00661040(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x2b);
}



int fn_00661058(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x3e);
}



undefined1 fn_00661070(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x2a);
}



bool fn_00662ae8(void)

{
  int iVar1;
  
  iVar1 = 0;
  if (DAT_008ccfb8 != 0) {
    iVar1 = *(int *)(DAT_008ccfb8 + 0xc);
  }
  return DAT_008ccfb8 != 0 && iVar1 != 0;
}



undefined4 fn_00662bd0(void)

{
  return *(undefined4 *)(DAT_008ccfb8 + 0xc);
}



void fn_006644c0(void)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00664500();
  return;
}



void fn_006647e8(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    return;
  }
  fn_0017821c(param_1,param_2,0xa88);
  return;
}



void fn_0066dc48(int param_1)

{
  fn_0066ec18(param_1 + 0x40);
  fn_0066e130(DAT_00898840);
  fn_0066ec10(DAT_00898840);
  return;
}



void fn_0066de3c(int *param_1,int param_2)

{
  (**(code **)(*param_1 + 0x20))(param_1,param_2 + 0x4c);
                    /* WARNING: Could not recover jumptable at 0x0066de68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}



void fn_0066e300(void)

{
  fn_00671e8c(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



void fn_0066e34c(void)

{
  fn_00670f10(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



void fn_0066e3d8(void)

{
  fn_006741c0(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e3f4(undefined4 param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x78) = param_2;
  return;
}



void fn_0066e464(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = DAT_00898840;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x74) = param_2;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x28) + 0x78) = param_3;
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + 0x28) + 0x7c) = param_4;
  return;
}



void fn_0066e4a4(void)

{
  fn_00670f84(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28));
  return;
}



uint fn_0066e4c0(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x14) + 0x4c) & 7) >> 2;
}



uint fn_0066e4e8(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x4c) & 0xf) >> 3;
}



void fn_0066e530(void)

{
  fn_006744e4(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e55c(int param_1)

{
  fn_00669e78(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}



uint fn_0066e58c(void)

{
  return (*(byte *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x4c) & 0x3f) >> 5;
}



void fn_0066e5b4(void)

{
  fn_00674758(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e5d0(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x78) = param_2;
  return;
}



void fn_0066e5f0(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x38) = param_2;
  return;
}



void fn_0066e620(undefined4 param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c) + 0x79) = param_2;
  return;
}



void fn_0066e640(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x74) = param_2;
  return;
}



void fn_0066e660(undefined4 param_1,undefined4 param_2)

{
  *(undefined4 *)(*(int *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x28) + 0x7c) = param_2;
  return;
}



void fn_0066e680(void)

{
  fn_006729ac(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



void fn_0066e6b8(int param_1)

{
  fn_0066ade0(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  *(undefined1 *)(param_1 + 0x4c) = 1;
  *(undefined1 *)(param_1 + 0x5a) = 0;
  return;
}



void fn_0066e6f0(void)

{
  fn_00674f58(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066e70c(void)

{
  fn_006729c8(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x20));
  return;
}



void fn_0066e744(void)

{
  fn_00675554(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0x2c));
  return;
}



void fn_0066eb04(void)

{
  fn_00666a24(*(undefined4 *)(*(int *)(*(int *)(DAT_00898840 + 4) + 4) + 0xc));
  return;
}

