/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 001f2144 .. 00235bb4.
 */
#include "decompiled.h"
#include "fuzzy_06.h"


undefined4 fn_001f2144(void)

{
  return *(undefined4 *)(DAT_00891220 + 0xb4);
}



void fn_001f32d0(undefined4 param_1,int param_2)

{
  fn_00144834(*(undefined4 *)(DAT_007c1de4 + param_2 * 4),1);
  return;
}



int fn_001f3cf4(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    iVar1 = fn_00227ca8(DAT_00897894,2,0xffffffff,0);
    iVar2 = fn_00228c14(*(undefined4 *)(DAT_00897804 + 0x34));
    if ((iVar2 != iVar1 && iVar1 != 0) && (iVar2 = fn_002281b4(iVar1), iVar2 != 0)) {
      iVar3 = iVar1;
    }
    fn_00682a8c();
  }
  return iVar3;
}



void fn_001f3e10(int param_1)

{
  fn_0069895c(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f3e34(int param_1)

{
  fn_00698a78(DAT_008977e0);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



int fn_001f4418(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = fn_00227398();
  if (iVar1 != 0) {
    iVar1 = fn_00227ca8(DAT_00897894,4,0xffffffff,0);
    iVar2 = fn_00228c2c(*(undefined4 *)(DAT_00897804 + 0x34));
    if ((iVar2 != iVar1 && iVar1 != 0) && (iVar2 = fn_002283ec(iVar1), iVar2 != 0)) {
      iVar3 = iVar1;
    }
    fn_00682a8c();
  }
  return iVar3;
}



void fn_001f5418(void)

{
  fn_0025ba9c(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_001f5760(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_0026f90c();
  return;
}



void fn_001fbb24(void)

{
  fn_0066e4a4(DAT_00897850,0,0x34);
  return;
}



void fn_00203068(undefined4 *param_1)

{
  *param_1 = DAT_0081c374;
  fn_001c19d8(DAT_008977e4);
  fn_005f6f1c(param_1);
  fn_002feef8();
  return;
}



void fn_00203884(void)

{
  fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return;
}



undefined1 fn_00203cfc(void)

{
  int iVar1;
  
  iVar1 = fn_006b86c4(*(undefined4 *)(DAT_00897804 + 0x30));
  return *(undefined1 *)(iVar1 + 2);
}



void fn_0020bbc4(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = DAT_0081c498;
  return;
}



int fn_0020c2c4(int param_1)

{
  return (int)*(short *)(DAT_008924a8 + param_1 * 10);
}



void fn_00211070(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x184) = param_2;
  *(undefined4 *)(param_1 + 0x194) = param_3;
  return;
}



void fn_002179a4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2[1] == 7) && (iVar1 = fn_0059afc8(param_1), iVar1 == 0)) {
    param_1[0xe7] = param_1[0xe7] & 0xfffffffb;
    return;
  }
  iVar1 = param_2[1];
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  param_1[0xd7] = *param_2;
  param_1[0xd8] = iVar1;
  param_1[0xd9] = iVar2;
  param_1[0xda] = iVar3;
  (**(code **)(*param_1 + 0xc))(param_1,0x14,param_2);
                    /* WARNING: Could not recover jumptable at 0x00217a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1e4))(param_1,param_2);
  return;
}



void fn_00226f7c(int param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(param_1 + 4);
  if (*piVar1 != 0) {
    fn_0011050c(*piVar1,*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14));
    if (piVar1[1] != 0) {
      fn_0069c324(piVar1[1],*piVar1);
      fn_0069c3c0(piVar1[1],piVar1[3]);
    }
    if (piVar1[2] != 0) {
      fn_001cf63c(piVar1[2],*piVar1);
      return;
    }
  }
  return;
}



int fn_0022730c(int param_1)

{
  return (int)*(short *)(DAT_008994bc + param_1 * 6 + 2);
}



int fn_00227328(int param_1)

{
  return (int)*(short *)(DAT_008994bc + param_1 * 6 + 4);
}



void fn_00227988(undefined4 param_1,undefined4 param_2)

{
  fn_00227ca8(DAT_00897894,8,param_1,param_2);
  return;
}



void fn_00228c20(undefined4 *param_1,undefined4 param_2)

{
  *(undefined4 *)*param_1 = param_2;
  return;
}



void fn_0022ba6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x25c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0022c93c(iVar1,param_1);
  return;
}



void fn_0022d240(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xcc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0022d3ac(iVar1,param_1);
  return;
}



undefined4 fn_00230a84(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (param_1 == -1) {
    return 0;
  }
  if (param_1 == 0) {
    uVar1 = 0x20;
  }
  else if (param_1 == 1) {
    uVar1 = 0x21;
  }
  else {
    if (param_1 != 2) {
      return 0;
    }
    uVar1 = 0x22;
  }
  uVar1 = fn_00192cb4(DAT_00897800,uVar1,param_2);
  return uVar1;
}



void fn_00230af0(int param_1,undefined4 param_2)

{
  fn_00192cb4(DAT_00897800,(int)*(short *)(DAT_007ce762 + param_1 * 2),param_2);
  return;
}



void fn_00230b64(void)

{
  fn_0025fa24(DAT_00897800);
  return;
}



void fn_00231ca0(undefined4 param_1,undefined4 param_2)

{
  fn_00192cb4(DAT_00897800,param_1,param_2);
  return;
}



undefined4 * fn_002345c8(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0xc,DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
  }
  *param_1 = puVar1;
  return param_1;
}



void fn_00235bb4(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = DAT_00851888;
  return;
}

