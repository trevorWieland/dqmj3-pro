#include "00608f3c_00609dc0.h"



int fn_00609dc0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  short sVar5;
  undefined4 uVar6;
  bool bVar7;
  bool bVar8;
  
  iVar2 = fn_00609e8c();
  if (iVar2 == 0) {
    sVar1 = *(short *)(param_1 + 0xc);
    sVar5 = *(short *)(param_2 + 0xc);
    if (sVar1 == sVar5) {
      sVar1 = *(short *)(param_1 + 0xe);
      sVar5 = *(short *)(param_2 + 0xe);
    }
    iVar3 = fn_00661714();
    iVar2 = fn_00661714();
    if (iVar2 == iVar3) {
      uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
      bVar7 = *(int *)(param_1 + 4) != 0;
      iVar3 = 0;
      if (bVar7) {
        iVar3 = *(int *)(param_2 + 4);
      }
      iVar4 = fn_00661308((int)sVar1);
      iVar2 = fn_00661308((int)sVar5);
      bVar8 = iVar4 == iVar2;
      if (!bVar8 || (!bVar7 || iVar3 == 0)) {
        iVar2 = iVar2 - iVar4;
      }
      if (bVar8 && (bVar7 && iVar3 != 0)) {
        iVar2 = fn_006b8390(uVar6,*(undefined4 *)(param_1 + 4));
        iVar3 = fn_006b8390(uVar6,*(undefined4 *)(param_2 + 4));
        iVar2 = (uint)*(byte *)(iVar3 + 0x2e) - (uint)*(byte *)(iVar2 + 0x2e);
      }
    }
    else {
      iVar2 = iVar2 - iVar3;
    }
  }
  return iVar2;
}



undefined4 fn_00609618(int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  uint local_90;
  wchar16 *local_8c;
  char *pcStack_88;
  int local_84;
  undefined4 local_80;
  int local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined1 auStack_64 [4];
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined1 auStack_50 [32];
  uint local_30;
  uint auStack_2c [2];
  
  fn_005ab63c();
  iVar1 = param_1[0x39];
  param_1[0x43] = *(int *)(iVar1 + 0x50);
  param_1[0x41] = (*(int *)(iVar1 + 0x28) - *(int *)(iVar1 + 0x24)) / 0x104;
  fn_00397774(&local_8c);
  local_8c = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_88 = (char *)&DAT_00609a00;
  iVar1 = param_1[0x41];
  local_60 = 8 < iVar1;
  local_84 = iVar1;
  if ((bool)local_60) {
    local_84 = 9;
    local_78 = iVar1;
  }
  local_80 = *(undefined4 *)(param_1[0x39] + 0x34);
  puVar2 = (undefined4 *)fn_005ab7a4(param_1);
  uVar3 = fn_00100b58();
  puVar9 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar8 = local_70 + -3;
    iVar1 = *piVar8;
    if (iVar1 != 0) {
      if ((local_70 != &DAT_008f9cf4) &&
         ((iVar1 == -1 || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar1 + -1, iVar1 == 0)))))) {
        fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
      }
      local_70 = &DAT_008f9cf4;
      goto LAB_006098bc;
    }
    local_70[-1] = 0;
    puVar2 = local_70;
  }
  else {
    uVar5 = local_70[-3] + 1;
    bVar11 = local_70[-3] != -1;
    bVar10 = uVar5 == 1;
    if (uVar5 < 2) {
      bVar11 = (uint)local_70[-2] <= uVar3;
      bVar10 = uVar3 == local_70[-2];
    }
    if (bVar11 && !bVar10) {
LAB_0060970c:
      uVar5 = local_70[-1];
      local_30 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
      if (local_30 < uVar5 + 0x80) {
        local_30 = uVar5 + 0x80;
      }
      puVar6 = auStack_2c;
      if (uVar3 <= local_30) {
        puVar6 = &local_30;
      }
      auStack_2c[0] = uVar3;
      uVar5 = *puVar6;
      if (0xfffffff1 < uVar5) {
        local_90 = 0xfffffff1;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5);
      }
      if (uVar5 < uVar3) {
        local_90 = uVar5;
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3);
      }
      if (uVar5 != 0) {
        puVar9 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0;
          puVar9[1] = 0;
          puVar9[2] = 0;
        }
        puVar9[2] = uVar3;
        puVar4 = (undefined2 *)((int)puVar9 + uVar3 * 2 + 0xc);
        *puVar9 = 0;
        puVar9[1] = uVar5;
        if (puVar4 != (undefined2 *)0x0) {
          *puVar4 = 0;
        }
      }
      fn_00301a9c(puVar9 + 3,puVar2,uVar3 << 1);
      if (local_70 != &DAT_008f9cf4) {
        piVar8 = local_70 + -3;
        iVar1 = *piVar8;
        if ((iVar1 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar1 + -1, iVar1 == 0)))) {
          fn_001008c4(local_70 + -3,local_70[-2] + 8,0);
        }
      }
      local_70 = puVar9 + 3;
      goto LAB_006098bc;
    }
    if (puVar2 != (undefined4 *)0x0) {
      bVar10 = puVar2 <= local_70;
      if (local_70 <= puVar2) {
        bVar10 = (undefined4 *)((int)local_70 + local_70[-1] * 2) <= puVar2;
      }
      if (!bVar10) goto LAB_0060970c;
    }
    fn_001006ac(local_70,puVar2,uVar3);
    local_70[-1] = uVar3;
    puVar2 = (undefined4 *)((int)local_70 + uVar3 * 2);
  }
  *(undefined2 *)puVar2 = 0;
LAB_006098bc:
  local_5f = 0;
  local_58 = 1;
  local_5d = 1;
  local_74 = 0x428c0000;
  local_5c = 0;
  local_5a = 0;
  local_59 = 0;
  fn_00397618(param_1,&local_8c);
  fn_00100414(auStack_50,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_64);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  uVar7 = *(undefined4 *)(param_1[0x39] + 0x30);
  fn_0025f2d0(param_1[0x27],uVar7);
  *(undefined4 *)(param_1[0x24] + 0x3c) = uVar7;
  fn_002317d8(&local_90,(int)*(short *)(param_1[0x39] + 0x50),1);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,local_90);
  fn_001588d4(&local_90);
  fn_006094f8(param_1,1);
  fn_00609ad8(param_1);
  uVar5 = fn_005ab500(param_1,*(undefined4 *)(param_1[0x39] + 0x34));
  piVar8 = (int *)(param_1[0x39] + 0x24);
  uVar3 = (*(int *)(param_1[0x39] + 0x28) - *piVar8) / 0x104;
  if (uVar3 <= uVar5) {
    local_90 = uVar3;
    fn_002ff628(9,&DAT_008c7621,&DAT_008c7621,uVar5);
  }
  fn_002a3c70(param_1[0x3a],*piVar8 + uVar5 * 0x104 + 0x10,0xe1,0);
  fn_00689930(param_1,0xe1,0);
  if (*(char *)(param_1[0x39] + 9) != '\0') {
    *(undefined1 *)(param_1 + 0x40) = 0xc;
    uVar7 = fn_0022f584((char *)&DAT_00609ab8,0);
    fn_0068974c(param_1,uVar7,0,1);
    *(undefined1 *)(param_1[0x39] + 9) = 0;
  }
  return 1;
}



void fn_00609318(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &DAT_0084faa8;
  if (param_1[0xc] != 0) {
    fn_002feef8();
    param_1[0xc] = 0;
  }
  uVar1 = 0;
  do {
    if (param_1[uVar1 * 4 + 3] != 0) {
      fn_002feef8();
      param_1[uVar1 * 4 + 3] = 0;
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 2);
  fn_002feef8(param_1);
  return;
}



void fn_006090e8(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    *puVar1 = *param_2;
    puVar1[1] = uVar2;
    puVar1[2] = uVar3;
  }
  *(undefined4 **)(param_1 + 0x30) = puVar1;
  iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0xc) + 0xc);
  fn_001781f0(&local_40,iVar4 + 0x48);
  uVar2 = **(undefined4 **)(param_1 + 0x30);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x30) + 4);
  *(undefined4 *)(iVar4 + 0x48) = local_40;
  *(undefined4 *)(iVar4 + 0x4c) = uStack_3c;
  *(undefined4 *)(iVar4 + 0x50) = uStack_38;
  *(undefined4 *)(iVar4 + 0x54) = uVar2;
  *(undefined4 *)(iVar4 + 0x58) = uStack_30;
  *(undefined4 *)(iVar4 + 0x5c) = uStack_2c;
  *(undefined4 *)(iVar4 + 0x60) = uStack_28;
  *(undefined4 *)(iVar4 + 100) = uVar3;
  *(undefined4 *)(iVar4 + 0x68) = local_20;
  *(undefined4 *)(iVar4 + 0x6c) = uStack_1c;
  *(undefined4 *)(iVar4 + 0x70) = uStack_18;
  *(undefined4 *)(iVar4 + 0x74) = uStack_14;
  *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xbf | 0x40;
  return;
}



undefined4 fn_00608fe0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  
  fVar4 = (float)param_2[1];
  if (*(float *)(*(int *)(param_1 + 0x30) + 4) <= fVar4) {
    puVar1 = *(undefined4 **)(param_1 + 0x1c);
    if (puVar1 == (undefined4 *)0x0) {
      puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
      if (puVar1 != (undefined4 *)0x0) {
        uVar2 = param_2[1];
        uVar3 = param_2[2];
        *puVar1 = *param_2;
        puVar1[1] = uVar2;
        puVar1[2] = uVar3;
      }
      *(undefined4 **)(param_1 + 0x1c) = puVar1;
    }
    else if ((float)puVar1[1] < fVar4) {
      *puVar1 = *param_2;
      puVar1[1] = param_2[1];
      puVar1[2] = param_2[2];
    }
    *(byte *)(*(int *)(param_1 + 0x14) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0x14) + 0x44) & 0xfe | 1;
    return 1;
  }
  puVar1 = *(undefined4 **)(param_1 + 0xc);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      *puVar1 = *param_2;
      puVar1[1] = uVar2;
      puVar1[2] = uVar3;
    }
    *(undefined4 **)(param_1 + 0xc) = puVar1;
  }
  else if (fVar4 < (float)puVar1[1]) {
    *puVar1 = *param_2;
    puVar1[1] = param_2[1];
    puVar1[2] = param_2[2];
  }
  *(byte *)(*(int *)(param_1 + 4) + 0x44) = *(byte *)(*(int *)(param_1 + 4) + 0x44) & 0xfe | 1;
  return 0;
}



undefined4 fn_00608f3c(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  float local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uVar3 = 0;
  do {
    iVar2 = param_1 + uVar3 * 0x10;
    iVar1 = *(int *)(iVar2 + 0xc);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar2 + 4);
      fVar4 = (*(float *)(*(int *)(param_1 + 0x30) + 4) - *(float *)(iVar1 + 4)) /
              *(float *)(iVar2 + 0x3c);
      fn_001781f0(&local_50,iVar2 + 0x48);
      *(undefined4 *)(iVar2 + 0x48) = local_50;
      *(undefined4 *)(iVar2 + 0x4c) = uStack_4c;
      *(undefined4 *)(iVar2 + 0x50) = uStack_48;
      *(undefined4 *)(iVar2 + 0x54) = uStack_44;
      *(float *)(iVar2 + 0x58) = fVar4;
      *(undefined4 *)(iVar2 + 0x5c) = local_3c;
      *(undefined4 *)(iVar2 + 0x60) = uStack_38;
      *(undefined4 *)(iVar2 + 100) = uStack_34;
      *(undefined4 *)(iVar2 + 0x68) = local_30;
      *(undefined4 *)(iVar2 + 0x6c) = uStack_2c;
      *(undefined4 *)(iVar2 + 0x70) = uStack_28;
      *(undefined4 *)(iVar2 + 0x74) = uStack_24;
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xbf | 0x40;
      local_40 = fVar4;
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 2);
  return 1;
}


