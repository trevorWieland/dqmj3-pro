/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 005b3000 .. 005bc5d0.
 */
#include "decompiled.h"
#include "fuzzy_39.h"


void fn_005b3000(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00847fac;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_005b3170(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00847ff0;
  *(undefined1 *)(puVar1 + 2) = 2;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_005b31ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = DAT_00848004;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}



void fn_005b32cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ba410();
  puVar1[0x14] = 0;
  *puVar1 = DAT_0084801c;
  puVar1[0x15] = 0;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  return;
}



void fn_005b33d0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00848034;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_005b4710(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  puVar1[5] = 0xffffffff;
  *puVar1 = DAT_008482a0;
  *(undefined1 *)(puVar1 + 6) = 0;
  *(undefined1 *)((int)puVar1 + 0x19) = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  return;
}



void fn_005b47a0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  *puVar1 = DAT_008482b8;
  return;
}



void fn_005b47f8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = DAT_008482d0;
  *(undefined1 *)(puVar1 + 4) = 3;
  *(undefined1 *)((int)puVar1 + 0x11) = 1;
  puVar1[5] = 1;
  return;
}



void fn_005b73b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_00848a18;
  *(undefined1 *)(puVar1 + 2) = 0;
  *(undefined1 *)((int)puVar1 + 9) = 0;
  return;
}



void fn_005b8054(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003870a8();
  *puVar1 = DAT_00848ac8;
  return;
}



void fn_005b8104(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c4dbc,3);
  *puVar1 = DAT_00848c14;
  return;
}



void fn_005b8210(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8240(iVar1,param_1);
  return;
}



void fn_005b8280(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b82b0(iVar1,param_1);
  return;
}



void fn_005b8428(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x20,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8458(iVar1,param_1);
  return;
}



void fn_005b8848(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8878(iVar1,param_1);
  return;
}



void fn_005b89f0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x6c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b8cec(iVar1,param_1);
  return;
}



void fn_005b909c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b92d4(iVar1,param_1);
  return;
}


void fn_005ba19c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0023d070();
  if (iVar1 != 0) {*(undefined4 *)(param_1 + 0x110) = 0;
    
    *(undefined4 *)(param_1 + 0x10c) = 1;
  }
  return;
}

void fn_005ba1c4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1a8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005ba2a4(iVar1,param_1);
  return;
}



void fn_005baf24(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x005baf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x15c))(param_1);
    return;
  }
  return;
}



void fn_005bb804(int *param_1)

{
  if (param_1[0x43] == 0) {
    fn_002c3d68(param_1);
    fn_006899f4(param_1,0xf3,0,1);
                    /* WARNING: Could not recover jumptable at 0x005bb844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1);
    return;
  }
  return;
}


void fn_005bb84c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x10c) == 0) {
    iVar1 = fn_006e8f88(param_1);
    fn_004a2190(param_1 + 0x118,iVar1 + 0x5a8);
    *(undefined4 *)(param_1 + 0x110) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 1;
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  return;
}
void fn_005bc564(int param_1)

{
  fn_006899f4(param_1,0xdd,0,1);
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x108) = 2;
  return;
}

void fn_005bc590(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[0x42];
  if ((iVar1 == 0) || (iVar1 != 1 && iVar1 != 2)) {
    fn_002c3d68(param_1);
                    /* WARNING: Could not recover jumptable at 0x005bc5c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x154))(param_1);
    return;
  }
  return;
}



void fn_005bc5d0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005bc740(iVar1,param_1);
  return;
}

