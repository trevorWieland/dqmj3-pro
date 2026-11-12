#include "003ca760_003cada0.h"



void fn_003ca9f8(int param_1)

{
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_002f7364(0);
    fn_003cb83c(param_1,(char *)&DAT_003caa88,0);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    fn_002f6e0c();
    fn_002f5f8c(1);
    fn_002f6fe4();
    fn_006899f4(param_1,0xd5,1);
    fn_00689bd0(param_1,0,0);
    *(undefined **)(param_1 + 0x78) = &DAT_003ca8a4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



undefined4 fn_003ca760(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  puVar4 = *(undefined4 **)(param_1 + 0x18);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_00897048) goto LAB_003ca7ac;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003ca7ac:
  iVar3 = puVar4[4];
  if ((iVar3 == 0) && ((puVar4[5] & 1) == 0 || puVar4[5] == 0)) {
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(code **)(param_1 + 0x78) = fn_003ca8cc;
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(code **)(param_1 + 0x68) = fn_003ca8cc;
    *(undefined4 *)(param_1 + 0x84) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(code **)(param_1 + 0x70) = fn_003ca8cc;
  }
  else {
    uVar2 = puVar4[5];
    *(undefined4 *)(param_1 + 0x7c) = uVar2;
    *(int *)(param_1 + 0x78) = iVar3;
    *(undefined4 *)(param_1 + 0x74) = uVar2;
    *(int *)(param_1 + 0x70) = iVar3;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(int *)(param_1 + 0x68) = iVar3;
    *(undefined4 *)(param_1 + 0x84) = 0;
    local_20 = 0;
    uStack_1c = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x18);
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar1 == &DAT_00897048) goto LAB_003ca824;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_003ca824:
    fn_00584ee0(puVar4,&local_20);
    fn_002f8170();
    fn_00689930(param_1,0,0);
  }
  return 1;
}



void fn_003ca8cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x5e);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895b24) goto LAB_003ca91c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003ca91c:
  if (*(int *)(param_1 + 0x84) == 0) {
    *(undefined1 *)((int)puVar1 + 0xb) = 1;
    fn_00689878(param_1,0x5e);
    func_0x002f5d84(L"rom:/data/Layout/menu/wifi_ranking_battle/upper/connect.arc",(char *)&DAT_003ca9e4);
    return;
  }
  if (*(char *)(puVar1 + 2) != '\0') {
    iVar3 = fn_00445fb8(puVar1);
    if (iVar3 == 0) {
      if (*(char *)((int)puVar1 + 10) == '\0') {
        fn_002f6dbc();
        return;
      }
      uVar4 = fn_002f8364(param_1);
      fn_003ca418(uVar4,1,0);
      return;
    }
    fn_002f6f54(param_1);
    iVar3 = fn_006cd5a0();
    if (iVar3 == 0) {
      *(code **)(param_1 + 0x78) = fn_003cada0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
    *(code **)(param_1 + 0x78) = fn_003cb2b4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cada0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0xfa);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897100) goto LAB_003cadec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003cadec:
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_003cb83c(param_1,(char *)&DAT_003cae74,0);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
    *(undefined1 *)((int)puVar1 + 0x19) = 1;
    puVar1[5] = 1;
    *(undefined1 *)(puVar1 + 6) = 1;
    fn_00689878(param_1,0xfa);
    return;
  }
  if (*(char *)(puVar1 + 4) == '\x01') {
    *(code **)(param_1 + 0x78) = fn_003cac04;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else if (*(char *)(puVar1 + 4) == '\x03') {
    fn_002f6dbc();
    return;
  }
  return;
}



void fn_003cac04(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  piVar1 = (int *)fn_002f6f54();
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_00420130(piVar1);
    return;
  }
  if (0x1e < *(uint *)(*(int *)(param_1 + 0x5c) + 0x58)) {
    iVar2 = fn_006cda14(piVar1);
    if (iVar2 == 0) {
      if (*piVar1 != 0) {
        fn_002f5ee4(*piVar1,(char *)&DAT_003ca8bc);
      }
      *(code **)(param_1 + 0x78) = fn_003caaa8;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
    iVar2 = fn_006cda24();
    if (iVar2 != 0) {
      uVar3 = fn_006b723c(piVar1);
      uVar4 = fn_002f8364(param_1);
      fn_003ca418(uVar4,3,uVar3);
      *(undefined **)(param_1 + 0x78) = &DAT_003ca8a4;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  return;
}



void fn_003caaa8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined2 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 local_18;
  
  local_18 = param_4;
  uVar1 = fn_002f6f54();
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_0041fe68(uVar1);
    return;
  }
  iVar2 = fn_006cda14();
  if (iVar2 == 0) {
    fn_002f60e0();
    uVar1 = *(undefined4 *)(DAT_00897804 + 0x30);
    puVar4 = (undefined2 *)fn_006b8730(uVar1);
    local_18 = CONCAT22(((unsigned int)(local_18) >> 16) & 0xffff,*puVar4);
    fn_002f6fa8();
    piVar5 = (int *)fn_006cd9fc();
    local_18 = CONCAT31(((unsigned int)(local_18) >> 8) & 0xffffff,*piVar5 != 0);
    fn_0028b960(uVar1,&local_18);
    uVar1 = fn_002f7e70();
    iVar2 = fn_002f6fa8();
    iVar6 = *(int *)(iVar2 + 0x18);
    iVar2 = fn_006c3b34(uVar1);
    if (iVar2 < iVar6) {
      fn_0036a854(uVar1,iVar6);
      fn_0036a848(uVar1,0);
    }
    fn_00689bd0(param_1,0,0);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    *(code **)(param_1 + 0x78) = fn_003cacc4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  iVar2 = fn_006cda24(uVar1);
  if (iVar2 != 0) {
    uVar1 = fn_006b723c(uVar1);
    uVar3 = fn_002f8364(param_1);
    fn_003ca418(uVar3,3,uVar1);
    *(undefined **)(param_1 + 0x78) = &DAT_003ca8a4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cacc4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0x78) = fn_003cb4b0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  uVar1 = fn_002f6fa8();
  uVar3 = 0;
  while ((iVar2 = fn_002f6fbc(uVar3 & 0xff), iVar2 == 0 ||
         (iVar2 = fn_006cd6ec(uVar1), iVar2 != 0))) {
    uVar3 = uVar3 + 1;
    if (1 < (int)uVar3) {
      *(code **)(param_1 + 0x78) = fn_003cb4b0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
  }
  fn_002f79d0();
  fn_003cb83c(param_1,(char *)&DAT_003cad84,0);
  return;
}


