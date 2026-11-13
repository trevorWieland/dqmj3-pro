#include "005c9a74_005ca2b8a.h"



void fn_005ca08c(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  
  fn_005ab930();
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x40) == 2) {
    uVar3 = 0;
    do {
      iVar1 = fn_005ab500(param_1,uVar3);
      if (iVar1 < *(int *)(param_1 + 0x104)) {
        uVar2 = fn_005ab8b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x40));
        fn_0031b78c(param_1,uVar3,0,uVar2,param_4);
      }
      else if (8 < *(int *)(param_1 + 0x104)) {
        uVar4 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
        if (uVar4 <= uVar3) {
          fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar3,uVar4);
          param_4 = uVar4;
        }
        fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar3 * 4),0xffffffff);
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 9);
  }
  return;
}



void fn_005ca020(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_005ab500();
  iVar2 = *(int *)(param_1 + 0xe4);
  iVar3 = *(int *)(iVar2 + 0x40);
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x44) = uVar1;
  }
  else if (iVar3 == 1) {
    *(undefined4 *)(iVar2 + 0x48) = uVar1;
  }
  else if (iVar3 == 2) {
    *(char *)(iVar2 + 0x4c) = (char)uVar1;
  }
  else if (iVar3 == 3) {
    *(char *)(iVar2 + 0x4d) = (char)uVar1;
  }
  fn_00689824(param_1,0);
  *(undefined1 *)(param_1 + 0x100) = 0xf;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005c9ff0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005ca198(iVar1,param_1);
  return;
}



void fn_005c9f00(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  fn_005ab920();
  iVar1 = fn_005ab500(param_1,param_2);
  uVar2 = fn_005ab8b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x40),iVar1);
  uVar4 = 0;
  iVar3 = *(int *)(*(int *)(param_1 + 0xe4) + 0x40);
  if (iVar3 == 0) {
    uVar4 = fn_005ab774(param_1,*(undefined4 *)(&DAT_00890db4 + iVar1 * 4),0);
  }
  else if (iVar3 == 1) {
    uVar4 = fn_005ab774(param_1,*(undefined4 *)(&DAT_00890dbc + iVar1 * 4),0);
  }
  else if (iVar3 == 2) {
    uVar4 = fn_005ab774(param_1,(&PTR_s_CoplingSearchHelpChildGenealogyA_00890dcc)[iVar1],0);
  }
  else if (iVar3 == 3) {
    uVar4 = fn_005ab774(param_1,(&PTR_s_CoplingSearchHelpChildRankAll_00890df4)[iVar1],0);
  }
  fn_005ab578(param_1,uVar2,uVar4);
  return;
}



undefined4 fn_005c9a74(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  wchar16 *local_8c;
  char *pcStack_88;
  int local_84;
  uint local_80;
  int iStack_7c;
  int local_78;
  undefined4 *local_70;
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined1 local_5f;
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint auStack_2c [2];
  
  fn_005ab63c();
  uVar1 = fn_005ab518(param_1);
  *(undefined4 *)(param_1 + 0x104) = uVar1;
  fn_00397774(&local_8c);
  local_8c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_88 = "common_0200.bflyt";
  iVar2 = *(int *)(param_1 + 0x104);
  local_60 = 8 < iVar2;
  local_84 = iVar2;
  if ((bool)local_60) {
    local_84 = 9;
    local_78 = iVar2;
  }
  iVar2 = *(int *)(param_1 + 0xe4);
  local_80 = 0;
  iStack_7c = 0;
  iVar8 = *(int *)(iVar2 + 0x40);
  if (iVar8 == 0) {
    local_80 = *(uint *)(iVar2 + 0x44);
LAB_005c9b10:
    if (8 < (int)local_80) {
      iStack_7c = (int)local_80 / 9;
      local_80 = (int)local_80 % 9;
    }
  }
  else {
    if (iVar8 == 1) {
      local_80 = *(uint *)(iVar2 + 0x48);
      goto LAB_005c9b10;
    }
    if (iVar8 == 2) {
      local_80 = (uint)*(byte *)(iVar2 + 0x4c);
      goto LAB_005c9b10;
    }
    if (iVar8 == 3) {
      local_80 = (uint)*(byte *)(iVar2 + 0x4d);
      goto LAB_005c9b10;
    }
  }
  puVar3 = (undefined4 *)fn_005ab7a4(param_1);
  uVar4 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar4 == 0) {
    piVar6 = local_70 + -3;
    iVar2 = *piVar6;
    if (iVar2 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar2 == -1 || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar2 + -1, iVar2 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_005c9d58;
    }
    local_70[-1] = 0;
    puVar3 = local_70;
  }
  else {
    uVar9 = local_70[-3] + 1;
    bVar12 = local_70[-3] != -1;
    bVar11 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar12 = (uint)local_70[-2] <= uVar4;
      bVar11 = uVar4 == local_70[-2];
    }
    if (bVar12 && !bVar11) {
LAB_005c9ba8:
      uVar9 = local_70[-1];
      local_30 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_30 < uVar9 + 0x80) {
        local_30 = uVar9 + 0x80;
      }
      puVar5 = auStack_2c;
      if (uVar4 <= local_30) {
        puVar5 = &local_30;
      }
      auStack_2c[0] = uVar4;
      uVar9 = *puVar5;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar4) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar9);
      }
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar10[2] = uVar4;
        puVar7 = (undefined2 *)((int)puVar10 + uVar4 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar9;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar3,uVar4 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar6 = local_70 + -3;
        iVar2 = *piVar6;
        if ((iVar2 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar2 + -1, iVar2 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar10 + 3;
      goto LAB_005c9d58;
    }
    if (puVar3 != (undefined4 *)0x0) {
      bVar11 = puVar3 <= local_70;
      if (local_70 <= puVar3) {
        bVar11 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar3;
      }
      if (!bVar11) goto LAB_005c9ba8;
    }
    fn_001006ac(local_70,puVar3,uVar4);
    local_70[-1] = uVar4;
    puVar3 = (undefined4 *)((int)local_70 + uVar4 * 2);
  }
  *(undefined2 *)puVar3 = 0;
LAB_005c9d58:
  local_5f = 0;
  local_58 = 1;
  fn_00397618(param_1,&local_8c);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar2 + 0x81) = 1;
  fn_0031f3f4(iVar2,0);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar2 = fn_001588d4(auStack_64);
  iVar2 = fn_001588d4(iVar2 + -4);
  iVar2 = fn_001588d4(iVar2 + -4);
  fn_001588d4(iVar2 + -4);
  fn_005ab734(param_1);
  fn_005ab7c4(param_1);
  uVar4 = 0;
  do {
    iVar2 = fn_005ab500(param_1,uVar4);
    if (iVar2 < *(int *)(param_1 + 0x104)) {
      uVar1 = fn_005ab8b0(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x40),iVar2);
      fn_0031b78c(param_1,uVar4,0,uVar1);
    }
    else if (8 < *(int *)(param_1 + 0x104)) {
      uVar9 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar9 <= uVar4) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar4,uVar9);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4),0xffffffff);
    }
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 9);
  return 1;
}


