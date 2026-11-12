#include "00123f88_00124664baa.h"



void fn_00124218(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (((DAT_008c6300 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6300), iVar8 != 0)) {
    DAT_008f9e38 = 0x3f800000;
    DAT_008f9e3c = 0;
    DAT_008f9e40 = 0;
    DAT_008f9e44 = 0;
    DAT_008f9e48 = 0;
    DAT_008f9e4c = 0x3f800000;
    DAT_008f9e50 = 0;
    DAT_008f9e54 = 0;
    DAT_008f9e58 = 0;
    DAT_008f9e5c = 0;
    DAT_008f9e60 = 0x3f800000;
    DAT_008f9e64 = 0;
  }
  uVar7 = DAT_008f9e54;
  uVar6 = DAT_008f9e50;
  uVar5 = DAT_008f9e4c;
  uVar4 = DAT_008f9e48;
  uVar3 = DAT_008f9e44;
  uVar2 = DAT_008f9e40;
  uVar1 = DAT_008f9e3c;
  *(undefined4 *)(param_1 + 0x18) = DAT_008f9e38;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined4 *)(param_1 + 0x20) = uVar2;
  *(undefined4 *)(param_1 + 0x24) = uVar3;
  *(undefined4 *)(param_1 + 0x28) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x34) = uVar7;
  uVar3 = DAT_008f9e60;
  uVar2 = DAT_008f9e5c;
  uVar1 = DAT_008f9e58;
  *(undefined4 *)(param_1 + 0x44) = DAT_008f9e64;
  *(undefined4 *)(param_1 + 0x38) = uVar1;
  *(undefined4 *)(param_1 + 0x3c) = uVar2;
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  return;
}


