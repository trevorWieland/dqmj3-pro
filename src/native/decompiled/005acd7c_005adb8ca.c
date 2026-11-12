#include "005acd7c_005adb8ca.h"



undefined4 fn_005ad4a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint local_a8;
  wchar16 *pwStack_a4;
  char *pcStack_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 local_90;
  undefined4 *local_88;
  undefined1 auStack_7c [4];
  undefined1 local_78;
  undefined1 local_77;
  undefined4 local_70;
  undefined1 local_6c;
  undefined1 auStack_68 [32];
  uint local_48 [5];
  uint local_34 [4];
  
  fn_0057a168();
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951d8) goto LAB_005ad4f4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005ad4f4:
  *(undefined4 **)(param_1 + 0x11c) = puVar1;
  fn_00397774(&pwStack_a4);
  local_90 = 2;
  local_9c = 2;
  uStack_98 = 0;
  pwStack_a4 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_a0 = (char *)&DAT_005ad894;
  puVar1 = (undefined4 *)fn_0057a3c4(param_1);
  uVar3 = fn_00100b58();
  puVar2 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar5 = local_88 + -3;
    iVar8 = *piVar5;
    if (iVar8 != 0) {
      if ((local_88 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_88 + -3,local_88[-2] + 8,0);
      }
      local_88 = &DAT_008f9cf4;
      goto LAB_005ad744;
    }
    local_88[-1] = 0;
    puVar1 = local_88;
  }
  else {
    uVar9 = local_88[-3] + 1;
    bVar11 = local_88[-3] != -1;
    bVar10 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar11 = (uint)local_88[-2] <= uVar3;
      bVar10 = uVar3 == local_88[-2];
    }
    if (bVar11 && !bVar10) {
LAB_005ad590:
      uVar9 = local_88[-1];
      local_34[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_34[0] < uVar9 + 0x80) {
        local_34[0] = uVar9 + 0x80;
      }
      puVar4 = local_48;
      if (uVar3 <= local_34[0]) {
        puVar4 = local_34;
      }
      local_48[0] = uVar3;
      uVar9 = *puVar4;
      if (0xfffffff1 < uVar9) {
        local_a8 = 0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9);
      }
      if (uVar9 < uVar3) {
        local_a8 = uVar9;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3);
      }
      if (uVar9 != 0) {
        puVar2 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[2] = uVar3;
        puVar7 = (undefined2 *)((int)puVar2 + uVar3 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar9;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,puVar1,uVar3 << 1);
      if (local_88 != &DAT_008f9cf4) {
        piVar5 = local_88 + -3;
        iVar8 = *piVar5;
        if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_88 + -3,local_88[-2] + 8,0);
        }
      }
      local_88 = puVar2 + 3;
      goto LAB_005ad744;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_88;
      if (local_88 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_88 + local_88[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_005ad590;
    }
    fn_001006ac(local_88,puVar1,uVar3);
    local_88[-1] = uVar3;
    puVar1 = (undefined4 *)((int)local_88 + uVar3 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005ad744:
  local_78 = 0;
  local_6c = 1;
  local_70 = 2;
  local_77 = 0;
  fn_00397618(param_1,&pwStack_a4);
  local_a8 = 0xffffffff;
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0);
  iVar8 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar8 + 0x81) = 0;
  fn_0031f3f4(iVar8,0);
  fn_00100414(auStack_68,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_7c);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  fn_0057a3dc(param_1);
  fn_0057a634(param_1);
  fn_0057a348(param_1);
  fn_0057a4f8(param_1);
  iVar8 = 0;
  do {
    uVar6 = fn_0022f584((&DAT_00891b50)[iVar8],0);
    fn_0031b78c(param_1,iVar8,0,uVar6);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  iVar8 = fn_006c2a50(param_1 + 0xe4);
  if (iVar8 == 0) {
    local_a8 = 0xff808080;
    fn_002c37e0(param_1,0,&local_a8);
  }
  fn_00689efc(param_1,0x2c,0);
  return 1;
}



int fn_005ad240(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_003d454c();
  *puVar1 = &DAT_00847618;
  puVar1[0x28] = 0;
  puVar1[0x29] = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 7;
  puVar1[0x2c] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  iVar3 = puVar1[0x2c];
  puVar1[0x2d] = iVar3 + 0x1c;
  puVar1[0x2e] = iVar3 + 0x80;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  puVar1[0x30] = 0;
  *(undefined1 *)(puVar1 + 0x31) = 0;
  *(undefined1 *)(puVar1 + 0x6e) = 0;
  iVar3 = fn_005acb38(puVar1 + 0x6f);
  fn_00301f50(iVar3 + -0xf4,0xf0);
  return iVar3 + -0x1bc;
}



void fn_005ace24(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = fn_006896fc(param_1,0x2d);
  if (iVar1 != 0) {
    uVar2 = fn_006f6a5c(param_1);
    if ((uVar2 & 0x100000) == 0) {
      if ((uVar2 & 0x200000) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0xa0) + 0x18) = 2;
        return;
      }
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + 0xa0) + 0x18) = 1;
    }
  }
  return;
}



void fn_005acd7c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    fn_005abb50();
  }
  else {
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00890b20) goto LAB_005acdcc;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_005acdcc:
    fn_00604768(puVar1);
    fn_006899f4(param_1,0xd9,0,1);
    fn_0068ab44(param_1,0x100094c);
  }
  fn_0068ab44(param_1,0x100094b);
  return;
}


