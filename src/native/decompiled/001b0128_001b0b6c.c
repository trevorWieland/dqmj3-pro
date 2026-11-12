#include "001b0128_001b0b6c.h"



undefined4 fn_001b0b6c(int param_1,int param_2,int *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint local_20;
  
  local_20 = param_4;
  iVar1 = fn_00191f08();
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = 0;
  if (param_3 != (int *)0x0) {
    iVar1 = *param_3;
  }
  switch(param_2) {
  case 0:
    if (param_1 == 0) {
      return 2;
    }
    if (99 < param_4) {
      return 2;
    }
    iVar1 = fn_001b84b8(param_4,1);
    if (iVar1 == 0) {
      return 6;
    }
    fn_001b1548(param_1,iVar1,1,iVar1 + 0x48);
    iVar1 = fn_001b1e90(param_1,1);
joined_r0x001b0d78:
    if (iVar1 == 0) {
      return 6;
    }
    break;
  default:
    return 1;
  case 2:
    if (5 < param_4) {
      return 2;
    }
    iVar1 = fn_001bf140(&DAT_008e970c,param_4);
    fn_001b1548(param_1,iVar1,1,iVar1 + 0x48);
    break;
  case 3:
    if (param_3 == (int *)0x0) {
      return 2;
    }
    if (iVar1 != 0x444d4643) {
      return 2;
    }
    if ((param_4 < *(ushort *)(param_3 + 4)) && (*(short *)((int)param_3 + 0x12) != 0)) {
      iVar2 = param_3[3] + param_4 * 0x5c;
      iVar1 = fn_001aff7c(iVar2 + 0xc);
      if (iVar1 == 0) {
        fn_001b1548(param_1,iVar2,1,iVar2 + 0x48);
        break;
      }
    }
    goto LAB_001b0cc4;
  case 4:
  case 5:
    if (param_3 == (int *)0x0 || iVar1 == 0x444d4643) {
      return 2;
    }
    param_3 = param_3 + param_4 * 0x18;
    iVar1 = fn_001b4c18(0,param_3,0x60);
    if (iVar1 != 0) {
      return 6;
    }
    if ((param_2 == 4) && (iVar1 = fn_001ae8fc(&local_20,param_3 + 3), iVar1 != 0)) {
      if (param_1 == 0) {
        return 2;
      }
      if (99 < (local_20 & 0xffff)) {
        return 2;
      }
      iVar1 = fn_001b84b8(local_20 & 0xffff,1);
      if (iVar1 == 0) {
        return 6;
      }
      fn_001b1548(param_1,iVar1,1,iVar1 + 0x48);
      iVar1 = fn_001b1e90(param_1,1);
      goto joined_r0x001b0d78;
    }
    fn_001b1548(param_1,param_3,1,param_3 + 0x12);
  }
  uVar3 = 0;
  iVar1 = fn_001aff7c(param_1 + 0x108);
  if ((iVar1 != 0) || (iVar1 = fn_001b1e90(param_1,1), iVar1 == 0)) {
LAB_001b0cc4:
    uVar3 = 6;
  }
  return uVar3;
}



void fn_001b03f0(uint *param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ushort uVar16;
  ushort uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ushort uVar21;
  ushort uVar22;
  ushort uVar23;
  ushort uVar24;
  ushort uVar25;
  ushort uVar26;
  ushort uVar27;
  ushort uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ushort uVar34;
  ushort uVar35;
  uint uVar36;
  
  *(char *)param_1 = (char)*param_3;
  if (*(char *)((int)param_3 + 0xf1) == '\0') {
    uVar29 = *param_1 & 0xfffffeff;
  }
  else {
    uVar29 = *param_1 | 0x100;
  }
  *param_1 = uVar29;
  if (*(char *)((int)param_3 + 0xf2) == '\0') {
    uVar29 = uVar29 & 0xfffffdff;
  }
  else {
    uVar29 = uVar29 | 0x200;
  }
  *param_1 = uVar29;
  if (*(char *)((int)param_3 + 0xf3) == '\0') {
    uVar34 = (ushort)param_1[0xc] & 0xfffe;
  }
  else {
    uVar34 = (ushort)param_1[0xc] | 1;
  }
  *(ushort *)(param_1 + 0xc) = uVar34;
  uVar36 = (param_3[0x3d] & 3) << 10;
  *param_1 = uVar29 & 0xfffff3ff | uVar36;
  uVar30 = (param_3[0x3e] & 3) << 0xc;
  *param_1 = uVar30 | uVar29 & 0xffff03ff | uVar36;
  uVar31 = (param_3[0x3f] & 0xf) << 0x10;
  *param_1 = uVar31 | uVar30 | uVar29 & 0xfff003ff | uVar36;
  uVar32 = (param_3[0x40] & 0xf) << 0x14;
  *param_1 = uVar32 | uVar31 | uVar30 | uVar29 & 0xff0003ff | uVar36;
  uVar33 = (param_3[0x45] & 0xf) << 0x18;
  *param_1 = uVar33 | uVar32 | uVar31 | uVar30 | uVar29 & 0xf00003ff | uVar36;
  *param_1 = (param_3[0x41] & 7) << 0x1c |
             uVar33 | uVar32 | uVar31 | uVar30 | uVar29 & 0x3ff | uVar36;
  uVar29 = param_3[0x47];
  param_1[1] = param_3[0x46];
  param_1[2] = uVar29;
  fn_006f94f4(param_1 + 3,param_3 + 0x42);
  *(undefined2 *)((int)param_1 + 0x16) = 0;
  uVar34 = (ushort)param_1[6];
  uVar28 = (ushort)param_3[0x38] & 1;
  *(ushort *)(param_1 + 6) = uVar28 | uVar34 & 0xfffe;
  if (param_4 == 0) {
    uVar28 = uVar28 | uVar34 & 0xfc00;
  }
  else {
    uVar1 = (ushort)((param_3[0x39] & 0xf) << 1);
    *(ushort *)(param_1 + 6) = uVar28 | uVar34 & 0xffe0 | uVar1;
    uVar28 = (ushort)((param_3[0x3a] & 0x1f) << 5) | uVar28 | uVar34 & 0xfc00 | uVar1;
  }
  *(ushort *)(param_1 + 6) = uVar28;
  uVar2 = (ushort)((param_3[0x3b] & 0xf) << 10);
  *(ushort *)(param_1 + 6) = uVar2 | uVar28 & 0xc3ff;
  uVar35 = (*(byte *)(param_3 + 0x3c) & 1) << 0xe;
  *(ushort *)(param_1 + 6) = uVar2 | uVar28 & 0x83ff | uVar35;
  *(undefined4 *)((int)param_1 + 0x1a) = param_3[0x2d];
  *(undefined4 *)((int)param_1 + 0x1e) = param_3[0x2e];
  *(undefined4 *)((int)param_1 + 0x22) = param_3[0x2f];
  *(undefined4 *)((int)param_1 + 0x26) = param_3[0x30];
  *(undefined4 *)((int)param_1 + 0x2a) = param_3[0x31];
  *(char *)((int)param_1 + 0x2e) = (char)param_3[0x2b];
  *(char *)((int)param_1 + 0x2f) = (char)param_3[0x2c];
  uVar34 = (ushort)param_1[0xc];
  uVar1 = (ushort)((param_3[1] & 0xf) << 1);
  *(ushort *)(param_1 + 0xc) = uVar34 & 0xffe1 | uVar1;
  uVar3 = (ushort)((param_3[2] & 7) << 5);
  *(ushort *)(param_1 + 0xc) = uVar34 & 0xff01 | uVar1 | uVar3;
  uVar6 = (ushort)((param_3[3] & 0xf) << 8);
  *(ushort *)(param_1 + 0xc) = uVar34 & 0xf001 | uVar1 | uVar3 | uVar6;
  *(ushort *)(param_1 + 0xc) =
       uVar34 & 1 | uVar1 | uVar3 | uVar6 | (ushort)((param_3[4] & 0xf) << 0xc);
  *(char *)((int)param_1 + 0x32) = (char)param_3[5];
  uVar34 = *(ushort *)((int)param_1 + 0x32);
  uVar4 = (ushort)((param_3[6] & 7) << 8);
  *(ushort *)((int)param_1 + 0x32) = uVar34 & 0xf8ff | uVar4;
  uVar5 = (ushort)((param_3[7] & 1) << 0xb);
  *(ushort *)((int)param_1 + 0x32) = uVar5 | uVar34 & 0xf0ff | uVar4;
  uVar1 = (ushort)param_1[0xd];
  uVar6 = (ushort)param_3[8] & 0x3f;
  *(ushort *)(param_1 + 0xd) = uVar1 & 0xffc0 | uVar6;
  uVar3 = (ushort)((param_3[9] & 7) << 6);
  *(ushort *)(param_1 + 0xd) = uVar1 & 0xfe00 | uVar6 | uVar3;
  uVar7 = (ushort)((param_3[10] & 0xf) << 9);
  *(ushort *)(param_1 + 0xd) = uVar7 | uVar1 & 0xe000 | uVar6 | uVar3;
  *(ushort *)(param_1 + 0xd) = uVar7 | uVar6 | uVar3 | (ushort)((param_3[0xb] & 7) << 0xd);
  uVar1 = *(ushort *)((int)param_1 + 0x36);
  uVar7 = (ushort)param_3[0xc] & 0x1f;
  *(ushort *)((int)param_1 + 0x36) = uVar1 & 0xffe0 | uVar7;
  uVar8 = (ushort)((param_3[0xd] & 0xf) << 5);
  *(ushort *)((int)param_1 + 0x36) = uVar1 & 0xfe00 | uVar7 | uVar8;
  uVar9 = (ushort)((param_3[0xe] & 0x1f) << 9);
  *(ushort *)((int)param_1 + 0x36) = uVar1 & 0xc000 | uVar7 | uVar8 | uVar9;
  uVar1 = (ushort)param_1[0xe];
  uVar3 = (ushort)param_3[0xf] & 0x1f;
  *(ushort *)(param_1 + 0xe) = uVar1 & 0xffe0 | uVar3;
  uVar23 = (ushort)((param_3[0x10] & 7) << 5);
  *(ushort *)(param_1 + 0xe) = uVar23 | uVar1 & 0xff00 | uVar3;
  uVar10 = (ushort)((param_3[0x11] & 0xf) << 8);
  *(ushort *)(param_1 + 0xe) = uVar23 | uVar1 & 0xf000 | uVar3 | uVar10;
  uVar19 = (ushort)((param_3[0x12] & 7) << 0xc);
  *(ushort *)(param_1 + 0xe) = uVar23 | uVar1 & 0x8000 | uVar3 | uVar10 | uVar19;
  uVar1 = *(ushort *)((int)param_1 + 0x3a);
  uVar11 = (ushort)param_3[0x13] & 0x1f;
  *(ushort *)((int)param_1 + 0x3a) = uVar1 & 0xffe0 | uVar11;
  uVar12 = (ushort)((param_3[0x14] & 0xf) << 5);
  *(ushort *)((int)param_1 + 0x3a) = uVar1 & 0xfe00 | uVar11 | uVar12;
  uVar13 = (ushort)((param_3[0x15] & 0x1f) << 9);
  *(ushort *)((int)param_1 + 0x3a) = uVar1 & 0xc000 | uVar11 | uVar12 | uVar13;
  uVar1 = (ushort)param_1[0xf];
  uVar14 = (ushort)param_3[0x16] & 0x1f;
  *(ushort *)(param_1 + 0xf) = uVar1 & 0xffe0 | uVar14;
  uVar15 = (ushort)((param_3[0x17] & 0xf) << 5);
  *(ushort *)(param_1 + 0xf) = uVar1 & 0xfe00 | uVar14 | uVar15;
  uVar16 = (ushort)((param_3[0x18] & 0x1f) << 9);
  *(ushort *)(param_1 + 0xf) = uVar16 | uVar1 & 0xc000 | uVar14 | uVar15;
  uVar1 = *(ushort *)((int)param_1 + 0x3e);
  uVar6 = (ushort)param_3[0x19] & 0x3f;
  *(ushort *)((int)param_1 + 0x3e) = uVar1 & 0xffc0 | uVar6;
  uVar17 = (ushort)((param_3[0x1a] & 7) << 6);
  *(ushort *)((int)param_1 + 0x3e) = uVar1 & 0xfe00 | uVar6 | uVar17;
  uVar18 = (ushort)((param_3[0x1b] & 0xf) << 9);
  *(ushort *)((int)param_1 + 0x3e) = uVar1 & 0xe000 | uVar6 | uVar17 | uVar18;
  *(ushort *)((int)param_1 + 0x3e) = uVar6 | uVar17 | uVar18 | (ushort)((param_3[0x1c] & 7) << 0xd);
  uVar29 = param_1[0x10];
  uVar6 = (ushort)param_3[0x1d] & 0x1f;
  *(ushort *)(param_1 + 0x10) = (ushort)uVar29 & 0xffe0 | uVar6;
  uVar20 = (ushort)((param_3[0x1e] & 7) << 5);
  *(ushort *)(param_1 + 0x10) = uVar20 | (ushort)uVar29 & 0xff00 | uVar6;
  uVar1 = *(ushort *)((int)param_1 + 0x42);
  uVar17 = (ushort)param_3[0x1f] & 7;
  *(ushort *)((int)param_1 + 0x42) = uVar1 & 0xfff8 | uVar17;
  uVar24 = (ushort)((param_3[0x20] & 7) << 3);
  *(ushort *)((int)param_1 + 0x42) = uVar1 & 0xffc0 | uVar17 | uVar24;
  uVar25 = (ushort)((param_3[0x21] & 0xf) << 6);
  *(ushort *)((int)param_1 + 0x42) = uVar1 & 0xfc00 | uVar17 | uVar24 | uVar25;
  uVar21 = (ushort)((param_3[0x22] & 0x1f) << 10);
  *(ushort *)((int)param_1 + 0x42) = uVar1 & 0x8000 | uVar17 | uVar24 | uVar25 | uVar21;
  uVar1 = (ushort)param_1[0x11];
  uVar18 = (ushort)param_3[0x23] & 0xf;
  *(ushort *)(param_1 + 0x11) = uVar1 & 0xfff0 | uVar18;
  uVar26 = (ushort)((param_3[0x24] & 7) << 4);
  *(ushort *)(param_1 + 0x11) = uVar1 & 0xff80 | uVar18 | uVar26;
  uVar22 = (ushort)((param_3[0x25] & 0xf) << 7);
  *(ushort *)(param_1 + 0x11) = uVar1 & 0xf800 | uVar18 | uVar26 | uVar22;
  *(ushort *)(param_1 + 0x11) = uVar18 | uVar26 | uVar22 | (ushort)(param_3[0x26] << 0xb);
  uVar1 = *(ushort *)((int)param_1 + 0x46);
  uVar18 = (ushort)param_3[0x27] & 1;
  *(ushort *)((int)param_1 + 0x46) = uVar1 & 0xfffe | uVar18;
  uVar26 = (ushort)((param_3[0x28] & 0xf) << 1);
  *(ushort *)((int)param_1 + 0x46) = uVar1 & 0xffe0 | uVar18 | uVar26;
  uVar27 = (ushort)((param_3[0x29] & 0x1f) << 5);
  *(ushort *)((int)param_1 + 0x46) = uVar1 & 0xfc00 | uVar18 | uVar26 | uVar27;
  uVar22 = (ushort)((param_3[0x2a] & 0x1f) << 10);
  *(ushort *)((int)param_1 + 0x46) = uVar1 & 0x8000 | uVar18 | uVar26 | uVar27 | uVar22;
  *(ushort *)(param_1 + 6) = uVar2 | uVar28 & 0x3ff | uVar35;
  *(ushort *)((int)param_1 + 0x32) = uVar5 | uVar34 & 0xff | uVar4;
  *(ushort *)((int)param_1 + 0x36) = uVar7 | uVar8 | uVar9;
  *(ushort *)(param_1 + 0xe) = uVar23 | uVar3 | uVar10 | uVar19;
  *(ushort *)((int)param_1 + 0x3a) = uVar11 | uVar12 | uVar13;
  *(ushort *)(param_1 + 0xf) = uVar16 | uVar14 | uVar15;
  *(ushort *)(param_1 + 0x10) = uVar20 | uVar6;
  *(ushort *)((int)param_1 + 0x42) = uVar17 | uVar24 | uVar25 | uVar21;
  *(ushort *)((int)param_1 + 0x46) = uVar18 | uVar26 | uVar27 | uVar22;
  if (param_2 != (undefined4 *)0x0) {
    *param_2 = *(undefined4 *)((int)param_3 + 0xca);
    param_2[1] = *(undefined4 *)((int)param_3 + 0xce);
    param_2[2] = *(undefined4 *)((int)param_3 + 0xd2);
    param_2[3] = *(undefined4 *)((int)param_3 + 0xd6);
    param_2[4] = *(undefined4 *)((int)param_3 + 0xda);
  }
  return;
}



undefined4 fn_001b0398(void)

{
  int iVar1;
  
  if (DAT_008bf50f == '\0') {
    iVar1 = fn_0044cdd0((char *)&DAT_007e09fc,0xf000000b);
    if (iVar1 < 0) {
      if (iVar1 < 0) {
        fn_0015e590(iVar1,0x1b03dc);
      }
      return 0xb;
    }
    DAT_008bf50f = '\x01';
  }
  return 0;
}



undefined4 fn_001b02c8(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  if (DAT_008bf5e8 == '\0') {
    uVar1 = fn_0044ce40(0,param_2,0x10202,0x4009b,0,2,2);
    if (0x80 < uVar1) {
      fn_00146594();
    }
    iVar2 = fn_0044c79c((char *)&DAT_007e1848,0,0x10202,0x4009b,0,2,2,&DAT_008e998c,0x80,0);
    if (iVar2 < 0) {
      if (iVar2 < 0) {
        fn_0015e590(iVar2,0x1b0374);
      }
      return 0xb;
    }
    DAT_008bf5e8 = '\x01';
  }
  return 0;
}



undefined4 fn_001b0128(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_130 [264];
  undefined1 auStack_28 [28];
  
  uVar2 = 0;
  iVar1 = fn_001b4c18(0,param_1,0x60);
  if (iVar1 == 0) {
    fn_001b1548(auStack_130,param_1,1,param_1 + 0x48);
    iVar1 = fn_001aff7c(auStack_28);
    if ((iVar1 == 0) && (iVar1 = fn_001b00bc(auStack_28), iVar1 == 0)) {
      uVar2 = fn_001b1e90(auStack_130,1);
    }
  }
  return uVar2;
}


