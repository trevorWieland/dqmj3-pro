#include "006818c4_00682340.h"



undefined4 fn_00682340(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_38 [44];
  
  fn_00522550(auStack_38);
  DAT_00897898 = fn_00521ecc(auStack_38,param_3);
  if ((DAT_00897898 & 0x80000000) == 0) {
    DAT_00897898 = fn_005220fc(auStack_38,param_2);
    if (-1 < (int)DAT_00897898) {
      return 1;
    }
  }
  return 0;
}



undefined4 fn_006821fc(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1);
  if ((iVar1 == 0) ||
     (iVar1 = (**(code **)(*param_1 + 0x1c))(param_1,param_2),
     (iVar1 == 6 || iVar1 == 7) || iVar1 == 9)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00682074(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [24];
  
  iVar1 = (**(code **)(*param_1 + 0x18))(param_1,param_2);
  uVar2 = 0;
  if (iVar1 != 0) {
    iVar1 = fn_003035b0(param_2,(char *)&DAT_00682120);
    if (iVar1 == 0) {
      fn_00520d7c(auStack_20);
      fn_00521c3c(auStack_20);
      fn_0052144c(auStack_20,0);
      fn_00521ec4(auStack_20);
    }
    else {
      fn_00521ea0();
      DAT_00897898 = fn_0052197c(auStack_20,param_2);
      fn_00521c3c(auStack_20);
      fn_0052144c(auStack_20,0);
    }
    uVar2 = 1;
  }
  return uVar2;
}



bool fn_00681ec8(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  bool bVar2;
  undefined1 local_a2c [4];
  undefined1 auStack_a28 [2008];
  undefined1 auStack_250 [512];
  undefined1 auStack_50 [20];
  undefined1 auStack_3c [28];
  
  fn_00520d7c(auStack_50);
  if (param_2 != 0) {
    uVar1 = (**(code **)(*param_1 + 0x50))(param_1);
    fn_001028d4(auStack_250,(char *)&DAT_00682060,uVar1,param_2);
    fn_00521734(auStack_a28);
    DAT_00897898 = fn_00521688(auStack_a28,auStack_250);
    if (-1 < (int)DAT_00897898) {
      fn_00521008(auStack_3c);
      DAT_00897898 = fn_00520fd0(auStack_3c,0xe10,1);
      if (-1 < (int)DAT_00897898) {
        local_a2c[0] = 2;
        fn_00520e74(auStack_3c,5,local_a2c,1);
        if (((param_3 == 0) || (DAT_00897898 = fn_005213d8(auStack_a28,4), -1 < (int)DAT_00897898))
           && (DAT_00897898 = fn_0052174c(auStack_50,auStack_a28,auStack_3c,0,0),
              -1 < (int)DAT_00897898)) {
          DAT_00897898 = fn_00521a74(auStack_50);
          bVar2 = (DAT_00897898 & 0x80000000) == 0;
          if (!bVar2) {
            (**(code **)(*param_1 + 0x14))(param_1,(char *)&DAT_0068206c);
          }
          fn_00520e28(auStack_a28);
          fn_00521ec4(auStack_50);
          return bVar2;
        }
      }
    }
    fn_00520e28(auStack_a28);
  }
  fn_00521ec4(auStack_50);
  return false;
}



bool fn_00681c7c(void)

{
  byte bVar1;
  
  bVar1 = 0;
  if (DAT_00897894 != 0) {
    bVar1 = *(byte *)(DAT_00897894 + 4);
  }
  return DAT_00897894 != 0 && (bVar1 & 1) != 0;
}



uint * fn_006818c4(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 local_20;
  uint local_1c;
  undefined1 auStack_18 [8];
  
  uVar3 = *param_1;
  uVar7 = 0;
  if ((int)(param_1[1] - uVar3) >> 2 != 0) {
    do {
      fn_002feef8(*(undefined4 *)(uVar3 + uVar7 * 4));
      uVar3 = *param_1;
      uVar7 = uVar7 + 1;
    } while (uVar7 < (uint)((int)(param_1[1] - uVar3) >> 2));
  }
  uVar3 = 0;
  if ((int)(param_1[4] - param_1[3]) >> 2 != 0) {
    do {
      fn_002feef8(*(undefined4 *)(param_1[3] + uVar3 * 4));
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)((int)(param_1[4] - param_1[3]) >> 2));
  }
  uVar3 = param_1[0x2a];
  puVar6 = param_1 + 0x26;
  if (uVar3 != 0) {
    local_20 = *(undefined4 *)(uVar3 + 8);
    local_1c = uVar3;
    fn_00774818(auStack_18,puVar6,&local_20,&local_1c);
    uVar3 = param_1[0x2a];
    *(uint *)(uVar3 + 0xc) = param_1[0x27];
    param_1[0x27] = uVar3;
    puVar1 = (uint *)*puVar6;
    while (puVar1 != (uint *)0x0) {
      *puVar6 = *puVar1;
      fn_001008c4(puVar1[2],puVar1[1],0);
      fn_001008c4(puVar1,1,0);
      puVar1 = (uint *)*puVar6;
    }
  }
  uVar7 = param_1[0x23];
  uVar3 = uVar7;
  if (param_1[0x24] <= uVar7) {
    for (; uVar3 != param_1[0x24]; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar7,(int)(param_1[0x25] - uVar7) >> 2,0);
  uVar7 = param_1[0x1f];
  uVar3 = uVar7;
  if (param_1[0x20] <= uVar7) {
    for (; uVar3 != param_1[0x20]; uVar3 = uVar3 + 1) {
    }
  }
  fn_001008c4(uVar7,param_1[0x21] - uVar7,0);
  uVar7 = param_1[0x1c];
  uVar3 = uVar7;
  if (param_1[0x1d] <= uVar7) {
    for (; uVar3 != param_1[0x1d]; uVar3 = uVar3 + 1) {
    }
  }
  fn_001008c4(uVar7,param_1[0x1e] - uVar7,0);
  uVar7 = param_1[0x12];
  uVar5 = param_1[0x13];
  uVar3 = uVar7;
  if (uVar7 < uVar5) {
    if (0 < (int)(uVar5 - uVar7)) {
      for (iVar4 = (int)(uVar5 - uVar7) >> 3; iVar4 != 0; iVar4 = iVar4 + -1) {
      }
    }
  }
  else {
    for (; uVar3 != uVar5; uVar3 = uVar3 + 4) {
    }
  }
  fn_001008c4(uVar7,(int)(param_1[0x14] - uVar7) >> 2,0);
  puVar6 = param_1 + 7;
  while (param_1[0xf] != 0) {
    uVar7 = *puVar6;
    *puVar6 = uVar7 + 4;
    uVar5 = param_1[0xf] - 1;
    param_1[0xf] = uVar5;
    uVar3 = 0;
    if (uVar5 != 0) {
      uVar3 = param_1[9];
    }
    if (uVar5 == 0 || uVar7 + 4 == uVar3) {
      puVar2 = (undefined4 *)param_1[10];
      param_1[10] = (uint)(puVar2 + 1);
      fn_001008c4(*puVar2,0x20);
      if (param_1[0xf] == 0) {
        param_1[0xb] = 0;
        param_1[0xc] = 0;
        param_1[0xd] = 0;
        param_1[0xe] = 0;
        *puVar6 = 0;
        param_1[8] = 0;
        param_1[9] = 0;
        param_1[10] = 0;
        fn_001008c4(param_1[0x10],param_1[0x11],0);
      }
      else {
        uVar3 = *(uint *)param_1[10];
        if ((uint *)param_1[10] == (uint *)0x0) {
          uVar5 = 0;
          uVar7 = 0;
        }
        else {
          uVar5 = uVar3 + 0x80;
          uVar7 = uVar3;
        }
        *puVar6 = uVar3;
        param_1[8] = uVar7;
        param_1[9] = uVar5;
      }
    }
  }
  uVar7 = param_1[3];
  uVar3 = uVar7;
  if (param_1[4] < uVar7) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[4]);
  }
  fn_001008c4(uVar7,(int)(param_1[5] - uVar7) >> 2,0);
  uVar7 = *param_1;
  uVar3 = uVar7;
  if (param_1[1] < uVar7) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != param_1[1]);
  }
  fn_001008c4(uVar7,(int)(param_1[2] - uVar7) >> 2,0);
  return param_1;
}


