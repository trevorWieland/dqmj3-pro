#include "00552f70_00553648aa.h"



byte * fn_005530f8(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  byte bVar10;
  
  puVar3 = (undefined4 *)fn_0054ce60(param_1,param_2,param_4);
  *puVar3 = &DAT_00857d0c;
  iVar4 = fn_00101a1c(puVar3 + 0x2a,fn_0017d8f8);
  pbVar5 = (byte *)fn_001957e0(iVar4 + 0x10);
  if ((param_3 == 0) || (*(short *)(param_4 + 0x2c) != 0)) {
    iVar4 = param_2;
  }
  else {
    iVar4 = param_3;
  }
  bVar10 = *(byte *)(iVar4 + 0x66);
  if (3 < bVar10) {
    bVar10 = 3;
  }
  if (bVar10 != 0) {
    fn_0019559c(pbVar5);
  }
  uVar6 = 0;
  do {
    iVar1 = uVar6 * 4;
    iVar2 = uVar6 * 4;
    uVar6 = uVar6 + 1;
    *(undefined4 *)(pbVar5 + -0xb8 + iVar2 + 0xa8) = *(undefined4 *)(iVar4 + iVar1 + 0x54);
  } while ((int)uVar6 < 4);
  if (bVar10 != 0) {
    uVar6 = (uint)*pbVar5;
  }
  if (bVar10 != 0 && uVar6 != 0) {
    fn_00555670(pbVar5,iVar4 + 0x68,bVar10);
  }
  uVar7 = fn_00555744(*(undefined4 *)(param_4 + 0x20),*(undefined2 *)(param_2 + 100));
  uVar8 = 0;
  if (param_3 != 0) {
    uVar8 = fn_00555744(*(undefined4 *)(param_4 + 0x24),*(undefined2 *)(param_3 + 100));
  }
  iVar4 = fn_00194ee4(0x84,4);
  uVar9 = 0;
  if (iVar4 != 0) {
    uVar9 = fn_00554a30(iVar4,uVar7,uVar8,param_4);
  }
  *(undefined4 *)(pbVar5 + -0x14) = uVar9;
  return pbVar5 + -0xb8;
}



void fn_00552f70(int param_1)

{
  bool bVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint unaff_r7;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  float fVar9;
  undefined4 uVar10;
  uint in_s16;
  
  iVar6 = *(int *)(param_1 + 0xa4);
  uVar4 = (uint)*(ushort *)(iVar6 + 0x76);
  if (((uVar4 & 3) < (*(ushort *)(iVar6 + 0x74) & 3)) &&
     ((uVar4 & 0x3f) >> 4 < (*(ushort *)(iVar6 + 0x74) & 0x3f) >> 4)) {
    if (*(int *)(iVar6 + 0x78) + (uVar4 & 3) * 0x20 != 0) {
      fn_00552520();
    }
    uVar2 = *(ushort *)(iVar6 + 0x76) >> 2;
    *(ushort *)(iVar6 + 0x76) =
         (ushort)(((uint)uVar2 | (uint)*(ushort *)(iVar6 + 0x76) << 0x1e) + 0x40000000 >> 0x1e) |
         uVar2 << 2;
    *(byte *)(iVar6 + 0x7c) = *(byte *)(iVar6 + 0x7c) & 0xf7;
    iVar6 = *(int *)(param_1 + 0xa4);
    *(ushort *)(iVar6 + 0x76) =
         (*(ushort *)(iVar6 + 0x76) & 3) << 4 | *(ushort *)(iVar6 + 0x76) & 0xffcf;
    *(byte *)(iVar6 + 0x7c) = *(byte *)(iVar6 + 0x7c) & 0xf7;
    iVar6 = *(int *)(param_1 + 0xa4);
    puVar5 = (uint *)(*(int *)(iVar6 + 0x78) +
                      (*(ushort *)(iVar6 + 0x74) & 3) * 0x20 +
                      ((*(ushort *)(iVar6 + 0x74) & 0xf) >> 2) * 0x14 + (uVar4 & 3) * 8);
    *puVar5 = unaff_r7 & 0xffff0000;
    puVar5[1] = in_s16;
    *(byte *)(iVar6 + 0x7c) = *(byte *)(iVar6 + 0x7c) & 0xf7;
    fn_0019561c(param_1 + 0xb8,*(ushort *)(*(int *)(param_1 + 0xa4) + 0x76) & 3);
    fVar9 = *(float *)(param_1 + 0x3c);
    bVar1 = fVar9 == 0.0;
    if (bVar1) {
      fVar9 = *(float *)(param_1 + 0x40);
    }
    uVar4 = in_fpscr & 0xfffffff | (uint)(bVar1 && fVar9 == 0.0) << 0x1e;
    bVar7 = false;
    if (bVar1) {
      bVar7 = SUB41(uVar4 >> 0x1e,0);
    }
    if ((bVar7) && ((*(ushort *)(*(int *)(param_1 + 0xa4) + 0x76) & 3) == 1)) {
      uVar3 = *(uint *)(*(int *)(*(int *)(param_1 + 0xa4) + 0x78) + 4);
      uVar10 = VectorUnsignedToFloat(uVar3 >> 0x10,(byte)(uVar4 >> 0x16) & 3);
      uVar8 = VectorUnsignedToFloat(uVar3 & 0xffff,(byte)(uVar4 >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x3c) = uVar8;
      *(undefined4 *)(param_1 + 0x40) = uVar10;
      *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) & 0xef | 0x10;
    }
  }
  return;
}


