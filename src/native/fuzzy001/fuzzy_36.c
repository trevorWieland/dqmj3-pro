/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0058450c .. 0059e458.
 */
#include "decompiled.h"
#include "fuzzy_36.h"


void fn_0058450c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00842f84;
  return;
}



void fn_00584584(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003953b0();
  puVar1[5] = 0xffffffff;
  *puVar1 = DAT_00842f9c;
  return;
}



void fn_00587b30(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = DAT_00843354;
  puVar1[3] = 0;
  puVar1[4] = 0;
  return;
}



void fn_00589198(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  *puVar1 = DAT_008437c0;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar1[3] = 0xffffffff;
  return;
}



void fn_0058b420(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039b1e0();
  *puVar1 = DAT_00843918;
  *(undefined1 *)(puVar1 + 0x46) = 0;
  return;
}



void fn_0058b480(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c4db4,1);
  *puVar1 = DAT_00843a84;
  return;
}



void fn_0058b4e4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0025dea8(param_1,param_2,DAT_007c4db8,1);
  *puVar1 = DAT_00843b9c;
  return;
}



void fn_0058bd34(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x144,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058c8bc(iVar1,param_1);
  return;
}



void fn_0058c938(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x14,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058c968(iVar1,param_1);
  return;
}



void fn_0058cbd4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x24,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0058cc04(iVar1,param_1);
  return;
}



void fn_00591d70(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00591e08(iVar1,param_1);
  return;
}



void fn_00591da0(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00591dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x110))(param_1);
  return;
}



void fn_00592028(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xac,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005921a8(iVar1,param_1);
  return;
}



void fn_0059229c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005922cc(iVar1,param_1);
  return;
}



void fn_00592590(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00592754(iVar1,param_1);
  return;
}



void fn_00593938(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x1c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00593968(iVar1,param_1);
  return;
}



void fn_00594a90(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x88,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00594be4(iVar1,param_1);
  return;
}



void fn_00595124(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005952cc(iVar1,param_1);
  return;
}



void fn_00596894(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  iVar1 = fn_0066e158(DAT_00898840);
  bVar3 = iVar1 == 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x104);
  }
  if (bVar3 && iVar1 == 0) {
    if (*(int *)(param_1 + 0x154) == 2 || *(int *)(param_1 + 0x154) == 3) {
      fn_007492a8(param_1);
      fn_002d6808(*(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10));
      uVar2 = 0xe;
    }
    else {
      uVar2 = 0xd;
    }
    *(undefined4 *)(param_1 + 0x104) = uVar2;
    *(undefined4 *)(*(int *)(param_1 + 0x110) + 0xc) = 0;
  }
  return;
}



void fn_005977c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xec,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059790c(iVar1,param_1);
  return;
}



void fn_0059d078(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_001296d0(DAT_00898840);
  if (iVar1 == 0) {
    fn_00761018(param_1);
    fn_002d6808(DAT_00897828);
    return;
  }
  return;
}



void fn_0059d40c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(300,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059d8e0(iVar1,param_1);
  return;
}



void fn_0059e35c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e38c(iVar1,param_1);
  return;
}



void fn_0059e3d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e404(iVar1,param_1);
  return;
}



void fn_0059e458(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(8,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0059e488(iVar1,param_1);
  return;
}

