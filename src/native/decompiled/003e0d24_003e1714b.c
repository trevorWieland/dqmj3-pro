#include "003e0d24_003e1714b.h"



undefined4 fn_003e1644(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined2 local_a8;
  undefined1 auStack_a6 [30];
  undefined1 auStack_88 [96];
  undefined2 local_28;
  undefined1 local_26;
  undefined1 auStack_24 [20];
  
  fn_0039bdf4();
  uVar1 = (**(code **)(*param_1 + 300))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x128))(param_1);
  (**(code **)(*param_1 + 0x118))(param_1,uVar2,uVar1,DAT_00894e38);
  fn_0039be98(param_1);
  local_a8 = 0;
  fn_00158f6c(auStack_a6,0x1e);
  fn_00301f50(auStack_88,0x60);
  local_28 = 0;
  local_26 = 0xff;
  fn_00301f50(auStack_24,0x12);
  fn_003e1714(param_1,&local_a8);
  fn_003e1ce0(param_1,&local_a8);
  (**(code **)(*param_1 + 0x120))(param_1);
  return 1;
}



void fn_003e1714(int param_1,short *param_2)

{
  short sVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  short *psVar6;
  undefined4 *puVar7;
  undefined1 auStack_60 [4];
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 auStack_48 [32];
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  sVar1 = *(short *)(*(int *)(param_1 + 0x9c) + 0x138);
  iVar3 = fn_0069ccf8((int)sVar1);
  if (iVar3 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    fn_00301a9c(auStack_48,&DAT_007ba154,0x1e);
    fn_0029432c(iVar3 + 0x1c,auStack_48);
    puVar7 = (undefined4 *)0x0;
    iVar4 = (int)*(char *)(*(int *)(param_1 + 0x9c) + 0x52c);
    if ((iVar4 < 0) || (*(int *)(param_1 + 0x9c) + iVar4 * 0xf0 == -0x16c)) {
      uVar5 = 0;
    }
    else {
      fn_0020bbc4(auStack_60);
      uVar5 = fn_006bfda8(&local_5c);
    }
    iVar4 = fn_001a46f4(uVar5);
    if (iVar4 == 0) {
      *param_2 = sVar1;
      fn_00301a9c(param_2 + 1,auStack_48,0x1e);
      uVar5 = 0x60;
      puVar7 = (undefined4 *)(iVar3 + 0x80);
      psVar6 = param_2 + 0x10;
    }
    else {
      iVar4 = (int)*(char *)(*(int *)(param_1 + 0x9c) + 0x52c);
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(param_1 + 0x9c) + iVar4 * 0xf0 + 0x16c;
      }
      fn_0020bbc4(auStack_28,iVar4);
      uVar2 = fn_006bfe90(auStack_24);
      iVar4 = (int)*(char *)(*(int *)(param_1 + 0x9c) + 0x52c);
      if ((-1 < iVar4) && (iVar4 = *(int *)(param_1 + 0x9c) + iVar4 * 0xf0, iVar4 != -0x16c)) {
        puVar7 = (undefined4 *)(iVar4 + 0x1de);
      }
      local_5c = *puVar7;
      local_58 = puVar7[1];
      local_54 = puVar7[2];
      local_50 = puVar7[3];
      local_4c = *(undefined2 *)(puVar7 + 4);
      *param_2 = sVar1;
      fn_00301a9c(param_2 + 1,auStack_48,0x1e);
      fn_0017821c(param_2 + 0x10,iVar3 + 0x80,0x60);
      param_2[0x40] = (short)uVar5;
      uVar5 = 0x12;
      puVar7 = &local_5c;
      psVar6 = param_2 + 0x42;
      *(undefined1 *)(param_2 + 0x41) = uVar2;
    }
    fn_0017821c(psVar6,puVar7,uVar5);
  }
  return;
}



void fn_003e14c0(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = 0;
  uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x10);
  cVar1 = *(char *)(*(int *)(param_1 + 0x9c) + 0x903);
  do {
    iVar5 = param_2 + iVar6 * 0xf0;
    iVar7 = iVar5 + 0x150;
    uVar3 = fn_0036e9e4(uVar2,iVar6,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x48));
    fn_002b415c(uVar3,iVar7);
    *(undefined4 *)(*(int *)(param_1 + 0xe4) + iVar6 * 4) = uVar3;
    if ((cVar1 != '\0') ||
       ((uVar3 = 0, *(char *)(*(int *)(param_1 + 0x9c) + 0x904) == '\0' &&
        ((((iVar4 = fn_00154ac8(0x19), iVar4 == 0 && (iVar4 = fn_006bf34c(), iVar4 != 0)) ||
          ((iVar4 = fn_00154ac8(0x463), iVar4 == 0 && (iVar4 = fn_006bf184(), iVar4 != 0)))) &&
         ((iVar7 != 0 && (iVar5 = fn_001a46f4((int)*(short *)(iVar5 + 0x16c)), iVar5 != 0)))))))) {
      uVar3 = 1;
    }
    fn_0036e4bc(iVar7,uVar2,iVar6,uVar3);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 4);
  return;
}



void fn_003e1490(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_001827b0(*(undefined4 *)(param_1 + 0x74),(char *)&DAT_003e14b0);
  fn_00190d50(uVar1,param_2);
  return;
}



void fn_003e1454(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_003e1abc(param_1);
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



/* WARNING: Removing unreachable block (ram,0x003e1184) */
/* WARNING: Removing unreachable block (ram,0x003e11c8) */

void fn_003e1144(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0022cdf0();
  if (iVar1 == 0) {
    return;
  }
  fn_0022cf0c(param_1);
  puVar3 = *(undefined4 **)(param_1 + 0xa0);
  for (puVar2 = *(undefined4 **)(param_1 + 0x9c); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
  }
  puVar3 = *(undefined4 **)(param_1 + 0xac);
  for (puVar2 = *(undefined4 **)(param_1 + 0xa8); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    (**(code **)(*(int *)*puVar2 + 0x14))((int *)*puVar2);
  }
  fn_003e0ff4(param_1);
  return;
}


