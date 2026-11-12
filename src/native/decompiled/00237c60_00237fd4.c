#include "00237c60_00237fd4.h"



void fn_00237fd4(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0x34) != param_2) {
    if (param_2 == 0) {
      fn_001594e4(DAT_008977e4,*(undefined4 *)(param_1 + 4),0);
    }
    else {
      fn_0017894c();
    }
  }
  *(char *)(param_1 + 0x34) = (char)param_2;
  return;
}



void fn_00237c74(int param_1,short param_2,uint param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *local_28;
  
  local_28 = param_4;
  fn_00301f50(param_1,0xf0);
  iVar4 = (int)param_2;
  iVar5 = fn_002ea524();
  iVar6 = fn_00661518();
  if (iVar6 == 0) {
    iVar6 = iVar5;
  }
  *(short *)(param_1 + 0x1c) = (short)iVar6;
  if (param_4 == (undefined4 *)0x0) {
    fn_002cd778(param_1 + 0x72,iVar6,iVar4);
  }
  else {
    *(undefined4 *)(param_1 + 0x72) = *param_4;
    *(undefined4 *)(param_1 + 0x76) = param_4[1];
    *(undefined4 *)(param_1 + 0x7a) = param_4[2];
    *(undefined4 *)(param_1 + 0x7e) = param_4[3];
    *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)(param_4 + 4);
  }
  fn_002e9e4c(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x1e) = uVar3;
  fn_002e9ea4(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x20) = uVar3;
  *(undefined2 *)(param_1 + 0x24) = uVar3;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  fn_002ea0cc(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x26) = uVar3;
  fn_002ea17c(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x28) = uVar3;
  fn_002e9efc(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x2a) = uVar3;
  fn_002e9c38(iVar4);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x2c) = uVar3;
  uVar1 = fn_002e9be0(iVar4);
  *(undefined1 *)(param_1 + 0x3c) = uVar1;
  uVar1 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  cVar2 = fn_002e9ce8(iVar4);
  *(char *)(param_1 + 0x2e) = cVar2;
  uVar7 = fn_002cd49c((int)(char)(cVar2 + -1),uVar1);
  *(undefined4 *)(param_1 + 0x30) = uVar7;
  if (*(char *)(param_1 + 0x2e) == 'x') {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    uVar7 = fn_002cd49c((int)*(char *)(param_1 + 0x2e),uVar1);
    *(undefined4 *)(param_1 + 0x34) = uVar7;
  }
  uVar8 = fn_002e9c90(iVar4);
  if (uVar8 == 0xffffffff || uVar8 == 5) {
    uVar8 = fn_0066173c((int)*(short *)(param_1 + 0x1c));
  }
  uVar3 = fn_00660a50();
  iVar6 = 2;
  *(undefined2 *)(param_1 + 0x44) = uVar3;
  switch(uVar8) {
  case 0:
  case 1:
    break;
  case 2:
    iVar6 = 3;
    break;
  case 3:
    iVar6 = 4;
    break;
  case 4:
    iVar6 = 5;
    break;
  default:
    iVar6 = 1;
  }
  iVar5 = 0;
  do {
    uVar3 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar5);
    iVar9 = iVar5 * 2;
    iVar5 = iVar5 + 1;
    *(undefined2 *)(param_1 + iVar9 + 0x46) = uVar3;
  } while (iVar5 < iVar6);
  iVar6 = 0;
  local_28 = (undefined4 *)0x643219;
  do {
    if (*(byte *)(param_1 + 0x3c) < *(byte *)((int)&local_28 + iVar6)) break;
    iVar6 = iVar6 + 1;
  } while (iVar6 < 3);
  iVar5 = 0;
  if (0 < iVar6) {
    do {
      iVar9 = iVar5 + 6;
      uVar3 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar5 + 5);
      iVar5 = iVar5 + 1;
      *(undefined2 *)(param_1 + iVar9 * 2 + 0x44) = uVar3;
    } while (iVar5 < iVar6);
  }
  if (uVar8 < 5) {
    uVar8 = 0;
    do {
      if (param_3 == 0) goto LAB_00237f3c;
      if ((param_3 & 1 << uVar8) != 0) {
        uVar3 = fn_002ea3e8(iVar4,uVar8);
        *(undefined2 *)(param_1 + uVar8 * 4 + 0x56) = uVar3;
      }
      uVar8 = uVar8 + 1 & 0xff;
    } while (uVar8 < 3);
  }
  goto LAB_00237f18;
  while (uVar8 = uVar8 + 1 & 0xff, uVar8 < 3) {
LAB_00237f3c:
    iVar6 = 0;
    switch(uVar8) {
    case 0:
    case 1:
      iVar6 = 100;
      break;
    case 2:
      iVar6 = 0x14;
      break;
    case 3:
      iVar6 = 10;
      break;
    case 4:
      iVar6 = 2;
    }
    iVar5 = fn_00163868(100);
    if (iVar5 < iVar6) {
      uVar3 = fn_002ea3e8(iVar4,uVar8);
      iVar6 = uVar8 * 4;
      uVar8 = uVar8 + 1 & 0xff;
      *(undefined2 *)(param_1 + iVar6 + 0x56) = uVar3;
      if (2 < uVar8) break;
      goto LAB_00237f3c;
    }
  }
LAB_00237f18:
  uVar3 = fn_00388784(*(undefined1 *)(param_1 + 0x2e),param_1);
  *(undefined2 *)(param_1 + 0x3a) = uVar3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00237f3c) */
/* WARNING: Removing unreachable block (ram,0x00237f48) */
/* WARNING: Removing unreachable block (ram,0x00237f44) */
/* WARNING: Removing unreachable block (ram,0x00237f78) */
/* WARNING: Removing unreachable block (ram,0x00237f70) */
/* WARNING: Removing unreachable block (ram,0x00237f68) */
/* WARNING: Removing unreachable block (ram,0x00237f60) */
/* WARNING: Removing unreachable block (ram,0x00237f7c) */
/* WARNING: Removing unreachable block (ram,0x00237f90) */
/* WARNING: Removing unreachable block (ram,0x00237fb4) */
/* WARNING: Removing unreachable block (ram,0x00237fb8) */
/* WARNING: Removing unreachable block (ram,0x00237fc8) */
/* WARNING: Removing unreachable block (ram,0x00237cb8) */
/* WARNING: Recovered jumptable eliminated as dead code */

void fn_00237c60(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte abStack_28 [4];
  
  *(undefined4 *)(param_1 + 0x2e0) = param_2;
  iVar4 = param_1 + 0x1f0;
  abStack_28[0] = 0;
  abStack_28[1] = 0;
  abStack_28[2] = 0;
  abStack_28[3] = 0;
  fn_00301f50(iVar4,0xf0);
  iVar5 = (int)(short)param_2;
  iVar6 = fn_002ea524();
  iVar7 = fn_00661518();
  if (iVar7 == 0) {
    iVar7 = iVar6;
  }
  *(short *)(param_1 + 0x20c) = (short)iVar7;
  fn_002cd778(param_1 + 0x262,iVar7,iVar5);
  fn_002e9e4c(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x20e) = uVar3;
  fn_002e9ea4(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x210) = uVar3;
  *(undefined2 *)(param_1 + 0x214) = uVar3;
  *(undefined2 *)(param_1 + 0x212) = *(undefined2 *)(param_1 + 0x20e);
  fn_002ea0cc(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x216) = uVar3;
  fn_002ea17c(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x218) = uVar3;
  fn_002e9efc(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x21a) = uVar3;
  fn_002e9c38(iVar5);
  uVar3 = fn_00237c18();
  *(undefined2 *)(param_1 + 0x21c) = uVar3;
  uVar1 = fn_002e9be0(iVar5);
  *(undefined1 *)(param_1 + 0x22c) = uVar1;
  uVar1 = fn_00661570((int)*(short *)(param_1 + 0x20c));
  cVar2 = fn_002e9ce8(iVar5);
  *(char *)(param_1 + 0x21e) = cVar2;
  uVar8 = fn_002cd49c((int)(char)(cVar2 + -1),uVar1);
  *(undefined4 *)(param_1 + 0x220) = uVar8;
  if (*(char *)(param_1 + 0x21e) == 'x') {
    *(undefined4 *)(param_1 + 0x224) = 0;
  }
  else {
    uVar8 = fn_002cd49c((int)*(char *)(param_1 + 0x21e),uVar1);
    *(undefined4 *)(param_1 + 0x224) = uVar8;
  }
  uVar9 = fn_002e9c90(iVar5);
  if (uVar9 == 0xffffffff || uVar9 == 5) {
    uVar9 = fn_0066173c((int)*(short *)(param_1 + 0x20c));
  }
  uVar3 = fn_00660a50();
  iVar7 = 2;
  *(undefined2 *)(param_1 + 0x234) = uVar3;
  switch(uVar9) {
  case 0:
  case 1:
    break;
  case 2:
    iVar7 = 3;
    break;
  case 3:
    iVar7 = 4;
    break;
  case 4:
    iVar7 = 5;
    break;
  default:
    iVar7 = 1;
  }
  iVar6 = 0;
  do {
    uVar3 = fn_006616f4((int)*(short *)(param_1 + 0x20c),iVar6);
    iVar10 = iVar6 * 2;
    iVar6 = iVar6 + 1;
    *(undefined2 *)(iVar4 + iVar10 + 0x46) = uVar3;
  } while (iVar6 < iVar7);
  iVar7 = 0;
  abStack_28[0] = 0x19;
  abStack_28[1] = 0x32;
  abStack_28[2] = 100;
  abStack_28[3] = 0;
  do {
    if (*(byte *)(param_1 + 0x22c) < abStack_28[iVar7]) break;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 3);
  iVar6 = 0;
  if (0 < iVar7) {
    do {
      iVar10 = iVar6 + 6;
      uVar3 = fn_006616f4((int)*(short *)(param_1 + 0x20c),iVar6 + 5);
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar4 + iVar10 * 2 + 0x44) = uVar3;
    } while (iVar6 < iVar7);
  }
  if (uVar9 < 5) {
    uVar9 = 0;
    do {
      if ((1 << uVar9 & 0xffU) != 0) {
        uVar3 = fn_002ea3e8(iVar5,uVar9);
        *(undefined2 *)(iVar4 + uVar9 * 4 + 0x56) = uVar3;
      }
      uVar9 = uVar9 + 1 & 0xff;
    } while (uVar9 < 3);
  }
  uVar3 = fn_00388784(*(undefined1 *)(param_1 + 0x21e),iVar4);
  *(undefined2 *)(param_1 + 0x22a) = uVar3;
  return;
}


