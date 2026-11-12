#include "0066178c_00661eb8a.h"



undefined4 fn_0066193c(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined1 auStack_38 [40];
  
  uVar1 = fn_001adf18(2,1);
  piVar2 = (int *)fn_00118290();
  uVar1 = (**(code **)(*piVar2 + 8))(piVar2,uVar1,4);
  fn_001ae3f8(auStack_38,uVar1,0,2,1);
  fn_001aeba8(auStack_38,param_2,1);
  fn_001ae814(param_1,auStack_38,1,0);
  fn_001ad9c4(auStack_38,1);
  piVar2 = (int *)fn_00118290();
  (**(code **)(*piVar2 + 0xc))(piVar2,uVar1);
  return 1;
}



bool fn_006618fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_001ae478(param_1,1,param_3,param_4,param_4);
  iVar1 = fn_001aec3c(param_1,0,5,param_2,0);
  return iVar1 == 0;
}



uint fn_00661800(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  iVar2 = fn_00145b00(0x3c,&DAT_00812c8c,param_3,param_4,param_4);
  if ((iVar2 == 0) ||
     (piVar3 = (int *)fn_0066233c(iVar2,*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc)
                                  ), piVar3 == (int *)0x0)) {
    return 0xffffffff;
  }
  if (param_4 != 0xff) {
    fn_00661ea0(piVar3,0,0x7f,param_4,0x80);
  }
  fn_00240dc4(piVar3,param_2,param_3);
  uVar4 = 0;
  uVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 2;
  if (uVar1 != 0) {
    do {
      if (*(int *)(*(int *)(param_1 + 0x14) + uVar4 * 4) == 0) {
        if (uVar4 != 0xffffffff) {
          *(int **)(*(int *)(param_1 + 0x14) + uVar4 * 4) = piVar3;
          return uVar4;
        }
        goto LAB_006618cc;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  uVar4 = 0xffffffff;
LAB_006618cc:
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 4))(piVar3);
  }
  return uVar4;
}



void fn_006617c4(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x14) + param_2 * 4);
  piVar1 = (int *)*piVar2;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  *piVar2 = 0;
  return;
}



int fn_006617a8(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x42);
}



int fn_0066178c(int param_1)

{
  return (int)*(short *)(DAT_00892804 + param_1 * 0x78 + 0x26);
}


