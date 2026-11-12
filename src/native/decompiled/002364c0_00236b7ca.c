#include "002364c0_00236b7ca.h"



void fn_00236a40(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xa0);
  for (iVar1 = *(int *)(param_1 + 0x9c); iVar1 != iVar2; iVar1 = iVar1 + 0x90) {
    fn_0023587c(iVar1);
  }
  iVar1 = *(int *)(param_1 + 0x9c);
  fn_001008c4(iVar1,(*(int *)(param_1 + 0xa4) - iVar1) / 0x90,0);
  fn_0023587c(param_1);
  return;
}



int fn_002368d0(undefined4 param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_30;
  uint local_2c [2];
  
  iVar1 = fn_00120aa8(param_1,0,2);
  iVar1 = fn_00120c70(iVar1 + 0x90);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  local_30 = 3;
  piVar4 = (int *)(iVar1 + 0xc);
  if ((uint)((*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0xc)) / 0x90) < 3) {
    uVar7 = (*(int *)(iVar1 + 0x10) - *(int *)(iVar1 + 0xc)) / 0x90;
    local_2c[0] = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
    if (local_2c[0] < uVar7 + 0x20) {
      local_2c[0] = uVar7 + 0x20;
    }
    puVar2 = local_2c;
    if (local_2c[0] < 4) {
      puVar2 = &local_30;
    }
    uVar7 = *puVar2;
    iVar3 = fn_00100fc6(uVar7 * 0x90,0);
    iVar8 = *(int *)(iVar1 + 0x10);
    iVar5 = iVar3;
    for (iVar6 = *piVar4; iVar6 != iVar8; iVar6 = iVar6 + 0x90) {
      if (iVar5 != 0) {
        fn_0023572c(iVar5,iVar6);
      }
      iVar5 = iVar5 + 0x90;
    }
    iVar5 = *(int *)(iVar1 + 0x10);
    for (iVar6 = *piVar4; iVar6 != iVar5; iVar6 = iVar6 + 0x90) {
      fn_0023587c(iVar6);
    }
    fn_001008c4(*piVar4,(*(int *)(iVar1 + 0x14) - *piVar4) / 0x90,0);
    iVar6 = *piVar4;
    *piVar4 = iVar3;
    *(int *)(iVar1 + 0x10) = iVar3 + ((*(int *)(iVar1 + 0x10) - iVar6) / 0x90) * 0x90;
    *(uint *)(iVar1 + 0x14) = iVar3 + uVar7 * 0x90;
  }
  return iVar1 + -0x90;
}



void fn_002368ac(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00236200(param_1 + 0x90);
  fn_0023591c(param_1,param_3);
  return;
}



void fn_002365a8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint local_50;
  uint uStack_4c;
  int local_48;
  uint local_44;
  undefined4 *local_40 [6];
  uint local_28;
  
  fn_00235020(&local_50);
  iVar5 = 0;
  iVar8 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  iVar10 = iVar8 >> 0x1f;
  if (iVar8 / 0x90 + iVar10 != iVar10) {
    uVar11 = 0;
    do {
      uVar1 = uVar11 + 1;
      if (*(char *)(*(int *)(param_1 + 0x9c) + uVar11 * 0x90 + 8) == '\x01') {
        iVar5 = iVar5 + 1;
      }
      uVar11 = uVar1;
    } while (uVar1 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x90));
  }
  fn_00234dcc(&local_50,iVar5);
  iVar8 = 0;
  uVar11 = 0;
  iVar5 = *(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c);
  iVar10 = iVar5 >> 0x1f;
  if (iVar5 / 0x90 + iVar10 != iVar10) {
    do {
      iVar10 = *(int *)(param_1 + 0x9c) + uVar11 * 0x90;
      if (*(char *)(iVar10 + 8) == '\x01') {
        uVar2 = fn_006b2ed0(&local_50,iVar8);
        uVar1 = fn_00100b58();
        puVar3 = &DAT_008f9cf4;
        if (uVar1 != 0) {
          puVar6 = &local_44;
          if (0x20 < uVar1) {
            puVar6 = &local_28;
          }
          local_28 = uVar1;
          local_44 = 0x20;
          uVar9 = *puVar6;
          if (0xfffffff1 < uVar9) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
          }
          if (uVar9 < uVar1) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar9);
          }
          if (uVar9 == 0) {
            puVar3 = &DAT_008f9ce8;
          }
          else {
            puVar3 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
            }
            puVar3[2] = uVar1;
            *puVar3 = 0;
            puVar3[1] = uVar9;
            puVar7 = (undefined2 *)((int)puVar3 + uVar1 * 2 + 0xc);
            if (puVar7 != (undefined2 *)0x0) {
              *puVar7 = 0;
            }
          }
          puVar3 = puVar3 + 3;
        }
        local_40[0] = puVar3;
        fn_00301a9c(puVar3,uVar2,uVar1 << 1);
        fn_00235500(iVar10,local_40);
        if (local_40[0] != &DAT_008f9cf4) {
          piVar4 = local_40[0] + -3;
          iVar5 = *piVar4;
          if ((iVar5 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(local_40[0] + -3,local_40[0][-2] + 8,0);
          }
        }
        uVar2 = fn_006b2ec0(&local_50,iVar8);
        iVar8 = iVar8 + 1;
        *(undefined4 *)(iVar10 + 0x8c) = uVar2;
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)((*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c)) / 0x90));
  }
  uVar11 = local_50;
  if (uStack_4c < local_50) {
    do {
      uVar11 = uVar11 + 8;
    } while (uVar11 != uStack_4c);
  }
  fn_001008c4(local_50,(int)(local_48 - local_50) >> 3,0);
  return;
}



void fn_002364c0(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int local_b0 [2];
  undefined1 local_a7;
  undefined4 *local_20;
  undefined1 auStack_1c [8];
  
  iVar1 = *(int *)(param_1 + 0xa8);
  fn_00120aa8(local_b0,0,2);
  local_a7 = 2;
  fn_002354c4(local_b0,1,param_2,param_3);
  local_b0[0] = iVar1 + param_4;
  uVar2 = fn_00168a24(&local_20,&DAT_00236598,auStack_1c);
  fn_00235500(local_b0,uVar2);
  if (local_20 != &DAT_008f9cf4) {
    piVar3 = local_20 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  fn_0078b084(param_1 + 0x9c,local_b0);
  fn_0023587c(local_b0);
  return;
}


