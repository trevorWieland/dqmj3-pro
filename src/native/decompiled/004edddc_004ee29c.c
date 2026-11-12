#include "004edddc_004ee29c.h"



void fn_004ee29c(int param_1)

{
  if ((1 < *(byte *)(param_1 + 0x908)) && (*(byte *)(param_1 + 0x908) == 2)) {
    fn_004f0010(param_1 + 4,0,0);
    fn_004f0010(param_1 + 0xe0,0,0);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    fn_004ef2b0(DAT_008c0634,0);
    *(undefined1 *)(param_1 + 0x908) = 1;
  }
  return;
}



int fn_004ee214(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  uVar1 = fn_006f4e34(param_1 + 0x1bc,param_2,&DAT_004ed728);
  if ((int)uVar1 < 0) {
    piVar2 = *(int **)(param_1 + 4);
    piVar4 = (int *)(param_1 + 4);
  }
  else {
    if (uVar1 < *(uint *)(param_1 + 0x1bc)) {
      iVar3 = *(int *)(*(int *)(param_1 + 0x1c4) + uVar1 * 4);
    }
    else {
      iVar3 = 0;
    }
    piVar4 = (int *)(iVar3 + 0x14);
    piVar2 = (int *)*piVar4;
  }
  iVar3 = 0;
  if (piVar2 != (int *)0x0) {
    iVar3 = (**(code **)(*piVar2 + 8))();
  }
  fn_004f0104(piVar4,param_3 + (param_4 - iVar3),param_3);
  return iVar3;
}



void fn_004ee1cc(void)

{
  int iVar1;
  
  iVar1 = DAT_008c0638;
  if (DAT_008c0638 != 0) {
    fn_00100414(DAT_008c0638 + 0x1d8,&LAB_004ee790,0x1cc,4);
    fn_004ecfd0(iVar1);
    DAT_008c0638 = 0;
  }
  return;
}



undefined4 fn_004ee10c(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar1 = fn_006f4e34(param_1 + 0x1bc,param_2,&DAT_004ed728);
  if ((int)uVar1 < 0) {
    uVar3 = 0;
    if (*(int **)(param_1 + 4) != (int *)0x0) {
      uVar3 = (**(code **)(**(int **)(param_1 + 4) + 8))();
    }
    fn_004f0104(param_1 + 4,param_3 + param_5,param_3,param_5);
    return uVar3;
  }
  if (uVar1 < *(uint *)(param_1 + 0x1bc)) {
    iVar4 = *(int *)(*(int *)(param_1 + 0x1c4) + uVar1 * 4);
  }
  else {
    iVar4 = 0;
  }
  piVar2 = *(int **)(iVar4 + 0x14);
  uVar3 = 0;
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 8))();
  }
  fn_004f0104((int *)(iVar4 + 0x14),param_3 + param_5,param_3,param_5);
  return uVar3;
}



undefined1 * fn_004edfd8(void)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  iVar1 = fn_004ed5b0();
  if (iVar1 == 0) {
    puVar2 = &DAT_e0a1482b;
  }
  else {
    iVar1 = fn_004ed5a0(iVar1);
    if (iVar1 == 0) {
      puVar2 = &DAT_e0a14827;
    }
    else if (DAT_008c0638 == 0) {
      iVar3 = fn_004ecfe0(0x90c);
      iVar1 = 0;
      if (iVar3 != 0) {
        iVar1 = fn_004f01e8(iVar3 + 4);
        iVar1 = fn_004f01e8(iVar1 + 0xdc);
        *(undefined4 *)(iVar1 + 0xdc) = 0;
        *(undefined4 *)(iVar1 + 0xe0) = 0;
        *(undefined4 *)(iVar1 + 0xe4) = 0;
        fn_00656aec((undefined4 *)(iVar1 + 0xdc),4,iVar1 + 0xe8);
        iVar3 = fn_00101a1c(iVar1 + 0xf8,&LAB_004ee76c,0x1cc,4);
        iVar1 = iVar3 + -0x1d8;
        *(undefined1 *)(iVar3 + 0x730) = 0;
        *(undefined1 *)(iVar3 + 0x731) = 0;
      }
      puVar2 = (undefined1 *)0x0;
      DAT_008c0638 = iVar1;
    }
    else {
      puVar2 = &DAT_d8a1482e;
    }
  }
  return puVar2;
}



undefined4 fn_004ede84(int param_1,undefined4 param_2,int param_3,uint param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  undefined1 auStack_40 [32];
  
  if (*(char *)(param_1 + 0x908) == '\x02') {
    uVar1 = fn_006f4e34(param_1 + 0x1bc,param_2,&DAT_004ed728);
    if ((int)uVar1 < 0) {
      uVar1 = 0;
      if (*(int **)(param_1 + 4) != (int *)0x0) {
        uVar1 = (**(code **)(**(int **)(param_1 + 4) + 8))();
      }
      if (uVar1 == 0) goto LAB_004edf80;
      if (param_4 <= uVar1) {
        return 0;
      }
      param_4 = param_4 - uVar1;
      fn_004f0104(param_1 + 0xe0,auStack_40,param_3,param_4);
      iVar2 = fn_001010c8(auStack_40,param_3 + param_4,uVar1);
    }
    else {
      if (uVar1 < *(uint *)(param_1 + 0x1bc)) {
        iVar2 = *(int *)(*(int *)(param_1 + 0x1c4) + uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      uVar1 = 0;
      if (*(int **)(iVar2 + 0x14) != (int *)0x0) {
        uVar1 = (**(code **)(**(int **)(iVar2 + 0x14) + 8))();
      }
      if (uVar1 == 0) {
LAB_004edf80:
        *param_5 = param_4;
        return 1;
      }
      if (param_4 <= uVar1) {
        return 0;
      }
      param_4 = param_4 - uVar1;
      fn_004f0104(iVar2 + 0xf0,auStack_40,param_3,param_4);
      iVar2 = fn_001010c8(auStack_40,param_3 + param_4,uVar1);
    }
    if (iVar2 == 0) {
      *param_5 = param_4;
      return 1;
    }
  }
  return 0;
}



void fn_004ede5c(int param_1,undefined1 param_2)

{
  if (*(char *)(param_1 + 0x908) == '\0') {
    *(undefined1 *)(param_1 + 0x909) = param_2;
    *(undefined1 *)(param_1 + 0x908) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x908) == '\x01') {
    *(undefined1 *)(param_1 + 0x909) = param_2;
  }
  return;
}



void fn_004ede4c(undefined4 *param_1)

{
  *param_1 = &DAT_00856ce8;
  return;
}



undefined4 * fn_004eddf4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004effa4();
  *puVar1 = &DAT_00856ce8;
  puVar1[8] = &DAT_00856cd4;
  puVar1[0xb] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return puVar1;
}



void fn_004edddc(int param_1)

{
  fn_004efd64();
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}


