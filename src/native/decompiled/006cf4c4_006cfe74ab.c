#include "006cf4c4_006cfe74ab.h"



void fn_006cf95c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = fn_006cf9a4(param_2,param_3,param_4);
  if (iVar1 == 0 || iVar1 == -0x20) {
    fn_00453a8c(param_1,s_ERROR_0089a626);
    return;
  }
  fn_00453a64(param_1,iVar1 + 0x20);
  return;
}



undefined4 fn_006cf9a4(int param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_18 [8];
  
  iVar2 = param_1 + param_3 * 4;
  if (param_2 == 0) {
    if (param_3 < *(uint *)(param_1 + 0x210)) {
      return *(undefined4 *)(iVar2 + 0x21c);
    }
  }
  else if (param_3 < *(uint *)(param_1 + 0x3c0)) {
    if (*(uint *)(param_1 + 0x560) != *(uint *)(param_1 + 0x3c0)) {
      return *(undefined4 *)(iVar2 + 0x3cc);
    }
    uVar1 = fn_00453a64(auStack_18,param_1 + param_3 * 8 + 0x564);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x3c0) != 0) {
      do {
        iVar2 = fn_006d0144(uVar1,*(int *)(param_1 + uVar3 * 4 + 0x3cc) + 0x20);
        if (iVar2 != 0) {
          return *(undefined4 *)(param_1 + uVar3 * 4 + 0x3cc);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 < *(uint *)(param_1 + 0x3c0));
    }
  }
  return 0;
}



undefined4 fn_006cf94c(int *param_1)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  return *(undefined4 *)(iVar1 + *param_1 * 4);
}



undefined4 fn_006cf8d4(int param_1,undefined4 param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  
  if (param_4 < 6) {
    uVar1 = 0;
  }
  else {
    fn_00301a9c(param_2,param_1 + 4,6);
    uVar1 = 1;
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = 6;
    }
  }
  return uVar1;
}


