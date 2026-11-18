/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 002c946c .. 002e290c.
 */
#include "decompiled.h"
#include "fuzzy_11.h"


void fn_002c946c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0034d9e4();
  *puVar1 = DAT_0081f8dc;
  *(undefined1 *)((int)puVar1 + 0xdd) = 0;
  return;
}


void fn_002cf33c(void)

{undefined4 uVar3;

  int iVar1;
  int iVar2;
  
  
  iVar1 = fn_006c7ef8();
  uVar3 = *(undefined4 *)(DAT_00897804 + 8);
  iVar2 = fn_006b64b0(uVar3);
  fn_0025bd60(uVar3,iVar2 - iVar1);
  return;
}

void fn_002d1d24(void)

{
  int iVar1;
  
  iVar1 = fn_002961ac(DAT_0089783c);
  if (iVar1 == 0) {
    return;
  }
  fn_00112fb4(DAT_0089783c);
  return;
}



void fn_002d3f28(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7350();
  puVar1[0xb] = 0;
  *puVar1 = DAT_00820118;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  *(undefined1 *)(puVar1 + 0xf) = 0;
  return;
}



void fn_002d6328(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = DAT_00820190;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 0;
  return;
}



void fn_002d69e8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    param_2 = *(int *)(param_1 + 8);
  }
  if (iVar1 != 0 && param_2 != 0) {
    fn_00301f50(iVar1,0x1db7c);
    fn_00301f50(*(undefined4 *)(param_1 + 8),0xc88);
    *(undefined4 *)(param_1 + 0xc) = 1;
  }
  return;
}



int fn_002d6c94(int param_1)

{
  return (int)*(short *)(DAT_008923d8 + param_1 * 10);
}



void fn_002d7624(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = DAT_008201d8;
  return;
}



undefined4 fn_002d7e00(int param_1)

{
  return *(undefined4 *)(DAT_008992d4 + param_1 * 4);
}



void fn_002d8038(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x002d8058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



int fn_002d81a0(int param_1)

{
  return (int)*(short *)(DAT_008924f8 + param_1 * 2);
}



undefined4 fn_002d8290(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  *(undefined1 *)(param_1 + 0x1c) = 1;
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_002fb61c(), iVar1 == 0)) {
    uVar3 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    uVar2 = fn_006f7a0c();
    iVar1 = fn_006f6434(uVar2,uVar3);
    if (iVar1 != 2) {
      (**(code **)(*param_1 + 0x3c))(param_1);
      fn_002da538(param_1,0);
      return 1;
    }
  }
  return 1;
}



void fn_002db428(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) && (iVar1 = fn_002fb61c(), iVar1 == 0)) {
    fn_002d89ac(param_1);
    iVar1 = fn_002d8370(0xffffffff);
    if (iVar1 != 0) {
      fn_002d8f08(param_1);
      return;
    }
  }
  return;
}



undefined4 fn_002dbc28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 2)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002dbc64(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 4)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_002dbca0(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 != 0) && (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 4)) {
    fn_006f756c(DAT_008977e0);
    iVar1 = fn_006bb17c();
    if (iVar1 == 1) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002dbd0c(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if (iVar1 != 0) {
    iVar1 = fn_006f756c(DAT_008977e0);
    if ((*(int *)(iVar1 + 0x20) == 1) ||
       (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 4)) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002dbdb4(void)

{
  int iVar1;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 != 0) && (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) == 1)) {
    fn_006f756c(DAT_008977e0);
    iVar1 = fn_006bb17c();
    if (iVar1 == 2) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_002dbe28(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_002d8370(0xffffffff);
  if ((iVar1 == 0) || (iVar1 = fn_006f756c(DAT_008977e0), *(int *)(iVar1 + 0x20) != 3)) {
    uVar2 = 0;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_002dbf44(undefined4 *param_1)

{
  *param_1 = DAT_008202c4;
  param_1[1] = 0;
  return;
}



void fn_002dc06c(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f7a70(DAT_008977e0);
  fn_002ff3b4(uVar1,*(undefined4 *)(param_1 + 0x13c));
  return;
}



void fn_002dc120(int *param_1)

{
  undefined4 uVar1;
  
  (**(code **)(*param_1 + 0x13c))(param_1);
  uVar1 = fn_006f7a70(DAT_008977e0);
  fn_002ff3b4(uVar1,param_1[0x4f]);
                    /* WARNING: Could not recover jumptable at 0x002dc15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x140))(param_1);
  return;
}



void fn_002ddb0c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002b13a0();
  *puVar1 = DAT_0082058c;
  return;
}



void fn_002deb40(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_002defa8(iVar1,param_1);
  return;
}



void fn_002df4e8(int *param_1,int param_2)

{
  param_1[0x60] = param_2;
                    /* WARNING: Could not recover jumptable at 0x002df4f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2 + 0x10);
  return;
}



void fn_002e290c(int param_1,undefined4 param_2)

{
  **(undefined4 **)(param_1 + 4) = param_2;
  return;
}

