#include "00496040_004969d8.h"



undefined4 fn_004969d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_58 [64];
  
  fn_004b73b0(auStack_58);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_58,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_58,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return 0;
  }
  fn_004ba7ac(auStack_58,4);
  fn_004a3584(auStack_58,param_3);
  DAT_008e6694 = &DAT_004990c8;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_58);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_58);
  fn_004b7520(auStack_58);
  return uVar4;
}



undefined4
fn_00496810(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [64];
  int local_38;
  int iStack_34;
  int iStack_30;
  int *piStack_2c;
  undefined4 local_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  piStack_2c = param_3;
  local_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7c4(auStack_78,*(undefined2 *)(param_1 + 0x20),1);
  iVar2 = fn_004bab34(auStack_78,param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  fn_004ba7ac(auStack_78,0x11);
  local_38 = param_3[1] - *param_3 >> 3;
  fn_0015ef4c(auStack_78,&local_38,4);
  iVar1 = param_3[1];
  for (iVar2 = *param_3; iVar2 != iVar1; iVar2 = iVar2 + 8) {
    fn_0015ef4c(auStack_78,iVar2,8);
  }
  fn_0015ef4c(auStack_78,param_6,8);
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_28);
    fn_0048ca64(param_2,param_5);
  }
  DAT_008e66c8 = fn_00497a84;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar2 = fn_006d3ef4(param_1,0x10), iVar2 == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}



void fn_004966f4(int param_1,int param_2)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int local_28;
  undefined1 local_24 [4];
  undefined4 local_20 [2];
  
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar4 = 0;
  if (cVar1 == '\0') {
    local_24[0] = 0;
    piVar2 = &local_28;
    if (*(char *)(param_2 + 4) != '\0') {
      piVar2 = (int *)local_24;
    }
    local_28 = CONCAT31(((unsigned int)(local_28) >> 8) & 0xffffff,*(char *)(param_2 + 4));
    fn_0015ef4c(param_1,piVar2,1);
    iVar4 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_20[0] = 0;
    fn_0015ef4c(param_1,local_20,4);
  }
  fn_0015ef4c(param_1,param_2 + 5,1);
  fn_0015ef4c(param_1,param_2 + 6,1);
  fn_0015ef4c(param_1,param_2 + 7,1);
  fn_0015ef4c(param_1,param_2 + 8,1);
  fn_0015ef4c(param_1,param_2 + 0xc,4);
  fn_0015ef4c(param_1,param_2 + 0x10,1);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar4);
    local_28 = (iVar3 - iVar4) + -4;
    fn_0015ef4c(param_1,&local_28,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}



int fn_004966a4(int param_1,int param_2)

{
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  fn_00170fa4(param_1 + 0x18,param_2 + 0x18);
  *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_2 + 0x20);
  return param_1;
}



void fn_00496578(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_18;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_18 = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_18), *(char *)(param_1 + 4) == '\0')))) &&
     ((iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0' &&
      (((((fn_0074a528(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,param_2 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074a528(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
        ((fn_0074a528(param_1,param_2 + 0x14), *(char *)(param_1 + 4) == '\0' &&
         (fn_0045f7f0(param_1,param_2 + 0x18), *(char *)(param_1 + 4) == '\0')))) &&
       (fn_0074a528(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))))))
  {
    uVar2 = local_18 + iVar3;
    if ((uVar2 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2)) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      *(uint *)(param_1 + 0xc) = uVar2;
    }
  }
  return;
}



int fn_0049647c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = *(undefined4 *)(param_2 + 0xc);
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  fn_00170fa4(param_1 + 0x18,param_2 + 0x18);
  *(undefined2 *)(param_1 + 0x20) = *(undefined2 *)(param_2 + 0x20);
  fn_004b8cb4(param_1 + 0x24,param_2 + 0x24);
  *(undefined1 *)(param_1 + 0x48) = *(undefined1 *)(param_2 + 0x48);
  *(undefined1 *)(param_1 + 0x49) = *(undefined1 *)(param_2 + 0x49);
  fn_0079dd48(param_1 + 0x4c,param_2 + 0x4c);
  *(undefined1 *)(param_1 + 0x5c) = *(undefined1 *)(param_2 + 0x5c);
  *(undefined1 *)(param_1 + 0x5d) = *(undefined1 *)(param_2 + 0x5d);
  fn_0079dd48(param_1 + 0x60,param_2 + 0x60);
  fn_0014f510(param_1 + 0x70,param_2 + 0x70);
  fn_0014f510(param_1 + 0x78,param_2 + 0x78);
  *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)(param_2 + 0x80);
  *(undefined1 *)(param_1 + 0x82) = *(undefined1 *)(param_2 + 0x82);
  *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(param_2 + 0x84);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0x8c);
  fn_0014f510(param_1 + 0x90,param_2 + 0x90);
  fn_0014f510(param_1 + 0x98,param_2 + 0x98);
  fn_0079448c(param_1 + 0xa0,param_2 + 0xa0);
  fn_007936a0(param_1 + 0xac,param_2 + 0xac);
  return param_1;
}



int fn_004963f0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *param_1 = &DAT_00854544;
  iVar1 = fn_00793660(param_1 + 0x2b);
  puVar3 = *(undefined4 **)(iVar1 + -8);
  for (puVar2 = *(undefined4 **)(iVar1 + -0xc); puVar2 != puVar3; puVar2 = puVar2 + 2) {
    (**(code **)*puVar2)(puVar2);
  }
  fn_0014f1bc(*(int *)(iVar1 + -0xc));
  *(undefined **)(iVar1 + -0x54) = &DAT_00854bdc;
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x4c));
  *(undefined **)(iVar1 + -0x68) = &DAT_00854bdc;
  fn_0014f1bc(*(undefined4 *)(iVar1 + -0x60));
  iVar1 = fn_004b8c5c(iVar1 + -0x88);
  iVar1 = fn_00170f54(iVar1 + -0xc);
  return iVar1 + -0x18;
}



int fn_0049630c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  *param_1 = &DAT_00854544;
  *(undefined1 *)(param_1 + 1) = 0;
  iVar1 = fn_0013d40c(param_1 + 6);
  iVar1 = fn_004b8b9c(iVar1 + 0xc,0);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  iVar1 = fn_0048b218(iVar1 + 0x20,3,&local_28);
  fn_0014f1bc(local_28);
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = fn_0048b218(iVar1 + 0x14,3,&local_1c);
  fn_0014f1bc(local_1c);
  iVar1 = fn_00124be8(iVar1 + 0x18);
  iVar1 = fn_00124be8(iVar1 + 8);
  iVar1 = fn_00124be8(iVar1 + 0x18);
  iVar1 = fn_00124be8(iVar1 + 8);
  iVar1 = fn_0075546c(iVar1 + 8,0);
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  iVar2 = fn_0015ece0(0x500);
  *(int *)(iVar1 + 0xc) = iVar2;
  *(int *)(iVar1 + 0x10) = iVar2;
  *(int *)(iVar1 + 0x14) = iVar2 + 0x500;
  return iVar1 + -0xa0;
}



void fn_00496040(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_68 [2];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_68[0] = 0;
  if (((((cVar1 != '\0') ||
        ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074a528(param_1,local_68), *(char *)(param_1 + 4) == '\0')))) &&
       (iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
      ((((fn_0074a5fc(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0' &&
         (fn_0074a528(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074a528(param_1,param_2 + 0x14), *(char *)(param_1 + 4) == '\0')) &&
       ((fn_0045f7f0(param_1,param_2 + 0x18), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a598(param_1,param_2 + 0x20), *(char *)(param_1 + 4) == '\0')))))) &&
     ((fn_0046d648(param_1,param_2 + 0x24), *(char *)(param_1 + 4) == '\0' &&
      ((fn_0074ce70(param_1,param_2 + 0x44), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074ce70(param_1,param_2 + 0x58), *(char *)(param_1 + 4) == '\0')))))) {
    fn_0074a5fc(param_1,&local_20);
    local_60 = local_20;
    uStack_5c = uStack_1c;
    fn_0014f510(param_2 + 0x70,&local_60);
    if (*(char *)(param_1 + 4) == '\0') {
      fn_0074a5fc(param_1,&local_28);
      local_58 = local_28;
      uStack_54 = uStack_24;
      fn_0014f510(param_2 + 0x78,&local_58);
      if ((((*(char *)(param_1 + 4) == '\0') &&
           (fn_0074a598(param_1,param_2 + 0x80), *(char *)(param_1 + 4) == '\0')) &&
          (fn_0074a4c8(param_1,param_2 + 0x82), *(char *)(param_1 + 4) == '\0')) &&
         (((fn_0074a528(param_1,param_2 + 0x84), *(char *)(param_1 + 4) == '\0' &&
           (fn_0074a528(param_1,param_2 + 0x88), *(char *)(param_1 + 4) == '\0')) &&
          (fn_0074a528(param_1,param_2 + 0x8c), *(char *)(param_1 + 4) == '\0')))) {
        fn_0074a5fc(param_1,&local_30);
        local_50 = local_30;
        uStack_4c = uStack_2c;
        fn_0014f510(param_2 + 0x90,&local_50);
        if (*(char *)(param_1 + 4) == '\0') {
          fn_0074a5fc(param_1,&local_38);
          local_48 = local_38;
          uStack_44 = uStack_34;
          fn_0014f510(param_2 + 0x98,&local_48);
          if (((*(char *)(param_1 + 4) == '\0') &&
              (fn_0074b108(param_1,param_2 + 0xa0), *(char *)(param_1 + 4) == '\0')) &&
             (fn_0074bbd0(param_1,param_2 + 0xac), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0')
             ) {
            uVar2 = local_68[0] + iVar3;
            if ((uVar2 < *(uint *)(param_1 + 0xc)) ||
               (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2)) {
              *(undefined1 *)(param_1 + 4) = 1;
            }
            else {
              *(uint *)(param_1 + 0xc) = uVar2;
            }
          }
        }
      }
    }
  }
  return;
}


