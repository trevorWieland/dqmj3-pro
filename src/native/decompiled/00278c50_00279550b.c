#include "00278c50_00279550b.h"



undefined4 fn_00279550(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2378) == 0) {
    fn_00278c50(param_1,0x1c6,param_2,1,0,0,0);
    return 0x1c6;
  }
  uVar1 = fn_006b771c(param_1,0x1c6,0x1c6,param_2 | 0x2000);
  return uVar1;
}



void fn_00279524(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x1eb;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x1cf < iVar1);
  return;
}



void fn_00279408(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar4 = 0xbb;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_0027944c;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xbe);
  iVar4 = -1;
LAB_0027944c:
  uVar1 = fn_00278c50(param_2,iVar4,param_3,0,1,1,0);
  iVar4 = 0xbb;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_002794a0;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xbe);
  iVar4 = -1;
LAB_002794a0:
  uVar2 = fn_00278c50(param_2,iVar4,param_3,1,1,0,0);
  iVar4 = 0xbb;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_002794ec;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0xbe);
  iVar4 = -1;
LAB_002794ec:
  uVar3 = fn_00278c50(param_2,iVar4,param_3,2,1,0,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  return;
}



void fn_0027932c(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x1c7;
  iVar3 = iVar4;
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar3 * 0x14) == 0) goto LAB_00279378;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x1ca);
  iVar3 = -1;
LAB_00279378:
  uVar1 = fn_00278c50(param_2,iVar3,0x18c,0,0,1,0);
  do {
    if (*(int *)(*(int *)(param_2 + 0x20) + iVar4 * 0x14) == 0) goto LAB_002793cc;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x1ca);
  iVar4 = -1;
LAB_002793cc:
  uVar2 = fn_00278c50(param_2,iVar4,0x18c,1,0,0,0);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = 0xffffffff;
  return;
}



undefined4 fn_002792b4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2364) == 0) {
    fn_00278c50(param_1,0x1c5,param_2,0,0,0,0);
    return 0x1c5;
  }
  uVar1 = fn_006b771c(param_1,0x1c5,0x1c5,param_2);
  return uVar1;
}



void fn_00279284(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x17d;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0x155 < iVar1);
  return;
}


