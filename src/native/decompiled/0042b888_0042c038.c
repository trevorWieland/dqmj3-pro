#include "0042b888_0042c038.h"



void fn_0042c038(int param_1)

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



void fn_0042bbf4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint *param_5,
                 undefined4 param_6,uint param_7)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  uint uVar14;
  uint local_60;
  uint local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined1 *local_50;
  undefined1 *puStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined1 local_3a;
  int iStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  uint uStack_28;
  
  puVar13 = (uint *)(param_1 + 4);
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  if (param_5 != puVar13) {
    puVar1 = (undefined4 *)param_5[1];
    puVar8 = (undefined4 *)*param_5;
    puVar5 = (undefined4 *)*puVar13;
    uVar11 = (int)puVar1 - (int)puVar8;
    uVar14 = (int)uVar11 >> 2;
    if ((uint)(*(int *)(param_1 + 0xc) - (int)puVar5 >> 2) < uVar14) {
      local_60 = uVar14;
      uVar11 = *(int *)(param_1 + 8) - (int)puVar5 >> 2;
      uVar6 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      local_5c = uVar11 + 0x20;
      if (uVar11 + 0x20 <= uVar6) {
        local_5c = uVar6;
      }
      puVar7 = &local_5c;
      if (local_5c <= uVar14) {
        puVar7 = &local_60;
      }
      uVar14 = *puVar7;
      puVar1 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
      puVar9 = (undefined4 *)param_5[1];
      puVar5 = puVar1;
      for (puVar8 = (undefined4 *)*param_5; puVar8 != puVar9; puVar8 = puVar8 + 1) {
        if (puVar5 != (undefined4 *)0x0) {
          *puVar5 = *puVar8;
        }
        puVar5 = puVar5 + 1;
      }
      uVar6 = *puVar13;
      uVar11 = uVar6;
      if (*(uint *)(param_1 + 8) < uVar6) {
        do {
          uVar11 = uVar11 + 4;
        } while (uVar11 != *(uint *)(param_1 + 8));
      }
      fn_001008c4(uVar6,(int)(*(int *)(param_1 + 0xc) - uVar6) >> 2,0);
      *puVar13 = (uint)puVar1;
      *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + (int)puVar1;
      *(undefined4 **)(param_1 + 0xc) = puVar1 + uVar14;
    }
    else {
      uVar6 = *(int *)(param_1 + 8) - (int)puVar5 >> 2;
      if (uVar6 < uVar14) {
        puVar1 = puVar8 + uVar6;
        if (puVar8 < puVar1) {
          if (0 < (int)puVar1 - (int)puVar8) {
            puVar9 = puVar5 + -1;
            puVar12 = puVar8 + -1;
            if (((int)puVar1 - (int)puVar8) * 0x20000000 < 0) {
              *puVar5 = *puVar8;
              puVar9 = puVar5;
              puVar12 = puVar8;
            }
            for (iVar2 = (int)puVar1 - (int)puVar8 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar9[1] = puVar12[1];
              puVar12 = puVar12 + 2;
              puVar9 = puVar9 + 2;
              *puVar9 = *puVar12;
            }
          }
        }
        else {
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            *puVar5 = *puVar8;
            puVar5 = puVar5 + 1;
          }
        }
        *(uint *)(param_1 + 8) = (param_5[1] - *param_5 & 0xfffffffc) + *puVar13;
        puVar1 = (undefined4 *)param_5[1];
        puVar5 = (undefined4 *)(*puVar13 + uVar6 * 4);
        for (puVar8 = (undefined4 *)(*param_5 + uVar6 * 4); puVar8 != puVar1; puVar8 = puVar8 + 1) {
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = *puVar8;
          }
          puVar5 = puVar5 + 1;
        }
      }
      else {
        if (puVar8 < puVar1) {
          if (0 < (int)uVar11) {
            puVar1 = puVar5 + -1;
            puVar9 = puVar8 + -1;
            if ((int)(uVar11 * 0x20000000) < 0) {
              *puVar5 = *puVar8;
              puVar1 = puVar5;
              puVar9 = puVar8;
            }
            for (iVar2 = (int)uVar11 >> 3; iVar2 != 0; iVar2 = iVar2 + -1) {
              puVar1[1] = puVar9[1];
              puVar9 = puVar9 + 2;
              puVar1 = puVar1 + 2;
              *puVar1 = *puVar9;
            }
            puVar5 = (undefined4 *)((int)puVar5 + (uVar11 & 0xfffffffc));
          }
        }
        else {
          for (; puVar8 != puVar1; puVar8 = puVar8 + 1) {
            *puVar5 = *puVar8;
            puVar5 = puVar5 + 1;
          }
        }
        if (*(undefined4 **)(param_1 + 8) < puVar5) {
          do {
            puVar5 = puVar5 + 1;
          } while (puVar5 != *(undefined4 **)(param_1 + 8));
        }
        iVar2 = (param_5[1] - *param_5 & 0xfffffffc) + *puVar13;
        *(int *)(param_1 + 8) = iVar2;
        *(int *)(param_1 + 0xc) = iVar2;
      }
    }
  }
  iVar2 = fn_00145b00(0xd4,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    local_60 = param_4;
    piVar3 = (int *)fn_002b44c0(iVar2,*(undefined4 *)(param_1 + 0x14),local_30,1);
  }
  piVar10 = *(int **)(param_1 + 0x28);
  if (piVar10 != piVar3) {
    if (piVar10 != (int *)0x0) {
      (**(code **)(*piVar10 + 4))(piVar10);
    }
    *(int **)(param_1 + 0x28) = piVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x28) + 0x10))();
  *(char *)(*(int *)(param_1 + 0x28) + 0x1d) = (char)param_7;
  (**(code **)(**(int **)(param_1 + 0x28) + 0x20))(*(int **)(param_1 + 0x28),0);
  fn_002b427c(*(undefined4 *)(param_1 + 0x28),0);
  fn_002b4348(*(undefined4 *)(param_1 + 0x28),0);
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3d) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x3f) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x28) + 0x43) = 0;
  fn_002b325c(*(undefined4 *)(param_1 + 0x28),0xffffffff);
  fn_002e3f6c(&local_50);
  local_3b = 0;
  local_3c = 0;
  local_44 = 1;
  local_40 = 1;
  local_3a = (char)param_7;
  fn_0078cb6c(&local_50,1,0,0);
  *(undefined4 *)(local_50 + 4) = *(undefined4 *)(*(int *)(param_1 + 0x28) + 0x4c);
  local_58 = param_7 ^ 1;
  *local_50 = 0;
  local_60 = 1;
  local_5c = 1;
  uStack_54 = 0;
  fn_002e3c08(param_1,&local_50,local_2c,param_6);
  puVar4 = local_50;
  if (puStack_4c < local_50) {
    do {
      puVar4 = puVar4 + 8;
    } while (puVar4 != puStack_4c);
  }
  fn_001008c4(local_50,local_48 - (int)local_50 >> 3,0);
  return;
}



void fn_0042bbec(undefined4 param_1)

{
  fn_00301f50(param_1,0x3c0);
  return;
}



void fn_0042bbc4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_007464d8();
  *puVar1 = &DAT_0083ba7c;
  return;
}



undefined4 * fn_0042b9d0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_28;
  uint local_24;
  
  puVar10 = (undefined4 *)0x0;
  *param_1 = &DAT_0083ba44;
  param_1[1] = 0;
  puVar9 = param_1 + 1;
  param_1[2] = 0;
  param_1[3] = 0;
  local_28 = 0x10;
  uVar11 = (int)(param_1[2] - param_1[1]) >> 2;
  local_24 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
  if (local_24 < uVar11 + 0x20) {
    local_24 = uVar11 + 0x20;
  }
  puVar1 = &local_24;
  if (local_24 < 0x11) {
    puVar1 = &local_28;
  }
  uVar11 = *puVar1;
  DAT_00893138 = param_1;
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar7 = puVar2;
  for (puVar5 = (undefined4 *)*puVar9; puVar5 != (undefined4 *)0x0; puVar5 = puVar5 + 1) {
    if (puVar7 != (undefined4 *)0x0) {
      *puVar7 = *puVar5;
    }
    puVar7 = puVar7 + 1;
  }
  iVar6 = 0x10;
  puVar5 = (undefined4 *)((-*puVar9 & 0xfffffffc) + (int)puVar2);
  do {
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
    }
    iVar6 = iVar6 + -1;
    puVar5 = puVar5 + 1;
  } while (iVar6 != 0);
  puVar7 = (undefined4 *)param_1[2];
  puVar5 = puVar2 + ((int)-*puVar9 >> 2) + 0x10;
  if (puVar7 != (undefined4 *)0x0) {
    do {
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = *puVar10;
      }
      puVar10 = puVar10 + 1;
      puVar5 = puVar5 + 1;
    } while (puVar10 != puVar7);
  }
  uVar3 = *puVar9;
  uVar8 = param_1[2];
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(param_1[3] - uVar3) >> 2,0);
  param_1[3] = puVar2 + uVar11;
  param_1[2] = puVar2 + ((int)(uVar8 - uVar3) >> 2) + 0x10;
  *puVar9 = (uint)puVar2;
  return param_1;
}



void fn_0042b928(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  
  if (param_3 != 0) {
    fn_0066e640(param_2,&LAB_0042b844);
  }
  if (param_4 != 0) {
    fn_0066e5d0(param_2,&LAB_0042b80c);
    fn_0066e660(param_2,fn_0042b888);
  }
  piVar4 = *(int **)(param_1 + 8);
  for (piVar3 = *(int **)(param_1 + 4); piVar3 != piVar4; piVar3 = piVar3 + 1) {
    if ((int *)*piVar3 != (int *)0x0) {
      uVar1 = (**(code **)(*(int *)*piVar3 + 8))();
      uVar2 = (**(code **)(*(int *)*piVar3 + 0xc))();
      fn_0066e4a4(param_2,uVar2,uVar1);
    }
  }
  return;
}



void fn_0042b8fc(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  *(undefined4 *)(*(int *)(param_1 + 4) + iVar1 * 4) = 0;
  return;
}



void fn_0042b8d4(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  *(int **)(*(int *)(param_1 + 4) + iVar1 * 4) = param_2;
  return;
}



void fn_0042b888(undefined4 param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(DAT_00893138 + 8);
  for (piVar2 = *(int **)(DAT_00893138 + 4); piVar2 != piVar3; piVar2 = piVar2 + 1) {
    piVar1 = (int *)*piVar2;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
    }
  }
  return;
}


