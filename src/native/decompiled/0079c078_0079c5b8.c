#include "0079c078_0079c5b8.h"



int * fn_0079c5b8(int *param_1,int *param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined1 *)*param_2;
  puVar4 = (undefined1 *)*param_1;
  uVar8 = param_2[1] - (int)puVar1;
  if ((uint)(param_1[2] - (int)puVar4) < uVar8) {
    uVar2 = param_1[1] - (int)puVar4;
    uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
    if (uVar5 < uVar2 + 0x20) {
      uVar5 = uVar2 + 0x20;
    }
    if (uVar8 < uVar5) {
      uVar8 = uVar5;
    }
    puVar3 = (undefined1 *)fn_0015ece0(uVar8);
    puVar6 = (undefined1 *)param_2[1];
    puVar4 = puVar3;
    for (puVar1 = (undefined1 *)*param_2; puVar1 != puVar6; puVar1 = puVar1 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar1;
      }
      puVar4 = puVar4 + 1;
    }
    fn_0014f1bc(*param_1);
    *param_1 = (int)puVar3;
    param_1[1] = (int)(puVar3 + (param_2[1] - *param_2));
    param_1[2] = (int)(puVar3 + uVar8);
  }
  else {
    uVar5 = param_1[1] - (int)puVar4;
    if (uVar5 < uVar8) {
      if (0 < (int)uVar5) {
        puVar3 = puVar1 + -1;
        puVar6 = puVar4 + -1;
        if ((uVar5 & 1) != 0) {
          *puVar4 = *puVar1;
          puVar3 = puVar1;
          puVar6 = puVar4;
        }
        for (iVar7 = (int)uVar5 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar6[1] = puVar3[1];
          puVar3 = puVar3 + 2;
          puVar6 = puVar6 + 2;
          *puVar6 = *puVar3;
        }
      }
      param_1[1] = (param_2[1] - *param_2) + *param_1;
      puVar3 = (undefined1 *)param_2[1];
      puVar4 = (undefined1 *)(*param_1 + uVar5);
      for (puVar1 = (undefined1 *)(*param_2 + uVar5); puVar1 != puVar3; puVar1 = puVar1 + 1) {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = *puVar1;
        }
        puVar4 = puVar4 + 1;
      }
    }
    else {
      if (0 < (int)uVar8) {
        puVar3 = puVar1 + -1;
        puVar6 = puVar4 + -1;
        if ((uVar8 & 1) != 0) {
          *puVar4 = *puVar1;
          puVar3 = puVar1;
          puVar6 = puVar4;
        }
        for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar6[1] = puVar3[1];
          puVar3 = puVar3 + 2;
          puVar6 = puVar6 + 2;
          *puVar6 = *puVar3;
        }
      }
      iVar7 = (param_2[1] - *param_2) + *param_1;
      param_1[1] = iVar7;
      param_1[2] = iVar7;
    }
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x0079c430) */
/* WARNING: Removing unreachable block (ram,0x0079c434) */
/* WARNING: Removing unreachable block (ram,0x0079c438) */
/* WARNING: Removing unreachable block (ram,0x0079c43c) */
/* WARNING: Removing unreachable block (ram,0x0079c440) */
/* WARNING: Removing unreachable block (ram,0x0079c468) */
/* WARNING: Removing unreachable block (ram,0x0079c478) */
/* WARNING: Removing unreachable block (ram,0x0079c454) */
/* WARNING: Removing unreachable block (ram,0x0079c45c) */
/* WARNING: Removing unreachable block (ram,0x0079c460) */

void fn_0079c308(int *param_1,uint param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined1 *puVar11;
  
  puVar1 = (undefined1 *)param_1[1];
  puVar6 = (undefined1 *)*param_1;
  uVar8 = (int)puVar1 - (int)puVar6;
  if (uVar8 < param_2) {
    iVar9 = param_2 - uVar8;
    if (iVar9 != 0) {
      uVar3 = uVar8 + iVar9;
      if ((uint)(param_1[2] - (int)puVar6) < uVar3) {
        uVar2 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        uVar10 = uVar8 + 0x20;
        if (uVar8 + 0x20 <= uVar2) {
          uVar10 = uVar2;
        }
        if ((uVar10 < uVar3) || (uVar3 = uVar8 + 0x20, uVar2 < uVar3)) {
          uVar2 = uVar3;
        }
        puVar4 = (undefined1 *)fn_0015ece0(uVar2);
        puVar11 = puVar4;
        for (puVar6 = (undefined1 *)*param_1; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          if (puVar11 != (undefined1 *)0x0) {
            *puVar11 = *puVar6;
          }
          puVar11 = puVar11 + 1;
        }
        puVar6 = puVar4 + ((int)puVar1 - *param_1);
        for (iVar7 = iVar9; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = param_3;
          }
          puVar6 = puVar6 + 1;
        }
        puVar11 = (undefined1 *)param_1[1];
        puVar6 = puVar4 + (int)(puVar1 + (iVar9 - *param_1));
        for (; puVar1 != puVar11; puVar1 = puVar1 + 1) {
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = *puVar1;
          }
          puVar6 = puVar6 + 1;
        }
        iVar7 = *param_1;
        iVar5 = param_1[1];
        if (iVar7 != 0) {
          if (*(code **)(iVar7 + -8) == (code *)0x0) {
            fn_0030233c();
          }
          else {
            (**(code **)(iVar7 + -8))();
          }
        }
        param_1[2] = (int)(puVar4 + uVar2);
        param_1[1] = (int)(puVar4 + iVar9 + (iVar5 - iVar7));
        *param_1 = (int)puVar4;
        return;
      }
      param_1[1] = (int)(puVar1 + iVar9);
      if (puVar1 + iVar9 < puVar1) {
        puVar4 = puVar1 + -iVar9;
        puVar11 = puVar1;
        for (puVar6 = puVar4; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          if (puVar11 != (undefined1 *)0x0) {
            *puVar11 = *puVar6;
          }
          puVar11 = puVar11 + 1;
        }
        uVar8 = (int)puVar4 - (int)puVar1;
        if (0 < (int)uVar8) {
          puVar6 = puVar1;
          if ((uVar8 & 1) != 0) {
            puVar4 = puVar4 + -1;
            puVar6 = puVar1 + -1;
            *puVar6 = *puVar4;
          }
          for (iVar7 = (int)uVar8 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
            puVar6[-1] = puVar4[-1];
            puVar4 = puVar4 + -2;
            puVar6 = puVar6 + -2;
            *puVar6 = *puVar4;
          }
        }
        uVar8 = (int)(puVar1 + iVar9) - (int)puVar1;
        if (0 < (int)uVar8) {
          puVar6 = puVar1 + -1;
          if ((uVar8 & 1) != 0) {
            *puVar1 = param_3;
            puVar6 = puVar1;
          }
          for (iVar9 = (int)uVar8 >> 1; iVar9 != 0; iVar9 = iVar9 + -1) {
            puVar6[1] = param_3;
            puVar6 = puVar6 + 2;
            *puVar6 = param_3;
          }
        }
      }
      else {
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar1 != (undefined1 *)0x0) {
            *puVar1 = param_3;
          }
          puVar1 = puVar1 + 1;
        }
      }
    }
  }
  else if ((uVar8 != param_2) && (puVar6 != puVar1)) {
    param_1[1] = (int)(puVar6 + param_2);
    return;
  }
  return;
}



void fn_0079c078(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if (param_3 != param_4) {
    puVar2 = (undefined1 *)param_1[1];
    uVar9 = (int)param_4 - (int)param_3;
    puVar4 = puVar2 + (uVar9 - *param_1);
    if ((undefined1 *)(param_1[2] - *param_1) < puVar4) {
      uVar7 = param_1[1] - *param_1;
      puVar2 = (undefined1 *)(uVar7 + (uVar7 >> 1) + (uVar7 >> 3));
      if (puVar2 < (undefined1 *)(uVar7 + 0x20)) {
        puVar2 = (undefined1 *)(uVar7 + 0x20);
      }
      if (puVar2 <= puVar4) {
        puVar2 = puVar4;
      }
      puVar3 = (undefined1 *)fn_0015ece0(puVar2);
      puVar5 = puVar3;
      for (puVar4 = (undefined1 *)*param_1; puVar4 != param_2; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar3 + ((int)param_2 - *param_1);
      while (param_3 != param_4) {
        uVar1 = *param_3;
        param_3 = param_3 + 1;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = uVar1;
        }
        puVar4 = puVar4 + 1;
      }
      puVar5 = (undefined1 *)param_1[1];
      puVar4 = puVar3 + (int)(param_2 + (uVar9 - *param_1));
      for (; param_2 != puVar5; param_2 = param_2 + 1) {
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = *param_2;
        }
        puVar4 = puVar4 + 1;
      }
      iVar8 = *param_1;
      iVar6 = param_1[1];
      fn_0014f1bc();
      *param_1 = (int)puVar3;
      param_1[1] = (int)(puVar3 + uVar9 + (iVar6 - iVar8));
      param_1[2] = (int)(puVar3 + (int)puVar2);
      return;
    }
    param_1[1] = (int)(puVar2 + uVar9);
    if (param_2 + uVar9 < puVar2) {
      puVar5 = puVar2;
      for (puVar4 = puVar2 + -uVar9; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      puVar4 = puVar2 + -uVar9;
      uVar7 = (int)puVar4 - (int)param_2;
      if (0 < (int)uVar7) {
        if ((uVar7 & 1) != 0) {
          puVar4 = puVar4 + -1;
          puVar2 = puVar2 + -1;
          *puVar2 = *puVar4;
        }
        for (iVar8 = (int)uVar7 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar2[-1] = puVar4[-1];
          puVar4 = puVar4 + -2;
          puVar2 = puVar2 + -2;
          *puVar2 = *puVar4;
        }
      }
      if (0 < (int)uVar9) {
        puVar2 = param_3 + -1;
        puVar4 = param_2 + -1;
        if ((uVar9 & 1) != 0) {
          *param_2 = *param_3;
          puVar2 = param_3;
          puVar4 = param_2;
        }
        for (iVar8 = (int)uVar9 >> 1; iVar8 != 0; iVar8 = iVar8 + -1) {
          puVar4[1] = puVar2[1];
          puVar2 = puVar2 + 2;
          puVar4 = puVar4 + 2;
          *puVar4 = *puVar2;
        }
      }
    }
    else {
      puVar4 = puVar2;
      puVar5 = param_3 + ((int)puVar2 - (int)param_2);
      while (puVar5 != param_4) {
        uVar1 = *puVar5;
        puVar5 = puVar5 + 1;
        if (puVar4 != (undefined1 *)0x0) {
          *puVar4 = uVar1;
        }
        puVar4 = puVar4 + 1;
      }
      puVar5 = param_2 + uVar9;
      for (puVar4 = param_2; puVar4 != puVar2; puVar4 = puVar4 + 1) {
        if (puVar5 != (undefined1 *)0x0) {
          *puVar5 = *puVar4;
        }
        puVar5 = puVar5 + 1;
      }
      uVar9 = (int)(param_3 + ((int)puVar2 - (int)param_2)) - (int)param_3;
      if (0 < (int)uVar9) {
        puVar2 = param_3 + -1;
        puVar4 = param_2 + -1;
        if ((uVar9 & 1) != 0) {
          *param_2 = *param_3;
          puVar2 = param_3;
          puVar4 = param_2;
        }
        iVar8 = (int)uVar9 >> 1;
        if (iVar8 != 0) {
          do {
            iVar8 = iVar8 + -1;
            puVar4[1] = puVar2[1];
            puVar2 = puVar2 + 2;
            puVar4 = puVar4 + 2;
            *puVar4 = *puVar2;
          } while (iVar8 != 0);
          return;
        }
      }
    }
  }
  return;
}


