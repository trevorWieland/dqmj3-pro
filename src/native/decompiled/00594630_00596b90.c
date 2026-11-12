#include "00594630_00596b90.h"



void fn_00596b90(int param_1)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x154) == 2) {
    if (*(int *)(param_1 + 0x15c) != 0) {
      if (*(int *)(param_1 + 0x150) < 10) {
        if (*(int *)(param_1 + 0x150) < 1) {
          pcVar1 = (char *)&DAT_00596880;
        }
        else {
          pcVar1 = (char *)&DAT_00596868;
        }
      }
      else {
        pcVar1 = (char *)&DAT_00596858;
      }
      uVar2 = fn_0022f750(pcVar1);
      fn_00190d50(*(undefined4 *)(param_1 + 0x15c),uVar2);
    }
    *(undefined4 *)(param_1 + 0x154) = 3;
  }
  return;
}



undefined4 fn_00595364(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xb1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895c98) goto LAB_005953b4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005953b4:
  iVar8 = 0;
  iVar6 = puVar1[4];
  iVar7 = 2;
  iVar3 = fn_00163d44(0);
  if ((iVar3 == 0x32) && (uVar4 = fn_00163d44(0x32), 7 < uVar4)) {
    iVar8 = 1;
  }
  if (iVar6 == 1) {
    iVar7 = 0;
  }
  else if (iVar6 - 2U < 4) {
    iVar7 = 1;
  }
  uVar5 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       *(undefined4 *)(iVar7 * 8 + 0x895c50 + iVar8 * 4),&DAT_00595460,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar5;
  uVar5 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar5,
                       (&PTR_s_gp_result_01_bflyt_00895c68)[iVar7 * 2 + iVar8],&LAB_00595468,0,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar5;
  return 1;
}



undefined4 fn_00594c60(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint *puVar6;
  int iVar7;
  undefined2 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  bool bVar11;
  bool bVar12;
  wchar16 *pwStack_64;
  char *pcStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  uint local_30;
  uint local_2c [2];
  
  fn_002c330c(&pwStack_64);
  local_50 = 3;
  local_5c = 3;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_00595018;
  local_58 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_0059502c);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_00594eb8;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar9 = local_48[-3] + 1;
    bVar12 = local_48[-3] != -1;
    bVar11 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar12 = (uint)local_48[-2] <= uVar2;
      bVar11 = uVar2 == local_48[-2];
    }
    if (bVar12 && !bVar11) {
LAB_00594d08:
      uVar9 = local_48[-1];
      local_30 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_30 < uVar9 + 0x80) {
        local_30 = uVar9 + 0x80;
      }
      local_2c[0] = uVar2;
      puVar6 = &local_30;
      if (local_30 < uVar2) {
        puVar6 = local_2c;
      }
      uVar9 = *puVar6;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar9);
      }
      if (uVar9 != 0) {
        puVar10 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar10 != (undefined4 *)0x0) {
          *puVar10 = 0;
          puVar10[1] = 0;
          puVar10[2] = 0;
        }
        puVar10[2] = uVar2;
        puVar8 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar9;
        if (puVar8 != (undefined2 *)0x0) {
          *puVar8 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar3 = local_48 + -3;
        iVar7 = *piVar3;
        if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar10 + 3;
      goto LAB_00594eb8;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_00594d08;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_00594eb8:
  local_38 = 0;
  local_37 = 0;
  uVar4 = fn_002c29a0(param_1,&pwStack_64);
  uVar2 = 0;
  do {
    uVar5 = fn_0022f750((&DAT_007cb050)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar5);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 3);
  fn_00689efc(param_1,0xee,0);
  *(undefined **)(param_1 + 0xc4) = &DAT_0059508c;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_0059508c;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_0059508c;
  *(undefined4 *)(param_1 + 0xb8) = 0;
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
  if (local_48 != &DAT_008f9cf4) {
    piVar3 = local_48 + -3;
    iVar7 = *piVar3;
    if ((iVar7 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return uVar4;
}



void fn_00594630(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  
  iVar1 = fn_002f6fa8();
  if (param_1[0x21] == 0) {
    fn_0042038c(iVar1);
    fn_00268758(*(undefined4 *)(iVar1 + 0x5b3a4),(char *)&DAT_004204c4,iVar1 + 0x20,0x14,3,1);
    return;
  }
  iVar2 = fn_006cda14();
  puVar8 = (undefined4 *)0x0;
  if (iVar2 == 0) {
    puVar10 = (undefined4 *)param_1[6];
    if (puVar10 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
      do {
        if (puVar3 == &DAT_00897100) goto LAB_00594814;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar10 = (undefined4 *)0x0;
LAB_00594814:
    if (puVar10[5] == 0) {
      fn_002f8914();
      iVar2 = fn_002f7e84();
      iVar7 = fn_002f6fa8();
      iVar2 = fn_002f84f4(iVar7 + 0x20,iVar2 + 0x3d0);
      if (iVar2 == 0) {
        fn_00594b70(param_1,(char *)&DAT_005949e8);
        pcVar6 = fn_00594a08;
        goto LAB_0059497c;
      }
    }
    switch(*(undefined1 *)(iVar1 + 4)) {
    case 0:
      goto switchD_0059486c_caseD_0;
    case 1:
    case 2:
      fn_00594b70(param_1,(char *)&DAT_0059498c);
      param_1[0x1e] = (int)fn_00594a08;
      param_1[0x1f] = 0;
      return;
    case 3:
      fn_00594b70(param_1,(char *)&DAT_005949c4);
      param_1[0x1e] = (int)fn_00594a08;
      param_1[0x1f] = 0;
      return;
    case 4:
      fn_00594b70(param_1,(char *)&DAT_005949a4);
      param_1[0x1e] = (int)fn_00594a08;
      param_1[0x1f] = 0;
      return;
    default:
      fn_00594b70(param_1,(char *)&DAT_005949c4);
      param_1[0x1e] = (int)fn_00594a08;
      param_1[0x1f] = 0;
      return;
    }
  }
  iVar2 = fn_006cda24(iVar1);
  if (iVar2 != 0) {
    puVar10 = (undefined4 *)param_1[6];
    if (puVar10 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
      do {
        if (puVar3 == &DAT_00897100) goto LAB_005946b0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar10 = (undefined4 *)0x0;
LAB_005946b0:
    if (*(char *)(puVar10 + 6) != '\0') {
      puVar10 = (undefined4 *)param_1[6];
      if (puVar10 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
        do {
          if (puVar3 == &DAT_00897100) {
            puVar8 = puVar10;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      if (*(char *)((int)puVar8 + 0x19) == '\0') {
        uVar9 = 2;
      }
      else {
        uVar9 = 3;
      }
      uVar4 = fn_006b723c(iVar1);
      uVar5 = fn_002f8364(param_1);
      fn_003ca418(uVar5,uVar9,uVar4);
      pcVar6 = (code *)&DAT_0059462c;
LAB_0059497c:
      param_1[0x1e] = (int)pcVar6;
      param_1[0x1f] = 0;
      return;
    }
    fn_006b723c(iVar1);
    fn_002f61d0();
    fn_0041fde8(iVar1);
    fn_00267fa4(iVar1);
    puVar10 = (undefined4 *)param_1[6];
    if (puVar10 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
      do {
        if (puVar3 == &DAT_00897100) {
          puVar8 = puVar10;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    *(undefined1 *)(puVar8 + 4) = 2;
    (**(code **)(*param_1 + 0x28))(param_1,0,0);
    param_1[0x1e] = (int)&DAT_0059462c;
    param_1[0x1f] = 0;
  }
  return;
switchD_0059486c_caseD_0:
  puVar10 = (undefined4 *)param_1[6];
  if (puVar10 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar3 == &DAT_00897100) {
        puVar8 = puVar10;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  *(undefined1 *)(puVar8 + 4) = 1;
                    /* WARNING: Could not recover jumptable at 0x005948e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x28))(param_1,0,0);
  return;
}


