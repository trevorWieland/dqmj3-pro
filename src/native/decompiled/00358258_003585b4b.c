#include "00358258_003585b4b.h"



void fn_003585b4(int param_1,short *param_2,int param_3)

{
  short sVar1;
  undefined1 uVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  sVar4 = fn_006bfda8(param_1 + 4);
  *param_2 = sVar4;
  fn_006bfda8(param_1 + 4);
  uVar2 = fn_00661094();
  *(undefined1 *)(param_2 + 1) = uVar2;
  fn_006bfdb4(param_1 + 4,param_2 + 2,0xc);
  sVar4 = fn_006bf5bc(param_1 + 4);
  param_2[0xe] = sVar4;
  sVar4 = fn_006bf5c8(param_1 + 4);
  param_2[0xf] = sVar4;
  sVar4 = fn_006c0028(param_1 + 4);
  param_2[0x10] = sVar4;
  sVar4 = fn_006c0114(param_1 + 4);
  param_2[0x11] = sVar4;
  sVar4 = fn_006c09b4(param_1 + 4);
  param_2[0x12] = sVar4;
  sVar4 = fn_006bed98(param_1 + 4);
  param_2[0x13] = sVar4;
  sVar4 = fn_006c01f4(param_1 + 4);
  param_2[0x14] = sVar4;
  sVar4 = fn_006bff0c(param_1 + 4);
  param_2[0x15] = sVar4;
  uVar2 = fn_006c0108(param_1 + 4);
  *(undefined1 *)(param_2 + 0x2c) = uVar2;
  uVar2 = fn_006bfe90(param_1 + 4);
  *(undefined1 *)((int)param_2 + 0x59) = uVar2;
  uVar2 = fn_006bf0f0(param_1 + 4);
  *(undefined1 *)(param_2 + 0x2d) = uVar2;
  fn_006c001c(param_1 + 4);
  fn_00654cc4(param_2 + 0x203,0);
  iVar6 = 1;
  do {
    uVar2 = fn_006bf24c(param_1 + 4,iVar6);
    *(undefined1 *)((int)param_2 + iVar6 + 0x3a4) = uVar2;
    iVar8 = iVar6 + 1;
    *(undefined1 *)((int)param_2 + iVar6 + 0x3be) = 0;
    iVar6 = iVar8;
  } while (iVar8 < 0x1a);
  cVar3 = fn_006c0354(param_1 + 4,param_2 + 0x92,0x6e,1,1,1);
  *(char *)(param_2 + 0x90) = cVar3;
  uVar9 = 0;
  if (cVar3 != '\0') {
    do {
      uVar2 = fn_006aed20(param_1,uVar9 & 0xffff);
      uVar10 = uVar9 + 1;
      *(undefined1 *)((int)param_2 + uVar9 + 0x203) = uVar2;
      uVar9 = uVar10;
    } while ((int)uVar10 < (int)(uint)*(byte *)(param_2 + 0x90));
  }
  fn_006bf5ec(param_1 + 4,param_2 + 0x142,0x4c,1,1,1,1,1);
  fn_00654c74(param_2 + 0x142);
  fn_0035826c(param_2);
  fn_00358834(param_2);
  *(undefined4 *)(param_2 + 0x16) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_2 + 0x12);
  *(undefined4 *)(param_2 + 0x1a) = *(undefined4 *)(param_2 + 0x14);
  if (param_3 != 0) {
    sVar4 = fn_00176dc0(param_2);
    param_2[0xe] = sVar4;
    sVar4 = fn_00176e70(param_2);
    param_2[0xf] = sVar4;
  }
  sVar4 = fn_006bf1d4(param_1 + 4);
  sVar5 = 0;
  param_2[0x1f9] = sVar4;
  sVar4 = *param_2;
  uVar11 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar6 = fn_006b8478(uVar11);
  iVar8 = 0;
  sVar1 = 0;
  if (0 < iVar6) {
    do {
      sVar5 = sVar1;
      iVar7 = fn_006b854c(uVar11,iVar8);
      if ((iVar7 != 0) && (*(short *)(iVar7 + 0x1c) == sVar4)) {
        sVar5 = sVar5 + 1;
      }
      iVar8 = iVar8 + 1;
      sVar1 = sVar5;
    } while (iVar8 < iVar6);
  }
  param_2[0x1fa] = sVar5;
  *(undefined1 *)(param_2 + 0x1fc) = 0x32;
  param_2[0x1fb] = param_2[0x10];
  return;
}



int fn_00358548(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b8478(uVar5);
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_006b854c(uVar5,iVar3);
      if ((iVar2 != 0) && (*(short *)(iVar2 + 0x1c) == param_1)) {
        iVar4 = (int)(short)((short)iVar4 + 1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return iVar4;
}


