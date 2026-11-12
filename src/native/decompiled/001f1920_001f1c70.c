#include "001f1920_001f1c70.h"



void fn_001f1c70(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006f75ac(DAT_008977e0);
  fn_0038ff40(iVar1,2,param_3,param_3 == 0,0);
  fn_00245d34(*(undefined4 *)(iVar1 + 8),0);
  fn_00245d18(*(undefined4 *)(iVar1 + 8));
  uVar2 = fn_006f75ac(DAT_008977e0);
  uVar3 = *(undefined4 *)(param_1 + 0x80);
  iVar1 = fn_006f7a20(DAT_008977e0);
  if ((iVar1 == 0) &&
     (iVar1 = fn_0025fa84(DAT_00897800,*(undefined4 *)(param_1 + 0x84),param_2), iVar1 != 0)) {
    uVar3 = *(undefined4 *)(param_1 + 0x84);
  }
  uVar3 = fn_0025f9d8(DAT_00897800,uVar3,param_2);
  fn_0038fee8(uVar2,uVar3);
  *(undefined1 *)(param_1 + 0xf90) = 1;
  return;
}



void fn_001f1c1c(int param_1,uint param_2,int param_3)

{
  int iVar1;
  
  if (((-1 < (int)param_2) && (param_2 < 0x50)) &&
     (iVar1 = *(int *)(param_1 + param_2 * 0x2c + 0x8c), iVar1 != 0)) {
    if ((param_3 != 0) && (param_3 == 1)) {
      *(undefined1 *)(iVar1 + 0x188) = 1;
      *(undefined1 *)(iVar1 + 0x18c) = 1;
      return;
    }
    *(undefined1 *)(iVar1 + 0x188) = 0;
  }
  return;
}



void fn_001f1bbc(int param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if ((int)param_2 < 0) {
    return;
  }
  if (0x4f < param_2) {
    return;
  }
  iVar2 = *(int *)(param_1 + param_2 * 0x2c + 0x8c);
  if (iVar2 != 0) {
    *(char *)(iVar2 + 0x2f5) = (char)param_3;
    iVar1 = 0;
    if (param_3 != 0) {
      iVar1 = param_4;
    }
    if ((param_3 != 0 && param_4 != 0) && -1 < iVar1) {
      fn_006863a4(iVar2,(int)(short)param_4);
      return;
    }
  }
  return;
}



void fn_001f1b78(void)

{
  int iVar1;
  
  iVar1 = fn_006abd58();
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_006f7a5c(DAT_008977e0);
  *(undefined1 *)(iVar1 + 0xc) = 2;
  fn_006f7a5c(DAT_008977e0);
  fn_001d92ac();
  return;
}



void fn_001f1b5c(void)

{
  fn_006f7a5c(DAT_008977e0);
  fn_001d8a20();
  return;
}



void fn_001f1b38(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_006f72b4(DAT_008977e0);
  fn_00219400(uVar1,param_2);
  return;
}



void fn_001f1b04(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 in_s0;
  
  iVar1 = fn_006f72b4(DAT_008977e0);
  piVar3 = *(int **)(iVar1 + 0x20c);
  piVar2 = (int *)*piVar3;
  if (piVar2 != piVar3) {
    while (piVar2[2] != param_2) {
      piVar2 = (int *)*piVar2;
      if (piVar2 == piVar3) {
        return;
      }
    }
    iVar1 = piVar2[5];
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x2c) = 0;
    *(undefined4 *)(iVar1 + 0x30) = in_s0;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  }
  return;
}



void fn_001f1af0(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xe4c) == 0) {
    return;
  }
  if ((param_2 < 0x40) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0xe4c) + param_2 * 4 + 4), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 10) = param_3;
  }
  return;
}



bool fn_001f1ac4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = fn_006b62fc(*(undefined4 *)(DAT_00897804 + 8));
  return param_2 <= iVar1;
}



undefined4 fn_001f1ab0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0xe4c);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = fn_006f7a84(DAT_008977e0);
  if (*(char *)(iVar2 + 0x22d) == '\x01') {
    return 0;
  }
  uVar3 = fn_006c2870(iVar1,param_2);
  if ((int)uVar3 < 0) {
    *(undefined4 *)(iVar1 + 0x104) = 0xffffffff;
    return 0;
  }
  if (uVar3 < 0x40) {
    iVar2 = *(int *)(iVar1 + uVar3 * 4 + 4);
  }
  else {
    iVar2 = 0;
  }
  if (*(char *)(iVar2 + 8) != '\0') {
    fn_006f7a48(DAT_008977e0);
    iVar4 = fn_006a7dc8();
    if (iVar4 == 0) {
      return 0;
    }
    piVar5 = (int *)fn_006f7a84(DAT_008977e0);
    iVar4 = (**(code **)(*piVar5 + 0xc0))(piVar5,0);
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = fn_006f7a84(DAT_008977e0);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x22d) == '\x05' || *(char *)(iVar4 + 0x22d) == '\t')) {
    return 0;
  }
  iVar6 = fn_006f7a84(DAT_008977e0);
  if (((iVar6 != 0) && (iVar7 = fn_006aa580(), iVar7 == 0)) &&
     (iVar7 = fn_006a9960(iVar6), iVar7 == 0)) {
    if (uVar3 < 0x40) {
      iVar7 = *(int *)(iVar1 + uVar3 * 4 + 4);
    }
    else {
      iVar7 = 0;
    }
    if (((*(char *)(iVar7 + 9) != '\0') && (iVar7 = fn_006f7358(DAT_008977e0), iVar7 == 0)) &&
       (iVar6 = fn_006aa6e0(iVar6), iVar6 == 0)) {
      fn_001e6100(iVar4);
      return 0;
    }
  }
  iVar6 = fn_006f7a84(DAT_008977e0);
  if ((iVar6 != 0) && (iVar6 = fn_006aab38(), iVar6 != 0)) {
    fn_001e6b44(iVar4);
    return 0;
  }
  *(uint *)(iVar1 + 0x104) = uVar3;
  if (*(char *)(iVar2 + 0xf) == '\0') {
    uVar9 = 1;
    uVar8 = *(undefined4 *)(DAT_008977e0 + 0x30);
  }
  else {
    if (*(char *)(iVar2 + 0xf) != '\x01') {
      return 1;
    }
    uVar9 = 2;
    uVar8 = *(undefined4 *)(DAT_008977e0 + 0x30);
  }
  fn_001f0fb4(uVar8,uVar9,0);
  return 1;
}



void fn_001f1a90(void)

{
  fn_001296e8(DAT_00898840);
  fn_005f3c7c(0);
  return;
}



void fn_001f1a50(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_001f1a88);
  fn_006976c0(DAT_008977e0,uVar1);
  *(undefined1 *)(param_1 + 0xf94) = 0;
  return;
}



void fn_001f1a40(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0xf80) = param_2;
  *(undefined1 *)(param_1 + 0xf93) = 1;
  return;
}



/* WARNING: Restarted to delay deadcode elimination for space: stack */

void fn_001f1a2c(undefined4 param_1,short param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(DAT_00897804 + 8) + 4);
  *(short *)(iVar1 + 0x264) = param_2 + *(short *)(iVar1 + 0x264);
  return;
}



void fn_001f1a04(void)

{
  if (**(int **)(DAT_008977e0 + 0x40) == 0) {
    return;
  }
  fn_00318bf4((*(int **)(DAT_008977e0 + 0x40))[2]);
  return;
}



undefined4 fn_001f1998(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    iVar1 = fn_0029d9fc(iVar1,param_2,param_3);
    if (iVar1 != 0) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 fn_001f1920(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  if (iVar1 != 0) {
    fn_0017fe34();
    fn_0017fe34();
    iVar1 = fn_0029d960(iVar1,param_2);
    if (iVar1 != 0) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}


