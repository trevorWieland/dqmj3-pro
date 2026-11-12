#include "005ccccc_005cd8ecab.h"



void fn_005cd328(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005cd3e0(iVar1,param_1);
  return;
}



undefined4 fn_005cd1c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00154ac8(0x94);
  if (iVar1 == 0) {
    fn_00144834(0x94,1);
    *(undefined ***)(param_1 + 100) = &PTR_s_MenuMessageTournamentFirst00_00898fc0;
    *(undefined4 *)(param_1 + 0x68) = 9;
  }
  else {
    iVar1 = fn_006b6494(*(undefined4 *)(DAT_00897804 + 8));
    if (iVar1 < 2) {
      *(undefined **)(param_1 + 100) = &DAT_00898fa8;
      *(undefined4 *)(param_1 + 0x68) = 1;
    }
    else if (iVar1 - 2U < 0x62) {
      *(undefined **)(param_1 + 100) = &DAT_00898fac;
      *(undefined4 *)(param_1 + 0x68) = 1;
      fn_0015b0f8();
    }
    else {
      *(undefined **)(param_1 + 100) = &DAT_00898fb0;
      *(undefined4 *)(param_1 + 0x68) = 1;
      fn_0015b0f8();
    }
  }
  iVar1 = *(int *)(param_1 + 0x6c);
  *(int *)(param_1 + 0x6c) = iVar1 + 1;
  uVar2 = fn_0022f584(*(undefined4 *)(*(int *)(param_1 + 100) + iVar1 * 4),0);
  uVar3 = *(undefined4 *)(param_1 + 0x5c);
  fn_0036c5f4(uVar3,uVar2,1,0,1,1,0,0,1);
  iVar1 = *(int *)(param_1 + 0x6c);
  if (iVar1 < *(int *)(param_1 + 0x68)) {
    do {
      uVar2 = fn_0022f584(*(undefined4 *)(*(int *)(param_1 + 100) + iVar1 * 4),0);
      fn_0036c140(uVar3,uVar2);
      iVar1 = *(int *)(param_1 + 0x6c) + 1;
      *(int *)(param_1 + 0x6c) = iVar1;
    } while (iVar1 < *(int *)(param_1 + 0x68));
  }
  fn_00689bd0(param_1,0x48,0);
  return 1;
}



void fn_005cd19c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_0084baec;
  return;
}


