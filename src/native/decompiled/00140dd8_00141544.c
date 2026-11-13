#include "00140dd8_00141544.h"



int fn_00141544(undefined4 param_1,int param_2)

{
  return (param_2 + 1) * 0x1b8;
}



void fn_00141504(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    uVar1 = fn_001626f8(param_1,param_2,param_3,0x1b8);
    *(undefined4 *)(param_1 + 0x14) = uVar1;
    *(undefined4 *)(param_1 + 0x18) = param_2;
    *(undefined1 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x1c) = param_3;
  }
  return;
}



int fn_001413c8(int param_1,undefined *param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                undefined4 param_9)

{
  int iVar1;
  undefined8 uVar2;
  undefined *local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (*(char *)(param_1 + 500) == '\0') {
    *(undefined1 *)(param_1 + 500) = 1;
    *(char *)(param_1 + 0x1f6) = (char)param_9;
    *(undefined1 *)(param_1 + 0x1f7) = 0;
  }
  *(undefined4 *)(param_1 + 0x1f0) = param_8;
  local_28 = param_7;
  uStack_30 = param_5;
  uStack_2c = param_6;
  local_3c = param_2;
  uStack_38 = param_3;
  uStack_34 = param_4;
  if ((DAT_008c3584 & 1) == 0) {
    uVar2 = fn_00303afc(&DAT_008c3584);
    param_2 = (undefined *)((ulonglong)uVar2 >> 0x20);
    if ((int)uVar2 != 0) {
      fn_00152680(&DAT_008f2770);
      param_2 = &DAT_00152720;
    }
  }
  if (((DAT_008c3584 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c3584,param_2), iVar1 != 0)) {
    fn_00152680(&DAT_008f2770);
  }
  iVar1 = fn_0014f81c(&local_3c,fn_001621d0,&DAT_008f2770);
  fn_0015f364(param_9);
  return (iVar1 >> 0x1f) + 1;
}



void fn_00141374(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = param_1 + 0x1c4;
  fn_00170704(iVar1);
  if (*(char *)(param_1 + 0x1f6) == '\0' || param_2 == 0) {
    fn_001707b4(iVar1);
    return;
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  *(int *)(param_1 + 0x1b8) = param_2;
  *(undefined4 *)(param_1 + 0x1bc) = param_3;
  fn_001707b4(iVar1);
  return;
}



void fn_0014136c(int param_1)

{
  fn_0013c500(param_1 + 0x1c4);
  return;
}



int fn_00141340(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 4) != 0) {
      fn_0018a33c();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  return param_1;
}



void fn_001412cc(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  if (*param_2 != 0x52415343) {
    return;
  }
  iVar1 = param_2[2];
  if (iVar1 + 0xfe000000U < 0x30201) {
    iVar7 = param_2[1];
    iVar2 = param_2[3];
    iVar3 = param_2[4];
    iVar4 = param_2[5];
    iVar5 = param_2[6];
    iVar6 = param_2[7];
    *param_1 = 0x52415343;
    param_1[1] = iVar7;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_1[4] = iVar3;
    param_1[5] = iVar4;
    param_1[6] = iVar5;
    param_1[7] = iVar6;
    iVar1 = param_2[9];
    iVar2 = param_2[10];
    iVar3 = param_2[0xb];
    iVar4 = param_2[0xc];
    iVar5 = param_2[0xd];
    param_1[8] = param_2[8];
    param_1[9] = iVar1;
    param_1[10] = iVar2;
    param_1[0xb] = iVar3;
    param_1[0xc] = iVar4;
    param_1[0xd] = iVar5;
  }
  return;
}



int fn_001411dc(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x18c) != '\0') {
    return 0;
  }
  uVar2 = *(uint *)(param_1 + 0x184);
  uVar3 = *(uint *)(param_1 + 0x188);
  if (uVar2 < uVar3) {
    if (uVar3 < param_2 + uVar2) {
      return 0;
    }
    *(uint *)(param_1 + 0x184) = param_2 + uVar2;
    iVar1 = *(int *)(param_1 + 0x17c) + uVar2 * 4;
  }
  else if (*(uint *)(param_1 + 0x180) < uVar2 + param_2) {
    if (uVar3 < param_2) {
      return 0;
    }
    *(uint *)(param_1 + 0x184) = param_2;
    iVar1 = *(int *)(param_1 + 0x17c);
  }
  else {
    *(uint *)(param_1 + 0x184) = uVar2 + param_2;
    iVar1 = *(int *)(param_1 + 0x17c) + uVar2 * 4;
  }
  if ((iVar1 != 0) && (*(uint *)(param_1 + 0x184) == uVar3)) {
    *(undefined1 *)(param_1 + 0x18c) = 1;
  }
  return iVar1;
}



undefined4 fn_001411b8(int param_1,undefined4 *param_2)

{
  if (*(undefined4 **)(param_1 + 0x170) == (undefined4 *)0x0) {
    *(undefined4 **)(param_1 + 0x16c) = param_2;
  }
  else {
    **(undefined4 **)(param_1 + 0x170) = param_2;
  }
  *(undefined4 **)(param_1 + 0x170) = param_2;
  *param_2 = 0;
  return *(undefined4 *)(param_1 + 0x174);
}



undefined4 fn_0014115c(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00141104();
  puVar2 = (undefined4 *)fn_00140e98(iVar1,6);
  puVar2[3] = *(undefined4 *)(iVar1 + 0x184);
  *(undefined1 *)(puVar2 + 1) = 9;
  uVar3 = (**(code **)(*param_1 + 0x20))(param_1);
  puVar2[4] = uVar3;
  *(undefined1 *)(puVar2 + 5) = param_2;
  if (*(undefined4 **)(iVar1 + 0x170) == (undefined4 *)0x0) {
    *(undefined4 **)(iVar1 + 0x16c) = puVar2;
  }
  else {
    **(undefined4 **)(iVar1 + 0x170) = puVar2;
  }
  *(undefined4 **)(iVar1 + 0x170) = puVar2;
  *puVar2 = 0;
  return *(undefined4 *)(iVar1 + 0x174);
}



undefined * fn_00141104(void)

{
  int iVar1;
  
  if (((DAT_008c05e0 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c05e0), iVar1 != 0)) {
    fn_00141274(&DAT_008ecb30);
  }
  return &DAT_008ecb30;
}



void fn_00141274(int param_1)

{
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined2 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xc4) = 0;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0;
  *(undefined1 *)(param_1 + 0x18d) = 0;
  return;
}



void fn_00140e3c(int param_1,undefined4 param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 0x16c) = 0;
  *(undefined4 *)(param_1 + 0x170) = 0;
  *(undefined4 *)(param_1 + 0x174) = 0;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined1 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 0x17c) = param_2;
  *(uint *)(param_1 + 0x180) = param_3 >> 2;
  fn_00158514(param_1,param_1 + 0x34,0x20);
  fn_00158514(param_1 + 0xb4,param_1 + 0xe8,0x21);
  *(undefined1 *)(param_1 + 0x18d) = 1;
  return;
}



int * fn_00140dd8(int *param_1,int *param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  if ((*param_2 == 0x44535743) && (param_2[2] - 0x1000000U < 0x101)) {
    *param_1 = (int)param_2;
    iVar1 = fn_001563dc(param_2);
    if (iVar1 != 0) {
      param_1[1] = iVar1 + 8;
      return param_1;
    }
  }
  return param_1;
}


