#include "0079dd48_0079e608.h"



void fn_0079e608(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 - (uVar3 - uVar2 & 0xfffffffe);
  }
  return;
}



uint * fn_0079e1d4(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
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
  puVar6 = (undefined4 *)*param_2;
  puVar4 = (undefined4 *)*param_1;
  uVar9 = (int)puVar1 - (int)puVar6;
  local_20 = (int)uVar9 >> 2;
  if ((uint)((int)(param_1[2] - (int)puVar4) >> 2) < local_20) {
    uVar9 = (int)(param_1[1] - (int)puVar4) >> 2;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar7 = (undefined4 *)param_2[1];
    puVar4 = puVar1;
    for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar6;
      }
      puVar4 = puVar4 + 1;
    }
    uVar2 = *param_1;
    uVar3 = uVar2;
    if (param_1[1] < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != param_1[1]);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (uint)(puVar1 + ((int)(param_2[1] - *param_2) >> 2));
    param_1[2] = (uint)(puVar1 + uVar9);
  }
  else {
    uVar3 = (int)(param_1[1] - (int)puVar4) >> 2;
    if (uVar3 < local_20) {
      puVar1 = puVar6 + uVar3;
      if (puVar6 < puVar1) {
        iVar8 = (int)puVar1 - (int)puVar6;
        if (0 < iVar8) {
          puVar1 = puVar6 + -1;
          puVar7 = puVar4 + -1;
          if (iVar8 * 0x20000000 < 0) {
            *puVar4 = *puVar6;
            puVar1 = puVar6;
            puVar7 = puVar4;
          }
          for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar7[1] = puVar1[1];
            puVar1 = puVar1 + 2;
            puVar7 = puVar7 + 2;
            *puVar7 = *puVar1;
          }
        }
      }
      else {
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
        }
      }
      param_1[1] = *param_1 + ((int)(param_2[1] - *param_2) >> 2) * 4;
      puVar1 = (undefined4 *)param_2[1];
      puVar4 = (undefined4 *)(*param_1 + uVar3 * 4);
      for (puVar6 = (undefined4 *)(*param_2 + uVar3 * 4); puVar6 != puVar1; puVar6 = puVar6 + 1) {
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = *puVar6;
        }
        puVar4 = puVar4 + 1;
      }
    }
    else {
      if (puVar6 < puVar1) {
        if (0 < (int)uVar9) {
          puVar1 = puVar4 + -1;
          puVar7 = puVar6 + -1;
          if ((int)(uVar9 * 0x20000000) < 0) {
            *puVar4 = *puVar6;
            puVar1 = puVar4;
            puVar7 = puVar6;
          }
          for (iVar8 = (int)uVar9 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar1[1] = puVar7[1];
            puVar7 = puVar7 + 2;
            puVar1 = puVar1 + 2;
            *puVar1 = *puVar7;
          }
          puVar4 = (undefined4 *)((int)puVar4 + (uVar9 & 0xfffffffc));
        }
      }
      else {
        for (; puVar6 != puVar1; puVar6 = puVar6 + 1) {
          *puVar4 = *puVar6;
          puVar4 = puVar4 + 1;
        }
      }
      if ((undefined4 *)param_1[1] < puVar4) {
        do {
          puVar4 = puVar4 + 1;
        } while (puVar4 != (undefined4 *)param_1[1]);
      }
      uVar9 = *param_1 + ((int)(param_2[1] - *param_2) >> 2) * 4;
      param_1[1] = uVar9;
      param_1[2] = uVar9;
    }
  }
  return param_1;
}



uint * fn_0079e188(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
  return param_1;
}



int * fn_0079e0cc(int *param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_18[0] = param_2[1] - *param_2 >> 2;
  puVar3 = local_18;
  if (local_18[0] < 0x20) {
    puVar3 = local_18 + 1;
  }
  local_18[1] = 0x20;
  uVar7 = *puVar3;
  puVar1 = (undefined4 *)fn_00100fc6(uVar7 << 2,0);
  *param_1 = (int)puVar1;
  puVar4 = (undefined4 *)param_2[1];
  for (puVar6 = (undefined4 *)*param_2; puVar6 != puVar4; puVar6 = puVar6 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar6;
    }
    puVar1 = puVar1 + 1;
  }
  iVar2 = param_2[1];
  iVar5 = *param_2;
  param_1[2] = *param_1 + uVar7 * 4;
  param_1[1] = *param_1 + (iVar2 - iVar5 >> 2) * 4;
  return param_1;
}



void fn_0079df24(uint *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  
  puVar8 = param_1 + 1;
  puVar1 = (undefined4 *)*puVar8;
  uVar4 = (int)((int)puVar1 - *param_1) >> 2;
  if ((uint)((int)(param_1[2] - *param_1) >> 2) <= uVar4) {
    uVar9 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar9 < uVar4 + 0x20) {
      uVar9 = uVar4 + 0x20;
    }
    puVar2 = (undefined4 *)fn_00100fc6(uVar9 << 2,0);
    puVar6 = puVar2;
    for (puVar1 = (undefined4 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar1;
      }
      puVar6 = puVar6 + 1;
    }
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar6 = (undefined4 *)*puVar8;
    puVar1 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffffc) + (int)puVar2);
    for (; param_2 != puVar6; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar7 = *puVar8;
    uVar4 = uVar3;
    if (uVar7 < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != uVar7);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 2,0);
    param_1[2] = (uint)(puVar2 + uVar9);
    *puVar8 = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 2) + 1);
    *param_1 = (uint)puVar2;
    return;
  }
  *puVar8 = (uint)(puVar1 + 1);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar6 = puVar1 + -1;
  if (param_2 < puVar6) {
    iVar5 = (int)puVar6 - (int)param_2;
    if (0 < iVar5) {
      if (iVar5 * 0x20000000 < 0) {
        puVar6 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar6;
      }
      for (iVar5 = iVar5 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1[-1] = puVar6[-1];
        puVar6 = puVar6 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar6;
      }
    }
  }
  else {
    while (param_2 != puVar6) {
      puVar6 = puVar6 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar6;
    }
  }
  *param_2 = *param_3;
  return;
}



int * fn_0079dd48(int *param_1,int *param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar2 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)*param_1;
  iVar7 = param_2[1] - (int)puVar2;
  uVar9 = iVar7 >> 2;
  if ((uint)(param_1[2] - (int)puVar5 >> 2) < uVar9) {
    uVar1 = param_1[1] - (int)puVar5 >> 2;
    uVar6 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    uVar3 = uVar1 + 0x20;
    if (uVar1 + 0x20 <= uVar6) {
      uVar3 = uVar6;
    }
    if (uVar9 < uVar3) {
      uVar9 = uVar3;
    }
    puVar4 = (undefined4 *)fn_0015ece0(uVar9 << 2);
    puVar8 = (undefined4 *)param_2[1];
    puVar5 = puVar4;
    for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar8; puVar2 = puVar2 + 1) {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar2;
      }
      puVar5 = puVar5 + 1;
    }
    fn_0014f1bc(*param_1);
    *param_1 = (int)puVar4;
    param_1[1] = (int)(puVar4 + (param_2[1] - *param_2 >> 2));
    param_1[2] = (int)(puVar4 + uVar9);
  }
  else {
    uVar1 = param_1[1] - (int)puVar5 >> 2;
    if (uVar1 < uVar9) {
      if (0 < (int)(uVar1 * 4) >> 2) {
        puVar4 = puVar2 + -1;
        puVar8 = puVar5 + -1;
        if ((int)(uVar1 << 0x1f) < 0) {
          *puVar5 = *puVar2;
          puVar4 = puVar2;
          puVar8 = puVar5;
        }
        for (iVar7 = (int)(uVar1 * 4) >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar8[1] = puVar4[1];
          puVar4 = puVar4 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = *puVar4;
        }
      }
      param_1[1] = *param_1 + (param_2[1] - *param_2 >> 2) * 4;
      puVar4 = (undefined4 *)param_2[1];
      puVar5 = (undefined4 *)(*param_1 + uVar1 * 4);
      for (puVar2 = (undefined4 *)(*param_2 + uVar1 * 4); puVar2 != puVar4; puVar2 = puVar2 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar2;
        }
        puVar5 = puVar5 + 1;
      }
    }
    else {
      if (0 < (int)uVar9) {
        puVar4 = puVar2 + -1;
        puVar8 = puVar5 + -1;
        if (iVar7 * 0x20000000 < 0) {
          *puVar5 = *puVar2;
          puVar4 = puVar2;
          puVar8 = puVar5;
        }
        for (iVar7 = iVar7 >> 3; iVar7 != 0; iVar7 = iVar7 + -1) {
          puVar8[1] = puVar4[1];
          puVar4 = puVar4 + 2;
          puVar8 = puVar8 + 2;
          *puVar8 = *puVar4;
        }
      }
      iVar7 = *param_1 + (param_2[1] - *param_2 >> 2) * 4;
      param_1[1] = iVar7;
      param_1[2] = iVar7;
    }
  }
  return param_1;
}


