#include "006b3330_006b38f4.h"



int fn_006b38f4(byte *param_1)

{
  int iVar1;
  
  if ((*param_1 < 2) || (*param_1 != 2)) {
    iVar1 = 4;
  }
  else {
    iVar1 = param_1[5] + 2;
  }
  return iVar1;
}



char fn_006b38c8(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return '\0';
    }
    if (cVar1 == '\x02') {
      return param_1[2];
    }
  }
  return '\x02';
}



char fn_006b389c(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      return '\x02';
    }
    if (cVar1 == '\x02') {
      return param_1[1];
    }
  }
  return '\0';
}



byte fn_006b3878(byte *param_1)

{
  byte bVar1;
  
  if ((*param_1 < 2) || (*param_1 != 2)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[3];
  }
  return bVar1;
}



byte fn_006b3854(byte *param_1)

{
  byte bVar1;
  
  if ((*param_1 < 2) || (*param_1 != 2)) {
    bVar1 = 0;
  }
  else {
    bVar1 = param_1[4];
  }
  return bVar1;
}



undefined4 fn_006b3844(int param_1)

{
  return *(undefined4 *)(*(int *)(param_1 + 0x70) + 4);
}



void fn_006b3494(int param_1,undefined1 *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *local_38 [2];
  int local_30;
  undefined1 *puStack_2c;
  int *piStack_28;
  
  param_2[0x241] = 0;
  *param_2 = 0;
  local_30 = param_1;
  puStack_2c = param_2;
  piStack_28 = param_3;
  uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  *(undefined4 *)(param_2 + 4) = uVar3;
  uVar1 = (**(code **)(*param_3 + 0x34))(param_3);
  uVar9 = 0;
  param_2[0x240] = uVar1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x1c))(param_3,uVar9);
    *(undefined2 *)(param_2 + uVar9 * 2 + 0xc) = uVar2;
    (**(code **)(*param_3 + 8))(local_38,param_3,uVar9);
    fn_001003e0(param_2 + uVar9 * 0x18 + 0x1e0,local_38[0]);
    pcVar4 = (char *)(**(code **)(*param_3 + 0x20))(param_3,uVar9);
    if (pcVar4 == (char *)0x0) {
      uVar7 = 0;
      do {
        uVar1 = fn_00294610(uVar9);
        iVar5 = uVar7 + uVar9 * 0x60;
        uVar7 = uVar7 + 1;
        param_2[iVar5 + 0x60] = uVar1;
      } while (uVar7 < 5);
      param_2[uVar9 + 599] = 0;
    }
    else if (*pcVar4 == '\x01') {
      fn_0017821c(param_2 + uVar9 * 0x60 + 0x60,pcVar4 + 4,0x60);
      param_2[uVar9 + 599] = 1;
    }
    else {
      fn_00176fb0(param_2 + uVar9 * 0x60 + 0x60,pcVar4 + 4);
      param_2[uVar9 + 599] = 0;
    }
    iVar5 = (**(code **)(*param_3 + 0x24))(param_3,param_2 + uVar9 * 0x12 + 0x14,uVar9);
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x14) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x18) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x1c) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x20) = 0;
      *(undefined2 *)(param_2 + uVar9 * 0x12 + 0x24) = 0;
    }
    if (local_38[0] != &DAT_008f9cf4) {
      piVar6 = local_38[0] + -3;
      iVar5 = *piVar6;
      if ((iVar5 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))) {
        fn_001008c4(local_38[0] + -3,local_38[0][-2] + 8,0);
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  iVar8 = 0;
  iVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  if (0 < iVar5) {
    do {
      uVar2 = (**(code **)(*param_3 + 0x28))(param_3,iVar8);
      iVar5 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *(undefined2 *)(param_2 + iVar5 + 0x242) = uVar2;
      iVar5 = (**(code **)(*param_3 + 0x10))(param_3);
    } while (iVar8 < iVar5);
  }
  uVar9 = 0;
  do {
    uVar1 = (**(code **)(*param_3 + 0x14))(param_3);
    param_2[uVar9 * 4 + 0x244] = uVar1;
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    uVar7 = uVar9 + 1;
    param_2[uVar9 * 4 + 0x245] = uVar1;
    uVar9 = uVar7;
  } while (uVar7 < 3);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(local_30 + 4) + 0xc);
  uVar1 = (**(code **)(*param_3 + 0xc))(param_3);
  param_2[0x24e] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_2[0x24f] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x38))(param_3);
  param_2[0x250] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x3c))(param_3);
  param_2[0x251] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
  param_2[0x252] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x44))(param_3);
  param_2[0x253] = uVar1;
  param_2[0x25c] = 2;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  param_2[0x25b] = 1;
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  param_2[0x254] = uVar1;
  return;
}



void fn_006b3490(int param_1,undefined1 *param_2,int *param_3)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 *apuStack_38 [2];
  int iStack_30;
  undefined1 *puStack_2c;
  int *piStack_28;
  
  param_2[0x241] = 0;
  *param_2 = 0;
  iStack_30 = param_1;
  puStack_2c = param_2;
  piStack_28 = param_3;
  uVar3 = (**(code **)(*param_3 + 0x30))(param_3);
  *(undefined4 *)(param_2 + 4) = uVar3;
  uVar1 = (**(code **)(*param_3 + 0x34))(param_3);
  uVar9 = 0;
  param_2[0x240] = uVar1;
  do {
    uVar2 = (**(code **)(*param_3 + 0x1c))(param_3,uVar9);
    *(undefined2 *)(param_2 + uVar9 * 2 + 0xc) = uVar2;
    (**(code **)(*param_3 + 8))(apuStack_38,param_3,uVar9);
    fn_001003e0(param_2 + uVar9 * 0x18 + 0x1e0,apuStack_38[0]);
    pcVar4 = (char *)(**(code **)(*param_3 + 0x20))(param_3,uVar9);
    if (pcVar4 == (char *)0x0) {
      uVar7 = 0;
      do {
        uVar1 = fn_00294610(uVar9);
        iVar5 = uVar7 + uVar9 * 0x60;
        uVar7 = uVar7 + 1;
        param_2[iVar5 + 0x60] = uVar1;
      } while (uVar7 < 5);
      param_2[uVar9 + 599] = 0;
    }
    else if (*pcVar4 == '\x01') {
      fn_0017821c(param_2 + uVar9 * 0x60 + 0x60,pcVar4 + 4,0x60);
      param_2[uVar9 + 599] = 1;
    }
    else {
      fn_00176fb0(param_2 + uVar9 * 0x60 + 0x60,pcVar4 + 4);
      param_2[uVar9 + 599] = 0;
    }
    iVar5 = (**(code **)(*param_3 + 0x24))(param_3,param_2 + uVar9 * 0x12 + 0x14,uVar9);
    if (iVar5 == 0) {
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x14) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x18) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x1c) = 0;
      *(undefined4 *)(param_2 + uVar9 * 0x12 + 0x20) = 0;
      *(undefined2 *)(param_2 + uVar9 * 0x12 + 0x24) = 0;
    }
    if (apuStack_38[0] != &DAT_008f9cf4) {
      piVar6 = apuStack_38[0] + -3;
      iVar5 = *piVar6;
      if ((iVar5 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))) {
        fn_001008c4(apuStack_38[0] + -3,apuStack_38[0][-2] + 8,0);
      }
    }
    uVar9 = uVar9 + 1;
  } while (uVar9 < 4);
  iVar8 = 0;
  iVar5 = (**(code **)(*param_3 + 0x10))(param_3);
  if (0 < iVar5) {
    do {
      uVar2 = (**(code **)(*param_3 + 0x28))(param_3,iVar8);
      iVar5 = iVar8 * 4;
      iVar8 = iVar8 + 1;
      *(undefined2 *)(param_2 + iVar5 + 0x242) = uVar2;
      iVar5 = (**(code **)(*param_3 + 0x10))(param_3);
    } while (iVar8 < iVar5);
  }
  uVar9 = 0;
  do {
    uVar1 = (**(code **)(*param_3 + 0x14))(param_3);
    param_2[uVar9 * 4 + 0x244] = uVar1;
    uVar1 = (**(code **)(*param_3 + 0x18))(param_3);
    uVar7 = uVar9 + 1;
    param_2[uVar9 * 4 + 0x245] = uVar1;
    uVar9 = uVar7;
  } while (uVar7 < 3);
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(*(int *)(iStack_30 + 4) + 0xc);
  uVar1 = (**(code **)(*param_3 + 0xc))(param_3);
  param_2[0x24e] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x10))(param_3);
  param_2[0x24f] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x38))(param_3);
  param_2[0x250] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x3c))(param_3);
  param_2[0x251] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x40))(param_3);
  param_2[0x252] = uVar1;
  uVar1 = (**(code **)(*param_3 + 0x44))(param_3);
  param_2[0x253] = uVar1;
  param_2[0x25c] = 2;
  *(undefined4 *)(param_2 + 0x5c) = 0;
  param_2[0x25b] = 1;
  uVar1 = (**(code **)(*param_3 + 0x48))(param_3);
  param_2[0x254] = uVar1;
  return;
}



int fn_006b340c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = fn_006b39b4(*(undefined4 *)(param_1 + 4));
  if (param_2 < uVar1) {
    iVar2 = fn_006b3e50(*(undefined4 *)(param_1 + 4),param_2);
    iVar2 = iVar2 + 0x28;
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}



void fn_006b3330(undefined4 param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  iVar1 = (**(code **)(*param_2 + 0xc))(param_2);
  if (param_3 < iVar1) {
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    fn_0066e368(DAT_00897850,param_3,&local_30);
    fn_00168a24(param_1,&local_30,auStack_14);
    return;
  }
  iVar2 = (**(code **)(*param_2 + 0x10))(param_2);
  if (param_3 - iVar1 < iVar2) {
    uVar3 = fn_006b2ed0(param_2 + 2,param_3 - iVar1);
    fn_00168a24(param_1,uVar3,&local_30);
    return;
  }
  fn_00168a24(param_1,&LAB_006b3400,auStack_18);
  return;
}


