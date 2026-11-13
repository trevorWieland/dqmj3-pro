#include "007a8258_007a8258.h"



/* WARNING: Removing unreachable block (ram,0x007a8360) */
/* WARNING: Removing unreachable block (ram,0x007a8370) */
/* WARNING: Removing unreachable block (ram,0x007a8384) */
/* WARNING: Removing unreachable block (ram,0x007a8404) */

void fn_007a8258(undefined4 *param_1,undefined4 *param_2,int param_3,code *param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [40];
  undefined1 auStack_60 [44];
  undefined4 *puStack_34;
  undefined4 *puStack_30;
  int local_2c;
  code *pcStack_28;
  
  puStack_34 = param_1;
  puStack_30 = param_2;
  local_2c = param_3;
  pcStack_28 = param_4;
  if ((int)param_2 - (int)param_1 < 0x281) {
    return;
  }
  do {
    if (local_2c == 0) {
      iVar1 = (int)param_2 - (int)param_1;
      if (0x4f < iVar1) {
        iVar12 = (iVar1 / 0x28 + -2) / 2;
        while( true ) {
          uVar2 = fn_001c6ba4(&local_b0,param_1 + iVar12 * 10);
          fn_0079f860(param_1,iVar12,iVar1 / 0x28,uVar2,param_4);
          fn_002fedf4(&local_b0);
          if (iVar12 == 0) break;
          iVar12 = iVar12 + -1;
        }
      }
      while (0x28 < iVar1) {
        if (param_1 != param_2) {
          uVar2 = fn_001c6ba4(&local_b0,param_2 + -10);
          fn_003007d0(param_2 + -10,param_1);
          uVar5 = param_1[2];
          uVar7 = param_1[3];
          param_2[-9] = param_1[1];
          param_2[-8] = uVar5;
          param_2[-7] = uVar7;
          uVar5 = param_1[5];
          uVar7 = param_1[6];
          param_2[-6] = param_1[4];
          param_2[-5] = uVar5;
          param_2[-4] = uVar7;
          uVar5 = param_1[8];
          uVar7 = param_1[9];
          param_2[-3] = param_1[7];
          param_2[-2] = uVar5;
          param_2[-1] = uVar7;
          uVar2 = fn_001c6ba4(auStack_60,uVar2);
          fn_0079f860(param_1,0,((int)param_2 + (-0x28 - (int)param_1)) / 0x28,uVar2,param_4);
          fn_002fedf4(auStack_60);
          fn_002fedf4(&local_b0);
        }
        param_2 = param_2 + -10;
        iVar1 = (int)param_2 - (int)param_1;
      }
      return;
    }
    puVar9 = param_2 + -10;
    puVar8 = param_1 + (((int)param_2 - (int)param_1) / 0x50) * 10;
    iVar1 = (*param_4)(param_1,puVar8);
    if (iVar1 == 0) {
      iVar1 = (*param_4)(param_1,puVar9);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(puVar8,puVar9);
        if (iVar1 != 0) goto LAB_007a8524;
      }
      else {
LAB_007a8504:
        puVar8 = param_1;
      }
    }
    else {
      iVar1 = (*param_4)(puVar8);
      if (iVar1 == 0) {
        iVar1 = (*param_4)(param_1,puVar9);
        if (iVar1 == 0) goto LAB_007a8504;
LAB_007a8524:
        puVar8 = puVar9;
      }
    }
    uVar2 = fn_001c6ba4(auStack_88,puVar8);
    puVar8 = param_1;
    puVar9 = param_2;
    while( true ) {
      iVar1 = (*param_4)(puVar8,uVar2);
      while (iVar1 != 0) {
        puVar8 = puVar8 + 10;
        iVar1 = (*param_4)(puVar8,uVar2);
      }
      do {
        puVar10 = puVar9;
        puVar9 = puVar10 + -10;
        iVar1 = (*param_4)(uVar2);
      } while (iVar1 != 0);
      if (puVar9 <= puVar8) break;
      puVar3 = (undefined4 *)*puVar8;
      if (puVar3[-3] == -1) {
        uVar11 = puVar3[-1];
        if (0xfffffff1 < uVar11) {
          fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar11,0xfffffff1);
        }
        puVar3 = &DAT_008f9cf8;
        if (uVar11 != 0) {
          puVar3 = (undefined4 *)fn_00100fc6(uVar11 + 0xe,0);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = 0;
            puVar3[1] = 0;
            puVar3[2] = 0;
          }
          puVar3[1] = uVar11;
          puVar6 = (undefined1 *)((int)puVar3 + uVar11 + 0xc);
          *puVar3 = 0;
          puVar3[2] = uVar11;
          if (puVar6 != (undefined1 *)0x0) {
            *puVar6 = 0;
          }
        }
        local_b0 = puVar3 + 3;
        fn_00301a9c(local_b0,*puVar8,uVar11);
      }
      else {
        piVar4 = puVar3 + -3;
        local_b0 = puVar3;
        if (piVar4 != &DAT_008f9cf8) {
          *piVar4 = *piVar4 + 1;
        }
      }
      local_ac = puVar8[1];
      uStack_a8 = puVar8[2];
      uStack_a4 = puVar8[3];
      local_a0 = puVar8[4];
      uStack_9c = puVar8[5];
      uStack_98 = puVar8[6];
      local_94 = puVar8[7];
      uStack_90 = puVar8[8];
      uStack_8c = puVar8[9];
      fn_003007d0(puVar8,puVar9);
      uVar5 = puVar10[-8];
      uVar7 = puVar10[-7];
      puVar8[1] = puVar10[-9];
      puVar8[2] = uVar5;
      puVar8[3] = uVar7;
      uVar5 = puVar10[-5];
      uVar7 = puVar10[-4];
      puVar8[4] = puVar10[-6];
      puVar8[5] = uVar5;
      puVar8[6] = uVar7;
      uVar5 = puVar10[-2];
      uVar7 = puVar10[-1];
      puVar8[7] = puVar10[-3];
      puVar8[8] = uVar5;
      puVar8[9] = uVar7;
      fn_003007d0(puVar10 + -10,&local_b0);
      puVar10[-9] = local_ac;
      puVar10[-8] = uStack_a8;
      puVar10[-7] = uStack_a4;
      puVar10[-6] = local_a0;
      puVar10[-5] = uStack_9c;
      puVar10[-4] = uStack_98;
      puVar10[-3] = local_94;
      puVar10[-2] = uStack_90;
      puVar10[-1] = uStack_8c;
      puVar9 = puVar10 + -10;
      if (local_b0 != (undefined4 *)&DAT_008f9d04) {
        piVar4 = local_b0 + -3;
        iVar1 = *piVar4;
        if ((iVar1 == -1) || ((piVar4 != &DAT_008f9cf8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_b0 + -3,local_b0[-2] + 0xe,0);
        }
      }
      puVar8 = puVar8 + 10;
    }
    fn_002fedf4(auStack_88);
    local_2c = local_2c / 2;
    fn_007a8258(puVar8,param_2,local_2c,param_4);
    param_2 = puVar8;
    if ((int)puVar8 - (int)param_1 < 0x281) {
      return;
    }
  } while( true );
}


