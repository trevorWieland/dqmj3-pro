#include "00345b18_0034632c.h"



void fn_0034632c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_0082522c;
  puVar1[10] = 0;
  return;
}



void fn_0034623c(int param_1)

{
  uint uVar1;
  uint local_3c;
  uint local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x34))(*(int **)(param_1 + 0x28),param_1 + 4);
  (**(code **)(**(int **)(param_1 + 0x28) + 0x38))();
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_30,8,2);
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  fn_0078cb6c(&local_3c,8,0,0);
  fn_002e3d70(param_1,&local_3c,&local_30,8,(int)*(char *)(param_1 + 0x24));
  fn_002e4118(param_1,&local_3c);
  uVar1 = local_3c;
  if (local_38 < local_3c) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != local_38);
  }
  fn_001008c4(local_3c,(int)(local_34 - local_3c) >> 3,0);
  return;
}



void fn_003461f4(int param_1)

{
  fn_002e40d8();
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}



void fn_00345db8(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7,undefined1 param_8,undefined4 param_9,
                 undefined4 param_10)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_88;
  uint local_84;
  uint local_80;
  undefined4 local_7c;
  uint local_78;
  uint uStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  puVar10 = (uint *)(param_1 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_5 != puVar10) {
    puVar1 = (undefined4 *)*param_5;
    puVar7 = (undefined4 *)param_5[1];
    puVar5 = (undefined4 *)*puVar10;
    uVar13 = (int)puVar7 - (int)puVar1;
    uVar12 = (int)uVar13 >> 2;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar5 >> 2) < uVar12) {
      local_88 = uVar12;
      uVar13 = *(int *)(param_1 + 8) - (int)puVar5 >> 2;
      local_84 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_84 < uVar13 + 0x20) {
        local_84 = uVar13 + 0x20;
      }
      puVar8 = &local_88;
      if (uVar12 < local_84) {
        puVar8 = &local_84;
      }
      uVar12 = *puVar8;
      puVar7 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
      puVar9 = (undefined4 *)param_5[1];
      puVar5 = puVar7;
      for (puVar1 = (undefined4 *)*param_5; puVar1 != puVar9; puVar1 = puVar1 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar1;
        }
        puVar5 = puVar5 + 1;
      }
      uVar2 = *puVar10;
      uVar13 = uVar2;
      if (*(uint *)(param_1 + 8) <= uVar2) {
        for (; uVar13 != *(uint *)(param_1 + 8); uVar13 = uVar13 + 4) {
        }
      }
      fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
      *puVar10 = (uint)puVar7;
      *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + (int)puVar7;
      *(undefined4 **)(param_1 + 0xc) = puVar7 + uVar12;
    }
    else {
      uVar2 = *(int *)(param_1 + 8) - (int)puVar5 >> 2;
      if (uVar2 < uVar12) {
        puVar7 = puVar1 + uVar2;
        if (puVar1 < puVar7) {
          if (0 < (int)puVar7 - (int)puVar1) {
            puVar9 = puVar5 + -1;
            puVar11 = puVar1 + -1;
            if (((int)puVar7 - (int)puVar1) * 0x20000000 < 0) {
              *puVar5 = *puVar1;
              puVar9 = puVar5;
              puVar11 = puVar1;
            }
            for (iVar3 = (int)puVar7 - (int)puVar1 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar9[1] = puVar11[1];
              puVar1 = puVar11 + 2;
              puVar11 = puVar11 + 2;
              puVar9[2] = *puVar1;
              puVar9 = puVar9 + 2;
            }
          }
        }
        else {
          for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
            *puVar5 = *puVar1;
            puVar5 = puVar5 + 1;
          }
        }
        *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + *puVar10;
        puVar7 = (undefined4 *)param_5[1];
        puVar5 = (undefined4 *)(*puVar10 + uVar2 * 4);
        for (puVar1 = (undefined4 *)(*param_5 + uVar2 * 4); puVar1 != puVar7; puVar1 = puVar1 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar1;
          }
          puVar5 = puVar5 + 1;
        }
      }
      else {
        if (puVar1 < puVar7) {
          if (0 < (int)uVar13) {
            puVar7 = puVar5 + -1;
            puVar9 = puVar1 + -1;
            if ((int)(uVar13 * 0x20000000) < 0) {
              *puVar5 = *puVar1;
              puVar7 = puVar5;
              puVar9 = puVar1;
            }
            for (iVar3 = (int)uVar13 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar7[1] = puVar9[1];
              puVar1 = puVar9 + 2;
              puVar9 = puVar9 + 2;
              puVar7[2] = *puVar1;
              puVar7 = puVar7 + 2;
            }
            puVar5 = (undefined4 *)((int)puVar5 + (uVar13 & 0xfffffffc));
          }
        }
        else {
          for (; puVar1 != puVar7; puVar1 = puVar1 + 1) {
            *puVar5 = *puVar1;
            puVar5 = puVar5 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar5) {
          do {
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(undefined4 **)(param_1 + 8));
        }
        iVar3 = (param_5[1] - *param_5 & 0xfffffffc) + *puVar10;
        *(int *)(param_1 + 8) = iVar3;
        *(int *)(param_1 + 0xc) = iVar3;
      }
    }
  }
  iVar3 = fn_00145b00(0x4c,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    local_84 = param_1 + 4;
    local_88 = param_4;
    local_80 = param_9;
    local_7c = param_10;
    piVar4 = (int *)fn_003477b8(iVar3,*(undefined4 *)(param_1 + 0x14),local_30,1);
  }
  piVar6 = *(int **)(param_1 + 0x28);
  if (piVar6 != piVar4) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x28) = piVar4;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  fn_002e3f6c(&local_78);
  local_63 = 0;
  local_68 = 4;
  local_64 = param_8;
  local_6c = 2;
  local_62 = (undefined1)param_7;
  fn_0078cb6c(&local_78,8,0,0);
  local_60 = 0;
  local_5c = 0;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_88 = 2;
  fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_60,8);
  local_88 = param_7;
  fn_002e3d70(param_1,&local_78,&local_60,8);
  local_80 = param_7 ^ 1;
  local_7c = 0;
  local_88 = 8;
  local_84 = 2;
  fn_002e3c08(param_1,&local_78,local_2c,param_6);
  uVar12 = local_78;
  if (uStack_74 < local_78) {
    do {
      uVar12 = uVar12 + 8;
    } while (uVar12 != uStack_74);
  }
  fn_001008c4(local_78,(int)(local_70 - local_78) >> 3,0);
  return;
}



void fn_00345d08(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008251f8;
  fn_002e40d8(param_1);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x18))();
    if ((int *)param_1[10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[10] + 4))();
      param_1[10] = 0;
    }
  }
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 0x18))();
    if ((int *)param_1[0xb] != (int *)0x0) {
      (**(code **)(*(int *)param_1[0xb] + 4))();
      param_1[0xb] = 0;
    }
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 4))();
  }
  fn_002e4388(param_1);
  return;
}



void fn_00345b98(int param_1)

{
  uint uVar1;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (*(char *)(param_1 + 0x30) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))(*(int **)(param_1 + 0x2c),param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))();
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x2c),&local_20,4,1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x34))(*(int **)(param_1 + 0x28),param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x38))();
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_20,4,1);
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0078cb6c(&local_2c,4,0,0);
  fn_002e3d70(param_1,&local_2c,&local_20,4,(int)*(char *)(param_1 + 0x24));
  fn_002e4118(param_1,&local_2c);
  uVar1 = local_2c;
  if (local_28 < local_2c) {
    do {
      uVar1 = uVar1 + 8;
    } while (uVar1 != local_28);
  }
  fn_001008c4(local_2c,(int)(local_24 - local_2c) >> 3,0);
  return;
}



void fn_00345b18(int param_1)

{
  fn_002e40d8();
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x18))();
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x18))();
    if (*(int **)(param_1 + 0x2c) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x2c) + 4))();
      *(undefined4 *)(param_1 + 0x2c) = 0;
    }
  }
  return;
}


