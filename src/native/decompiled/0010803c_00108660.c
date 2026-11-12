#include "0010803c_00108660.h"

static void svc_0x1(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x1 }
#endif
}

static void svc_0x38(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x38 }
#endif
}


void fn_001085b8(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if ((int *)piVar1[0x79] != (int *)0x0) {
    (**(code **)(*(int *)piVar1[0x79] + 4))();
  }
  piVar1[0x79] = 0;
  fn_0010fee0(piVar1);
  if ((int *)*piVar1 != (int *)0x0) {
    (**(code **)(*(int *)*piVar1 + 4))();
  }
  *piVar1 = 0;
  fn_002feca8(piVar1[0x38]);
  piVar1[0x38] = 0;
  return;
}



void fn_00108570(undefined4 *param_1,undefined4 param_2)

{
  svc_0x38();
  *param_1 = param_2;
  return;
}



undefined4
fn_00108534(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  svc_0x1();
  *param_1 = param_2;
  return param_5;
}



int fn_001084c0(uint *param_1)

{
  int iVar1;
  
  iVar1 = 86400000;
  fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),86400000,0)
  ;
  return iVar1 % 1000;
}



void fn_001084a8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001160fc();
  *puVar1 = &DAT_00851418;
  return;
}



void fn_0010803c(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a3a4();
  }
  DAT_008977cc = uVar2;
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010963c();
  }
  DAT_008977d0 = uVar2;
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010aea8();
  }
  DAT_008977d4 = uVar2;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010ae78();
  }
  DAT_008977d8 = uVar2;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010b10c();
  }
  DAT_00897824 = uVar2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010c67c(iVar1,0xc0000,0x10);
  }
  DAT_008977dc = uVar2;
  iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001089a4();
  }
  DAT_008977f0 = uVar2;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00108c60();
  }
  DAT_008977f4 = uVar2;
  fn_001089c8();
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001091ac();
  }
  DAT_008977f8 = uVar2;
  fn_00111f5c();
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109be4();
  }
  DAT_008977fc = uVar2;
  fn_00109b80();
  fn_0010f2e0();
  fn_00108910();
  iVar1 = fn_00145b00(0x95c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109a14();
  }
  DAT_00897800 = uVar2;
  fn_00109684();
  puVar3 = (undefined4 *)fn_00145b00(100,&DAT_00812c8c);
  if (puVar3 == (undefined4 *)0x0) {
    iVar1 = 0;
  }
  else {
    *puVar3 = &DAT_00859bbc;
    iVar4 = fn_00119b40(puVar3 + 7);
    iVar1 = iVar4 + -0x1c;
    *(undefined4 *)(iVar4 + 0x40) = 0;
    fn_0010db04(iVar1);
  }
  DAT_00897850 = iVar1;
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00108e28();
  }
  DAT_00897838 = uVar2;
  fn_00108d1c();
  iVar1 = fn_00145b00(0x6c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010ebe0();
  }
  DAT_00897804 = uVar2;
  fn_0010e464();
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a868();
  }
  DAT_00897808 = uVar2;
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a868();
  }
  DAT_0089780c = uVar2;
  iVar1 = fn_00145b00(100,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a868();
  }
  DAT_00897810 = uVar2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010940c();
  }
  DAT_00897814 = uVar2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109af4();
  }
  DAT_00897818 = uVar2;
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109178();
  }
  DAT_0089781c = uVar2;
  fn_00108e58();
  fn_00109334();
  fn_0010f1e4();
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109f04();
  }
  DAT_00897844 = uVar2;
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a898();
  }
  DAT_00897848 = uVar2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00108660();
  }
  DAT_008977e4 = uVar2;
  fn_00108614();
  iVar1 = fn_00145b00(0x22c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010f64c();
  }
  DAT_008977e0 = uVar2;
  iVar1 = fn_00145b00(4,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010ec40();
  }
  DAT_008977e8 = uVar2;
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010ac90();
  }
  DAT_008977ec = uVar2;
  iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00108eb4();
  }
  DAT_00897820 = uVar2;
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109eb8();
  }
  DAT_00897828 = uVar2;
  iVar1 = fn_00145b00(0x510,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010af68();
  }
  DAT_0089782c = uVar2;
  iVar1 = fn_00145b00(0x954,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109aa0();
  }
  DAT_00897830 = uVar2;
  iVar1 = fn_00145b00(0x30,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0010a310();
  }
  DAT_00897834 = uVar2;
  iVar1 = fn_00145b00(0x300,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109cc8();
  }
  DAT_0089783c = uVar2;
  iVar1 = fn_00145b00(0x38,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00109124();
  }
  DAT_00897840 = uVar2;
  iVar1 = fn_00145b00(0x504,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001094b0();
  }
  DAT_0089784c = uVar2;
  return;
}



int * fn_00108660(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_00145b00(0x1f0,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    *(undefined1 *)(puVar1 + 8) = 1;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    puVar1[0x13] = 0;
    *(undefined1 *)(puVar1 + 0x14) = 0;
    puVar1[0x15] = 0;
    puVar1[0x16] = 0;
    puVar1[0x17] = 0;
    puVar1[0x19] = 1;
    puVar1[0x18] = 0;
    puVar1[0x1a] = 0;
    iVar3 = fn_00120ea0(puVar1 + 0x34);
    iVar2 = fn_00118ca8(iVar3 + 0x18,0x3c);
    iVar3 = iVar2 + -0xe8;
    *(undefined4 *)(iVar2 + 8) = 0;
    fn_00301f50(iVar2 + 0xc,0xf0);
    *(undefined4 *)(iVar2 + 0xfc) = 0;
    *(undefined4 *)(iVar2 + 0x100) = 0;
    fn_00110c80(iVar2 + -0x78);
    fn_00301f50(iVar2 + 0xc,0xf0);
  }
  *param_1 = iVar3;
  return param_1;
}



void fn_00108614(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = (undefined4 *)*param_1;
  iVar1 = fn_00145b00(0x23f8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110700();
  }
  *param_1 = uVar2;
  fn_00110cfc(param_1 + 0x38);
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00113194();
  }
  param_1[0x79] = uVar2;
  return;
}


