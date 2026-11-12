#include "00619538_00619734.h"



void fn_00619734(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = 1 << (param_2 & 0x1f);
  uVar2 = *(uint *)(param_1 + ((int)param_2 >> 5) * 4);
  if (param_3 == 0) {
    uVar2 = uVar2 & ~uVar1;
  }
  else {
    uVar2 = uVar2 | uVar1;
  }
  *(uint *)(param_1 + ((int)param_2 >> 5) * 4) = uVar2;
  return;
}



void fn_00619720(int param_1)

{
  if (*(char *)(param_1 + 6) != -1) {
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  return;
}



undefined4 fn_006196d8(int param_1,int param_2)

{
  if ((*(char *)(param_2 + 1) == '\a') ||
     ((param_1 - 0x10U < 8 && ('\0' < *(char *)(param_2 + param_1 * 0x418 + -0x3fd3))))) {
    return 1;
  }
  return 0;
}



bool fn_00619538(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar3 = fn_006918d0(*param_1,param_2,param_1[2],param_1[3]);
  uVar4 = fn_00660994(param_1[4],(int)((ulonglong)uVar3 >> 0x20),param_1[6],param_1[7]);
  uVar5 = fn_00660d78(param_1[8],(int)((ulonglong)uVar4 >> 0x20),param_1[10],param_1[0xb]);
  uVar6 = fn_00690474(param_1[0xc],(int)((ulonglong)uVar5 >> 0x20),param_1[0xe],param_1[0xf]);
  uVar7 = fn_0069084c(param_1[0x10],(int)((ulonglong)uVar6 >> 0x20),param_1[0x12],param_1[0x13]);
  uVar8 = fn_00690bd4(param_1[0x14],(int)((ulonglong)uVar7 >> 0x20),param_1[0x16],param_1[0x17]);
  iVar1 = fn_006916e4(param_1[0x18],(int)((ulonglong)uVar8 >> 0x20),param_1[0x1a],param_1[0x1b]);
  uVar9 = fn_0065dfc0(param_1[0x1c],param_1[0x23],param_1[0x1e],param_1[0x1f],param_1[0x20]);
  uVar10 = fn_0022727c(param_1[0x3c],(int)((ulonglong)uVar9 >> 0x20),param_1[0x3e],param_1[0x3f]);
  uVar11 = fn_00388868(param_1[0x40],(int)((ulonglong)uVar10 >> 0x20),param_1[0x42],param_1[0x43]);
  uVar12 = fn_003e6a58(param_1[0x44],(int)((ulonglong)uVar11 >> 0x20),param_1[0x46],param_1[0x47]);
  uVar13 = fn_0025fcc0(param_1[0x48],(int)((ulonglong)uVar12 >> 0x20),param_1[0x4a],param_1[0x4b]);
  iVar2 = fn_00269720(param_1[0x4c],(int)((ulonglong)uVar13 >> 0x20),param_1[0x4e],param_1[0x4f]);
  return iVar2 != 0 &&
         ((int)uVar13 != 0 &&
         ((int)uVar12 != 0 &&
         ((int)uVar11 != 0 &&
         ((int)uVar10 != 0 &&
         ((int)uVar9 != 0 &&
         (iVar1 != 0 &&
         ((int)uVar8 != 0 &&
         ((int)uVar7 != 0 &&
         ((int)uVar6 != 0 && ((int)uVar5 != 0 && ((int)uVar4 != 0 && (int)uVar3 != 0)))))))))));
}


