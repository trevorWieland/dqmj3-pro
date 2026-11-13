#include "003fefc0_00408da8.h"



undefined4 * fn_00408da8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &PTR_FUN_00837b4c;
  puVar1[0x19] = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  uVar3 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1c] = uVar3;
  puVar1[0x1e] = 0xffffffff;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  iVar2 = fn_00145b00(0x34,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002d8094();
  }
  puVar1[0x21] = uVar3;
  iVar2 = fn_00145b00(0x48,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0033c9b8();
  }
  puVar1[0x22] = uVar3;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  *(undefined1 *)(puVar1 + 0x26) = 0;
  puVar1[0x28] = &DAT_00859340;
  puVar1[0x27] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0xa5) = 0;
  *(undefined1 *)((int)puVar1 + 0xa6) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002573bc();
  }
  puVar1[0x2d] = uVar3;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002573bc();
  }
  puVar1[0x2e] = uVar3;
  puVar1[0x2f] = 0;
  return puVar1;
}



undefined1 * fn_00406380(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  
  uVar1 = fn_006c1574(param_1[0x22]);
  uVar2 = fn_00660d60();
  iVar7 = param_1[0x2d];
  iVar3 = fn_006ba4ec(param_1[0x1f]);
  if (iVar3 < 2) {
    iVar3 = fn_006ba4ec();
  }
  else {
    iVar3 = 0;
  }
  uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                       *(undefined4 *)(*(int *)(iVar7 + 4) + iVar3 * 4));
  local_28 = fn_0024e350();
  fn_0020bbc4(auStack_30,uVar4);
  if (param_2 == 0) {
    fn_0020b760(auStack_30,uVar2);
  }
  else {
    puVar5 = (undefined4 *)fn_001f74ec(param_1,0x5c);
    if (puVar5 != (undefined4 *)0x0) {
      puVar6 = (undefined4 *)(**(code **)*puVar5)(puVar5);
      do {
        if (puVar6 == &DAT_00895114) goto LAB_00406440;
        puVar6 = (undefined4 *)*puVar6;
      } while (puVar6 != (undefined4 *)0x0);
    }
    puVar5 = (undefined4 *)0x0;
LAB_00406440:
    fn_0020b914(auStack_30,puVar5[5],uVar2);
  }
  fn_0024f108(uVar4,local_28);
  fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),uVar1,1);
  fn_00289ec0(*(undefined4 *)(DAT_00897804 + 0x24),uVar2,0);
  (**(code **)(*param_1 + 0x10c))(param_1,uVar4,0x2d);
  return auStack_30;
}



void fn_003ffd38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 local_20;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  local_20 = param_4;
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00895be4) goto LAB_003ffd80;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_003ffd80:
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xa9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894444) goto LAB_003ffdc4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003ffdc4:
  fn_003ff968(&local_20,param_1,param_2);
  fn_00147974(puVar1 + 2,local_20);
  fn_001588d4(&local_20);
  uVar3 = fn_0022f750((char *)&DAT_003ffe34);
  fn_00147974(puVar1 + 3,uVar3);
  iVar4 = fn_006e81e8(puVar5,param_2);
  uVar3 = fn_0022f750(*(undefined4 *)(iVar4 + 4));
  puVar1[4] = uVar3;
  *(undefined1 *)(puVar1 + 5) = 1;
  return;
}



undefined4 fn_003fefc0(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint *puVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  uint local_c8;
  wchar16 *pwStack_c4;
  char *pcStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 *local_a8;
  undefined1 auStack_9c [4];
  undefined1 local_98;
  undefined1 local_97;
  undefined4 local_90;
  undefined1 local_8c;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  uint local_64 [5];
  undefined1 auStack_50 [2];
  ushort auStack_4e [3];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [20];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  fn_0039dfe0();
  fn_00397774(&pwStack_c4);
  puVar10 = (undefined4 *)0x0;
  local_b0 = 2;
  local_bc = 2;
  uStack_b8 = 0;
  pwStack_c4 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_c0 = (char *)&DAT_003ff390;
  puVar1 = (undefined4 *)fn_0039e124(param_1);
  uVar2 = fn_00100b58();
  puVar11 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar3 = local_a8 + -3;
    iVar8 = *piVar3;
    if (iVar8 != 0) {
      if ((local_a8 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_a8 + -3,local_a8[-2] + 8,0);
      }
      local_a8 = &DAT_008f9cf4;
      goto LAB_003ff218;
    }
    local_a8[-1] = 0;
    puVar1 = local_a8;
  }
  else {
    uVar9 = local_a8[-3] + 1;
    bVar13 = local_a8[-3] != -1;
    bVar12 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar13 = (uint)local_a8[-2] <= uVar2;
      bVar12 = uVar2 == local_a8[-2];
    }
    if (bVar13 && !bVar12) {
LAB_003ff068:
      uVar9 = local_a8[-1];
      local_68 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_68 < uVar9 + 0x80) {
        local_68 = uVar9 + 0x80;
      }
      puVar6 = local_64;
      if (uVar2 <= local_68) {
        puVar6 = &local_68;
      }
      local_64[0] = uVar2;
      uVar9 = *puVar6;
      if (0xfffffff1 < uVar9) {
        local_c8 = 0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9);
      }
      if (uVar9 < uVar2) {
        local_c8 = uVar9;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2);
      }
      if (uVar9 != 0) {
        puVar11 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar11 != (undefined4 *)0x0) {
          *puVar11 = 0;
          puVar11[1] = 0;
          puVar11[2] = 0;
        }
        puVar11[2] = uVar2;
        puVar7 = (undefined2 *)((int)puVar11 + uVar2 * 2 + 0xc);
        *puVar11 = 0;
        puVar11[1] = uVar9;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar11 + 3,puVar1,uVar2 << 1);
      if (local_a8 != &DAT_008f9cf4) {
        piVar3 = local_a8 + -3;
        iVar8 = *piVar3;
        if ((iVar8 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_a8 + -3,local_a8[-2] + 8,0);
        }
      }
      local_a8 = puVar11 + 3;
      goto LAB_003ff218;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar12 = puVar1 <= local_a8;
      if (local_a8 <= puVar1) {
        bVar12 = (undefined4 *)((int)local_a8 + local_a8[-1] * 2) <= puVar1;
      }
      if (!bVar12) goto LAB_003ff068;
    }
    fn_001006ac(local_a8,puVar1,uVar2);
    local_a8[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_a8 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_003ff218:
  local_98 = 0;
  local_90 = 3;
  local_8c = 1;
  local_97 = 0;
  fn_00397618(param_1,&pwStack_c4);
  local_c8 = 0xffffffff;
  fn_0031f8fc(param_1[0x1d],0,0);
  iVar8 = param_1[0x1d];
  *(undefined1 *)(iVar8 + 0x81) = 0;
  fn_0031f3f4(iVar8,0);
  fn_00100414(auStack_88,&LAB_0059e0e0,8,4);
  iVar8 = fn_001588d4(auStack_9c);
  iVar8 = fn_001588d4(iVar8 + -4);
  iVar8 = fn_001588d4(iVar8 + -4);
  fn_001588d4(iVar8 + -4);
  fn_0039e2d0(param_1);
  fn_0039e1c4(param_1);
  fn_0039e090(param_1);
  fn_0039e134(param_1);
  fn_0020bbc4(auStack_48,param_1[0x3b]);
  fn_006c02d4(auStack_44,&local_68,7);
  fn_00231410(&local_c8,(int)(short)local_64[*(int *)(param_1[0x39] + 0x14) + -1],
               *(undefined2 *)((int)local_64 + *(int *)(param_1[0x39] + 0x14) * 4 + -2));
  (**(code **)(*param_1 + 0x13c))(param_1,2,0,local_c8);
  fn_001588d4(&local_c8);
  local_68 = 0;
  local_64[0] = 0;
  local_64[1] = 0;
  local_64[2] = 0;
  local_64[3] = 0;
  local_64[4] = 0;
  fn_0020bbc4(auStack_30,param_1[0x3b]);
  fn_006c02d4(auStack_2c,auStack_50,7);
  local_c8 = (uint)auStack_4e[*(int *)(param_1[0x39] + 0x14) * 2];
  fn_0018a618(&local_68,0xc,0xb,&LAB_003ff6d4);
  (**(code **)(*param_1 + 0x13c))(param_1,2,1,&local_68);
  iVar8 = 0;
  do {
    uVar4 = fn_0022f750((&DAT_008951a8)[iVar8]);
    fn_0031b78c(param_1,iVar8,0,uVar4);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 2);
  fn_00689efc(param_1,0x2d,0);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar11 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar11 == &DAT_008951dc) {
        puVar10 = puVar1;
        break;
      }
      puVar11 = (undefined4 *)*puVar11;
    } while (puVar11 != (undefined4 *)0x0);
  }
  param_1[0x3e] = (int)puVar10;
  fn_0025f3f4(puVar10,param_1[0x3b]);
  iVar5 = fn_00145b00(0x188,&DAT_00812c8c);
  iVar8 = 0;
  if (iVar5 != 0) {
    iVar8 = fn_00299cf8();
  }
  iVar5 = param_1[0x3d];
  if (iVar5 != iVar8) {
    if (iVar5 != 0) {
      fn_002feef8(iVar5);
    }
    param_1[0x3d] = iVar8;
  }
  return 1;
}


