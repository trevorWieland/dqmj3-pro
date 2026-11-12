#include "006b6dc4_006b72dc.h"



void fn_006b72dc(int param_1,undefined4 **param_2,undefined4 param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint local_3c;
  uint local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 local_2c;
  
  iVar8 = *(int *)(param_1 + 0x1028);
  puVar7 = &DAT_008f9ce8;
  local_30 = &DAT_008f9cf4;
  uVar6 = *(int *)(iVar8 + -4) * 2 >> 1;
  local_2c = param_3;
  if (uVar6 != 0) {
    puVar2 = &local_38;
    if (0x20 < uVar6) {
      puVar2 = &local_3c;
    }
    local_3c = uVar6;
    local_38 = 0x20;
    uVar4 = *puVar2;
    if (0xfffffff1 < uVar4) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,0xfffffff1);
    }
    if (uVar4 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,uVar4);
    }
    local_30 = puVar7;
    if (uVar4 != 0) {
      local_30 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
      if (local_30 != (undefined4 *)0x0) {
        *local_30 = 0;
        local_30[1] = 0;
        local_30[2] = 0;
      }
      puVar3 = (undefined2 *)((int)local_30 + uVar6 * 2 + 0xc);
      *local_30 = 0;
      local_30[1] = uVar4;
      local_30[2] = uVar6;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    local_30 = local_30 + 3;
  }
  fn_00301a9c(local_30,iVar8,uVar6 << 1);
  uVar5 = local_30[-1];
  local_38 = fn_00100b58(local_2c);
  local_3c = 0;
  fn_00177c88(&local_30,uVar5,0,local_2c,local_38);
  piVar1 = local_30 + -3;
  if (*piVar1 + 1 == 0) {
    uVar6 = local_30[-1];
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 != 0) {
      puVar7 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
        puVar7[1] = 0;
        puVar7[2] = 0;
      }
      puVar7[1] = uVar6;
      puVar3 = (undefined2 *)((int)puVar7 + uVar6 * 2 + 0xc);
      puVar7[2] = uVar6;
      *puVar7 = 0;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    local_34 = puVar7 + 3;
    fn_00301a9c(local_34,local_30,uVar6 << 1);
  }
  else {
    local_34 = local_30;
    if (piVar1 != &DAT_008f9ce8) {
      *piVar1 = *piVar1 + 1;
    }
  }
  fn_001588d4(&local_30);
  piVar1 = local_34 + -3;
  if (*piVar1 == -1) {
    if (param_2 != &local_34) {
      local_38 = local_34[-1];
      local_3c = 0;
      fn_00177c88(param_2,0,(*param_2)[-1],local_34,local_38);
    }
  }
  else {
    if (piVar1 != &DAT_008f9ce8) {
      *piVar1 = *piVar1 + 1;
    }
    if (*param_2 != &DAT_008f9cf4) {
      piVar1 = *param_2 + -3;
      iVar8 = *piVar1;
      if ((iVar8 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(*param_2 + -3,(*param_2)[-2] + 8,0);
      }
    }
    *param_2 = local_34;
  }
  fn_001588d4(&local_34);
  return;
}



bool fn_006b72c0(int param_1)

{
  return *(int *)(**(int **)(param_1 + 0xea4) + 0x44) != 0;
}



undefined4 fn_006b7260(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)*param_1 + 0x14))();
  if (((iVar1 == 0) && (*(int *)(*param_1 + 0x44) == 0)) &&
     (iVar1 = param_1[2] - param_1[1] >> 0x1f, (param_1[2] - param_1[1]) / 0x28 + iVar1 == iVar1)) {
    return 0;
  }
  return 1;
}



undefined4 fn_006b7258(int param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0xea4);
  iVar2 = (**(code **)(*(int *)*piVar1 + 0x14))();
  if (((iVar2 == 0) && (*(int *)(*piVar1 + 0x44) == 0)) &&
     (iVar2 = piVar1[2] - piVar1[1] >> 0x1f, (piVar1[2] - piVar1[1]) / 0x28 + iVar2 == iVar2)) {
    return 0;
  }
  return 1;
}



int fn_006b724c(int *param_1)

{
  return *param_1 + 0x40;
}



int fn_006b723c(int param_1)

{
  return **(int **)(param_1 + 0x5b3a4) + 0x40;
}



undefined4 fn_006b71a8(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[7] - piVar3[6] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar4);
  }
  uVar4 = *(uint *)(piVar3[6] + param_2 * 4);
  if ((int)uVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = piVar3[1] - *piVar3 >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar1);
    }
    uVar2 = *(undefined4 *)(*piVar3 + uVar4 * 4);
  }
  return uVar2;
}



undefined4 fn_006b70fc(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  param_2 = param_2 & 0xff;
  piVar3 = (int *)*param_1;
  if ((uint)(piVar3[7] - piVar3[6] >> 2) <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2);
  }
  uVar4 = *(uint *)(piVar3[6] + param_2 * 4);
  if (-1 < (int)uVar4) {
    if ((uint)(piVar3[1] - *piVar3 >> 2) <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4);
    }
    iVar1 = *(int *)(*piVar3 + uVar4 * 4);
    if (iVar1 != 0) {
      uVar2 = fn_00156f30(iVar1,param_3);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_006b7068(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[0x1a] - piVar3[0x19] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar4);
  }
  uVar4 = *(uint *)(piVar3[0x19] + param_2 * 4);
  if ((int)uVar4 < 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = piVar3[1] - *piVar3 >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar1);
    }
    uVar2 = *(undefined4 *)(*piVar3 + uVar4 * 4);
  }
  return uVar2;
}



undefined4 fn_006b6f3c(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[7] - piVar3[6] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar4);
  }
  uVar4 = *(uint *)(piVar3[6] + param_2 * 4);
  if (-1 < (int)uVar4) {
    uVar2 = piVar3[1] - *piVar3 >> 2;
    if (uVar2 <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar2);
    }
    iVar1 = *(int *)(*piVar3 + uVar4 * 4);
    if (iVar1 != 0) {
      uVar2 = fn_00156f30(iVar1,param_3);
      uVar4 = piVar3[4] - piVar3[3] >> 2;
      if (uVar4 <= uVar2) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar2,uVar4);
      }
      uVar4 = *(uint *)(piVar3[3] + uVar2 * 4);
      if (uVar4 != 0xffffffff) {
        uVar2 = piVar3[1] - *piVar3 >> 2;
        if (uVar2 <= uVar4) {
          fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar2);
        }
        return *(undefined4 *)(*piVar3 + uVar4 * 4);
      }
    }
  }
  return 0;
}



undefined4 fn_006b6ea8(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  
  piVar3 = (int *)*param_1;
  uVar4 = piVar3[4] - piVar3[3] >> 2;
  if (uVar4 <= param_2) {
    fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,param_2,uVar4);
  }
  uVar4 = *(uint *)(piVar3[3] + param_2 * 4);
  if (uVar4 == 0xffffffff) {
    uVar2 = 0;
  }
  else {
    uVar1 = piVar3[1] - *piVar3 >> 2;
    if (uVar1 <= uVar4) {
      fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar4,uVar1);
    }
    uVar2 = *(undefined4 *)(*piVar3 + uVar4 * 4);
  }
  return uVar2;
}



int fn_006b6e94(int *param_1)

{
  return *(int *)(*param_1 + 0x44) - *(int *)(*param_1 + 0x40) >> 2;
}



int fn_006b6dc4(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = 0;
  piVar3 = (int *)*param_1;
  iVar5 = piVar3[0x14] - piVar3[0x13] >> 2;
  if (0 < iVar5) {
    do {
      uVar1 = piVar3[0x14] - piVar3[0x13] >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c760c,&DAT_008c760c,uVar4,uVar1);
      }
      uVar6 = *(uint *)(piVar3[0x13] + uVar4 * 4);
      uVar1 = piVar3[1] - *piVar3 >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7608,&DAT_008c7608,uVar6,uVar1);
      }
      iVar2 = fn_006b2d8c(*(undefined4 *)(*piVar3 + uVar6 * 4));
      if (iVar2 != 0) {
        iVar5 = iVar5 + -1;
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < piVar3[0x14] - piVar3[0x13] >> 2);
  }
  return iVar5;
}


