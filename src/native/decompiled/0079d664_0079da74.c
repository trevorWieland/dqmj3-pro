#include "0079d664_0079da74.h"



void fn_0079da74(uint *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  
  if (param_3 == param_4) {
    return;
  }
  iVar12 = (int)param_4 - (int)param_3;
  puVar2 = (undefined4 *)param_1[1];
  iVar10 = iVar12 >> 2;
  uVar4 = (int)((int)puVar2 - *param_1) >> 2;
  uVar11 = iVar10 + uVar4;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) < uVar11) {
    uVar6 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    uVar8 = uVar4 + 0x20;
    if (uVar4 + 0x20 <= uVar6) {
      uVar8 = uVar6;
    }
    if ((uVar11 <= uVar8) && (uVar11 = uVar6, uVar6 < uVar4 + 0x20)) {
      uVar11 = uVar4 + 0x20;
    }
    puVar3 = (undefined4 *)fn_0015ece0(uVar11 << 2);
    puVar7 = puVar3;
    for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar2;
      }
      puVar7 = puVar7 + 1;
    }
    puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar3);
    for (; param_3 != param_4; param_3 = param_3 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_3;
      }
      puVar2 = puVar2 + 1;
    }
    puVar7 = (undefined4 *)param_1[1];
    puVar2 = puVar3 + iVar10 + ((int)((int)param_2 - *param_1) >> 2);
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = *param_2;
      }
      puVar2 = puVar2 + 1;
    }
    uVar4 = *param_1;
    uVar8 = param_1[1];
    if (uVar4 != 0) {
      if (*(code **)(uVar4 - 8) == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (**(code **)(uVar4 - 8))();
      }
    }
    param_1[2] = (uint)(puVar3 + uVar11);
    param_1[1] = (uint)(puVar3 + ((int)(uVar8 - uVar4) >> 2) + iVar10);
    *param_1 = (uint)puVar3;
    return;
  }
  puVar7 = param_2 + iVar10;
  param_1[1] = (uint)(puVar2 + iVar10);
  if (puVar7 < puVar2) {
    puVar5 = puVar2 + -iVar10;
    puVar3 = puVar2;
    for (puVar7 = puVar5; puVar7 != puVar2; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    iVar9 = (int)puVar5 - (int)param_2;
    if (0 < iVar9 >> 2) {
      if (iVar9 * 0x20000000 < 0) {
        puVar5 = puVar5 + -1;
        puVar2 = puVar2 + -1;
        *puVar2 = *puVar5;
      }
      for (iVar9 = iVar9 >> 3; iVar9 != 0; iVar9 = iVar9 + -1) {
        puVar2[-1] = puVar5[-1];
        puVar5 = puVar5 + -2;
        puVar2 = puVar2 + -2;
        *puVar2 = *puVar5;
      }
    }
    if (0 < iVar10) {
      puVar2 = param_3 + -1;
      puVar7 = param_2 + -1;
      if (iVar12 * 0x20000000 < 0) {
        *param_2 = *param_3;
        puVar2 = param_3;
        puVar7 = param_2;
      }
      for (iVar12 = iVar12 >> 3; iVar12 != 0; iVar12 = iVar12 + -1) {
        puVar7[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar7 = puVar7 + 2;
        *puVar7 = *puVar2;
      }
    }
  }
  else {
    puVar5 = puVar2;
    for (puVar3 = param_3 + ((int)puVar2 - (int)param_2 >> 2); puVar1 = param_2, puVar3 != param_4;
        puVar3 = puVar3 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar3;
      }
      puVar5 = puVar5 + 1;
    }
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar1;
      }
      puVar7 = puVar7 + 1;
    }
    iVar10 = (int)(param_3 + ((int)puVar2 - (int)param_2 >> 2)) - (int)param_3;
    if (0 < iVar10 >> 2) {
      puVar2 = param_3 + -1;
      puVar7 = param_2 + -1;
      if (iVar10 * 0x20000000 < 0) {
        *param_2 = *param_3;
        puVar2 = param_3;
        puVar7 = param_2;
      }
      iVar10 = iVar10 >> 3;
      if (iVar10 != 0) {
        do {
          iVar10 = iVar10 + -1;
          puVar7[1] = puVar2[1];
          puVar2 = puVar2 + 2;
          puVar7 = puVar7 + 2;
          *puVar7 = *puVar2;
        } while (iVar10 != 0);
        return;
      }
    }
  }
  return;
}



void fn_0079d8f8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar2 - *param_1 >> 2;
  if (uVar1 < (uint)(param_1[2] - *param_1 >> 2)) {
    param_1[1] = (int)(puVar2 + 1);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-1];
    }
    puVar4 = puVar2 + -1;
    iVar6 = (int)puVar4 - (int)param_2;
    if (0 < iVar6 >> 2) {
      if (iVar6 * 0x20000000 < 0) {
        puVar4 = puVar2 + -2;
        puVar2 = puVar2 + -1;
        *puVar2 = *puVar4;
      }
      for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
        puVar2[-1] = puVar4[-1];
        puVar4 = puVar4 + -2;
        puVar2 = puVar2 + -2;
        *puVar2 = *puVar4;
      }
    }
    *param_2 = *param_3;
    return;
  }
  uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar7 < uVar1 + 0x20) {
    uVar7 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar7 << 2);
  puVar4 = puVar3;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 1) {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = *puVar2;
    }
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar3);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = *param_3;
  }
  puVar4 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffcU) + (int)puVar3);
  for (; param_2 != puVar4; param_2 = param_2 + 1) {
    puVar2 = puVar2 + 1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *param_2;
    }
  }
  iVar6 = *param_1;
  iVar5 = param_1[1];
  if (iVar6 != 0) {
    if (*(code **)(iVar6 + -8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(iVar6 + -8))();
    }
  }
  param_1[2] = (int)(puVar3 + uVar7);
  param_1[1] = (int)(puVar3 + (iVar5 - iVar6 >> 2) + 1);
  *param_1 = (int)puVar3;
  return;
}



uint * fn_0079d664(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined4 *)param_2[1];
  puVar7 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)*param_1;
  uVar9 = (int)puVar1 - (int)puVar7;
  local_20 = (int)uVar9 >> 2;
  if ((uint)((int)(param_1[2] - (int)puVar5) >> 2) < local_20) {
    uVar9 = (int)(param_1[1] - (int)puVar5) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar2 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar2 = &local_20;
    }
    uVar9 = *puVar2;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = (undefined4 *)param_2[1];
    puVar5 = puVar1;
    for (puVar7 = (undefined4 *)*param_2; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar9);
  }
  else {
    uVar4 = (int)(param_1[1] - (int)puVar5) >> 2;
    if (uVar4 < local_20) {
      puVar1 = puVar7 + uVar4;
      if (puVar7 < puVar1) {
        iVar8 = (int)puVar1 - (int)puVar7;
        if (0 < iVar8) {
          puVar1 = puVar7 + -1;
          puVar6 = puVar5 + -1;
          if (iVar8 * 0x20000000 < 0) {
            *puVar5 = *puVar7;
            puVar1 = puVar7;
            puVar6 = puVar5;
          }
          for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar6[1] = puVar1[1];
            puVar1 = puVar1 + 2;
            puVar6 = puVar6 + 2;
            *puVar6 = *puVar1;
          }
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
      puVar1 = (undefined4 *)param_2[1];
      puVar5 = (undefined4 *)(*param_1 + uVar4 * 4);
      for (puVar7 = (undefined4 *)(*param_2 + uVar4 * 4); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar7;
        }
        puVar5 = puVar5 + 1;
      }
    }
    else {
      if (puVar7 < puVar1) {
        if (0 < (int)uVar9) {
          puVar1 = puVar5 + -1;
          puVar6 = puVar7 + -1;
          if ((int)(uVar9 * 0x20000000) < 0) {
            *puVar5 = *puVar7;
            puVar1 = puVar5;
            puVar6 = puVar7;
          }
          for (iVar8 = (int)uVar9 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar1[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar1 = puVar1 + 2;
            *puVar1 = *puVar6;
          }
          puVar5 = (undefined4 *)((int)puVar5 + (uVar9 & 0xfffffffc));
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
      }
      if ((undefined4 *)param_1[1] < puVar5) {
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 != (undefined4 *)param_1[1]);
      }
      uVar9 = (param_2[1] - *param_2 & 0xfffffffc) + *param_1;
      param_1[1] = uVar9;
      param_1[2] = uVar9;
    }
  }
  return param_1;
}


