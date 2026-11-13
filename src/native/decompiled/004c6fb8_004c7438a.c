#include "004c6fb8_004c7438a.h"



int fn_004c7124(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if ((*(int *)(iVar1 + 0x14) == *(int *)(param_2 + 8)) &&
       (*(int *)(iVar1 + 0x28) == *(int *)(param_2 + 0x1c))) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}



undefined4 fn_004c708c(int param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0;
  iVar3 = *(int *)(param_1 + 0xc);
  while (iVar3 != param_1 + 8) {
    if (*(int *)(iVar3 + 0x28) == param_2) {
      pcVar2 = *(code **)(*(int *)(iVar3 + 8) + 8);
      (*pcVar2)(iVar3 + 8,pcVar2,0x8000,0);
      iVar4 = *(int *)(iVar3 + 4);
      (*(code *)**(undefined4 **)(iVar3 + 8))();
      fn_004f0c1c(param_1 + 4,iVar3);
      fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar3);
      uVar1 = 1;
      iVar3 = iVar4;
    }
    else {
      iVar3 = *(int *)(iVar3 + 4);
    }
  }
  return uVar1;
}



void fn_004c6fe8(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0xc);
  while (iVar2 != param_1 + 8) {
    if ((*(int *)(iVar2 + 0x38) == 0 && *(int *)(iVar2 + 0x3c) == 0) &&
       (*(int *)(iVar2 + 0x28) == param_2)) {
      pcVar1 = *(code **)(*(int *)(iVar2 + 8) + 8);
      (*pcVar1)((int *)(iVar2 + 8),pcVar1,0x8000,0);
      iVar3 = *(int *)(iVar2 + 4);
      (*(code *)**(undefined4 **)(iVar2 + 8))();
      fn_004f0c1c(param_1 + 4,iVar2);
      fn_004f0ab4(param_1 + 0x14,param_1 + 0x18,*(int *)(param_1 + 0x24) + iVar2);
      iVar2 = iVar3;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4);
    }
  }
  return;
}



int fn_004c6fb8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  while( true ) {
    if (iVar1 == param_1 + 8) {
      return 0;
    }
    if (*(int *)(iVar1 + 0x28) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1 + 8;
}


