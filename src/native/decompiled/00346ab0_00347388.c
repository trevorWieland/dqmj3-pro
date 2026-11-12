#include "00346ab0_00347388.h"



void fn_00347388(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),0);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18),1);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x5c))();
  local_10 = 0x221e;
  fn_00190d50(*(undefined4 *)(param_1 + 0x1c),&local_10);
  fn_00190d50(*(undefined4 *)(param_1 + 0x20),&local_10);
  return;
}



void fn_003472ac(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined1 auStack_20 [12];
  
  if (param_3 < 1) {
    return;
  }
  iVar1 = fn_00300f74(param_2 * 100,param_3);
  *(int *)(param_1 + 0x24) = iVar1;
  if (100 < iVar1) {
    iVar1 = 100;
  }
  *(int *)(param_1 + 0x24) = iVar1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),1);
  (**(code **)(**(int **)(param_1 + 0x18) + 0x10))(*(int **)(param_1 + 0x18),0);
  VectorSignedToFloat(*(undefined4 *)(param_1 + 0x24),(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x5c))();
  uVar2 = *(undefined4 *)(param_1 + 0x1c);
  fn_0018a618(auStack_20,4,3,&DAT_00347380,param_2);
  fn_00190d50(uVar2,auStack_20);
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  fn_0018a618(auStack_20,4,3,&DAT_00347380,param_3);
  fn_00190d50(uVar2,auStack_20);
  return;
}



void fn_003470e8(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008252a0;
  fn_002e40d8(param_1);
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 0x18))();
    if ((int *)param_1[0xd] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xd] + 4))();
      param_1[0xd] = 0;
    }
  }
  fn_0036aa40(param_1);
  fn_002feef8();
  return;
}



void fn_003470c8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036aa18();
  *puVar1 = &PTR_FUN_008252a0;
  puVar1[0xd] = 0;
  return;
}



void fn_00346fb4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint local_6c;
  uint local_68;
  int local_64;
  undefined1 auStack_60 [84];
  
  fn_00301f50(auStack_60,0x50);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x34))(*(int **)(param_1 + 0x34),param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x34) + 0x38))();
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x34),auStack_60,0x14,5);
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  fn_0078cb6c(&local_6c,0x14,0,0);
  fn_002e3d70(param_1,&local_6c,auStack_60,0x14,1);
  fn_002e4118(param_1,&local_6c);
  uVar1 = fn_00300f74((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + 0x13,0x14);
  *(undefined4 *)(param_1 + 0x2c) = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x1c) = uVar1;
  fn_0036a9f8(param_1,param_2);
  uVar2 = local_6c;
  if (local_68 < local_6c) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != local_68);
  }
  fn_001008c4(local_6c,(int)(local_64 - local_6c) >> 3,0);
  return;
}



bool fn_00346f8c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0036a9c4();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return iVar1 != 0;
}



bool fn_00346f64(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0036a98c();
  if (iVar1 != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x24) = *(undefined4 *)(param_1 + 0x28);
  }
  return iVar1 != 0;
}



void fn_00346f1c(int param_1)

{
  fn_002e40d8();
  if (*(int **)(param_1 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x34) + 0x18))();
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x34) + 4))();
      *(undefined4 *)(param_1 + 0x34) = 0;
    }
  }
  return;
}



void fn_00346ed0(int param_1,undefined4 param_2)

{
  undefined8 uVar1;
  
  uVar1 = fn_00300f74(param_2,*(undefined4 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00346efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x34) + 0x30))
            (*(int **)(param_1 + 0x34),(int)((ulonglong)uVar1 >> 0x20),(int)uVar1);
  return;
}



void fn_00346ab0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4,
                 uint *param_5,undefined4 param_6,uint param_7,undefined1 param_8,undefined4 param_9
                 ,undefined4 param_10,undefined4 param_11)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined1 **ppuVar8;
  int *piVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined8 uVar16;
  undefined1 *local_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint local_b0;
  uint uStack_ac;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined1 local_9b;
  undefined1 local_9a;
  undefined1 auStack_98 [100];
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *puStack_28;
  
  puVar12 = (uint *)(param_1 + 4);
  uVar16 = CONCAT44(param_6,param_10);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  puStack_28 = param_4;
  if (param_5 != puVar12) {
    puVar2 = (undefined4 *)param_5[1];
    puVar10 = (undefined4 *)*param_5;
    puVar7 = (undefined4 *)*puVar12;
    uVar13 = (int)puVar2 - (int)puVar10;
    puVar15 = (undefined1 *)((int)uVar13 >> 2);
    if ((undefined1 *)(*(int *)(param_1 + 0xc) - (int)puVar7 >> 2) < puVar15) {
      local_d0 = puVar15;
      uVar13 = *(int *)(param_1 + 8) - (int)puVar7 >> 2;
      local_cc = (undefined1 *)(uVar13 + (uVar13 >> 1) + (uVar13 >> 3));
      if (local_cc < (undefined1 *)(uVar13 + 0x20)) {
        local_cc = (undefined1 *)(uVar13 + 0x20);
      }
      ppuVar8 = &local_cc;
      if (local_cc <= puVar15) {
        ppuVar8 = &local_d0;
      }
      puVar15 = *ppuVar8;
      puVar2 = (undefined4 *)fn_00100fc6((int)puVar15 << 2,0);
      puVar11 = (undefined4 *)param_5[1];
      puVar7 = puVar2;
      for (puVar10 = (undefined4 *)*param_5; puVar10 != puVar11; puVar10 = puVar10 + 1) {
        if (puVar7 != (undefined4 *)0x0) {
          *puVar7 = *puVar10;
        }
        puVar7 = puVar7 + 1;
      }
      uVar3 = *puVar12;
      uVar13 = uVar3;
      if (*(uint *)(param_1 + 8) < uVar3) {
        do {
          uVar13 = uVar13 + 4;
        } while (uVar13 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xc) - uVar3) >> 2,0);
      *puVar12 = (uint)puVar2;
      *(undefined4 **)(param_1 + 8) = puVar2 + ((int)(param_5[1] - *param_5) >> 2);
      *(undefined4 **)(param_1 + 0xc) = puVar2 + (int)puVar15;
    }
    else {
      puVar1 = (undefined1 *)(*(int *)(param_1 + 8) - (int)puVar7 >> 2);
      if (puVar1 < puVar15) {
        puVar2 = puVar10 + (int)puVar1;
        if (puVar10 < puVar2) {
          if (0 < (int)puVar2 - (int)puVar10) {
            puVar11 = puVar7 + -1;
            puVar14 = puVar10 + -1;
            if (((int)puVar2 - (int)puVar10) * 0x20000000 < 0) {
              *puVar7 = *puVar10;
              puVar11 = puVar7;
              puVar14 = puVar10;
            }
            for (iVar5 = (int)puVar2 - (int)puVar10 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar11[1] = puVar14[1];
              puVar10 = puVar14 + 2;
              puVar14 = puVar14 + 2;
              puVar11[2] = *puVar10;
              puVar11 = puVar11 + 2;
            }
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        *(uint *)(param_1 + 8) = *puVar12 + ((int)(param_5[1] - *param_5) >> 2) * 4;
        puVar2 = (undefined4 *)param_5[1];
        puVar7 = (undefined4 *)(*puVar12 + (int)puVar1 * 4);
        for (puVar10 = (undefined4 *)(*param_5 + (int)puVar1 * 4); puVar10 != puVar2;
            puVar10 = puVar10 + 1) {
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = *puVar10;
          }
          puVar7 = puVar7 + 1;
        }
      }
      else {
        if (puVar10 < puVar2) {
          if (0 < (int)uVar13) {
            puVar2 = puVar7 + -1;
            puVar11 = puVar10 + -1;
            if ((int)(uVar13 * 0x20000000) < 0) {
              *puVar7 = *puVar10;
              puVar2 = puVar7;
              puVar11 = puVar10;
            }
            for (iVar5 = (int)uVar13 >> 3; iVar5 != 0; iVar5 = iVar5 + -1) {
              puVar2[1] = puVar11[1];
              puVar10 = puVar11 + 2;
              puVar11 = puVar11 + 2;
              puVar2[2] = *puVar10;
              puVar2 = puVar2 + 2;
            }
            puVar7 = (undefined4 *)((int)puVar7 + (uVar13 & 0xfffffffc));
          }
        }
        else {
          for (; puVar10 != puVar2; puVar10 = puVar10 + 1) {
            *puVar7 = *puVar10;
            puVar7 = puVar7 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar7) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != *(undefined4 **)(param_1 + 8));
        }
        iVar5 = *puVar12 + ((int)(param_5[1] - *param_5) >> 2) * 4;
        *(int *)(param_1 + 8) = iVar5;
        *(int *)(param_1 + 0xc) = iVar5;
      }
    }
  }
  uVar4 = fn_00300f74((*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2) + 0x13,0x14);
  iVar5 = fn_00145b00(0x74,&DAT_00812c8c);
  piVar6 = (int *)0x0;
  if (iVar5 != 0) {
    local_c4 = 0;
    local_c0 = (undefined4)uVar16;
    local_cc = (undefined1 *)(param_1 + 4);
    local_d0 = param_4;
    local_c8 = uVar4;
    local_bc = param_9;
    local_b8 = param_11;
    piVar6 = (int *)fn_003484a8(iVar5,*(undefined4 *)(param_1 + 0x14),local_30,1);
  }
  puVar15 = (undefined1 *)((ulonglong)uVar16 >> 0x20);
  piVar9 = *(int **)(param_1 + 0x34);
  if (piVar9 != piVar6) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0x34) = piVar6;
  }
  (**(code **)(**(int **)(param_1 + 0x34) + 0x10))();
  fn_002e3f6c(&local_b0);
  local_9b = 0;
  local_a0 = 4;
  local_9c = param_8;
  local_a4 = 5;
  local_9a = (undefined1)param_7;
  fn_0078cb6c(&local_b0,0x14,0,0);
  fn_00301f50(auStack_98,0x50);
  local_c4 = 5;
  local_b8 = param_7 ^ 1;
  local_d0 = auStack_98;
  local_c8 = 0x14;
  local_cc = puVar15;
  local_c0 = uVar4;
  local_bc = param_9;
  fn_0036a8a4(param_1,*(undefined4 *)(param_1 + 0x34),local_2c,&local_b0);
  uVar13 = local_b0;
  if (uStack_ac < local_b0) {
    do {
      uVar13 = uVar13 + 8;
    } while (uVar13 != uStack_ac);
  }
  fn_001008c4(local_b0,(int)(local_a8 - local_b0) >> 3,0);
  return;
}


