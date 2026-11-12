#include "0079e64c_0079edbc.h"



int * fn_0079edbc(int *param_1)

{
  if ((int *)*param_1 != (int *)0x0) {
    (**(code **)(*(int *)*param_1 + 8))();
  }
  return param_1;
}



int * fn_0079ecd4(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (*(int **)(iVar1 + 0x1c) != (int *)0x0) {
      (**(code **)(**(int **)(iVar1 + 0x1c) + 4))();
    }
    iVar1 = fn_0079ecd4(iVar1 + 0x18);
    fn_002feef8(iVar1 + -0x18);
  }
  return param_1;
}



int * fn_0079ec6c(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1] - *param_1;
  if (0 < iVar1 >> 3) {
    for (iVar1 = iVar1 >> 4; iVar1 != 0; iVar1 = iVar1 + -1) {
    }
  }
  fn_0014f1bc(*param_1);
  return param_1;
}



void fn_0079eac8(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  puVar2 = (undefined4 *)param_1[1];
  uVar1 = (int)puVar2 - *param_1 >> 3;
  if (uVar1 < (uint)(param_1[2] - *param_1 >> 3)) {
    param_1[1] = (int)(puVar2 + 2);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = puVar2[-2];
      puVar2[1] = puVar2[-1];
    }
    puVar6 = puVar2 + -2;
    iVar7 = (int)puVar6 - (int)param_2;
    if (0 < iVar7 >> 3) {
      puVar3 = puVar2;
      if (iVar7 * 0x10000000 < 0) {
        puVar6 = puVar2 + -4;
        puVar3 = puVar2 + -2;
        *puVar3 = *puVar6;
        puVar2[-1] = puVar2[-3];
      }
      for (iVar7 = iVar7 >> 4; iVar7 != 0; iVar7 = iVar7 + -1) {
        uVar9 = puVar6[-1];
        puVar3[-2] = puVar6[-2];
        puVar3[-1] = uVar9;
        uVar9 = puVar6[-3];
        puVar3[-4] = puVar6[-4];
        puVar3[-3] = uVar9;
        puVar3 = puVar3 + -4;
        puVar6 = puVar6 + -4;
      }
    }
    uVar9 = param_3[1];
    *param_2 = *param_3;
    param_2[1] = uVar9;
    return;
  }
  uVar8 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
  if (uVar8 < uVar1 + 0x20) {
    uVar8 = uVar1 + 0x20;
  }
  puVar3 = (undefined4 *)fn_0015ece0(uVar8 << 3);
  puVar6 = puVar3;
  for (puVar2 = (undefined4 *)*param_1; puVar2 != param_2; puVar2 = puVar2 + 2) {
    if (puVar6 != (undefined4 *)0x0) {
      uVar9 = puVar2[1];
      *puVar6 = *puVar2;
      puVar6[1] = uVar9;
    }
    puVar6 = puVar6 + 2;
  }
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8U) + (int)puVar3);
  if (puVar2 != (undefined4 *)0x0) {
    uVar9 = param_3[1];
    *puVar2 = *param_3;
    puVar2[1] = uVar9;
  }
  puVar6 = (undefined4 *)param_1[1];
  puVar2 = (undefined4 *)(((int)param_2 - *param_1 & 0xfffffff8U) + (int)puVar3);
  for (; param_2 != puVar6; param_2 = param_2 + 2) {
    puVar4 = puVar2 + 2;
    if (puVar4 != (undefined4 *)0x0) {
      uVar9 = param_2[1];
      *puVar4 = *param_2;
      puVar2[3] = uVar9;
    }
    puVar2 = puVar4;
  }
  iVar5 = param_1[1] - *param_1;
  iVar7 = iVar5 >> 3;
  if (0 < iVar7) {
    for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
    }
  }
  fn_0014f1bc(*param_1);
  param_1[2] = (int)(puVar3 + uVar8 * 2);
  param_1[1] = (int)(puVar3 + iVar7 * 2 + 2);
  *param_1 = (int)puVar3;
  return;
}



uint * fn_0079e834(uint *param_1,uint *param_2)

{
  undefined2 *puVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined2 *)param_2[1];
  puVar7 = (undefined2 *)*param_2;
  puVar5 = (undefined2 *)*param_1;
  uVar9 = (int)puVar1 - (int)puVar7;
  local_20 = (int)uVar9 >> 1;
  if ((uint)((int)(param_1[2] - (int)puVar5) >> 1) < local_20) {
    uVar9 = (int)(param_1[1] - (int)puVar5) >> 1;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar2 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar2 = &local_20;
    }
    uVar9 = *puVar2;
    puVar1 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
    puVar6 = (undefined2 *)param_2[1];
    puVar5 = puVar1;
    for (puVar7 = (undefined2 *)*param_2; puVar7 != puVar6; puVar7 = puVar7 + 1) {
      if (puVar5 != (undefined2 *)0x0) {
        *puVar5 = *puVar7;
      }
      puVar5 = puVar5 + 1;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 1,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffffe) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar9);
  }
  else {
    uVar4 = (int)(param_1[1] - (int)puVar5) >> 1;
    if (uVar4 < local_20) {
      puVar1 = puVar7 + uVar4;
      if (puVar7 < puVar1) {
        iVar8 = (int)puVar1 - (int)puVar7;
        if (0 < iVar8) {
          puVar1 = puVar7 + -1;
          puVar6 = puVar5 + -1;
          if (iVar8 * 0x40000000 < 0) {
            *puVar5 = *puVar7;
            puVar1 = puVar7;
            puVar6 = puVar5;
          }
          for (iVar8 = iVar8 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
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
      param_1[1] = (param_2[1] - *param_2 & 0xfffffffe) + *param_1;
      puVar1 = (undefined2 *)param_2[1];
      puVar5 = (undefined2 *)(*param_1 + uVar4 * 2);
      for (puVar7 = (undefined2 *)(*param_2 + uVar4 * 2); puVar7 != puVar1; puVar7 = puVar7 + 1) {
        if (puVar5 != (undefined2 *)0x0) {
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
          if ((int)(uVar9 * 0x40000000) < 0) {
            *puVar5 = *puVar7;
            puVar1 = puVar5;
            puVar6 = puVar7;
          }
          for (iVar8 = (int)uVar9 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar1[1] = puVar6[1];
            puVar6 = puVar6 + 2;
            puVar1 = puVar1 + 2;
            *puVar1 = *puVar6;
          }
          puVar5 = (undefined2 *)((int)puVar5 + (uVar9 & 0xfffffffe));
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
          *puVar5 = *puVar7;
          puVar5 = puVar5 + 1;
        }
      }
      if ((undefined2 *)param_1[1] < puVar5) {
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 != (undefined2 *)param_1[1]);
      }
      uVar9 = (param_2[1] - *param_2 & 0xfffffffe) + *param_1;
      param_1[1] = uVar9;
      param_1[2] = uVar9;
    }
  }
  return param_1;
}



int * fn_0079e7a0(int *param_1,uint param_2,undefined2 *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint local_18 [2];
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  puVar3 = local_18 + 1;
  if (0x1f < param_2) {
    puVar3 = local_18;
  }
  local_18[0] = param_2;
  local_18[1] = 0x20;
  uVar4 = *puVar3;
  puVar1 = (undefined2 *)fn_00100fc6(uVar4 << 1,0);
  *param_1 = (int)puVar1;
  for (uVar2 = local_18[0]; uVar2 != 0; uVar2 = uVar2 - 1) {
    if (puVar1 != (undefined2 *)0x0) {
      *puVar1 = *param_3;
    }
    puVar1 = puVar1 + 1;
  }
  param_1[1] = *param_1 + local_18[0] * 2;
  param_1[2] = *param_1 + uVar4 * 2;
  return param_1;
}



void fn_0079e764(int param_1,undefined2 *param_2)

{
  undefined2 *puVar1;
  
  puVar1 = *(undefined2 **)(param_1 + 4);
  if (puVar1 == *(undefined2 **)(param_1 + 8)) {
    fn_0079e460(param_1,puVar1,param_2);
    return;
  }
  *(undefined2 **)(param_1 + 4) = puVar1 + 1;
  if (puVar1 != (undefined2 *)0x0) {
    *puVar1 = *param_2;
  }
  return;
}



void fn_0079e64c(uint *param_1,uint param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint local_20 [2];
  uint *puStack_18;
  uint local_14;
  
  local_14 = param_2;
  puStack_18 = param_1;
  puVar5 = local_20;
  if (0x7fffffff < param_2) {
    local_20[0] = 0x7fffffff;
    fn_002ff628(8,&DAT_008c7675);
  }
  if ((uint)((int)(param_1[2] - *param_1) >> 1) < local_14) {
    uVar8 = (int)(param_1[1] - *param_1) >> 1;
    local_20[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_20[0] < uVar8 + 0x20) {
      local_20[0] = uVar8 + 0x20;
    }
    if (local_20[0] <= local_14) {
      puVar5 = &local_14;
    }
    uVar8 = *puVar5;
    puVar1 = (undefined2 *)fn_00100fc6(uVar8 << 1,0);
    puVar7 = (undefined2 *)param_1[1];
    puVar2 = puVar1;
    for (puVar6 = (undefined2 *)*param_1; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 1,0);
    uVar4 = *param_1;
    *param_1 = (uint)puVar1;
    param_1[1] = (param_1[1] - uVar4 & 0xfffffffe) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar8);
  }
  return;
}


