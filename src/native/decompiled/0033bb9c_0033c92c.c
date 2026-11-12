#include "0033bb9c_0033c92c.h"



void fn_0033c92c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008521a0;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x0033c0b0) */
/* WARNING: Removing unreachable block (ram,0x0033c0b4) */
/* WARNING: Removing unreachable block (ram,0x0033c0b8) */
/* WARNING: Removing unreachable block (ram,0x0033c0bc) */
/* WARNING: Removing unreachable block (ram,0x0033c0c0) */

undefined4 fn_0033bf68(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  
  puVar8 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)0x0;
  uVar10 = 0;
  puVar4 = (undefined4 *)0x0;
  local_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  do {
    uVar12 = *(undefined4 *)(*(int *)(param_2 + 4) + uVar10 * 4);
    if (puVar4 == puVar9) {
      uVar1 = (int)puVar4 - (int)puVar8 >> 2;
      if (uVar1 < (uint)((int)puVar9 - (int)puVar8 >> 2)) {
        puVar2 = puVar4 + -1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = puVar4[-1];
        }
        puVar3 = puVar4 + 1;
        puVar6 = puVar4;
        if (puVar4 < puVar2) {
          iVar11 = (int)puVar2 - (int)puVar4;
          if (0 < iVar11) {
            if (iVar11 * 0x20000000 < 0) {
              puVar2 = puVar4 + -2;
              puVar6 = puVar4 + -1;
              *puVar6 = *puVar2;
            }
            for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar6[-1] = puVar2[-1];
              puVar2 = puVar2 + -2;
              puVar6 = puVar6 + -2;
              *puVar6 = *puVar2;
            }
          }
        }
        else {
          while (puVar4 != puVar2) {
            puVar2 = puVar2 + -1;
            puVar6[-1] = *puVar2;
            puVar6 = puVar6 + -1;
          }
        }
        *puVar4 = uVar12;
      }
      else {
        local_38 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_38 < uVar1 + 0x20) {
          local_38 = uVar1 + 0x20;
        }
        puVar6 = (undefined4 *)fn_00100fc6(local_38 << 2,0);
        puVar2 = puVar6;
        for (puVar3 = puVar8; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar3;
          }
          puVar2 = puVar2 + 1;
        }
        puVar3 = (undefined4 *)(((int)puVar4 - (int)puVar8 & 0xfffffffcU) + (int)puVar6);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uVar12;
        }
        puVar3 = puVar8;
        if (puVar4 <= puVar8) {
          for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          }
        }
        fn_001008c4(puVar8,(int)puVar9 - (int)puVar8 >> 2,0);
        puVar3 = puVar6 + ((int)puVar4 - (int)puVar8 >> 2) + 1;
        puVar9 = puVar6 + local_38;
        puVar8 = puVar6;
      }
    }
    else {
      puVar3 = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar12;
      }
    }
    uVar10 = uVar10 + 1;
    puVar4 = puVar3;
  } while (uVar10 < 2);
  if (local_28 == 0) {
    uVar10 = fn_006ba674(local_30);
    iVar11 = fn_006ba4ec(local_30);
  }
  else {
    uVar10 = 0;
    iVar11 = 0;
  }
  puVar4 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(local_30 + 0x44);
    *puVar4 = &DAT_008521a0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    local_38 = (int)puVar3 - (int)puVar8 >> 2;
    local_34 = 0x20;
    puVar5 = &local_38;
    if (local_38 < 0x20) {
      puVar5 = (uint *)&local_34;
    }
    iVar13 = *puVar5;
    puVar6 = (undefined4 *)fn_00100fc6(iVar13 << 2,0);
    puVar4[5] = puVar6;
    for (puVar2 = puVar8; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar2;
      }
      puVar6 = puVar6 + 1;
    }
    iVar7 = puVar4[5];
    puVar4[7] = iVar7 + iVar13 * 4;
    puVar4[6] = ((int)puVar3 - (int)puVar8 & 0xfffffffcU) + iVar7;
  }
  local_38 = uVar10;
  local_34 = iVar11;
  uVar12 = fn_0033b240(local_30,1);
  puVar4 = puVar8;
  if (puVar3 < puVar8) {
    do {
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
  }
  fn_001008c4(puVar8,(int)puVar9 - (int)puVar8 >> 2,0);
  return uVar12;
}



/* WARNING: Removing unreachable block (ram,0x0033bd80) */
/* WARNING: Removing unreachable block (ram,0x0033bd84) */
/* WARNING: Removing unreachable block (ram,0x0033bd88) */
/* WARNING: Removing unreachable block (ram,0x0033bd8c) */
/* WARNING: Removing unreachable block (ram,0x0033bd90) */

undefined4 fn_0033bc38(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint local_38;
  int local_34;
  int local_30;
  int iStack_2c;
  int local_28;
  
  puVar8 = (undefined4 *)0x0;
  puVar9 = (undefined4 *)0x0;
  uVar10 = 0;
  puVar4 = (undefined4 *)0x0;
  local_30 = param_1;
  iStack_2c = param_2;
  local_28 = param_3;
  do {
    uVar12 = *(undefined4 *)(*(int *)(param_2 + 4) + uVar10 * 4);
    if (puVar4 == puVar9) {
      uVar1 = (int)puVar4 - (int)puVar8 >> 2;
      if (uVar1 < (uint)((int)puVar9 - (int)puVar8 >> 2)) {
        puVar2 = puVar4 + -1;
        if (puVar4 != (undefined4 *)0x0) {
          *puVar4 = puVar4[-1];
        }
        puVar3 = puVar4 + 1;
        puVar6 = puVar4;
        if (puVar4 < puVar2) {
          iVar11 = (int)puVar2 - (int)puVar4;
          if (0 < iVar11) {
            if (iVar11 * 0x20000000 < 0) {
              puVar2 = puVar4 + -2;
              puVar6 = puVar4 + -1;
              *puVar6 = *puVar2;
            }
            for (iVar11 = iVar11 >> 3; iVar11 != 0; iVar11 = iVar11 + -1) {
              puVar6[-1] = puVar2[-1];
              puVar2 = puVar2 + -2;
              puVar6 = puVar6 + -2;
              *puVar6 = *puVar2;
            }
          }
        }
        else {
          while (puVar4 != puVar2) {
            puVar2 = puVar2 + -1;
            puVar6[-1] = *puVar2;
            puVar6 = puVar6 + -1;
          }
        }
        *puVar4 = uVar12;
      }
      else {
        local_38 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (local_38 < uVar1 + 0x20) {
          local_38 = uVar1 + 0x20;
        }
        puVar6 = (undefined4 *)fn_00100fc6(local_38 << 2,0);
        puVar2 = puVar6;
        for (puVar3 = puVar8; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar3;
          }
          puVar2 = puVar2 + 1;
        }
        puVar3 = (undefined4 *)(((int)puVar4 - (int)puVar8 & 0xfffffffcU) + (int)puVar6);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = uVar12;
        }
        puVar3 = puVar8;
        if (puVar4 <= puVar8) {
          for (; puVar3 != puVar4; puVar3 = puVar3 + 1) {
          }
        }
        fn_001008c4(puVar8,(int)puVar9 - (int)puVar8 >> 2,0);
        puVar3 = puVar6 + ((int)puVar4 - (int)puVar8 >> 2) + 1;
        puVar9 = puVar6 + local_38;
        puVar8 = puVar6;
      }
    }
    else {
      puVar3 = puVar4 + 1;
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = uVar12;
      }
    }
    uVar10 = uVar10 + 1;
    puVar4 = puVar3;
  } while (uVar10 < 2);
  if (local_28 == 0) {
    uVar10 = fn_006ba674(local_30);
    iVar11 = fn_006ba4ec(local_30);
  }
  else {
    uVar10 = 0;
    iVar11 = 0;
  }
  puVar4 = (undefined4 *)fn_00145b00(0x20,&DAT_00812c8c);
  if (puVar4 != (undefined4 *)0x0) {
    puVar4[1] = *(undefined4 *)(local_30 + 0x44);
    *puVar4 = &DAT_00852170;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    local_38 = (int)puVar3 - (int)puVar8 >> 2;
    local_34 = 0x20;
    puVar5 = &local_38;
    if (local_38 < 0x20) {
      puVar5 = (uint *)&local_34;
    }
    iVar13 = *puVar5;
    puVar6 = (undefined4 *)fn_00100fc6(iVar13 << 2,0);
    puVar4[5] = puVar6;
    for (puVar2 = puVar8; puVar2 != puVar3; puVar2 = puVar2 + 1) {
      if (puVar6 != (undefined4 *)0x0) {
        *puVar6 = *puVar2;
      }
      puVar6 = puVar6 + 1;
    }
    iVar7 = puVar4[5];
    puVar4[7] = iVar7 + iVar13 * 4;
    puVar4[6] = ((int)puVar3 - (int)puVar8 & 0xfffffffcU) + iVar7;
  }
  local_38 = uVar10;
  local_34 = iVar11;
  uVar12 = fn_0033b240(local_30,0);
  puVar4 = puVar8;
  if (puVar3 < puVar8) {
    do {
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar3);
  }
  fn_001008c4(puVar8,(int)puVar9 - (int)puVar8 >> 2,0);
  return uVar12;
}



void fn_0033bc28(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0033bc34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  return;
}



void fn_0033bb9c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00852170;
  uVar1 = param_1[5];
  uVar2 = uVar1;
  if ((uint)param_1[6] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[6]);
  }
  fn_001008c4(uVar1,(int)(param_1[7] - uVar1) >> 2,0);
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 2,0);
  fn_002feef8(param_1);
  return;
}


