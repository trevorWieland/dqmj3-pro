#include "005cc4d4_005d2874.h"



void fn_005d2874(undefined4 *param_1)

{
  *param_1 = &DAT_0084c48c;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  return;
}



int fn_005d2220(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0x98) + 0x1c);
  iVar1 = fn_0028bcf4(iVar3);
  if ((iVar1 != 0) || (iVar2 = fn_0028bbc0(iVar3), iVar1 = 0, iVar2 != 0)) {
    iVar1 = iVar3;
  }
  return iVar1;
}



void fn_005d1db4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x14);
  *puVar1 = &DAT_0084c2e4;
  *(undefined1 *)(puVar1 + 0x16) = 0;
  puVar1[0x17] = 0xffffffff;
  puVar1[0x18] = 0;
  *(byte *)((int)puVar1 + 0x59) = ~(byte)(*(uint *)(puVar1[5] + 0x39c) >> 0xb) & 1;
  return;
}



void fn_005cea68(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = fn_006ba220();
  if (iVar1 != 0) {
    return;
  }
  iVar1 = fn_006ba284(param_1);
  uVar4 = iVar1 * (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) + param_2;
  uVar5 = *(int *)(param_1 + 0xd0) - *(int *)(param_1 + 0xcc) >> 3;
  if (uVar5 <= uVar4) {
    fn_002ff628(9,&DAT_008c7632,&DAT_008c7632,uVar4);
    param_4 = uVar5;
  }
  iVar1 = (int)*(short *)(*(int *)(param_1 + 0xcc) + uVar4 * 8 + 6);
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  uVar2 = fn_0016a7c4(iVar1);
  uVar3 = fn_0022ee10(iVar1);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3,*(undefined4 *)(param_1 + 0x58),param_4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_005cd6a4(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  fn_00321598(param_1[0x19]);
  *(undefined1 *)(param_1[0x19] + 0x24) = 1;
  iVar5 = param_1[0x19];
  uVar1 = (**(code **)(*param_1 + 0x10c))(param_1);
  *(undefined4 *)(iVar5 + 0x44) = uVar1;
  *(undefined1 *)(param_1[0x19] + 8) = 7;
  uVar1 = fn_0022f750((char *)&DAT_005cd7bc);
  fn_003212cc(param_1[0x19],uVar1);
  uVar1 = fn_0022f584((char *)&DAT_005cd7d0,0);
  uVar2 = fn_0022f584((char *)&DAT_005cd7f4,0);
  fn_003212dc(param_1[0x19],uVar2,uVar1,0);
  uVar1 = fn_0022f584((char *)&DAT_005cd820,0);
  *(undefined4 *)(param_1[0x19] + 0x34) = uVar1;
  uVar1 = fn_0022f584((char *)&DAT_005cd83c,0);
  *(undefined4 *)(param_1[0x19] + 0x30) = uVar1;
  puVar3 = (undefined4 *)fn_001f74ec(param_1,0xe0);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_0089905c) goto LAB_005cd7ac;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_005cd7ac:
  fn_003212bc(param_1[0x19],puVar3 + 6);
  return;
}



undefined4 fn_005ccda8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  wchar16 *pwStack_78;
  char *pcStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 local_64;
  undefined1 auStack_5c [12];
  undefined1 auStack_50 [4];
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [20];
  undefined4 local_1c [2];
  
  iVar1 = fn_002f830c();
  if (*(char *)(iVar1 + 0x80) == '\x01') {
    *(undefined1 *)(iVar1 + 0x80) = 0;
    fn_002f6fe4();
    fn_00689930(param_1,0xee,1);
  }
  fn_00397774(&pwStack_78);
  local_6c = 0;
  local_64 = 2;
  pwStack_78 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_74 = (char *)&DAT_005ccf28;
  uStack_70 = 2;
  uVar2 = fn_0022f750((char *)&DAT_005ccf3c);
  fn_00147974(auStack_5c,uVar2);
  local_4c = 0;
  local_4b = 0;
  local_44 = 2;
  uVar2 = fn_0022f750((char *)&DAT_005ccf48);
  fn_00147974(auStack_38,uVar2);
  uVar2 = fn_0022f750((char *)&DAT_005ccf58);
  fn_00147974(auStack_30,uVar2);
  fn_00397618(param_1,&pwStack_78);
  uVar3 = 0;
  do {
    uVar2 = fn_0022f750((&DAT_007cafac)[uVar3]);
    fn_0031b78c(param_1,uVar3,0,uVar2);
    if ((uVar3 == 1) && (iVar1 = fn_00154ac8(0x93), iVar1 == 0)) {
      local_1c[0] = DAT_008971d8;
      fn_002c37b4(param_1,1,0,local_1c);
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  fn_00100414(auStack_3c,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_50);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  return 1;
}



undefined4 fn_005cc4d4(int param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined2 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
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
  local_50 = 3;
  local_5c = 3;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_005cc890;
  local_58 = fn_002f70cc(param_1);
  puVar1 = (undefined4 *)fn_002f6534(param_1);
  uVar2 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar2 == 0) {
    piVar4 = local_48 + -3;
    iVar6 = *piVar4;
    if (iVar6 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar6 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_005cc730;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar8 = local_48[-3] + 1;
    bVar11 = local_48[-3] != -1;
    bVar10 = uVar8 == 1;
    if (uVar8 < 2) {
      bVar11 = (uint)local_48[-2] <= uVar2;
      bVar10 = uVar2 == local_48[-2];
    }
    if (bVar11 && !bVar10) {
LAB_005cc580:
      uVar8 = local_48[-1];
      local_30 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
      if (local_30 < uVar8 + 0x80) {
        local_30 = uVar8 + 0x80;
      }
      puVar3 = auStack_2c;
      if (uVar2 <= local_30) {
        puVar3 = &local_30;
      }
      auStack_2c[0] = uVar2;
      uVar8 = *puVar3;
      if (0xfffffff1 < uVar8) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar8,0xfffffff1);
      }
      if (uVar8 < uVar2) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar2,uVar8);
      }
      if (uVar8 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar8 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar2;
        puVar7 = (undefined2 *)((int)puVar9 + uVar2 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar8;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar1,uVar2 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar6 = *piVar4;
        if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar9 + 3;
      goto LAB_005cc730;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar10 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar10 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar10) goto LAB_005cc580;
    }
    fn_001006ac(local_48,puVar1,uVar2);
    local_48[-1] = uVar2;
    puVar1 = (undefined4 *)((int)local_48 + uVar2 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_005cc730:
  fn_002c29a0(param_1,&pwStack_64);
  uVar2 = 0;
  while( true ) {
    uVar5 = fn_0022f750((&DAT_00896fc0)[uVar2]);
    fn_0031b78c(param_1,uVar2,0,uVar5);
    uVar2 = uVar2 + 1;
    if (2 < uVar2) break;
    if (uVar2 == 2) {
      fn_002f6100(param_1);
      fn_0015b0dc();
    }
  }
  *(undefined **)(param_1 + 0xc4) = &DAT_005cc928;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_005cc928;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_005cc928;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  fn_00689efc(param_1,0xf1,1,0);
  fn_002f796c();
  fn_0015a41c(0x100003b);
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar6 = *piVar4;
    if ((iVar6 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar6 + -1, iVar6 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  return 1;
}


