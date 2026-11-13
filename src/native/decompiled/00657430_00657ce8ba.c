#include "00657430_00657ce8ba.h"



undefined4 fn_006577f4(int param_1)

{
  uint uVar1;
  int iVar2;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_2c [3];
  undefined4 local_20;
  undefined1 *local_1c;
  undefined *local_18;
  undefined1 *local_14;
  
  if (*(int *)(param_1 + 0x74) == 0) {
    local_3c = *(undefined4 *)(param_1 + 0x80);
    uStack_38 = *(undefined4 *)(param_1 + 0x84);
    local_20 = 4;
    local_1c = &LAB_001675a0;
    local_18 = &DAT_001775e4;
    local_14 = &LAB_001775d8;
    local_40 = *(int *)(param_1 + 0x50) + *(int *)(param_1 + 0x7c);
    local_34 = 0;
    local_2c[0] = param_1;
    uVar1 = fn_0014e2f4(*(undefined4 *)(param_1 + 0x78),&local_20,&LAB_0065768c,local_2c);
    if (((uVar1 & 0x7e00000) != 0x600000) && ((int)uVar1 < 0)) {
      fn_0015e294(uVar1);
    }
    if (-1 < (int)uVar1) {
      iVar2 = fn_00169c08(&local_40,**(undefined4 **)(param_1 + 0x78));
      if (iVar2 < 0) {
        fn_0015e294();
      }
      *(int *)(param_1 + 0x70) = local_40;
      if (*(int *)(param_1 + 0x74) == 0) {
        *(undefined4 *)(param_1 + 0x74) = 1;
      }
      return 1;
    }
  }
  return 0;
}



void fn_0065776c(int *param_1)

{
  int iVar1;
  
  while (iVar1 = fn_00158660(param_1 + 6,(char)param_1[0x1a]), param_1[0x1b] != iVar1) {
    (**(code **)(*param_1 + 0x3c))(param_1);
  }
  return;
}



void fn_006576f8(int *param_1)

{
  (**(code **)(*param_1 + 0x18))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00657720. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1c))(param_1);
  return;
}


