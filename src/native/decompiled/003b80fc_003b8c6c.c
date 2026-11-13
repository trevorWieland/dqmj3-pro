#include "003b80fc_003b8c6c.h"



undefined4 * fn_003b8c6c(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  if (((DAT_00893c94 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_00893c94), iVar1 != 0)) {
    DAT_00893cac = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x98);
    DAT_00893cbc = DAT_00893cac;
    DAT_00893ccc = DAT_00893cac;
    DAT_00893cdc = DAT_00893cac;
    DAT_00893cec = DAT_00893cac;
    DAT_00893cfc = DAT_00893cac;
  }
  iVar2 = *(int *)(param_1 + 0x10c);
  iVar1 = 0;
  if (0 < iVar2) {
    do {
      iVar4 = param_1 + iVar1 * 4;
      iVar3 = *(int *)(iVar4 + 0x110);
      iVar2 = iVar3 * 0x10;
      uVar5 = *(undefined4 *)(&DAT_00893ca8 + iVar2);
      uVar6 = (&DAT_00893cac)[iVar3 * 4];
      uVar7 = *(undefined4 *)(&DAT_00893cb0 + iVar2);
      (&DAT_008cad20)[iVar1 * 4] = *(undefined4 *)(&DAT_00893ca4 + iVar2);
      (&DAT_008cad24)[iVar1 * 4] = uVar5;
      (&DAT_008cad28)[iVar1 * 4] = uVar6;
      (&DAT_008cad2c)[iVar1 * 4] = uVar7;
      if (*(int *)(iVar4 + 0x110) != 6) {
        (&DAT_008cad28)[iVar1 * 4] = *(undefined4 *)(*(int *)(param_1 + 0x134) + 0x98);
      }
      iVar2 = *(int *)(param_1 + 0x10c);
      iVar1 = iVar1 + 1;
    } while (iVar1 < iVar2);
  }
  *param_2 = iVar2;
  return &DAT_008cad20;
}



void fn_003b8c38(int param_1)

{
  if (*(int *)(param_1 + 0x130) != 0) {
    fn_006898b8(param_1,0xd9,0);
  }
  fn_0074876c(param_1);
  return;
}



void fn_003b887c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined2 local_18;
  
  *(undefined4 *)(param_1 + 0x108) = param_2;
  iVar1 = fn_00748844();
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  if (*(char *)(param_1 + 0x104) != '\0') {
    return;
  }
  iVar1 = fn_0077f968(param_1,*(undefined4 *)(param_1 + 0x108));
  if (iVar1 == 6) {
    iVar1 = *(int *)(param_1 + 0x114);
    if (*(int *)(iVar1 + 0xa0) == 1) {
      puVar2 = *(undefined4 **)(iVar1 + 0x10);
      local_38 = *puVar2;
      local_34 = puVar2[1];
      local_30 = puVar2[2];
      local_2c = puVar2[3];
      local_28 = puVar2[4];
      local_24 = CONCAT22(((unsigned int)(local_24) >> 16) & 0xffff,*(undefined2 *)(puVar2 + 5));
      fn_0040f5f8(*(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x3c),&local_38);
      fn_00689818(param_1,0xd9,0);
      *(undefined1 *)(param_1 + 0x104) = 1;
      goto LAB_003b88c4;
    }
    if (*(int *)(iVar1 + 0xa0) == 2) {
      puVar2 = *(undefined4 **)(iVar1 + 0x10);
      local_2c = *puVar2;
      local_28 = puVar2[1];
      local_24 = puVar2[2];
      local_20 = puVar2[3];
      local_1c = puVar2[4];
      local_18 = *(undefined2 *)(puVar2 + 5);
      fn_0040f5f8(*(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x3c),&local_2c);
      *(undefined1 *)(param_1 + 0x104) = 1;
      local_38 = 1;
      local_34 = 1;
      local_30 = 0;
      fn_0074879c(param_1,DAT_00898214,(char *)&DAT_003b8a14,1);
      goto LAB_003b88c4;
    }
    *(undefined1 *)(param_1 + 0x104) = 2;
  }
  fn_00748c18(param_1,*(undefined4 *)(param_1 + 0x108));
LAB_003b88c4:
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_003b884c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x118,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003b8be8(iVar1,param_1);
  return;
}



void fn_003b8be8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d350(param_1,param_2,0,0x7b);
  *puVar1 = &DAT_0082ed94;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  return;
}



undefined4 fn_003b86e8(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x7b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893d28) goto LAB_003b8730;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003b8730:
  param_1[0x45] = (int)puVar1;
  if (param_1[0x3a] == 0) {
    param_1[0x3a] = (int)(puVar1 + 5);
  }
  uVar3 = fn_0043cd80(param_1);
  if (*(int *)(param_1[0x45] + 0xa0) == 1 || *(int *)(param_1[0x45] + 0xa0) == 2) {
    puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008963ac) goto LAB_003b87a8;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003b87a8:
    param_1[0x43] = (int)puVar1;
  }
  return uVar3;
}



undefined * fn_003b8660(int param_1,undefined4 *param_2)

{
  if ((DAT_00893bf4 & 1) == 0) {
    fn_00303afc(&DAT_00893bf4);
  }
  DAT_00893c6c = *(undefined4 *)(*(int *)(param_1 + 0x114) + 0x98);
  *param_2 = 7;
  return &DAT_00893c04;
}



void fn_003b85a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894374) goto LAB_003b85e4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003b85e4:
  *(undefined4 **)(param_1 + 0x74) = puVar2;
  fn_00321a48(param_1);
  return;
}



undefined4 * fn_003b8348(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_006896e0();
  piVar4 = puVar1 + 2;
  *puVar1 = &DAT_0082ec60;
  *piVar4 = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  piVar2 = (int *)fn_00100fc6(0xc,0);
  iVar3 = fn_00100fc6(0xc,0);
  piVar2[2] = iVar3;
  *piVar2 = *piVar4;
  piVar2[1] = 1;
  *piVar4 = (int)piVar2;
  iVar3 = piVar2[2];
  puVar1[4] = iVar3;
  puVar1[5] = iVar3 + 0xc;
  puVar1[6] = iVar3;
  puVar1[4] = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(undefined4 *)(puVar1[6] + 4) = puVar1[6];
  return puVar1;
}



void fn_003b8274(void)

{
  fn_003b8284();
  fn_002feef8();
  return;
}



void fn_003b8220(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 0xc));
  fn_00173a34(*(undefined4 *)(param_1 + 0x14),uVar1);
  iVar2 = fn_00191228(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 != 0) {
    fn_00185320(*(undefined4 *)(param_1 + 0x14));
  }
  iVar2 = fn_00191218(*(undefined4 *)(param_1 + 0x14));
  if (iVar2 == 0) {
    return;
  }
  fn_001852ac(*(undefined4 *)(param_1 + 0x14));
  return;
}



void fn_003b81f4(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001287b0();
  uVar1 = fn_0012d6b0(*(undefined4 *)(param_1 + 8),uVar1,0x80,5);
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  return;
}



undefined4 fn_003b817c(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_0089324c,param_2);
  uVar1 = fn_003b7f00(param_1,auStack_98,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}



undefined4 fn_003b80fc(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined1 auStack_98 [132];
  
  fn_00301f50(auStack_98,0x80);
  uVar1 = fn_0069cd0c(param_2);
  fn_0018a618(auStack_98,0x40,0x3f,DAT_00893240,uVar1);
  uVar1 = fn_003b7f00(param_1,auStack_98,param_4);
  if (param_3 != 0) {
    fn_003b7e40(param_1,uVar1);
  }
  return uVar1;
}


