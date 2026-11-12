#include "0036f768_0036f768.h"



void fn_0036f768(uint param_1,int param_2,int param_3)

{
  int iVar1;
  int **ppiVar2;
  int **ppiVar3;
  uint uVar4;
  int **ppiVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int *piStack_30;
  uint auStack_2c [2];
  
  piVar6 = (int *)(param_1 + 0x14);
  ppiVar3 = &piStack_30;
  ppiVar5 = &piStack_30;
  ppiVar2 = (int **)param_1;
  if (piVar6[param_2] != 0) {
    fn_0020bbc4(&piStack_30);
    fn_006bfe90(auStack_2c);
    iVar1 = fn_001cab7c();
    if (4 < param_3 + iVar1) {
      param_3 = 4 - iVar1;
    }
    ppiVar2 = &piStack_30;
  }
  iVar1 = piVar6[param_2];
  iVar13 = piVar6[param_3];
  if (iVar1 == 0) {
    uVar12 = 1;
    ppiVar3 = ppiVar2;
  }
  else {
    fn_0020bbc4(&piStack_30,iVar1);
    fn_006bfe90(auStack_2c);
    uVar12 = fn_001cab7c();
  }
  if (iVar13 == 0) {
    iVar13 = 1;
    ppiVar5 = ppiVar3;
  }
  else {
    fn_0020bbc4(&piStack_30,iVar13);
    fn_006bfe90(auStack_2c);
    iVar13 = fn_001cab7c();
  }
  iVar14 = param_3;
  if (piVar6 != (int *)0x0) {
    iVar10 = piVar6[param_3];
    uVar4 = 0;
    if (iVar10 != 0) {
      uVar4 = param_3 + 1;
      ppiVar5 = (int **)uVar4;
    }
    if ((iVar10 != 0 && ppiVar5 != (int **)0x0) && -1 < (int)uVar4) {
      iVar7 = 0;
      iVar9 = param_3 + 1;
      ppiVar5 = (int **)0x0;
      do {
        iVar15 = param_3 + (int)ppiVar5;
        ppiVar5 = (int **)((int)ppiVar5 - 1);
        if (iVar10 == piVar6[iVar15]) {
          iVar14 = param_3 - iVar7;
        }
        iVar9 = iVar9 + -1;
        iVar7 = iVar7 + 1;
      } while (iVar9 != 0);
    }
  }
  if (uVar12 == 1 && iVar13 == 1) {
    iVar1 = piVar6[param_2];
    piVar6[param_2] = piVar6[param_3];
    piVar6[param_3] = iVar1;
  }
  else if (param_3 < param_2) {
    iVar13 = param_2 + uVar12 + -1;
    iVar10 = 0;
    if (0 < (int)uVar12) {
      iVar7 = iVar13 - iVar14;
      do {
        if (0 < iVar7) {
          iVar15 = 0;
          iVar9 = iVar7;
          do {
            iVar11 = iVar13 + iVar15;
            iVar9 = iVar9 + -1;
            iVar15 = iVar15 + -1;
            piVar6[iVar11] = piVar6[iVar11 + -1];
          } while (iVar9 != 0);
        }
        iVar10 = iVar10 + 1;
        piVar6[iVar14] = 0;
      } while (iVar10 < (int)uVar12);
    }
    if (0 < (int)uVar12) {
      uVar4 = uVar12 & 1;
      uVar8 = (uint)(uVar4 != 0);
      if (uVar4 != 0) {
        piVar6[iVar14] = iVar1;
      }
      for (; (int)uVar4 < (int)uVar12; uVar4 = uVar4 + 2) {
        iVar13 = uVar8 + 1;
        piVar6[iVar14 + uVar8] = iVar1;
        uVar8 = uVar8 + 2;
        piVar6[iVar14 + iVar13] = iVar1;
      }
    }
  }
  else {
    iVar13 = 0;
    if (0 < (int)uVar12) {
      piStack_30 = piVar6 + param_2;
      uVar4 = 3 - param_2;
      auStack_2c[0] = uVar4 & 1;
      ppiVar5 = (int **)auStack_2c[0];
      do {
        if (0 < (int)uVar4) {
          iVar14 = 0;
          if (param_2 < 3) {
            ppiVar5 = (int **)auStack_2c[0];
            if (auStack_2c[0] != 0) {
              iVar14 = 1;
              piVar6[param_2] = piStack_30[1];
            }
          }
          else {
            ppiVar5 = (int **)0;
          }
          for (; (int)ppiVar5 < (int)uVar4; ppiVar5 = (int **)((int)ppiVar5 + 2)) {
            iVar10 = param_2 + iVar14 + 1;
            piVar6[param_2 + iVar14] = piVar6[param_2 + iVar14 + 1];
            iVar14 = iVar14 + 2;
            piVar6[iVar10] = piVar6[iVar10 + 1];
          }
        }
        iVar13 = iVar13 + 1;
        *(undefined4 *)(param_1 + 0x20) = 0;
      } while (iVar13 < (int)uVar12);
    }
    iVar13 = param_3;
    if (piVar6 != (int *)0x0) {
      iVar14 = piVar6[param_3];
      uVar4 = 0;
      if (iVar14 != 0) {
        uVar4 = param_3 + 1;
        ppiVar5 = (int **)uVar4;
      }
      if ((iVar14 != 0 && ppiVar5 != (int **)0x0) && -1 < (int)uVar4) {
        iVar7 = 0;
        iVar9 = param_3 + 1;
        iVar10 = 0;
        do {
          iVar15 = param_3 + iVar10;
          iVar10 = iVar10 + -1;
          if (iVar14 == piVar6[iVar15]) {
            iVar13 = param_3 - iVar7;
          }
          iVar9 = iVar9 + -1;
          iVar7 = iVar7 + 1;
        } while (iVar9 != 0);
      }
    }
    if (param_3 != iVar13) {
      if (piVar6[iVar13] == 0) {
        iVar14 = 1;
      }
      else {
        fn_0020bbc4(&piStack_30);
        fn_006bfe90(auStack_2c);
        iVar14 = fn_001cab7c();
      }
      iVar13 = iVar13 + iVar14;
    }
    iVar14 = 0;
    if (0 < (int)uVar12) {
      do {
        if (0 < 3 - iVar13) {
          iVar7 = 3 - iVar13;
          iVar10 = 0;
          do {
            iVar7 = iVar7 + -1;
            piVar6[iVar10 + 3] = piVar6[iVar10 + 2];
            iVar10 = iVar10 + -1;
          } while (iVar7 != 0);
        }
        iVar14 = iVar14 + 1;
        piVar6[iVar13] = 0;
      } while (iVar14 < (int)uVar12);
    }
    if (0 < (int)uVar12) {
      uVar4 = uVar12 & 1;
      uVar8 = (uint)(uVar4 != 0);
      if (uVar4 != 0) {
        piVar6[iVar13] = iVar1;
      }
      for (; (int)uVar4 < (int)uVar12; uVar4 = uVar4 + 2) {
        iVar14 = uVar8 + 1;
        piVar6[iVar13 + uVar8] = iVar1;
        uVar8 = uVar8 + 2;
        piVar6[iVar13 + iVar14] = iVar1;
      }
    }
  }
  iVar1 = 0;
  if (*piVar6 != 0) {
    iVar1 = *piVar6;
  }
  iVar13 = *(int *)(param_1 + 0x18);
  if (iVar13 == iVar1) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    iVar13 = iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 == iVar13) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
    iVar1 = iVar13;
  }
  if (*(int *)(param_1 + 0x20) == iVar1) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


