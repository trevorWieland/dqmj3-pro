#include "00393360_00393a80.h"



void fn_00393a80(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082b554;
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



void fn_00393a3c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002e42dc();
  *puVar1 = &PTR_FUN_0082b554;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0xff;
  puVar1[0xd] = 0x1f;
  return;
}



void fn_00393904(int param_1)

{
  uint uVar1;
  uint local_2c;
  uint local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x2c) = *(undefined4 *)(param_1 + 0x34);
  if (*(char *)(param_1 + 0x30) == '\0') {
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x34))(*(int **)(param_1 + 0x2c),param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x38))();
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x2c),&local_20,3,1);
  }
  else {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x34))(*(int **)(param_1 + 0x28),param_1 + 4);
    (**(code **)(**(int **)(param_1 + 0x28) + 0x38))();
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_20,3,1);
  }
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_0078cb6c(&local_2c,3,0,0);
  fn_002e3d70(param_1,&local_2c,&local_20,3,1);
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



void fn_00393884(int param_1)

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



void fn_00393844(int param_1)

{
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 0x14))();
  }
  if (*(int **)(param_1 + 0x2c) == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0039387c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x2c) + 0x14))();
  return;
}



void fn_00393360(int param_1,int *param_2,undefined4 param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7,undefined1 param_8,undefined4 param_9,uint param_10
                 )

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint uStack_5c;
  int local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int iStack_34;
  int *local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  puVar10 = (uint *)(param_1 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_5 != puVar10) {
    puVar1 = (undefined4 *)*param_5;
    puVar8 = (undefined4 *)param_5[1];
    puVar6 = (undefined4 *)*puVar10;
    uVar13 = (int)puVar8 - (int)puVar1;
    uVar12 = (int)uVar13 >> 2;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar6 >> 2) < uVar12) {
      local_78 = uVar12;
      uVar13 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      local_74 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (local_74 < uVar13 + 0x20) {
        local_74 = uVar13 + 0x20;
      }
      puVar2 = &local_74;
      if (local_74 <= uVar12) {
        puVar2 = &local_78;
      }
      uVar12 = *puVar2;
      puVar8 = (undefined4 *)fn_00100fc6(uVar12 << 2,0);
      puVar9 = (undefined4 *)param_5[1];
      puVar6 = puVar8;
      for (puVar1 = (undefined4 *)*param_5; puVar1 != puVar9; puVar1 = puVar1 + 1) {
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = *puVar1;
        }
        puVar6 = puVar6 + 1;
      }
      uVar3 = *puVar10;
      uVar13 = uVar3;
      if (*(uint *)(param_1 + 8) < uVar3) {
        do {
          uVar13 = uVar13 + 4;
        } while (uVar13 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0xc) - uVar3) >> 2,0);
      *puVar10 = (uint)puVar8;
      *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + (int)puVar8;
      *(undefined4 **)(param_1 + 0xc) = puVar8 + uVar12;
    }
    else {
      uVar3 = *(int *)(param_1 + 8) - (int)puVar6 >> 2;
      if (uVar3 < uVar12) {
        puVar8 = puVar1 + uVar3;
        if (puVar1 < puVar8) {
          if (0 < (int)puVar8 - (int)puVar1) {
            puVar9 = puVar6 + -1;
            puVar11 = puVar1 + -1;
            if (((int)puVar8 - (int)puVar1) * 0x20000000 < 0) {
              *puVar6 = *puVar1;
              puVar9 = puVar6;
              puVar11 = puVar1;
            }
            for (iVar4 = (int)puVar8 - (int)puVar1 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar9[1] = puVar11[1];
              puVar1 = puVar11 + 2;
              puVar11 = puVar11 + 2;
              puVar9[2] = *puVar1;
              puVar9 = puVar9 + 2;
            }
          }
        }
        else {
          for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
            *puVar6 = *puVar1;
            puVar6 = puVar6 + 1;
          }
        }
        *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + *puVar10;
        puVar8 = (undefined4 *)param_5[1];
        puVar6 = (undefined4 *)(*puVar10 + uVar3 * 4);
        for (puVar1 = (undefined4 *)(*param_5 + uVar3 * 4); puVar1 != puVar8; puVar1 = puVar1 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar1;
          }
          puVar6 = puVar6 + 1;
        }
      }
      else {
        if (puVar1 < puVar8) {
          if (0 < (int)uVar13) {
            puVar8 = puVar6 + -1;
            puVar9 = puVar1 + -1;
            if ((int)(uVar13 * 0x20000000) < 0) {
              *puVar6 = *puVar1;
              puVar8 = puVar6;
              puVar9 = puVar1;
            }
            for (iVar4 = (int)uVar13 >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
              puVar8[1] = puVar9[1];
              puVar1 = puVar9 + 2;
              puVar9 = puVar9 + 2;
              puVar8[2] = *puVar1;
              puVar8 = puVar8 + 2;
            }
            puVar6 = (undefined4 *)((int)puVar6 + (uVar13 & 0xfffffffc));
          }
        }
        else {
          for (; puVar1 != puVar8; puVar1 = puVar1 + 1) {
            *puVar6 = *puVar1;
            puVar6 = puVar6 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar6) {
          do {
            puVar6 = puVar6 + 1;
          } while (puVar6 != *(undefined4 **)(param_1 + 8));
        }
        iVar4 = (param_5[1] - *param_5 & 0xfffffffc) + *puVar10;
        *(int *)(param_1 + 8) = iVar4;
        *(int *)(param_1 + 0xc) = iVar4;
      }
    }
  }
  iVar4 = (**(code **)(*local_30 + 0x2c))(local_30,(char *)&DAT_00393824,1);
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  if (iVar4 == 0) {
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      local_6c = 0;
      local_68 = param_7;
      local_78 = param_4;
      local_74 = param_1 + 4U;
      local_70 = param_9;
      local_64 = param_10;
      piVar5 = (int *)fn_0037dfd4(iVar4,*(undefined4 *)(param_1 + 0x14),local_30,1);
    }
    piVar7 = *(int **)(param_1 + 0x28);
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *(int **)(param_1 + 0x28) = piVar5;
    }
    (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
    local_78 = 1;
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x28),&local_48,3);
    *(undefined1 *)(param_1 + 0x30) = 1;
  }
  else {
    iVar4 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar4 != 0) {
      local_6c = param_7;
      local_78 = param_4;
      local_74 = param_1 + 4U;
      local_70 = param_9;
      local_68 = param_10;
      piVar5 = (int *)fn_00307738(iVar4,*(undefined4 *)(param_1 + 0x14),local_30,1);
    }
    piVar7 = *(int **)(param_1 + 0x2c);
    if (piVar7 != piVar5) {
      if (piVar7 != (int *)0x0) {
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      *(int **)(param_1 + 0x2c) = piVar5;
    }
    (**(code **)(**(int **)(param_1 + 0x2c) + 0x10))();
    local_78 = 1;
    fn_002e4004(param_1,*(undefined4 *)(param_1 + 0x2c),&local_48,3);
    *(undefined1 *)(param_1 + 0x30) = 0;
  }
  fn_002e3f6c(&local_60);
  local_54 = 1;
  uStack_50 = 3;
  local_4b = 0;
  local_4c = param_8;
  local_4a = (undefined1)param_7;
  fn_0078cb6c(&local_60,3,0,0);
  local_78 = 1;
  fn_002e3d70(param_1,&local_60,&local_48,3);
  local_70 = param_7 ^ 1;
  local_74 = 1;
  local_78 = 3;
  local_6c = 1;
  fn_002e3c08(param_1,&local_60,local_2c,param_6);
  uVar12 = local_60;
  if (uStack_5c < local_60) {
    do {
      uVar12 = uVar12 + 8;
    } while (uVar12 != uStack_5c);
  }
  fn_001008c4(local_60,(int)(local_58 - local_60) >> 3,0);
  return;
}


