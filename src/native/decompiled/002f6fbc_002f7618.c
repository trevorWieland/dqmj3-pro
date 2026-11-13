#include "002f6fbc_002f7618.h"



void fn_002f7618(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 auStack_d8 [4];
  undefined4 local_d4;
  uint local_d0;
  undefined1 auStack_cc [36];
  undefined1 auStack_a8 [136];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 auStack_1d [13];
  
  fn_00301f50(auStack_d8,0xc4);
  iVar3 = *(int *)(DAT_00897804 + 8);
  puVar4 = *(undefined4 **)(DAT_00897804 + 0x3c);
  local_d4 = fn_006b6238(iVar3);
  iVar1 = fn_002f8914();
  local_d0 = (uint)(iVar1 == 1);
  fn_00301a9c(auStack_cc,*puVar4,0x24);
  uVar2 = fn_002f8914();
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar2);
  local_20 = *(byte *)(iVar1 + 0x3c3) < 4;
  local_1f = 1;
  fn_00176fb0(auStack_1d,*(int *)(iVar3 + 4) + 0xc4);
  iVar1 = fn_006b64bc(iVar3);
  local_1e = (undefined1)iVar1;
  if (iVar1 != 0) {
    fn_001adf30(1);
    fn_001f825c();
    uVar2 = fn_006b621c(iVar3);
    fn_006618fc(auStack_a8,uVar2);
    fn_0011ddb8();
  }
  fn_0041fe38(*(undefined4 *)(DAT_008977ec + 0x28),auStack_d8);
  return;
}



void fn_002f7444(void)

{
  int iVar1;
  undefined1 auStack_19ba8 [704];
  undefined1 auStack_198e8 [520];
  undefined1 auStack_196e0 [2352];
  undefined1 auStack_18db0 [3208];
  undefined1 auStack_18128 [1308];
  undefined1 auStack_17c0c [104];
  undefined1 auStack_17ba4 [2188];
  undefined1 auStack_17318 [2848];
  undefined4 uStack_167f8;
  undefined4 uStack_167f4;
  undefined4 uStack_167f0;
  undefined4 uStack_167ec;
  undefined4 uStack_167e8;
  undefined4 uStack_167e4;
  undefined4 uStack_167e0;
  undefined4 uStack_167dc;
  undefined1 auStack_167d8 [100];
  undefined4 uStack_16774;
  undefined4 uStack_16770;
  undefined4 uStack_1676c;
  undefined4 uStack_16768;
  undefined4 uStack_16764;
  undefined4 uStack_16760;
  undefined4 uStack_1675c;
  undefined4 uStack_16758;
  undefined1 auStack_16750 [80904];
  undefined1 auStack_2b48 [7748];
  undefined1 auStack_d04 [676];
  undefined4 local_a60;
  undefined4 uStack_a5c;
  undefined4 uStack_a58;
  undefined4 uStack_a54;
  undefined4 uStack_a50;
  undefined4 uStack_a4c;
  undefined1 auStack_a48 [2616];
  
  iVar1 = *(int *)(DAT_00897804 + 4);
  fn_0017821c(auStack_19ba8,iVar1 + 8,0x2c0);
  fn_0017821c(auStack_198e8,iVar1 + 0x1de44,0x208);
  fn_0017821c(auStack_196e0,iVar1 + 0x1e04c,0x92e);
  fn_0017821c(auStack_18db0,iVar1 + 0x1e97c,0xc88);
  fn_0017821c(auStack_18128,iVar1 + 0x1f604,0x51c);
  fn_0017821c(auStack_17c0c,iVar1 + 0x1fb20,0x68);
  fn_0017821c(auStack_17ba4,iVar1 + 0x1fb88,0x88c);
  fn_0017821c(auStack_17318,iVar1 + 0x20418,0xb20);
  uStack_167f8 = *(undefined4 *)(iVar1 + 0x20f38);
  uStack_167f4 = *(undefined4 *)(iVar1 + 0x20f3c);
  uStack_167f0 = *(undefined4 *)(iVar1 + 0x20f40);
  uStack_167ec = *(undefined4 *)(iVar1 + 0x20f44);
  uStack_167e8 = *(undefined4 *)(iVar1 + 0x20f48);
  uStack_167e4 = *(undefined4 *)(iVar1 + 0x20f4c);
  uStack_167e0 = *(undefined4 *)(iVar1 + 0x20f50);
  uStack_167dc = *(undefined4 *)(iVar1 + 0x20f54);
  fn_0017821c(auStack_167d8,iVar1 + 0x20f58,100);
  uStack_16774 = *(undefined4 *)(iVar1 + 0x20fbc);
  uStack_16770 = *(undefined4 *)(iVar1 + 0x20fc0);
  uStack_1676c = *(undefined4 *)(iVar1 + 0x20fc4);
  uStack_16768 = *(undefined4 *)(iVar1 + 0x20fc8);
  uStack_16764 = *(undefined4 *)(iVar1 + 0x20fcc);
  uStack_16760 = *(undefined4 *)(iVar1 + 0x20fd0);
  uStack_1675c = *(undefined4 *)(iVar1 + 0x20fd4);
  uStack_16758 = *(undefined4 *)(iVar1 + 0x20fd8);
  fn_0017821c(auStack_16750,iVar1 + 0x20fe0,0x13c08);
  fn_0017821c(auStack_2b48,iVar1 + 0x34be8,0x1e44);
  fn_0017821c(auStack_d04,iVar1 + 0x36afc,0x2a0);
  local_a60 = *(undefined4 *)(iVar1 + 0x36da0);
  uStack_a5c = *(undefined4 *)(iVar1 + 0x36da4);
  uStack_a58 = *(undefined4 *)(iVar1 + 0x36da8);
  uStack_a54 = *(undefined4 *)(iVar1 + 0x36dac);
  uStack_a50 = *(undefined4 *)(iVar1 + 0x36db0);
  uStack_a4c = *(undefined4 *)(iVar1 + 0x36db4);
  fn_0017821c(auStack_a48,iVar1 + 0x36db8,0xa34);
  fn_0041fe0c(*(undefined4 *)(DAT_008977ec + 0x28),auStack_19ba8);
  return;
}



int fn_002f7420(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006cba08(*(undefined4 *)(DAT_008977ec + 0x2c),param_1);
  return iVar1 + 0x20;
}



undefined1 fn_002f73c0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74f8(*(undefined4 *)(DAT_008977ec + 0x24),0xe1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00896fe0) goto LAB_002f7410;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f7410:
  return *(undefined1 *)((int)puVar1 + 0x11);
}



void fn_002f7364(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)(DAT_008977ec + 0x24);
  if (param_1 == 0) {
    fn_001f7448(uVar1,0,0x3c,0,0);
    return;
  }
  fn_002f5c0c();
  fn_001f7438(uVar1,0x3c,0);
  return;
}



void fn_002f7314(undefined1 param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_3e8 [980];
  undefined1 local_14;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x3c);
  uVar1 = fn_002f8914();
  fn_006c3acc(uVar2,uVar1,auStack_3e8);
  local_14 = param_1;
  uVar1 = fn_002f8914();
  fn_0036a810(uVar2,uVar1,auStack_3e8);
  return;
}



void fn_002f72c8(undefined4 param_1,undefined1 param_2)

{
  undefined1 auStack_3e8 [982];
  undefined1 local_12;
  
  fn_006c3acc(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  local_12 = param_2;
  fn_0036a810(*(undefined4 *)(DAT_00897804 + 0x3c),param_1,auStack_3e8);
  return;
}



undefined1 fn_002f7248(void)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  uVar2 = fn_002f8364();
  puVar3 = (undefined4 *)fn_001f751c(uVar2,0x4c);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008946d4) goto LAB_002f7290;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_002f7290:
  uVar1 = 0;
  if (*(char *)(puVar3 + 7) != '\0') {
    if (*(char *)(puVar3 + 7) == '\x01') {
      fn_0036a840(*(undefined4 *)(DAT_00897804 + 0x3c),puVar3[5]);
    }
    uVar1 = 1;
  }
  return uVar1;
}



void fn_002f7144(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int local_3f0 [11];
  undefined1 local_3c1 [941];
  
  uVar1 = fn_002f8914();
  uVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),uVar1);
  fn_0017821c(local_3f0,uVar1,0x3d8);
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  uVar5 = 0;
  do {
    if (local_3f0[uVar5 * 0x3c] != 0) {
      fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 4);
  iVar2 = 0;
  do {
    iVar3 = local_3f0[iVar2 * 0x3c];
    if ((iVar3 != 0) &&
       ((((iVar4 = param_1 + 0x40, iVar3 == *(int *)(param_1 + 0x40) ||
          (iVar4 = param_1 + 0x48, iVar3 == *(int *)(param_1 + 0x48))) ||
         (iVar4 = param_1 + 0x50, iVar3 == *(int *)(param_1 + 0x50))) ||
        (iVar4 = param_1 + 0x58, iVar3 == *(int *)(param_1 + 0x58))))) {
      local_3c1[iVar2 * 0xf0] = *(undefined1 *)(iVar4 + 4);
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  uVar1 = fn_002f8914();
  fn_0036a810(*(undefined4 *)(DAT_00897804 + 0x3c),uVar1,local_3f0);
  return;
}



int fn_002f7124(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_002f5944();
  iVar2 = fn_002f6980(param_1);
  return iVar2 + iVar1;
}



void fn_002f70cc(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))();
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089711c) goto LAB_002f7114;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_002f7114:
  fn_006c8304(puVar1);
  return;
}



void fn_002f6fe4(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int local_400 [7];
  undefined2 local_3e4 [466];
  undefined1 local_40;
  undefined1 local_3f;
  undefined4 local_28;
  
  uVar4 = 0;
  local_28 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    fn_006c3acc(*(undefined4 *)(DAT_00897804 + 0x3c),uVar4 & 0xff,local_400);
    local_40 = 0xff;
    uVar2 = 0;
    local_3f = 0xff;
    do {
      piVar3 = local_400 + uVar2 * 0x3c;
      *piVar3 = 0;
      local_3e4[uVar2 * 0x78] = 0;
      iVar1 = fn_0028b09c(local_28,uVar2);
      if (iVar1 != 0) {
        fn_0017821c(piVar3,iVar1,0xf0);
        iVar1 = fn_006b846c(local_28);
        if (iVar1 == *piVar3) {
          local_40 = (char)uVar2;
        }
        else {
          iVar1 = fn_006b8600(local_28);
          if (iVar1 == *piVar3) {
            local_3f = (char)uVar2;
          }
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < 4);
    fn_0036a810(*(undefined4 *)(DAT_00897804 + 0x3c),uVar4 & 0xff,local_400);
    uVar4 = uVar4 + 1;
  } while ((int)uVar4 < 2);
  return;
}



int fn_002f6fbc(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_006c3ab0(*(undefined4 *)(DAT_00897804 + 0x3c),param_1);
  return (int)*(char *)(iVar1 + 0x3d6);
}


