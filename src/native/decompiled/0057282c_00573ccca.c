#include "0057282c_00573ccca.h"



void fn_00572f88(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xd4,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00573250(iVar1,param_1);
  return;
}



void fn_00572e6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_002f6784();
  if (iVar1 == 0) {
    return;
  }
  fn_002c3d68(param_1);
  fn_003ca138(param_1);
  fn_00689930(param_1,0,0);
  return;
}



void fn_00572e1c(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  fn_002f7e70();
  iVar1 = fn_006c3b5c();
  if (iVar1 == 0) {
    *(code **)(param_1 + 0xc4) = fn_00572c70;
    *(undefined4 *)(param_1 + 200) = 0;
    return;
  }
  iVar1 = fn_002f8144();
  if (iVar1 == 0) {
    pcVar2 = fn_00572d7c;
  }
  else {
    pcVar2 = fn_005728b4;
  }
  *(code **)(param_1 + 0xc4) = pcVar2;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



void fn_00572d7c(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    fn_002f6f54(param_1);
    uVar1 = fn_006cd6c4();
    fn_0068974c(param_1,uVar1,0,1);
    uVar1 = fn_0022f584((char *)&DAT_00572e00,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(code **)(param_1 + 0xc4) = fn_005728b4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_00572c70(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    uVar1 = fn_0022f584((char *)&DAT_00572d44,0);
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    fn_002f6fa8();
    uVar1 = fn_006cd6c4();
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
    uVar1 = fn_0022f584((char *)&DAT_00572d60,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
    return;
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(code **)(param_1 + 0xc4) = fn_005728b4;
    *(undefined4 *)(param_1 + 200) = 0;
  }
  return;
}



void fn_005728b4(int param_1)

{
  undefined1 uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  
  if (*(int *)(param_1 + 0xd0) == 0) {
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    if (puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar3 == &DAT_00897044) goto LAB_0057292c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_0057292c:
    uVar1 = *(undefined1 *)(puVar6 + 4);
    uVar4 = fn_002f7e70();
    iVar5 = fn_006c3ab0(uVar4,uVar1);
    puVar6 = *(undefined4 **)(param_1 + 0x18);
    cVar2 = *(char *)(iVar5 + 0x3c5);
    if (puVar6 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar3 == &DAT_00897044) goto LAB_0057297c;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_0057297c:
    uVar1 = *(undefined1 *)(puVar6 + 4);
    uVar4 = fn_002f7e70();
    iVar5 = fn_006c3ab0(uVar4,uVar1);
    if ((cVar2 == '\0') && (*(char *)(iVar5 + 0x3c2) != '\0')) {
      uVar4 = fn_002f88b4(param_1);
      fn_002f61f4(uVar4,0);
      fn_002f6100(param_1);
      fn_0015b0dc();
      uVar4 = fn_0022f584((char *)&DAT_00572a44,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar4,1,0,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
      return;
    }
  }
  else if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\x01') {
    return;
  }
  *(code **)(param_1 + 0xc4) = fn_00572a60;
  *(undefined4 *)(param_1 + 200) = 0;
  return;
}



void fn_0057282c(int *param_1)

{
  int iVar1;
  
  if (param_1[0x34] == 0) {
    fn_002f8464(1);
    return;
  }
  iVar1 = fn_002f8974();
  if (iVar1 == 0) {
    return;
  }
  fn_00689930(param_1,0xee,0);
  param_1[0x31] = (int)&DAT_00572650;
  param_1[0x32] = 0;
  (**(code **)(*param_1 + 0x10))(param_1);
  fn_0015a41c(0x1000003);
  fn_002f83cc(1);
  return;
}


