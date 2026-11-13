#include "005df764_005dfbd4.h"



void fn_005dfbd4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0;
  do {
    uVar3 = param_1[uVar4 * 3 + 1];
    param_1[uVar4 * 3 + 1] = 0;
    uVar2 = param_1[uVar4 * 3 + 2];
    param_1[uVar4 * 3 + 2] = 0;
    iVar5 = param_1[uVar4 * 3 + 3];
    param_1[uVar4 * 3 + 3] = 0;
    uVar1 = uVar3;
    if (uVar2 < uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    fn_001008c4(uVar3,(int)(iVar5 - uVar3) >> 2,0);
    uVar4 = uVar4 + 1;
  } while (uVar4 < 2);
  *(undefined1 *)(param_1 + 7) = 0;
  *param_1 = 0;
  return;
}



void fn_005dfbcc(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  uVar5 = 0;
  do {
    uVar4 = puVar1[uVar5 * 3 + 1];
    puVar1[uVar5 * 3 + 1] = 0;
    uVar3 = puVar1[uVar5 * 3 + 2];
    puVar1[uVar5 * 3 + 2] = 0;
    iVar6 = puVar1[uVar5 * 3 + 3];
    puVar1[uVar5 * 3 + 3] = 0;
    uVar2 = uVar4;
    if (uVar3 < uVar4) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar3);
    }
    fn_001008c4(uVar4,(int)(iVar6 - uVar4) >> 2,0);
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  *(undefined1 *)(puVar1 + 7) = 0;
  *puVar1 = 0;
  return;
}



undefined4 fn_005dfa90(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  
  puVar2 = *(undefined4 **)(param_1 + 4);
  uVar12 = 0;
  *puVar2 = param_2;
  do {
    piVar11 = puVar2 + uVar12 * 3 + 1;
    uVar3 = fn_006ec9f8(*puVar2);
    if (0x3fffffff < uVar3) {
      param_4 = 0x3fffffff;
      fn_002ff628(8,&DAT_008c763a,&DAT_008c763a,uVar3,0x3fffffff);
    }
    if ((uint)(puVar2[uVar12 * 3 + 3] - *piVar11 >> 2) < uVar3) {
      uVar1 = puVar2[uVar12 * 3 + 2] - *piVar11 >> 2;
      uVar4 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
      if (uVar4 < uVar1 + 0x20) {
        uVar4 = uVar1 + 0x20;
      }
      if (uVar3 < uVar4) {
        uVar3 = uVar4;
      }
      puVar5 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
      puVar9 = (undefined4 *)puVar2[uVar12 * 3 + 2];
      puVar6 = puVar5;
      for (puVar8 = (undefined4 *)*piVar11; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar8;
        }
        puVar6 = puVar6 + 1;
      }
      iVar10 = *piVar11;
      for (iVar7 = iVar10; iVar7 != puVar2[uVar12 * 3 + 2]; iVar7 = iVar7 + 4) {
      }
      fn_001008c4(iVar10,puVar2[uVar12 * 3 + 3] - iVar10 >> 2,0,iVar10,param_4);
      puVar2[uVar12 * 3 + 2] = (puVar2[uVar12 * 3 + 2] - *piVar11 & 0xfffffffcU) + (int)puVar5;
      *piVar11 = (int)puVar5;
      puVar2[uVar12 * 3 + 3] = puVar5 + uVar3;
    }
    uVar12 = uVar12 + 1;
  } while (uVar12 < 2);
  return 1;
}



undefined4 fn_005df94c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 4);
  if (piVar3[3] == 0) {
    piVar3[3] = param_2;
    if (piVar3[2] != 0 && param_3 != 0) {
      iVar2 = 1;
      if ((param_3 != 1) && (param_3 == 2)) {
        iVar2 = 2;
      }
      *piVar3 = piVar3[2];
      piVar3[1] = iVar2;
    }
    uVar1 = 1;
    piVar3[2] = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_005df93c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = *(int **)(*(int *)(*param_1 + 0x4c) + 4);
  if (piVar2[3] == 0) {
    piVar2[3] = param_2;
    if (piVar2[2] != 0) {
      *piVar2 = piVar2[2];
      piVar2[1] = 2;
    }
    uVar1 = 1;
    piVar2[2] = 0;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_005df8f8(void)

{
  return;
}



void fn_005df880(undefined4 *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  
  *param_1 = &DAT_00859470;
  puVar1 = (undefined1 *)param_1[6];
  if (puVar1 != &DAT_008f9d04) {
    piVar2 = (int *)(puVar1 + -0xc);
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9cf8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      iVar3 = param_1[6];
      fn_001008c4(iVar3 + -0xc,*(int *)(iVar3 + -8) + 0xe,0);
    }
  }
  fn_00764478(param_1);
  return;
}



void fn_005df838(int *param_1)

{
  int *piVar1;
  
  (**(code **)(*param_1 + 0xc))(param_1);
  for (piVar1 = (int *)param_1[3]; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[2]) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  return;
}



int fn_005df7e0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = fn_004525ec(param_1 + 8);
  iVar1 = DAT_00898140;
  DAT_00898144 = DAT_00898144 + -1;
  if (DAT_00898144 == 0) {
    if (DAT_00898140 != 0) {
      iVar3 = fn_004500e4();
      if (iVar3 < 0) {
        fn_00146594();
      }
      fn_002feef8(iVar1);
    }
    DAT_00898140 = 0;
  }
  return iVar2 + -8;
}



int fn_005df764(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (DAT_00898144 == 0) {
    puVar1 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)0x0;
    }
    else {
      *puVar1 = &DAT_007ce528;
      iVar2 = fn_0044fd18();
      if (iVar2 < 0) {
        fn_00146594();
      }
    }
    DAT_00898140 = puVar1;
  }
  DAT_00898144 = DAT_00898144 + 1;
  *(undefined4 *)(param_1 + 4) = param_2;
  iVar2 = fn_00452528(param_1 + 8);
  return iVar2 + -8;
}


