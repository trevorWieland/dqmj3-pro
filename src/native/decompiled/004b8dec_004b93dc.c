#include "004b8dec_004b93dc.h"



int * fn_004b93dc(int *param_1)

{
  code *pcVar1;
  
  if (*param_1 != 0) {
    pcVar1 = *(code **)(*param_1 + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
  }
  return param_1;
}



undefined4 * fn_004b93c4(undefined4 *param_1)

{
  fn_0014f1bc(*param_1);
  return param_1;
}



int * fn_004b9334(int *param_1,int *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = 0x20;
  if (0x1f < (uint)(param_2[1] - *param_2)) {
    uVar1 = param_2[1] - *param_2;
  }
  puVar2 = (undefined1 *)fn_0015ece0();
  *param_1 = (int)puVar2;
  puVar6 = (undefined1 *)param_2[1];
  for (puVar4 = (undefined1 *)*param_2; puVar4 != puVar6; puVar4 = puVar4 + 1) {
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = *puVar4;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = param_2[1];
  iVar5 = *param_2;
  param_1[2] = *param_1 + uVar1;
  param_1[1] = (iVar3 - iVar5) + *param_1;
  return param_1;
}



int * fn_004b92d4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = (int *)param_1[1];
  for (piVar3 = (int *)*param_1; piVar3 != piVar4; piVar3 = piVar3 + 3) {
    puVar2 = (undefined4 *)piVar3[1];
    for (puVar1 = (undefined4 *)*piVar3; puVar1 != puVar2; puVar1 = puVar1 + 10) {
      (**(code **)*puVar1)(puVar1);
    }
    fn_0014f1bc(*piVar3);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_004b92c8(void)

{
  fn_00794a50();
  return;
}



int * fn_004b90b8(int *param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_28;
  uint local_24;
  
  if (param_2 != param_1) {
    iVar4 = *param_2;
    iVar6 = param_2[1];
    puVar3 = (undefined4 *)*param_1;
    local_28 = iVar6 - iVar4 >> 3;
    if ((uint)(param_1[2] - (int)puVar3 >> 3) < local_28) {
      uVar7 = param_1[1] - (int)puVar3 >> 3;
      local_24 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_24 < uVar7 + 0x20) {
        local_24 = uVar7 + 0x20;
      }
      puVar2 = &local_28;
      if (local_28 < local_24) {
        puVar2 = &local_24;
      }
      uVar7 = *puVar2;
      iVar1 = fn_0015ece0(uVar7 << 3);
      iVar8 = param_2[1];
      iVar6 = iVar1;
      for (iVar4 = *param_2; iVar4 != iVar8; iVar4 = iVar4 + 8) {
        if (iVar6 != 0) {
          fn_004b637c(iVar6,iVar4);
        }
        iVar6 = iVar6 + 8;
      }
      puVar5 = (undefined4 *)param_1[1];
      for (puVar3 = (undefined4 *)*param_1; puVar3 != puVar5; puVar3 = puVar3 + 2) {
        (**(code **)*puVar3)(puVar3);
      }
      fn_0014f1bc(*param_1);
      *param_1 = iVar1;
      param_1[1] = (param_2[1] - *param_2 & 0xfffffff8U) + iVar1;
      param_1[2] = iVar1 + uVar7 * 8;
    }
    else {
      uVar7 = param_1[1] - (int)puVar3 >> 3;
      if (uVar7 < local_28) {
        iVar6 = iVar4 + uVar7 * 8;
        for (; iVar4 != iVar6; iVar4 = iVar4 + 8) {
          fn_00170fa4(puVar3,iVar4);
          puVar3 = puVar3 + 2;
        }
        param_1[1] = (param_2[1] - *param_2 & 0xfffffff8U) + *param_1;
        iVar1 = param_2[1];
        iVar4 = *param_1 + uVar7 * 8;
        for (iVar6 = *param_2 + uVar7 * 8; iVar6 != iVar1; iVar6 = iVar6 + 8) {
          if (iVar4 != 0) {
            fn_004b637c(iVar4,iVar6);
          }
          iVar4 = iVar4 + 8;
        }
      }
      else {
        for (; iVar4 != iVar6; iVar4 = iVar4 + 8) {
          fn_00170fa4(puVar3,iVar4);
          puVar3 = puVar3 + 2;
        }
        puVar5 = (undefined4 *)param_1[1];
        for (; puVar3 != puVar5; puVar3 = puVar3 + 2) {
          (**(code **)*puVar3)(puVar3);
        }
        iVar4 = (param_2[1] - *param_2 & 0xfffffff8U) + *param_1;
        param_1[1] = iVar4;
        param_1[2] = iVar4;
      }
    }
  }
  return param_1;
}



int * fn_004b9014(int *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar1 = param_2[1] - *param_2 >> 3;
  uVar5 = 0x20;
  if (0x1f < uVar1) {
    uVar5 = uVar1;
  }
  iVar2 = fn_0015ece0(uVar5 << 3);
  *param_1 = iVar2;
  iVar4 = param_2[1];
  for (iVar3 = *param_2; iVar3 != iVar4; iVar3 = iVar3 + 8) {
    if (iVar2 != 0) {
      fn_004b637c(iVar2,iVar3);
    }
    iVar2 = iVar2 + 8;
  }
  iVar3 = param_2[1];
  iVar2 = *param_2;
  param_1[2] = *param_1 + uVar5 * 8;
  param_1[1] = (iVar3 - iVar2 & 0xfffffff8U) + *param_1;
  return param_1;
}



int * fn_004b8fd4(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



int * fn_004b8eac(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  uVar4 = (param_2[1] - *param_2) / 0x28;
  if (uVar4 < 0x20) {
    uVar4 = 0x20;
  }
  puVar1 = (undefined4 *)fn_0015ece0(uVar4 * 0x28);
  *param_1 = (int)puVar1;
  iVar5 = param_2[1];
  for (iVar2 = *param_2; iVar2 != iVar5; iVar2 = iVar2 + 0x28) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00855760;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar2 + 4);
      *(undefined1 *)((int)puVar1 + 5) = *(undefined1 *)(iVar2 + 5);
      puVar1[2] = &DAT_00854bec;
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(iVar2 + 0xc);
      uVar3 = *(undefined4 *)(iVar2 + 0x14);
      puVar1[4] = *(undefined4 *)(iVar2 + 0x10);
      puVar1[5] = uVar3;
      puVar1[6] = *(undefined4 *)(iVar2 + 0x18);
      uVar3 = *(undefined4 *)(iVar2 + 0x24);
      puVar1[8] = *(undefined4 *)(iVar2 + 0x20);
      puVar1[2] = &DAT_00853ae8;
      *puVar1 = &DAT_00855160;
      puVar1[9] = uVar3;
    }
    puVar1 = puVar1 + 10;
  }
  param_1[1] = *param_1 + ((param_2[1] - *param_2) / 0x28) * 0x28;
  param_1[2] = *param_1 + uVar4 * 0x28;
  return param_1;
}



int * fn_004b8e6c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 8) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



int * fn_004b8e2c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



int * fn_004b8dec(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)param_1[1];
  for (puVar1 = (undefined4 *)*param_1; puVar1 != puVar2; puVar1 = puVar1 + 6) {
    (**(code **)*puVar1)(puVar1);
  }
  fn_0014f1bc(*param_1);
  return param_1;
}


