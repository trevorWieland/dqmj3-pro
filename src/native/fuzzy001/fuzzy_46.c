/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0060a8c4 .. 00660f40.
 */
#include "decompiled.h"
#include "fuzzy_46.h"


void fn_0060a8c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = DAT_0084fc00;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return;
}



void fn_0060bc8c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00850000;
  puVar1[3] = 0;
  return;
}



void fn_0060c134(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d4f1c();
  *puVar1 = DAT_00850014;
  return;
}



void fn_006113bc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  puVar1[4] = 1;
  *puVar1 = DAT_00850800;
  *(undefined1 *)(puVar1 + 5) = 0;
  return;
}



void fn_00615a24(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0034c0ec();
  *puVar1 = DAT_00850840;
  return;
}



void fn_00615a7c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007d47ac,2);
  *puVar1 = DAT_00850984;
  return;
}



void fn_00656e58(undefined4 param_1,int *param_2,undefined4 param_3)

{
  if ((param_2 == (int *)0x0) &&
     (param_2 = (int *)fn_006f5418(DAT_008c06d0), param_2 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656e94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x18))(param_2,param_1,param_3);
  return;
}



void fn_006594c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4cc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_006595f0(iVar1,param_1);
  return;
}



void fn_0065a7e4(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x1a4) != -1) {
    uVar1 = fn_006f72b4(DAT_008977e0);
    fn_0021f144(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  }
  fn_001d9f9c(param_1);
  return;
}



void fn_0065bd8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0065bdbc(iVar1,param_1);
  return;
}



void fn_0065bef0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0065bf20(iVar1,param_1);
  return;
}



void fn_0065cc94(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006a7f8c(param_1 + 0x1b0);
  if (iVar1 != 0) {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    fn_002782b4(uVar2,param_1 + 0x1b0);
  }
  fn_003191f8(param_1);
  return;
}



void fn_0065d2c8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4e0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0065d2f8(iVar1,param_1);
  return;
}



void fn_0065d344(int param_1)

{
  if (*(int *)(param_1 + 0xe8) != -1) {
    fn_001da39c(param_1);
    fn_0023d3f4(*(undefined4 *)(DAT_008977e0 + 0x2c),0x7577);
  }
  fn_001d9f9c(param_1);
  return;
}



void fn_0065da58(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x19c) != -1) {
    fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x19c),param_2);
  }
  fn_001d96b0(param_1,param_2);
  return;
}



void fn_0065dee8(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x19c) != -1) {
    fn_0023e508(*(undefined4 *)(DAT_008977e0 + 0x2c),*(int *)(param_1 + 0x19c),param_2);
  }
  fn_001dbb48(param_1,param_2);
  return;
}



int fn_0065e38c(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(DAT_008bf61c + param_1 * 0x1c + param_3 * 0xc + param_2 * 2);
}



bool fn_0065e3d4(int param_1,uint param_2)

{
  return (1 << (param_2 & 0xff) & (uint)*(byte *)(DAT_008bf61c + param_1 * 0x1c + 0x18)) != 0;
}



void fn_00660364(int *param_1)

{
  (**(code **)(*param_1 + 0x1c))(param_1);
  if (*(char *)((int)param_1 + 0x46) == '\0') {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00660398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))(param_1);
  return;
}



int fn_00660d60(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x14);
}



bool fn_00660e0c(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x13) != '\0';
}



undefined1 fn_00660e2c(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x10);
}



bool fn_00660e44(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x26) != '\0';
}



bool fn_00660e64(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x11) == '#';
}



bool fn_00660e88(int param_1)

{
  return *(short *)(DAT_008994c4 + param_1 * 0x40 + 0x16) != 0;
}



undefined1 fn_00660ea8(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x12);
}



undefined1 fn_00660ec0(int param_1)

{
  return *(undefined1 *)(DAT_008994c4 + param_1 * 0x40 + 0x11);
}



undefined4 fn_00660ed8(int param_1)

{
  return *(undefined4 *)(DAT_008994c4 + param_1 * 0x40 + 0x1c);
}



bool fn_00660ef0(int param_1)

{
  return *(char *)(DAT_008994c4 + param_1 * 0x40 + 0x25) != '\0';
}



undefined4 fn_00660f10(int param_1)

{
  return *(undefined4 *)(DAT_008994c4 + param_1 * 0x40 + 0x18);
}



int fn_00660f28(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x2e);
}



int fn_00660f40(int param_1)

{
  return (int)*(short *)(DAT_008994c4 + param_1 * 0x40 + 0x2c);
}

