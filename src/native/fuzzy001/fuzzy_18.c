/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0036cecc .. 003950e0.
 */
#include "decompiled.h"
#include "fuzzy_18.h"


void fn_0036cecc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0022a2a8();
  puVar1[0x2d] = 0;
  *puVar1 = DAT_00827ab0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  *(undefined1 *)(puVar1 + 0x30) = 0;
  return;
}



void fn_0037ca98(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0031aa80();
  *puVar1 = DAT_00829038;
  return;
}



void fn_003849cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004111d0();
  puVar1[0x34] = 0;
  *puVar1 = DAT_008299a0;
  return;
}



void fn_003870d4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00387104(iVar1,param_1);
  return;
}



void fn_00387138(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00387168(iVar1,param_1);
  return;
}



void fn_0038719c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003871cc(iVar1,param_1);
  return;
}



void fn_003876bc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x10c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003877d0(iVar1,param_1);
  return;
}



void fn_00388998(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x18c,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00388a80(iVar1,param_1);
  return;
}



void fn_003896bc(undefined4 *param_1)

{
  *param_1 = DAT_0082a80c;
  fn_00260014(param_1,1);
  fn_00260750(param_1);
  fn_002feef8();
  return;
}



void fn_003896ec(int param_1)

{
  fn_002a4648(*(undefined4 *)(param_1 + 4),0xc745);
  return;
}



void fn_003896fc(int param_1)

{
  fn_0023d3f4(*(undefined4 *)(param_1 + 4),0xc745);
  return;
}



void fn_00389a78(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xa4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0038b5a8(iVar1,param_1);
  return;
}



void fn_0038b9a4(void)

{
  int iVar1;
  
  iVar1 = fn_001296e8(DAT_00898840);
  if (iVar1 == 0) {
    return;
  }
  fn_0066e31c(DAT_00898840);
  return;
}



void fn_0038bc38(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00182c40(uVar1,*(undefined1 *)(param_1 + 9),*(undefined4 *)(param_1 + 0xc),
               (int)*(float *)(param_1 + 0x10));
  return;
}



void fn_0038cad8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003ed51c(param_1,param_2,0);
  puVar1[4] = 0;
  *puVar1 = DAT_0082ac00;
  puVar1[5] = 0;
  return;
}



void fn_0038cc08(undefined4 param_1,int *param_2,undefined4 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0038cc20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x2c))(param_2,param_3,1);
  return;
}



void fn_0038df98(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x74,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0038dfe0(iVar1,param_1);
  return;
}



void fn_0038e41c(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = DAT_0082ad88;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}



void fn_0038fc8c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0038feb4(iVar1,param_1);
  return;
}



undefined4 * fn_00390458(undefined4 param_1,undefined4 param_2,char *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,5);
  *puVar1 = DAT_0082b0d4;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  *(undefined1 *)((int)puVar1 + 0x59) = 0;
  puVar1[0x17] = 0;
  (**(code **)(*(int *)puVar1[5] + 0xe0))((int *)puVar1[5],0);
  if (param_3 != (char *)0x0) {
    *(bool *)(puVar1 + 0x16) = *param_3 != '\0';
  }
  return puVar1;
}



void fn_00391ca0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003b17d4(param_1,param_2,9);
  *puVar1 = DAT_0082b16c;
  return;
}



void fn_00391ccc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00218664();
  *puVar1 = DAT_0082b1a4;
  return;
}



void fn_00391cf4(int param_1)

{
  if ((((param_1 == 3 || param_1 == 4) || (param_1 == 5 || param_1 == 6)) ||
      (param_1 == 7 || param_1 == 8)) || (param_1 == 9 || param_1 == 10)) {
    fn_0024276c(*(undefined4 *)(DAT_00897804 + 0x1c),param_1);
    return;
  }
  return;
}



undefined2 fn_00391d58(void)

{
  int iVar1;
  
  iVar1 = fn_00129dc8(*(undefined4 *)(DAT_00897804 + 0x1c));
  return *(undefined2 *)(DAT_007c0fb4 + iVar1 * 2);
}



undefined4 fn_00391dac(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_006f7530(DAT_008977e0);
  if (((iVar1 != 0) || (**(int **)(DAT_008977e0 + 0x40) != 0)) ||
     (iVar1 = fn_002fb61c(), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00392ba4(int param_1)

{
  if (*(int *)(param_1 + 0xd4) == 2) {
    fn_0026a494(DAT_00897818,*(undefined4 *)(*(int *)(param_1 + 4) + 0x18),1);
    *(undefined4 *)(param_1 + 0xd4) = 4;
  }
  return;
}



void fn_003950e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0039525c(iVar1,param_1);
  return;
}

