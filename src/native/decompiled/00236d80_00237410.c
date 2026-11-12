#include "00236d80_00237410.h"



void fn_00237410(int param_1,int *param_2,short param_3,char param_4,int param_5)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  undefined2 *local_2c;
  undefined2 *local_28;
  int local_24;
  
  fn_00301f50(param_1,0xf0);
  *(short *)(param_1 + 0x1c) = param_3;
  uVar2 = fn_00661570((int)param_3);
  *(char *)(param_1 + 0x2e) = param_4;
  uVar3 = fn_002cd49c((int)(char)(param_4 + -1),uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (*(char *)(param_1 + 0x2e) == 'x') {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    uVar3 = fn_002cd49c((int)*(char *)(param_1 + 0x2e),uVar2);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x2e) < 0x32) {
    if (0x1d < *(byte *)(param_1 + 0x2e)) {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 10;
  }
  *(undefined1 *)(param_1 + 0x3c) = uVar2;
  iVar4 = fn_0066173c((int)param_3);
  bVar8 = param_5 != 0;
  iVar7 = 0;
  if (bVar8) {
    iVar7 = iVar4 + -2;
  }
  if ((bVar8 && iVar4 != 2) && iVar7 < 0 == (bVar8 && SBORROW4(iVar4,2))) {
    iVar4 = 2;
  }
  local_2c = (undefined2 *)0x0;
  local_28 = (undefined2 *)0x0;
  local_24 = 0;
  fn_002377a0(&local_2c,(int)*(short *)(param_1 + 0x1c),iVar4,*(undefined1 *)(param_1 + 0x2e),0);
  uVar1 = (int)local_28 - (int)local_2c >> 1;
  if ((int)uVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar1 & 1;
    if (uVar5 != 0) {
      *(undefined2 *)(param_1 + 0x44) = *local_2c;
    }
  }
  for (; (int)uVar5 < (int)uVar1; uVar5 = uVar5 + 2) {
    iVar7 = param_1 + uVar5 * 2;
    *(undefined2 *)(iVar7 + 0x44) = local_2c[uVar5];
    *(undefined2 *)(iVar7 + 0x46) = local_2c[uVar5 + 1];
  }
  uVar1 = param_2[1] - *param_2 >> 1;
  if ((int)uVar1 < 1) {
    uVar5 = 0;
  }
  else {
    uVar5 = uVar1 & 1;
    if (uVar5 != 0) {
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)*param_2;
    }
  }
  for (; (int)uVar5 < (int)uVar1; uVar5 = uVar5 + 2) {
    iVar7 = param_1 + uVar5 * 4;
    *(undefined2 *)(iVar7 + 0x56) = *(undefined2 *)(*param_2 + uVar5 * 2);
    *(undefined2 *)(iVar7 + 0x5a) = *(undefined2 *)(*param_2 + (uVar5 + 1) * 2);
  }
  uVar3 = fn_005fe128(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x1e) = (short)(int)fVar9;
  uVar3 = fn_0020ddfc(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  *(short *)(param_1 + 0x20) = (short)(int)fVar9;
  *(short *)(param_1 + 0x24) = (short)(int)fVar9;
  uVar3 = fn_0020fd10(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x26) = (short)(int)fVar9;
  uVar3 = fn_00210174(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x28) = (short)(int)fVar9;
  uVar3 = fn_0020e628(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x2a) = (short)(int)fVar9;
  uVar3 = fn_0020e3a4(param_1,0);
  fVar9 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x2c) = (short)(int)fVar9;
  puVar6 = local_2c;
  if (local_28 < local_2c) {
    do {
      puVar6 = puVar6 + 1;
    } while (puVar6 != local_28);
  }
  fn_001008c4(local_2c,local_24 - (int)local_2c >> 1,0);
  return;
}



void fn_002370f0(int param_1,undefined4 *param_2)

{
  char cVar1;
  short sVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined2 *puVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  undefined2 *local_28;
  undefined2 *local_24;
  undefined2 *local_20;
  undefined2 local_1c [2];
  
  fn_00301f50(param_1,0xf0);
  sVar2 = *(short *)(param_2 + 1);
  iVar5 = fn_00661518((int)sVar2);
  if (iVar5 == 0) {
    iVar5 = (int)sVar2;
  }
  *(short *)(param_1 + 0x1c) = (short)iVar5;
  fn_0030c174(param_1 + 0x72,param_2 + 5);
  uVar3 = fn_00661570((int)*(short *)(param_1 + 0x1c));
  cVar1 = *(char *)((int)param_2 + 6);
  *(char *)(param_1 + 0x2e) = cVar1;
  uVar6 = fn_002cd49c((int)(char)(cVar1 + -1),uVar3);
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  uVar6 = fn_002cd49c((int)*(char *)(param_1 + 0x2e),uVar3);
  *(undefined4 *)(param_1 + 0x34) = uVar6;
  *(undefined1 *)(param_1 + 0x3c) = 0;
  iVar5 = fn_0066173c((int)*(short *)(param_1 + 0x1c));
  local_28 = (undefined2 *)0x0;
  local_24 = (undefined2 *)0x0;
  local_20 = (undefined2 *)0x0;
  uVar4 = fn_00660a50();
  *(undefined2 *)(param_1 + 0x44) = uVar4;
  iVar10 = *(int *)(&DAT_007c3380 + iVar5 * 4);
  iVar5 = 0;
  if (0 < iVar10) {
    do {
      iVar7 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar5);
      local_1c[0] = (undefined2)iVar7;
      puVar9 = local_24;
      if (iVar7 - 1U < 0x21f) {
        if (local_24 == local_20) {
          fn_0079e460(&local_28,local_24,local_1c);
          puVar9 = local_24;
        }
        else {
          puVar9 = local_24 + 1;
          if (local_24 != (undefined2 *)0x0) {
            *local_24 = local_1c[0];
          }
        }
      }
      local_24 = puVar9;
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar10);
  }
  uVar8 = 0;
  if ((int)local_24 - (int)local_28 >> 1 != 0) {
    do {
      iVar5 = uVar8 * 2;
      puVar9 = local_28 + uVar8;
      uVar8 = uVar8 + 1;
      *(undefined2 *)(param_1 + iVar5 + 0x46) = *puVar9;
    } while (uVar8 < (uint)((int)local_24 - (int)local_28 >> 1));
  }
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)((int)param_2 + 10);
  *(undefined2 *)(param_1 + 0x5e) = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)(param_1 + 0x62) = *(undefined2 *)((int)param_2 + 0xe);
  *(undefined2 *)(param_1 + 0x66) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)(param_1 + 0x6a) = *(undefined2 *)((int)param_2 + 0x12);
  uVar6 = fn_005fe128(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x1e) = (short)(int)fVar11;
  uVar6 = fn_0020ddfc(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x20) = (short)(int)fVar11;
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  *(short *)(param_1 + 0x24) = (short)(int)fVar11;
  uVar6 = fn_0020fd10(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x26) = (short)(int)fVar11;
  uVar6 = fn_00210174(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x28) = (short)(int)fVar11;
  uVar6 = fn_0020e628(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x2a) = (short)(int)fVar11;
  uVar6 = fn_0020e3a4(param_1,0);
  fVar11 = (float)VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),1);
  *(short *)(param_1 + 0x2c) = (short)(int)fVar11;
  uVar4 = fn_00388784(*(undefined1 *)(param_1 + 0x2e),param_1);
  *(undefined2 *)(param_1 + 0x3a) = uVar4;
  iVar5 = fn_002506ac((int)*(short *)(param_2 + 1));
  if (iVar5 == 0) {
    fn_002508f4((int)*(short *)(param_2 + 1),*param_2);
  }
  fn_0024f108(param_1,0);
  puVar9 = local_28;
  if (local_24 < local_28) {
    do {
      puVar9 = puVar9 + 1;
    } while (puVar9 != local_24);
  }
  fn_001008c4(local_28,(int)local_20 - (int)local_28 >> 1,0);
  return;
}



undefined4 fn_002370a8(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
    return 2;
  case 2:
    return 3;
  case 3:
    return 4;
  case 4:
    return 5;
  default:
    return 1;
  }
}



int fn_00237090(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00661518();
  if (iVar1 == 0) {
    iVar1 = param_1;
  }
  return iVar1;
}



void fn_00236d80(int param_1,int *param_2,short param_3,char param_4)

{
  uint uVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 *puVar5;
  int iVar6;
  uint in_fpscr;
  float fVar7;
  undefined2 *local_24;
  undefined2 *local_20;
  int local_1c;
  
  fn_00301f50(param_1,0xf0);
  *(short *)(param_1 + 0x1c) = param_3;
  uVar2 = fn_00661570((int)param_3);
  *(char *)(param_1 + 0x2e) = param_4;
  uVar3 = fn_002cd49c((int)(char)(param_4 + -1),uVar2);
  *(undefined4 *)(param_1 + 0x30) = uVar3;
  if (*(char *)(param_1 + 0x2e) == 'x') {
    *(undefined4 *)(param_1 + 0x34) = 0;
  }
  else {
    uVar3 = fn_002cd49c((int)*(char *)(param_1 + 0x2e),uVar2);
    *(undefined4 *)(param_1 + 0x34) = uVar3;
  }
  uVar2 = 0;
  if (*(byte *)(param_1 + 0x2e) < 0x32) {
    if (0x1d < *(byte *)(param_1 + 0x2e)) {
      uVar2 = 5;
    }
  }
  else {
    uVar2 = 10;
  }
  *(undefined1 *)(param_1 + 0x3c) = uVar2;
  uVar3 = fn_0066173c((int)param_3);
  local_24 = (undefined2 *)0x0;
  local_20 = (undefined2 *)0x0;
  local_1c = 0;
  fn_002377a0(&local_24,(int)*(short *)(param_1 + 0x1c),uVar3,*(undefined1 *)(param_1 + 0x2e),0);
  uVar1 = (int)local_20 - (int)local_24 >> 1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 & 1;
    if (uVar4 != 0) {
      *(undefined2 *)(param_1 + 0x44) = *local_24;
    }
  }
  for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 2) {
    iVar6 = param_1 + uVar4 * 2;
    *(undefined2 *)(iVar6 + 0x44) = local_24[uVar4];
    *(undefined2 *)(iVar6 + 0x46) = local_24[uVar4 + 1];
  }
  uVar1 = param_2[1] - *param_2 >> 1;
  if ((int)uVar1 < 1) {
    uVar4 = 0;
  }
  else {
    uVar4 = uVar1 & 1;
    if (uVar4 != 0) {
      *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)*param_2;
    }
  }
  for (; (int)uVar4 < (int)uVar1; uVar4 = uVar4 + 2) {
    iVar6 = param_1 + uVar4 * 4;
    *(undefined2 *)(iVar6 + 0x56) = *(undefined2 *)(*param_2 + uVar4 * 2);
    *(undefined2 *)(iVar6 + 0x5a) = *(undefined2 *)(*param_2 + (uVar4 + 1) * 2);
  }
  uVar3 = fn_005fe128(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x1e) = (short)(int)fVar7;
  uVar3 = fn_0020ddfc(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(undefined2 *)(param_1 + 0x22) = *(undefined2 *)(param_1 + 0x1e);
  *(short *)(param_1 + 0x20) = (short)(int)fVar7;
  *(short *)(param_1 + 0x24) = (short)(int)fVar7;
  uVar3 = fn_0020fd10(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x26) = (short)(int)fVar7;
  uVar3 = fn_00210174(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x28) = (short)(int)fVar7;
  uVar3 = fn_0020e628(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x2a) = (short)(int)fVar7;
  uVar3 = fn_0020e3a4(param_1,0);
  fVar7 = (float)VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00246880(*(undefined1 *)(param_1 + 0x2e),0);
  *(short *)(param_1 + 0x2c) = (short)(int)fVar7;
  puVar5 = local_24;
  if (local_20 < local_24) {
    do {
      puVar5 = puVar5 + 1;
    } while (puVar5 != local_20);
  }
  fn_001008c4(local_24,local_1c - (int)local_24 >> 1,0);
  return;
}


