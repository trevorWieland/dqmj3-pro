#include "003cae8c_003cb78c.h"



void fn_003cb78c(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}



void fn_003cb4b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_100;
  undefined4 local_fc [6];
  short local_e4;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_002f6f54(param_1);
    iVar1 = fn_006cd64c();
    if (iVar1 != 0) {
      fn_002f7e70();
      iVar1 = fn_006c3afc();
      if (iVar1 == 0) {
        fn_003cb83c(param_1,(char *)&DAT_003cb654,0);
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
        fn_00203440(0x1000029);
        iVar1 = fn_006cd5e4(uVar2);
        if (iVar1 != 0) {
          local_100 = 0;
          local_fc[0] = 0;
          fn_006cd620(uVar2,&local_100,local_fc);
          fn_0016a82c((int)(short)local_100);
          fn_0015b0dc();
          uVar2 = fn_0022f584((char *)&DAT_003cb674,0);
          fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
          return;
        }
        iVar1 = fn_006cd71c(uVar2);
        if (iVar1 == 0) {
          return;
        }
        fn_006cd750(uVar2,&local_100);
        fn_0015b064((int)local_e4);
        fn_0015b0dc();
        uVar2 = fn_0022f584((char *)&DAT_003cb674,0);
        fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar2);
        return;
      }
    }
    *(code **)(param_1 + 0x78) = fn_003cb694;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  else {
    iVar1 = fn_006adb80();
    if (iVar1 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    }
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0x78) = fn_003cae8c;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
  }
  return;
}



void fn_003cb2b4(int param_1)

{
  if (*(int *)(param_1 + 0x84) == 0) {
    fn_003cb83c(param_1,(char *)&DAT_003cb33c,0);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    fn_003cb83c(param_1,(char *)&DAT_003cb31c,0);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x61) = 1;
    *(code **)(param_1 + 0x78) = fn_003cb358;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cb358(int param_1)

{
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    fn_003cb83c(param_1,(char *)&DAT_003cb394,1);
    *(code **)(param_1 + 0x78) = fn_003cb3b4;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cb3b4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 == '\x03') {
    fn_002f79d0();
    *(code **)(param_1 + 0x78) = fn_003cada0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    return;
  }
  if (cVar1 == '\x02') {
    fn_003cb83c(param_1,(char *)&DAT_003cb41c,0);
    *(undefined1 **)(param_1 + 0x78) = &LAB_003cb438;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cae8c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  code **ppcVar6;
  char *local_e30;
  undefined4 local_e2c;
  undefined4 local_e28;
  char local_e24 [4];
  code *local_e20;
  undefined4 uStack_e1c;
  code *local_d40;
  undefined4 uStack_d3c;
  undefined1 auStack_c28 [2560];
  undefined1 auStack_228 [520];
  
  uVar1 = fn_002f6f54();
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x5b);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894aac) goto LAB_003caee4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003caee4:
  if (*(int *)(param_1 + 0x84) == 0) {
    iVar4 = fn_006cd5e4(uVar1);
    if (iVar4 == 0) {
      iVar4 = fn_006cd71c(uVar1);
      if (iVar4 == 0) {
        iVar4 = fn_006cd5cc(uVar1);
        if (iVar4 == 0) {
          return;
        }
        fn_0012a2d8(&local_e30);
        fn_00158f6c(&local_e28,0x200);
        fn_00158f6c(auStack_c28,0xa00);
        fn_00158f6c(auStack_228,0x200);
        fn_006cd5f8(uVar1,&local_e30);
        fn_00301a9c(puVar2 + 2,&local_e30,0xe08);
        *(undefined1 *)(puVar2 + 900) = 0;
        fn_00689930(param_1,0x5b,0,0);
        return;
      }
      fn_006cd750(uVar1,&local_e30);
      uVar1 = fn_002f8364(param_1);
      fn_003ca42c(uVar1,&local_e30,0xd4);
      local_d40 = fn_003cb450;
      uStack_d3c = 0;
      ppcVar6 = &local_d40;
      puVar3 = *(undefined4 **)(param_1 + 0x18);
      puVar2 = (undefined4 *)0x0;
      if (puVar3 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(**(code **)*puVar3)(puVar3);
        do {
          if (puVar5 == &DAT_00897048) goto LAB_003cb02c;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
LAB_003caf98:
      puVar3 = puVar2;
    }
    else {
      puVar3 = (undefined4 *)0x0;
      local_e2c = 0;
      local_e28 = 0;
      fn_006cd620(uVar1,&local_e2c,&local_e28);
      local_e30 = local_e24;
      local_e24[0] = '\0';
      fn_002f8530(param_1,local_e2c,local_e28,0xd4);
      if (local_e24[0] == '\0') {
        return;
      }
      local_e20 = fn_003cb450;
      uStack_e1c = 0;
      ppcVar6 = &local_e20;
      puVar2 = *(undefined4 **)(param_1 + 0x18);
      if (puVar2 != (undefined4 *)0x0) {
        puVar5 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar5 == &DAT_00897048) goto LAB_003caf98;
          puVar5 = (undefined4 *)*puVar5;
        } while (puVar5 != (undefined4 *)0x0);
      }
    }
LAB_003cb02c:
    fn_00584ee0(puVar3,ppcVar6);
    fn_006899f4(param_1,0,0);
  }
  else {
    iVar4 = fn_006cd5cc();
    if (((iVar4 == 0) && (iVar4 = fn_006f6a6c(param_1), iVar4 == 1)) ||
       ((iVar4 = fn_006cd5cc(uVar1), iVar4 != 0 && (*(char *)(puVar2 + 900) != '\0')))) {
      *(code **)(param_1 + 0x78) = fn_003cb450;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x002f8a10) */

void fn_003cb450(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1[0x21] == 0) {
    uVar2 = fn_002f7e70();
    fn_0036a848(uVar2,1);
    iVar1 = (**(code **)(*param_1 + 8))(param_1);
    fn_0026a494(DAT_00897818,*(undefined4 *)(iVar1 + 0x18),1);
    return;
  }
  iVar1 = fn_002f58c0(0);
  if (iVar1 != 0) {
    param_1[0x1e] = (int)fn_003cb694;
    param_1[0x1f] = 0;
  }
  return;
}



void fn_003cb694(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
      *(code **)(param_1 + 0x78) = fn_003cb21c;
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
    return;
  }
  iVar1 = fn_002f6468();
  if (iVar1 == 0) {
    fn_003cb83c(param_1,(char *)&DAT_003cb728,0);
    uVar2 = fn_0022f584((char *)&DAT_003cb744,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar2);
    return;
  }
  *(code **)(param_1 + 0x78) = fn_003ca9f8;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_003cb21c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x84) == 0) {
    uVar2 = fn_002f7e70();
    fn_0036a840(uVar2,&DAT_003cb2b0);
    fn_002f6c88(param_1,&DAT_003cb2b0,0,1);
    fn_002f7364(1);
    return;
  }
  fn_002f7dc8();
  iVar1 = fn_002f7248(param_1);
  if (iVar1 != 0) {
    iVar1 = fn_002f6b58();
    if (iVar1 == 0) {
      *(code **)(param_1 + 0x78) = fn_003cb134;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
    *(code **)(param_1 + 0x78) = fn_003ca9f8;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  return;
}



void fn_003cb134(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  code *local_20;
  undefined4 uStack_1c;
  
  if (param_1[0x21] == 0) {
    fn_003cb83c(param_1,(char *)&DAT_003cb204,0);
    return;
  }
  if (*(char *)(param_1[0x17] + 0x31) == '\x01') {
    local_20 = fn_003ca9f8;
    uStack_1c = 0;
    puVar3 = (undefined4 *)param_1[6];
    if (puVar3 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar3)(puVar3);
      do {
        if (puVar1 == &DAT_00897048) goto LAB_003cb1a4;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar3 = (undefined4 *)0x0;
LAB_003cb1a4:
    fn_00584ee0(puVar3,&local_20);
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    fn_002f8228(*(undefined4 *)(iVar2 + 8));
    fn_002f6e7c(param_1,0xd4,0);
  }
  return;
}


