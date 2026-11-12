#include "00584c08_00585f04ab.h"



void fn_00585558(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005856e0(iVar1,param_1);
  return;
}



void fn_00585468(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      *(undefined **)(param_1 + 0xc4) = &DAT_00585388;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  uVar2 = fn_002f6fa8();
  uVar3 = fn_002f8914();
  piVar4 = (int *)fn_006cd734(uVar2,uVar3);
  if (*piVar4 != 0) {
    *(undefined **)(param_1 + 0xc4) = &DAT_00585388;
    *(undefined4 *)(param_1 + 200) = 0;
                    /* WARNING: Subroutine does not return */
    fn_006ba250(param_1);
  }
  uVar2 = fn_0022f584((char *)&DAT_00585528,0);
  fn_0068974c(param_1,uVar2,0,1);
  return;
}



void fn_0058538c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0xd0) != 0) {
    iVar1 = fn_006f6a6c(param_1);
    if (iVar1 == 1) {
      fn_00689efc(param_1,0xee,0);
      *(undefined **)(param_1 + 0xc4) = &DAT_00585388;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    return;
  }
  iVar1 = fn_002f6b80(0);
  if (iVar1 == 0) {
    uVar2 = fn_0022f584((char *)&DAT_0058544c,0);
    fn_0068974c(param_1,uVar2,0,1);
    return;
  }
  uVar2 = fn_0022f584((char *)&DAT_00585434,0);
  fn_0068974c(param_1,uVar2,0,1);
  return;
}



void fn_00584f20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043f144();
  *puVar1 = &DAT_00842fc4;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return;
}


