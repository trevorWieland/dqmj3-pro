#include "0074a364_0074a8dc.h"



void fn_0074a8dc(int *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar3 = **(int **)(param_2 + 0x14);
  param_1[1] = (int)&DAT_008528bc;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)((int)param_1 + 9) = 2;
  piVar2 = (int *)(*(int *)(iVar3 + 8) + 4);
  *param_1 = *(int *)(iVar3 + 8);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  iVar4 = *(int *)(iVar3 + 0x14);
  iVar5 = *(int *)(iVar3 + 0x18);
  iVar6 = *(int *)(iVar3 + 0x1c);
  iVar7 = *(int *)(iVar3 + 0x20);
  iVar8 = *(int *)(iVar3 + 0x24);
  iVar9 = *(int *)(iVar3 + 0x28);
  param_1[2] = *(int *)(iVar3 + 0x10);
  param_1[3] = iVar4;
  param_1[4] = iVar5;
  param_1[5] = iVar6;
  param_1[6] = iVar7;
  param_1[7] = iVar8;
  param_1[8] = iVar9;
  return;
}



void fn_0074a6d0(int param_1,int *param_2,uint *param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar11 = *(int *)(param_1 + 0x14);
  while ((iVar11 != **(int **)(param_1 + 0x14) &&
         (uVar1 = *(uint *)(*(int *)(iVar11 + 4) + 0x34),
         param_3[1] <= uVar1 &&
         (uint)(*(uint *)(*(int *)(iVar11 + 4) + 0x30) <= *param_3) <= param_3[1] - uVar1))) {
    iVar11 = *(int *)(iVar11 + 4);
  }
  uVar1 = *param_3;
  uVar12 = param_3[1];
  piVar2 = (int *)*param_2;
  piVar8 = piVar2 + 1;
  do {
    bVar13 = (bool)hasExclusiveAccess(piVar8);
  } while (!bVar13);
  *piVar8 = *piVar8 + 1;
  iVar14 = param_2[2];
  iVar15 = param_2[3];
  iVar16 = param_2[4];
  iVar17 = param_2[5];
  iVar18 = param_2[6];
  iVar19 = param_2[7];
  iVar20 = param_2[8];
  piVar8 = *(int **)(param_1 + 8);
  if (piVar8 == (int *)0x0) {
    piVar8 = *(int **)(param_1 + 0xc);
    if (piVar8 == *(int **)(param_1 + 0x10)) {
      if (*(int *)(param_1 + 4) == 0) {
        uVar10 = 0x20;
      }
      else {
        uVar3 = *(uint *)(*(int *)(param_1 + 4) + 4);
        uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        uVar10 = uVar3 + 0x20;
        if (uVar3 + 0x20 <= uVar6) {
          uVar10 = uVar6;
        }
      }
      puVar4 = (undefined4 *)fn_0015ece0(0xc);
      uVar5 = fn_0015ece0(uVar10 * 0x38);
      puVar4[2] = uVar5;
      *puVar4 = *(undefined4 *)(param_1 + 4);
      puVar4[1] = uVar10;
      *(undefined4 **)(param_1 + 4) = puVar4;
      piVar8 = (int *)puVar4[2];
      *(int **)(param_1 + 0xc) = piVar8;
      *(int **)(param_1 + 0x10) = piVar8 + uVar10 * 0xe;
    }
    *(int **)(param_1 + 0xc) = piVar8 + 0xe;
  }
  else {
    *(int *)(param_1 + 8) = *piVar8;
  }
  if (piVar8 + 2 != (int *)0x0) {
    piVar8[3] = (int)&DAT_008528bc;
    piVar8[4] = 0;
    piVar8[5] = 0;
    *(undefined1 *)((int)piVar8 + 0x11) = 2;
    piVar8[2] = (int)piVar2;
    piVar7 = piVar2 + 1;
    do {
      bVar13 = (bool)hasExclusiveAccess(piVar7);
    } while (!bVar13);
    *piVar7 = *piVar7 + 1;
    piVar8[4] = iVar14;
    piVar8[5] = iVar15;
    piVar8[6] = iVar16;
    piVar8[7] = iVar17;
    piVar8[8] = iVar18;
    piVar8[9] = iVar19;
    piVar8[10] = iVar20;
    piVar8[0xc] = uVar1;
    piVar8[0xd] = uVar12;
  }
  *piVar8 = iVar11;
  piVar8[1] = *(int *)(iVar11 + 4);
  **(undefined4 **)(iVar11 + 4) = piVar8;
  *(int **)(iVar11 + 4) = piVar8;
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + 1;
  puVar9 = (uint *)(piVar2 + 1);
  do {
    uVar1 = *puVar9 - 1;
    bVar13 = (bool)hasExclusiveAccess(puVar9);
  } while (!bVar13);
  *puVar9 = uVar1;
  bVar13 = uVar1 == 0;
  if (bVar13) {
    uVar1 = (uint)*(byte *)(piVar2 + 2);
  }
  if (bVar13 && uVar1 == 0) {
    *(undefined1 *)(piVar2 + 2) = 1;
    (**(code **)(*piVar2 + 4))();
  }
  return;
}



undefined4 fn_0074a5fc(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar2 + 0x10) - *(int *)(param_1 + 0xc)) < 8) {
    *(undefined1 *)(param_1 + 4) = 1;
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  puVar3 = (undefined4 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0xc) + *(int *)(param_1 + 0xc));
  uVar1 = puVar3[1];
  *param_2 = *puVar3;
  param_2[1] = uVar1;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
  return 1;
}



undefined4 fn_0074a598(int param_1,undefined2 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar1 + 0x10) - *(int *)(param_1 + 0xc)) < 2) {
    *(undefined1 *)(param_1 + 4) = 1;
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(undefined2 *)
              (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 2;
  return 1;
}



undefined4 fn_0074a528(int param_1,uint *param_2)

{
  int iVar1;
  uint *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if ((uint)(*(int *)(iVar1 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
    *param_2 = 0;
    return 0;
  }
  puVar2 = (uint *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
  *param_2 = *puVar2 & 0xffffff | (uint)*(byte *)((int)puVar2 + 3) << 0x18;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  return 1;
}



undefined4 fn_0074a4c8(int param_1,undefined1 *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (*(int *)(iVar1 + 0x10) == *(int *)(param_1 + 0xc)) {
    *(undefined1 *)(param_1 + 4) = 1;
    *param_2 = 0;
    return 0;
  }
  *param_2 = *(undefined1 *)
              (*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + *(int *)(param_1 + 0xc));
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  return 1;
}



void fn_0074a4a0(undefined4 *param_1)

{
  *param_1 = &DAT_00852630;
  fn_0014e6e4(param_1);
  fn_00170c3c(param_1);
  return;
}



undefined4 fn_0074a444(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = *(int *)(param_1 + 4);
  uVar1 = *(undefined1 *)(param_1 + 8);
  uVar2 = *(undefined1 *)(param_1 + 9);
  cVar3 = *(char *)(param_1 + 10);
  iVar5 = iVar6 + 0x58;
  fn_00170704(iVar5);
  uVar4 = fn_001709d8(iVar6,param_2,param_3,uVar1,uVar2,(int)cVar3);
  fn_001707b4(iVar5);
  return uVar4;
}



void fn_0074a414(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = iVar2 + 0x58;
  fn_00170704(iVar1);
  fn_0015e5c0(iVar2,param_2);
  fn_001707b4(iVar1);
  return;
}



void fn_0074a3ec(undefined4 *param_1)

{
  *param_1 = &DAT_00852630;
  fn_0014e6e4(param_1);
  fn_00170c3c(param_1);
  return;
}



undefined4 fn_0074a364(int *param_1,undefined4 param_2)

{
  int extraout_r1;
  int *piVar1;
  
  piVar1 = param_1 + 5;
  fn_00170704(piVar1);
  if ((uint)param_1[8] <= (uint)param_1[10]) {
    fn_001707b4(piVar1);
    return 0;
  }
  fn_00169f1c(param_1[9] + param_1[8] + -1);
  param_1[9] = extraout_r1;
  *(undefined4 *)(*param_1 + extraout_r1 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    fn_0014df84(param_1 + 1,1);
  }
  fn_001707b4(piVar1);
  return 1;
}


