#include "00146fb0_002bd8d8.h"



undefined4 fn_002bd8d8(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  wchar16 *local_74;
  char *local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  uint local_40;
  uint auStack_3c [4];
  undefined4 local_2c [2];
  
  uVar3 = DAT_00897800;
  fn_00121838(DAT_00897800,L"rom:/data/Message/GoldBankMessage.mes",1);
  fn_002c330c(&local_74);
  local_74 = L"rom:/data/Layout/common/gold_bank.arc";
  local_70 = "gold_bank.bflyt";
  local_60 = 3;
  local_6c = 3;
  local_48 = 0;
  puVar1 = (undefined4 *)fn_0016ba34(uVar3,L"rom:/data/Message/GoldBankMessage.mes",(char *)&DAT_002bdccc,0);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar9 = local_58 + -3;
    iVar6 = *piVar9;
    if (iVar6 != 0) {
      if ((local_58 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
      }
      local_58 = &DAT_008f9cf4;
      goto LAB_002bdb50;
    }
    local_58[-1] = 0;
    puVar1 = local_58;
  }
  else {
    uVar7 = local_58[-3] + 1;
    bVar12 = local_58[-3] != -1;
    bVar11 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar12 = (uint)local_58[-2] <= uVar2;
      bVar11 = uVar2 == local_58[-2];
    }
    if (bVar12 && !bVar11) {
LAB_002bd9a0:
      uVar7 = local_58[-1];
      local_40 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_40 < uVar7 + 0x80) {
        local_40 = uVar7 + 0x80;
      }
      puVar8 = auStack_3c;
      if (uVar2 <= local_40) {
        puVar8 = &local_40;
      }
      auStack_3c[0] = uVar2;
      uVar7 = *puVar8;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar7);
      }
      if (uVar7 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar10[2] = uVar2;
        puVar5 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar7;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_58 != &DAT_008f9cf4) {
        piVar9 = local_58 + -3;
        iVar6 = *piVar9;
        if ((iVar6 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
        }
      }
      local_58 = puVar10 + 3;
      goto LAB_002bdb50;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_58;
      if (local_58 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_58 + local_58[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_002bd9a0;
    }
    fn_001006ac(local_58,puVar1,uVar2);
    local_58[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_58 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_002bdb50:
  if (*(char *)(*(int *)(param_1 + 0xb0) + 8) == '\0') {
    local_68 = 0;
  }
  else if (*(char *)(*(int *)(param_1 + 0xb0) + 8) == '\x01') {
    local_68 = 1;
  }
  uVar3 = fn_002c29a0(param_1,&local_74);
  iVar6 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
  piVar9 = *(int **)(iVar6 + 0x10);
  iVar6 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_002bdcdc,1);
  *(int *)(param_1 + 0xb4) = iVar6;
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
  iVar6 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_002bdcec,1);
  *(int *)(param_1 + 0xb8) = iVar6;
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | 1;
  iVar6 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_002bdcfc,1);
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe;
  uVar4 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_002bdd18,1);
  *(undefined4 *)(param_1 + 0xbc) = uVar4;
  uVar4 = (**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_002bdd28,1);
  *(undefined4 *)(param_1 + 0xc0) = uVar4;
  uVar4 = fn_006b6210(*(undefined4 *)(DAT_00897804 + 8));
  fn_0018a618(&local_40,10,9,&DAT_002bd8d0,uVar4);
  fn_00190d50(*(undefined4 *)(param_1 + 0xc0),&local_40);
  uVar4 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  fn_0018a618(&local_40,10,9,&DAT_002bd8d0,uVar4);
  fn_00190d50(*(undefined4 *)(param_1 + 0xbc),&local_40);
  local_2c[0] = 0x8c000000;
  fn_00163988(DAT_00897808,local_2c,1);
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  if (local_4c != &DAT_008f9cf4) {
    piVar9 = local_4c + -3;
    iVar6 = *piVar9;
    if ((iVar6 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_4c + -3,local_4c[-2] + 8,0);
    }
  }
  if (local_50 != &DAT_008f9cf4) {
    piVar9 = local_50 + -3;
    iVar6 = *piVar9;
    if ((iVar6 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_50 + -3,local_50[-2] + 8,0);
    }
  }
  if (local_54 != &DAT_008f9cf4) {
    piVar9 = local_54 + -3;
    iVar6 = *piVar9;
    if ((iVar6 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_54 + -3,local_54[-2] + 8,0);
    }
  }
  if (local_58 != &DAT_008f9cf4) {
    piVar9 = local_58 + -3;
    iVar6 = *piVar9;
    if ((iVar6 == -1) || ((piVar9 != &DAT_008f9ce8 && (*piVar9 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_58 + -3,local_58[-2] + 8,0);
    }
  }
  return uVar3;
}



void fn_00158400(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  code *pcVar4;
  
  piVar3 = (int *)param_1[2];
  iVar1 = piVar3[6];
  if (iVar1 == 0x2010000) goto LAB_0015849c;
  pcVar4 = DAT_0089a524;
  if (iVar1 < 0x2010000) {
    if (iVar1 == 0x1010000) {
      if ((piVar3[1] == 0) || (DAT_0089a524 == (code *)0x0)) goto LAB_0015849c;
    }
    else {
      if (iVar1 != 0x1020000 && iVar1 != 0x1030000) goto LAB_0015849c;
      if (*piVar3 != 0 && DAT_0089a524 != (code *)0x0) {
        (*DAT_0089a524)(piVar3[5],0x102,*param_1);
      }
      if (piVar3[1] != 0) {
        pcVar4 = DAT_0089a524;
      }
      if (piVar3[1] == 0 || pcVar4 == (code *)0x0) goto LAB_0015849c;
    }
    uVar2 = *param_1;
    iVar1 = 0x10000;
  }
  else {
    if ((iVar1 != 0x2020000 && iVar1 != 0x2030000) || (*piVar3 == 0 || DAT_0089a524 == (code *)0x0))
    goto LAB_0015849c;
    uVar2 = *param_1;
    iVar1 = piVar3[5];
  }
  (*pcVar4)(iVar1,0x102,uVar2);
LAB_0015849c:
  *piVar3 = 0;
  piVar3[1] = 0;
  return;
}



int fn_00146fb0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_0089a520 == (code *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*DAT_0089a520)(0x10000,0x100,0,0x348);
    if (iVar4 != 0) {
      fn_00301f50(iVar4,0x348);
      iVar3 = 0;
      do {
        iVar2 = iVar4 + iVar3 * 0x10;
        iVar5 = iVar4 + iVar3 * 0x18;
        iVar1 = iVar3 + 1;
        *(undefined4 *)(iVar5 + 4) = 4;
        *(undefined4 *)(iVar5 + 8) = 0x1406;
        *(undefined4 *)(iVar2 + 400) = 0;
        *(undefined4 *)(iVar2 + 0x18c) = 0;
        *(undefined4 *)(iVar2 + 0x188) = 0;
        *(undefined4 *)(iVar2 + 0x194) = 0x3f800000;
        iVar3 = iVar4 + iVar3 * 0xc;
        *(undefined4 *)(iVar3 + 0x28c) = 0;
        *(undefined4 *)(iVar3 + 0x288) = 0x3f000000;
        *(undefined4 *)(iVar3 + 0x290) = 0;
        iVar3 = iVar1;
      } while (iVar1 < 0x10);
    }
  }
  return iVar4;
}


