#include "001534d4_00153bd8a.h"



int fn_00153930(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0xf0;
  param_1[1] = 400;
  *(undefined2 *)(param_1 + 2) = 0x8058;
  *(undefined2 *)((int)param_1 + 10) = 0x88f0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_0015d044();
  *(undefined4 *)(iVar1 + 0x48) = 0;
  return iVar1 + -0x14;
}



void fn_0015382c(undefined4 *param_1,undefined4 *param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  uVar3 = param_2[2];
  uVar4 = *param_2;
  uVar5 = param_2[1];
  uVar6 = param_2[3];
  uVar7 = param_2[4];
  *param_1 = uVar4;
  param_1[1] = uVar5;
  param_1[2] = uVar3;
  param_1[0x15] = uVar4;
  param_1[0x16] = uVar5;
  param_1[3] = uVar6;
  param_1[4] = uVar7;
  sVar1 = *(short *)(param_1 + 2);
  if (sVar1 != 0) {
    param_1[5] = uVar6;
    if (sVar1 == -0x7faa) {
      uVar2 = 4;
    }
    else if (sVar1 == -0x7fa9) {
      uVar2 = 2;
    }
    else if ((sVar1 == -0x7fa8) || (sVar1 != -0x729e)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 6) = uVar2;
    param_1[7] = uVar4;
    *(undefined1 *)((int)param_1 + 0x19) = 0;
    param_1[0xc] = 0x3f800000;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = uVar5;
    param_1[0x17] = param_1[0x17] | 1;
  }
  sVar1 = *(short *)((int)param_1 + 10);
  if (sVar1 != 0) {
    param_1[0xe] = uVar7;
    uVar2 = 0;
    if (sVar1 != -0x7e5b) {
      if (sVar1 == -0x7e5a) {
        uVar2 = 2;
      }
      else {
        uVar2 = 3;
      }
    }
    param_1[0x10] = uVar4;
    *(undefined1 *)(param_1 + 0xf) = uVar2;
    param_1[0x11] = uVar5;
    param_1[0x12] = 0x3f800000;
    *(undefined1 *)(param_1 + 0x13) = 0;
    param_1[0x17] = param_1[0x17] | 2;
  }
  return;
}



int fn_0015370c(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  piVar1 = *(int **)(param_1 + 4);
  if (piVar1 != (int *)0x0) {
    param_2 = *(int *)(param_1 + 8);
  }
  if (piVar1 != (int *)0x0 && param_2 != 0) {
    (**(code **)(*piVar1 + 0xc))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  uVar2 = *(uint *)(param_1 + 400);
  uVar3 = uVar2;
  if (*(uint *)(param_1 + 0x194) < uVar2) {
    do {
      uVar3 = uVar3 + 0xc;
    } while (uVar3 != *(uint *)(param_1 + 0x194));
  }
  fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x198) - uVar2) / 0xc,0);
  puVar6 = *(undefined4 **)(param_1 + 0x188);
  for (puVar5 = *(undefined4 **)(param_1 + 0x184); puVar5 != puVar6; puVar5 = puVar5 + 10) {
    (**(code **)*puVar5)(puVar5);
  }
  iVar4 = *(int *)(param_1 + 0x184);
  fn_001008c4(iVar4,(*(int *)(param_1 + 0x18c) - iVar4) / 0x28,0);
  uVar2 = *(uint *)(param_1 + 0x178);
  uVar3 = uVar2;
  if (*(uint *)(param_1 + 0x17c) <= uVar2) {
    for (; uVar3 != *(uint *)(param_1 + 0x17c); uVar3 = uVar3 + 0x1c) {
    }
  }
  uVar3 = *(int *)(param_1 + 0x180) - uVar2;
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  fn_001008c4(uVar2,(iVar4 >> 4) - (iVar4 >> 0x1f),0);
  return param_1;
}



int fn_001534d4(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = 0;
  uVar3 = 0x3f800000;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar3;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e4c = uVar3;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e60 = uVar3;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(param_1 + 7,&DAT_008f9e38);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)(param_1 + 0x15) = 0;
  *(undefined1 *)((int)param_1 + 0x55) = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar3;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e4c = uVar3;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e60 = uVar3;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(param_1 + 0x16,&DAT_008f9e38);
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar3;
    DAT_008f9e3c = uVar2;
    DAT_008f9e40 = uVar2;
    DAT_008f9e44 = uVar2;
    DAT_008f9e48 = uVar2;
    DAT_008f9e4c = uVar3;
    DAT_008f9e50 = uVar2;
    DAT_008f9e54 = uVar2;
    DAT_008f9e58 = uVar2;
    DAT_008f9e5c = uVar2;
    DAT_008f9e60 = uVar3;
    DAT_008f9e64 = uVar2;
  }
  fn_001781f0(param_1 + 0x22,&DAT_008f9e38);
  param_1[0x2e] = uVar2;
  param_1[0x2f] = uVar2;
  param_1[0x30] = 0x43700000;
  param_1[0x31] = 0x43c80000;
  param_1[0x32] = 0x18000000;
  param_1[0x34] = uVar2;
  param_1[0x35] = uVar3;
  param_1[0x36] = 0;
  param_1[0x38] = 0xffffffff;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  iVar1 = fn_00101a1c(param_1 + 0x40,&DAT_00162788,0x10,6);
  *(undefined1 *)(iVar1 + 0x60) = 1;
  *(undefined1 *)(iVar1 + 0x61) = 4;
  iVar1 = fn_00162ce4(iVar1 + 100);
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  return iVar1 + -0x164;
}


