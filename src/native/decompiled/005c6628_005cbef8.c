#include "005c6628_005cbef8.h"



undefined4 fn_005cbef8(undefined4 param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined4 *puVar9;
  bool bVar10;
  uint local_70 [3];
  uint local_64;
  wchar16 *pwStack_60;
  char *pcStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_4c;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  
  fn_002c330c(&pwStack_60);
  local_4c = 2;
  local_58 = 2;
  pwStack_60 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_5c = (char *)&DAT_005cc2ac;
  local_54 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_002f6534(param_1);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_44 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_44 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
      }
      local_44 = &DAT_008f9cf4;
      goto LAB_005cc150;
    }
    local_44[-1] = 0;
    puVar1 = local_44;
  }
  else {
    if ((1 < local_44[-3] + 1) || ((uint)local_44[-2] < uVar2)) {
LAB_005cbfa4:
      uVar5 = local_44[-1];
      local_70[0] = uVar2;
      local_64 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_64 < uVar5 + 0x80) {
        local_64 = uVar5 + 0x80;
      }
      puVar8 = local_70;
      if (uVar2 <= local_64) {
        puVar8 = &local_64;
      }
      uVar5 = *puVar8;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar5);
      }
      if (uVar5 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar6 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar5;
        puVar9[2] = uVar2;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_44 != &DAT_008f9cf4) {
        piVar3 = local_44 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
        }
      }
      local_44 = puVar9 + 3;
      goto LAB_005cc150;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_44;
      if (local_44 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_44 + local_44[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_005cbfa4;
    }
    fn_001006ac(local_44,puVar1,uVar2);
    local_44[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_44 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005cc150:
  fn_002c29a0(param_1,&pwStack_60);
  uVar2 = 0;
  do {
    uVar4 = fn_0022f750((&DAT_00896f80)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 2);
  if (local_38 != &DAT_008f9cf4) {
    piVar3 = local_38 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar3 = local_3c + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar3 = local_40 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar3 = local_44 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  return 1;
}



void fn_005caba4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  
  iVar2 = fn_0022cdf0();
  if (iVar2 != 0) {
    if (*(short *)(param_1 + 0xa8) != *(short *)(*(int *)(param_1 + 0x98) + 0x1c)) {
      if (*(int *)(param_1 + 0xac) != 0) {
        iVar5 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
        iVar2 = fn_0028bcf4(iVar5);
        if ((iVar2 == 0) && (iVar2 = fn_0028bbc0(iVar5), iVar2 == 0)) {
          fn_002b427c(*(undefined4 *)(param_1 + 0xac),iVar5);
          fn_002b4348(*(undefined4 *)(param_1 + 0xac),0);
          iVar2 = *(int *)(param_1 + 0xac);
          uVar4 = 1;
        }
        else {
          fn_002b427c(*(undefined4 *)(param_1 + 0xac),iVar5);
          uVar3 = fn_0066173c(iVar5);
          fn_002b4348(*(undefined4 *)(param_1 + 0xac),uVar3);
          iVar2 = *(int *)(param_1 + 0xac);
          uVar4 = 0;
        }
        *(undefined1 *)(iVar2 + 0x3b) = uVar4;
      }
      fn_005ca924(param_1);
      iVar5 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
      iVar2 = fn_0028bcf4(iVar5);
      if ((iVar2 == 0) && (iVar2 = fn_0028bbc0(iVar5), iVar2 == 0)) {
        *(undefined1 *)(*(int *)(param_1 + 0x98) + 0x25) = 0;
      }
    }
    if (*(int **)(param_1 + 0xac) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0xac) + 0x14))();
    }
    fn_003bbdc0(param_1);
    sVar1 = *(short *)(*(int *)(param_1 + 0x98) + 0x1c);
    if (*(short *)(param_1 + 0xa8) != sVar1) {
      *(short *)(param_1 + 0xa8) = sVar1;
    }
  }
  return;
}



void fn_005ca924(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  undefined2 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint local_2c;
  uint uStack_28;
  
  iVar9 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar1 = fn_0028bcf4(iVar9);
  if ((iVar1 != 0) || (iVar1 = fn_0028bbc0(iVar9), iVar1 != 0)) {
    return;
  }
  puVar2 = (undefined4 *)fn_0022f584((char *)&DAT_005cab88,0);
  piVar10 = (int *)(*(int *)(param_1 + 0x98) + 0x20);
  uVar3 = fn_00100b58(puVar2);
  puVar11 = &DAT_008f9ce8;
  puVar4 = (undefined4 *)*piVar10;
  if (uVar3 == 0) {
    piVar7 = puVar4 + -3;
    iVar1 = *piVar7;
    if (iVar1 != 0) {
      if ((puVar4 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
      }
      *piVar10 = (int)&DAT_008f9cf4;
      return;
    }
    puVar4[-1] = 0;
    puVar8 = (undefined2 *)*piVar10;
  }
  else {
    if (((1 < puVar4[-3] + 1) || ((uint)puVar4[-2] < uVar3)) ||
       ((puVar2 != (undefined4 *)0x0 &&
        ((puVar4 <= puVar2 && (puVar2 < (undefined4 *)((int)puVar4 + puVar4[-1] * 2))))))) {
      uVar5 = puVar4[-1];
      local_2c = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_2c < uVar5 + 0x80) {
        local_2c = uVar5 + 0x80;
      }
      puVar6 = &uStack_28;
      if (uVar3 <= local_2c) {
        puVar6 = &local_2c;
      }
      uStack_28 = uVar3;
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
      }
      if (uVar5 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar5);
      }
      if (uVar5 != 0) {
        puVar11 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
        }
        puVar8 = (undefined2 *)((int)puVar11 + uVar3 * 2 + 0xc);
        *puVar11 = 0;
        puVar11[1] = uVar5;
        puVar11[2] = uVar3;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      fn_00301a9c(puVar11 + 3,puVar2,uVar3 << 1);
      if ((undefined4 *)*piVar10 != &DAT_008f9cf4) {
        piVar7 = (undefined4 *)*piVar10 + -3;
        iVar1 = *piVar7;
        if ((iVar1 == -1) || ((piVar7 != &DAT_008f9ce8 && (*piVar7 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(*piVar10 + -0xc,*(int *)(*piVar10 + -8) + 8,0);
        }
      }
      *piVar10 = (int)(puVar11 + 3);
      return;
    }
    fn_001006ac(puVar4,puVar2,uVar3);
    *(uint *)(*piVar10 + -4) = uVar3;
    puVar8 = (undefined2 *)(*piVar10 + uVar3 * 2);
  }
  *puVar8 = 0;
  return;
}



void fn_005ca60c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x24);
  puVar1[0x16] = 0;
  *puVar1 = &DAT_0084b28c;
  return;
}



void fn_005c6628(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar3 = auStack_18;
  if (param_3 == 0) {
    uVar1 = fn_0022f750((char *)&DAT_005c66d4);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 1) {
    uVar1 = fn_0022f750((char *)&DAT_005c66e8);
    fn_00168a24(param_1,uVar1,auStack_14);
    return;
  }
  if (param_3 == 2) {
    puVar3 = auStack_14;
    fn_004116c4(param_2,param_2,2);
    puVar2 = (undefined *)fn_0022f750();
  }
  else {
    puVar2 = &DAT_005c66d0;
  }
  fn_00168a24(param_1,puVar2,puVar3);
  return;
}


