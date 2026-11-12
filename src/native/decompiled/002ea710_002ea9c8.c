#include "002ea710_002ea9c8.h"



void fn_002ea9b8(void)

{
  fn_002ea9c8();
  fn_002feef8();
  return;
}



void fn_002ea9c8(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  
  uVar4 = 0;
  *param_1 = &DAT_008210a8;
  if ((int)(param_1[8] - param_1[7]) >> 3 != 0) {
    do {
      if (((uVar4 < (uint)((int)(param_1[8] - param_1[7]) >> 3)) &&
          (piVar2 = (int *)(param_1[7] + uVar4 * 8), piVar2[1] != 0)) &&
         (iVar3 = *piVar2, *piVar2 = iVar3 + -1, iVar3 + -1 == 0)) {
        fn_0012f208();
        puVar5 = (undefined4 *)(param_1[7] + uVar4 * 8);
        if (puVar5[1] != 0) {
          fn_0012d73c();
        }
        puVar5[1] = 0;
        *puVar5 = 0;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(param_1[8] - param_1[7]) >> 3));
  }
  uVar1 = param_1[7];
  uVar4 = uVar1;
  if ((uint)param_1[8] < uVar1) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != param_1[8]);
  }
  fn_001008c4(uVar1,(int)(param_1[9] - uVar1) >> 3,0);
  fn_00241ddc(param_1);
  return;
}



void fn_002ea95c(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  bool bVar4;
  
  piVar2 = *(int **)(param_1 + 0x1c);
  bVar4 = *(int *)(param_1 + 0x20) - (int)piVar2 >> 3 != 0;
  iVar1 = 0;
  if (bVar4) {
    iVar1 = piVar2[1];
  }
  if ((bVar4 && iVar1 != 0) && (iVar1 = *piVar2, *piVar2 = iVar1 + -1, iVar1 + -1 == 0)) {
    fn_0012f208(param_1);
    puVar3 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar3[1] != 0) {
      fn_0012d73c();
    }
    puVar3[1] = 0;
    *puVar3 = 0;
  }
  return;
}



undefined4 fn_002ea870(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(DAT_00892894 + param_1 * 0x2c + -4) & DAT_00892874) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



void fn_002ea858(void)

{
  DAT_00892894 = 0;
  DAT_00892898 = 0;
  return;
}



undefined4 fn_002ea824(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_00892894 + param_1 * 0x2c + -0xc);
  }
  return uVar2;
}



int fn_002ea7f0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar2 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar2 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(DAT_00892894 + param_1 * 0x2c + -0x10);
  }
  return iVar1;
}



undefined4 fn_002ea7e0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(DAT_00892894 + param_1 * 0x2c + -4) & DAT_00892890) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined4 fn_002ea7a8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_00892894 + param_1 * 0x2c + param_2 * 4 + -0x2c);
  }
  return uVar2;
}



undefined4 fn_002ea798(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(DAT_00892894 + param_1 * 0x2c + -4) & DAT_00892878) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



int fn_002ea764(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar2 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar2 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(DAT_00892894 + param_1 * 0x2c + -0x12);
  }
  return iVar1;
}



int fn_002ea730(int param_1)

{
  int iVar1;
  bool bVar2;
  
  bVar2 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar2 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar2 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(short *)(DAT_00892894 + param_1 * 0x2c + -8);
  }
  return iVar1;
}



undefined4 fn_002ea720(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(DAT_00892894 + param_1 * 0x2c + -4) & DAT_00892880) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}



undefined4 fn_002ea710(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  bVar3 = DAT_00892898 == param_1;
  iVar1 = DAT_00892898 - param_1;
  if (DAT_00892898 >= param_1) {
    bVar3 = param_1 == 0;
    iVar1 = param_1;
  }
  if (bVar3 || iVar1 < 0 != (DAT_00892898 < param_1 && SBORROW4(DAT_00892898,param_1))) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if ((*(uint *)(DAT_00892894 + param_1 * 0x2c + -4) & DAT_0089288c) != 0) {
      uVar2 = 1;
    }
  }
  return uVar2;
}


