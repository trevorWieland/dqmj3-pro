#include "001ae638_001aed7c.h"



void fn_001aed7c(undefined4 param_1)

{
  undefined1 auStack_50 [80];
  
  fn_001b03f0(auStack_50,0,param_1);
  fn_001aeda8(auStack_50);
  return;
}



int fn_001aec3c(int param_1,uint param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_220 [24];
  ushort local_208;
  undefined1 auStack_1d8 [24];
  undefined1 auStack_1c0 [92];
  undefined2 local_164;
  undefined1 auStack_160 [300];
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  iVar2 = 2;
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x14);
  }
  if ((param_1 != 0 && param_2 < uVar1) &&
     ((param_3 == 0 || param_3 == 2 || (param_3 == 4 || param_3 == 5)))) {
    iVar3 = param_1 + ((int)(param_2 + ((uint)((int)param_2 >> 0x1f) >> 0x1b)) >> 5) * 4;
    *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) & ~(1 << ((int)param_2 % 0x20 & 0xffU));
    iStack_34 = param_1;
    uStack_30 = param_2;
    iStack_2c = param_3;
    local_28 = param_4;
    iVar2 = fn_00191f08();
    if (iVar2 == 0) {
      iVar2 = 1;
    }
    else {
      iVar2 = fn_001b0b6c(auStack_160,param_3,local_28,param_5);
      if (iVar2 == 0) {
        fn_001b03f0(auStack_220,auStack_1d8,auStack_160,1);
        local_208 = local_208 & 0xbfff;
        if (auStack_1c0 != auStack_220) {
          fn_0017821c(auStack_1c0,auStack_220,0x5c);
        }
        local_164 = 0;
        fn_0018513c(0,auStack_1c0,0x60);
        if (DAT_008bf50e == '\0') {
          fn_001b21dc(param_1 + param_2 * 0x70 + 0x18,auStack_1c0);
        }
        else {
          fn_001b21f8();
        }
        *(uint *)(iVar3 + 4) = *(uint *)(iVar3 + 4) | 1 << ((int)param_2 % 0x20 & 0xffU);
      }
    }
  }
  return iVar2;
}



void fn_001aebc8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 int param_9)

{
  DAT_008e9970 = 3;
  DAT_008e9980 = 0;
  DAT_008e9984 = 0;
  DAT_008e995c = param_9;
  DAT_008e9960 = param_1;
  DAT_008e9964 = param_2;
  DAT_008e9968 = param_3;
  DAT_008e996c = param_4;
  DAT_008e994c = param_5;
  DAT_008e9974 = param_6;
  DAT_008e9978 = param_7;
  DAT_008e997c = param_8;
  if (param_9 == 0x84c0) {
    DAT_008e9988 = 3;
  }
  else if (param_9 == 0x84c1) {
    DAT_008e9988 = 4;
  }
  else {
    DAT_008e9988 = 5;
  }
  return;
}



void fn_001aeba8(void)

{
  int iVar1;
  
  iVar1 = fn_001b1118();
  if (iVar1 == 10) {
    fn_0018501c();
    return;
  }
  return;
}



void fn_001aeaa0(float *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_001781f0();
  fn_001781f0(param_1 + 0xc,param_3);
  *param_1 = *param_1 * 0.00390625;
  param_1[0xc] = param_1[0xc] * 0.00390625;
  param_1[0xd] = param_1[0xd] * 0.00390625;
  param_1[0xe] = param_1[0xe] * 0.00390625;
  param_1[4] = param_1[4] * 0.00390625;
  param_1[0x10] = param_1[0x10] * 0.00390625;
  param_1[5] = param_1[5] * 0.00390625;
  param_1[0x11] = param_1[0x11] * 0.00390625;
  param_1[6] = param_1[6] * 0.00390625;
  param_1[0x12] = param_1[0x12] * 0.00390625;
  param_1[8] = param_1[8] * 0.00390625;
  param_1[0x14] = param_1[0x14] * 0.00390625;
  param_1[9] = param_1[9] * 0.00390625;
  param_1[0x15] = param_1[0x15] * 0.00390625;
  param_1[10] = param_1[10] * 0.00390625;
  param_1[0x16] = param_1[0x16] * 0.00390625;
  param_1[1] = param_1[1] * 0.00390625;
  param_1[2] = param_1[2] * 0.00390625;
  return;
}



void fn_001aea1c(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x68) == param_2) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x6c);
  iVar2 = *(int *)(iVar3 + 0x710);
  if (0 < iVar2) {
    iVar5 = 0;
    do {
      puVar1 = *(uint **)(iVar3 + iVar5 * 4 + 0x714);
      iVar5 = iVar5 + 1;
      uVar4 = *puVar1 & 0xfefffffb;
      *puVar1 = uVar4;
      if (param_2 == 0x2701 || param_2 == 0x2703) {
        uVar4 = uVar4 | 4;
        *puVar1 = uVar4;
      }
      if (param_2 == 0x2702 || param_2 == 0x2703) {
        *puVar1 = uVar4 | 0x1000000;
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(int *)(param_1 + 0x68) = param_2;
  return;
}



void fn_001ae9c0(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return;
  }
  iVar2 = *(int *)(param_1 + param_2 * 4 + 0x70);
  if ((iVar2 != 0) && (*(int *)(param_1 + 0x60) != param_2)) {
    iVar3 = *(int *)(param_1 + 0x6c);
    if (*(int *)(iVar3 + 0x734) != 0) {
      uVar1 = fn_0015fa88(*(undefined4 *)(iVar2 + 0x28));
      **(uint **)(iVar3 + 0x734) = uVar1 >> 3;
    }
    *(int *)(param_1 + 0x60) = param_2;
  }
  return;
}



undefined4 fn_001ae8fc(undefined2 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((((param_2 != 0) && (iVar2 = fn_00191f08(), iVar1 = DAT_008bf51c, iVar2 != 0)) &&
      (DAT_008bf51c != 0)) &&
     ((iVar2 = fn_00184c20(1), iVar2 == 0 && (iVar2 = fn_00184c20(0), iVar2 == 0)))) {
    uVar3 = 0;
    do {
      if ((((uVar3 & 0xffff) < 100) && (iVar2 = fn_001b84b8(uVar3 & 0xffff,1), iVar2 != 0)) &&
         (iVar2 = fn_001affc4(iVar1 + uVar3 * 0x5c + 0x14,param_2), iVar2 != 0)) {
        if (param_1 == (undefined2 *)0x0) {
          return 1;
        }
        *param_1 = (short)uVar3;
        return 1;
      }
      uVar3 = uVar3 + 1;
    } while ((int)uVar3 < 100);
  }
  return 0;
}



undefined4 fn_001ae814(int param_1,byte *param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  uVar3 = 2;
  if (param_1 != 0 && param_2 != (byte *)0x0) {
    uVar3 = 1;
    iVar1 = fn_00191f08();
    if ((iVar1 != 0) &&
       (uVar3 = 8,
       (*(uint *)(param_2 +
                 ((int)(param_3 + ((uint)((int)param_3 >> 0x1f) >> 0x1b)) >> 5) * 4 + 0x14) &
       1 << ((int)param_3 % 0x20 & 0xffU)) != 0)) {
      bVar5 = *(ushort *)(param_2 + 2) != param_3;
      uVar2 = 0;
      if (*(ushort *)(param_2 + 2) < param_3) {
        uVar2 = param_3 - 1;
        param_3 = uVar2 & 0xffff;
      }
      if (bVar5) {
        uVar2 = param_3;
      }
      iVar1 = ((uint)*param_2 * 0x60 + 0x18) * uVar2 + *(int *)(param_2 + 0x24);
      iVar4 = iVar1 + param_4 * 0x60 + 0x18;
      if (((*(uint *)(iVar1 + ((int)(param_4 + ((uint)(param_4 >> 0x1f) >> 0x1b)) >> 5) * 4 + 4) &
           1 << (param_4 % 0x20 & 0xffU)) != 0) && (iVar1 = fn_001b0128(iVar4), iVar1 != 0)) {
        fn_0017821c(param_1,iVar4,0x60);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}



undefined4 fn_001ae638(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((param_1 < 100) && (iVar1 = fn_001b84b8(param_1,1), iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}


