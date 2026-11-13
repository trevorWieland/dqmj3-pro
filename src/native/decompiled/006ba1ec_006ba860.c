#include "006ba1ec_006ba860.h"



undefined4 fn_006ba860(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = DAT_00898c20;
  }
  else {
    uVar1 = DAT_00898c1c;
  }
  return uVar1;
}



undefined4 fn_006ba838(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x30) == '\x01') {
    uVar1 = DAT_00898c1c;
  }
  else {
    uVar1 = DAT_00898c20;
  }
  return uVar1;
}



undefined4 fn_006ba794(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3)) {
    uVar1 = 0;
    if (*(int *)(*(int *)(param_1 + 0x1c) + param_2 * 8 + 4) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



bool fn_006ba770(int param_1)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  bVar2 = *(int *)(param_1 + 0x20) - iVar1 >> 3 != 0;
  if (bVar2) {
    iVar1 = *(int *)(iVar1 + 4);
  }
  return bVar2 && iVar1 != 0;
}



undefined4 fn_006ba73c(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 < (uint)(*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x1c) >> 3)) &&
     (*(int *)(*(int *)(param_1 + 0x1c) + param_2 * 8 + 4) != 0)) {
    uVar1 = fn_00145ac0();
    return uVar1;
  }
  return 0;
}



bool fn_006ba6e0(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c41e4(param_1 + 8);
  return iVar1 == 2;
}



uint fn_006ba6b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 3) >> 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba680(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0xf) >> 3;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006ba624(int param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  (**(code **)(**(int **)(param_1 + 0xc) + 0x28))(*(int **)(param_1 + 0xc),0,&local_10);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x5c))();
  return *(int *)(*(int *)(param_1 + 0xc) + 0xcc) * local_10 + iVar1;
}



uint fn_006ba55c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x3f) >> 5;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba52c(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x7f) >> 6;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba4fc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 7) >> 2;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



uint fn_006ba4bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  if ((param_2 == 0) || (iVar1 = fn_006ba58c(), iVar1 == 0)) {
    uVar2 = (*(byte *)(param_1 + 0x14) & 0x1f) >> 4;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_006ba58c(int param_1)

{
  int iVar1;
  
  if ((*(int **)(param_1 + 0xc) == (int *)0x0) ||
     ((((iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 100))(), iVar1 < 0 &&
        (iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x34))(), iVar1 == 0)) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x38))(), iVar1 == 0)) &&
      ((iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x3c))(), iVar1 == 0 &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0xc) + 0x40))(), iVar1 == 0)))))) {
    return 0;
  }
  return 1;
}



int * fn_006ba32c(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = fn_00145b00(0xe8,&DAT_00812c8c);
  if (iVar2 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_0025f31c(iVar2,param_3,0);
  }
  piVar3[2] = param_2;
  fn_001caa40(piVar3,0);
  iVar2 = 1;
  if (param_1[1] < *param_1) {
    iVar2 = fn_00300f74(*param_1 + param_1[1] + -1);
    uVar1 = 1 < iVar2;
    if (1 < iVar2) goto LAB_006ba3b4;
  }
  else {
    uVar1 = false;
  }
  if ((char)param_1[2] != '\0') {
    uVar1 = *(undefined1 *)((int)param_1 + 9);
  }
LAB_006ba3b4:
  *(undefined1 *)((int)piVar3 + 0x45) = uVar1;
  *(undefined1 *)(piVar3 + 0x11) = 0;
  (**(code **)(*piVar3 + 0x24))(piVar3,1,param_1[1]);
  piVar3[0x32] = iVar2;
  piVar3[0x39] = *param_1;
  if ((char)param_1[3] == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[4];
  }
  fn_0025f2d0(piVar3,iVar2);
  (**(code **)(*piVar3 + 0x2c))(piVar3,0);
  if ((char)param_1[7] != '\0') {
    piVar3[4] = param_1[8];
  }
  if ((char)param_1[9] != '\0') {
    piVar3[7] = param_1[10];
  }
  if ((char)param_1[0x11] != '\0') {
    piVar3[8] = param_1[0x12];
  }
  if ((char)param_1[0x13] != '\0') {
    piVar3[9] = param_1[0x14];
  }
  if ((char)param_1[0xd] != '\0') {
    piVar3[6] = param_1[0xe];
  }
  if ((char)param_1[0xf] != '\0') {
    piVar3[10] = param_1[0x10];
  }
  return piVar3;
}



int fn_006ba274(int param_1)

{
  return *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
}



undefined4 fn_006ba250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x30))(*(int **)(param_1 + 0x9c),0,local_8);
  return local_8[0];
}



bool fn_006ba220(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xac) ==
         (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) *
         *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) + param_2;
}



bool fn_006ba1ec(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    param_1 = (int *)param_1[2];
  }
  return iVar1 != 0 && param_1 != (int *)&DAT_ffffffff;
}


