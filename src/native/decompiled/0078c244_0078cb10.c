#include "0078c244_0078cb10.h"



uint * fn_0078cb10(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 0xc) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
  return param_1;
}



void fn_0078ca18(int *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  iVar5 = *param_1;
  uVar1 = (iVar4 - iVar5) / 0x14;
  if (uVar1 < param_2) {
    fn_0078c244(param_1,iVar4,param_2 - uVar1,param_3);
  }
  else if ((uVar1 != param_2) && (iVar6 = iVar5 + param_2 * 0x14, iVar2 = iVar6, iVar5 != iVar4)) {
    for (; iVar2 != iVar4; iVar2 = iVar2 + 0x14) {
      if (*(undefined4 **)(iVar2 + 0xc) != &DAT_008f9cf4) {
        piVar3 = *(undefined4 **)(iVar2 + 0xc) + -3;
        iVar5 = *piVar3;
        if ((iVar5 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar5 + -1, iVar5 == 0)))) {
          fn_001008c4(*(int *)(iVar2 + 0xc) + -0xc,*(int *)(*(int *)(iVar2 + 0xc) + -8) + 8,0);
        }
      }
    }
    param_1[1] = param_1[1] + ((iVar4 - iVar6) / 0x14) * -0x14;
    return;
  }
  return;
}



void fn_0078c244(int *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined2 *puVar8;
  undefined4 **ppuVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  bool bVar18;
  undefined4 *local_74;
  int *local_70;
  undefined4 *local_64;
  int local_60;
  undefined4 *local_5c;
  int *piStack_34;
  undefined4 *local_30;
  int local_2c;
  undefined4 *local_28;
  
  if (param_3 != 0) {
    puVar3 = (undefined4 *)param_1[1];
    local_74 = (undefined4 *)(((int)puVar3 - *param_1) / 0x14 + param_3);
    iVar4 = param_3 * 5;
    piStack_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    if ((undefined4 *)((param_1[2] - *param_1) / 0x14) < local_74) {
      uVar17 = (param_1[1] - *param_1) / 0x14;
      local_64 = (undefined4 *)(uVar17 + (uVar17 >> 1) + (uVar17 >> 3));
      if (local_64 < (undefined4 *)(uVar17 + 0x20)) {
        local_64 = (undefined4 *)(uVar17 + 0x20);
      }
      ppuVar9 = &local_64;
      if (local_64 <= local_74) {
        ppuVar9 = &local_74;
      }
      local_5c = *ppuVar9;
      local_60 = fn_00100fc6((int)local_5c * 0x14,0);
      fn_007b59b0(*param_1,local_30,local_60,param_1);
      puVar3 = local_28;
      puVar14 = (undefined4 *)(local_60 + (((int)local_30 - *param_1) / 0x14) * 0x14);
      iVar16 = local_2c;
      do {
        if (puVar14 != (undefined4 *)0x0) {
          *puVar14 = *puVar3;
          *(undefined2 *)(puVar14 + 1) = *(undefined2 *)(puVar3 + 1);
          *(undefined2 *)((int)puVar14 + 6) = *(undefined2 *)((int)puVar3 + 6);
          puVar14[2] = puVar3[2];
          piVar5 = puVar14 + 3;
          iVar7 = puVar3[3];
          if (*(int *)(iVar7 + -0xc) == -1) {
            uVar17 = *(uint *)(iVar7 + -4);
            if (0xfffffff1 < uVar17) {
              fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar17,0xfffffff1);
            }
            if (uVar17 == 0) {
              puVar6 = &DAT_008f9ce8;
            }
            else {
              puVar6 = (undefined4 *)fn_00100fc6((uVar17 + 8) * 2,0);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
              }
              puVar6[1] = uVar17;
              puVar8 = (undefined2 *)((int)puVar6 + uVar17 * 2 + 0xc);
              *puVar6 = 0;
              puVar6[2] = uVar17;
              if (puVar8 != (undefined2 *)0x0) {
                *puVar8 = 0;
              }
            }
            *piVar5 = (int)(puVar6 + 3);
            fn_00301a9c(puVar6 + 3,puVar3[3],uVar17 << 1);
          }
          else {
            *piVar5 = iVar7;
            piVar5 = (int *)(iVar7 + -0xc);
            if (piVar5 != &DAT_008f9ce8) {
              *piVar5 = *piVar5 + 1;
            }
          }
          *(undefined1 *)(puVar14 + 4) = *(undefined1 *)(puVar3 + 4);
        }
        iVar16 = iVar16 + -1;
        puVar14 = puVar14 + 5;
      } while (iVar16 != 0);
      fn_007b59b0(local_30,param_1[1],
                   local_60 + (local_2c + ((int)local_30 - *param_1) / 0x14) * 0x14,param_1);
      iVar16 = *param_1;
      iVar13 = param_1[1];
      iVar7 = iVar13 - iVar16;
      bVar18 = iVar16 != iVar13;
      piVar5 = (int *)0x0;
      if (bVar18) {
        piVar5 = &DAT_008f9ce8;
      }
      while (bVar18) {
        if (*(undefined4 **)(iVar16 + 0xc) != &DAT_008f9cf4) {
          piVar12 = *(undefined4 **)(iVar16 + 0xc) + -3;
          iVar10 = *piVar12;
          if ((iVar10 == -1) || ((piVar12 != piVar5 && (*piVar12 = iVar10 + -1, iVar10 == 0)))) {
            fn_001008c4(*(int *)(iVar16 + 0xc) + -0xc,*(int *)(*(int *)(iVar16 + 0xc) + -8) + 8,0);
          }
        }
        iVar16 = iVar16 + 0x14;
        bVar18 = iVar16 != iVar13;
      }
      fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x14,0);
      *param_1 = local_60;
      param_1[1] = local_60 + (iVar7 / 0x14) * 0x14 + iVar4 * 4;
      param_1[2] = local_60 + (int)local_5c * 0x14;
      return;
    }
    local_74 = param_2 + param_3 * 5;
    param_1[1] = (int)(puVar3 + param_3 * 5);
    if (local_74 < puVar3) {
      puVar14 = puVar3 + param_3 * -5;
      fn_007b59b0(puVar14,puVar3,puVar3,param_1);
      puVar2 = local_30;
      puVar6 = local_74;
      puVar11 = local_28;
      while (local_74 = puVar6, puVar1 = local_30, local_28 = puVar11, puVar2 != puVar14) {
        puVar3[-5] = puVar14[-5];
        *(undefined2 *)(puVar3 + -4) = *(undefined2 *)(puVar14 + -4);
        piVar12 = puVar3 + -2;
        *(undefined2 *)((int)puVar3 - 0xe) = *(undefined2 *)((int)puVar14 - 0xe);
        puVar3[-3] = puVar14[-3];
        piVar15 = puVar14 + -2;
        iVar4 = *piVar15;
        piVar5 = (int *)(iVar4 + -0xc);
        if (*piVar5 == -1) {
          if (piVar12 != piVar15) {
            fn_00177c88(piVar12,0,*(undefined4 *)(*piVar12 + -4),iVar4,*(undefined4 *)(iVar4 + -4),
                         0,*(undefined4 *)(iVar4 + -4));
          }
        }
        else {
          if (piVar5 != &DAT_008f9ce8) {
            *piVar5 = *piVar5 + 1;
          }
          if ((undefined4 *)*piVar12 != &DAT_008f9cf4) {
            piVar5 = (undefined4 *)*piVar12 + -3;
            iVar4 = *piVar5;
            if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0))))
            {
              fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
            }
          }
          *piVar12 = *piVar15;
        }
        *(undefined1 *)(puVar3 + -1) = *(undefined1 *)(puVar14 + -1);
        puVar14 = puVar14 + -5;
        puVar3 = puVar3 + -5;
        puVar6 = local_74;
        puVar11 = local_28;
      }
      for (; puVar1 != puVar6; puVar1 = puVar1 + 5) {
        piVar12 = puVar1 + 3;
        *puVar1 = *puVar11;
        *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(puVar11 + 1);
        *(undefined2 *)((int)puVar1 + 6) = *(undefined2 *)((int)puVar11 + 6);
        puVar1[2] = puVar11[2];
        iVar4 = puVar11[3];
        piVar5 = (int *)(iVar4 + -0xc);
        if (*piVar5 == -1) {
          if (piVar12 != puVar11 + 3) {
            fn_00177c88(piVar12,0,*(undefined4 *)(*piVar12 + -4),iVar4,*(undefined4 *)(iVar4 + -4),
                         0,*(undefined4 *)(iVar4 + -4));
          }
        }
        else {
          if (piVar5 != &DAT_008f9ce8) {
            *piVar5 = *piVar5 + 1;
          }
          if ((undefined4 *)*piVar12 != &DAT_008f9cf4) {
            piVar5 = (undefined4 *)*piVar12 + -3;
            iVar4 = *piVar5;
            if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0))))
            {
              fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
            }
          }
          *piVar12 = puVar11[3];
        }
        *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar11 + 4);
      }
    }
    else {
      puVar14 = puVar3;
      for (param_3 = param_3 - ((int)puVar3 - (int)param_2) / 0x14; param_3 != 0;
          param_3 = param_3 + -1) {
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *param_4;
          *(undefined2 *)(puVar3 + 1) = *(undefined2 *)(param_4 + 1);
          *(undefined2 *)((int)puVar3 + 6) = *(undefined2 *)((int)param_4 + 6);
          puVar3[2] = param_4[2];
          local_70 = puVar3 + 3;
          iVar4 = param_4[3];
          if (*(int *)(iVar4 + -0xc) == -1) {
            uVar17 = *(uint *)(iVar4 + -4);
            if (0xfffffff1 < uVar17) {
              fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar17,0xfffffff1);
            }
            if (uVar17 == 0) {
              puVar6 = &DAT_008f9ce8;
            }
            else {
              puVar6 = (undefined4 *)fn_00100fc6((uVar17 + 8) * 2,0);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
              }
              puVar6[1] = uVar17;
              puVar8 = (undefined2 *)((int)puVar6 + uVar17 * 2 + 0xc);
              *puVar6 = 0;
              puVar6[2] = uVar17;
              if (puVar8 != (undefined2 *)0x0) {
                *puVar8 = 0;
              }
            }
            *local_70 = (int)(puVar6 + 3);
            fn_00301a9c(puVar6 + 3,param_4[3],uVar17 << 1);
          }
          else {
            *local_70 = iVar4;
            piVar5 = (int *)(iVar4 + -0xc);
            if (piVar5 != &DAT_008f9ce8) {
              *piVar5 = *piVar5 + 1;
            }
          }
          *(undefined1 *)(puVar3 + 4) = *(undefined1 *)(param_4 + 4);
        }
        puVar3 = puVar3 + 5;
      }
      fn_007b59b0(local_30,puVar14,local_74,param_1);
      puVar3 = local_28;
      puVar6 = local_30;
      if (local_30 != puVar14) {
        do {
          piVar12 = puVar6 + 3;
          *puVar6 = *puVar3;
          *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar3 + 1);
          *(undefined2 *)((int)puVar6 + 6) = *(undefined2 *)((int)puVar3 + 6);
          puVar6[2] = puVar3[2];
          iVar4 = puVar3[3];
          piVar5 = (int *)(iVar4 + -0xc);
          if (*piVar5 == -1) {
            if (piVar12 != puVar3 + 3) {
              fn_00177c88(piVar12,0,*(undefined4 *)(*piVar12 + -4),iVar4,
                           *(undefined4 *)(iVar4 + -4),0,*(undefined4 *)(iVar4 + -4));
            }
          }
          else {
            if (piVar5 != &DAT_008f9ce8) {
              *piVar5 = *piVar5 + 1;
            }
            if ((undefined4 *)*piVar12 != &DAT_008f9cf4) {
              piVar5 = (undefined4 *)*piVar12 + -3;
              iVar4 = *piVar5;
              if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))
                 ) {
                fn_001008c4(*piVar12 + -0xc,*(int *)(*piVar12 + -8) + 8,0);
              }
            }
            *piVar12 = puVar3[3];
          }
          puVar11 = puVar6 + 5;
          *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(puVar3 + 4);
          puVar6 = puVar11;
        } while (puVar11 != puVar14);
        return;
      }
    }
  }
  return;
}


