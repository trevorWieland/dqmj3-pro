#include "00208778_00208d38.h"



void fn_00208d38(undefined4 param_1,int param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 uVar3;
  undefined4 local_18;
  
  if (param_3 == 0) {
    uVar3 = 0x22;
    if (param_4 != 0) {
      uVar3 = 0x21;
    }
  }
  else {
    uVar3 = 0x20;
    if (param_4 != 0) {
      uVar3 = 0x1f;
    }
  }
  *(undefined1 *)(param_2 + 4) = uVar3;
  local_18 = param_4;
  if (param_3 == 0) {
    iVar2 = fn_00174834(DAT_008977e4);
    uVar3 = *(undefined1 *)(iVar2 + 0x185ef3);
    iVar2 = fn_00174834(DAT_008977e4);
    uVar1 = *(undefined1 *)(iVar2 + 0x185ef4);
  }
  else {
    iVar2 = fn_00174834(DAT_008977e4);
    uVar3 = *(undefined1 *)(iVar2 + 0x185ef1);
    iVar2 = fn_00174834(DAT_008977e4);
    uVar1 = *(undefined1 *)(iVar2 + 0x185ef2);
  }
  iVar2 = local_18;
  local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,uVar3);
  if (param_4 == 0) {
    local_18 = (local_18 & ~((unsigned int)0xffff << 16)) | (((unsigned int)(SUB42(iVar2,2)) & 0xffff) << 16);
    local_18 = (local_18 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(uVar1,uVar3)) & 0xffff);
  }
  fn_002d658c(param_2,&local_18);
  return;
}



void fn_00208ca4(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    uVar2 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
    while (uVar2 = uVar2 - 1, -1 < (int)uVar2) {
      uVar3 = *(int *)(param_1 + 0x48) - *(int *)(param_1 + 0x44) >> 2;
      if (uVar3 <= uVar2) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar2,uVar3);
      }
      fn_0023d3e8(DAT_008977e4,*(undefined4 *)(*(int *)(param_1 + 0x44) + uVar2 * 4));
    }
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x44);
  uVar2 = *(uint *)(param_1 + 0x48);
  if (uVar3 != uVar2) {
    uVar1 = uVar3;
    if (uVar2 <= uVar3) {
      do {
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar2);
    }
    *(uint *)(param_1 + 0x48) = uVar2 - (uVar2 - uVar3 & 0xfffffffc);
  }
  return;
}



void fn_00208ca0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    piVar2 = (int *)**(int **)(param_1 + 0x60);
    if (piVar2 != *(int **)(param_1 + 0x60)) {
      do {
        (**(code **)(**(int **)(param_1 + 0x40) + 0xc))(*(int **)(param_1 + 0x40),piVar2[2]);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(param_1 + 0x60));
    }
    piVar3 = *(int **)(param_1 + 0x60);
    piVar2 = (int *)*piVar3;
    while (piVar1 = piVar2, piVar1 != piVar3) {
      piVar2 = *(int **)(param_1 + 0x60);
      if (piVar1 != *(int **)(param_1 + 0x60)) {
        piVar2 = (int *)*piVar1;
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
        *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -1;
        *piVar1 = *(int *)(param_1 + 0x54);
        *(int **)(param_1 + 0x54) = piVar1;
      }
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00208c58) */

int fn_00208778(undefined4 param_1,byte *param_2,int param_3)

{
  short sVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  int local_160 [2];
  byte *local_158;
  int local_154;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  uint local_138;
  int local_134;
  uint local_12c [15];
  undefined1 auStack_f0 [96];
  uint auStack_90 [16];
  int local_50;
  uint local_4c;
  byte *local_38;
  undefined4 local_30;
  byte *local_2c;
  int iStack_28;
  
  local_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  fn_00101a1c(auStack_90,&LAB_001ad798,0xc,5);
  fn_00101a1c(local_12c,&LAB_001ad798,0xc,5);
  local_13c = 0;
  local_138 = 0;
  local_134 = 0;
  local_50 = 0;
  if (param_3 < (int)(uint)*local_2c) {
    do {
      pbVar2 = local_2c;
      pbVar8 = local_2c + param_3 * 0x266c + 4;
      if (*pbVar8 != 3) break;
      local_4c = (uint)local_2c[param_3 * 0x266c + 5];
      iVar3 = fn_00660d20((int)*(short *)(local_2c + param_3 * 0x266c + 0x22));
      if (iVar3 != 2) break;
      sVar1 = *(short *)(pbVar2 + param_3 * 0x266c + 0x22);
      iVar3 = 5;
      if (sVar1 == 8) {
        iVar3 = 0;
      }
      else if (sVar1 == 9) {
        iVar3 = 1;
      }
      else if (sVar1 == 10) {
        iVar3 = 2;
      }
      else if (sVar1 == 0xb) {
        iVar3 = 3;
      }
      else if (sVar1 == 0xc) {
        iVar3 = 4;
      }
      local_158 = pbVar8;
      local_154 = param_3;
      if (iVar3 == 5) {
        puVar5 = &local_13c;
LAB_00208c44:
        fn_00796494(puVar5,&local_158);
      }
      else {
        bVar10 = pbVar2[param_3 * 0x266c + 0x24];
        iVar4 = fn_00164a34(local_30,bVar10);
        if (iVar4 != 0) {
          iVar4 = (int)(char)bVar10;
          uVar6 = iVar4 - 0x10;
          bVar11 = 3 < uVar6;
          if (bVar11) {
            uVar6 = iVar4 - 0x18;
          }
          if ((!bVar11 || uVar6 < 4) || (iVar4 == 0x20 || iVar4 == 0x22)) {
            puVar5 = auStack_90 + iVar3 * 3;
            goto LAB_00208c44;
          }
        }
        fn_00796494(local_12c + iVar3 * 3,&local_158);
      }
      param_3 = param_3 + 1;
      local_50 = local_50 + 1;
    } while (param_3 < (int)(uint)*local_2c);
  }
  iVar3 = 0;
  local_38 = local_2c + 0x180470;
  do {
    bVar10 = local_38[0x13];
    iVar4 = 0;
    do {
      bVar10 = bVar10 ^ 1;
      if (bVar10 == 0) {
        puVar5 = local_12c + iVar3 * 3;
      }
      else {
        puVar5 = auStack_90 + iVar3 * 3;
      }
      if ((int)(puVar5[1] - *puVar5) >> 3 != 0) {
        fn_002d6598(auStack_f0,local_4c);
        if ((int)(puVar5[1] - *puVar5) >> 3 == 1) {
          fn_002d6388(auStack_f0,*(undefined4 *)*puVar5);
        }
        else {
          local_160[0] = 0;
          local_160[1] = 0;
          local_158 = (byte *)0x0;
          local_154 = 0;
          local_150 = 0;
          local_14c = 0;
          local_148 = 0;
          local_144 = 0;
          local_140 = 0;
          uVar6 = 0;
          if ((int)(puVar5[1] - *puVar5) >> 3 != 0) {
            do {
              uVar9 = (int)(puVar5[1] - *puVar5) >> 3;
              if (uVar9 <= uVar6) {
                fn_002ff628(9,&DAT_008c7607,&DAT_008c7607,uVar6,uVar9);
              }
              uVar9 = uVar6 + 1;
              local_160[uVar6 + 1] = *(int *)(*puVar5 + uVar6 * 8) + 4;
              local_160[0] = local_160[0] + 1;
              uVar6 = uVar9;
            } while (uVar9 < (uint)((int)(puVar5[1] - *puVar5) >> 3));
          }
          fn_002d6440(auStack_f0,local_160);
        }
        fn_00209634(local_30,auStack_f0);
        uVar6 = *puVar5;
        uVar9 = 0;
        if ((int)(puVar5[1] - uVar6) >> 3 != 0) {
          do {
            uVar6 = (int)(puVar5[1] - uVar6) >> 3;
            if (uVar6 <= uVar9) {
              fn_002ff628(9,&DAT_008c7607,&DAT_008c7607,uVar9,uVar6);
            }
            uVar7 = *(undefined4 *)(*puVar5 + uVar9 * 8 + 4);
            fn_002062d8(local_30,local_2c,uVar7,uVar7);
            uVar6 = *puVar5;
            uVar9 = uVar9 + 1;
          } while (uVar9 < (uint)((int)(puVar5[1] - uVar6) >> 3));
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  if ((int)(local_138 - local_13c) >> 3 != 0) {
    uVar6 = 0;
    do {
      uVar9 = (int)(local_138 - local_13c) >> 3;
      if (uVar9 <= uVar6) {
        fn_002ff628(9,&DAT_008c763b,&DAT_008c763b,uVar6,uVar9);
      }
      fn_002d6598(auStack_f0,*(undefined1 *)(*(int *)(local_13c + uVar6 * 8) + 1));
      uVar9 = (int)(local_138 - local_13c) >> 3;
      if (uVar9 <= uVar6) {
        fn_002ff628(9,&DAT_008c763b,&DAT_008c763b,uVar6,uVar9);
      }
      fn_002d6388(auStack_f0,*(undefined4 *)(local_13c + uVar6 * 8));
      fn_00209634(local_30,auStack_f0);
      uVar9 = (int)(local_138 - local_13c) >> 3;
      if (uVar9 <= uVar6) {
        fn_002ff628(9,&DAT_008c763b,&DAT_008c763b,uVar6,uVar9);
      }
      uVar7 = *(undefined4 *)(local_13c + uVar6 * 8 + 4);
      fn_002062d8(local_30,local_2c,uVar7,uVar7);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((int)(local_138 - local_13c) >> 3));
  }
  iVar3 = local_50;
  uVar6 = local_13c;
  if (local_138 < local_13c) {
    do {
      uVar6 = uVar6 + 8;
    } while (uVar6 != local_138);
  }
  fn_001008c4(local_13c,(int)(local_134 - local_13c) >> 3,0);
  fn_00100414(local_12c,fn_00796694,0xc,5);
  fn_00100414(auStack_90,fn_00796694,0xc,5);
  return iVar3;
}


