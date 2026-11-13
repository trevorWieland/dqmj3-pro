#include "0079bad8_0079bde8.h"



void fn_0079bde8(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if (param_3 != param_4) {
    puVar1 = (undefined1 *)param_1[1];
    uVar7 = (int)param_4 - (int)param_3;
    puVar8 = puVar1 + (uVar7 - *param_1);
    if ((undefined1 *)(param_1[2] - *param_1) < puVar8) {
      uVar5 = param_1[1] - *param_1;
      puVar3 = (undefined1 *)(uVar5 + (uVar5 >> 1) + (uVar5 >> 3));
      puVar1 = (undefined1 *)(uVar5 + 0x20);
      if ((undefined1 *)(uVar5 + 0x20) <= puVar3) {
        puVar1 = puVar3;
      }
      if (puVar8 < puVar1) {
        puVar8 = puVar1;
      }
      puVar2 = (undefined1 *)fn_0015ece0(puVar8);
      puVar3 = puVar2;
      for (puVar1 = (undefined1 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *puVar1;
        }
        puVar3 = puVar3 + 1;
      }
      puVar1 = puVar2 + ((int)param_2 - *param_1);
      for (; param_3 != param_4; param_3 = param_3 + 1) {
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = *param_3;
        }
        puVar1 = puVar1 + 1;
      }
      puVar3 = (undefined1 *)param_1[1];
      puVar1 = puVar2 + (int)(param_2 + (uVar7 - *param_1));
      for (; param_2 != puVar3; param_2 = param_2 + 1) {
        if (puVar1 != (undefined1 *)0x0) {
          *puVar1 = *param_2;
        }
        puVar1 = puVar1 + 1;
      }
      iVar6 = *param_1;
      iVar4 = param_1[1];
      fn_0014f1bc();
      *param_1 = (int)puVar2;
      param_1[1] = (int)(puVar2 + uVar7 + (iVar4 - iVar6));
      param_1[2] = (int)(puVar2 + (int)puVar8);
      return;
    }
    param_1[1] = (int)(puVar1 + uVar7);
    if (param_2 + uVar7 < puVar1) {
      puVar3 = puVar1;
      for (puVar8 = puVar1 + -uVar7; puVar8 != puVar1; puVar8 = puVar8 + 1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *puVar8;
        }
        puVar3 = puVar3 + 1;
      }
      puVar8 = puVar1 + -uVar7;
      uVar5 = (int)puVar8 - (int)param_2;
      if (0 < (int)uVar5) {
        if ((uVar5 & 1) != 0) {
          puVar8 = puVar8 + -1;
          puVar1 = puVar1 + -1;
          *puVar1 = *puVar8;
        }
        for (iVar6 = (int)uVar5 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar1[-1] = puVar8[-1];
          puVar8 = puVar8 + -2;
          puVar1 = puVar1 + -2;
          *puVar1 = *puVar8;
        }
      }
      if (0 < (int)uVar7) {
        puVar1 = param_3 + -1;
        puVar8 = param_2 + -1;
        if ((uVar7 & 1) != 0) {
          *param_2 = *param_3;
          puVar1 = param_3;
          puVar8 = param_2;
        }
        for (iVar6 = (int)uVar7 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
          puVar8[1] = puVar1[1];
          puVar1 = puVar1 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = *puVar1;
        }
      }
    }
    else {
      puVar3 = puVar1;
      for (puVar8 = param_3 + ((int)puVar1 - (int)param_2); puVar8 != param_4; puVar8 = puVar8 + 1)
      {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *puVar8;
        }
        puVar3 = puVar3 + 1;
      }
      puVar3 = param_2 + uVar7;
      for (puVar8 = param_2; puVar8 != puVar1; puVar8 = puVar8 + 1) {
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = *puVar8;
        }
        puVar3 = puVar3 + 1;
      }
      uVar7 = (int)(param_3 + ((int)puVar1 - (int)param_2)) - (int)param_3;
      if (0 < (int)uVar7) {
        puVar1 = param_3 + -1;
        puVar8 = param_2 + -1;
        if ((uVar7 & 1) != 0) {
          *param_2 = *param_3;
          puVar1 = param_3;
          puVar8 = param_2;
        }
        iVar6 = (int)uVar7 >> 1;
        if (iVar6 != 0) {
          do {
            iVar6 = iVar6 + -1;
            puVar8[1] = puVar1[1];
            puVar1 = puVar1 + 2;
            puVar8 = puVar8 + 2;
            *puVar8 = *puVar1;
          } while (iVar6 != 0);
          return;
        }
      }
    }
  }
  return;
}



void fn_0079bdb8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != param_1[1]) {
    param_1[1] = iVar1;
  }
  fn_0079bad8(param_1,iVar1,param_2,param_3);
  return;
}



void fn_0079bd60(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar3 < uVar4) {
      if (0 < (int)(uVar4 - uVar3)) {
        for (iVar2 = (int)(uVar4 - uVar3) >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
        }
      }
    }
    else {
      do {
        uVar1 = uVar1 + 1;
      } while (uVar1 != uVar4);
    }
    param_1[1] = uVar3;
  }
  return;
}



void fn_0079bad8(int *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;
  uint uVar9;
  
  if (param_3 == param_4) {
    return;
  }
  puVar2 = (undefined1 *)param_1[1];
  uVar9 = (int)param_4 - (int)param_3;
  puVar3 = puVar2 + (uVar9 - *param_1);
  if ((undefined1 *)(param_1[2] - *param_1) < puVar3) {
    uVar6 = param_1[1] - *param_1;
    puVar2 = (undefined1 *)(uVar6 + (uVar6 >> 1) + (uVar6 >> 3));
    if (puVar2 < (undefined1 *)(uVar6 + 0x20)) {
      puVar2 = (undefined1 *)(uVar6 + 0x20);
    }
    if (puVar2 <= puVar3) {
      puVar2 = puVar3;
    }
    puVar4 = (undefined1 *)fn_0015ece0(puVar2);
    puVar8 = puVar4;
    for (puVar3 = (undefined1 *)*param_1; puVar3 != param_2; puVar3 = puVar3 + 1) {
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = *puVar3;
      }
      puVar8 = puVar8 + 1;
    }
    puVar3 = puVar4 + ((int)param_2 - *param_1);
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *param_3;
      }
      puVar3 = puVar3 + 1;
    }
    puVar8 = (undefined1 *)param_1[1];
    puVar3 = puVar4 + (int)(param_2 + (uVar9 - *param_1));
    for (; param_2 != puVar8; param_2 = param_2 + 1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *param_2;
      }
      puVar3 = puVar3 + 1;
    }
    iVar7 = *param_1;
    iVar5 = param_1[1];
    fn_0014f1bc();
    *param_1 = (int)puVar4;
    param_1[1] = (int)(puVar4 + uVar9 + (iVar5 - iVar7));
    param_1[2] = (int)(puVar4 + (int)puVar2);
    return;
  }
  puVar3 = param_2 + uVar9;
  param_1[1] = (int)(puVar2 + uVar9);
  if (puVar3 < puVar2) {
    puVar4 = puVar2 + -uVar9;
    puVar8 = puVar2;
    for (puVar3 = puVar4; puVar3 != puVar2; puVar3 = puVar3 + 1) {
      if (puVar8 != (undefined1 *)0x0) {
        *puVar8 = *puVar3;
      }
      puVar8 = puVar8 + 1;
    }
    uVar6 = (int)puVar4 - (int)param_2;
    if (0 < (int)uVar6) {
      if ((uVar6 & 1) != 0) {
        puVar4 = puVar4 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *puVar4;
      }
      for (iVar7 = (int)uVar6 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar2[-1] = puVar4[-1];
        puVar4 = puVar4 + -2;
        puVar2 = puVar2 + -2;
        *puVar2 = *puVar4;
      }
    }
    if (0 < (int)uVar9) {
      puVar2 = param_3 + -1;
      puVar3 = param_2 + -1;
      if ((uVar9 & 1) != 0) {
        *param_2 = *param_3;
        puVar2 = param_3;
        puVar3 = param_2;
      }
      for (iVar7 = (int)uVar9 >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
        puVar3[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar3 = puVar3 + 2;
        *puVar3 = *puVar2;
      }
    }
  }
  else {
    puVar4 = puVar2;
    for (puVar8 = param_3 + ((int)puVar2 - (int)param_2); puVar1 = param_2, puVar8 != param_4;
        puVar8 = puVar8 + 1) {
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = *puVar8;
      }
      puVar4 = puVar4 + 1;
    }
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      if (puVar3 != (undefined1 *)0x0) {
        *puVar3 = *puVar1;
      }
      puVar3 = puVar3 + 1;
    }
    uVar9 = (int)(param_3 + ((int)puVar2 - (int)param_2)) - (int)param_3;
    if (0 < (int)uVar9) {
      puVar2 = param_3 + -1;
      puVar3 = param_2 + -1;
      if ((uVar9 & 1) != 0) {
        *param_2 = *param_3;
        puVar2 = param_3;
        puVar3 = param_2;
      }
      iVar7 = (int)uVar9 >> 1;
      if (iVar7 != 0) {
        do {
          iVar7 = iVar7 + -1;
          puVar3[1] = puVar2[1];
          puVar2 = puVar2 + 2;
          puVar3 = puVar3 + 2;
          *puVar3 = *puVar2;
        } while (iVar7 != 0);
        return;
      }
    }
  }
  return;
}


