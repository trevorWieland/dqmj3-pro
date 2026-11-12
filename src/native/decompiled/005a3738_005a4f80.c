#include "005a3738_005a4f80.h"



undefined4 fn_005a4f80(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  wchar16 *local_168;
  char *pcStack_164;
  int local_160;
  undefined4 local_15c;
  int local_154;
  undefined1 auStack_14c [12];
  undefined1 auStack_140 [4];
  undefined1 local_13c;
  undefined1 local_13b;
  undefined4 local_134;
  undefined1 auStack_12c [4];
  undefined1 auStack_128 [32];
  undefined1 auStack_108 [4];
  undefined1 auStack_104 [24];
  short local_ec;
  
  fn_00397774(&local_168);
  local_160 = 0;
  iVar3 = 0;
  local_168 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_164 = (char *)&DAT_005a5118;
  do {
    fn_002f8914();
    iVar1 = fn_002f7e84();
    fn_0017821c(auStack_108,iVar1 + iVar3 * 0xf0,0xf0);
    iVar1 = fn_001a46f4((int)local_ec);
    if (iVar1 != 0) {
      local_160 = local_160 + 1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  local_15c = 0;
  local_154 = local_160;
  uVar2 = fn_0022f750((char *)&DAT_005a512c);
  fn_00147974(auStack_14c,uVar2);
  local_13c = 0;
  local_134 = 1;
  local_13b = 0;
  uVar2 = fn_0022f750((char *)&DAT_005a5138);
  fn_00147974(auStack_128,uVar2);
  uVar2 = fn_00397618(param_1,&local_168);
  iVar3 = 0;
  if (0 < local_154) {
    do {
      fn_002f8914();
      iVar1 = fn_002f7e84();
      fn_0017821c(auStack_108,iVar1 + iVar3 * 0xf0,0xf0);
      fn_0031b78c(param_1,iVar3,0,auStack_104);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_154);
  }
  (**(code **)(*param_1 + 0x120))(param_1,local_15c);
  fn_00100414(auStack_12c,&LAB_0059e0e0,8,4);
  iVar3 = fn_001588d4(auStack_140);
  iVar3 = fn_001588d4(iVar3 + -4);
  iVar3 = fn_001588d4(iVar3 + -4);
  fn_001588d4(iVar3 + -4);
  return uVar2;
}



void fn_005a40b0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0xfa);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00897100) goto LAB_005a4100;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005a4100:
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar5 = fn_0022f584((char *)&DAT_005a41dc,0);
    fn_0068974c(param_1,uVar5,0,1);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    *(undefined1 *)((int)puVar2 + 0x19) = 0;
    puVar2[5] = 0;
    *(undefined1 *)(puVar2 + 6) = 0;
    *(undefined1 *)(puVar2 + 4) = 0;
    fn_00689878(param_1,0xfa);
    return;
  }
  iVar4 = fn_001f7e04(param_1,0xfa);
  if (iVar4 == 0) {
    cVar1 = *(char *)(puVar2 + 4);
    if (cVar1 == '\x01') {
      *(code **)(param_1 + 0xc4) = fn_005a3c5c;
      *(undefined4 *)(param_1 + 200) = 0;
    }
    else {
      if (cVar1 == '\x02') {
        *(code **)(param_1 + 0xc4) = fn_005a44d0;
        *(undefined4 *)(param_1 + 200) = 0;
        return;
      }
      if (cVar1 == '\x03') {
        fn_002f6dbc();
        return;
      }
    }
  }
  return;
}



void fn_005a3c5c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  
  uVar2 = fn_002f6fa8();
  iVar3 = fn_002f5cf0(param_1);
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar7 = fn_002f8914();
    if ((*(byte *)(param_1 + 0xdc) & 1) != 0) {
      fn_002f7c64();
      fn_0042022c(uVar2,uVar7);
    }
    bVar1 = *(byte *)(param_1 + 0xdc);
    if ((bVar1 & 2) != 0) {
      fn_002f7444();
      bVar1 = fn_0042017c(uVar2);
    }
    if (iVar3 != 0) {
      bVar1 = *(byte *)(param_1 + 0xdc);
    }
    if (iVar3 != 0 && (bVar1 & 4) != 0) {
      fn_004203e0(uVar2);
    }
    puVar8 = &LAB_005a4ce4;
    iVar3 = 0;
    piVar5 = (int *)fn_00145b00(0x10,&DAT_00812c8c);
    if (piVar5 == (int *)0x0) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5[1] = param_1;
      piVar5[2] = (int)puVar8;
      piVar5[3] = iVar3;
      *piVar5 = (int)&DAT_0081d73c;
    }
    piVar6 = *(int **)(param_1 + 0xd4);
    if (piVar6 != piVar5) {
      if (piVar6 != (int *)0x0) {
        (**(code **)(*piVar6 + 4))();
      }
      *(int **)(param_1 + 0xd4) = piVar5;
    }
    fn_0041fdf8(uVar2,*(undefined4 *)(param_1 + 0xd4));
    return;
  }
  if (0x1e < *(uint *)(*(int *)(param_1 + 0x5c) + 0x58)) {
    iVar4 = fn_006cda14(uVar2);
    if (iVar4 == 0) {
      fn_0041fdf8(uVar2,0);
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      if (iVar3 != 0) {
        uVar7 = fn_006cd9f0(uVar2);
        uVar2 = fn_006cd9cc(uVar2);
        fn_002f7a6c(uVar2,uVar7);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
      *(code **)(param_1 + 0xc4) = fn_005a3e68;
      *(undefined4 *)(param_1 + 200) = 0;
      return;
    }
    iVar3 = fn_006cda24(uVar2);
    if (iVar3 != 0) {
      fn_006b723c(uVar2);
      fn_002f61d0();
      fn_00267fa4(uVar2);
      fn_0041fde8(uVar2);
      fn_0041fdf8(uVar2,0);
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        (**(code **)(**(int **)(param_1 + 0xd4) + 4))();
        *(undefined4 *)(param_1 + 0xd4) = 0;
      }
      *(code **)(param_1 + 0xc4) = fn_005a44d0;
      *(undefined4 *)(param_1 + 200) = 0;
    }
  }
  return;
}



undefined4 fn_005a3738(int *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined2 *puVar6;
  int iVar7;
  int iVar8;
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
  uint local_30;
  uint auStack_2c [2];
  
  fn_002c330c(&pwStack_64);
  local_50 = 4;
  local_5c = 4;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_005a3a70;
  local_58 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_005a3a84);
  uVar2 = fn_00100b58();
  puVar10 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_48 + -3;
    iVar7 = *piVar4;
    if (iVar7 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar7 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_005a3994;
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
LAB_005a37e4:
      uVar9 = local_48[-1];
      local_30 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      if (local_30 < uVar9 + 0x80) {
        local_30 = uVar9 + 0x80;
      }
      puVar3 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar9 = *puVar3;
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
        puVar6 = (undefined2 *)((int)puVar10 + uVar2 * 2 + 0xc);
        *puVar10 = 0;
        puVar10[1] = uVar9;
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = 0;
        }
      }
      fn_00301a9c(puVar10 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar7 = *piVar4;
        if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar10 + 3;
      goto LAB_005a3994;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar11 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar11 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar11) goto LAB_005a37e4;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005a3994:
  fn_002c29a0(param_1,&pwStack_64);
  uVar2 = 0;
  while( true ) {
    uVar5 = fn_0022f750((&DAT_007c9f98)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar5);
    uVar2 = uVar2 + 1;
    if (3 < uVar2) break;
    if (uVar2 != 0) {
      fn_0015b0f8(uVar2);
    }
  }
  (**(code **)(*param_1 + 0x14))(param_1);
  puVar1 = (undefined4 *)param_1[6];
  if (puVar1 != (undefined4 *)0x0) {
    puVar10 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar10 == &DAT_00896fe4) goto code_r0x005a3a34;
      puVar10 = (undefined4 *)*puVar10;
    } while (puVar10 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
code_r0x005a3a34:
  iVar7 = puVar1[4];
  if ((iVar7 == 0) && ((puVar1[5] & 1) == 0 || puVar1[5] == 0)) {
    param_1[0x31] = (int)fn_005a48c4;
    param_1[0x32] = 0;
    param_1[0x2f] = (int)fn_005a48c4;
    param_1[0x30] = 0;
    param_1[0x34] = 0;
    param_1[0x2d] = (int)fn_005a48c4;
    param_1[0x2e] = 0;
  }
  else {
    iVar8 = puVar1[5];
    param_1[0x32] = iVar8;
    param_1[0x31] = iVar7;
    param_1[0x30] = iVar8;
    param_1[0x2f] = iVar7;
    param_1[0x2e] = iVar8;
    param_1[0x2d] = iVar7;
    param_1[0x34] = 0;
  }
  fn_00689824(param_1,0);
  param_1[0x37] = 7;
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar7 = *piVar4;
    if ((iVar7 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar7 + -1, iVar7 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


