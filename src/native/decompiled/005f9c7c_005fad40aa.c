#include "005f9c7c_005fad40aa.h"



undefined4 fn_005f9c7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  fn_0028ab20(*(undefined4 *)(DAT_00897804 + 0xc));
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898f50) goto LAB_005f9cd4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005f9cd4:
  *(undefined4 *)(param_1 + 0x7c) = puVar3[2];
  uVar2 = fn_006b6494(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(param_1 + 100) = uVar2;
  *(int *)(param_1 + 0x68) = *(int *)(DAT_0089782c + 0x508) + -1;
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar1 == &DAT_00898f50) goto LAB_005f9d34;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005f9d34:
  *(undefined4 *)(param_1 + 0x6c) = puVar3[3];
  fn_005f9d58(param_1);
  return 1;
}



void fn_005f9d58(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  bool bVar5;
  undefined8 uVar6;
  
  switch(*(undefined4 *)(param_1 + 0x7c)) {
  case 0:
    *(undefined **)(param_1 + 0x70) = &DAT_00898f54;
    *(undefined4 *)(param_1 + 0x74) = 1;
    *(undefined4 *)(param_1 + 0x78) = 0;
    fn_005f9a84(param_1);
    *(undefined4 *)(param_1 + 0x80) = 1;
    return;
  case 1:
    iVar2 = *(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 100) < iVar2) {
      *(undefined **)(param_1 + 0x70) = &DAT_00898f60;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else if (iVar2 < 10) {
      *(undefined **)(param_1 + 0x70) = &DAT_00898f68;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else if (iVar2 < 0x32) {
      *(undefined **)(param_1 + 0x70) = &DAT_00898f70;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else if (iVar2 < 100) {
      *(undefined **)(param_1 + 0x70) = &DAT_00898f78;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    else {
      *(undefined **)(param_1 + 0x70) = &DAT_00898f58;
      *(undefined4 *)(param_1 + 0x74) = 1;
      *(undefined4 *)(param_1 + 0x78) = 0;
    }
    fn_005f9a84(param_1);
    *(undefined4 *)(param_1 + 0x80) = 2;
    return;
  case 2:
    uVar6 = fn_00268a04(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 100));
    param_2 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      *(undefined ***)(param_1 + 0x70) = &PTR_s_MenuMessageTournamentRewardGold0_00898f80;
      *(undefined4 *)(param_1 + 0x74) = 2;
      *(undefined4 *)(param_1 + 0x78) = 0;
      fn_005f9a84(param_1);
      *(undefined4 *)(param_1 + 0x80) = 3;
      return;
    }
    *(undefined4 *)(param_1 + 0x7c) = 3;
  case 3:
    if ((0x31 < *(int *)(param_1 + 0x68)) && (*(int *)(param_1 + 100) < 0x32)) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    *(undefined4 *)(param_1 + 0x7c) = 4;
  case 4:
    break;
  case 5:
    goto switchD_005f9d78_caseD_5;
  default:
    return;
  }
  if ((99 < *(int *)(param_1 + 0x68)) && (*(int *)(param_1 + 100) < 100)) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined4 *)(param_1 + 0x7c) = 5;
switchD_005f9d78_caseD_5:
  iVar2 = *(int *)(param_1 + 0x68);
  if (*(int *)(param_1 + 100) != iVar2) {
    bVar5 = SBORROW4(iVar2,0x6e);
    iVar1 = iVar2 + -0x6e;
    if (0x6d < iVar2) {
      param_2 = *(int *)(param_1 + 0x6c);
      bVar5 = SBORROW4(iVar2,param_2);
      iVar1 = iVar2 - param_2;
    }
    if (iVar1 < 0 == bVar5) {
      if (*(int *)(param_1 + 100) == param_2) {
        puVar4 = *(undefined4 **)(param_1 + 0x18);
        if (puVar4 != (undefined4 *)0x0) {
          puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
          do {
            if (puVar3 == &DAT_00898f50) goto LAB_005f9fac;
            puVar3 = (undefined4 *)*puVar3;
          } while (puVar3 != (undefined4 *)0x0);
        }
        puVar4 = (undefined4 *)0x0;
LAB_005f9fac:
        puVar4[3] = *(int *)(param_1 + 0x6c) + 10;
        iVar2 = *(int *)(param_1 + 0x6c) + 10;
        *(int *)(param_1 + 0x6c) = iVar2;
        if (*(int *)(param_1 + 0x68) < iVar2) goto LAB_005fa05c;
      }
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
  }
LAB_005fa05c:
  *(undefined4 *)(param_1 + 0x7c) = 9;
  return;
}


