#include "0067901c_00679534.h"



void fn_00679534(undefined4 *param_1)

{
  *param_1 = &DAT_00859ab8;
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



undefined4 fn_0067950c(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 unaff_r4;
  
  piVar1 = (int *)fn_0066eb80(DAT_00898840,3);
  iVar3 = *(int *)(param_1 + 0x6c);
  piVar1[0x1a2] = *(int *)(param_1 + 0x68);
  piVar1[0x1a3] = iVar3;
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 0x10) != 0) {
    (**(code **)(*piVar1 + 0x30))(piVar1);
    return 1;
  }
  fn_00673ce8(piVar1,0x15,iVar3,piVar1 + 0x1a2,unaff_r4);
  piVar1[0x1d] = 0;
  piVar1[0x1e] = 0;
  *(undefined1 *)(piVar1 + 0x1f) = 0;
  if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
    fn_00673ce8(piVar1,2);
    piVar1[0x1d] = 0;
    piVar1[0x1e] = 0;
    *(undefined1 *)(piVar1 + 0x1f) = 0;
    uVar2 = 0;
    if ((*(byte *)(piVar1 + 0x13) & 1) == 0) {
      (**(code **)(*piVar1 + 0x30))(piVar1,1);
      uVar2 = 1;
    }
  }
  else {
    (**(code **)(*piVar1 + 0x30))(piVar1,2);
    uVar2 = 1;
  }
  return uVar2;
}



void fn_006794fc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[1];
  *(undefined4 *)(param_1 + 0x68) = *param_2;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  return;
}



void fn_006794e8(int param_1)

{
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}



void fn_006794a0(undefined4 *param_1)

{
  *param_1 = &DAT_00859be4;
  fn_0066ec54(param_1);
  *param_1 = &DAT_00859b90;
  fn_002feef8(param_1);
  return;
}



bool fn_00679380(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(DAT_00898840 + 0x34) == 1) {
    iVar2 = fn_0066eb80(DAT_00898840,8);
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      fn_00672a6c();
      *(undefined4 *)(param_1 + 0x44) = 1;
      return true;
    }
    if (iVar3 == 1) {
      if ((*(byte *)(iVar2 + 0x4c) & 4) == 0) {
        return true;
      }
      goto LAB_00679478;
    }
  }
  else {
    if (*(int *)(DAT_00898840 + 0x34) != 2) {
      return true;
    }
    piVar1 = (int *)fn_0066eb80(DAT_00898840,0xb);
    iVar3 = *(int *)(param_1 + 0x44);
    if (iVar3 == 0) {
      fn_00674ec4();
      *(undefined4 *)(param_1 + 0x44) = 1;
      return true;
    }
    if (iVar3 == 1) {
      iVar2 = (**(code **)(*piVar1 + 0x2c))();
      if (iVar2 != 0) {
        return true;
      }
LAB_00679478:
      *(undefined4 *)(param_1 + 0x44) = 2;
      return true;
    }
  }
  return iVar3 != 2;
}



void fn_00679240(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x80,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    iVar2 = 0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NexCommandGatheringFindById_008c7062);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    fn_00119b60();
    *(undefined4 *)(iVar2 + -0x4c) = &DAT_00859ab8;
    *(undefined4 *)(iVar2 + -0x4c) = &DAT_0085a4b8;
    iVar2 = fn_00678280(iVar2 + 0x18);
    iVar2 = iVar2 + -100;
    fn_0067a32c(iVar2);
  }
  *(int *)(param_1 + 0xb0) = iVar2;
  return;
}



void fn_0067901c(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int *local_38;
  int *local_34;
  int *local_30;
  int *local_2c;
  int *local_28;
  int local_24;
  
  fn_0066e458(DAT_00898840,2,0);
  local_38 = (int *)0x0;
  local_34 = (int *)0x0;
  local_30 = (int *)0x0;
  local_2c = (int *)0x0;
  local_28 = (int *)0x0;
  local_24 = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar1[2] = iVar2;
  *piVar1 = (int)local_38;
  piVar1[1] = 1;
  piVar3 = (int *)piVar1[2];
  local_30 = piVar3 + 3;
  *piVar3 = (int)piVar3;
  piVar3[1] = (int)piVar3;
  local_38 = piVar1;
  local_2c = local_30;
  local_28 = piVar3;
  if (local_34 == (int *)0x0) {
    if (piVar1 == (int *)0x0) {
      uVar6 = 0x20;
    }
    else {
      uVar4 = piVar1[1];
      uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uVar6 < uVar4 + 0x20) {
        uVar6 = uVar4 + 0x20;
      }
    }
    piVar5 = (int *)fn_0015ece0(0xc);
    iVar2 = fn_0015ece0(uVar6 * 0xc);
    piVar5[2] = iVar2;
    *piVar5 = (int)local_38;
    piVar5[1] = uVar6;
    piVar1 = (int *)piVar5[2];
    local_2c = piVar1 + uVar6 * 3;
    local_30 = piVar1 + 3;
    local_38 = piVar5;
  }
  else {
    piVar1 = local_34;
    local_34 = (int *)*local_34;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = param_2;
  }
  *piVar1 = (int)piVar3;
  piVar1[1] = piVar3[1];
  *(int **)piVar3[1] = piVar1;
  piVar3[1] = (int)piVar1;
  local_24 = local_24 + 1;
  fn_00678da4(param_1,&local_38);
  if (local_28 != (int *)0x0) {
    piVar1 = (int *)*local_28;
    while (piVar3 = piVar1, piVar3 != local_28) {
      if (piVar3 == local_28) {
        piVar1 = local_28;
      }
      else {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        local_24 = local_24 + -1;
        *piVar3 = (int)local_34;
        local_34 = piVar3;
      }
    }
    *local_28 = (int)local_34;
    local_34 = local_28;
    piVar1 = local_38;
    while (piVar1 != (int *)0x0) {
      local_38 = (int *)*piVar1;
      fn_0014f1bc(piVar1[2]);
      fn_0014f1bc(piVar1);
      piVar1 = local_38;
    }
  }
  return;
}


