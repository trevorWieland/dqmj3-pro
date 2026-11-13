#include "0063c268_0063c824ab.h"



int fn_0063c3c4(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  iVar4 = fn_006f2514(param_1,uVar3,uVar2);
  if ((iVar4 == 0) ||
     (iVar4 = fn_0064fed4(param_1,1,iVar4,(int)*(char *)(param_1 + 4)), iVar4 != 0)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}



int fn_0063c368(int param_1,uint param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  uVar3 = fn_006f0a30(param_1);
  uVar4 = fn_006f0ae4(param_1);
  iVar5 = fn_00781bc4(param_1,(int)*(char *)(param_1 + 4),uVar4,uVar3,param_1,
                       param_2 & 0xffffff00 | (uint)bVar1);
  if (iVar5 == 0) {
    cVar2 = *(char *)(param_3 + 2);
  }
  else {
    cVar2 = *(char *)(param_3 + 3);
  }
  return (int)cVar2;
}



int fn_0063c310(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  uVar2 = fn_006f0a30();
  uVar3 = fn_006f0ae4(param_1);
  iVar4 = fn_006f2698(param_1,uVar3,uVar2);
  if ((iVar4 == 0) || (iVar4 = fn_0064fed4(param_1,1,(int)*(char *)(param_1 + 4)), iVar4 != 0)) {
    cVar1 = *(char *)(param_3 + 3);
  }
  else {
    cVar1 = *(char *)(param_3 + 2);
  }
  return (int)cVar1;
}


