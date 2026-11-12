#include "004cb860_004cbfa4.h"



undefined1 * fn_004cbfa4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_18 = 0;
  uStack_14 = 0;
  fn_004f01f4(&local_18);
  *(undefined4 *)(param_1 + 0x3b8) = local_18;
  *(undefined4 *)(param_1 + 0x3bc) = uStack_14;
  iVar1 = fn_006d897c(param_1 + 0x340);
  if (iVar1 == 0) {
    puVar2 = (undefined1 *)fn_004c6048(param_1,param_2,param_3);
    if (-1 < (int)puVar2) {
      puVar2 = (undefined1 *)
               fn_004ca178(param_1 + 0x340,param_2,param_1,*(undefined4 *)(DAT_008bf4f4 + 0x20));
      if (-1 < (int)puVar2) {
        puVar2 = (undefined1 *)0x0;
      }
      return puVar2;
    }
  }
  else {
    puVar2 = &DAT_e0a14827;
  }
  return puVar2;
}



void fn_004cbf40(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint local_18;
  int iStack_14;
  
  local_18 = 0;
  iStack_14 = 0;
  fn_004f01f4(&local_18);
  iVar2 = local_18 - *(uint *)(param_1 + 0x3b8);
  iVar3 = iStack_14 - (*(int *)(param_1 + 0x3bc) + (uint)(local_18 < *(uint *)(param_1 + 0x3b8)));
  puVar1 = (undefined4 *)fn_004f0ce8();
  DAT_008ed90c = fn_0011c134(iVar2,iVar3,*puVar1,puVar1[1]);
  fn_004c5f84(param_1);
  return;
}



undefined1 * fn_004cbdc4(undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [8];
  
  puVar1 = (uint *)fn_004c5f18();
  uVar2 = fn_004ed440(auStack_40,puVar1);
  iVar3 = fn_004ed440(auStack_60,uVar2);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 8) = 0x65;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  fn_004c58dc(param_1,iVar3,5);
  uVar2 = fn_004ed440(auStack_40,puVar1);
  iVar3 = fn_004ed440(auStack_60,uVar2);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 8) = 0x66;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  fn_004c58dc(param_1,iVar3,5);
  iVar3 = *(int *)(DAT_008bf4f4 + 0x20);
  puVar5 = (uint *)(iVar3 + 0x80);
  puVar4 = (undefined1 *)(iVar3 + 0x78 + *(int *)(iVar3 + 0x7c) * 8);
  puVar6 = (uint *)(puVar4 + 8);
  bVar7 = puVar6 != puVar5;
  if (bVar7) {
    puVar5 = (uint *)(iVar3 + 0x88);
  }
  if (bVar7 && puVar6 != puVar5) {
    while ((puVar4 = (undefined1 *)*puVar5, puVar4 == (undefined1 *)*puVar1 ||
           (puVar4 = (undefined1 *)(uint)(ushort)puVar5[1],
           puVar4 != (undefined1 *)(uint)(ushort)puVar1[1]))) {
      puVar5 = puVar5 + 2;
      if (puVar6 == puVar5) {
        return puVar4;
      }
    }
    uVar2 = fn_004ed440(auStack_20);
    iVar3 = fn_004ed440(auStack_38,uVar2);
    *(undefined4 *)(iVar3 + 8) = 0x67;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    fn_004c58dc(param_1,iVar3,5);
    puVar4 = auStack_20;
  }
  return puVar4;
}



undefined1 * fn_004cbdac(undefined4 param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  undefined1 auStack_20 [12];
  
  fn_004c5bf4();
  puVar1 = (uint *)fn_004c5f18();
  uVar2 = fn_004ed440(auStack_40,puVar1);
  iVar3 = fn_004ed440(auStack_60,uVar2);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 8) = 0x65;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  fn_004c58dc(param_1,iVar3,5);
  uVar2 = fn_004ed440(auStack_40,puVar1);
  iVar3 = fn_004ed440(auStack_60,uVar2);
  *(undefined4 *)(iVar3 + 0xc) = 0;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  *(undefined4 *)(iVar3 + 8) = 0x66;
  *(undefined4 *)(iVar3 + 0x14) = 0;
  fn_004c58dc(param_1,iVar3,5);
  iVar3 = *(int *)(DAT_008bf4f4 + 0x20);
  puVar5 = (uint *)(iVar3 + 0x80);
  puVar4 = (undefined1 *)(iVar3 + 0x78 + *(int *)(iVar3 + 0x7c) * 8);
  puVar6 = (uint *)(puVar4 + 8);
  bVar7 = puVar6 != puVar5;
  if (bVar7) {
    puVar5 = (uint *)(iVar3 + 0x88);
  }
  if (bVar7 && puVar6 != puVar5) {
    while ((puVar4 = (undefined1 *)*puVar5, puVar4 == (undefined1 *)*puVar1 ||
           (puVar4 = (undefined1 *)(uint)(ushort)puVar5[1],
           puVar4 != (undefined1 *)(uint)(ushort)puVar1[1]))) {
      puVar5 = puVar5 + 2;
      if (puVar6 == puVar5) {
        return puVar4;
      }
    }
    uVar2 = fn_004ed440(auStack_20);
    iVar3 = fn_004ed440(auStack_38,uVar2);
    *(undefined4 *)(iVar3 + 8) = 0x67;
    *(undefined4 *)(iVar3 + 0xc) = 0;
    *(undefined4 *)(iVar3 + 0x10) = 0;
    *(undefined4 *)(iVar3 + 0x14) = 0;
    fn_004c58dc(param_1,iVar3,5);
    puVar4 = auStack_20;
  }
  return puVar4;
}



undefined4 fn_004cba94(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_5c [12];
  undefined2 local_50;
  undefined2 local_44;
  undefined1 local_42;
  undefined1 local_41;
  undefined4 local_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined2 local_24;
  
  fn_004c5f04(param_1,param_2,0x10000,0);
  bVar3 = *(int *)(param_1 + 0x300) != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = *(int *)(param_1 + 0x328);
  }
  if (!bVar3 || iVar1 == 0) {
    return 0;
  }
  uVar2 = fn_00468c28();
  fn_006d1198(auStack_5c,uVar2);
  fn_0015f180(&local_28);
  fn_004569f4(param_1 + 0x18,*(undefined4 *)(param_1 + 0x3c0));
  fn_006d0c88(auStack_30,*(undefined4 *)(param_1 + 0x3c0));
  fn_0045fb80(auStack_5c,auStack_30);
  fn_00170f54(auStack_30);
  local_50 = *(undefined2 *)(param_1 + 0x1c);
  local_28 = *(undefined4 *)(param_1 + 0x32c);
  local_24 = (undefined2)*(undefined4 *)(param_1 + 0x328);
  fn_004569f4(&local_28,*(undefined4 *)(param_1 + 0x3c0));
  fn_006d0c88(auStack_30,*(undefined4 *)(param_1 + 0x3c0));
  fn_00170f9c(auStack_5c,auStack_30);
  fn_00170f54(auStack_30);
  local_44 = local_24;
  if (*(int *)(param_1 + 0x314) == 0) {
    local_41 = 2;
  }
  else {
    local_41 = 1;
  }
  if (*(int *)(param_1 + 0x300) == *(int *)(param_1 + 0x328)) {
    local_42 = 1;
  }
  else {
    local_42 = 2;
    local_40 = 1;
    if ((uint)*(ushort *)(param_1 + 0x1c) == (*(uint *)(param_1 + 0x328) & 0xffff)) {
      local_3c = 1;
      local_40 = 1;
    }
  }
  uVar2 = fn_00468c28();
  fn_00468e80(uVar2,auStack_5c);
  if ((DAT_008bf4f4 != 0) && (iVar1 = *(int *)(*(int *)(DAT_008bf4f4 + 0x20) + 0xa0), iVar1 != 0)) {
    local_34 = fn_006d1154(auStack_5c);
    local_38 = fn_006d1138(auStack_5c);
    fn_004d00f4(iVar1,&local_38,&local_34,param_1 + 0x334);
  }
  fn_0045fbe8(auStack_5c);
  return 1;
}



undefined4 fn_004cba48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_004c5d4c(param_1,0);
  if (((*(int *)(iVar1 + 8) == 0) || (iVar1 = fn_004c5d4c(param_1,2), *(int *)(iVar1 + 8) == 0)) &&
     (*(uint *)(param_1 + 0x14) < 3)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



undefined4 * fn_004cb994(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  *param_1 = &DAT_00856110;
  if (param_1[0xc] - 0x100000 < 0x3ff00000) {
    if (param_1[10] != 0) {
      puVar1 = (undefined4 *)param_1[3];
      while (puVar1 != param_1 + 2) {
        puVar2 = (undefined4 *)puVar1[1];
        *puVar1 = 0;
        puVar1[1] = 0;
        fn_004f0ab4(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar1);
        puVar1 = puVar2;
      }
      fn_004f0c04(param_1 + 1);
    }
    iVar3 = param_1[0xc];
    if (iVar3 != 0) {
      fn_00656b0c(iVar3);
      fn_00656b7c(iVar3);
    }
    param_1[0xc] = 0;
  }
  return param_1;
}



undefined4 * fn_004cb860(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  
  param_1[2] = 0;
  param_1[3] = 0;
  fn_004f0c04(param_1 + 1);
  param_1[6] = 0;
  param_1[7] = 0;
  fn_004f0c04(param_1 + 5);
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[9] = 0;
  *param_1 = &DAT_00856110;
  param_1[0xc] = 0;
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(0xf00,uVar1);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar4 = 0;
    do {
      puVar5 = (undefined1 *)(iVar2 + uVar4);
      uVar4 = uVar4 + 1;
      if (puVar5 != (undefined1 *)0x0) {
        *puVar5 = 0;
      }
    } while (uVar4 < 0xf00);
  }
  param_1[0xc] = iVar2;
  if (iVar2 != 0) {
    uVar4 = 0;
    param_1[10] = iVar2;
    param_1[0xb] = 0x18;
    do {
      puVar3 = (undefined4 *)(param_1[10] + uVar4 * 0xa0);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
      }
      fn_004f0b78(param_1 + 5,param_1 + 6,param_1[9] + param_1[10] + uVar4 * 0xa0);
      uVar4 = uVar4 + 1;
    } while (uVar4 < 0x18);
  }
  puVar3 = (undefined4 *)param_1[3];
  while (puVar3 != param_1 + 2) {
    puVar6 = (undefined4 *)puVar3[1];
    *puVar3 = 0;
    puVar3[1] = 0;
    fn_004f0ab4(param_1 + 5,param_1 + 6,param_1[9] + (int)puVar3);
    puVar3 = puVar6;
  }
  fn_004f0c04(param_1 + 1);
  return param_1;
}


