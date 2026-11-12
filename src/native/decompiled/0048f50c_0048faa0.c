#include "0048f50c_0048faa0.h"



void fn_0048faa0(void)

{
  int iVar1;
  
  iVar1 = fn_0048fad0();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048fac0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_0048f9d0(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_0085355c;
  param_1[3] = &DAT_00855a94;
  fn_0015e6f0(param_1 + 4,*(undefined4 *)(param_2 + 4));
  *(undefined2 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &DAT_00854078;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0xc);
  piVar1[2] = iVar2;
  *piVar1 = param_1[8];
  piVar1[1] = 1;
  param_1[8] = piVar1;
  iVar2 = piVar1[2];
  param_1[10] = iVar2;
  param_1[0xb] = iVar2 + 0xc;
  param_1[0xc] = iVar2;
  param_1[10] = iVar2 + 0xc;
  *(int *)iVar2 = iVar2;
  *(undefined4 *)(param_1[0xc] + 4) = param_1[0xc];
  return param_1;
}



undefined2 fn_0048f9b0(int *param_1)

{
  (**(code **)(*param_1 + 0x3c))(param_1);
  return (short)param_1[5];
}



void fn_0048f8a0(int *param_1)

{
  int iVar1;
  undefined2 uVar2;
  int *piVar3;
  bool bVar4;
  
  if ((short)param_1[5] == 0x10) {
    iVar1 = fn_006d27b8(param_1);
    bVar4 = iVar1 != 0x40;
    if (bVar4) {
      iVar1 = param_1[0xd];
    }
    if (bVar4 && iVar1 != 0) {
      for (piVar3 = *(int **)param_1[0xc]; piVar3 != (int *)param_1[0xc]; piVar3 = (int *)*piVar3) {
        if (*(short *)(piVar3[2] + 0x14) != 0x40) {
          fn_0047a2ec();
        }
      }
    }
    else {
      uVar2 = 0x40;
      iVar1 = (**(code **)(*param_1 + 0x30))(param_1,0x40);
      if (iVar1 != 0) goto LAB_0048f8f4;
    }
  }
  if ((short)param_1[5] != 2) {
    return;
  }
  iVar1 = fn_006d27b8(param_1);
  bVar4 = iVar1 != 4;
  if (bVar4) {
    iVar1 = param_1[0xd];
  }
  if (bVar4 && iVar1 != 0) {
    for (piVar3 = *(int **)param_1[0xc]; piVar3 != (int *)param_1[0xc]; piVar3 = (int *)*piVar3) {
      if (*(short *)(piVar3[2] + 0x14) != 4) {
        fn_00479edc();
      }
    }
    return;
  }
  uVar2 = 4;
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,4);
  if (iVar1 == 0) {
    return;
  }
LAB_0048f8f4:
  (**(code **)(*param_1 + 0x14))(param_1,uVar2);
  *(undefined2 *)(param_1 + 5) = uVar2;
  return;
}



undefined4 fn_0048f7e8(int param_1,undefined4 param_2,undefined4 param_3,uint *param_4)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  bool bVar5;
  
  while (*(int *)(param_1 + 0x34) != 0) {
    piVar4 = *(int **)(param_1 + 0x30);
    piVar1 = (int *)*piVar4;
    puVar3 = (uint *)piVar1[2];
    while( true ) {
      if (piVar1 != piVar4) {
        param_4 = (uint *)piVar1[2];
      }
      if (piVar1 == piVar4 || param_4 == puVar3) break;
      piVar1 = (int *)*piVar1;
    }
    if (piVar1 != *(int **)(param_1 + 0x30)) {
      *(int *)piVar1[1] = *piVar1;
      *(int *)(*piVar1 + 4) = piVar1[1];
      param_4 = puVar3 + 1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
      *piVar1 = *(int *)(param_1 + 0x24);
      *(int **)(param_1 + 0x24) = piVar1;
      do {
        uVar2 = *param_4 - 1;
        bVar5 = (bool)hasExclusiveAccess(param_4);
      } while (!bVar5);
      *param_4 = uVar2;
      bVar5 = uVar2 == 0;
      if (bVar5) {
        uVar2 = (uint)(byte)puVar3[2];
      }
      if (bVar5 && uVar2 == 0) {
        *(undefined1 *)(puVar3 + 2) = 1;
        (**(code **)(*puVar3 + 4))(puVar3);
      }
    }
  }
  return 1;
}



undefined4 fn_0048f740(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  int *piVar6;
  bool bVar7;
  
  piVar6 = (int *)param_1[0xc];
  piVar4 = (int *)*piVar6;
  piVar1 = param_1;
  while( true ) {
    if (piVar4 != piVar6) {
      piVar1 = (int *)piVar4[2];
    }
    if (piVar4 == piVar6 || piVar1 == param_2) break;
    piVar4 = (int *)*piVar4;
  }
  if (piVar4 == (int *)param_1[0xc]) {
    uVar2 = 0;
  }
  else {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    param_1[0xd] = param_1[0xd] + -1;
    *piVar4 = param_1[9];
    param_1[9] = (int)piVar4;
    puVar5 = (uint *)(param_2 + 1);
    do {
      uVar3 = *puVar5 - 1;
      bVar7 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar7);
    *puVar5 = uVar3;
    bVar7 = uVar3 == 0;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(param_2 + 2);
    }
    if (bVar7 && uVar3 == 0) {
      *(undefined1 *)(param_2 + 2) = 1;
      (**(code **)(*param_2 + 4))();
    }
    uVar2 = 1;
  }
  return uVar2;
}



bool fn_0048f710(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 4;
}



undefined4 fn_0048f620(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = param_1[0xc];
  piVar1 = (int *)param_1[9];
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)param_1[10];
    if (piVar1 == (int *)param_1[0xb]) {
      if (param_1[8] == 0) {
        uVar4 = 0x20;
      }
      else {
        uVar2 = *(uint *)(param_1[8] + 4);
        uVar4 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
        if (uVar4 < uVar2 + 0x20) {
          uVar4 = uVar2 + 0x20;
        }
      }
      piVar1 = (int *)fn_0015ece0(0xc);
      iVar3 = fn_0015ece0(uVar4 * 0xc);
      piVar1[2] = iVar3;
      *piVar1 = param_1[8];
      piVar1[1] = uVar4;
      param_1[8] = (int)piVar1;
      piVar1 = (int *)piVar1[2];
      param_1[10] = (int)piVar1;
      param_1[0xb] = (int)(piVar1 + uVar4 * 3);
    }
    param_1[10] = (int)(piVar1 + 3);
  }
  else {
    param_1[9] = *piVar1;
  }
  if (piVar1 + 2 != (int *)0x0) {
    piVar1[2] = param_2;
  }
  *piVar1 = iVar5;
  piVar1[1] = *(int *)(iVar5 + 4);
  **(int **)(iVar5 + 4) = (int)piVar1;
  *(int **)(iVar5 + 4) = piVar1;
  param_1[0xd] = param_1[0xd] + 1;
  if (*(int *)(param_2 + 0x1c) != 0) {
    *(undefined4 *)(param_2 + 0x1c) = 0;
  }
  *(int **)(param_2 + 0x1c) = param_1;
  (**(code **)(*param_1 + 0x38))(param_1);
  return 1;
}



bool fn_0048f5f0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 4;
}



bool fn_0048f5c0(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 0x40;
}



bool fn_0048f590(int *param_1)

{
  int iVar1;
  
  (**(code **)(*param_1 + 0x3c))(param_1);
  iVar1 = fn_006d27b8(param_1);
  return iVar1 == 0x40;
}



void fn_0048f50c(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &DAT_00853d18;
  piVar2 = (int *)param_1[6];
  (**(code **)(*piVar2 + 8))(piVar2);
  fn_00459c64(param_1);
  (**(code **)(*piVar2 + 0xc))(piVar2);
  *param_1 = &DAT_008529d4;
  fn_00459c64(param_1);
  iVar1 = fn_00754778(param_1 + 1);
  if (*(code **)(iVar1 + -0xc) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0048f574. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -0xc))();
  return;
}


