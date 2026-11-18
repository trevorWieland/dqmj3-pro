/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 002f6784 .. 0030ffcc.
 */
#include "decompiled.h"
#include "fuzzy_13.h"


undefined4 fn_002f6784(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(char *)(param_1 + 0xc) == '\x03') &&
       (iVar1 = fn_0028ec90(*(undefined4 *)(*(int *)(DAT_008977ec + 0x24) + 0x14)), iVar1 != 0)) &&
      (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_002f6968(undefined4 param_1)

{
  fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_1);
  return;
}



bool fn_002f6b58(void)

{
  uint uVar1;
  
  uVar1 = fn_006b6238(*(undefined4 *)(DAT_00897804 + 8));
  return uVar1 < 0xf1;
}



undefined4 fn_002f6dcc(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x18);
}



undefined4 fn_002f6f40(void)

{
  return *(undefined4 *)(DAT_00897804 + 8);
}



undefined4 fn_002f6fa8(void)

{
  return *(undefined4 *)(DAT_008977ec + 0x28);
}



int fn_002f7420(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_1);
  return iVar1 + 0x20;
}



undefined4 fn_002f78f4(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x20);
}



undefined4 fn_002f7e70(void)

{
  return *(undefined4 *)(DAT_00897804 + 0x3c);
}



void fn_002f7e84(undefined4 param_1)

{
  fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return;
}



undefined4 fn_002f8974(void)

{
  undefined4 uVar1;
  
  if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_002f9484(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x90) == '\0') {
      fn_002f9124(param_1);
    }
    else if ((*(char *)(param_1 + 0x90) == '\x02') &&
            (iVar1 = fn_00269b38(DAT_00897818), iVar1 == 2)) {
      *(undefined1 *)(param_1 + 0x90) = 0;
    }
  }
  fn_002c89dc(param_1);
  return;
}



void fn_002fa42c(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x7a8,param_2,0x8d8);
  return;
}



void fn_002fa440(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_0066e5b4(DAT_00898840,*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 2;
    puVar2 = (undefined4 *)fn_0013d4ec();
    *(undefined4 *)(param_1 + 8) = *puVar2;
  }
  return;
}



void fn_002fa47c(int param_1)

{
  fn_00301f50(param_1 + 0x7a8,0x8d8);
  return;
}



void fn_002faa10(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b13a0();
  *puVar1 = DAT_00821614;
  return;
}



void fn_002fb4c4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_00821650;
  return;
}



undefined4 * fn_002fc004(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(8,DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 1;
  }
  *param_1 = puVar1;
  return param_1;
}



undefined4 fn_00303edc(char *param_1)

{
  int iVar1;
  
  if ((*param_1 == '\x01') && (iVar1 = fn_00269b38(DAT_00897818), iVar1 == 2)) {
    *param_1 = '\x02';
  }
  else if (*param_1 != '\x02') {
    return 0;
  }
  return 1;
}



void fn_00303f80(undefined1 *param_1)

{
  fn_00699094(DAT_008977e0);
  fn_0026a494(DAT_00897818,*(undefined4 *)(param_1 + 4),1);
  *param_1 = 1;
  return;
}



void fn_00304540(undefined4 *param_1)

{
  *param_1 = DAT_0082189c;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}



void fn_00304570(undefined4 *param_1)

{
  *param_1 = DAT_0082189c;
  fn_002feef8(param_1[7]);
  fn_002feef8(param_1[6]);
  fn_002feef8(param_1[5]);
  fn_002feef8(param_1[4]);
  fn_002feef8(param_1[3]);
  fn_002feef8(param_1[2]);
  fn_002feef8(param_1);
  return;
}



void fn_003053fc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = DAT_008218f4;
  return;
}



void fn_00308330(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x94,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00308390(iVar1,param_1);
  return;
}



void fn_00308550(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003085d0(iVar1,param_1);
  return;
}



void fn_00308e54(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xb0,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00308f34(iVar1,param_1);
  return;
}



void fn_0030f93c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00260690();
  puVar1[0x1e] = 0;
  *puVar1 = DAT_008222a0;
  *(undefined1 *)(puVar1 + 0x1f) = 0;
  return;
}



void fn_0030fcf0(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x20) != -1) {
    piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
    (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  }
  return;
}



undefined4 * fn_0030ffcc(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(4,DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
  }
  *param_1 = puVar1;
  return param_1;
}

