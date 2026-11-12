#include "005f7a38_005f8eec.h"



void fn_005f8eec(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2c);
  *puVar1 = &DAT_0084df04;
  return;
}



undefined4 fn_005f86a0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 local_4a8 [266];
  wchar16 *pwStack_80;
  char *pcStack_7c;
  int local_78;
  undefined4 local_74;
  int local_6c;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined4 local_4c;
  undefined1 auStack_44 [36];
  
  fn_0057a168();
  piVar5 = *(int **)(param_1 + 0xe8);
  uVar4 = *(uint *)(param_1 + 0x108);
  uVar2 = piVar5[1] - *piVar5;
  iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
  if ((uint)((iVar3 >> 10) - (iVar3 >> 0x1f)) <= uVar4) {
    iVar3 = (int)((longlong)(int)uVar2 * -0x99fc267 + ((ulonglong)uVar2 << 0x20) >> 0x20);
    fn_002ff628(9,&DAT_008c761b,&DAT_008c761b,uVar4,(iVar3 >> 10) - (iVar3 >> 0x1f));
  }
  fn_0017821c(local_4a8,*piVar5 + uVar4 * 0x428,0x428);
  uVar2 = 0;
  *(undefined2 *)(param_1 + 0x126) = 0;
  do {
    iVar3 = fn_0035bdd0(param_1 + 0xe4,local_4a8,(int)(short)(&DAT_007c0d80)[uVar2]);
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + *(short *)(param_1 + 0x126) * 2 + 0x11c) = (&DAT_007c0d80)[uVar2];
      *(short *)(param_1 + 0x126) = *(short *)(param_1 + 0x126) + 1;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 5);
  fn_00397774(&pwStack_80);
  pwStack_80 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_7c = (char *)&DAT_005f88e0;
  local_6c = (int)*(short *)(param_1 + 0x126);
  local_78 = (int)*(short *)(param_1 + 0x126);
  if (8 < local_78) {
    local_78 = 9;
  }
  local_74 = *(undefined4 *)(*(int *)(param_1 + 0x104) + 0x10);
  uVar1 = fn_0057a3c4(param_1);
  fn_00147974(auStack_64,uVar1);
  local_54 = 0;
  local_53 = 0;
  local_52 = 1;
  uVar1 = fn_0022f750(&DAT_005f88f4);
  fn_00147974(auStack_60,uVar1);
  local_4c = 1;
  fn_00397618(param_1,&pwStack_80);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar3 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar3 + 0x81) = 1;
  fn_0031f3f4(iVar3,0);
  fn_00100414(auStack_44,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_58);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  fn_0057a3dc(param_1);
  fn_0057a634(param_1);
  fn_005f88fc(param_1);
  fn_00689efc(param_1,0x2d,0);
  fn_0025f3f4(*(undefined4 *)(param_1 + 0x100),local_4a8[0]);
  return 1;
}



void fn_005f81d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  fn_005ab934();
  iVar1 = *(int *)(param_1 + 0x108) + 1;
  if (iVar1 == 3) {
    param_3 = 0;
  }
  *(int *)(param_1 + 0x108) = iVar1;
  if (iVar1 == 3) {
    *(undefined4 *)(param_1 + 0x108) = param_3;
  }
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 0) {
    uVar2 = 5;
  }
  else if (iVar1 == 1) {
    uVar2 = 2;
  }
  else {
    uVar2 = extraout_r1;
    if (iVar1 == 2) {
      uVar2 = 4;
    }
  }
  fn_0022de40(*(int *)(param_1 + 0xe4) + 0xc,uVar2);
  fn_005f84a0(param_1);
  uVar2 = fn_00231cb8((&DAT_007bd6ea)[*(int *)(param_1 + 0x108)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_005f7ef8(void)

{
                    /* WARNING: Subroutine does not return */
  fn_005ab924();
}



undefined4 fn_005f7a38(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  uint *puVar5;
  undefined2 *puVar6;
  undefined4 extraout_r1;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  wchar16 *local_64;
  char *pcStack_60;
  int local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_32;
  undefined1 local_31;
  uint local_30;
  uint auStack_2c [2];
  
  fn_005ab63c();
  *(int *)(param_1 + 0x104) =
       *(int *)(*(int *)(param_1 + 0xe4) + 0x10) - *(int *)(*(int *)(param_1 + 0xe4) + 0xc) >> 1;
  fn_002c330c(&local_64);
  local_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_005f7e0c;
  iVar1 = *(int *)(param_1 + 0x104);
  local_38 = 9 < iVar1;
  local_5c = iVar1;
  if ((bool)local_38) {
    local_5c = 10;
    local_50 = iVar1;
  }
  local_58 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x3c);
  puVar2 = (undefined4 *)fn_005ab7a4(param_1);
  uVar3 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar4 = local_48 + -3;
    iVar1 = *piVar4;
    if (iVar1 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_005f7cc8;
    }
    local_48[-1] = 0;
    puVar2 = local_48;
  }
  else {
    uVar7 = local_48[-3] + 1;
    bVar11 = local_48[-3] != -1;
    bVar10 = uVar7 == 1;
    if (uVar7 < 2) {
      bVar11 = (uint)local_48[-2] <= uVar3;
      bVar10 = uVar3 == local_48[-2];
    }
    if (bVar11 && !bVar10) {
LAB_005f7b18:
      uVar7 = local_48[-1];
      local_30 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
      if (local_30 < uVar7 + 0x80) {
        local_30 = uVar7 + 0x80;
      }
      puVar5 = auStack_2c;
      if (uVar3 <= local_30) {
        puVar5 = &local_30;
      }
      auStack_2c[0] = uVar3;
      uVar7 = *puVar5;
      if (0xfffffff1 < uVar7) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar7,0xfffffff1);
      }
      if (uVar7 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar7);
      }
      if (uVar7 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar7 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar3;
        puVar6 = (undefined2 *)((int)puVar9 + uVar3 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar7;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar2,uVar3 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar1 = *piVar4;
        if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar9 + 3;
      goto LAB_005f7cc8;
    }
    if (puVar2 != (undefined4 *)0x0) {
      bVar10 = puVar2 <= local_48;
      if (local_48 <= puVar2) {
        bVar10 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar2;
      }
      if (!bVar10) goto LAB_005f7b18;
    }
    fn_001006ac(local_48,puVar2,uVar3);
    local_48[-1] = uVar3;
    puVar2 = (undefined4 *)((int)local_48 + uVar3 * 2);
  }
  *(undefined2 *)puVar2 = 0;
LAB_005f7cc8:
  local_35 = 1;
  local_4c = 0x428c0000;
  local_34 = 0;
  local_32 = 0;
  local_31 = 0;
  fn_002c29a0(param_1,&local_64);
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar1 = *piVar4;
    if ((iVar1 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  uVar8 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x38);
  fn_0025f2d0(*(undefined4 *)(param_1 + 0x9c),uVar8);
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) = uVar8;
  fn_002a3c70(*(undefined4 *)(param_1 + 0xe8),0,0xe1,1);
  fn_00689efc(param_1,0xe1,0);
  fn_005ab5a0(param_1);
  iVar1 = *(int *)(param_1 + 0x108);
  if (iVar1 == 0) {
    uVar8 = 5;
  }
  else if (iVar1 == 1) {
    uVar8 = 2;
  }
  else {
    uVar8 = extraout_r1;
    if (iVar1 == 2) {
      uVar8 = 4;
    }
  }
  fn_0022de40(*(int *)(param_1 + 0xe4) + 0xc,uVar8);
  fn_005f84a0(param_1);
  uVar8 = fn_00231cb8((&DAT_007bd6ea)[*(int *)(param_1 + 0x108)]);
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar8);
  fn_005f84a0(param_1);
  return 1;
}



void fn_005f84a0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint local_28;
  undefined4 *local_24;
  
  uVar4 = 0;
  do {
    iVar2 = fn_006ba284(param_1);
    uVar5 = uVar4 + iVar2 * 10;
    if ((int)uVar5 < *(int *)(param_1 + 0x104)) {
      piVar6 = (int *)(*(int *)(param_1 + 0xe4) + 0xc);
      uVar1 = *(int *)(*(int *)(param_1 + 0xe4) + 0x10) - *piVar6 >> 1;
      if (uVar1 <= uVar5) {
        local_28 = uVar1;
        fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar5);
      }
      iVar2 = (int)*(short *)(*piVar6 + uVar5 * 2);
      fn_002317d8(&local_24,iVar2,1);
      fn_0031b78c(param_1,uVar4,0,local_24);
      if (*(char *)(*(int *)(*(int *)(param_1 + 0xe4) + 0x18) + iVar2) == '\0') {
        local_28 = DAT_00890d60;
        fn_002c37e0(param_1,uVar4,&local_28);
      }
      else {
        local_28 = DAT_00890d68;
        fn_002c37e0(param_1,uVar4,&local_28);
      }
      fn_00661714(iVar2);
      uVar3 = fn_0023051c();
      fn_0031b78c(param_1,uVar4,4,uVar3);
      if (local_24 != &DAT_008f9cf4) {
        piVar6 = local_24 + -3;
        iVar2 = *piVar6;
        if (iVar2 == -1) {
LAB_005f85dc:
          fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
        }
        else if (piVar6 != &DAT_008f9ce8) {
          *piVar6 = iVar2 + -1;
          if (iVar2 == 0) goto LAB_005f85dc;
        }
      }
    }
    else if (9 < *(int *)(param_1 + 0x104)) {
      uVar5 = *(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2;
      if (uVar5 <= uVar4) {
        local_28 = uVar5;
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar4);
      }
      fn_0031b3c4(*(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4),0xffffffff);
    }
    uVar4 = uVar4 + 1;
    if (9 < (int)uVar4) {
      return;
    }
  } while( true );
}


