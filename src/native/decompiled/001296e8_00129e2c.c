#include "001296e8_00129e2c.h"



int fn_00129e2c(uint *param_1)

{
  int iVar1;
  
  iVar1 = 86400000;
  fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),86400000,0)
  ;
  return (iVar1 / 3600000) % 0x18;
}



undefined4 fn_00129dd4(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((param_2 < 0x38) && (*(int *)(*(int *)(param_1 + 4) + param_2 * 4) != 0)) {
    uVar1 = fn_00145ac0();
  }
  return uVar1;
}



int fn_00129d4c(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar2 = (int)((longlong)(int)uVar1 * -0x72c234f7 + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 6) - (iVar2 >> 0x1f);
  if (0 < iVar2) {
    do {
      iVar3 = fn_003035b0(*(int *)(param_1 + 4) + iVar4 * 0x74,param_2);
      if (iVar3 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return -1;
}



void fn_00129c98(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  if (*(int **)(param_1 + 0xc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xc) + 4))();
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  if (*(int *)(param_1 + 8) != 0) {
    fn_001594e4(DAT_008977e4,*(int *)(param_1 + 8),1);
  }
  if (*(int **)(param_1 + 8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 8) + 4))();
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    fn_001594e4(DAT_008977e4,*(int *)(param_1 + 4),1);
  }
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}



void fn_00129bd4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  *(undefined1 *)(param_1 + 0x6c) = 0;
  local_18 = 0;
  iVar2 = -0x1f5fe7c5;
  iVar1 = iVar2;
  if ((*(int *)(param_1 + 0x70) == 0) && (iVar1 = fn_00158ef8(&local_18,1), -1 < iVar1)) {
    *(undefined4 *)(param_1 + 0x70) = local_18;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  local_18 = 0;
  if ((*(int *)(param_1 + 0x74) == 0) && (iVar2 = fn_00158ef8(&local_18,1), -1 < iVar2)) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x74) = local_18;
  }
  if (iVar2 < 0) {
    fn_0015e294();
  }
  fn_001443a0(DAT_00898840,param_1,0,local_18);
  return;
}



void fn_00129b6c(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  DAT_00898860 = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0x79) = 0;
  DAT_0089885c = 0;
  DAT_0089886c = 0;
  iVar2 = 0;
  do {
    puVar1 = (undefined4 *)fn_0013d4ec();
    iVar3 = iVar2 + 1;
    (&DAT_008cfee8)[iVar2 * 3] = *puVar1;
    (&DAT_008cfeec)[iVar2 * 3] = puVar1[1];
    (&DAT_008cfef0)[iVar2 * 3] = 0xffffffff;
    iVar2 = iVar3;
  } while (iVar3 < 8);
  DAT_00898864 = 0;
  DAT_00898868 = 0;
  return;
}



undefined4 * fn_00129b14(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = &DAT_00859b90;
  fn_00129688(param_1);
  fn_002fec40(param_1 + 1,param_2);
  *param_1 = &DAT_00859e58;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  fn_001445a0(param_1);
  return param_1;
}



void fn_00129a80(int param_1)

{
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  DAT_00898870 = 1;
  *(undefined1 *)(param_1 + 0xc0) = 0;
  *(undefined1 *)(param_1 + 0xc1) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



void fn_00129a0c(int param_1)

{
  *(undefined4 *)(param_1 + 0x84) = 1;
  *(short *)(param_1 + 0x82) = (short)*(undefined4 *)(DAT_00898840 + 0x38);
  *(undefined1 *)(param_1 + 0x4ac) = 1;
  fn_0013d538(param_1 + 0x53c,1);
  fn_0013d554(param_1 + 0x53c,*(uint *)(DAT_00898840 + 0x38) & 0xffff);
  *(undefined4 *)(param_1 + 0x2384) = 1;
  return;
}



void fn_00129918(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_18;
  
  local_18 = 0;
  iVar2 = -0x1f5fe7c5;
  iVar1 = iVar2;
  if ((*(int *)(param_1 + 0x6c) == 0) && (iVar1 = fn_00158ef8(&local_18,1), -1 < iVar1)) {
    *(undefined4 *)(param_1 + 0x6c) = local_18;
    iVar1 = 0;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  local_18 = 0;
  if ((*(int *)(param_1 + 0x70) == 0) && (iVar2 = fn_00158ef8(&local_18,1), -1 < iVar2)) {
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x70) = local_18;
  }
  if (iVar2 < 0) {
    fn_0015e294();
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x94) = 0;
  *(undefined4 *)(param_1 + 0x98) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa4) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  fn_00301f50(param_1 + 0xc0,0x284);
  *(undefined1 *)(param_1 + 0x345) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 99;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0;
  return;
}



undefined4 fn_00129720(int param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  uint *puVar11;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar5 = 0;
  puVar10 = *(undefined4 **)(iVar1 + 8);
  uVar4 = (int)puVar10 - *(int *)(iVar1 + 4) >> 2;
  if (uVar4 != 0) {
    do {
      if (*(int **)(*(int *)(iVar1 + 4) + uVar5 * 4) == param_2) {
        return 0;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < uVar4);
  }
  puVar11 = (uint *)(iVar1 + 4);
  if (puVar10 == *(undefined4 **)(iVar1 + 0xc)) {
    if (uVar4 < (uint)((int)*(undefined4 **)(iVar1 + 0xc) - *(int *)(iVar1 + 4) >> 2)) {
      *(undefined4 **)(iVar1 + 8) = puVar10 + 1;
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = puVar10[-1];
      }
      puVar7 = puVar10 + -1;
      puVar8 = puVar10;
      if (puVar10 < puVar7) {
        if (0 < (int)puVar7 - (int)puVar10) {
          iVar1 = (int)puVar7 - (int)puVar10 >> 2;
          iVar6 = 0;
          do {
            iVar1 = iVar1 + -1;
            puVar10[iVar6 + -1] = puVar7[iVar6 + -1];
            iVar6 = iVar6 + -1;
          } while (iVar1 != 0);
        }
      }
      else {
        while (puVar10 != puVar7) {
          puVar7 = puVar7 + -1;
          puVar8[-1] = *puVar7;
          puVar8 = puVar8 + -1;
        }
      }
      *puVar10 = param_2;
    }
    else {
      uVar5 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (uVar5 < uVar4 + 0x20) {
        uVar5 = uVar4 + 0x20;
      }
      puVar2 = (undefined4 *)fn_00100fc6(uVar5 << 2,0);
      puVar8 = puVar2;
      for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar7;
        }
        puVar8 = puVar8 + 1;
      }
      puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = param_2;
      }
      puVar8 = *(undefined4 **)(iVar1 + 8);
      puVar7 = (undefined4 *)(((int)puVar10 - *puVar11 & 0xfffffffc) + (int)puVar2);
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        puVar7 = puVar7 + 1;
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar10;
        }
      }
      uVar3 = *puVar11;
      uVar9 = *(uint *)(iVar1 + 8);
      uVar4 = uVar3;
      if (uVar9 < uVar3) {
        do {
          uVar4 = uVar4 + 4;
        } while (uVar4 != uVar9);
      }
      fn_001008c4(uVar3,(int)(*(int *)(iVar1 + 0xc) - uVar3) >> 2,0);
      *(undefined4 **)(iVar1 + 0xc) = puVar2 + uVar5;
      *(undefined4 **)(iVar1 + 8) = puVar2 + ((int)(uVar9 - uVar3) >> 2) + 1;
      *puVar11 = (uint)puVar2;
    }
  }
  else {
    *(undefined4 **)(iVar1 + 8) = puVar10 + 1;
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = param_2;
    }
  }
  (**(code **)(*param_2 + 0x10))(param_2);
  return 1;
}



bool fn_001296e8(int param_1)

{
  bool bVar1;
  
  bVar1 = *(char *)(*(int *)(param_1 + 0x54) + 0x48) == '\0';
  if (bVar1) {
    fn_0012cf70(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x18) = 1;
    *(undefined1 *)(param_1 + 0x4f) = 0;
  }
  return bVar1;
}


