#include "00250c7c_0025190c.h"



void fn_0025190c(undefined1 *param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 5;
  return;
}



void fn_002518a4(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  cVar1 = *(char *)(DAT_00898840 + 0x4d);
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x1e00) + 8);
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  if (cVar1 != '\0') {
    local_18 = param_4;
    local_18 = fn_00615e64();
    fn_003dccb4(uVar2,&local_18,2);
  }
  *param_1 = 1;
  param_1[0x10] = 1;
  return;
}



undefined4 fn_00251644(undefined4 *param_1)

{
  fn_005f3aac(1);
  fn_005e0a2c();
  DAT_0089787c = fn_001c7f04(DAT_00897878,*(undefined4 *)*param_1,0x37c04,0,0,0,1);
  return 0;
}



undefined4 fn_00251510(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  
  uVar1 = fn_005e0a2c();
  if ((uVar1 & 0x80000000) == 0) {
    piVar5 = (int *)*param_1;
    if (*piVar5 == 0) {
      iVar2 = fn_00145b00(0x37c04,&DAT_00812c8c);
      if (iVar2 != 0) {
        fn_00301f50(iVar2,0x37c04);
      }
      *piVar5 = iVar2;
    }
    uVar4 = fn_00118290();
    DAT_00897880 = fn_0012d6b0(DAT_00897878,uVar4,4,1);
    return 0;
  }
  if ((((uVar1 & 0x3fc00) == 0x4400) && (uVar3 = uVar1 & 0x3ff, 0x153 < uVar3)) && (uVar3 < 0x168))
  {
    uVar4 = 4;
  }
  else {
    if (((((uVar1 & 0x3fc00) != 0x4400) || (uVar3 = uVar1 & 0x3ff, uVar3 < 0x168)) ||
        (0x185 < uVar3)) &&
       ((((uVar1 & 0x3fc00) != 0x4400 || (uVar3 = uVar1 & 0x3ff, uVar3 < 0x186)) || (399 < uVar3))))
    {
      uVar3 = (uVar1 & 0x3fc00) >> 10;
    }
    uVar4 = 5;
  }
  fn_005e0784(uVar1,uVar3);
  return uVar4;
}



undefined4 fn_00250f30(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined1 auStack_204 [244];
  undefined1 auStack_110 [12];
  undefined1 auStack_104 [232];
  
  fn_005e0a2c(*param_1);
  DAT_00897880 = fn_001c7eb8(DAT_00897878,auStack_204,0xf4,0,0,0,0xf4,0,1);
  do {
    iVar3 = fn_00145aac(DAT_00897880);
  } while (iVar3 == 0);
  iVar3 = fn_00145aac(DAT_00897880);
  if (iVar3 != 2) {
    puVar4 = (undefined4 *)fn_001287d4(0x10,&DAT_00812c8c);
    pbVar6 = &UNK_007cc503;
    bVar2 = 0x61;
    pbVar5 = (byte *)((int)puVar4 + -1);
    iVar3 = 8;
    do {
      iVar3 = iVar3 + -1;
      bVar1 = bVar2 + (pbVar6[1] ^ bVar2);
      pbVar5[1] = pbVar6[1] ^ bVar2;
      pbVar6 = pbVar6 + 2;
      pbVar5 = pbVar5 + 2;
      *pbVar5 = *pbVar6 ^ bVar1;
      bVar2 = bVar1 + *pbVar5;
    } while (iVar3 != 0);
    iVar3 = fn_005273d8(auStack_110,auStack_204,0xf4,puVar4);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    fn_002feca8(puVar4);
    if (iVar3 != 0) {
      fn_0017821c(param_2,auStack_104,200);
      fn_0012d73c(DAT_00897880);
      DAT_00897880 = 0;
      fn_005e0784();
      return 1;
    }
    fn_00301f50(param_2,200);
  }
  fn_0012d73c(DAT_00897880);
  DAT_00897880 = 0;
  fn_005e0784();
  return 0;
}



void fn_00250f04(undefined4 *param_1)

{
  undefined1 uVar1;
  byte bVar2;
  byte bVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int *piVar8;
  byte *pbVar9;
  undefined4 *puVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint local_58 [9];
  undefined4 *local_34;
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [12];
  
  uVar4 = *(undefined4 *)(DAT_00897804 + 4);
  piVar8 = (int *)*param_1;
  if (*piVar8 == 0) {
    iVar5 = fn_00145b00(0x37c04,&DAT_00812c8c);
    if (iVar5 != 0) {
      fn_00301f50(iVar5,0x37c04);
    }
    *piVar8 = iVar5;
  }
  else {
    iVar5 = *piVar8;
  }
  fn_0017821c(iVar5 + 0xf4,uVar4,0x37af0);
  puVar10 = (undefined4 *)*piVar8;
  local_34 = puVar10 + 0x7dbf;
  *puVar10 = 0x31647073;
  puVar10[1] = 1;
  puVar10[2] = 0x37c04;
  puVar10[0xdef8] = 3;
  iVar5 = 0;
  puVar6 = puVar10 + 3;
  do {
    uVar1 = fn_00163868(0x100);
    iVar5 = iVar5 + 1;
    *(undefined1 *)puVar6 = uVar1;
    puVar6 = (undefined4 *)((int)puVar6 + 1);
  } while (iVar5 < 200);
  iVar5 = 0;
  puVar10[3] = puVar10[0x45];
  iVar11 = 0;
  puVar10[4] = puVar10[0x3f];
  puVar10[5] = puVar10[0x40];
  puVar10[6] = puVar10[0x41];
  puVar10[7] = puVar10[0x42];
  puVar10[8] = puVar10[0x43];
  puVar10[9] = puVar10[0x44];
  do {
    iVar12 = puVar10[iVar11 + 0xf0];
    if (iVar12 != 0) {
      local_58[0] = 0;
      local_58[1] = 0;
      local_58[2] = 0;
      local_58[3] = 0;
      local_58[4] = 0;
      local_58[5] = 0;
      local_58[6] = 0;
      local_58[7] = 0;
      local_58[8] = 0;
      uVar4 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),iVar12);
      fn_0020bbc4(auStack_30,uVar4);
      fn_00231128(local_58,0x11,uVar4,0);
      fn_00301a9c((int)puVar10 + iVar5 * 0x22 + 0x2a,local_58,0x22);
      uVar1 = fn_006c0108(auStack_2c);
      *(undefined1 *)((int)puVar10 + iVar5 + 0xb2) = uVar1;
      puVar10[iVar5 + 0x2e] = iVar12;
      uVar1 = fn_006bf184(auStack_2c);
      *(undefined1 *)((int)puVar10 + iVar5 + 200) = uVar1;
      iVar5 = iVar5 + 1;
    }
    iVar11 = iVar11 + 1;
  } while (iVar11 < 4);
  *(char *)((int)puVar10 + 0xce) = (char)iVar5;
  *(undefined2 *)(puVar10 + 0x33) = *(undefined2 *)local_34;
  fn_0013ef80(local_58,puVar10 + 0x3d,0x37af0);
  uVar13 = local_58[0] & 0xff;
  *(char *)(puVar10 + 0x34) = (char)local_58[0];
  puVar6 = (undefined4 *)fn_001287d4(0x10,&DAT_00812c8c);
  iVar5 = fn_00145b00(0x37c04,&DAT_00812c8c);
  pbVar9 = &UNK_007cc503;
  bVar3 = 0x61;
  pbVar7 = (byte *)((int)puVar6 + -1);
  iVar11 = 8;
  do {
    iVar11 = iVar11 + -1;
    bVar2 = bVar3 + (pbVar9[1] ^ bVar3);
    pbVar7[1] = pbVar9[1] ^ bVar3;
    pbVar9 = pbVar9 + 2;
    pbVar7 = pbVar7 + 2;
    *pbVar7 = *pbVar9 ^ bVar2;
    bVar3 = bVar2 + *pbVar7;
  } while (iVar11 != 0);
  fn_00527488(iVar5,puVar10,0xd4,puVar6);
  pbVar9 = &UNK_007cc513;
  uVar13 = uVar13 ^ 0xb9;
  pbVar7 = (byte *)((int)puVar6 + -1);
  iVar11 = 8;
  do {
    iVar11 = iVar11 + -1;
    iVar12 = uVar13 + (pbVar9[1] ^ uVar13);
    pbVar7[1] = (byte)(pbVar9[1] ^ uVar13);
    pbVar9 = pbVar9 + 2;
    pbVar7 = pbVar7 + 2;
    *pbVar7 = *pbVar9 ^ (byte)iVar12;
    uVar13 = iVar12 + (uint)*pbVar7 & 0xff;
  } while (iVar11 != 0);
  fn_00527488(iVar5 + 0xf4,puVar10 + 0x3d,0x37af0,puVar6);
  *puVar6 = 0;
  puVar6[1] = 0;
  puVar6[2] = 0;
  puVar6[3] = 0;
  fn_0017821c(puVar10,iVar5,0x37c04);
  fn_002feca8(puVar6);
  fn_002feef8(iVar5);
  return;
}



undefined4 fn_00250e58(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    uVar1 = fn_005e0a2c();
  }
  else {
    uVar1 = fn_005e0a1c();
  }
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = fn_00147fd4(DAT_00897878,1);
    fn_005e0784();
    return uVar2;
  }
  return 0;
}



undefined4 fn_00250c7c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 extraout_r1;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  longlong lVar11;
  uint local_88;
  uint local_84;
  
  piVar6 = (int *)*param_1;
  iVar1 = *piVar6;
  if ((iVar1 != 0) && (*(int *)(iVar1 + 4) == 1)) {
    if (*(int *)(iVar1 + 8) == 0x37c04) {
      fn_0017821c(*(undefined4 *)(DAT_00897804 + 4),iVar1 + 0xf4,0x37af0);
      piVar6 = (int *)*param_1;
      if (*piVar6 != 0) {
        fn_002feef8();
        *piVar6 = 0;
      }
      uVar10 = *(undefined4 *)(DAT_00897804 + 8);
      iVar1 = fn_006b64bc(uVar10);
      if (iVar1 != 0) {
        fn_001f825c();
        uVar2 = fn_006b621c(uVar10);
        fn_0017821c(&local_88,uVar2,0x60);
        iVar1 = fn_00661a0c(&local_88);
        if (iVar1 != 0) {
          fn_0025b20c(uVar10,&local_88);
        }
        fn_0011ddb8();
      }
      fn_00229310(*(undefined4 *)(DAT_00897804 + 0x28));
      fn_001237e4(&local_88);
      iVar1 = (int)local_84 >> 0x1f;
      lVar11 = (ulonglong)local_84 * 0x26d694b3 +
               CONCAT44(iVar1 * 0x26d694b3,(int)((ulonglong)local_88 * 0x26d694b3 >> 0x20));
      uVar9 = (uint)((ulonglong)local_84 * 0x112e0be8);
      uVar8 = (uint)((ulonglong)lVar11 >> 0x20);
      uVar3 = (int)((ulonglong)local_88 * 0x112e0be8 >> 0x20) +
              (uint)CARRY4((uint)((ulonglong)local_88 * 0x112e0be8),(uint)lVar11);
      uVar4 = uVar3 + uVar8;
      iVar5 = iVar1 * 0x112e0be8 + (int)((ulonglong)local_84 * 0x112e0be8 >> 0x20) +
              ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar3,uVar8) + (uint)CARRY4(uVar9,uVar4);
      uVar3 = uVar9 + uVar4 >> 0x1a | iVar5 * 0x40;
      iVar7 = -iVar1 + uVar3;
      iVar1 = (iVar5 >> 0x1a) + (uint)CARRY4(-iVar1,uVar3);
      lVar11 = fn_006b6228(uVar10);
      if (lVar11 != CONCAT44(iVar1,iVar7)) {
        fn_0025b708(uVar10);
        fn_00112e2c(uVar10,extraout_r1,iVar7,iVar1);
      }
      return 0;
    }
  }
  if (iVar1 != 0) {
    fn_002feef8();
    *piVar6 = 0;
  }
  return 2;
}


