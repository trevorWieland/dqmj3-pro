/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 00321860 .. 003634ec.
 */
#include "decompiled.h"
#include "fuzzy_15.h"


void fn_00321860(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_0082327c;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



void fn_003267d8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039e374();
  *puVar1 = DAT_008238ac;
  return;
}



void fn_00326830(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_008942c0,1);
  *puVar1 = DAT_008239f4;
  return;
}



void fn_00329e64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039f9e8();
  puVar1[0x56] = 0;
  *puVar1 = DAT_00824068;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  *(undefined1 *)(puVar1 + 0x59) = 0;
  puVar1[0x5a] = 0;
  return;
}



void fn_003392a0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x9c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00339850(iVar1,param_1);
  return;
}



void fn_00339888(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00746390();
  *puVar1 = DAT_00824d8c;
  return;
}



int fn_00339f08(int param_1)

{
  return (int)*(short *)(DAT_008923ec + param_1 * 6);
}



void fn_0033b3ec(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x0033b40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_0033d910(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *param_1 = 3;
  return;
}



undefined4 fn_00341260(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (param_1 < 0) {
    uVar3 = 1;
    do {
      iVar1 = fn_00341260(uVar3);
      if (iVar1 != 0) {
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < 0xb);
  }
  else if (0 < *(int *)(DAT_00892080 + param_1 * 4)) {
    uVar2 = fn_00154ac8();
    return uVar2;
  }
  return 0;
}



void fn_00342e04(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x104,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00342f20(iVar1,param_1);
  return;
}



int fn_00344f8c(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x28);
  fn_00228e40(uVar6);
  iVar5 = 0;
  iVar1 = fn_006b2a40(uVar6);
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b2948(uVar6,iVar4);
      iVar3 = fn_006b2a74(uVar6,uVar2);
      if ((iVar3 != 0) && (*(char *)(iVar3 + 4) == '\x03')) {
        iVar5 = iVar5 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return iVar5;
}



void fn_0034b000(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034b030(iVar1,param_1);
  return;
}



void fn_0034c044(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x478,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034c0ec(iVar1,param_1);
  return;
}



void fn_0034c594(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034c6b4(iVar1,param_1);
  return;
}



void fn_0034c82c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00385b88();
  puVar1[0x27] = 0;
  *puVar1 = DAT_00825bb8;
  puVar1[0x28] = 0;
  return;
}



void fn_0034cfa0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x134,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0034d1e8(iVar1,param_1);
  return;
}



void fn_0034d4a8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00231cb8((DAT_007c73f0)[*(int *)(param_1 + 0xd0)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar1);
  return;
}



void fn_0034d804(int *param_1)

{
  fn_002c3e74();
  (**(code **)(*param_1 + 0x15c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x0034d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x158))(param_1);
  return;
}



void fn_0034ec4c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_00826288;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0034ec70(undefined4 *param_1)

{
  *param_1 = DAT_00826288;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0034efe4(undefined4 *param_1)

{
  *param_1 = DAT_008262f4;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_0034f09c(undefined4 *param_1)

{
  *param_1 = DAT_00826360;
  fn_0012d73c(param_1[1]);
  param_1[1] = 0;
  param_1[2] = 0;
  fn_002feef8(param_1);
  return;
}



void fn_00351d94(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x78,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00352104(iVar1,param_1);
  return;
}



void fn_00352384(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003525b0(iVar1,param_1);
  return;
}



undefined4 fn_003634ec(int param_1)

{
  return *(undefined4 *)(DAT_007be488 + param_1 * 4);
}

