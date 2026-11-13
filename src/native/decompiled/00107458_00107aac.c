#include "00107458_00107aac.h"



void fn_00107aac(undefined4 param_1)

{
  DAT_0089a4c8 = param_1;
  (*(code *)&LAB_00100670)();
  return;
}



void fn_00107aa4(int param_1)

{
  DAT_0089a4c8 = *(undefined4 *)(param_1 + 0x50);
  (*(code *)&LAB_00100670)();
  return;
}



undefined4 *
fn_001079a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = &DAT_00858f5c;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x68c,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0010d624(iVar1,param_2,param_3,param_4);
  }
  iVar2 = param_1[1];
  if (iVar2 != iVar1) {
    if (iVar2 != 0) {
      fn_00143b48(*(undefined4 *)(iVar2 + 0x65c));
      *(undefined4 *)(iVar2 + 0x65c) = 0;
      fn_0010c3d0(iVar2 + 0x48);
      fn_00143a58(*(undefined4 *)(iVar2 + 0x658));
      *(undefined4 *)(iVar2 + 0x658) = 0;
      iVar3 = fn_0011705c(iVar2);
      if (iVar3 != 0) {
        fn_00143a58();
      }
      fn_002feca8(*(undefined4 *)(iVar2 + 0x664));
      if (*(int *)(iVar2 + 0x660) != 0) {
        fn_00152880();
        fn_002feef8();
      }
      iVar2 = fn_0010c3ec(iVar2 + 0x48);
      fn_0010c414(iVar2 + -0x48);
      fn_002feef8();
    }
    param_1[1] = iVar1;
  }
  return param_1;
}



void fn_0010797c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  fn_00158f6c(*(undefined4 *)(iVar1 + 0x664),*(undefined4 *)(iVar1 + 0x668));
  *(undefined4 *)(iVar1 + 0x66c) = *(undefined4 *)(iVar1 + 0x664);
  return;
}



void fn_0010791c(void)

{
  if (DAT_0089a509 == 0) {
    return;
  }
  if ((DAT_0089a508 & DAT_0089a509) != 0) {
    fn_00170704(&DAT_008e3058);
    fn_001707b4(&DAT_008e3058);
  }
  DAT_008e3060 = 0xffffffff;
  fn_0014e6e4();
  return;
}



void fn_001078d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  DAT_0089a509 = 1;
  uVar1 = fn_0015e284();
  uVar2 = fn_0015e218();
  fn_00114128(&DAT_008e3000,uVar1,uVar2,0x100);
  fn_0013c500(&DAT_008e3058);
  return;
}



void fn_001076f4(void)

{
  int iVar1;
  uint uVar2;
  undefined4 in_r3;
  undefined4 uStack_10;
  
  DAT_0089a4ce = 0;
  uStack_10 = in_r3;
  if (DAT_0089a4d0 != '\0') {
    fn_001250f0();
    DAT_0089a4d0 = '\0';
  }
  iVar1 = fn_0010bdc8();
  if (iVar1 == 0) {
    if (DAT_0089a4d1 != '\0') {
      fn_0010c33c(&uStack_10,&DAT_008d192c);
      DAT_0089a4d1 = '\0';
    }
  }
  else {
    iVar1 = fn_0010b1fc(&DAT_008d1920);
    if (iVar1 != 0) {
      fn_0010bab4(1);
      fn_0015def0(&DAT_0089a4e0);
      fn_001707b4(&DAT_008d1920);
    }
  }
  iVar1 = fn_0010be8c();
  if ((iVar1 == 0) && (iVar1 = fn_0010bb8c(), iVar1 == 0)) {
    iVar1 = fn_0010bddc();
    if (iVar1 != 0) {
      uVar2 = DAT_0089a4d4;
      if (DAT_0089a4d4 == 0xffffffff) {
        uVar2 = (uint)DAT_0089a4cd;
      }
      if (DAT_0089a4d4 == 0xffffffff && uVar2 == 0) {
        if (DAT_0089a4dc != (code *)0x0) {
          (*DAT_0089a4dc)();
        }
        iVar1 = fn_0010b1fc(&DAT_008d1914);
        if (iVar1 != 0) {
          fn_0010bb9c();
          fn_001707b4(&DAT_008d1914);
          iVar1 = fn_0010be8c();
          if (iVar1 != 0) {
            DAT_0089a4cc = 1;
            return;
          }
          iVar1 = fn_0010bb8c();
          if (iVar1 != 0) {
            DAT_0089a4cc = 1;
            return;
          }
          DAT_0089a4ce = 1;
        }
      }
      else {
        fn_001159fc();
        DAT_0089a4cd = 1;
      }
    }
    if (DAT_0089a4cf == '\0') {
      return;
    }
    iVar1 = fn_0010be6c();
    if (iVar1 == 0) {
      return;
    }
    fn_0010bcb4();
    iVar1 = fn_0010be8c();
    if ((iVar1 == 0) && (iVar1 = fn_0010bb8c(), iVar1 == 0)) {
      return;
    }
  }
  DAT_0089a4cc = 1;
  return;
}



void fn_001076bc(uint param_1)

{
  DAT_0089a4d8 = param_1 | DAT_0089a4d8;
  if (DAT_0089a4d8 == 0xffffffff) {
    fn_00114788(1);
    return;
  }
  return;
}



undefined4 fn_00107458(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  uint local_88 [5];
  undefined4 local_74;
  uint local_58 [5];
  undefined4 local_44;
  undefined1 auStack_3c [4];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar3 = fn_00145b00(8,&DAT_00812c8c);
  piVar4 = (int *)0x0;
  if (iVar3 != 0) {
    piVar4 = (int *)fn_0010cf10(iVar3,param_1);
  }
  if (DAT_0089a504 != piVar4) {
    if (DAT_0089a504 != (int *)0x0) {
      (**(code **)(*DAT_0089a504 + 4))(DAT_0089a504);
    }
    DAT_0089a504 = piVar4;
  }
  iVar3 = DAT_0089a504[1];
  fn_0011a6a8(fn_00142c80,fn_00117528);
  fn_001182ac(*(undefined4 *)(iVar3 + 0x84),*(undefined4 *)(iVar3 + 0x88));
  fn_0010d5b8(1);
  fn_0011b3ac(fn_00117a60);
  fn_0010fa70(0xffffffff);
  fn_0010d5b8(0);
  fn_0011b3ac(fn_00117a60);
  fn_0010fa70(0xffffffff);
  uVar5 = fn_00118290();
  uVar11 = fn_00117690(auStack_3c,uVar5);
  piVar4 = (int *)uVar11;
  piVar8 = *(int **)(iVar3 + 0x60);
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      uVar11 = (**(code **)(*piVar8 + 4))(piVar8);
    }
    *(int **)(iVar3 + 0x60) = piVar4;
  }
  uVar7 = (uint)((ulonglong)uVar11 >> 0x20);
  uVar6 = (uint)uVar11;
  bVar1 = *(byte *)(iVar3 + 0x80);
  bVar2 = *(byte *)(iVar3 + 0x7e);
  uVar5 = fn_00118290();
  local_58[3] = 0x8051;
  local_58[1] = 400;
  local_58[2] = 0xf0;
  local_44 = 2;
  local_58[0] = uVar7 & 0xffffff00 | 1;
  local_58[4] = uVar6 & 0xff000000 | (uint)bVar2 | (uint)bVar1 << 8;
  piVar4 = (int *)fn_00117944(local_58,uVar5);
  piVar8 = *(int **)(iVar3 + 0x38);
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    *(int **)(iVar3 + 0x38) = piVar4;
  }
  local_88[4] = (uint)*(byte *)(iVar3 + 0x7f) | uVar6 & 0xff000000 |
                (uint)*(byte *)(iVar3 + 0x82) << 8;
  uVar5 = fn_00118290();
  local_58[2] = 0xf0;
  local_58[1] = 0x140;
  local_58[3] = 0x8051;
  local_58[4] = local_88[4];
  local_44 = 2;
  local_58[0] = uVar7 & 0xffffff00 | 2;
  piVar4 = (int *)fn_00117944(local_58,uVar5);
  piVar8 = *(int **)(iVar3 + 0x3c);
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 4))();
    }
    *(int **)(iVar3 + 0x3c) = piVar4;
  }
  if (*(char *)(iVar3 + 0x7c) != '\0') {
    bVar1 = *(byte *)(iVar3 + 0x81);
    uVar5 = fn_00118290();
    local_74 = 2;
    local_88[3] = 0x8051;
    local_88[1] = 400;
    local_88[2] = 0xf0;
    local_88[0] = uVar7 & 0xffffff00 | 4;
    local_88[4] = uVar6 & 0xff000000 | (uint)bVar2 | (uint)bVar1 << 8;
    piVar4 = (int *)fn_00117944(local_88,uVar5);
    piVar8 = *(int **)(iVar3 + 0x40);
    if (piVar8 != piVar4) {
      if (piVar8 != (int *)0x0) {
        (**(code **)(*piVar8 + 4))();
      }
      *(int **)(iVar3 + 0x40) = piVar4;
    }
  }
  piVar4 = (int *)fn_0011a428(iVar3);
  piVar8 = *(int **)(iVar3 + 0x5c);
  if (piVar8 != piVar4) {
    if (piVar8 != (int *)0x0) {
      (**(code **)(*piVar8 + 0x10))();
    }
    *(int **)(iVar3 + 0x5c) = piVar4;
  }
  fn_00117994(iVar3);
  fn_00117688(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 0x5c),iVar3 + 0x44);
  *(char *)(iVar3 + 0x8c) = *(char *)(iVar3 + 0x7c);
  if (*(char *)(iVar3 + 0x7c) == '\0') {
    uVar5 = 0x700;
  }
  else {
    uVar5 = 0x702;
  }
  fn_0011b3c4(uVar5);
  fn_0011b34c();
  fn_00117688(*(undefined4 *)(iVar3 + 0x60),*(undefined4 *)(iVar3 + 0x5c),iVar3 + 0x44);
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0x3f800000;
  fn_00117604(*(undefined4 *)(iVar3 + 0x60),1,&local_38);
  iVar9 = 0;
  do {
    uVar10 = *(undefined4 *)(iVar3 + 0x38);
    uVar5 = fn_00117668(*(undefined4 *)(iVar3 + 0x60));
    fn_00117810(uVar10,uVar5,(int)*(char *)(iVar3 + 0x7d));
    if (*(char *)(iVar3 + 0x7c) != '\0') {
      uVar10 = *(undefined4 *)(iVar3 + 0x40);
      uVar5 = fn_00117668(*(undefined4 *)(iVar3 + 0x60));
      fn_00117810(uVar10,uVar5,(int)*(char *)(iVar3 + 0x7d));
    }
    uVar10 = *(undefined4 *)(iVar3 + 0x3c);
    uVar5 = fn_00117668(*(undefined4 *)(iVar3 + 0x60));
    fn_00117810(uVar10,uVar5,(int)*(char *)(iVar3 + 0x7d));
    fn_001177a4(*(undefined4 *)(iVar3 + 0x38));
    fn_001177a4(*(undefined4 *)(iVar3 + 0x3c));
    if (*(char *)(iVar3 + 0x8c) != '\0') {
      fn_001177a4(*(undefined4 *)(iVar3 + 0x40));
    }
    iVar9 = iVar9 + 1;
  } while (iVar9 < 2);
  fn_0011b5fc();
  fn_0011b464(0x402);
  fn_0011b698(0x402);
  fn_001250f0();
  return 1;
}


