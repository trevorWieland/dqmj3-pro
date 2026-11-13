#include "0023bfb4_0023c414.h"



void fn_0023c414(undefined4 param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int local_40;
  int local_3c;
  int *local_30;
  
  fn_004b5030(&local_40,param_1);
  fn_00786e18(param_2);
  iVar1 = fn_006f5dec(DAT_00898840);
  piVar4 = (int *)*local_30;
  if (piVar4 != local_30) {
    do {
      if (piVar4[5] == iVar1) {
        piVar5 = (int *)param_2[1];
        iVar7 = param_2[4];
        if (piVar5 == (int *)0x0) {
          if (param_2[2] == param_2[3]) {
            if (*param_2 == 0) {
              uVar6 = 0x20;
            }
            else {
              uVar2 = *(uint *)(*param_2 + 4);
              uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
              if (uVar6 < uVar2 + 0x20) {
                uVar6 = uVar2 + 0x20;
              }
            }
            piVar5 = (int *)fn_0015ece0(0xc);
            iVar3 = fn_0015ece0(uVar6 * 0x78);
            piVar5[2] = iVar3;
            *piVar5 = *param_2;
            piVar5[1] = uVar6;
            *param_2 = (int)piVar5;
            iVar3 = piVar5[2];
            param_2[2] = iVar3;
            param_2[3] = iVar3 + uVar6 * 0x78;
          }
          piVar5 = (int *)param_2[2];
          param_2[2] = (int)(piVar5 + 0x1e);
        }
        else {
          param_2[1] = *piVar5;
        }
        if (piVar5 + 2 != (int *)0x0) {
          fn_0048c758(piVar5 + 2,piVar4 + 2);
        }
        *piVar5 = iVar7;
        piVar5[1] = *(int *)(iVar7 + 4);
        **(undefined4 **)(iVar7 + 4) = piVar5;
        *(int **)(iVar7 + 4) = piVar5;
        param_2[5] = param_2[5] + 1;
      }
      piVar4 = (int *)*piVar4;
    } while (piVar4 != local_30);
  }
  if (local_30 != (int *)0x0) {
    fn_00786e18(&local_40);
    *local_30 = local_3c;
    piVar4 = (int *)local_40;
    while (piVar4 != (int *)0x0) {
      local_40 = *piVar4;
      fn_0014f1bc(piVar4[2]);
      fn_0014f1bc(piVar4);
      piVar4 = (int *)local_40;
    }
  }
  return;
}



undefined4 fn_0023c3b8(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  fn_005f6270();
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (iVar1 != 0) {
    return 0;
  }
  if (param_2 != 0) {
    if (*(uint *)(param_2 + 0x58) < 0x1f) {
      return 0;
    }
    if (param_3 != 0) {
      fn_0036c340(param_2);
    }
  }
  return 1;
}



void fn_0023c368(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006c410c();
  if (iVar1 == 1) {
    fn_006b87e0(*(undefined4 *)(DAT_00897830 + 0x950),*(undefined2 *)(param_1 + 0xe));
    return;
  }
  fn_006c4478();
  fn_0022f750();
  return;
}



undefined4 fn_0023c310(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  fn_00246e68(&uStack_10);
  fn_00246e00(&uStack_10);
  iVar1 = fn_006b5424(&uStack_10,param_1);
  if ((iVar1 == 0) && (iVar1 = fn_001f82ac(), iVar1 == 0)) {
    fn_00246e74(&uStack_10);
    return 0;
  }
  fn_00246e74(&uStack_10);
  return 1;
}



void fn_0023c2e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  fn_0028be4c(*(undefined4 *)(DAT_00897830 + 0x950),param_1,param_2,param_3,param_4);
  return;
}



bool fn_0023c2bc(void)

{
  int iVar1;
  
  iVar1 = fn_00269b38(DAT_00897818);
  return iVar1 == 2;
}



undefined4 fn_0023c2a8(void)

{
  return *(undefined4 *)(DAT_00897830 + 0x94c);
}



void fn_0023c1d0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  iVar1 = *param_1;
  uVar4 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  fn_00788218((int *)(iVar1 + 0xd0),(*(int *)(iVar1 + 0xd4) - *(int *)(iVar1 + 0xd0)) / 0xc + 1,0,0
               ,0);
  iVar1 = *(int *)(iVar1 + 0xd4);
  *(undefined4 *)(iVar1 + -0xc) = uVar4;
  *(undefined4 *)(iVar1 + -8) = uVar2;
  *(undefined4 *)(iVar1 + -4) = uVar3;
  return;
}



void fn_0023bfb4(uint *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar4 = param_1[1];
  uVar5 = *param_1;
  if (uVar5 != uVar4) {
    uVar2 = uVar5;
    if (uVar4 <= uVar5) {
      do {
        uVar2 = uVar2 + 0xc;
      } while (uVar2 != uVar4);
    }
    uVar4 = uVar4 + ((int)(uVar4 - uVar5) / 0xc) * -0xc;
    param_1[1] = uVar4;
  }
  uVar6 = *param_1;
  *param_1 = 0;
  param_1[1] = 0;
  uVar2 = param_1[2];
  param_1[2] = 0;
  uVar5 = uVar6;
  if (uVar4 < uVar6) {
    do {
      uVar5 = uVar5 + 0xc;
    } while (uVar5 != uVar4);
  }
  fn_001008c4(uVar6,(int)(uVar2 - uVar6) / 0xc,0,uVar6,param_4);
  fn_00788218(param_1,(param_2[1] - *param_2) / 0xc,0,0,0);
  iVar1 = (int)(param_1[1] - *param_1) >> 0x1f;
  uVar4 = 0;
  if ((int)(param_1[1] - *param_1) / 0xc + iVar1 != iVar1) {
    do {
      uVar5 = (int)(param_1[1] - *param_1) / 0xc;
      if (uVar5 <= uVar4) {
        fn_002ff628(9,&DAT_008c7618,&DAT_008c7618,uVar4,uVar5);
      }
      puVar7 = (undefined4 *)(*param_1 + uVar4 * 0xc);
      uVar5 = (param_2[1] - *param_2) / 0xc;
      if (uVar5 <= uVar4) {
        fn_002ff628(9,&DAT_008c7600,&DAT_008c7600,uVar4,uVar5);
      }
      uVar5 = uVar4 + 1;
      puVar3 = (undefined4 *)(*param_2 + uVar4 * 0xc);
      *puVar7 = *puVar3;
      puVar7[1] = puVar3[1];
      puVar7[2] = puVar3[2];
      uVar4 = uVar5;
    } while (uVar5 < (uint)((int)(param_1[1] - *param_1) / 0xc));
  }
  return;
}


