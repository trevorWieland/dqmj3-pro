#include "0012d640_0012ead8bba.h"



undefined4 fn_0012ea14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = *(undefined4 **)(param_1 + 8);
  puVar4 = (undefined4 *)0x0;
  do {
    if (puVar3 == (undefined4 *)(param_1 + 8)) {
LAB_0012ea3c:
      iVar1 = fn_00145aac(puVar4[2]);
      if (iVar1 == 1) {
        uVar2 = fn_00145ac0(puVar4[2]);
        return uVar2;
      }
      return 0;
    }
    if (puVar3[-4] == param_2) {
      puVar4 = puVar3 + -4;
      goto LAB_0012ea3c;
    }
    puVar3 = (undefined4 *)*puVar3;
  } while( true );
}



int fn_0012e958(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)fn_0012ea60(param_1,param_1 + 4,param_2,param_4,param_4);
  if (piVar1 != (int *)0x0) {
    piVar1[3] = piVar1[3] + 1;
    return *piVar1;
  }
  iVar3 = 0;
  piVar1 = *(int **)(param_1 + 8);
  while (piVar1 != (int *)(param_1 + 8)) {
    if (piVar1[-4] == iVar3) {
      iVar3 = iVar3 + 1;
      piVar1 = *(int **)(param_1 + 8);
    }
    else {
      piVar1 = (int *)*piVar1;
    }
  }
  iVar2 = fn_00145b00(0x18,&DAT_00812c8c);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_0011db10(iVar2,iVar3,param_2,param_3,param_4);
  }
  fn_0017d948(param_1 + 4,param_1 + 8,iVar2 + 0x10);
  return iVar3;
}


