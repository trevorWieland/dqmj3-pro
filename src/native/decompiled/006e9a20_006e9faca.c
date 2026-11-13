#include "006e9a20_006e9faca.h"



undefined4 fn_006e9cc8(int param_1,uint param_2)

{
  undefined4 uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar2 = (uint)*(byte *)(param_1 + 8);
  bVar3 = uVar2 != param_2;
  if (bVar3) {
    uVar2 = (uint)*(byte *)(param_1 + 9);
  }
  if ((bVar3 && uVar2 != param_2) && (*(byte *)(param_1 + 10) != param_2)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_006e9c94(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    iVar1 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
  }
  else {
    if (param_2 == 1) {
      iVar2 = *(int *)(param_1 + 0x2c);
      iVar1 = *(int *)(param_1 + 0x30);
    }
    else {
      if (param_2 != 2) {
        return 0;
      }
      iVar2 = *(int *)(param_1 + 0x38);
      iVar1 = *(int *)(param_1 + 0x3c);
    }
    iVar1 = iVar1 - iVar2;
  }
  return iVar1;
}



int fn_006e9c60(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = param_1 + 0x20;
  }
  else if (param_2 == 1) {
    param_1 = param_1 + 0x2c;
  }
  else if (param_2 == 2) {
    param_1 = param_1 + 0x38;
  }
  else {
    param_1 = 0;
  }
  return param_1;
}



int fn_006e9c1c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006ba284();
  return param_2 + iVar1 * 8;
}



int fn_006e9ba8(undefined4 param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  ushort *puVar6;
  int iVar7;
  
  uVar5 = *param_2;
  uVar3 = param_2[1];
  iVar2 = 0;
  if (uVar5 < uVar3) {
    if (0 < (int)(uVar3 - uVar5)) {
      iVar7 = (int)(uVar3 - uVar5) >> 3;
      psVar4 = (short *)(uVar5 + 4);
      puVar6 = (ushort *)(uVar5 + 6);
      do {
        sVar1 = *psVar4;
        psVar4 = psVar4 + 4;
        if (sVar1 != 0) {
          iVar2 = iVar2 + (uint)*puVar6;
        }
        puVar6 = puVar6 + 4;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      return iVar2;
    }
  }
  else {
    for (; uVar5 != uVar3; uVar5 = uVar5 + 8) {
      if (*(short *)(uVar5 + 4) != 0) {
        iVar2 = iVar2 + (uint)*(ushort *)(uVar5 + 6);
      }
    }
  }
  return iVar2;
}



undefined4 fn_006e9b50(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (uVar1 <= param_2) {
    fn_002ff628(9,&DAT_008c760a,&DAT_008c760a,param_2,uVar1);
  }
  return *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 4);
}



void fn_006e9a20(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined1 *puStack_d0;
  undefined1 *local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 *puStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined1 auStack_a0 [32];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined1 *puStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined1 auStack_5c [68];
  
  fn_00183718(&local_cc,*(undefined4 *)(param_1 + 4));
  puVar1 = local_cc;
  local_d4 = local_b8;
  puStack_d0 = puStack_b4;
  puVar3 = (undefined1 *)0x0;
  puVar4 = puStack_b4;
  if (local_cc != (undefined1 *)0x0) {
    puVar4 = &DAT_008f9d04;
  }
  uStack_e4 = local_c8;
  uStack_e0 = uStack_c4;
  uStack_dc = uStack_c0;
  uStack_d8 = local_bc;
  if (local_cc != (undefined1 *)0x0) {
    do {
      fn_00176ec8(auStack_5c,&uStack_e4,puVar3);
      fn_0017821c(auStack_a0,auStack_5c,0x44);
      local_cc = puVar4;
      local_a4 = param_4;
      fn_001008cc(&local_cc,auStack_a0);
      local_c8 = local_80;
      uStack_c4 = uStack_7c;
      uStack_c0 = uStack_78;
      local_bc = local_74;
      local_b8 = uStack_70;
      puStack_b4 = puStack_6c;
      local_b0 = local_68;
      uStack_ac = uStack_64;
      uStack_a8 = uStack_60;
      iVar2 = *(int *)(param_2 + 4);
      if (iVar2 == *(int *)(param_2 + 8)) {
        fn_00789bd4(param_2,iVar2,&local_cc);
      }
      else {
        *(int *)(param_2 + 4) = iVar2 + 0x2c;
        if (iVar2 != 0) {
          iVar2 = fn_001c6ba4(iVar2,&local_cc);
          *(undefined4 *)(iVar2 + 0x28) = local_a4;
        }
      }
      fn_002fedf4(&local_cc);
      puVar3 = puVar3 + 1;
    } while (puVar3 < puVar1);
  }
  return;
}


