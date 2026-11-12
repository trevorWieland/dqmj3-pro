#include "002625d0_00262ad0.h"



int fn_00262a54(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined1 local_28 [12];
  undefined4 local_1c [2];
  
  iVar2 = *param_1;
  iVar1 = fn_00145b00(0x98,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00389674();
    if (iVar1 != 0) {
      local_1c[0] = fn_00262ad0(iVar2,iVar1);
      fn_00389360(iVar1,param_2,local_28,param_3);
      fn_0079d450(iVar2 + 0x70,local_1c);
    }
  }
  return iVar1;
}



void fn_002628ec(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0;
  iVar7 = 0;
  piVar5 = (int *)*param_1;
  uVar4 = 0;
  do {
    uVar1 = piVar5[7] - piVar5[6] >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar4,uVar1);
    }
    iVar2 = uVar4 * 4;
    uVar4 = uVar4 + 1;
    if (-1 < *(int *)(piVar5[6] + iVar2)) {
      iVar7 = iVar7 + 1;
    }
  } while ((int)uVar4 < 4);
  if (0 < iVar7) {
    do {
      uVar4 = piVar5[7] - piVar5[6] >> 2;
      if (uVar4 <= uVar6) {
        fn_002ff628(9,&DAT_008c7670,&DAT_008c7670,uVar6,uVar4);
      }
      uVar4 = *(uint *)(piVar5[6] + uVar6 * 4);
      if (-1 < (int)uVar4) {
        uVar1 = piVar5[1] - *piVar5 >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar1);
        }
        piVar3 = *(int **)(*piVar5 + uVar4 * 4);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xb4))();
        }
      }
      iVar7 = 0;
      uVar4 = 0;
      uVar6 = uVar6 + 1;
      do {
        uVar1 = piVar5[7] - piVar5[6] >> 2;
        if (uVar1 <= uVar4) {
          fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar4,uVar1);
        }
        iVar2 = uVar4 * 4;
        uVar4 = uVar4 + 1;
        if (-1 < *(int *)(piVar5[6] + iVar2)) {
          iVar7 = iVar7 + 1;
        }
      } while ((int)uVar4 < 4);
    } while ((int)uVar6 < iVar7);
  }
  return;
}



int fn_00262878(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  
  iVar2 = *param_1;
  local_20 = param_4;
  iVar1 = fn_00145b00(0x98,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0034ef9c();
    if (iVar1 != 0) {
      local_20 = fn_00262ad0(iVar2,iVar1);
      fn_0034ee4c(iVar1,param_2,param_3,param_4);
      fn_0079d450(iVar2 + 0x70,&local_20);
    }
  }
  return iVar1;
}



int fn_00262814(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0034ec4c();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_0034eb58(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_00262794(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  fn_00262bfc(iVar2);
  iVar1 = fn_00145b00(0x84,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0032d6a0();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_0032d488(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



int fn_002626cc(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  iVar2 = *param_1;
  local_18 = param_4;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0032cff8();
    if (iVar1 != 0) {
      local_18 = fn_00262ad0(iVar2,iVar1);
      fn_0032ce98(iVar1,param_2);
      fn_0079d450(iVar2 + 0x70,&local_18);
    }
  }
  return iVar1;
}



uint fn_00262ad0(int *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_14;
  
  uVar4 = 0;
  iVar1 = param_1[1] - *param_1 >> 2;
  local_14 = param_2;
  if (0 < iVar1) {
    do {
      uVar2 = param_1[1] - *param_1 >> 2;
      if (uVar2 <= uVar4) {
        fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar2);
      }
      if (*(int *)(*param_1 + uVar4 * 4) == 0) {
        if (uVar4 != 0xffffffff) {
          uVar2 = param_1[1] - *param_1 >> 2;
          if (uVar2 <= uVar4) {
            fn_002ff628(9,&DAT_008c7646,&DAT_008c7646,uVar4,uVar2);
          }
          *(int *)(*param_1 + uVar4 * 4) = local_14;
          goto LAB_00262be4;
        }
        break;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < iVar1);
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 == (int *)param_1[2]) {
    fn_00797ee4(param_1,piVar3,&local_14);
  }
  else {
    param_1[1] = (int)(piVar3 + 1);
    if (piVar3 != (int *)0x0) {
      *piVar3 = local_14;
    }
  }
  uVar4 = (param_1[1] - *param_1 >> 2) - 1;
LAB_00262be4:
  *(uint *)(local_14 + 0x4c) = uVar4;
  return uVar4;
}



void fn_002625d0(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  
  iVar3 = *param_1;
  piVar2 = *(int **)(iVar3 + 0x84);
  for (piVar1 = *(int **)(iVar3 + 0x80); piVar2 != piVar1; piVar1 = piVar1 + 1) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  for (piVar1 = *(int **)(iVar3 + 0x8c); *(int **)(iVar3 + 0x90) != piVar1; piVar1 = piVar1 + 1) {
    if (*piVar1 == param_2) {
      return;
    }
  }
  if (piVar2 == *(int **)(iVar3 + 0x88)) {
    local_10 = param_2;
    fn_00797ee4(iVar3 + 0x80,piVar2,&local_10);
    return;
  }
  *(int **)(iVar3 + 0x84) = piVar2 + 1;
  if (piVar2 != (int *)0x0) {
    *piVar2 = param_2;
  }
  return;
}


