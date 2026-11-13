#include "0040e41c_0040f04c.h"



undefined4 * fn_0040f04c(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 unaff_r4;
  
  iVar1 = fn_00145b00(200,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_003f59d0(iVar1,param_1);
  *puVar2 = &DAT_008382c8;
  puVar2[0x31] = 0;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0x33);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008951c0) goto LAB_0040f52c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0040f52c:
  puVar2[0x31] = puVar3;
  fn_00689efc(puVar2,0x33,0,0,unaff_r4);
  return puVar2;
}



void fn_0040efb8(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  uint local_10;
  
  uVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) *
          (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar1 = *(int *)(param_1 + 0xb8) - *(int *)(param_1 + 0xb4) >> 1;
  local_10 = param_4;
  if (uVar1 <= uVar3) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar3);
    local_10 = uVar1;
  }
  iVar4 = (int)*(short *)(*(int *)(param_1 + 0xb4) + uVar3 * 2);
  uVar2 = fn_006b7e7c(*(undefined4 *)(DAT_00897804 + 0x24),iVar4);
  fn_0036c924(*(undefined4 *)(param_1 + 0xc4),iVar4,uVar2,local_10);
  return;
}



void fn_0040e990(undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  
  piVar2 = (int *)fn_006896fc(param_1,0xd1);
  if (piVar2 == (int *)0x0) {
    return;
  }
  puVar3 = (undefined4 *)(**(code **)(*piVar2 + 0xc))(piVar2);
  do {
    if (puVar3 == &DAT_00893efc) goto LAB_0040e9d4;
    puVar3 = (undefined4 *)*puVar3;
  } while (puVar3 != (undefined4 *)0x0);
  piVar2 = (int *)0x0;
LAB_0040e9d4:
  if (piVar2[0x1a] == 1) {
    iVar1 = (**(code **)(*piVar2 + 8))(piVar2);
    iVar1 = fn_00178f9c(*(undefined4 *)(iVar1 + 8),piVar2[0x30]);
    if (((*(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 1) != 0) &&
       (iVar1 = piVar2[0x2b], piVar2[0x2b] = iVar1 + 1, piVar2[0x2e] < iVar1 + 1)) {
      piVar2[0x2b] = 0;
    }
  }
  return;
}



void fn_0040e884(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
  iVar1 = *(int *)(param_1 + 0xcc);
  iVar3 = *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) * iVar2;
  if (iVar1 == param_2) {
    iVar2 = *(int *)(param_1 + 0xd0);
  }
  if (iVar1 != param_2 || iVar2 != iVar3) {
    if (-1 < iVar1) {
      iVar1 = iVar1 + *(int *)(param_1 + 0xd0);
      iVar2 = fn_003ba200(*(undefined4 *)(param_1 + 0xc4),*(int *)(param_1 + 200) * iVar1 + 1);
      if (iVar2 != 0) {
        fn_00289cc0(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)iVar1);
        fn_002c32c4(param_1,*(undefined4 *)(param_1 + 0xcc),0);
      }
    }
    *(int *)(param_1 + 0xd0) = iVar3;
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x1c) = (iVar3 + param_2) * *(int *)(param_1 + 200) + 1;
  }
  return;
}



undefined4 fn_0040e41c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  uint local_a4;
  uint auStack_a0 [2];
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_29;
  
  puVar10 = (undefined4 *)param_1[6];
  if (puVar10 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar1 == &DAT_0089292c) goto LAB_0040e464;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_0040e464:
  uVar2 = (**(code **)(*param_1 + 0x154))(param_1);
  fn_002c330c(&local_58);
  local_58 = DAT_008929d8;
  uStack_54 = DAT_008929dc;
  uStack_50 = 10;
  uStack_4c = 0;
  local_98 = 0;
  local_94 = 0;
  local_90 = 0;
  local_8c = 0;
  local_88 = 0;
  local_84 = 0;
  local_80 = 0;
  local_7c = 0;
  local_78 = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_44 = uVar2;
  fn_0037bef8(&local_98,0x20,6,puVar10[3]);
  puVar1 = &local_98;
  uVar3 = fn_00100b58(puVar1);
  puVar10 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar5 = local_3c + -3;
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      if ((local_3c != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
      local_3c = &DAT_008f9cf4;
      goto LAB_0040e704;
    }
    local_3c[-1] = 0;
    puVar10 = local_3c;
LAB_0040e700:
    *(undefined2 *)puVar10 = 0;
  }
  else {
    uVar9 = local_3c[-3] + 1;
    bVar12 = local_3c[-3] != -1;
    bVar11 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar12 = (uint)local_3c[-2] <= uVar3;
      bVar11 = uVar3 == local_3c[-2];
    }
    if (!bVar12 || bVar11) {
      puVar4 = local_3c;
      if (puVar1 >= local_3c) {
        puVar4 = (undefined4 *)((int)local_3c + local_3c[-1] * 2);
      }
      if ((puVar1 < local_3c || puVar4 < puVar1) || puVar1 == puVar4) {
        fn_001006ac(local_3c,puVar1,uVar3);
        local_3c[-1] = uVar3;
        puVar10 = (undefined4 *)((int)local_3c + uVar3 * 2);
        goto LAB_0040e700;
      }
    }
    uVar9 = local_3c[-1];
    local_a4 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_a4 < uVar9 + 0x80) {
      local_a4 = uVar9 + 0x80;
    }
    puVar6 = auStack_a0;
    if (uVar3 <= local_a4) {
      puVar6 = &local_a4;
    }
    auStack_a0[0] = uVar3;
    uVar9 = *puVar6;
    if (0xfffffff1 < uVar9) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
    }
    if (uVar9 < uVar3) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar9);
    }
    if (uVar9 != 0) {
      puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = 0;
        puVar10[1] = 0;
        puVar10[2] = 0;
      }
      puVar10[2] = uVar3;
      puVar7 = (undefined2 *)((int)puVar10 + uVar3 * 2 + 0xc);
      *puVar10 = 0;
      puVar10[1] = uVar9;
      if (puVar7 != (undefined2 *)0x0) {
        *puVar7 = 0;
      }
    }
    fn_00301a9c(puVar10 + 3,puVar1,uVar3 << 1);
    if (local_3c != &DAT_008f9cf4) {
      piVar5 = local_3c + -3;
      iVar8 = *piVar5;
      if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
    }
    local_3c = puVar10 + 3;
  }
LAB_0040e704:
  local_2c = 1;
  local_2b = 0;
  local_29 = 0;
  local_40 = 0x42c00000;
  fn_002c29a0(param_1,&local_58);
  (**(code **)(*(int *)param_1[0x1d] + 0x20))((int *)param_1[0x1d],0);
  (**(code **)(*param_1 + 0x124))(param_1);
  param_1[0x2c] = 0;
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar5 = local_38 + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar5 = local_3c + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return 1;
}


