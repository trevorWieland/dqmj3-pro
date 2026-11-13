#include "005ac58c_005accc8.h"



void fn_005accc8(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_003d4048();
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b20) goto LAB_005acd18;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005acd18:
  fn_00604768(puVar1);
  fn_006899f4(param_1,0xd9,0,1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



undefined4 * fn_005acb38(undefined4 *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint local_30;
  uint local_2c [2];
  
  piVar5 = param_1 + 2;
  *param_1 = &DAT_008f9cf4;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  local_30 = 8;
  if ((uint)((int)(param_1[4] - param_1[2]) / 0x14) < 8) {
    uVar8 = (int)(param_1[3] - param_1[2]) / 0x14;
    local_2c[0] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
    if (local_2c[0] < uVar8 + 0x20) {
      local_2c[0] = uVar8 + 0x20;
    }
    puVar1 = local_2c;
    if (local_2c[0] < 9) {
      puVar1 = &local_30;
    }
    uVar8 = *puVar1;
    iVar2 = fn_00100fc6(uVar8 * 0x14,0);
    iVar9 = param_1[3];
    iVar6 = iVar2;
    for (iVar7 = *piVar5; iVar7 != iVar9; iVar7 = iVar7 + 0x14) {
      if (iVar6 != 0) {
        fn_005ac880(iVar6,iVar7);
      }
      iVar6 = iVar6 + 0x14;
    }
    iVar6 = param_1[3];
    for (iVar7 = *piVar5; iVar7 != iVar6; iVar7 = iVar7 + 0x14) {
      uVar3 = *(uint *)(iVar7 + 8);
      uVar4 = uVar3;
      if (*(uint *)(iVar7 + 0xc) < uVar3) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != *(uint *)(iVar7 + 0xc));
      }
      fn_001008c4(uVar3,(int)(*(int *)(iVar7 + 0x10) - uVar3) >> 1,0);
    }
    fn_001008c4(*piVar5,(param_1[4] - *piVar5) / 0x14,0);
    iVar7 = *piVar5;
    *piVar5 = iVar2;
    param_1[3] = iVar2 + ((param_1[3] - iVar7) / 0x14) * 0x14;
    param_1[4] = iVar2 + uVar8 * 0x14;
  }
  return param_1;
}



undefined4 fn_005aca1c(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_1c [2];
  
  local_1c[0] = &DAT_008f9cf4;
  fn_006e8654(*(int *)(param_1 + 8) + *(int *)(param_1 + 0x14) * 0x14,local_1c);
  if (local_1c[0][-1] == 0) {
    if (local_1c[0] != &DAT_008f9cf4) {
      piVar1 = local_1c[0] + -3;
      iVar2 = *piVar1;
      if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_1c[0] + -3,local_1c[0][-2] + 8,0);
      }
    }
    return 0;
  }
  fn_0036c5f4(param_2,local_1c[0],1,0,1,0,0,0,1);
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + 1;
  if (local_1c[0] != &DAT_008f9cf4) {
    piVar1 = local_1c[0] + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_1c[0] + -3,local_1c[0][-2] + 8,0);
    }
  }
  return 1;
}



void fn_005ac948(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  param_1[5] = 0;
  iVar1 = *param_2;
  piVar2 = (int *)(iVar1 + -0xc);
  if (*piVar2 == -1) {
    if (param_1 != param_2) {
      fn_00177c88(param_1,0,*(undefined4 *)(*param_1 + -4),iVar1,*(undefined4 *)(iVar1 + -4),0,
                   *(undefined4 *)(iVar1 + -4));
    }
  }
  else {
    if (piVar2 != &DAT_008f9ce8) {
      *piVar2 = *piVar2 + 1;
    }
    if ((undefined4 *)*param_1 != &DAT_008f9cf4) {
      piVar2 = (undefined4 *)*param_1 + -3;
      iVar1 = *piVar2;
      if ((iVar1 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(*param_1 + -0xc,*(int *)(*param_1 + -8) + 8,0);
      }
    }
    *param_1 = *param_2;
  }
  iVar1 = fn_0022eb34(*param_2);
  param_1[1] = iVar1;
  return;
}



undefined4 * fn_005ac880(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int iVar3;
  uint *puVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined2 *puVar7;
  int *piVar8;
  uint uVar9;
  uint local_18 [2];
  
  piVar8 = param_2 + 2;
  *param_1 = *param_2;
  piVar1 = param_1 + 2;
  param_1[1] = param_2[1];
  *piVar1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  local_18[0] = param_2[3] - *piVar8 >> 1;
  puVar4 = local_18;
  if (local_18[0] < 0x20) {
    puVar4 = local_18 + 1;
  }
  local_18[1] = 0x20;
  uVar9 = *puVar4;
  puVar2 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
  *piVar1 = (int)puVar2;
  puVar7 = (undefined2 *)param_2[3];
  for (puVar5 = (undefined2 *)*piVar8; puVar5 != puVar7; puVar5 = puVar5 + 1) {
    if (puVar2 != (undefined2 *)0x0) {
      *puVar2 = *puVar5;
    }
    puVar2 = puVar2 + 1;
  }
  iVar3 = param_2[3];
  iVar6 = *piVar8;
  param_1[4] = *piVar1 + uVar9 * 2;
  param_1[3] = *piVar1 + (iVar3 - iVar6 >> 1) * 2;
  return param_1;
}



undefined4 * fn_005ac76c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint local_20;
  uint local_1c [2];
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  puVar8 = param_1 + 2;
  param_1[3] = 0;
  param_1[4] = 0;
  local_20 = 0x20;
  if ((uint)((int)(param_1[4] - param_1[2]) >> 1) < 0x20) {
    uVar9 = (int)(param_1[3] - param_1[2]) >> 1;
    local_1c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_1c[0] < uVar9 + 0x20) {
      local_1c[0] = uVar9 + 0x20;
    }
    puVar5 = local_1c;
    if (local_1c[0] < 0x21) {
      puVar5 = &local_20;
    }
    uVar9 = *puVar5;
    puVar1 = (undefined2 *)fn_00100fc6(uVar9 << 1,0);
    puVar7 = (undefined2 *)param_1[3];
    puVar2 = puVar1;
    for (puVar6 = (undefined2 *)*puVar8; puVar6 != puVar7; puVar6 = puVar6 + 1) {
      if (puVar2 != (undefined2 *)0x0) {
        *puVar2 = *puVar6;
      }
      puVar2 = puVar2 + 1;
    }
    uVar3 = *puVar8;
    uVar4 = uVar3;
    if ((uint)param_1[3] < uVar3) {
      do {
        uVar4 = uVar4 + 2;
      } while (uVar4 != param_1[3]);
    }
    fn_001008c4(uVar3,(int)(param_1[4] - uVar3) >> 1,0);
    uVar4 = *puVar8;
    param_1[2] = puVar1;
    param_1[3] = (param_1[3] - uVar4 & 0xfffffffe) + (int)puVar1;
    param_1[4] = puVar1 + uVar9;
  }
  return param_1;
}



undefined4 fn_005ac58c(int param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint *puVar10;
  uint uVar11;
  
  puVar9 = *(undefined2 **)(param_1 + 0xc);
  uVar4 = (int)puVar9 - *(int *)(param_1 + 8) >> 1;
  if ((int)(*(int *)(param_1 + 4) + uVar4) < 10) {
    puVar10 = (uint *)(param_1 + 8);
    if (puVar9 == *(undefined2 **)(param_1 + 0x10)) {
      if (uVar4 < (uint)((int)*(undefined2 **)(param_1 + 0x10) - *(int *)(param_1 + 8) >> 1)) {
        *(undefined2 **)(param_1 + 0xc) = puVar9 + 1;
        if (puVar9 != (undefined2 *)0x0) {
          *puVar9 = puVar9[-1];
        }
        puVar6 = puVar9 + -1;
        puVar7 = puVar9;
        if (puVar9 < puVar6) {
          iVar5 = (int)puVar6 - (int)puVar9;
          if (0 < iVar5) {
            if (iVar5 * 0x40000000 < 0) {
              puVar6 = puVar9 + -2;
              puVar7 = puVar9 + -1;
              *puVar7 = *puVar6;
            }
            for (iVar5 = iVar5 >> 2; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar7[-1] = puVar6[-1];
              puVar6 = puVar6 + -2;
              puVar7 = puVar7 + -2;
              *puVar7 = *puVar6;
            }
          }
        }
        else {
          while (puVar9 != puVar6) {
            puVar6 = puVar6 + -1;
            puVar7[-1] = *puVar6;
            puVar7 = puVar7 + -1;
          }
        }
        *puVar9 = param_2;
      }
      else {
        uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
        if (uVar11 < uVar4 + 0x20) {
          uVar11 = uVar4 + 0x20;
        }
        puVar2 = (undefined2 *)fn_00100fc6(uVar11 << 1,0);
        puVar7 = puVar2;
        for (puVar6 = (undefined2 *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 1) {
          if (puVar7 != (undefined2 *)0x0) {
            *puVar7 = *puVar6;
          }
          puVar7 = puVar7 + 1;
        }
        puVar6 = (undefined2 *)(((int)puVar9 - *puVar10 & 0xfffffffe) + (int)puVar2);
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = param_2;
        }
        puVar7 = *(undefined2 **)(param_1 + 0xc);
        puVar6 = (undefined2 *)(((int)puVar9 - *puVar10 & 0xfffffffe) + (int)puVar2);
        for (; puVar9 != puVar7; puVar9 = puVar9 + 1) {
          puVar6 = puVar6 + 1;
          if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = *puVar9;
          }
        }
        uVar3 = *puVar10;
        uVar8 = *(uint *)(param_1 + 0xc);
        uVar4 = uVar3;
        if (uVar8 < uVar3) {
          do {
            uVar4 = uVar4 + 2;
          } while (uVar4 != uVar8);
        }
        fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x10) - uVar3) >> 1,0);
        *(undefined2 **)(param_1 + 0x10) = puVar2 + uVar11;
        *(undefined2 **)(param_1 + 0xc) = puVar2 + ((int)(uVar8 - uVar3) >> 1) + 1;
        *puVar10 = (uint)puVar2;
      }
    }
    else {
      *(undefined2 **)(param_1 + 0xc) = puVar9 + 1;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = param_2;
      }
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


