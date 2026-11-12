#include "001c3bec_001c3f90.h"



void fn_001c3f90(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 local_14;
  
  local_14 = 0;
  iVar1 = fn_00174864(DAT_008977e4);
  fn_006ebfa0(*(undefined4 *)(iVar1 + 4),&local_14,0,0,0);
  uVar2 = local_14;
  fn_00163890();
  uVar3 = VectorFloatToUnsigned(uVar2,3);
  if (0x1e < uVar3) {
    uVar3 = 0x1e;
  }
  fn_001c400c(param_1,uVar3,param_2,param_3);
  return;
}



void fn_001c3d90(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_00174828(DAT_008977e4);
  uVar2 = fn_006a7b78(DAT_008977e4);
  iVar3 = fn_00174834(DAT_008977e4);
  fn_00158f6c(uVar2,0x7a);
  fn_0017821c(uVar1,iVar3 + 0x180388,0x5b34);
  return;
}



void fn_001c3d30(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  fn_0017484c(DAT_008977e4);
  fn_00313b70();
  uVar1 = fn_0017484c(DAT_008977e4);
  local_10 = (local_10 & ~((unsigned int)0xff << 0)) | ((unsigned int)('\x10') & 0xff);
  do {
    iVar2 = fn_00182e2c(uVar1,&local_10);
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0xaf) = 0;
    }
    local_10 = (local_10 & ~((unsigned int)0xff << 0)) | ((unsigned int)((char)local_10 + '\x01') & 0xff);
  } while ((char)local_10 != '\x18');
  return;
}



void fn_001c3d0c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  int iVar2;
  undefined8 in_d8;
  
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x18);
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + iVar2 + 0xac) != '\0') {
      fn_00190cdc(*(undefined4 *)(iVar1 + (iVar2 * 2 + 3U & 0xff) * 4 + 0x68),0,param_3,param_4,
                   in_d8,unaff_r4);
      fn_00688aa0(*(undefined4 *)(iVar1 + (iVar2 * 2 + 2U & 0xff) * 4 + 0x68),1);
      *(undefined1 *)(iVar1 + iVar2 + 0xac) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_001c3cc0(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  int iVar2;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined8 in_d8;
  
  (**(code **)(*param_1 + 0x6c))(param_1);
  (**(code **)(*param_1 + 0x48))(param_1);
  param_1[0x20] = 0;
  fn_00788f48(param_1 + 0x1d);
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)((int)param_1 + 0xc1) = 0;
  fn_001c3330();
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x18);
  iVar2 = 0;
  do {
    if (*(char *)(iVar1 + iVar2 + 0xac) != '\0') {
      fn_00190cdc(*(undefined4 *)(iVar1 + (iVar2 * 2 + 3U & 0xff) * 4 + 0x68),0,param_3,param_4,
                   in_d8,unaff_r4,unaff_r5,unaff_r6);
      fn_00688aa0(*(undefined4 *)(iVar1 + (iVar2 * 2 + 2U & 0xff) * 4 + 0x68),1);
      *(undefined1 *)(iVar1 + iVar2 + 0xac) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_001c3ca0(void)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  short *psVar7;
  
  iVar3 = fn_00174858(DAT_008977e4);
  iVar3 = *(int *)(iVar3 + 0x54);
  cVar6 = '\x10';
  do {
    iVar4 = fn_00174828(DAT_008977e4);
    iVar4 = iVar4 + cVar6 * 0x418;
    psVar7 = (short *)(iVar4 + -0x4080);
    if ((0 < *psVar7) && (*(int *)(iVar3 + cVar6 * 4 + -0x3c) != 0)) {
      iVar5 = *(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4);
      if ((*(char *)(iVar4 + -0x4019) != '\0') == (bool)*(char *)(iVar5 + 0x55)) {
        *(bool *)(iVar5 + 0x55) = *(char *)(iVar4 + -0x4019) == '\0';
      }
      iVar5 = *(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4);
      if (*(short *)(iVar4 + -0x4064) != *(short *)(iVar5 + 0x8c)) {
        *(short *)(iVar5 + 0x8c) = *(short *)(iVar4 + -0x4064);
      }
      iVar5 = *(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4);
      if (*(short *)(iVar4 + -0x4062) != *(short *)(iVar5 + 0x90)) {
        *(short *)(iVar5 + 0x90) = *(short *)(iVar4 + -0x4062);
      }
      cVar1 = *(char *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x97);
      iVar5 = fn_00166804(psVar7);
      if (iVar5 != cVar1) {
        uVar2 = fn_00166804(psVar7);
        *(undefined1 *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x97) = uVar2;
      }
      if (*(char *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x9b) != '\0') {
        *(undefined1 *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x9b) = 0;
      }
      cVar1 = *(char *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x99);
      iVar5 = fn_001667f0(psVar7);
      if (iVar5 != cVar1) {
        uVar2 = fn_001667f0(psVar7);
        *(undefined1 *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x99) = uVar2;
      }
      if (*(char *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x9d) != '\0') {
        *(undefined1 *)(*(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4) + 0x9d) = 0;
      }
      iVar5 = *(int *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4);
      if (*(char *)(iVar5 + 0x93) != '\0') {
        *(undefined1 *)(iVar5 + 0x93) = 0;
      }
      fn_00309aa4(*(undefined4 *)(iVar3 + (char)(cVar6 + -0x10) * 4 + 4),iVar4 + -0x4025,0x61);
    }
    cVar6 = cVar6 + '\x01';
  } while (cVar6 < '\x18');
  return;
}



bool fn_001c3c7c(void)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  return *(char *)(iVar1 + 0xfc) == '\x01';
}



void fn_001c3bec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x185eed) == '\0') {
    iVar1 = (int)*(char *)(param_1 + 0x185ef1);
    if (iVar1 != 0) {
      if (*(char *)(param_1 + 0x185ef2) < iVar1) {
        iVar1 = (int)(char)(*(char *)(param_1 + 0x185ef1) + -1);
      }
      fn_001c3de8(iVar1);
    }
  }
  else {
    fn_001c35e4((int)*(char *)(param_1 + 0x185eee));
  }
  if (*(char *)(param_1 + 0x185eef) != '\0') {
    fn_001c35e4((int)*(char *)(param_1 + 0x185ef0));
    return;
  }
  iVar1 = (int)*(char *)(param_1 + 0x185ef3);
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x185ef4) < iVar1) {
    iVar1 = (int)(char)(*(char *)(param_1 + 0x185ef3) + -1);
  }
  fn_001c3de8(iVar1);
  return;
}



void fn_001c3de8(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_130 [20];
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 auStack_110 [224];
  undefined1 local_30 [4];
  undefined1 local_2c [8];
  
  uVar1 = param_1 - 0x18;
  if ((param_1 - 0x10 < 4 || uVar1 < 4) || (param_1 == 0x20 || param_1 == 0x22)) {
    iVar7 = 1;
  }
  else {
    iVar7 = 0;
  }
  fn_00301f50(auStack_130,0x100);
  uVar2 = fn_00182988(DAT_008977e4);
  local_114 = 0;
  local_113 = 0;
  local_11c = 0;
  local_118 = 0;
  local_112 = 0;
  fn_00101a1c(auStack_110,&LAB_002d3f0c,0x20,7);
  if (uVar1 < 8) {
    uVar4 = 0x18;
    uVar6 = 0x1c;
  }
  else {
    uVar4 = 0x10;
    uVar6 = 0x14;
  }
  if (iVar7 == 0) {
    if (uVar1 < 8) {
      uVar4 = 0x1c;
      uVar6 = 0x20;
    }
    else {
      uVar4 = 0x14;
      uVar6 = 0x18;
    }
  }
  iVar5 = 0;
  uVar1 = uVar4;
  if (uVar4 < uVar6) {
    do {
      if (uVar1 == param_1) {
        local_2c[0] = (char)uVar1;
        uVar3 = fn_0026a548(uVar2,local_2c);
        fn_0017821c(auStack_130 + iVar5 * 0x20,uVar3,0x1f);
        uVar3 = fn_0026a574(uVar2,iVar7);
        fn_0017821c(auStack_130 + (iVar5 + 1) * 0x20,uVar3,0x1f);
        iVar5 = iVar5 + 2;
      }
      else {
        local_30[0] = (char)uVar1;
        uVar3 = fn_0026a548(uVar2,local_30);
        fn_0017821c(auStack_130 + iVar5 * 0x20,uVar3,0x1f);
        iVar5 = iVar5 + 1;
      }
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar6);
  }
  uVar1 = uVar4;
  if (uVar4 < uVar6) {
    do {
      local_2c[0] = (undefined1)uVar1;
      uVar3 = fn_0026a548(uVar2,local_2c);
      fn_0017821c(uVar3,auStack_130 + (uVar1 - uVar4) * 0x20,0x1f);
      uVar1 = uVar1 + 1;
    } while ((int)uVar1 < (int)uVar6);
  }
  return;
}


