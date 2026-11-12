#include "0048b218_0048bd54.h"



undefined4 fn_0048bd54(int param_1,uint param_2,uint param_3)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_28;
  
  piVar6 = *(int **)(param_1 + 0x38);
  if ((piVar6 == (int *)0x0) || ((uint)piVar6[2] < param_2)) {
    return 1;
  }
  local_28 = 0;
  if ((piVar6[4] != 0) && (DAT_008b637c == '\0')) {
    fn_00170704(piVar6[4] + 4);
  }
  uVar7 = piVar6[1];
  uVar5 = 0;
  uVar3 = 0;
  if (uVar7 != 0) {
    iVar8 = *piVar6;
    do {
      iVar4 = iVar8 + uVar3 * 0x34;
      if (param_2 <= *(uint *)(iVar4 + 8)) {
        iVar2 = fn_00169f1c(*(undefined4 *)(iVar4 + 4),*(uint *)(iVar4 + 8) + 0xb & 0xfffffffc);
        uVar5 = uVar5 + (iVar2 - *(int *)(iVar4 + 0xc));
        if (param_3 <= uVar5) {
          local_28 = 1;
          uVar1 = 0;
          goto LAB_0048be08;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar7);
  }
  iVar8 = *piVar6 + uVar7 * 0x34 + -0x34;
  *(int *)(iVar8 + 0x30) = *(int *)(iVar8 + 0x30) + 1;
  uVar1 = 1;
LAB_0048be08:
  *(undefined1 *)((int)piVar6 + 0xd) = uVar1;
  if ((piVar6[4] != 0) && (DAT_008b637c == '\0')) {
    fn_001707b4(piVar6[4] + 4);
  }
  return local_28;
}



void fn_0048bb28(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  char cVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined *local_70 [4];
  undefined1 auStack_60 [10];
  byte local_56;
  int local_54;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined1 auStack_3c [10];
  char local_32;
  
  iVar1 = fn_004b7748();
  if (iVar1 == 0) {
    return;
  }
  iVar2 = fn_004b7748();
  iVar1 = 0;
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x90);
  }
  uVar7 = 0;
  if (iVar2 == 0 || iVar1 == 0) {
    return;
  }
  cVar6 = (char)*(undefined4 *)(param_1 + 0x98);
  if (cVar6 < '\x01') {
code_r0x0048bb90:
    fn_0048bd0c();
    return;
  }
  if (cVar6 == '\x01') {
    iVar1 = fn_0048b9d8(param_1);
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    if (cVar6 == '\x02') {
      iVar1 = fn_0048b9d8(param_1);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = fn_004b7748();
      if (iVar1 == 0) {
        uVar5 = 0;
      }
      else {
        uVar5 = *(undefined4 *)(iVar1 + 0x90);
      }
      fn_006d1198(&local_4c,uVar5);
      local_4c = &DAT_00852db4;
      if (DAT_008b6490 == 0) {
        cVar6 = local_32;
      }
      else {
        cVar6 = '\x03';
      }
      iVar1 = fn_00170f54(auStack_3c);
      fn_00170f54(iVar1 + -0xc);
      if (cVar6 == '\x02') goto code_r0x0048bc2c;
    }
    else {
      if (cVar6 != '\x03') goto code_r0x0048bb90;
      iVar1 = fn_0048b9d8(param_1);
      if (iVar1 == 0) {
        return;
      }
    }
    iVar1 = fn_004b7748();
    *(undefined1 *)(*(int *)(iVar1 + 0x100) + 0x11a) = 1;
  }
code_r0x0048bc2c:
  iVar1 = fn_004b7748();
  iVar1 = *(int *)(iVar1 + 0x114);
  uVar8 = fn_006d3b9c(param_1 + 0x80);
  *(undefined8 *)(iVar1 + 0x30) = uVar8;
  fn_0013d0fc(&local_48);
  *(undefined4 *)(iVar1 + 0x28) = local_48;
  *(undefined4 *)(iVar1 + 0x2c) = uStack_44;
  iVar1 = fn_004b7748();
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(iVar1 + 0x90);
  }
  iVar1 = (**(code **)(*piVar3 + 0x2c))();
  *(undefined4 *)(*(int *)(iVar1 + 4) + 0x40) = *(undefined4 *)(param_1 + 0x9c);
  iVar1 = fn_004b7748();
  if (iVar1 != 0) {
    uVar7 = *(undefined4 *)(iVar1 + 0x90);
  }
  fn_006d1198(local_70,uVar7);
  uVar4 = DAT_008b6490;
  if (DAT_008b6490 == 0) {
    uVar4 = (uint)local_56;
  }
  if ((DAT_008b6490 == 0 && uVar4 == 2) && (local_54 != 1)) {
    iVar1 = fn_004b7748();
    *(undefined1 *)(*(int *)(iVar1 + 0x100) + 0x11a) = 1;
  }
  fn_0048afe0();
  local_70[0] = &DAT_00852db4;
  iVar1 = fn_00170f54(auStack_60);
  fn_00170f54(iVar1 + -0xc);
  return;
}



undefined4 fn_0048b9d8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_148 [256];
  undefined *local_48;
  undefined1 auStack_44 [16];
  undefined1 auStack_34 [28];
  
  iVar1 = fn_004b7748();
  if (iVar1 != 0) {
    iVar2 = fn_004b7748();
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x90);
    }
    iVar4 = 0;
    if (iVar2 != 0 && iVar1 != 0) {
      uVar3 = *(uint *)(param_1 + 0x94) & 0xff;
      if (uVar3 == 0) {
        iVar1 = fn_004b7748();
        fn_00170fa4(*(int *)(iVar1 + 0x100) + 0x110,param_1 + 0x88);
      }
      else {
        if (uVar3 != 1) {
          fn_0048bd0c();
          return 0;
        }
        iVar1 = fn_004b7748();
        iVar2 = *(int *)(iVar1 + 0x100);
        iVar1 = fn_004b7748();
        if (iVar1 != 0) {
          iVar4 = *(int *)(iVar1 + 0x90);
        }
        fn_0017d82c(2,iVar4 + 0x118,auStack_34,0x14);
        fn_0017fe44(auStack_34,auStack_148,0x80);
        local_48 = &DAT_00855a94;
        fn_0015e6f0(auStack_44,auStack_148);
        fn_00170fa4(iVar2 + 0x110,&local_48);
        fn_00170f54(&local_48);
      }
      if (*(short *)(param_1 + 0x90) == 0) {
        iVar1 = fn_004b7748();
        *(undefined2 *)(*(int *)(iVar1 + 0x100) + 0x118) = 0x30ed;
      }
      else {
        iVar1 = fn_004b7748();
        *(undefined2 *)(*(int *)(iVar1 + 0x100) + 0x118) = *(undefined2 *)(param_1 + 0x90);
      }
      return 1;
    }
  }
  return 0;
}



void fn_0048b514(void)

{
  longlong lVar1;
  
  lVar1 = fn_00176fc4();
  fn_00169c20((int)(lVar1 * 1000000),(int)((ulonglong)(lVar1 * 1000000) >> 0x20),0xffb0ff0,0);
  return;
}



int fn_0048b488(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_30 [36];
  
  fn_004b54dc(auStack_30);
  iVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,auStack_30);
  if (iVar1 == 0) {
    fn_004b5540(param_2,auStack_30);
  }
  fn_0014f480(auStack_30);
  return iVar1;
}



bool fn_0048b3d8(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  uVar1 = *(int *)(param_2 + 0x10) - *(int *)(param_2 + 0xc);
  uVar2 = param_1[8];
  bVar3 = uVar2 <= uVar1;
  if (bVar3) {
    uVar2 = param_1[9];
  }
  if (bVar3 && uVar1 <= uVar2) {
    fn_0015ed58(param_1 + 2);
    (**(code **)(*param_1 + 0x1c))(param_1);
  }
  return bVar3 && uVar1 <= uVar2;
}



undefined4 * fn_0048b288(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  
  *param_1 = &DAT_00854bdc;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 4);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  uVar7 = *(int *)(param_2 + 0xc) - *(int *)(param_2 + 8) >> 2;
  if (uVar7 < 0x20) {
    uVar7 = 0x20;
  }
  puVar1 = (undefined4 *)fn_0015ece0(uVar7 << 2);
  param_1[2] = puVar1;
  puVar5 = *(undefined4 **)(param_2 + 0xc);
  for (puVar3 = *(undefined4 **)(param_2 + 8); puVar3 != puVar5; puVar3 = puVar3 + 1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *puVar3;
    }
    puVar1 = puVar1 + 1;
  }
  iVar6 = *(int *)(param_2 + 8);
  iVar2 = param_1[2];
  iVar4 = *(int *)(param_2 + 0xc);
  param_1[4] = iVar2 + uVar7 * 4;
  param_1[3] = (iVar4 - iVar6 & 0xfffffffcU) + iVar2;
  *param_1 = &DAT_00853ad8;
  return param_1;
}



undefined4 * fn_0048b218(undefined4 *param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &DAT_00854bdc;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_0015ece0(0x80);
  param_1[2] = iVar1;
  param_1[3] = iVar1;
  param_1[4] = iVar1 + 0x80;
  *param_1 = &DAT_00853ad8;
  *(undefined1 *)((int)param_1 + 5) = param_2;
  fn_0079dd48(param_1 + 2,param_3);
  return param_1;
}


