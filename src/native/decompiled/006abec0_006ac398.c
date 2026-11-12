#include "006abec0_006ac398.h"



void fn_006ac398(void)

{
  fn_0066eb04(DAT_00897850);
  return;
}



bool fn_006ac370(void)

{
  int iVar1;
  
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  return 99 < iVar1;
}



void fn_006ac314(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 != 0) {
    uVar3 = 0xffffffff;
    iVar2 = fn_003035b0(param_2,(char *)&DAT_00861d18);
    if (iVar2 != 0) {
      uVar3 = fn_001639b0(param_1,param_2);
    }
    *(undefined4 *)(iVar1 + 0x140) = uVar3;
  }
  return;
}



void fn_006ac2c8(undefined4 param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f72c8(DAT_008977e0);
  if ((piVar1 == (int *)0x0) || ((**(code **)(*piVar1 + 0x54))(piVar1,param_2), param_2 != 0)) {
    return;
  }
  if (-1 < piVar1[0x72]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    piVar1[0x72] = -1;
  }
  if (-1 < piVar1[0x73]) {
    (**(code **)(**(int **)(DAT_008977e0 + 0x2c) + 0xc))();
    piVar1[0x73] = -1;
  }
  return;
}



uint fn_006ac1c0(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  fVar6 = 500.0;
  uVar3 = 0xffffffff;
  uVar2 = 1;
  do {
    if ((((-1 < (int)uVar2) && (uVar2 < 0x50)) &&
        (iVar4 = *(int *)(param_1 + uVar2 * 0x2c + 0x8c), iVar4 != 0)) &&
       (fVar8 = *(float *)(iVar4 + 0x20) - *(float *)(iVar1 + 0x20),
       fVar5 = *(float *)(iVar4 + 0x24) - *(float *)(iVar1 + 0x24),
       fVar7 = *(float *)(iVar4 + 0x28) - *(float *)(iVar1 + 0x28),
       fVar5 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar7 * fVar7), fVar5 < fVar6)) {
      uVar3 = uVar2;
      fVar6 = fVar5;
    }
    uVar2 = uVar2 + 1;
  } while ((int)uVar2 < 0x50);
  return uVar3;
}



void fn_006ac1ac(void)

{
  fn_006b63ac(*(undefined4 *)(DAT_00897804 + 8));
  return;
}



undefined1 fn_006ac190(void)

{
  int iVar1;
  
  iVar1 = fn_001c232c(DAT_008977e4);
  return *(undefined1 *)(iVar1 + 8);
}



bool fn_006ac168(void)

{
  int iVar1;
  
  iVar1 = fn_006b4fb8(*(undefined4 *)(DAT_00897804 + 0x18));
  return 99 < iVar1;
}



void fn_006ac128(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f7a5c(DAT_008977e0);
  fn_001d6b00(uVar1,param_2,param_3,0);
  return;
}



bool fn_006ac0fc(void)

{
  int iVar1;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  return *(int *)(iVar1 + 0x138) == 4 || *(int *)(iVar1 + 0x138) == 1;
}



undefined4 fn_006ac0d8(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < 0x14) && ((int)*(char *)(param_1 + 0xe84) == param_2)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_006ac0c0(undefined4 param_1,short param_2)

{
  fn_006b7b34(*(undefined4 *)(DAT_00897804 + 0x24),(int)param_2);
  return;
}



void fn_006ac094(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a0c(DAT_008977e0);
  if (*(int *)(iVar1 + 0x30) == 0) {
    return;
  }
  fn_006c3a70();
  return;
}



int fn_006ac078(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a5c(DAT_008977e0);
  return iVar1 + 0x28;
}



int fn_006ac024(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = 0;
  do {
    if (*(short *)(*(int *)(*(int *)(DAT_00897804 + 0x18) + 4) + iVar1 * 0x10 + 8) == param_2) {
      iVar2 = (int)(short)((short)iVar2 + 1);
    }
    iVar1 = (int)(short)((short)iVar1 + 1);
  } while (iVar1 < 100);
  return iVar2;
}



void fn_006ac008(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = fn_006f7a5c(DAT_008977e0);
  iVar1 = fn_006c163c(iVar2 + 0x60);
  if (iVar1 == 0) {
    uVar3 = 0;
    fn_001d70a0(iVar2);
    fn_0016ddb4(iVar2 + 0x60);
    *(undefined4 *)(iVar2 + 0x154) = uVar3;
    *(undefined4 *)(iVar2 + 0x158) = uVar3;
  }
  return;
}



void fn_006abfc8(void)

{
  int iVar1;
  
  iVar1 = fn_006f72c8(DAT_008977e0);
  if (iVar1 == 0) {
    return;
  }
  fn_00222020(iVar1,0);
  return;
}



undefined4 fn_006abf40(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_003035b0(param_2,DAT_00892280);
  if (iVar1 == 0) {
    uVar2 = DAT_00892284;
  }
  else {
    iVar1 = fn_003035b0(param_2,DAT_00892288);
    if (iVar1 == 0) {
      uVar2 = DAT_0089228c;
    }
    else {
      iVar1 = fn_003035b0(param_2,DAT_00892290);
      if (iVar1 == 0) {
        uVar2 = DAT_00892294;
      }
      else {
        iVar1 = fn_003035b0(param_2,DAT_00892298);
        if (iVar1 != 0) {
          uVar2 = fn_001639b0(param_1,param_2);
          return uVar2;
        }
        uVar2 = DAT_0089229c;
      }
    }
  }
  return uVar2;
}



undefined1 fn_006abf20(void)

{
  int iVar1;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  return *(undefined1 *)(*(int *)(iVar1 + 8) + 0x8f);
}



undefined4 fn_006abf04(void)

{
  int iVar1;
  
  iVar1 = fn_006f7a84(DAT_008977e0);
  return *(undefined4 *)(iVar1 + 0x408);
}



int fn_006abee4(void)

{
  int iVar1;
  
  iVar1 = fn_001c232c(DAT_008977e4);
  return *(int *)(iVar1 + 0x28) + 1;
}



undefined4 fn_006abec0(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 6) {
    uVar1 = fn_006b627c(*(undefined4 *)(DAT_00897804 + 8));
    return uVar1;
  }
  return 0;
}


