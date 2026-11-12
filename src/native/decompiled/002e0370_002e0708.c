#include "002e0370_002e0708.h"



void fn_002e0708(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    if ((*(int **)(iVar3 + 0x140) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(iVar3 + 0x140) + 0x1c0))(), iVar1 == 0)) {
      (**(code **)(**(int **)(iVar3 + 0x140) + 0x140))();
      (**(code **)(**(int **)(iVar3 + 0x140) + 0x138))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  return;
}



void fn_002e06c0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint extraout_r1;
  int iVar3;
  
  iVar3 = 0;
  uVar2 = param_2;
  do {
    piVar1 = *(int **)(param_1 + iVar3 * 4 + 0x140);
    if (piVar1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(piVar1 + 0x16);
    }
    if (piVar1 != (int *)0x0 && uVar2 != 0) {
      (**(code **)(*piVar1 + 0xb8))(piVar1,param_2);
      uVar2 = extraout_r1;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}



undefined4 fn_002e03f4(int *param_1)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  int local_1c;
  
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  uVar3 = (**(code **)(*piVar2 + 0x90))();
  iVar4 = fn_003b237c(uVar3,param_1[0x39]);
  (**(code **)(*param_1 + 0x88))(param_1);
  param_1[0x3a] = (int)*(short *)(iVar4 + 8);
  if (param_1[0x3b] == -1) {
    iVar5 = fn_00369238();
    param_1[0x3b] = iVar5;
  }
  fn_0036955c(param_1[0x62]);
  sVar1 = *(short *)(iVar4 + 2);
  param_1[0x47] = (int)sVar1;
  switch((char)sVar1) {
  case '\0':
  case '\x01':
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    goto joined_r0x002e052c;
  case '\x02':
    iVar4 = fn_00145b00(0x44,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar4 != 0) {
      piVar2 = (int *)fn_00344b3c();
    }
    break;
  case '\x03':
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar4 != 0) {
      piVar2 = (int *)fn_002e3128();
    }
    break;
  case '\x04':
    iVar4 = fn_00145b00(0x38,&DAT_00812c8c);
    piVar2 = (int *)0x0;
    if (iVar4 != 0) {
      piVar2 = (int *)fn_00344470();
    }
    break;
  default:
    iVar4 = fn_00145b00(0x34,&DAT_00812c8c);
joined_r0x002e052c:
    piVar2 = (int *)0x0;
    if (iVar4 != 0) {
      piVar2 = (int *)fn_00305244(iVar4,0xffffffff);
    }
  }
  piVar7 = (int *)param_1[0x61];
  if (piVar7 != piVar2) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    param_1[0x61] = (int)piVar2;
  }
  (**(code **)(*(int *)param_1[0x61] + 8))((int *)param_1[0x61],param_1 + 0x50,param_1[0x40]);
  iVar4 = param_1[8];
  (**(code **)(*(int *)param_1[0x61] + 0x10))();
  piVar2 = (int *)param_1[0x61];
  uVar9 = 0;
  fn_006c39f4(param_1[0x62],param_1[0x3b]);
  uVar3 = (undefined4)uVar9;
  local_30 = uVar3;
  local_2c = iVar4;
  local_28 = uVar3;
  (**(code **)(*piVar2 + 0x14))(piVar2);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_006c38d8(param_1[0x62],param_1[0x3b],&local_24);
  fn_002df7a8(param_1,&local_24);
  uVar6 = local_24;
  if (local_20 < local_24) {
    do {
      uVar6 = uVar6 + 4;
    } while (uVar6 != local_20);
  }
  fn_001008c4(local_24,(int)(local_1c - local_24) >> 2,0);
  fn_002df134(param_1,param_1[0x3b]);
  iVar5 = param_1[0x3b];
  iVar4 = 0;
  do {
    if (param_1[iVar4 + 0x50] != 0) {
      fn_00216128(param_1[iVar4 + 0x50],iVar5,param_1[0x3c]);
    }
    uVar8 = (undefined4)uVar9;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  fn_006c39f4(param_1[0x62],param_1[0x3b]);
  local_30 = uVar8;
  local_2c = uVar3;
  local_28 = uVar8;
  (**(code **)(*param_1 + 0x14))(param_1,&local_30);
  return 1;
}



void fn_002e0370(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    piVar1 = *(int **)(iVar3 + 0x140);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0xa4))();
      piVar4 = (int *)(iVar3 + 0x140);
      piVar1 = (int *)*piVar4;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar4 = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  *(undefined4 *)(param_1 + 0x100) = 0;
  fn_002df5c0(param_1);
  if (*(int **)(param_1 + 0x188) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x188) + 4))();
    *(undefined4 *)(param_1 + 0x188) = 0;
  }
  return;
}


