#include "00278180_00278bc8.h"



bool fn_00278bc8(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_20 [16];
  
  puVar1 = (undefined4 *)fn_001c6c38(auStack_20);
  iVar2 = fn_00278784(param_1,*puVar1);
  if (iVar2 == 2) {
    bVar3 = true;
    if (puVar1[1] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = iVar2 == 2;
      if (!bVar3) {
        return bVar3;
      }
    }
    if (puVar1[2] != -1) {
      iVar2 = fn_00278784(param_1);
      bVar3 = (bool)(bVar3 & iVar2 == 2);
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}



void fn_00278b7c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined1 auStack_18 [12];
  
  puVar1 = (undefined4 *)fn_001c6c38(auStack_18);
  fn_00279ae4(param_1,*puVar1);
  if (puVar1[1] != -1) {
    fn_00279ae4(param_1);
  }
  if (puVar1[2] != -1) {
    fn_00279ae4(param_1);
  }
  return;
}



void fn_00278aac(int param_1)

{
  if (**(int **)(param_1 + 0x2c) != 0) {
    fn_0012d73c();
    **(undefined4 **)(param_1 + 0x2c) = 0;
    fn_00279bd4(*(undefined4 *)(param_1 + 0x2c));
    if (*(int *)(*(int *)(param_1 + 4) + 0x4064) != 0) {
      fn_0012f208(param_1,0x13d);
    }
    if (*(int *)(*(int *)(param_1 + 4) + 0x4098) != 0) {
      fn_0012f208(param_1,0x13e);
    }
  }
  if (*(int *)(*(int *)(param_1 + 0x2c) + 0x14) != 0) {
    fn_0012d73c();
    *(undefined4 *)(*(int *)(param_1 + 0x2c) + 0x14) = 0;
    fn_00279bd4(*(int *)(param_1 + 0x2c) + 0x14);
    if (*(int *)(*(int *)(param_1 + 4) + 0x40cc) != 0) {
      fn_0012f208(param_1,0x13f);
      return;
    }
  }
  return;
}



void fn_00278a80(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = 0x135;
  do {
    fn_00279ae4(param_1,iVar1);
    iVar1 = iVar1 + -1;
  } while (0xbd < iVar1);
  return;
}



undefined4 fn_00278a40(undefined4 param_1)

{
  fn_002775a0(param_1,0x1ed,L"rom:/data/Parameter/RaSearchParam.tb",4,0,0x80,0);
  return 0x1ed;
}



undefined4 fn_002789b0(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x1ce;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x2418) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_002775a0(param_1,uVar1,L"rom:/data/Mask/Boy.bch",3,0,0x80,0);
  return uVar1;
}



undefined4 fn_00278880(int param_1,short param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [132];
  
  uVar2 = 0x13c;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x18b0) != 0) {
    uVar2 = 0xffffffff;
  }
  if (param_3 == 0) {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_S.bin",uVar1);
  }
  else {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_GT_S.bin",uVar1);
  }
  fn_002775a0(param_1,uVar2,auStack_98,4,0,0xffffff80,(int)param_2);
  return uVar2;
}



int fn_00278784(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
  if ((*(short *)(puVar1 + 1) == 1) && (iVar2 = fn_00145aac(*puVar1), iVar2 == 1)) {
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
    switch(*(undefined1 *)(puVar1 + 4)) {
    case 0:
      uVar3 = fn_00145ac0(*puVar1);
      uVar4 = fn_006f7a9c(DAT_008977e0);
      fn_00179fc4(uVar4,param_2,uVar3);
      break;
    case 1:
      uVar3 = fn_00145ac0(*puVar1);
      uVar4 = fn_006f7a9c(DAT_008977e0);
      fn_0014a614(uVar4,param_2,uVar3);
      break;
    case 2:
      uVar3 = fn_00145ac0(*puVar1);
      uVar4 = fn_006f7a9c(DAT_008977e0);
      fn_00179dc0(uVar4,param_2,uVar3);
    }
    *(undefined2 *)(*(int *)(param_1 + 0x20) + param_2 * 0x14 + 4) = 2;
  }
  return (int)*(short *)(*(int *)(param_1 + 0x20) + param_2 * 0x14 + 4);
}



void fn_00278778(undefined4 param_1)

{
  fn_00279ae4(param_1,0x1cd);
  return;
}



undefined4 fn_002786b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x182;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1e28) != 0) {
    uVar1 = 0xffffffff;
  }
  uVar2 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Map/%s_null.bin",uVar2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



undefined4 fn_00278600(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined1 auStack_90 [128];
  
  uVar1 = 0x184;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1e50) != 0) {
    uVar1 = 0xffffffff;
  }
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Pos/%c_item.xbb",param_2);
  fn_002775a0(param_1,uVar1,auStack_90,4,0,0x80,0);
  return uVar1;
}



int fn_002783f4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_98 [128];
  
  iVar2 = 0x1ef;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 0x14) == 0) goto LAB_00278430;
    iVar2 = iVar2 + 4;
  } while (iVar2 < 0x207);
  iVar2 = -1;
LAB_00278430:
  uVar1 = fn_00340484(param_2);
  if (iVar2 != -1) {
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/%s.bch",uVar1);
    fn_002775a0(param_1,iVar2,auStack_98,0,0,0x80,(int)(short)param_2);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/%s_F.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 1,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/%s_W.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 2,auStack_98,4,0,0x80,0);
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/%s_S.bin",uVar1);
    fn_002775a0(param_1,iVar2 + 3,auStack_98,4,0,0x80,0);
  }
  return iVar2;
}



int fn_0027833c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_90 [128];
  
  iVar1 = 0xbe;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14) == 0) goto LAB_00278378;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x136);
  iVar1 = -1;
LAB_00278378:
  fn_00101a50(auStack_90,0x80,L"rom:/data/Field/Obj/%s.bch",param_2);
  fn_002775a0(param_1,iVar1,auStack_90,0,0,0x80,0);
  return iVar1;
}



void fn_002782b4(int param_1,undefined4 *param_2)

{
  int iVar1;
  int *piVar2;
  
  fn_002782e4(param_1,*param_2);
  fn_002782e4(param_1,param_2[1]);
  iVar1 = param_2[2];
  if (iVar1 == -1) {
    return;
  }
  piVar2 = (int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14);
  if (piVar2[2] < 1) {
    return;
  }
  if (*piVar2 != 0) {
    piVar2[2] = piVar2[2] + -1;
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 0x14 + 8) == 0) {
    fn_00279ae4();
    return;
  }
  return;
}



void fn_002782e4(int param_1,int param_2)

{
  int *piVar1;
  
  if (param_2 == -1) {
    return;
  }
  piVar1 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14);
  if (piVar1[2] < 1) {
    return;
  }
  if (*piVar1 != 0) {
    piVar1[2] = piVar1[2] + -1;
  }
  if (*(int *)(*(int *)(param_1 + 0x20) + param_2 * 0x14 + 8) == 0) {
    fn_00279ae4();
    return;
  }
  return;
}



undefined4 fn_00278180(int param_1,short param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_98 [132];
  
  uVar2 = 0x13a;
  if (*(int *)(*(int *)(param_1 + 0x20) + 0x1888) != 0) {
    uVar2 = 0xffffffff;
  }
  if (param_3 == 0) {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_F.bin",uVar1);
  }
  else {
    uVar1 = fn_006afaf4(*(undefined4 *)(DAT_008977e0 + 0x1c));
    fn_00101a50(auStack_98,0x80,L"rom:/data/Field/Hit/%s_GT_F.bin",uVar1);
  }
  fn_002775a0(param_1,uVar2,auStack_98,4,0,0xffffff80,(int)param_2);
  return uVar2;
}


