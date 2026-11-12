#include "0077b244_0077b398.h"



void fn_0077b244(undefined4 *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined4 local_20;
  int local_1c;
  
  *param_1 = *(undefined4 *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x10);
  iVar2 = *(int *)(iVar1 + 8);
  bVar3 = *param_3 != iVar2;
  if (!bVar3) {
    iVar2 = *param_4;
  }
  if ((bVar3 || iVar2 != iVar1) || (*(int *)(param_2 + 0x14) == 0)) {
    while (local_1c = *param_3, local_1c != *param_4) {
      iVar2 = *(int *)(local_1c + 0xc);
      if (iVar2 == 0) {
        iVar1 = *(int *)(local_1c + 4);
        iVar2 = iVar1;
        if (local_1c == *(int *)(iVar1 + 0xc)) {
          do {
            *param_3 = iVar2;
            iVar1 = *(int *)(iVar2 + 4);
            bVar3 = iVar2 == *(int *)(iVar1 + 0xc);
            iVar2 = iVar1;
          } while (bVar3);
        }
        if (*(int *)(*param_3 + 0xc) != iVar1) {
          *param_3 = iVar1;
        }
      }
      else {
        *param_3 = iVar2;
        while (iVar2 = *(int *)(iVar2 + 8), iVar2 != 0) {
          *param_3 = iVar2;
        }
      }
      fn_0077abdc(&local_20,param_2,&local_1c);
      *param_1 = local_20;
    }
  }
  else {
    iVar2 = *(int *)(iVar1 + 4);
    while (iVar2 != 0) {
      fn_0077b398(param_2,*(undefined4 *)(iVar2 + 0xc));
      iVar1 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_2 + 4);
      fn_0013ce98(iVar2 + 0x20);
      *(int *)(param_2 + 4) = iVar2;
      iVar2 = iVar1;
    }
    *(int *)(*(int *)(param_2 + 0x10) + 8) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(*(int *)(param_2 + 0x10) + 4) = 0;
    *(int *)(*(int *)(param_2 + 0x10) + 0xc) = *(int *)(param_2 + 0x10);
    *(undefined4 *)(param_2 + 0x14) = 0;
    *param_1 = *(undefined4 *)(param_2 + 0x10);
  }
  return;
}



void fn_0077b398(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return;
  }
  do {
    fn_0077b398(param_1,*(undefined4 *)(param_2 + 0xc));
    iVar1 = *(int *)(param_2 + 8);
    *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1 + 4);
    fn_0013ce98(param_2 + 0x20);
    *(int *)(param_1 + 4) = param_2;
    param_2 = iVar1;
  } while (iVar1 != 0);
  return;
}


