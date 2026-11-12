#include "0034634c_00346a48.h"



void fn_00346a48(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00825260;
  fn_002e40d8(param_1);
  if ((int *)param_1[0xe] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xe] + 0x18))();
    if ((int *)param_1[0xe] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xe] + 4))();
      param_1[0xe] = 0;
    }
  }
  fn_0036aa40(param_1);
  fn_002feef8();
  return;
}



void fn_00346a20(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036aa18();
  *puVar1 = &PTR_FUN_00825260;
  puVar1[0xd] = 0x1f;
  puVar1[0xe] = 0;
  return;
}



void fn_003468dc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_4c;
  uint local_48;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x5c) = *(undefined4 *)(param_1 + 0x34);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x34))(*(int **)(param_1 + 0x38),param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x38) + 0x38))();
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x38),&local_40,0xc,3);
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  fn_0078cb6c(&local_4c,0xc,0,0);
  fn_002e3d70(param_1,&local_4c,&local_40,0xc,1);
  fn_002e4118(param_1,&local_4c);
  uVar1 = fn_00300f74((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + 0xb,0xc);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x1c) = uVar1;
  fn_0036a9f8(param_1,param_2);
  uVar2 = local_4c;
  if (local_48 < local_4c) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != local_48);
  }
  fn_001008c4(local_4c,(int)(local_44 - local_4c) >> 3,0);
  return;
}



bool fn_003468b4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0036a9c4();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return iVar1 != 0;
}



bool fn_0034688c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0036a98c();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x38) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return iVar1 != 0;
}



void fn_00346844(int param_1)

{
  fn_002e40d8();
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 0x18))();
    if (*(int **)(param_1 + 0x38) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x38) + 4))();
      *(undefined4 *)(param_1 + 0x38) = 0;
    }
  }
  return;
}



void fn_003463b4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 uint *param_5,undefined4 param_6,uint param_7,undefined1 param_8,undefined4 param_9
                 ,undefined4 param_10,undefined4 param_11)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 **ppuVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined8 uVar15;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  uint local_90;
  uint uStack_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  puVar11 = (uint *)(param_1 + 4);
  uVar15 = CONCAT44(param_6,param_10);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if (param_5 != puVar11) {
    puVar1 = (undefined4 *)param_5[1];
    puVar10 = (undefined4 *)*param_5;
    puVar6 = (undefined4 *)*puVar11;
    uVar12 = (int)puVar1 - (int)puVar10;
    puVar8 = (undefined4 *)((int)uVar12 >> 2);
    if ((undefined4 *)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 2) < puVar8) {
      local_b0 = puVar8;
      uVar12 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      local_ac = (undefined4 *)(uVar12 + (uVar12 >> 1) + (uVar12 >> 3));
      if (local_ac < (undefined4 *)(uVar12 + 0x20)) {
        local_ac = (undefined4 *)(uVar12 + 0x20);
      }
      ppuVar7 = &local_ac;
      if (local_ac <= puVar8) {
        ppuVar7 = &local_b0;
      }
      puVar14 = *ppuVar7;
      puVar6 = (undefined4 *)fn_00100fc6((int)puVar14 << 2,0);
      puVar1 = (undefined4 *)param_5[1];
      puVar10 = puVar6;
      for (puVar8 = (undefined4 *)*param_5; puVar8 != puVar1; puVar8 = puVar8 + 1) {
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = *puVar8;
        }
        puVar10 = puVar10 + 1;
      }
      uVar2 = *puVar11;
      uVar12 = uVar2;
      if (*(uint *)(param_1 + 8) < uVar2) {
        do {
          uVar12 = uVar12 + 4;
        } while (uVar12 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
      *puVar11 = (uint)puVar6;
      *(undefined4 **)(param_1 + 8) = puVar6 + ((int)(param_5[1] - *param_5) >> 2);
      *(undefined4 **)(param_1 + 0xc) = puVar6 + (int)puVar14;
    }
    else {
      puVar14 = (undefined4 *)(*(int *)(param_1 + 8) - (int)puVar6 >> 2);
      if (puVar14 < puVar8) {
        puVar8 = puVar10 + (int)puVar14;
        if (puVar10 < puVar8) {
          if (0 < (int)puVar8 - (int)puVar10) {
            puVar1 = puVar6 + -1;
            puVar13 = puVar10 + -1;
            if (((int)puVar8 - (int)puVar10) * 0x20000000 < 0) {
              *puVar6 = *puVar10;
              puVar1 = puVar6;
              puVar13 = puVar10;
            }
            for (iVar4 = (int)puVar8 - (int)puVar10 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar1[1] = puVar13[1];
              puVar8 = puVar13 + 2;
              puVar13 = puVar13 + 2;
              puVar1[2] = *puVar8;
              puVar1 = puVar1 + 2;
            }
          }
        }
        else {
          for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
            *puVar6 = *puVar10;
            puVar6 = puVar6 + 1;
          }
        }
        *(uint *)(param_1 + 8) = *puVar11 + ((int)(param_5[1] - *param_5) >> 2) * 4;
        puVar6 = (undefined4 *)param_5[1];
        puVar10 = (undefined4 *)(*puVar11 + (int)puVar14 * 4);
        for (puVar8 = (undefined4 *)(*param_5 + (int)puVar14 * 4); puVar8 != puVar6;
            puVar8 = puVar8 + 1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = *puVar8;
          }
          puVar10 = puVar10 + 1;
        }
      }
      else {
        if (puVar10 < puVar1) {
          if (0 < (int)uVar12) {
            puVar8 = puVar6 + -1;
            puVar1 = puVar10 + -1;
            if ((int)(uVar12 * 0x20000000) < 0) {
              *puVar6 = *puVar10;
              puVar8 = puVar6;
              puVar1 = puVar10;
            }
            for (iVar4 = (int)uVar12 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar8[1] = puVar1[1];
              puVar10 = puVar1 + 2;
              puVar1 = puVar1 + 2;
              puVar8[2] = *puVar10;
              puVar8 = puVar8 + 2;
            }
            puVar6 = (undefined4 *)((int)puVar6 + (uVar12 & 0xfffffffc));
          }
        }
        else {
          for (; puVar10 != puVar1; puVar10 = puVar10 + 1) {
            *puVar6 = *puVar10;
            puVar6 = puVar6 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar6) {
          do {
            puVar6 = puVar6 + 1;
          } while (puVar6 != *(undefined4 **)(param_1 + 8));
        }
        iVar4 = *puVar11 + ((int)(param_5[1] - *param_5) >> 2) * 4;
        *(int *)(param_1 + 8) = iVar4;
        *(int *)(param_1 + 0xc) = iVar4;
      }
    }
  }
  uVar3 = fn_00300f74((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + 0xb,0xc);
  iVar4 = fn_00145b00(0x60,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    local_a4 = 0;
    local_a0 = (undefined4)uVar15;
    local_ac = (undefined4 *)(param_1 + 4);
    local_b0 = param_4;
    local_a8 = uVar3;
    local_9c = param_9;
    local_98 = param_11;
    piVar5 = (int *)fn_00347d78(iVar4,*(undefined4 *)(param_1 + 0x14),local_30,1);
  }
  puVar8 = (undefined4 *)((ulonglong)uVar15 >> 0x20);
  piVar9 = *(int **)(param_1 + 0x38);
  if (piVar9 != piVar5) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0x38) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x38) + 0x10))();
  fn_002e3f6c(&local_90);
  local_7b = 0;
  local_80 = 4;
  local_7c = param_8;
  local_84 = 3;
  local_7a = (undefined1)param_7;
  fn_0078cb6c(&local_90,0xc,0,0);
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_a4 = 3;
  local_98 = param_7 ^ 1;
  local_b0 = &local_78;
  local_a8 = 0xc;
  local_ac = puVar8;
  local_a0 = uVar3;
  local_9c = param_9;
  fn_0036a8a4(param_1,*(undefined4 *)(param_1 + 0x38),local_2c,&local_90);
  uVar12 = local_90;
  if (uStack_8c < local_90) {
    do {
      uVar12 = uVar12 + 8;
    } while (uVar12 != uStack_8c);
  }
  fn_001008c4(local_90,(int)(local_88 - local_90) >> 3,0);
  return;
}



void fn_0034634c(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082522c;
  fn_002e40d8(param_1);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x18))();
    if ((int *)param_1[10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[10] + 4))();
      param_1[10] = 0;
    }
  }
  fn_002e4388(param_1);
  fn_002feef8();
  return;
}


