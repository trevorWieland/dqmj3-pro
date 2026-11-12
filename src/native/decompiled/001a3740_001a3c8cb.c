#include "001a3740_001a3c8cb.h"



void fn_001a3c8c(int param_1,int param_2,undefined4 param_3)

{
  fn_001a8294(*(undefined4 *)(*(int *)(param_1 + param_2 * 4) + 0x68),param_3);
  return;
}



void fn_001a3ba8(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  fn_00301a9c(*param_1 + param_1[3] * 4,param_2,param_3 << 2);
  iVar1 = param_1[3];
  param_1[3] = iVar1 + param_3;
  if (param_1[1] <= iVar1 + param_3) {
    param_1[3] = 0;
  }
  return;
}



void fn_001a3b7c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001a7b8c(&DAT_008ef5bc);
  if (-1 < iVar1) {
    *(int *)(param_1 + 0x30) = iVar1 + *(int *)(param_1 + 0x30);
  }
  return;
}



void fn_001a3b08(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  
  fn_00170704(param_1 + 0x44);
  local_24 = param_3 + 0x280;
  iStack_20 = param_3 + 0x500;
  iStack_1c = param_3 + 0x780;
  iVar2 = param_1 + param_2 * 8;
  iVar1 = *(int *)(iVar2 + 0x34);
  local_28 = param_3;
  if (iVar1 == 0) {
    iVar1 = *(int *)(iVar2 + 0x38);
    if (iVar1 != 0) {
      fn_001a7ccc(iVar1,&local_28);
    }
  }
  else {
    fn_001a7bdc(iVar1,&local_28);
  }
  fn_001707b4(param_1 + 0x44);
  return;
}



int fn_001a3a88(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 3);
  iVar2 = 0xcd78;
  if (cVar1 == '\0') {
    iVar2 = 0xdf0c;
  }
  else if (cVar1 == '\x01') {
    iVar2 = 0xd930;
  }
  else if (cVar1 == '\x02') {
    iVar2 = fn_001a7b7c(0xcd78);
    if (iVar2 == 0) {
      iVar2 = 0x37140;
    }
    else {
      iVar2 = 0x30bb0;
    }
  }
  if (*(char *)(param_1 + 2) == '\0') {
    iVar2 = iVar2 + 0x5dc;
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    iVar2 = iVar2 + 10000;
  }
  return iVar2;
}



void fn_001a3a54(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    fn_001a82b8(*(undefined4 *)(*(int *)(param_1 + iVar1 * 4 + 0x18dc) + 0x68));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x18);
  return;
}


