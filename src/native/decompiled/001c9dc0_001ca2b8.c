#include "001c9dc0_001ca2b8.h"



void fn_001ca2b8(int param_1,int param_2)

{
  *(int *)(param_1 + 0xcc) = param_2;
  if (*(int *)(param_1 + 0xd0) != param_2) {
    *(int *)(param_1 + 0xd0) = param_2;
    if (*(int *)(param_1 + 0x1c) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
      return;
    }
  }
  return;
}



void fn_001ca1d0(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar5 = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0x34) = iVar1;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar6 = 0;
  if (*(char *)(param_1 + 0xd4) != '\0') {
    iVar6 = *(int *)(*(int *)(param_1 + 0xd8) + (iVar5 * iVar4 + iVar1) * 8 + 4);
  }
  uVar2 = iVar1 + 1;
  iVar5 = iVar5 - iVar6;
  *(int *)(param_1 + 0x30) = iVar5;
  if (iVar4 <= (int)uVar2) {
    *(undefined1 *)(param_1 + 0x4c) = 1;
    bVar7 = *(char *)(param_1 + 0x44) == '\0';
    uVar2 = (uint)bVar7;
    if (bVar7) {
      uVar2 = iVar4 - 1;
    }
  }
  iVar6 = iVar4 * iVar5 + uVar2;
  *(uint *)(param_1 + 0x2c) = uVar2;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar6 * 4);
  if (*(int *)(param_1 + 0x60) != iVar1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    }
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 100) = iVar1;
    *(int *)(param_1 + 0x98) = iVar6;
    *(int *)(param_1 + 0x60) = iVar1;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 0x94) = iVar6;
  }
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001ca0c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 0x3c);
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(char *)(param_1 + 0xd4) == '\0') {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(*(int *)(param_1 + 0xd8) + (*(int *)(param_1 + 0x30) * iVar4 + iVar1) * 8 + 4);
  }
  iVar5 = *(int *)(param_1 + 0x30) - iVar5;
  iVar3 = iVar1 + -1;
  *(int *)(param_1 + 0x30) = iVar5;
  if (iVar3 < 0) {
    *(undefined1 *)(param_1 + 0x4b) = 1;
    if (*(char *)(param_1 + 0x44) == '\0') {
      iVar3 = 0;
    }
    else {
      iVar3 = iVar4 + -1;
    }
  }
  *(int *)(param_1 + 0x2c) = iVar3;
  *(int *)(param_1 + 0x34) = iVar1;
  *(int *)(param_1 + 0x38) = iVar5;
  iVar3 = iVar4 * iVar5 + iVar3;
  iVar1 = *(int *)(*(int *)(param_1 + 0x50) + iVar3 * 4);
  if (*(int *)(param_1 + 0x60) != iVar1) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    }
    uVar2 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 100) = iVar1;
    *(int *)(param_1 + 0x98) = iVar3;
    *(int *)(param_1 + 0x60) = iVar1;
    *(undefined4 *)(param_1 + 0x68) = uVar2;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 0x94) = iVar3;
  }
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001c9f78(int param_1)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x2c);
  iVar4 = *(int *)(param_1 + 0x30);
  pcVar1 = (char *)(*(int *)(param_1 + 0xd8) + (iVar4 * *(int *)(param_1 + 0x3c) + iVar5) * 8);
  if (*(char *)(param_1 + 0xd5) == '\x01') {
    if (iVar4 < 2) {
      iVar2 = 2;
    }
    else {
      iVar2 = 3;
    }
  }
  else {
    if (*(char *)(param_1 + 0xd4) == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*pcVar1 - *(int *)(pcVar1 + 4);
    }
    iVar2 = iVar2 + 1 + iVar4;
  }
  if (*(int *)(param_1 + 0x40) <= iVar2) {
    *(undefined1 *)(param_1 + 0x4a) = 1;
    if (*(char *)(param_1 + 0x45) == '\0') {
      iVar2 = *(int *)(param_1 + 0x40) + -1;
    }
    else {
      iVar6 = *(int *)(param_1 + 0xcc) + 1;
      *(int *)(param_1 + 0xcc) = iVar6;
      iVar2 = 0;
      if (*(int *)(param_1 + 200) <= iVar6) {
        *(undefined4 *)(param_1 + 0xcc) = 0;
      }
    }
  }
  *(int *)(param_1 + 0x38) = iVar4;
  *(int *)(param_1 + 0x30) = iVar2;
  *(int *)(param_1 + 0x34) = iVar5;
  iVar5 = *(int *)(param_1 + 0x3c) * iVar2 + iVar5;
  iVar4 = *(int *)(*(int *)(param_1 + 0x50) + iVar5 * 4);
  if (*(int *)(param_1 + 0x60) != iVar4) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    }
    uVar3 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 100) = iVar4;
    *(int *)(param_1 + 0x98) = iVar5;
    *(int *)(param_1 + 0x60) = iVar4;
    *(undefined4 *)(param_1 + 0x68) = uVar3;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 0x94) = iVar5;
  }
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}



void fn_001c9dc0(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar7 = *(int *)(param_1 + 0x2c);
  iVar6 = *(int *)(param_1 + 0x30);
  iVar8 = *(int *)(param_1 + 0x3c);
  iVar9 = *(int *)(*(int *)(param_1 + 0xd8) + (iVar6 * iVar8 + iVar7) * 8 + 4);
  if ((iVar6 - iVar9) + -1 < 0) {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x45) != '\0') {
      iVar2 = *(int *)(param_1 + 0x40) + -1;
    }
  }
  else {
    iVar2 = 0;
    if (*(char *)(param_1 + 0xd4) != '\0') {
      iVar2 = iVar9;
    }
    iVar2 = (iVar6 - iVar2) + -1;
  }
  iVar2 = iVar2 * iVar8 + iVar7;
  if (iVar2 < 0) {
    iVar2 = 0;
    if (*(char *)(param_1 + 0x45) != '\0') {
      iVar2 = *(int *)(param_1 + 0x40) + -1;
    }
    iVar2 = iVar2 * iVar8 + iVar7;
  }
  iVar2 = *(int *)(param_1 + 0xd8) + iVar2 * 8;
  if (*(char *)(param_1 + 0xd5) == '\x01') {
    if (1 < iVar6) {
      uVar4 = *(uint *)(param_1 + 0x38);
      if (1 < (int)uVar4) {
        uVar4 = 0;
        *(undefined4 *)(param_1 + 0x38) = 0;
      }
      goto LAB_001c9e88;
    }
  }
  else {
    bVar10 = *(char *)(param_1 + 0xd4) != '\0';
    if (bVar10) {
      iVar3 = *(int *)(iVar2 + 4);
    }
    else {
      iVar9 = 0;
      iVar3 = 0;
    }
    if (!bVar10) {
      iVar3 = 0;
    }
    uVar4 = ((iVar6 - iVar9) - iVar3) - 1;
LAB_001c9e88:
    if (-1 < (int)uVar4) goto LAB_001c9ee8;
  }
  cVar1 = *(char *)(param_1 + 0x45);
  *(undefined1 *)(param_1 + 0x49) = 1;
  uVar4 = (uint)(cVar1 != '\0');
  if (cVar1 != '\0') {
    iVar9 = 0;
    if (*(char *)(param_1 + 0xd4) != '\0') {
      iVar9 = *(int *)(iVar2 + 4);
    }
    uVar4 = (*(int *)(param_1 + 0x40) - iVar9) - 1;
  }
  if ((cVar1 != '\0') &&
     (iVar9 = *(int *)(param_1 + 0xcc) + -1, *(int *)(param_1 + 0xcc) = iVar9, iVar9 < 1)) {
    *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 200) + -1;
  }
LAB_001c9ee8:
  *(int *)(param_1 + 0x38) = iVar6;
  *(uint *)(param_1 + 0x30) = uVar4;
  *(int *)(param_1 + 0x34) = iVar7;
  iVar7 = iVar8 * uVar4 + iVar7;
  iVar6 = *(int *)(*(int *)(param_1 + 0x50) + iVar7 * 4);
  if (*(int *)(param_1 + 0x60) != iVar6) {
    if (*(int *)(param_1 + 0x10) != 0) {
      fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
    }
    uVar5 = *(undefined4 *)(param_1 + 0x60);
    *(int *)(param_1 + 100) = iVar6;
    *(int *)(param_1 + 0x98) = iVar7;
    *(int *)(param_1 + 0x60) = iVar6;
    *(undefined4 *)(param_1 + 0x68) = uVar5;
    *(undefined4 *)(param_1 + 0x9c) = *(undefined4 *)(param_1 + 0x94);
    *(int *)(param_1 + 0x94) = iVar7;
  }
  if ((*(int *)(param_1 + 0xd0) == *(int *)(param_1 + 0xcc)) ||
     (*(int *)(param_1 + 0xd0) = *(int *)(param_1 + 0xcc), *(int *)(param_1 + 0x1c) == 0)) {
    return;
  }
  fn_0069e8c8(*(undefined4 *)(param_1 + 0xc));
  return;
}


