#include "005f4b74_005f56f4.h"



void fn_005f56f4(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar1 + 0x684) = param_2;
  *(undefined4 *)(iVar1 + 0x688) = param_3;
  return;
}



void fn_005f56e4(int param_1,undefined4 *param_2)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x671) = *param_2;
  return;
}



void fn_005f55ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar1 + 0x678);
  iVar6 = *(int *)(iVar1 + 0x67c);
  if (iVar4 != -1 || iVar6 != -1) {
    puVar3 = *(undefined1 **)(iVar1 + 0x66c);
    if (5 < (uint)(*(int *)(iVar1 + 0x668) - ((int)puVar3 - *(int *)(iVar1 + 0x664)))) {
      *puVar3 = 1;
      puVar3[1] = *(undefined1 *)(iVar1 + 0x670);
      *(short *)(puVar3 + 2) = (short)iVar4;
      *(short *)(puVar3 + 4) = (short)iVar6;
      *(undefined1 **)(iVar1 + 0x66c) = puVar3 + 6;
    }
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x67c) = 0xffffffff;
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x678) = 0xffffffff;
  }
  iVar1 = *(int *)(param_1 + 4);
  puVar3 = *(undefined1 **)(iVar1 + 0x66c);
  uVar2 = *(int *)(iVar1 + 0x668) - ((int)puVar3 - *(int *)(iVar1 + 0x664));
  if (9 < uVar2) {
    *puVar3 = 0;
    puVar5 = puVar3 + 6;
    puVar3[1] = *(undefined1 *)(iVar1 + 0x670);
    *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(iVar1 + 0x671);
    uStack_8 = param_3;
    uStack_4 = param_4;
    fn_00100394(puVar5,uVar2 - 7,param_2,&uStack_8);
    iVar6 = fn_002febd8(puVar5);
    uVar2 = (uint)(puVar5 + iVar6 + 1) & 3;
    iVar4 = 0;
    if (uVar2 != 0) {
      iVar4 = 4 - uVar2;
    }
    *(undefined1 **)(iVar1 + 0x66c) = puVar5 + iVar6 + 1 + iVar4;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x005f5530) */

void fn_005f535c(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  uint local_58 [2];
  int local_50;
  uint local_4c;
  int local_48;
  uint local_2c;
  undefined4 local_20;
  uint local_18;
  
  uVar1 = *(int *)(param_1 + 0x684) * param_2;
  uVar5 = uVar1 & 0xffff;
  uVar4 = *(int *)(param_1 + 0x688) * param_3 & 0xffff;
  fn_0017821c(local_58,&DAT_007d6130,0x48);
  fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5;
  local_58[0] = 0;
  if (((uint)fVar6 & 0x80000000) != 0) {
    local_58[0] = 0x800000;
  }
  if (ABS(fVar6) == 0.0) {
    uVar2 = 0;
LAB_005f53ec:
    local_58[0] = ((uint)fVar6 & 0x7fffff) >> 7 | local_58[0] | (uVar2 & 0x7f) << 0x10;
  }
  else {
    uVar2 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 0x80) goto LAB_005f53ec;
      local_58[0] = 0x7f0000;
    }
  }
  fVar6 = (float)VectorUnsignedToFloat(uVar4,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = 2.0 / fVar6;
  uVar2 = 0;
  if (((uint)fVar6 & 0x80000000) != 0) {
    uVar2 = 0x40000000;
  }
  uVar3 = 0;
  if (ABS(fVar6) == 0.0) {
LAB_005f5444:
    uVar2 = (uint)fVar6 & 0x7fffff | uVar2 | (uVar3 & 0x7f) << 0x17;
  }
  else {
    uVar3 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (-1 < (int)uVar3) {
      if ((int)uVar3 < 0x80) goto LAB_005f5444;
      uVar2 = 0x3f800000;
    }
  }
  local_50 = uVar2 << 1;
  fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.5;
  if (((uint)fVar6 & 0x80000000) == 0) {
    local_4c = 0;
  }
  else {
    local_4c = 0x800000;
  }
  if (ABS(fVar6) == 0.0) {
    uVar2 = 0;
LAB_005f54ac:
    local_4c = ((uint)fVar6 & 0x7fffff) >> 7 | local_4c | (uVar2 & 0x7f) << 0x10;
  }
  else {
    uVar2 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 0x80) goto LAB_005f54ac;
      local_4c = 0x7f0000;
    }
  }
  fVar6 = (float)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = 2.0 / fVar6;
  uVar5 = 0;
  if (((uint)fVar6 & 0x80000000) != 0) {
    uVar5 = 0x40000000;
  }
  uVar2 = 0;
  if (ABS(fVar6) == 0.0) {
LAB_005f5500:
    uVar5 = (uint)fVar6 & 0x7fffff | uVar5 | (uVar2 & 0x7f) << 0x17;
  }
  else {
    uVar2 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if (-1 < (int)uVar2) {
      if ((int)uVar2 < 0x80) goto LAB_005f5500;
      uVar5 = 0x3f800000;
    }
  }
  local_48 = uVar5 << 1;
  local_20 = 0xbf0000;
  local_2c = uVar4 - 1 | uVar1 * 0x10000 - 0x10000;
  fVar6 = (float)VectorSignedToFloat(0xffffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = 0.0 / fVar6;
  local_18 = 0;
  if (((uint)fVar6 & 0x80000000) != 0) {
    local_18 = 0x800000;
  }
  if (ABS(fVar6) == 0.0) {
    uVar1 = 0;
  }
  else {
    uVar1 = ((uint)ABS(fVar6) >> 0x17) - 0x40;
    if ((int)uVar1 < 0) goto LAB_005f55a8;
    if (0x7f < (int)uVar1) {
      local_18 = 0x7f0000;
      goto LAB_005f55a8;
    }
  }
  local_18 = ((uint)fVar6 & 0x7fffff) >> 7 | local_18 | (uVar1 & 0x7f) << 0x10;
LAB_005f55a8:
  fn_00734b4c(local_58,0x48,1);
  fn_00734b4c(&DAT_007d60f0,0x40,1);
  return;
}



void fn_005f4de0(int param_1,int param_2,int param_3,float *param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  iVar1 = *(int *)(param_1 + 0x684);
  iVar2 = *(int *)(param_1 + 0x688);
  uVar8 = 0;
  uVar9 = 0x3f800000;
  param_4[1] = 0.0;
  param_4[2] = 0.0;
  param_4[4] = 0.0;
  fVar4 = (float)VectorSignedToFloat(iVar1 * param_2,(byte)(in_fpscr >> 0x16) & 3);
  param_4[6] = 0.0;
  fVar3 = (float)VectorSignedToFloat(iVar2 * param_3,(byte)(in_fpscr >> 0x16) & 3);
  param_4[8] = 0.0;
  param_4[9] = 0.0;
  param_4[0xc] = 0.0;
  param_4[0xd] = 0.0;
  fVar6 = 1.0 / (fVar4 - 0.0);
  fVar7 = 1.0 / (0.0 - fVar3);
  fVar5 = fVar6 * 2.0;
  fVar4 = -((fVar4 + 0.0) * fVar6);
  *param_4 = fVar5;
  param_4[3] = fVar4;
  param_4[5] = fVar7 * 2.0;
  param_4[7] = -((fVar3 + 0.0) * fVar7);
  param_4[10] = -1.0;
  param_4[0xb] = -0.0;
  param_4[0xe] = 0.0;
  param_4[0xf] = 1.0;
  *param_4 = param_4[4];
  param_4[1] = param_4[5];
  param_4[3] = param_4[7];
  param_4[4] = -fVar5;
  param_4[5] = -0.0;
  param_4[6] = -0.0;
  param_4[7] = -fVar4;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c6300), iVar1 != 0)) {
    DAT_008f9e38 = uVar9;
    DAT_008f9e3c = uVar8;
    DAT_008f9e40 = uVar8;
    DAT_008f9e44 = uVar8;
    DAT_008f9e48 = uVar8;
    DAT_008f9e4c = uVar9;
    DAT_008f9e50 = uVar8;
    DAT_008f9e54 = uVar8;
    DAT_008f9e58 = uVar8;
    DAT_008f9e5c = uVar8;
    DAT_008f9e60 = uVar9;
    DAT_008f9e64 = uVar8;
  }
  fn_001781f0(param_5,&DAT_008f9e38);
  return;
}



void fn_005f4d9c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x678) = param_2;
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x67c) = param_3;
  return;
}



undefined4 * fn_005f4c7c(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  *param_1 = &DAT_00858f4c;
  param_1[1] = 0;
  iVar1 = fn_00145b00(0x40,&DAT_00812c8c);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_005f4b74();
  }
  iVar4 = param_1[1];
  if (iVar4 != iVar1) {
    if (iVar4 != 0) {
      fn_005f45d8(iVar4);
      uVar3 = *(uint *)(iVar4 + 0x10);
      uVar2 = uVar3;
      if (*(uint *)(iVar4 + 0x14) < uVar3) {
        do {
          uVar2 = uVar2 + 8;
        } while (uVar2 != *(uint *)(iVar4 + 0x14));
      }
      fn_001008c4(uVar3,(int)(*(int *)(iVar4 + 0x18) - uVar3) >> 3,0);
      fn_002feef8(iVar4);
    }
    param_1[1] = iVar1;
  }
  return param_1;
}



undefined4 * fn_005f4b74(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x100,0);
  iVar3 = 1;
  param_1[4] = puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 2;
  } while (iVar3 != 0);
  iVar3 = param_1[4];
  uVar4 = 0;
  param_1[5] = iVar3 + 8;
  param_1[6] = iVar3 + 0x100;
  *(undefined1 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar1 = DAT_008f9e34;
  uVar4 = DAT_008f9e30;
  param_1[0xd] = DAT_008f9e2c;
  param_1[0xe] = uVar4;
  param_1[0xf] = uVar1;
  return param_1;
}


