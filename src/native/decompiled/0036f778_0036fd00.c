#include "0036f778_0036fd00.h"



void fn_0036fd00(void)

{
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_0036fccc(int param_1)

{
  if (*(int **)(param_1 + 0x950) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x950) + 4))();
    *(undefined4 *)(param_1 + 0x950) = 0;
  }
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



bool fn_0036fcb8(void)

{
  int iVar1;
  
  iVar1 = fn_0068fae0();
  return iVar1 != 0;
}



undefined4 fn_0036fc5c(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  iVar1 = fn_00182944();
  if (((iVar1 == 0) && (iVar1 = fn_00182924(param_1), iVar1 == 1)) ||
     ((iVar1 = fn_00182944(param_1), iVar1 == -1 && (iVar1 = fn_00182924(param_1), iVar1 == 0))))
  {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 fn_0036fc38(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 == 0x1a || param_1 == 0x1c) || (param_1 == 0x2c || param_1 == 0x2e)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_0036fbf0(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0036f778(param_1,param_1 + 4,param_2,param_3);
  return;
}



void fn_0036fb74(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar3 = 0;
  iVar2 = 0;
  if (param_2 != 0) {
    fn_0020bbc4(auStack_20);
    fn_006bfe90(auStack_1c);
    uVar4 = fn_001cab7c();
    iVar2 = (int)((ulonglong)uVar4 >> 0x20);
    iVar3 = (int)uVar4 + -1;
  }
  if ((uint)(param_3 + iVar3) < 4) {
    if (0 < iVar3) {
      iVar2 = 0;
    }
    *(int *)(param_1 + param_3 * 4 + 4) = param_2;
    if (0 < iVar3) {
      do {
        iVar1 = param_3 + iVar2;
        iVar3 = iVar3 + -1;
        iVar2 = iVar2 + 1;
        *(int *)(param_1 + iVar1 * 4 + 8) = param_2;
      } while (iVar3 != 0);
    }
  }
  return;
}



void fn_0036f778(int **param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int **ppiVar2;
  uint uVar3;
  int **ppiVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *local_30;
  uint local_2c [2];
  
  ppiVar2 = &local_30;
  ppiVar4 = &local_30;
  if (param_2[param_3] != 0) {
    fn_0020bbc4(&local_30);
    fn_006bfe90(local_2c);
    iVar1 = fn_001cab7c();
    if (4 < param_4 + iVar1) {
      param_4 = 4 - iVar1;
    }
    param_1 = &local_30;
  }
  iVar1 = param_2[param_3];
  iVar11 = param_2[param_4];
  if (iVar1 == 0) {
    uVar10 = 1;
    ppiVar2 = param_1;
  }
  else {
    fn_0020bbc4(&local_30,iVar1);
    fn_006bfe90(local_2c);
    uVar10 = fn_001cab7c();
  }
  if (iVar11 == 0) {
    iVar11 = 1;
    ppiVar4 = ppiVar2;
  }
  else {
    fn_0020bbc4(&local_30,iVar11);
    fn_006bfe90(local_2c);
    iVar11 = fn_001cab7c();
  }
  iVar12 = param_4;
  if (param_2 != (int *)0x0) {
    iVar8 = param_2[param_4];
    uVar3 = 0;
    if (iVar8 != 0) {
      uVar3 = param_4 + 1;
      ppiVar4 = (int **)uVar3;
    }
    if ((iVar8 != 0 && ppiVar4 != (int **)0x0) && -1 < (int)uVar3) {
      iVar5 = 0;
      iVar7 = param_4 + 1;
      ppiVar4 = (int **)0x0;
      do {
        iVar13 = param_4 + (int)ppiVar4;
        ppiVar4 = (int **)((int)ppiVar4 - 1);
        if (iVar8 == param_2[iVar13]) {
          iVar12 = param_4 - iVar5;
        }
        iVar7 = iVar7 + -1;
        iVar5 = iVar5 + 1;
      } while (iVar7 != 0);
    }
  }
  if (uVar10 == 1 && iVar11 == 1) {
    iVar1 = param_2[param_3];
    param_2[param_3] = param_2[param_4];
    param_2[param_4] = iVar1;
  }
  else if (param_4 < param_3) {
    iVar11 = param_3 + uVar10 + -1;
    iVar8 = 0;
    if (0 < (int)uVar10) {
      iVar5 = iVar11 - iVar12;
      do {
        if (0 < iVar5) {
          iVar13 = 0;
          iVar7 = iVar5;
          do {
            iVar9 = iVar11 + iVar13;
            iVar7 = iVar7 + -1;
            iVar13 = iVar13 + -1;
            param_2[iVar9] = param_2[iVar9 + -1];
          } while (iVar7 != 0);
        }
        iVar8 = iVar8 + 1;
        param_2[iVar12] = 0;
      } while (iVar8 < (int)uVar10);
    }
    if (0 < (int)uVar10) {
      uVar3 = uVar10 & 1;
      uVar6 = (uint)(uVar3 != 0);
      if (uVar3 != 0) {
        param_2[iVar12] = iVar1;
      }
      for (; (int)uVar3 < (int)uVar10; uVar3 = uVar3 + 2) {
        iVar11 = uVar6 + 1;
        param_2[iVar12 + uVar6] = iVar1;
        uVar6 = uVar6 + 2;
        param_2[iVar12 + iVar11] = iVar1;
      }
    }
  }
  else {
    iVar11 = 0;
    if (0 < (int)uVar10) {
      local_30 = param_2 + param_3;
      uVar3 = 3 - param_3;
      local_2c[0] = uVar3 & 1;
      ppiVar4 = (int **)local_2c[0];
      do {
        if (0 < (int)uVar3) {
          iVar12 = 0;
          if (param_3 < 3) {
            ppiVar4 = (int **)local_2c[0];
            if (local_2c[0] != 0) {
              iVar12 = 1;
              param_2[param_3] = local_30[1];
            }
          }
          else {
            ppiVar4 = (int **)0;
          }
          for (; (int)ppiVar4 < (int)uVar3; ppiVar4 = (int **)((int)ppiVar4 + 2)) {
            iVar8 = param_3 + iVar12 + 1;
            param_2[param_3 + iVar12] = param_2[param_3 + iVar12 + 1];
            iVar12 = iVar12 + 2;
            param_2[iVar8] = param_2[iVar8 + 1];
          }
        }
        iVar11 = iVar11 + 1;
        param_2[3] = 0;
      } while (iVar11 < (int)uVar10);
    }
    iVar11 = param_4;
    if (param_2 != (int *)0x0) {
      iVar12 = param_2[param_4];
      uVar3 = 0;
      if (iVar12 != 0) {
        uVar3 = param_4 + 1;
        ppiVar4 = (int **)uVar3;
      }
      if ((iVar12 != 0 && ppiVar4 != (int **)0x0) && -1 < (int)uVar3) {
        iVar5 = 0;
        iVar7 = param_4 + 1;
        iVar8 = 0;
        do {
          iVar13 = param_4 + iVar8;
          iVar8 = iVar8 + -1;
          if (iVar12 == param_2[iVar13]) {
            iVar11 = param_4 - iVar5;
          }
          iVar7 = iVar7 + -1;
          iVar5 = iVar5 + 1;
        } while (iVar7 != 0);
      }
    }
    if (param_4 != iVar11) {
      if (param_2[iVar11] == 0) {
        iVar12 = 1;
      }
      else {
        fn_0020bbc4(&local_30);
        fn_006bfe90(local_2c);
        iVar12 = fn_001cab7c();
      }
      iVar11 = iVar11 + iVar12;
    }
    iVar12 = 0;
    if (0 < (int)uVar10) {
      do {
        if (0 < 3 - iVar11) {
          iVar5 = 3 - iVar11;
          iVar8 = 0;
          do {
            iVar5 = iVar5 + -1;
            param_2[iVar8 + 3] = param_2[iVar8 + 2];
            iVar8 = iVar8 + -1;
          } while (iVar5 != 0);
        }
        iVar12 = iVar12 + 1;
        param_2[iVar11] = 0;
      } while (iVar12 < (int)uVar10);
    }
    if (0 < (int)uVar10) {
      uVar3 = uVar10 & 1;
      uVar6 = (uint)(uVar3 != 0);
      if (uVar3 != 0) {
        param_2[iVar11] = iVar1;
      }
      for (; (int)uVar3 < (int)uVar10; uVar3 = uVar3 + 2) {
        iVar12 = uVar6 + 1;
        param_2[iVar11 + uVar6] = iVar1;
        uVar6 = uVar6 + 2;
        param_2[iVar11 + iVar12] = iVar1;
      }
    }
  }
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = *param_2;
  }
  iVar11 = param_2[1];
  if (iVar11 == iVar1) {
    param_2[1] = 0;
    iVar11 = iVar1;
  }
  iVar1 = param_2[2];
  if (iVar1 == iVar11) {
    param_2[2] = 0;
    iVar1 = iVar11;
  }
  if (param_2[3] == iVar1) {
    param_2[3] = 0;
  }
  return;
}


