#include "0047e9ec_0047ee5c.h"



undefined4 fn_0047ee5c(int param_1,ushort param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (param_3 == 1) {
    param_1 = param_1 + 0x20;
  }
  else {
    param_1 = param_1 + 4;
  }
  iVar4 = *(int *)(param_1 + 0x10);
  iVar2 = iVar4;
  iVar1 = *(int *)(iVar4 + 4);
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 == iVar4) || (param_2 < *(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar4;
  }
  if (iVar2 == iVar4) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x14);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return uVar5;
}



undefined4 fn_0047edec(int param_1,int param_2,undefined1 *param_3)

{
  undefined4 uVar1;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined1 local_10;
  int local_c;
  
  local_10 = *param_3;
  local_30 = &DAT_008528bc;
  local_2c = *(undefined4 *)(param_2 + 4);
  local_28 = *(undefined4 *)(param_2 + 8);
  uStack_24 = *(undefined4 *)(param_2 + 0xc);
  uStack_20 = *(undefined4 *)(param_2 + 0x10);
  uStack_1c = *(undefined4 *)(param_2 + 0x14);
  uStack_18 = *(undefined4 *)(param_2 + 0x18);
  uStack_14 = *(undefined4 *)(param_2 + 0x1c);
  fn_007858d0(&local_c,param_1,&local_30);
  if (local_c == *(int *)(param_1 + 0x10)) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined4 *)(local_c + 0x34);
  }
  return uVar1;
}



undefined4 * fn_0047ebf0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  
  piVar6 = param_1 + 7;
  *param_1 = &DAT_00853700;
  piVar5 = (int *)param_1[0xb];
  if (piVar5 != (int *)0x0) {
    piVar1 = (int *)*piVar5;
    while (piVar3 = piVar1, piVar3 != piVar5) {
      piVar1 = (int *)param_1[0xb];
      if (piVar3 != (int *)param_1[0xb]) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[0xc] = param_1[0xc] + -1;
        *piVar3 = param_1[8];
        param_1[8] = piVar3;
      }
    }
    puVar2 = (undefined4 *)param_1[0xb];
    *puVar2 = param_1[8];
    param_1[8] = puVar2;
    piVar5 = (int *)*piVar6;
    while (piVar5 != (int *)0x0) {
      *piVar6 = *piVar5;
      if (piVar5[2] != 0) {
        pcVar4 = *(code **)(piVar5[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar5 != (int *)0x0) {
        if ((code *)piVar5[-2] == (code *)0x0) {
          fn_0030233c(piVar5 + -2);
        }
        else {
          (*(code *)piVar5[-2])();
        }
      }
      piVar5 = (int *)*piVar6;
    }
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
  }
  piVar6 = param_1 + 1;
  piVar5 = (int *)param_1[5];
  if (piVar5 != (int *)0x0) {
    piVar1 = (int *)*piVar5;
    while (piVar3 = piVar1, piVar3 != piVar5) {
      piVar1 = (int *)param_1[5];
      if (piVar3 != (int *)param_1[5]) {
        piVar1 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[6] = param_1[6] + -1;
        *piVar3 = param_1[2];
        param_1[2] = piVar3;
      }
    }
    puVar2 = (undefined4 *)param_1[5];
    *puVar2 = param_1[2];
    param_1[2] = puVar2;
    piVar5 = (int *)*piVar6;
    while (piVar5 != (int *)0x0) {
      *piVar6 = *piVar5;
      if (piVar5[2] != 0) {
        pcVar4 = *(code **)(piVar5[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar5 != (int *)0x0) {
        if ((code *)piVar5[-2] == (code *)0x0) {
          fn_0030233c(piVar5 + -2);
        }
        else {
          (*(code *)piVar5[-2])();
        }
      }
      piVar5 = (int *)*piVar6;
    }
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return param_1;
}



undefined4 * fn_0047eb04(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = param_1 + 1;
  *param_1 = &DAT_00853700;
  *piVar3 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar1[2] = iVar2;
  *piVar1 = *piVar3;
  piVar1[1] = 1;
  *piVar3 = (int)piVar1;
  iVar2 = piVar1[2];
  param_1[3] = iVar2;
  param_1[4] = iVar2 + 0xc;
  param_1[5] = iVar2;
  param_1[3] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[5] + 4) = param_1[5];
  piVar1 = param_1 + 7;
  *piVar1 = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar3[2] = iVar2;
  *piVar3 = *piVar1;
  piVar3[1] = 1;
  *piVar1 = (int)piVar3;
  iVar2 = piVar3[2];
  param_1[9] = iVar2;
  param_1[10] = iVar2 + 0xc;
  iVar2 = param_1[9];
  param_1[0xb] = iVar2;
  param_1[9] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[0xb] + 4) = param_1[0xb];
  return param_1;
}



void fn_0047e9ec(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  piVar1 = *(int **)(param_1 + 0x20);
  if (piVar1 == (int *)0x0) {
    piVar1 = *(int **)(param_1 + 0x24);
    if (piVar1 == *(int **)(param_1 + 0x28)) {
      if (*(int *)(param_1 + 0x1c) == 0) {
        uVar6 = 0x20;
      }
      else {
        uVar2 = *(uint *)(*(int *)(param_1 + 0x1c) + 4);
        uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar6 < uVar2 + 0x20) {
          uVar6 = uVar2 + 0x20;
        }
      }
      puVar3 = (undefined4 *)fn_0015ece0(0xc);
      uVar4 = fn_0015ece0(uVar6 * 0xc);
      puVar3[2] = uVar4;
      *puVar3 = *(undefined4 *)(param_1 + 0x1c);
      puVar3[1] = uVar6;
      *(undefined4 **)(param_1 + 0x1c) = puVar3;
      piVar1 = (int *)puVar3[2];
      *(int **)(param_1 + 0x24) = piVar1;
      *(int **)(param_1 + 0x28) = piVar1 + uVar6 * 3;
    }
    *(int **)(param_1 + 0x24) = piVar1 + 3;
  }
  else {
    *(int *)(param_1 + 0x20) = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = param_2;
  }
  *piVar1 = iVar7;
  piVar1[1] = *(int *)(iVar7 + 4);
  **(int **)(iVar7 + 4) = (int)piVar1;
  *(int **)(iVar7 + 4) = piVar1;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + 1;
  piVar1 = (int *)**(int **)(param_1 + 0x14);
  do {
    if (piVar1 == (int *)*(int *)(param_1 + 0x14)) {
      return;
    }
    piVar5 = (int *)piVar1[2];
    if (-0x401 < piVar5[1]) {
      if ((uint)piVar5[1] < 0x80000000) {
        return;
      }
      (**(code **)(*piVar5 + 8))(piVar5,param_2);
    }
    piVar1 = (int *)*piVar1;
  } while( true );
}


