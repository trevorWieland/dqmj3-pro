#include "0079790c_00798084.h"



void fn_00798084(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)param_1[1];
  if (puVar8 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar8 + 1);
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *param_2;
    }
    return;
  }
  uVar3 = (int)((int)puVar8 - *param_1) >> 2;
  if ((uint)((int)((int)param_1[2] - *param_1) >> 2) <= uVar3) {
    uVar10 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar10 < uVar3 + 0x20) {
      uVar10 = uVar3 + 0x20;
    }
    puVar1 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar6 = puVar1;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != puVar8; puVar5 = puVar5 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar5;
      }
      puVar6 = puVar6 + 1;
    }
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = *param_2;
    }
    puVar6 = (undefined4 *)param_1[1];
    puVar5 = (undefined4 *)(((int)puVar8 - *param_1 & 0xfffffffc) + (int)puVar1);
    for (; puVar8 != puVar6; puVar8 = puVar8 + 1) {
      puVar5 = puVar5 + 1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar8;
      }
    }
    uVar2 = *param_1;
    uVar7 = param_1[1];
    uVar3 = uVar2;
    if (uVar7 < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != uVar7);
    }
    fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 2,0);
    param_1[2] = (uint)(puVar1 + uVar10);
    param_1[1] = (uint)(puVar1 + ((int)(uVar7 - uVar2) >> 2) + 1);
    *param_1 = (uint)puVar1;
    return;
  }
  param_1[1] = (uint)(puVar8 + 1);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = puVar8[-1];
  }
  puVar5 = puVar8 + -1;
  puVar6 = puVar8;
  if (puVar8 < puVar5) {
    if (0 < (int)puVar5 - (int)puVar8) {
      iVar9 = (int)puVar5 - (int)puVar8 >> 2;
      iVar4 = 0;
      do {
        iVar9 = iVar9 + -1;
        puVar8[iVar4 + -1] = puVar5[iVar4 + -1];
        iVar4 = iVar4 + -1;
      } while (iVar9 != 0);
    }
  }
  else {
    while (puVar8 != puVar5) {
      puVar5 = puVar5 + -1;
      puVar6[-1] = *puVar5;
      puVar6 = puVar6 + -1;
    }
  }
  *puVar8 = *param_2;
  return;
}



uint * fn_00797c14(uint *param_1,uint *param_2)

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
  undefined4 uVar10;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined4 *)param_2[1];
  puVar7 = (undefined4 *)*param_2;
  puVar5 = (undefined4 *)*param_1;
  uVar9 = (int)puVar1 - (int)puVar7;
  local_20 = (int)uVar9 >> 3;
  if ((uint)((int)(param_1[2] - (int)puVar5) >> 3) < local_20) {
    uVar9 = (int)(param_1[1] - (int)puVar5) >> 3;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar2 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar2 = &local_20;
    }
    uVar9 = *puVar2;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 3,0);
    puVar6 = (undefined4 *)param_2[1];
    puVar5 = puVar1;
    for (puVar7 = (undefined4 *)*param_2; puVar7 != puVar6; puVar7 = puVar7 + 2) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar10 = puVar7[1];
        *puVar5 = *puVar7;
        puVar5[1] = uVar10;
      }
      puVar5 = puVar5 + 2;
    }
    uVar3 = *param_1;
    uVar4 = uVar3;
    if (param_1[1] < uVar3) {
      do {
        uVar4 = uVar4 + 8;
      } while (uVar4 != param_1[1]);
    }
    fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (param_2[1] - *param_2 & 0xfffffff8) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar9 * 2);
  }
  else {
    uVar4 = (int)(param_1[1] - (int)puVar5) >> 3;
    if (uVar4 < local_20) {
      puVar1 = puVar7 + uVar4 * 2;
      if (puVar7 < puVar1) {
        iVar8 = (int)puVar1 - (int)puVar7;
        if (0 < iVar8) {
          puVar1 = puVar7 + -2;
          puVar6 = puVar5 + -2;
          if (iVar8 * 0x10000000 < 0) {
            uVar10 = puVar7[1];
            *puVar5 = *puVar7;
            puVar5[1] = uVar10;
            puVar1 = puVar7;
            puVar6 = puVar5;
          }
          for (iVar8 = iVar8 >> 4; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar10 = puVar1[3];
            puVar6[2] = puVar1[2];
            puVar6[3] = uVar10;
            uVar10 = puVar1[5];
            puVar6[4] = puVar1[4];
            puVar6[5] = uVar10;
            puVar1 = puVar1 + 4;
            puVar6 = puVar6 + 4;
          }
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
          uVar10 = puVar7[1];
          *puVar5 = *puVar7;
          puVar5[1] = uVar10;
          puVar5 = puVar5 + 2;
        }
      }
      param_1[1] = (param_2[1] - *param_2 & 0xfffffff8) + *param_1;
      puVar1 = (undefined4 *)param_2[1];
      puVar7 = (undefined4 *)(*param_1 + uVar4 * 8);
      for (puVar5 = (undefined4 *)(*param_2 + uVar4 * 8); puVar5 != puVar1; puVar5 = puVar5 + 2) {
        if (puVar7 != (undefined4 *)0x0) {
          uVar10 = puVar5[1];
          *puVar7 = *puVar5;
          puVar7[1] = uVar10;
        }
        puVar7 = puVar7 + 2;
      }
    }
    else {
      if (puVar7 < puVar1) {
        if (0 < (int)uVar9) {
          puVar1 = puVar5 + -2;
          puVar6 = puVar7 + -2;
          if ((int)(uVar9 * 0x10000000) < 0) {
            uVar10 = puVar7[1];
            *puVar5 = *puVar7;
            puVar5[1] = uVar10;
            puVar1 = puVar5;
            puVar6 = puVar7;
          }
          for (iVar8 = (int)uVar9 >> 4; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar10 = puVar6[3];
            puVar1[2] = puVar6[2];
            puVar1[3] = uVar10;
            uVar10 = puVar6[5];
            puVar1[4] = puVar6[4];
            puVar1[5] = uVar10;
            puVar1 = puVar1 + 4;
            puVar6 = puVar6 + 4;
          }
          puVar5 = (undefined4 *)((int)puVar5 + (uVar9 & 0xfffffff8));
        }
      }
      else {
        for (; puVar7 != puVar1; puVar7 = puVar7 + 2) {
          uVar10 = puVar7[1];
          *puVar5 = *puVar7;
          puVar5[1] = uVar10;
          puVar5 = puVar5 + 2;
        }
      }
      if ((undefined4 *)param_1[1] < puVar5) {
        do {
          puVar5 = puVar5 + 2;
        } while (puVar5 != (undefined4 *)param_1[1]);
      }
      uVar9 = (param_2[1] - *param_2 & 0xfffffff8) + *param_1;
      param_1[1] = uVar9;
      param_1[2] = uVar9;
    }
  }
  return param_1;
}



void fn_00797a98(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_30;
  int *piStack_2c;
  uint local_28;
  
  local_28 = param_2;
  piStack_2c = param_1;
  puVar1 = &local_30;
  if (0xc19b6 < param_2) {
    local_30 = 0xc19b6;
    fn_002ff628(8,&DAT_008c7641);
  }
  if ((uint)((param_1[2] - *param_1) / 0x1528) < local_28) {
    uVar6 = (param_1[1] - *param_1) / 0x1528;
    local_30 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
    if (local_30 < uVar6 + 0x20) {
      local_30 = uVar6 + 0x20;
    }
    if (local_30 <= local_28) {
      puVar1 = &local_28;
    }
    uVar6 = *puVar1;
    iVar2 = fn_00100fc6(uVar6 * 0x1528,0);
    iVar5 = param_1[1];
    iVar3 = iVar2;
    for (iVar4 = *param_1; iVar4 != iVar5; iVar4 = iVar4 + 0x1528) {
      if (iVar3 != 0) {
        fn_0017821c(iVar3,iVar4,0x1528);
      }
      iVar3 = iVar3 + 0x1528;
    }
    for (iVar4 = *param_1; iVar4 != param_1[1]; iVar4 = iVar4 + 0x1528) {
    }
    fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x1528,0);
    iVar4 = *param_1;
    *param_1 = iVar2;
    param_1[1] = iVar2 + ((param_1[1] - iVar4) / 0x1528) * 0x1528;
    param_1[2] = iVar2 + uVar6 * 0x1528;
  }
  return;
}



void fn_0079790c(uint *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined1 *puVar7;
  uint uVar8;
  
  puVar1 = (undefined1 *)param_1[1];
  uVar4 = (int)puVar1 - *param_1;
  if (param_1[2] - *param_1 <= uVar4) {
    uVar8 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar8 < uVar4 + 0x20) {
      uVar8 = uVar4 + 0x20;
    }
    puVar2 = (undefined1 *)fn_00100fc6(uVar8,0);
    puVar7 = puVar2;
    for (puVar1 = (undefined1 *)*param_1; puVar1 != param_2; puVar1 = puVar1 + 1) {
      if (puVar7 != (undefined1 *)0x0) {
        *puVar7 = *puVar1;
      }
      puVar7 = puVar7 + 1;
    }
    if (puVar2 + ((int)param_2 - *param_1) != (undefined1 *)0x0) {
      puVar2[(int)param_2 - *param_1] = *param_3;
    }
    puVar7 = (undefined1 *)param_1[1];
    puVar1 = puVar2 + ((int)param_2 - *param_1);
    for (; param_2 != puVar7; param_2 = param_2 + 1) {
      puVar1 = puVar1 + 1;
      if (puVar1 != (undefined1 *)0x0) {
        *puVar1 = *param_2;
      }
    }
    uVar3 = *param_1;
    uVar6 = param_1[1];
    uVar4 = uVar3;
    if (uVar6 < uVar3) {
      do {
        uVar4 = uVar4 + 1;
      } while (uVar4 != uVar6);
    }
    fn_001008c4(uVar3,param_1[2] - uVar3,0);
    *param_1 = (uint)puVar2;
    param_1[1] = (uint)(puVar2 + (uVar6 - uVar3) + 1);
    param_1[2] = (uint)(puVar2 + uVar8);
    return;
  }
  param_1[1] = (uint)(puVar1 + 1);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = puVar1[-1];
  }
  puVar7 = puVar1 + -1;
  if (param_2 < puVar7) {
    uVar4 = (int)puVar7 - (int)param_2;
    if (0 < (int)uVar4) {
      if ((uVar4 & 1) != 0) {
        puVar7 = puVar1 + -2;
        puVar1 = puVar1 + -1;
        *puVar1 = *puVar7;
      }
      for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        puVar1[-1] = puVar7[-1];
        puVar7 = puVar7 + -2;
        puVar1 = puVar1 + -2;
        *puVar1 = *puVar7;
      }
    }
  }
  else {
    while (param_2 != puVar7) {
      puVar7 = puVar7 + -1;
      puVar1 = puVar1 + -1;
      *puVar1 = *puVar7;
    }
  }
  *param_2 = *param_3;
  return;
}


