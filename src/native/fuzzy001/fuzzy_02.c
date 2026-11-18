/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 0013d574 .. 0015f460.
 */
#include "decompiled.h"
#include "fuzzy_02.h"
static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_0013d574(undefined4 *param_1)

{
  *param_1 = DAT_00856614;
  return;
}



void fn_00146034(void)

{
  if (DAT_008bfab0 != 0) {
    DAT_008bfab0 = 0;
  }
  return;
}



void fn_001464f4(void)

{
  if (DAT_0089a51c != 0) {
    DAT_0089a51c = 0;
  }
  return;
}



undefined4 fn_00146578(void)

{
  undefined4 uVar1;
  
  uVar1 = DAT_0089a518;
  DAT_0089a518 = 0;
  return uVar1;
}



void fn_00147080(undefined4 *param_1)

{
  *param_1 = DAT_008586d0;
  return;
}



void fn_00147f6c(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015cca0(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



void fn_00147f90(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015ccac(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



void fn_00147fb4(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0015cb20(*(undefined4 *)(iVar1 + 0x48));
  return;
}



void fn_00148660(void)

{
  fn_00173b98(DAT_008977d0,0);
  return;
}



void fn_001486b0(void)

{
  fn_00173b98(DAT_008977d0,1);
  return;
}



void fn_0014e3e4(undefined4 param_1)

{
  fn_0015e1b0(&DAT_008ef530,param_1);
  return;
}



void fn_0014f5e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0017cec8(&DAT_008ef56c,param_1,param_2,param_3);
  return;
}



undefined4 fn_0014fb58(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  *(char *)(param_1 + 2) = (char)param_2;
  uVar2 = fn_0015f5b8(&DAT_008ef5bc,param_2);
  fn_00193380();
  return uVar2;
}



void fn_0014fbd8(void)

{
  fn_0015f1b0(&DAT_008ef56c);
  return;
}



void fn_00151944(undefined4 *param_1)

{
  *param_1 = DAT_00857a40;
  return;
}



int * fn_00152218(int *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    fn_001521a8(param_1);
  }
  fn_0015e304(param_1);
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



void fn_00153d2c(int param_1,int param_2)

{
  if (**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) {
    return;
  }
  fn_00161b24();
  return;
}



void fn_00153d4c(int param_1,int param_2)

{
  if (**(int **)(*(int *)(*(int *)(param_1 + 4) + 0x360) + param_2 * 4) == 0) {
    return;
  }
  fn_00161b2c();
  return;
}



void fn_00154ac8(undefined4 param_1)

{
  fn_001560b4(*(undefined4 *)(DAT_00897804 + 8),param_1);
  return;
}



undefined1 fn_00155124(void)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return *(undefined1 *)(iVar1 + 0xc);
}



void fn_001552cc(void)

{
  int iVar1;
  
  iVar1 = fn_00174864(DAT_008977e4);
  if (iVar1 == 0) {
    return;
  }
  fn_0015a9bc();
  return;
}



void fn_0015559c(void)

{
  fn_00174858(DAT_008977e4);
  fn_0015c948();
  fn_0017f8e0();
  return;
}



void fn_00155a3c(void)

{
  fn_00154ae0(DAT_008977e4);
  fn_00164198();
  return;
}



undefined4 fn_00159d14(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  return *(undefined4 *)(iVar1 + 0x94);
}



void fn_00159d74(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0017f45c(*(undefined4 *)(iVar1 + 0x48),param_1);
  return;
}



void fn_0015b054(void)

{
  fn_0016ba78(DAT_00897800);
  return;
}



void fn_0015b0dc(undefined4 param_1)

{
  fn_0016ba84(DAT_00897800,param_1);
  return;
}



void fn_0015b0f8(undefined4 param_1)

{
  fn_0016bad4(DAT_00897800,param_1);
  return;
}



void fn_0015cc44(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016dd44();
  *puVar1 = DAT_00833ea0;
  return;
}



void fn_0015ce4c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,0,param_3);
  *puVar1 = DAT_0083aa10;
  return;
}



void fn_0015cea4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016a8e4(param_1,param_2,0,1,param_3);
  *puVar1 = DAT_0083aa40;
  return;
}



undefined4 fn_0015f460(int param_1,undefined2 param_2)

{
  int iVar1;
  uint *puVar2;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(param_1 + 0x1322) * 4 + 0x10a4);
  *(undefined2 *)(puVar2 + 6) = param_2;
  *puVar2 = *puVar2 | 0x8000000;
  fn_00193380();
  return 1;
}

