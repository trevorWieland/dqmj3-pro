/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 004ea154 .. 00558278.
 */
#include "decompiled.h"
#include "fuzzy_31.h"


void fn_004ea154(int param_1,int param_2)

{
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 1 << (param_2 - 1U & 0xff);
  return;
}



void fn_004ea16c(int param_1)

{
  undefined4 uVar1;
  
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  uVar1 = fn_006d6690(*(undefined4 *)(DAT_008bf504 + 0x14),1);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  return;
}



void fn_004ebda0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004eddf4();
  *puVar1 = DAT_00856bf8;
  return;
}



void fn_004ec4a0(undefined4 *param_1)

{
  *param_1 = DAT_00856c64;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xe) = 0;
  return;
}



void fn_004ecad8(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0x67452301;
  *(undefined4 *)(param_1 + 8) = 0xefcdab89;
  *(undefined4 *)(param_1 + 0xc) = 0x98badcfe;
  *(undefined4 *)(param_1 + 0x10) = 0x10325476;
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}



int fn_004ed810(int param_1,int param_2)

{
  if (param_1 != param_2) {
    fn_004ed464(param_1 + 4,param_2 + 4);
    *(undefined2 *)(param_1 + 0xc) = *(undefined2 *)(param_2 + 0xc);
  }
  return param_1;
}


undefined4 fn_004ed96c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = 0xe0e14826;
  if ((param_2 - 0x100000U < 0x3ff00000) && (param_3 != 0)) {
    if ((uint)(*(int *)(param_1 + 0x14) + param_3 + 6) > *(uint *)(param_1 + 0x28)) {
      uVar1 = 0xe0e14823;
    }
    else {
      *(int *)(param_1 + 0x18) = param_2;
      *(int *)(param_1 + 0x1c) = param_3;
      iVar2 = fn_00730a90(param_1 + 0x18,2);
      bVar3 = iVar2 == 0;
      if (bVar3) {
        iVar2 = *(int *)(param_1 + 0x1c);
      }
      uVar1 = 0xe161482a;
      if (bVar3 && iVar2 == 0) {
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

void fn_004edb64(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_00856ca0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_004ef288(void)

{
  if (DAT_008c0634 != 0) {
    fn_004ecfd0();
    DAT_008c0634 = 0;
  }
  return;
}



void fn_004f0208(void)

{
  if (DAT_008c0668 != 0) {
    fn_004ecfd0();
    DAT_008c0668 = 0;
  }
  return;
}



void fn_004f045c(undefined4 *param_1)

{
  *param_1 = 0x6498ab32;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 0;
  *(undefined2 *)((int)param_1 + 6) = 0;
  *(undefined2 *)(param_1 + 2) = 0;
  *(undefined2 *)((int)param_1 + 10) = 0;
  param_1[0x16e] = 0xc;
  *(undefined1 *)(param_1 + 0x16f) = 0xfd;
  param_1[0x170] = 0;
  fn_004ed714(param_1 + 0x171);
  *(undefined1 *)(param_1 + 0x175) = 0;
  *(undefined1 *)((int)param_1 + 0x5d5) = 0;
  fn_004ed714(param_1 + 0x176);
  *(undefined1 *)(param_1 + 0x17a) = 0;
  return;
}



void fn_004f06f4(undefined4 param_1,undefined4 param_2)

{
  fn_001694e4(param_1,param_2,0x5ec);
  return;
}



undefined4 * fn_004f07f0(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = DAT_00856d70;
  fn_001782b8(param_1 + 1,param_2,0x7f);
  *(undefined1 *)((int)param_1 + 0x83) = 0;
  return param_1;
}



void fn_004fb6cc(int param_1)

{
  fn_0051117c(*(undefined4 *)(DAT_008bf4d4 + 100),*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}



void fn_00502890(int *param_1)

{
  (**(code **)(*param_1 + 0x34))(param_1);
                    /* WARNING: Could not recover jumptable at 0x005028b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



void fn_00505d4c(int param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 0x82) = param_2;
  return;
}



void fn_005060e8(int param_1)

{
  if (*(char *)(param_1 + 0x81) != '\0') {
    fn_00503ca8(param_1);
    fn_005044fc(param_1);
    fn_0051dc1c(DAT_008bf4d4);
    fn_004ee29c(DAT_008c0638);
    *(undefined1 *)(param_1 + 0x81) = 0;
  }
  return;
}



void fn_005075d8(void)

{
  fn_005059c0(DAT_008bf4e0);
  return;
}



void fn_0050905c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  *puVar1 = DAT_00856fd0;
  *(undefined1 *)(puVar1 + 5) = 0xfd;
  puVar1[6] = 0;
  puVar1[7] = 0;
  return;
}



void fn_00509ad0(int *param_1)

{
  param_1[0x46] = -1;
  param_1[0x47] = 0;
  fn_00516cc8(param_1 + 0x37);
                    /* WARNING: Could not recover jumptable at 0x00509b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x30))(param_1);
  return;
}



void fn_0050bc40(void)

{
  if (DAT_008c0670 != 0) {
    fn_004ecfd0();
    DAT_008c0670 = 0;
  }
  return;
}



undefined4 * fn_0050cec4(undefined4 *param_1)

{
  *param_1 = DAT_00857068;
  param_1[2] = 0;
  param_1[3] = 0;
  fn_004f0c04(param_1 + 1);
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[5] = 4;
  return param_1;
}



void fn_0050e3ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0051cf84();
  puVar1[5] = 15000;
  *puVar1 = DAT_00857094;
  return;
}



void fn_0050ffac(void)

{
  if (DAT_008c0678 != 0) {
    fn_005107c4();
    fn_004ecfd0();
    DAT_008c0678 = 0;
  }
  return;
}



void fn_00515764(undefined4 *param_1)

{
  *param_1 = DAT_008571a0;
  return;
}



int fn_0051811c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_00857210;
  iVar1 = fn_0050d178(param_1 + 0xb);
  iVar1 = fn_0050d178(iVar1 + -0x28);
  return iVar1 + -4;
}



int fn_0051869c(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = DAT_0085723c;
  iVar1 = fn_00657488(param_1 + 0x11);
  return iVar1 + -0x44;
}



void fn_00518bc8(void)

{
  if (DAT_008c06a4 != 0) {
    fn_004ecfd0();
    DAT_008c06a4 = 0;
  }
  return;
}



void fn_00558278(int param_1,int param_2)

{
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(DAT_00812968 + param_2 * 4);
  return;
}

