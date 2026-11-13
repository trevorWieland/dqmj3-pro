#include "005e335c_005e3868.h"



void fn_005e3868(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = fn_005e3908();
  iVar3 = *(int *)(iVar1 + 0x34);
  if (iVar3 != iVar2) {
    fn_002feef8(iVar3);
    *(int *)(iVar1 + 0x34) = iVar2;
  }
  return;
}



void fn_005e37f8(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  puVar2 = (undefined4 *)(iVar3 + 0x30);
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = iVar3 + 0x40;
    *puVar1 = &DAT_008589c0;
    puVar1[2] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = param_4;
  }
  if ((undefined4 *)*puVar2 != puVar1) {
    fn_002feef8();
    *puVar2 = puVar1;
  }
  return;
}



void fn_005e37c8(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = fn_005e3908();
  iVar3 = *(int *)(iVar1 + 0x30);
  if (iVar3 != iVar2) {
    fn_002feef8(iVar3);
    *(int *)(iVar1 + 0x30) = iVar2;
  }
  return;
}



void fn_005e3758(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  puVar2 = (undefined4 *)(iVar3 + 0x38);
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = iVar3 + 0x40;
    *puVar1 = &DAT_008589c0;
    puVar1[2] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = param_4;
  }
  if ((undefined4 *)*puVar2 != puVar1) {
    fn_002feef8();
    *puVar2 = puVar1;
  }
  return;
}



void fn_005e3728(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = fn_005e3908();
  iVar3 = *(int *)(iVar1 + 0x38);
  if (iVar3 != iVar2) {
    fn_002feef8(iVar3);
    *(int *)(iVar1 + 0x38) = iVar2;
  }
  return;
}



void fn_005e36b8(int *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *param_1;
  puVar2 = (undefined4 *)(iVar3 + 0x3c);
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = iVar3 + 0x40;
    *puVar1 = &DAT_008589c0;
    puVar1[2] = param_2;
    *(undefined1 *)(puVar1 + 3) = param_3;
    *(undefined1 *)((int)puVar1 + 0xd) = param_4;
  }
  if ((undefined4 *)*puVar2 != puVar1) {
    fn_002feef8();
    *puVar2 = puVar1;
  }
  return;
}



void fn_005e3688(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *param_1;
  iVar2 = fn_005e3908();
  iVar3 = *(int *)(iVar1 + 0x3c);
  if (iVar3 != iVar2) {
    fn_002feef8(iVar3);
    *(int *)(iVar1 + 0x3c) = iVar2;
  }
  return;
}



void fn_005e35b8(int param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  undefined1 auStack_20 [4];
  uint uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  fn_005e35f0(param_2,*(undefined4 *)(param_1 + 0x18),*(undefined1 *)(param_1 + 0x34),
               *(undefined1 *)(param_1 + 0x36));
  cVar1 = *(char *)(param_1 + 0x37);
  iVar2 = *param_2;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar2 = iVar2 + 0xc;
    }
    else if (cVar1 == '\x02') {
      iVar2 = iVar2 + 0x18;
    }
    else if (cVar1 == '\x03') {
      iVar2 = iVar2 + 0x24;
    }
  }
  uStack_1c = (uint)CONCAT11(*(undefined1 *)(param_1 + 0x35),cVar1);
  auStack_20[0] = 1;
  uStack_18 = 0;
  uStack_14 = 0;
  fn_00795e80(iVar2,auStack_20);
  return;
}



void fn_005e35f0(int *param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined1 local_20 [4];
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  iVar1 = *param_1;
  if (param_4 != 0) {
    if (param_4 == 1) {
      iVar1 = iVar1 + 0xc;
    }
    else if (param_4 == 2) {
      iVar1 = iVar1 + 0x18;
    }
    else if (param_4 == 3) {
      iVar1 = iVar1 + 0x24;
    }
  }
  local_1c = param_4 & 0xff | (param_3 & 0xff) << 8;
  local_20[0] = 1;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_8 = param_2;
  fn_00795e80(iVar1,local_20);
  return;
}



void fn_005e35a0(undefined1 *param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  *(undefined4 *)(param_1 + 4) = param_2;
  *param_1 = 1;
  param_1[8] = param_3;
  param_1[9] = param_4;
  return;
}



void fn_005e3590(undefined1 *param_1,undefined1 param_2)

{
  param_1[4] = param_2;
  *param_1 = 0;
  return;
}



void fn_005e335c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int **ppiVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  int *local_78;
  int *local_74;
  int *local_70;
  int *local_6c;
  int *local_68;
  int *local_64;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int *local_3c;
  undefined4 local_38;
  
  piVar5 = (int *)*param_1;
  local_58 = (int *)piVar5[0xe];
  piVar9 = (int *)piVar5[0xf];
  local_78 = piVar5 + 3;
  piVar6 = (int *)piVar5[0xc];
  piVar7 = (int *)piVar5[0xd];
  puVar1 = (undefined4 *)fn_005e4674(param_2);
  puVar2 = (undefined4 *)fn_005e465c(param_2);
  local_70 = local_78;
  local_60 = local_58;
  if (puVar1 != puVar2) {
    piVar8 = (int *)0x0;
    local_6c = piVar5 + 6;
    local_68 = piVar5 + 9;
    local_64 = piVar7;
    local_5c = piVar9;
    do {
      uVar10 = *puVar1;
      iVar3 = fn_006eb1f4(uVar10);
      if (iVar3 == 0) {
        (**(code **)(*piVar6 + 8))(&local_78,piVar6,uVar10,0);
        ppiVar4 = &local_58;
        local_40 = (int *)fn_006eb20c(uVar10);
        local_58 = (int *)CONCAT31(((unsigned int)(local_58) >> 8) & 0xffffff,1);
        local_54 = local_78;
        local_50 = local_74;
        piVar7 = piVar5;
        local_4c = piVar8;
        local_48 = piVar8;
LAB_005e34bc:
        local_44 = piVar8;
        fn_00795e80(piVar7,ppiVar4);
      }
      else {
        if (iVar3 == 1) {
          local_74 = local_70;
          (**(code **)(*local_64 + 8))(&local_58,local_64,uVar10,1);
          local_38 = fn_006eb20c(uVar10);
LAB_005e352c:
          local_50 = (int *)CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,1);
          ppiVar4 = &local_50;
          piVar7 = local_74;
          local_4c = local_58;
          local_48 = local_54;
          local_40 = piVar8;
          local_3c = piVar8;
          goto LAB_005e34bc;
        }
        if (iVar3 == 2) {
          local_74 = local_6c;
          (**(code **)(*local_60 + 8))(&local_58,local_60,uVar10,2);
          local_38 = fn_006eb20c(uVar10);
          goto LAB_005e352c;
        }
        if (iVar3 == 3) {
          local_78 = local_68;
          (**(code **)(*local_5c + 8))(&local_58,local_5c,uVar10,3);
          ppiVar4 = &local_50;
          local_38 = fn_006eb20c(uVar10);
          local_50 = (int *)CONCAT31(((unsigned int)(local_50) >> 8) & 0xffffff,1);
          local_4c = local_58;
          local_48 = local_54;
          piVar7 = local_78;
          local_40 = piVar8;
          local_3c = piVar8;
          goto LAB_005e34bc;
        }
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != puVar2);
  }
  return;
}


