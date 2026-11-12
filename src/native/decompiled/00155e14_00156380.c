#include "00155e14_00156380.h"



int fn_00156380(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = fn_00166518(*(undefined4 *)(param_1 + 4),param_2,param_3,0);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = *(int **)(param_1 + 8);
  }
  if (iVar1 != 0 && piVar2 != (int *)0x0) {
    if ((char)piVar2[1] != '\0') {
      (**(code **)(*piVar2 + 0x30))(piVar2,param_2,param_3,0);
    }
    iVar1 = 1;
  }
  return iVar1;
}



uint fn_00156328(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_0016658c(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



uint fn_001562d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar1 = fn_00156834(*(undefined4 *)(param_1 + 4));
  piVar2 = *(int **)(param_1 + 8);
  if (piVar2 != (int *)0x0) {
    if ((char)piVar2[1] == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0x20))(piVar2,param_2,param_3);
    }
    uVar1 = uVar1 | uVar3;
  }
  return uVar1;
}



void fn_001562b4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x260) + 0x14))();
  return;
}



void fn_00156298(int param_1)

{
  (**(code **)(**(int **)(param_1 + 0x260) + 0x14))();
  return;
}



void fn_00156234(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    *param_2 = 0;
    return;
  }
  iVar1 = fn_00100b58(iVar3);
  piVar2 = (int *)fn_0015ece0(iVar1 + 5);
  *piVar2 = iVar1 + 1;
  *param_2 = (int)(piVar2 + 1);
  fn_00173bf4(iVar3,piVar2 + 1,iVar1 + 1);
  return;
}



uint * fn_00156130(undefined4 *param_1,uint *param_2,uint param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_4 != 0) {
    *param_2 = 1;
    param_2[1] = 0xf0111;
    param_2[2] = 1;
    param_2[3] = 0xf0110;
    param_2 = param_2 + 4;
  }
  if ((param_3 & 1) != 0) {
    if (*(byte *)(param_1 + 1) == 0) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
    *param_2 = uVar1 | (uint)*(byte *)(param_1 + 1) << 0x10;
    param_2[1] = 0xf0117;
    uVar1 = fn_0015fa88(*param_1);
    puVar2 = param_2 + 3;
    param_2[2] = uVar1 >> 3;
    param_2 = param_2 + 4;
    *puVar2 = 0xf011d;
  }
  if ((param_3 & 6) != 0) {
    *param_2 = (uint)*(byte *)(param_1 + 10);
    param_2[1] = 0xf0116;
    uVar1 = fn_0015fa88(param_1[9]);
    puVar2 = param_2 + 3;
    param_2[2] = uVar1 >> 3;
    param_2 = param_2 + 4;
    *puVar2 = 0xf011c;
  }
  *param_2 = param_1[0x10] | param_1[0x11] * 0x1000 - 0x1000U | 0x1000000;
  param_2[1] = 0xf011e;
  param_2[2] = param_1[0x11] * 0x1000 - 0x1000U | 0x1000000 | param_1[0x10];
  param_2[3] = 0xf006e;
  param_2[4] = 1;
  param_2[5] = 0xf0111;
  param_2[6] = 1;
  param_2[7] = 0xf0110;
  return param_2 + 8;
}



uint fn_001560b4(int param_1,uint param_2)

{
  return *(uint *)(*(int *)(param_1 + 4) + ((int)param_2 >> 5) * 4 + 0x154) >> (param_2 & 0x1f) & 1;
}



int fn_00156024(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 4);
  uVar4 = *(uint *)(*(int *)(iVar5 + 0x18) + -4);
  uVar1 = fn_002febd8(param_2);
  uVar2 = *(uint *)(*(int *)(iVar5 + 0x18) + -4);
  if (uVar2 < uVar4) {
    uVar4 = uVar2;
  }
  iVar3 = fn_001010c8(*(int *)(iVar5 + 0x18),param_2);
  if (iVar3 != 0 || uVar4 != uVar1) {
    for (iVar5 = *(int *)(iVar5 + 0xc); iVar5 != 0; iVar5 = *(int *)(iVar5 + 8)) {
      iVar3 = fn_00158844(iVar5,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
    }
    iVar5 = 0;
  }
  return iVar5;
}



void fn_00155ffc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,4);
  return;
}



undefined4 fn_00155fd0(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a34();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (int)param_2 - 0x22U < 2)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00155f80(void)

{
  undefined4 uVar1;
  
  uVar1 = fn_00165020();
  switch(uVar1) {
  case 0x16a:
  case 0x16b:
  case 0x16c:
  case 0x16d:
  case 0x16e:
  case 0x170:
  case 0x171:
  case 0x172:
    return 1;
  default:
    return 0;
  }
}



undefined4 fn_00155f54(undefined4 param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00164a34();
  uVar2 = 0;
  if ((iVar1 != 0) && (uVar2 = 0, (int)param_2 - 0x10U < 8)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00155f2c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0016533c(*(undefined4 *)(param_1 + 0x84));
  if (iVar1 == 0) {
    return;
  }
  fn_001667e0(iVar1 + 10,0x2000);
  return;
}



undefined4 fn_00155ec8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_00164a34(param_1,param_2,param_1);
  if ((((iVar1 == 0) || (local_8[0] = param_2, iVar1 = fn_00164a34(param_1,param_2), iVar1 == 0))
      || (iVar1 = fn_0017484c(DAT_008977e4), iVar1 == 0)) ||
     (iVar1 = fn_00165bb4(iVar1,local_8), iVar1 == 0)) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = *(undefined4 *)(iVar1 + 0x30);
  }
  return uVar2;
}



undefined4 fn_00155e14(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  fn_00183718(&local_34,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2);
  local_38 = local_1c;
  local_4c = local_30;
  uStack_48 = uStack_2c;
  uStack_44 = uStack_28;
  uStack_40 = uStack_24;
  uStack_3c = uStack_20;
  if (local_34 != 0) {
    uVar3 = 0;
    do {
      uVar1 = fn_0018385c(&local_4c,uVar3);
      iVar2 = fn_003035b0(uVar1,param_2);
      if (iVar2 == 0) {
        uVar1 = fn_00183840(&local_4c,uVar3);
        return uVar1;
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_34);
  }
  return 0;
}


