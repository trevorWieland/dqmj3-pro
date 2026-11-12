#include "0055a6ac_0055afd0.h"



void fn_0055afd0(int param_1)

{
  if (*(int *)(param_1 + 0x3c) == 0) {
    return;
  }
  fn_005558ac(*(undefined4 *)(param_1 + 0x24));
  return;
}



bool fn_0055afb4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0013c3d8(param_1 + 0xc);
  return iVar1 == 0;
}



void fn_0055ae98(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_27c [12];
  undefined1 auStack_270 [600];
  
  fn_00559ad4(auStack_27c);
  fn_005596fc(auStack_27c,*(undefined4 *)(param_1 + 0x1c));
  if ((*(int *)(param_1 + 0x2c) == 0) && (iVar3 = *(int *)(param_1 + 0x28), iVar3 != -1)) {
    iVar1 = fn_00116ab8(auStack_270,iVar3,*(undefined4 *)(param_1 + 0x3c),2,0);
    if (iVar1 == 0) goto LAB_0055af98;
    uVar2 = fn_006e3b8c(auStack_270,iVar3);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
  }
  iVar3 = fn_0055a000(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                       *(undefined4 *)(param_1 + 0x1c));
  if (iVar3 == 0) {
    iVar3 = fn_00559874(auStack_270,*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30)
                         ,*(undefined4 *)(param_1 + 0x3c));
    if (iVar3 == 0) {
LAB_0055af98:
      *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x18) = 2;
      *(undefined1 *)(param_1 + 0x40) = 0;
      fn_00559b18(auStack_27c);
      return;
    }
    iVar3 = fn_0055a000(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30),
                         *(undefined4 *)(param_1 + 0x1c),auStack_270);
  }
  *(int *)(param_1 + 0x38) = iVar3;
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined1 *)(*(int *)(param_1 + 0x3c) + 0x18) = 2;
  fn_00559aa8(auStack_27c);
  *(undefined1 *)(param_1 + 0x40) = 1;
  fn_00559b18(auStack_27c);
  return;
}



int fn_0055ad2c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001a0a7c();
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_0055f170();
  }
  fn_0017d948(param_1 + 4,param_1 + 8,iVar1 + 0x1b0);
  return iVar1;
}



undefined4 * fn_0055acb4(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_008582a0;
  fn_001a4270(param_1);
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    if (*(char *)(iVar1 + 0x139) != '\0') {
      fn_001a46b0(iVar1);
    }
  }
  for (iVar1 = param_1[0x4c]; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
    fn_001a4698(iVar1);
  }
  param_1[0x4c] = 0;
  *(undefined1 *)((int)param_1 + 5) = 0;
  return param_1;
}



void fn_0055aa90(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *(undefined4 *)(param_1 + 8) = 0x3f800000;
  *(undefined4 *)(param_1 + 0xc) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x18) = 0x3f800000;
  uVar4 = 0;
  *(undefined1 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x25) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined1 *)(param_1 + 0x26) = 0;
  *(undefined1 *)(param_1 + 0x27) = 0;
  *(undefined1 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7a) = 0;
  *(undefined1 *)(param_1 + 0x7b) = 0;
  *(undefined1 *)(param_1 + 0x80) = 0;
  *(undefined1 *)(param_1 + 0x81) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  iVar2 = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  do {
    fn_0017df94(param_1 + iVar2 * 0x10 + 0xac);
    iVar1 = param_1 + iVar2;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar1 + 0xec) = 0;
  } while (iVar2 < 4);
  uVar3 = (undefined4)uVar4;
  *(undefined4 *)(param_1 + 0x88) = uVar3;
  *(undefined1 *)(param_1 + 0x8c) = 0x7f;
  *(undefined1 *)(param_1 + 0x8d) = 0x7f;
  *(undefined2 *)(param_1 + 0x8e) = 0;
  *(undefined2 *)(param_1 + 0x90) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0x7f;
  *(undefined1 *)(param_1 + 0x93) = 0x7f;
  *(undefined2 *)(param_1 + 0x94) = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  *(undefined1 *)(param_1 + 0x99) = 0;
  *(undefined2 *)(param_1 + 0x9a) = 0;
  *(undefined2 *)(param_1 + 0x9c) = 0;
  *(undefined1 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)(param_1 + 0x9f) = 0;
  *(undefined2 *)(param_1 + 0xa0) = 0;
  *(undefined2 *)(param_1 + 0xa2) = 0;
  *(undefined1 *)(param_1 + 0xf0) = 0x7f;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined2 *)(param_1 + 0xa6) = 0;
  *(undefined2 *)(param_1 + 0xa8) = 0;
  *(undefined1 *)(param_1 + 0xf1) = 2;
  *(undefined1 *)(param_1 + 0xf2) = 0;
  *(undefined1 *)(param_1 + 0xf4) = 0;
  *(undefined1 *)(param_1 + 0xf5) = 0x40;
  *(undefined1 *)(param_1 + 0xf6) = 0x3c;
  *(undefined1 *)(param_1 + 0xf7) = 0;
  *(undefined1 *)(param_1 + 0xf8) = 0xff;
  *(undefined1 *)(param_1 + 0xf9) = 0xff;
  *(undefined1 *)(param_1 + 0xfa) = 0xff;
  *(undefined1 *)(param_1 + 0xfb) = 0xff;
  *(undefined2 *)(param_1 + 0xfc) = 0xff;
  *(undefined1 *)(param_1 + 0xff) = 0x7f;
  *(undefined1 *)(param_1 + 0x100) = 0;
  *(undefined1 *)(param_1 + 0x101) = 0;
  *(undefined4 *)(param_1 + 0x104) = uVar3;
  *(undefined1 *)(param_1 + 0xfe) = 0;
  *(undefined4 *)(param_1 + 0x108) = uVar3;
  iVar2 = 0;
  do {
    iVar1 = param_1 + iVar2 * 2;
    iVar2 = iVar2 + 2;
    *(undefined2 *)(iVar1 + 0x10c) = 0xffff;
    *(undefined2 *)(iVar1 + 0x10e) = 0xffff;
  } while (iVar2 < 0x10);
  return;
}



void fn_0055a9c4(int param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    *(undefined1 *)(param_1 + 0x7a) = 0;
  }
  else if (param_2 == 1) {
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  else {
    if (param_2 == 2) {
      fn_001a4270();
      for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
        if (*(char *)(iVar1 + 0x139) != '\0') {
          fn_001a46b0(iVar1);
        }
      }
      for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
        fn_001a4698(iVar1);
      }
    }
    else {
      if (param_2 != 3) {
        return;
      }
      for (iVar1 = *(int *)(param_1 + 0x130); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x1ac)) {
        fn_001a4698(iVar1);
        fn_00141734(iVar1);
      }
    }
    *(undefined4 *)(param_1 + 0x130) = 0;
    *(undefined1 *)(param_1 + 0x7a) = 1;
  }
  return;
}



int fn_0055a6ac(int param_1,int param_2,int param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  longlong lVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 uVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 in_s0;
  float fVar12;
  float fVar13;
  undefined4 local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  int local_38;
  int local_34;
  code *pcStack_30;
  int local_2c;
  
  iVar9 = 0;
  uVar7 = (uint)*(byte *)(param_1 + 0xf0) * param_3;
  iVar6 = *(int *)(param_1 + 300);
  lVar3 = (longlong)(int)uVar7 * -0x7efdfbf7 + ((ulonglong)uVar7 << 0x20);
  iVar8 = (int)((ulonglong)lVar3 >> 0x20);
  if (param_5 != 0) {
    iVar9 = *(int *)(param_1 + 0x130);
  }
  uVar7 = (iVar8 >> 6) - (iVar8 >> 0x1f);
  uVar10 = (undefined1)param_2;
  if (param_5 != 0 && iVar9 != 0) {
    *(undefined1 *)(iVar9 + 0x194) = uVar10;
    fn_0055ea54(uVar7 & 0xff,iVar8,(int)lVar3);
    *(undefined4 *)(iVar9 + 0x19c) = in_s0;
  }
  if (*(char *)(param_1 + 0x27) == '\0') {
    if (iVar9 != 0) goto LAB_0055a834;
  }
  else {
    iVar9 = *(int *)(param_1 + 0x130);
    if (iVar9 != 0) {
      if (*(char *)(iVar9 + 0x98) != '\x04') {
        *(undefined1 *)(iVar9 + 0x194) = uVar10;
        fn_0055ea54(uVar7 & 0xff);
        *(undefined4 *)(iVar9 + 0x19c) = in_s0;
        *(undefined4 *)(iVar9 + 400) = param_4;
        goto LAB_0055a834;
      }
      fn_00141734(iVar9);
    }
  }
  pcStack_30 = fn_0055a5b4;
  local_48 = *(undefined4 *)(param_1 + 0x84);
  if (param_5 == 0) {
    local_3c = param_4;
  }
  else {
    local_3c = 0xffffffff;
  }
  local_38 = (int)*(char *)(param_1 + 0xf2);
  local_34 = (uint)*(byte *)(iVar6 + 0x74) + (uint)*(byte *)(param_1 + 0xf5);
  local_44 = param_2;
  local_40 = uVar7;
  local_2c = param_1;
  iVar9 = fn_0055e2fc(*(undefined4 *)(param_1 + 300),*(undefined1 *)(param_1 + 0x83),&local_48);
  if (iVar9 == 0) {
    return 0;
  }
  bVar11 = *(char *)(iVar9 + 0x196) != '\0';
  if (bVar11) {
    uVar7 = *(uint *)(param_1 + 0x130);
  }
  if (bVar11 && uVar7 != 0) {
    do {
      if (*(char *)(uVar7 + 0x196) == *(char *)(iVar9 + 0x196)) {
        fn_0055814c(uVar7 + 0x98,0x7e);
        fn_001a46b0(uVar7);
      }
      uVar7 = *(uint *)(uVar7 + 0x1ac);
    } while (uVar7 != 0);
  }
  *(undefined4 *)(iVar9 + 0x1ac) = *(undefined4 *)(param_1 + 0x130);
  *(int *)(param_1 + 0x130) = iVar9;
LAB_0055a834:
  if (*(byte *)(param_1 + 0xf8) < 0x80) {
    fn_00558278();
  }
  if (*(byte *)(param_1 + 0xf9) < 0x80) {
    fn_00558200();
  }
  if (*(byte *)(param_1 + 0xfa) < 0x80) {
    *(byte *)(iVar9 + 0xb0) = *(byte *)(param_1 + 0xfa);
  }
  if (*(byte *)(param_1 + 0xfb) < 0x80) {
    fn_0055814c(iVar9 + 0x98);
  }
  if (*(short *)(param_1 + 0xfc) < 0x80) {
    fn_005581e0(iVar9 + 0x98);
  }
  fVar12 = *(float *)(param_1 + 0x88);
  if (*(char *)(param_1 + 0x81) != '\0') {
    fVar13 = (float)VectorSignedToFloat((uint)*(byte *)(param_1 + 0xf6) - param_2,
                                        (byte)(in_fpscr >> 0x16) & 3);
    fVar12 = fVar13 + fVar12;
  }
  uVar7 = (uint)*(byte *)(param_1 + 0xf7);
  if (uVar7 == 0) {
    fn_0055eb70(iVar9,param_4,0);
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 == 0.0) << 0x1e;
    uVar2 = uVar1 | (uint)(fVar12 <= 0.0) << 0x1d;
    if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
      fVar12 = -fVar12;
    }
    fVar13 = (float)VectorSignedToFloat(uVar7 * uVar7,(byte)(uVar2 >> 0x16) & 3);
    fn_0055eb70(iVar9,((int)(fVar12 * fVar13) >> 5) * 5,1);
  }
  *(undefined1 *)(param_1 + 0xf6) = uVar10;
  if (*(char *)(param_1 + 0x7b) == '\0') {
    uVar10 = 0xff;
  }
  else {
    uVar10 = 0;
  }
  if ((uint)*(ushort *)(iVar9 + 0x184) < (uint)*(ushort *)(iVar9 + 0x182)) {
    bVar5 = *(byte *)(iVar9 + 0x180);
    cVar4 = fn_00300f74(((uint)*(byte *)(iVar9 + 0x181) - (uint)bVar5) *
                         (uint)*(ushort *)(iVar9 + 0x184));
    bVar5 = cVar4 + bVar5;
  }
  else {
    bVar5 = *(byte *)(iVar9 + 0x181);
  }
  *(byte *)(iVar9 + 0x180) = bVar5;
  *(undefined1 *)(iVar9 + 0x181) = uVar10;
  *(undefined2 *)(iVar9 + 0x182) = 0;
  *(undefined2 *)(iVar9 + 0x184) = 0;
  *(undefined1 *)(iVar9 + 0x13c) = *(undefined1 *)(*(int *)(param_1 + 300) + 0x5c);
  fn_0055a178(*(undefined4 *)(iVar9 + 0x1a8),*(undefined1 *)(*(int *)(param_1 + 300) + 0x34));
  fn_0055a198(*(undefined4 *)(iVar9 + 0x1a8),*(undefined1 *)(*(int *)(param_1 + 300) + 0x35));
  fn_00195d80(*(undefined4 *)(iVar9 + 0x1a8),(int)*(char *)(param_1 + 0x79));
  return iVar9;
}


