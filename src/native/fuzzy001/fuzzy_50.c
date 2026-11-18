/* Byte-exact functions recovered by the fuzzy-first sweep.
 *
 * Each function below was compiled with the measured original profile
 * (armcc 4.1 build 1454, --cpu=MPCore --apcs=/interwork --c99 -O3 -Otime) and
 * kept only because its placed bytes equal the original extent byte for byte.
 * Every one was re-scored inside this exact file after it was written; a single
 * differing byte would have kept it out. Nothing here is fitted.
 *
 * Address range of this file's functions: 006ac4d0 .. 006bc43c.
 */
#include "decompiled.h"
#include "fuzzy_50.h"


void fn_006ac4d0(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 0x1f0) = param_2;
  }
  return;
}



void fn_006ac4f4(void)

{
  fn_006b62ec(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ac520(void)

{
  if (*(int *)(DAT_00897804 + 0xc) == 0) {
    return;
  }
  fn_006b8478();
  return;
}



void fn_006ac664(void)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x140) = 0;
  }
  return;
}



void fn_006ac71c(void)

{
  fn_006b7f9c(*(undefined4 *)(DAT_00897804 + 0x24),0,1);
  return;
}



bool fn_006aca48(void)

{
  int iVar1;
  
  iVar1 = fn_006b51d8(*(undefined4 *)(DAT_00897804 + 0x1c),3);
  return iVar1 != 0;
}



int fn_006acc74(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 100 - iVar1;
}



void fn_006acfd8(void)

{
  if (*(int *)(DAT_00897804 + 0x68) == 0) {
    return;
  }
  fn_006c5058();
  return;
}



void fn_006acff8(void)

{
  fn_006b7aa0(*(undefined4 *)(DAT_00897804 + 0x24));
  return;
}



undefined4 fn_006ad120(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar3);
      if (*(char *)(iVar2 + 6) != '\0') {
        return 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return 0;
}



void fn_006ad17c(void)

{
  fn_006f7a84(DAT_008977e0);
  fn_006aa87c();
  return;
}



void fn_006ad1b8(undefined4 param_1,int param_2)

{
  fn_00154ac8(*(undefined4 *)(DAT_007c1de4 + param_2 * 4));
  return;
}



void fn_006ad228(void)

{
  fn_006b6410(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ad23c(void)

{
  fn_006b6464(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ad35c(void)

{
  if (*(int *)(DAT_00897804 + 0x68) == 0) {
    return;
  }
  fn_006c5038();
  return;
}



void fn_006ad6b8(void)

{
  fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



void fn_006ad7f0(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x44) == 0) {
    return;
  }
  fn_006b759c();
  return;
}



void fn_006b2e74(int *param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*param_1 + 6);
  if (cVar1 == '\x02') {
    fn_0022f750((char *)DAT_00234d94);
    return;
  }
  if ((cVar1 == '\x01') || (cVar1 != '\0')) {
    fn_0022f750((char *)DAT_00234d8c);
    return;
  }
  fn_0022f750(DAT_00234d9c);
  return;
}



undefined1 fn_006b2f08(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b3854(*(int *)(param_1 + 4) + 0x90);
  return (DAT_007c6734)[iVar1];
}


int fn_006b340c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_006b39b4(*(undefined4 *)(param_1 + 4));
  if (uVar1 > param_2) {
    iVar2 = fn_006b3e50(*(undefined4 *)(param_1 + 4),param_2);
    iVar2 = iVar2 + 0x28;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}

int fn_006b51a8(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 4) + param_2 * 2 + 0x4f8);
}



void fn_006b6088(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  fn_006cdaec();
  return;
}



undefined2 fn_006b63ec(int param_1)

{
  return *(undefined2 *)(*(int *)(param_1 + 4) + 0x264);
}


int fn_006b7aa8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 1;
  iVar1 = fn_00660c48();
  if (1 < iVar1) {
    do {
      iVar1 = fn_0028bbd8((int)(short)iVar2);
      if (iVar1 != 0) {
        iVar3 = iVar3 + 1;
      }
      iVar2 = iVar2 + 1;
      iVar1 = fn_00660c48();
    } while (iVar1 > iVar2);
  }
  return iVar3;
}

void fn_006b8370(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00661714(param_2);
  fn_00154ac8(*(undefined4 *)(DAT_007c44a8 + iVar1 * 8));
  return;
}



void fn_006b95b4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *unaff_r6;
  
  iVar1 = fn_00163868(2);
  iVar1 = iVar1 + 1;
  if (0 < iVar1) {
    unaff_r6 = &DAT_00897804;
  }
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b9bec(param_1);
      fn_002425dc(*(undefined4 *)(*unaff_r6 + 0x1c),uVar2);
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return;
}



undefined4 fn_006baaf4(int param_1,int param_2)

{
  return *(undefined4 *)(DAT_007ba040 + (uint)**(byte **)(*(int *)(param_1 + 4) + param_2 * 4) * 4)
  ;
}



undefined4 fn_006baba8(int param_1,int param_2)

{
  return *(undefined4 *)
          (DAT_0088fcf0 + (uint)*(byte *)(*(int *)(*(int *)(param_1 + 4) + param_2 * 4) + 5) * 4);
}



undefined4 fn_006bc43c(int param_1)

{
  return **(undefined4 **)(param_1 + 4);
}

