#include "0043b93c_0043c368.h"



void fn_0043c368(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x124,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043c598(iVar1,param_1);
  return;
}



void fn_0043c330(void)

{
                    /* WARNING: Subroutine does not return */
  fn_002c3de4();
}



void fn_0043c304(int param_1)

{
  fn_002c3d68();
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14) = 0;
  fn_00689824(param_1);
  *(undefined1 *)(param_1 + 0x120) = 2;
  return;
}



void fn_0043bf08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  iVar3 = 0;
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar6);
  if (0 < iVar1) {
    do {
      uVar2 = fn_0028b0a0(uVar6,iVar5);
      *(undefined4 *)(param_1 + iVar3 * 4 + 0xf4) = uVar2;
      fn_0043c1b4(param_1,iVar3,uVar2,0);
      if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) == 0) {
        fn_0020bbc4(auStack_28,uVar2);
        iVar1 = fn_006bf0f0(auStack_24);
        uVar2 = fn_0022f584((&PTR_s_MenuMessageBattleTactics000_00895a48)[iVar1],0);
        fn_0031b78c(param_1,iVar3,4,uVar2);
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = fn_006b83e4(uVar6);
    } while (iVar5 < iVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0xe4) + 0x24) == '\0') {
    iVar5 = 0;
    iVar1 = fn_006b84b0(uVar6);
    if (0 < iVar1) {
      do {
        uVar2 = fn_0028b348(uVar6,iVar5);
        *(undefined4 *)(param_1 + iVar3 * 4 + 0xf4) = uVar2;
        fn_0043c1b4(param_1,iVar3,uVar2,1);
        if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) == 0) {
          fn_0020bbc4(auStack_28,uVar2);
          iVar1 = fn_006bf0f0(auStack_24);
          uVar2 = fn_0022f584((&PTR_s_MenuMessageBattleTactics000_00895a48)[iVar1],0);
          fn_0031b78c(param_1,iVar3,4,uVar2);
        }
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 1;
        iVar1 = fn_006b84b0(uVar6);
      } while (iVar5 < iVar1);
    }
  }
  if (0 < 9 - iVar3) {
    iVar5 = 0;
    iVar7 = 0;
    iVar1 = (9 - iVar3) % 9;
    if (0 < iVar1) {
      do {
        iVar4 = iVar3 + iVar5;
        iVar7 = iVar7 + 1;
        iVar5 = iVar5 + 1;
        *(undefined4 *)(param_1 + iVar4 * 4 + 0xf4) = 0;
      } while (iVar7 < iVar1);
    }
    for (; iVar1 < 9 - iVar3; iVar1 = iVar1 + 9) {
      *(undefined4 *)(param_1 + (iVar3 + iVar5) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 1) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 2) * 4 + 0xf4) = 0;
      iVar7 = iVar5 + 8;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 3) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 4) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 5) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 6) * 4 + 0xf4) = 0;
      *(undefined4 *)(param_1 + (iVar3 + iVar5 + 7) * 4 + 0xf4) = 0;
      iVar5 = iVar5 + 9;
      *(undefined4 *)(param_1 + (iVar3 + iVar7) * 4 + 0xf4) = 0;
    }
  }
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_0043c1b4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_60;
  undefined4 local_44;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [8];
  int iStack_34;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  fn_00231074(&local_44,param_3,0);
  fn_0031b78c(param_1,local_30,1,local_44);
  uVar2 = fn_00230a84(param_4,0);
  fn_0031b78c(param_1,local_30,7,uVar2);
  if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) == 1) {
    fn_0020bbc4(auStack_40,*(undefined4 *)(param_1 + local_30 * 4 + 0xf4));
    iVar3 = fn_006c02d4(auStack_3c,&local_60,7);
    iVar7 = 0;
    if (0 < iVar3) {
      do {
        sVar1 = *(short *)(auStack_40 + iVar7 * 4 + -0x20);
        iVar4 = fn_0068f708((int)sVar1,*(undefined2 *)(auStack_40 + iVar7 * 4 + -0x1e));
        iVar6 = 0;
        if (0 < iVar4) {
          do {
            iVar5 = fn_0068f7c4((int)sVar1,iVar6 + 1U & 0xff);
            if (iVar5 != 0) {
              local_60 = _DAT_00895a1c;
              fn_002c37e0(param_1,local_30,&local_60);
              goto LAB_0043c2f0;
            }
            iVar6 = iVar6 + 1;
          } while (iVar6 < iVar4);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar3);
    }
    local_60 = _DAT_00895a24;
    fn_002c37e0(param_1,local_30,&local_60);
  }
LAB_0043c2f0:
  fn_001588d4(&local_44);
  return;
}



void fn_0043bc20(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_0043bc68;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0043bc68:
  if (*(char *)(puVar2 + 0x23d) == '\0') {
    return;
  }
  fn_0043b93c(param_1);
  return;
}



void fn_0043bbf0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x8c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043bc88(iVar1,param_1);
  return;
}



void fn_0043bc88(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0036e354(param_1,param_2,&DAT_007c71ec,2);
  *puVar1 = &DAT_0083cb88;
  return;
}



void fn_0043b93c(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined2 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  uint local_914;
  undefined4 auStack_910 [566];
  uint local_38 [4];
  
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_0043b980;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0043b980:
  *(undefined1 *)((int)puVar7 + 0x902) = 0;
  fn_00290734(auStack_910);
  fn_0017821c(puVar7 + 7,auStack_910,0x8d8);
  piVar8 = puVar7 + 0x23f;
  uVar2 = fn_00100b58(auStack_910);
  puVar9 = &DAT_008f9ce8;
  puVar1 = (undefined4 *)*piVar8;
  if (uVar2 == 0) {
    piVar4 = puVar1 + -3;
    iVar6 = *piVar4;
    if (iVar6 == 0) {
      puVar1[-1] = 0;
      *(undefined2 *)*piVar8 = 0;
    }
    else {
      if ((puVar1 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
      }
      *piVar8 = (int)&DAT_008f9cf4;
    }
  }
  else {
    uVar10 = puVar1[-3] + 1;
    bVar12 = puVar1[-3] != -1;
    bVar11 = uVar10 == 1;
    if (uVar10 < 2) {
      bVar12 = (uint)puVar1[-2] <= uVar2;
      bVar11 = uVar2 == puVar1[-2];
    }
    if ((bVar12 && !bVar11) ||
       ((puVar1 <= auStack_910 && (auStack_910 < (undefined4 *)((int)puVar1 + puVar1[-1] * 2))))) {
      uVar10 = puVar1[-1];
      local_38[0] = uVar2;
      local_914 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
      if (local_914 < uVar10 + 0x80) {
        local_914 = uVar10 + 0x80;
      }
      puVar3 = &local_914;
      if (local_914 < uVar2) {
        puVar3 = local_38;
      }
      uVar10 = *puVar3;
      if (0xfffffff1 < uVar10) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10,0xfffffff1);
      }
      if (uVar10 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar10);
      }
      if (uVar10 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar10 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar2;
        puVar5 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar10;
        if (puVar5 != (undefined2 *)0x0) {
          *puVar5 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,auStack_910,uVar2 << 1);
      if ((undefined4 *)*piVar8 != &DAT_008f9cf4) {
        piVar4 = (undefined4 *)*piVar8 + -3;
        iVar6 = *piVar4;
        if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar8 + -0xc,*(int *)(*piVar8 + -8) + 8,0);
        }
      }
      *piVar8 = (int)(puVar9 + 3);
    }
    else {
      fn_001006ac(puVar1,auStack_910,uVar2);
      *(uint *)(*piVar8 + -4) = uVar2;
      *(undefined2 *)(*piVar8 + uVar2 * 2) = 0;
    }
  }
  *(undefined1 *)(puVar7 + 0x240) = 1;
  return;
}


