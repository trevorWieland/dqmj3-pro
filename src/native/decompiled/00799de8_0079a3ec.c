#include "00799de8_0079a3ec.h"



void fn_0079a3ec(uint *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar1 = param_1[1];
  if (uVar1 != param_1[2]) {
    param_1[1] = uVar1 + 0xf4;
    if (uVar1 != 0) {
      fn_0017821c(uVar1,param_2,0xf0);
      *(undefined1 *)(uVar1 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    }
    return;
  }
  uVar4 = (int)(uVar1 - *param_1) / 0xf4;
  if ((uint)((int)(param_1[2] - *param_1) / 0xf4) <= uVar4) {
    uVar5 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
    if (uVar5 < uVar4 + 0x20) {
      uVar5 = uVar4 + 0x20;
    }
    uVar3 = fn_00100fc6(uVar5 * 0xf4,0);
    uVar6 = uVar3;
    for (uVar4 = *param_1; uVar4 != uVar1; uVar4 = uVar4 + 0xf4) {
      if (uVar6 != 0) {
        fn_0017821c(uVar6,uVar4,0xf0);
        *(undefined1 *)(uVar6 + 0xf0) = *(undefined1 *)(uVar4 + 0xf0);
      }
      uVar6 = uVar6 + 0xf4;
    }
    iVar2 = uVar3 + ((int)(uVar1 - *param_1) / 0xf4) * 0xf4;
    if (iVar2 != 0) {
      fn_0017821c(iVar2,param_2,0xf0);
      *(undefined1 *)(iVar2 + 0xf0) = *(undefined1 *)(param_2 + 0xf0);
    }
    uVar4 = param_1[1];
    iVar2 = uVar3 + ((int)(uVar1 - *param_1) / 0xf4) * 0xf4;
    for (; uVar1 != uVar4; uVar1 = uVar1 + 0xf4) {
      iVar7 = iVar2 + 0xf4;
      if (iVar7 != 0) {
        fn_0017821c(iVar7,uVar1,0xf0);
        *(undefined1 *)(iVar2 + 0x1e4) = *(undefined1 *)(uVar1 + 0xf0);
      }
      iVar2 = iVar7;
    }
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar1 = uVar4;
    if (uVar6 < uVar4) {
      do {
        uVar1 = uVar1 + 0xf4;
      } while (uVar1 != uVar6);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0xf4,0);
    *param_1 = uVar3;
    param_1[1] = uVar3 + ((int)(uVar6 - uVar4) / 0xf4) * 0xf4 + 0xf4;
    param_1[2] = uVar3 + uVar5 * 0xf4;
    return;
  }
  param_1[1] = uVar1 + 0xf4;
  if (uVar1 != 0) {
    fn_0017821c(uVar1,uVar1 - 0xf4,0xf0);
    *(undefined1 *)(uVar1 + 0xf0) = *(undefined1 *)(uVar1 - 4);
  }
  uVar5 = uVar1 - 0xf4;
  uVar4 = uVar1;
  if (uVar1 < uVar5) {
    iVar2 = uVar5 - uVar1;
    iVar7 = 1;
    if (1 < iVar2 / 0xf4 + 1) {
      do {
        uVar5 = uVar5 - 0xf4;
        uVar4 = uVar4 - 0xf4;
        fn_0017821c(uVar4,uVar5,0xf1);
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2 / 0xf4 + 1);
    }
  }
  else {
    while (uVar1 != uVar5) {
      uVar5 = uVar5 - 0xf4;
      fn_0017821c(uVar4 - 0xf4,uVar5,0xf1);
      uVar4 = uVar4 - 0xf4;
    }
  }
  fn_0017821c(uVar1,param_2,0xf1);
  return;
}



void fn_00799de8(int *param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  undefined2 *puVar12;
  int iVar13;
  int *piVar14;
  bool bVar15;
  uint local_68;
  uint local_64;
  int *local_58;
  uint local_50 [7];
  int *piStack_34;
  int *local_30;
  int iStack_2c;
  int *local_28;
  
  if (param_3 == 0) {
    return;
  }
  piVar14 = (int *)param_1[1];
  uVar9 = param_3 + ((int)piVar14 - *param_1 >> 2);
  piStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  local_28 = param_4;
  if ((uint)(param_1[2] - *param_1 >> 2) < uVar9) {
    local_68 = uVar9;
    uVar1 = param_1[1] - *param_1 >> 2;
    local_50[0] = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (local_50[0] < uVar1 + 0x20) {
      local_50[0] = uVar1 + 0x20;
    }
    puVar7 = local_50;
    if (local_50[0] <= uVar9) {
      puVar7 = &local_68;
    }
    local_64 = *puVar7;
    iVar10 = fn_00100fc6(local_64 << 2,0);
    fn_007b5ea0(*param_1,local_30,iVar10,param_1);
    piVar14 = local_28;
    piVar3 = (int *)(((int)local_30 - *param_1 & 0xfffffffcU) + iVar10);
    iVar13 = param_3;
    do {
      if (piVar3 != (int *)0x0) {
        iVar8 = *piVar14;
        if (*(int *)(iVar8 + -0xc) == -1) {
          uVar9 = *(uint *)(iVar8 + -4);
          if (0xfffffff1 < uVar9) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
          }
          if (uVar9 == 0) {
            puVar5 = &DAT_008f9ce8;
          }
          else {
            puVar5 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
            }
            puVar5[1] = uVar9;
            puVar12 = (undefined2 *)((int)puVar5 + uVar9 * 2 + 0xc);
            *puVar5 = 0;
            puVar5[2] = uVar9;
            if (puVar12 != (undefined2 *)0x0) {
              *puVar12 = 0;
            }
          }
          *piVar3 = (int)(puVar5 + 3);
          fn_00301a9c(puVar5 + 3,*piVar14,uVar9 << 1);
        }
        else {
          *piVar3 = iVar8;
          piVar4 = (int *)(iVar8 + -0xc);
          if (piVar4 != &DAT_008f9ce8) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      iVar13 = iVar13 + -1;
      piVar3 = piVar3 + 1;
    } while (iVar13 != 0);
    fn_007b5ea0(local_30,param_1[1],iVar10 + (param_3 + ((int)local_30 - *param_1 >> 2)) * 4,
                 param_1);
    piVar14 = (int *)*param_1;
    piVar4 = (int *)param_1[1];
    bVar15 = piVar14 != piVar4;
    piVar3 = (int *)0x0;
    if (bVar15) {
      piVar3 = &DAT_008f9ce8;
    }
    iVar13 = (int)piVar4 - (int)piVar14;
    while (bVar15) {
      if ((undefined4 *)*piVar14 != &DAT_008f9cf4) {
        piVar6 = (undefined4 *)*piVar14 + -3;
        iVar8 = *piVar6;
        if ((iVar8 == -1) || ((piVar6 != piVar3 && (*piVar6 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(*piVar14 + -0xc,*(int *)(*piVar14 + -8) + 8,0);
        }
      }
      piVar14 = piVar14 + 1;
      bVar15 = piVar14 != piVar4;
    }
    fn_001008c4(*param_1,param_1[2] - *param_1 >> 2,0);
    *param_1 = iVar10;
    param_1[1] = iVar10 + (iVar13 >> 2) * 4 + param_3 * 4;
    param_1[2] = iVar10 + local_64 * 4;
    return;
  }
  local_58 = param_2 + param_3;
  param_1[1] = (int)(piVar14 + param_3);
  if (local_58 < piVar14) {
    piVar3 = piVar14 + -param_3;
    fn_007b5ea0(piVar3,piVar14,piVar14,param_1);
    piVar2 = local_30;
    piVar4 = local_58;
    piVar6 = local_28;
    while (local_58 = piVar4, local_28 = piVar6, piVar2 != piVar3) {
      piVar3 = piVar3 + -1;
      piVar14 = piVar14 + -1;
      iVar10 = *piVar3;
      piVar11 = (int *)(iVar10 + -0xc);
      if (*piVar11 == -1) {
        if (piVar14 != piVar3) {
          local_68 = *(uint *)(iVar10 + -4);
          fn_00177c88(piVar14,0,*(undefined4 *)(*piVar14 + -4),iVar10,local_68,0);
          piVar4 = local_58;
          piVar6 = local_28;
        }
      }
      else {
        if (piVar11 != &DAT_008f9ce8) {
          *piVar11 = *piVar11 + 1;
        }
        if ((undefined4 *)*piVar14 != &DAT_008f9cf4) {
          piVar4 = (undefined4 *)*piVar14 + -3;
          iVar10 = *piVar4;
          if ((iVar10 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar10 + -1, iVar10 == 0))))
          {
            fn_001008c4(*piVar14 + -0xc,*(int *)(*piVar14 + -8) + 8,0);
          }
        }
        *piVar14 = *piVar3;
        piVar4 = local_58;
        piVar6 = local_28;
      }
    }
    for (piVar14 = local_30; piVar14 != piVar4; piVar14 = piVar14 + 1) {
      iVar10 = *piVar6;
      piVar3 = (int *)(iVar10 + -0xc);
      if (*piVar3 == -1) {
        if (piVar14 != piVar6) {
          local_68 = *(uint *)(iVar10 + -4);
          fn_00177c88(piVar14,0,*(undefined4 *)(*piVar14 + -4),iVar10,local_68,0);
        }
      }
      else {
        if (piVar3 != &DAT_008f9ce8) {
          *piVar3 = *piVar3 + 1;
        }
        if ((undefined4 *)*piVar14 != &DAT_008f9cf4) {
          piVar3 = (undefined4 *)*piVar14 + -3;
          iVar10 = *piVar3;
          if ((iVar10 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar10 + -1, iVar10 == 0))))
          {
            fn_001008c4(*piVar14 + -0xc,*(int *)(*piVar14 + -8) + 8,0);
          }
        }
        *piVar14 = *piVar6;
      }
    }
  }
  else {
    piVar3 = piVar14;
    for (param_3 = param_3 - ((int)piVar14 - (int)param_2 >> 2); param_3 != 0;
        param_3 = param_3 + -1) {
      if (piVar3 != (int *)0x0) {
        iVar10 = *param_4;
        if (*(int *)(iVar10 + -0xc) == -1) {
          uVar9 = *(uint *)(iVar10 + -4);
          if (0xfffffff1 < uVar9) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
          }
          if (uVar9 == 0) {
            puVar5 = &DAT_008f9ce8;
          }
          else {
            puVar5 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0;
              puVar5[1] = 0;
              puVar5[2] = 0;
            }
            puVar5[1] = uVar9;
            puVar12 = (undefined2 *)((int)puVar5 + uVar9 * 2 + 0xc);
            *puVar5 = 0;
            puVar5[2] = uVar9;
            if (puVar12 != (undefined2 *)0x0) {
              *puVar12 = 0;
            }
          }
          *piVar3 = (int)(puVar5 + 3);
          fn_00301a9c(puVar5 + 3,*param_4,uVar9 << 1);
        }
        else {
          *piVar3 = iVar10;
          piVar4 = (int *)(iVar10 + -0xc);
          if (piVar4 != &DAT_008f9ce8) {
            *piVar4 = *piVar4 + 1;
          }
        }
      }
      piVar3 = piVar3 + 1;
    }
    fn_007b5ea0(local_30,piVar14,local_58,param_1);
    piVar3 = local_28;
    piVar4 = local_30;
    if (local_30 != piVar14) {
      do {
        iVar10 = *piVar3;
        piVar6 = (int *)(iVar10 + -0xc);
        if (*piVar6 == -1) {
          if (piVar4 != piVar3) {
            local_68 = *(uint *)(iVar10 + -4);
            fn_00177c88(piVar4,0,*(undefined4 *)(*piVar4 + -4),iVar10,local_68,0);
          }
        }
        else {
          if (piVar6 != &DAT_008f9ce8) {
            *piVar6 = *piVar6 + 1;
          }
          if ((undefined4 *)*piVar4 != &DAT_008f9cf4) {
            piVar6 = (undefined4 *)*piVar4 + -3;
            iVar10 = *piVar6;
            if ((iVar10 == -1) ||
               ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar10 + -1, iVar10 == 0)))) {
              fn_001008c4(*piVar4 + -0xc,*(int *)(*piVar4 + -8) + 8,0);
            }
          }
          *piVar4 = *piVar3;
        }
        piVar4 = piVar4 + 1;
      } while (piVar4 != piVar14);
      return;
    }
  }
  return;
}


