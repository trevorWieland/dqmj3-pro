#include "00678944_00678da4.h"



void fn_00678da4(int *param_1,undefined1 *param_2)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  bool bVar8;
  int *local_40;
  int *local_3c;
  int *local_38;
  int *local_34;
  int *local_30;
  int local_2c;
  int *local_28;
  
  fn_0066e458(DAT_00898840,2,0);
  fn_00678280(&local_40);
  piVar4 = local_30;
  if (&local_40 != (int **)param_2) {
    puVar6 = *(undefined4 **)(param_2 + 0x10);
    puVar5 = (undefined4 *)*puVar6;
    for (piVar3 = (int *)*local_30; piVar3 != local_30 && puVar5 != puVar6; piVar3 = (int *)*piVar3)
    {
      piVar3[2] = puVar5[2];
      puVar5 = (undefined4 *)*puVar5;
    }
    if (puVar5 == puVar6) {
      while (piVar3 != local_30) {
        piVar4 = local_30;
        if (piVar3 != local_30) {
          piVar4 = (int *)*piVar3;
          *(int **)piVar3[1] = piVar4;
          *(int *)(*piVar3 + 4) = piVar3[1];
          local_2c = local_2c + -1;
          *piVar3 = (int)local_3c;
          local_3c = piVar3;
        }
        piVar3 = piVar4;
      }
    }
    else {
      bVar8 = true;
      while (bVar8) {
        if (local_3c == (int *)0x0) {
          if (local_38 == local_34) {
            if (local_40 == (int *)0x0) {
              uVar7 = 0x20;
            }
            else {
              uVar1 = local_40[1];
              uVar7 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
              if (uVar7 < uVar1 + 0x20) {
                uVar7 = uVar1 + 0x20;
              }
            }
            piVar3 = (int *)fn_0015ece0(0xc);
            iVar2 = fn_0015ece0(uVar7 * 0xc);
            piVar3[2] = iVar2;
            *piVar3 = (int)local_40;
            piVar3[1] = uVar7;
            local_38 = (int *)piVar3[2];
            local_34 = local_38 + uVar7 * 3;
            local_40 = piVar3;
          }
          piVar3 = local_38;
          local_38 = local_38 + 3;
        }
        else {
          piVar3 = local_3c;
          local_3c = (int *)*local_3c;
        }
        if (piVar3 + 2 != (int *)0x0) {
          piVar3[2] = puVar5[2];
        }
        *piVar3 = (int)piVar4;
        piVar3[1] = piVar4[1];
        *(int **)piVar4[1] = piVar3;
        piVar4[1] = (int)piVar3;
        local_2c = local_2c + 1;
        puVar5 = (undefined4 *)*puVar5;
        bVar8 = puVar5 != puVar6;
      }
    }
  }
  local_28 = param_1 + 0x26;
  fn_0067a39c(param_1[0x2c],&local_40);
  (**(code **)(*param_1 + 0x18))(param_1,2);
  if (local_30 != (int *)0x0) {
    piVar4 = (int *)*local_30;
    while (piVar3 = piVar4, piVar3 != local_30) {
      piVar4 = local_30;
      if (piVar3 != local_30) {
        piVar4 = (int *)*piVar3;
        *(int *)piVar3[1] = *piVar3;
        *(int *)(*piVar3 + 4) = piVar3[1];
        local_2c = local_2c + -1;
        *piVar3 = (int)local_3c;
        local_3c = piVar3;
      }
    }
    *local_30 = (int)local_3c;
    piVar4 = local_40;
    while (piVar4 != (int *)0x0) {
      local_40 = (int *)*piVar4;
      fn_0014f1bc(piVar4[2]);
      fn_0014f1bc(piVar4);
      piVar4 = local_40;
    }
  }
  return;
}



void fn_00678c68(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  
  *param_1 = &DAT_0085a240;
  fn_00678b18(param_1);
  piVar5 = (int *)param_1[0x2a];
  piVar2 = param_1 + 0x26;
  if (piVar5 != (int *)0x0) {
    piVar3 = (int *)*piVar5;
    while (piVar3 != piVar5) {
      piVar4 = (int *)param_1[0x2a];
      if (piVar3 != (int *)param_1[0x2a]) {
        piVar4 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar4;
        *(int *)(*piVar3 + 4) = piVar3[1];
        param_1[0x2b] = param_1[0x2b] + -1;
        (**(code **)piVar3[2])(piVar3 + 2);
        *piVar3 = param_1[0x27];
        param_1[0x27] = piVar3;
      }
      piVar3 = piVar4;
    }
    puVar1 = (undefined4 *)param_1[0x2a];
    *puVar1 = param_1[0x27];
    param_1[0x27] = puVar1;
    piVar5 = (int *)*piVar2;
    while (piVar5 != (int *)0x0) {
      *piVar2 = *piVar5;
      fn_0014f1bc(piVar5[2]);
      fn_0014f1bc(piVar5);
      piVar5 = (int *)*piVar2;
    }
    param_1[0x27] = 0;
    param_1[0x28] = 0;
    param_1[0x29] = 0;
  }
  *param_1 = &DAT_00859b38;
  *param_1 = &DAT_00851730;
  fn_005f6430();
  return;
}



undefined4 * fn_00678b84(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  puVar1 = (undefined4 *)fn_005f62c0();
  puVar1[8] = &DAT_00859420;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  *puVar1 = &DAT_00859b38;
  iVar2 = fn_00119b40(puVar1 + 0x10);
  fn_0066ddbc();
  fn_002fec40(iVar2 + 0x18,param_2);
  piVar5 = (int *)(iVar2 + 0x58);
  *(undefined4 *)(iVar2 + -0x40) = &DAT_0085a240;
  *piVar5 = 0;
  *(undefined4 *)(iVar2 + 0x5c) = 0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  *(undefined4 *)(iVar2 + 100) = 0;
  *(undefined4 *)(iVar2 + 0x68) = 0;
  *(undefined4 *)(iVar2 + 0x6c) = 0;
  piVar3 = (int *)fn_0015ece0(0xc);
  iVar4 = fn_0015ece0(0x78);
  piVar3[2] = iVar4;
  *piVar3 = *piVar5;
  piVar3[1] = 1;
  *piVar5 = (int)piVar3;
  iVar4 = piVar3[2];
  *(int *)(iVar2 + 0x60) = iVar4;
  *(int *)(iVar2 + 100) = iVar4 + 0x78;
  *(int *)(iVar2 + 0x68) = iVar4;
  *(int *)(iVar2 + 0x60) = iVar4 + 0x78;
  *(int *)iVar4 = iVar4;
  *(int *)(*(int *)(iVar2 + 0x68) + 4) = *(int *)(iVar2 + 0x68);
  return (undefined4 *)(iVar2 + -0x40);
}



void fn_00678b18(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = *(int **)(param_1 + 0xa8);
  piVar1 = (int *)*piVar3;
  while (piVar1 != piVar3) {
    piVar2 = *(int **)(param_1 + 0xa8);
    if (piVar1 != *(int **)(param_1 + 0xa8)) {
      piVar2 = (int *)*piVar1;
      *(int **)piVar1[1] = piVar2;
      *(int *)(*piVar1 + 4) = piVar1[1];
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
      (**(code **)piVar1[2])(piVar1 + 2);
      *piVar1 = *(int *)(param_1 + 0x9c);
      *(int **)(param_1 + 0x9c) = piVar1;
    }
    piVar1 = piVar2;
  }
  return;
}



void fn_00678944(int *param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int local_58;
  int iStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int local_24;
  
  fn_0066e458(DAT_00898840,2,0);
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 3;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x32] = param_5[1];
  param_1[0x33] = *param_5;
  fn_001782b8(param_1 + 0x2a,(char *)&DAT_00678a80,0x20);
  if (param_3 == 0 && param_4 == 0) {
    param_1[0x36] = 0;
    param_1[0x37] = 0;
    fn_006783a0(param_1[0x34],param_1 + 0x26,param_1 + 0x36);
    uVar1 = 3;
  }
  else {
    local_50 = 0;
    uStack_4c = 3;
    local_44 = 0;
    local_40 = 0;
    local_48 = 0;
    local_3c = 0;
    local_38 = 0;
    local_30 = 0;
    local_2c = 0;
    local_34 = 0;
    local_28 = param_5[1];
    local_24 = *param_5;
    local_58 = param_3;
    iStack_54 = param_4;
    fn_001782b8(&local_48,(char *)&DAT_00678a80,0x20);
    param_1[0x36] = param_3;
    param_1[0x37] = param_4;
    fn_00679a2c(param_1[0x35],&local_58);
    uVar1 = 2;
  }
                    /* WARNING: Could not recover jumptable at 0x00678a78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x18))(param_1,uVar1);
  return;
}


