#include "00241f00_002423fc.h"



undefined4 fn_002423fc(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar8 = iVar1 + 4;
  piVar2 = (int *)(iVar1 + 0x324);
  uVar4 = *(uint *)(iVar1 + 0x324);
  if ((uVar4 == 0) || (uVar4 >= param_2 && uVar4 != param_2)) {
    piVar2 = (int *)fn_0077f138(param_2,iVar8,0x32);
  }
  else if (uVar4 < param_2) {
    piVar2 = (int *)fn_0077f138(param_2,iVar1 + 0x324,0x32);
  }
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    if (*piVar2 != 0) {
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
    }
    fn_007a7a68(iVar8,(uint *)(iVar1 + 0x644),100);
    fn_007a2810(iVar8,iVar1 + 0x104);
    uVar3 = 1;
    for (puVar9 = (uint *)(iVar1 + 0x104); puVar9 != (uint *)(iVar1 + 0x644); puVar9 = puVar9 + 4) {
      uVar4 = *puVar9;
      uVar10 = puVar9[3];
      uVar14 = puVar9[1];
      uVar15 = puVar9[2];
      puVar7 = puVar9 + -4;
      puVar6 = puVar9;
      if ((uVar4 != 0) && ((puVar5 = puVar9, *puVar7 == 0 || (uVar4 != 0 && uVar4 < *puVar7)))) {
        do {
          puVar6 = puVar7;
          uVar11 = puVar6[1];
          uVar12 = puVar6[2];
          uVar13 = puVar6[3];
          puVar7 = puVar6 + -4;
          *puVar5 = *puVar6;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          if (uVar4 == 0) break;
          puVar5 = puVar6;
        } while ((*puVar7 == 0) || (uVar4 != 0 && uVar4 < *puVar7));
      }
      *puVar6 = uVar4;
      puVar6[3] = uVar10;
      puVar6[1] = uVar14;
      puVar6[2] = uVar15;
    }
  }
  return uVar3;
}



int * fn_00242324(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = *(int **)(param_1 + 4);
  iVar2 = 0;
  do {
    if (piVar1[iVar2 * 4 + 1] == 0) {
      iVar2 = iVar2 * 4 + 1;
LAB_00242384:
      piVar3 = piVar1 + iVar2;
      if (piVar3 != (int *)0x0) {
        iVar2 = *piVar1;
        *piVar1 = iVar2 + 1;
        *piVar3 = iVar2 + 1;
        goto LAB_0024239c;
      }
      break;
    }
    if ((piVar1 + iVar2 * 4 + 1)[4] == 0) {
      iVar2 = iVar2 * 4 + 5;
      goto LAB_00242384;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 100);
  piVar3 = (int *)0x0;
LAB_0024239c:
  if (param_3 < 1) {
    param_3 = 0;
  }
  *(short *)(piVar3 + 1) = (short)param_2;
  *(char *)((int)piVar3 + 6) = (char)param_3;
  fn_0024ec28(piVar3,0);
  fn_00289e9c(*(undefined4 *)(DAT_00897804 + 0x24),param_2);
  fn_00144834(0x201);
  fn_00144834(0x1c9,0);
  return piVar3;
}



int fn_002422fc(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (99 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 0x648 + param_2 * 0x10;
  }
  return iVar1;
}



void fn_00242250(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x648 + iVar1 * 0x10) == 0) break;
    iVar1 = iVar1 + 1;
    iVar4 = iVar4 + 1;
  } while (iVar1 < 100);
  iVar1 = 0;
  if (0 < iVar4) {
    do {
      if ((iVar1 < 0) || (99 < iVar1)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(param_1 + 4) + 0x648 + iVar1 * 0x10;
      }
      uVar2 = fn_00250030(iVar3);
      if (*(int *)(iVar3 + 4) == param_2) {
        *(undefined4 *)(iVar3 + 4) = 0;
        *(undefined1 *)(iVar3 + 9) = 0;
        fn_0024f974(iVar3,uVar2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar4);
  }
  return;
}



int fn_0024222c(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 < 0) || (99 < param_2)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 4) + 4 + param_2 * 0x10;
  }
  return iVar1;
}



void fn_00242170(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = 0;
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x648 + iVar1 * 0x10) == 0) break;
    iVar1 = iVar1 + 1;
    iVar5 = iVar5 + 1;
  } while (iVar1 < 100);
  iVar1 = 0;
  if (0 < iVar5) {
    do {
      if ((iVar1 < 0) || (99 < iVar1)) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 4) + 0x648 + iVar1 * 0x10;
      }
      uVar2 = fn_00250030(iVar4);
      uVar3 = *(uint *)(iVar4 + 4);
      bVar6 = uVar3 == param_2;
      if (bVar6) {
        uVar3 = (uint)*(byte *)(iVar4 + 9);
      }
      if (bVar6 && uVar3 == param_3) {
        *(undefined4 *)(iVar4 + 4) = 0;
        *(undefined1 *)(iVar4 + 9) = 0;
        fn_0024f974(iVar4,uVar2);
        return;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar5);
  }
  return;
}



int * fn_00242104(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar3 = iVar1 + 0x648;
  uVar4 = *(uint *)(iVar1 + 0x968);
  uVar5 = CONCAT44(iVar3,iVar1 + 0x968);
  if ((uVar4 != 0) && (uVar4 <= param_2)) {
    if (param_2 <= uVar4) goto LAB_0024215c;
    iVar3 = iVar1 + 0x968;
  }
  uVar5 = fn_0077f06c(param_2,iVar3,0x32);
LAB_0024215c:
  iVar1 = (int)((ulonglong)uVar5 >> 0x20);
  piVar2 = (int *)uVar5;
  if (piVar2 != (int *)0x0) {
    iVar1 = *piVar2;
  }
  if (piVar2 == (int *)0x0 || iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  return piVar2;
}



undefined4 fn_00241fb8(int param_1,uint param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar8 = iVar1 + 0x648;
  uVar4 = *(uint *)(iVar1 + 0x968);
  piVar2 = (int *)(iVar1 + 0x968);
  if ((uVar4 == 0) || (uVar4 >= param_2 && uVar4 != param_2)) {
    piVar2 = (int *)fn_0077f06c(param_2,iVar8,0x32);
  }
  else if (uVar4 < param_2) {
    piVar2 = (int *)fn_0077f06c(param_2,iVar1 + 0x968,0x32);
  }
  if (piVar2 == (int *)0x0) {
    uVar3 = 0;
  }
  else {
    if (*piVar2 != 0) {
      *piVar2 = 0;
      piVar2[1] = 0;
      piVar2[2] = 0;
      piVar2[3] = 0;
    }
    fn_007a604c(iVar8,(uint *)(iVar1 + 0xc88),100);
    fn_007a1f1c(iVar8,iVar1 + 0x748);
    uVar3 = 1;
    for (puVar9 = (uint *)(iVar1 + 0x748); puVar9 != (uint *)(iVar1 + 0xc88); puVar9 = puVar9 + 4) {
      uVar4 = *puVar9;
      uVar10 = puVar9[3];
      uVar14 = puVar9[1];
      uVar15 = puVar9[2];
      puVar7 = puVar9 + -4;
      puVar6 = puVar9;
      if ((uVar4 != 0) && ((puVar5 = puVar9, *puVar7 == 0 || (uVar4 != 0 && uVar4 < *puVar7)))) {
        do {
          puVar6 = puVar7;
          uVar11 = puVar6[1];
          uVar12 = puVar6[2];
          uVar13 = puVar6[3];
          puVar7 = puVar6 + -4;
          *puVar5 = *puVar6;
          puVar5[1] = uVar11;
          puVar5[2] = uVar12;
          puVar5[3] = uVar13;
          if (uVar4 == 0) break;
          puVar5 = puVar6;
        } while ((*puVar7 == 0) || (uVar4 != 0 && uVar4 < *puVar7));
      }
      *puVar6 = uVar4;
      puVar6[3] = uVar10;
      puVar6[1] = uVar14;
      puVar6[2] = uVar15;
    }
  }
  return uVar3;
}



int * fn_00241f00(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)0x0;
  iVar3 = *(int *)(param_1 + 4) + 0x648;
  iVar2 = 0;
  piVar1 = (int *)(*(int *)(param_1 + 4) + 0x644);
  do {
    piVar5 = (int *)(iVar3 + iVar2 * 0x10);
    if (*piVar5 == 0) {
      piVar5 = (int *)(iVar3 + iVar2 * 0x10);
LAB_00241f6c:
      if (piVar5 != (int *)0x0) {
        iVar2 = *piVar1 + 1;
        *piVar1 = iVar2;
        *piVar5 = iVar2;
        piVar4 = piVar5;
      }
      break;
    }
    if (piVar5[4] == 0) {
      piVar5 = (int *)(iVar3 + iVar2 * 0x10 + 0x10);
      goto LAB_00241f6c;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 100);
  *(short *)((int)piVar4 + 10) = (short)param_2;
  fn_0024f974(piVar4,0);
  fn_00289e9c(*(undefined4 *)(DAT_00897804 + 0x24),param_2);
  return piVar4;
}


