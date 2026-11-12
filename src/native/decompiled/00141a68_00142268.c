#include "00141a68_00142268.h"



undefined8 fn_00142268(undefined4 *param_1)

{
  *param_1 = &DAT_008586fc;
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined1 *)((int)param_1 + 5) = 1;
  return CONCAT44(0x400021c,param_1);
}



void fn_0014224c(undefined4 *param_1)

{
  if (*(char *)(param_1 + 10) != '\0') {
    *param_1 = 0;
    *(undefined1 *)(param_1 + 10) = 0;
  }
  return;
}



void fn_00141b28(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  char cVar17;
  char cVar18;
  int iVar19;
  bool bVar20;
  byte bVar21;
  uint in_fpscr;
  undefined4 uVar22;
  undefined4 uVar23;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint local_74;
  int local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 uStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined1 auStack_54 [28];
  undefined4 local_38;
  undefined4 local_34;
  char local_30 [12];
  
  iVar4 = param_3 + *(int *)(param_3 + 4) * 4;
  iVar5 = *(int *)(param_3 + 8);
  *param_1 = param_2;
  iVar5 = iVar5 + param_3;
  uVar6 = *(uint *)(iVar4 + 0x14);
  iVar9 = (uVar6 >> 7) * 0x84;
  if ((uVar6 & 0x7f) != 0) {
    iVar9 = iVar9 + ((uVar6 & 0x7f) + 4 & 0xfffffffe);
  }
  uVar6 = *(uint *)(iVar4 + 0x1c);
  iVar10 = (uVar6 >> 7) * 0x84;
  if ((uVar6 & 0x7f) != 0) {
    iVar10 = iVar10 + ((uVar6 & 0x7f) + 4 & 0xfffffffe);
  }
  iVar9 = (iVar9 + iVar10 + *(int *)(iVar5 + 0x1c) * 6) * 4 + 0x358;
  fn_00150ce0(param_1 + 1,param_2,iVar9,1);
  param_2 = param_2 + iVar9;
  fn_00150ce0(param_1 + 5,param_2,0x28,1);
  local_70 = param_2 + 0x28;
  iVar9 = 0;
  do {
    iVar19 = 0;
    iVar10 = 6;
    puVar13 = &DAT_007d8384;
    do {
      uVar6 = *puVar13;
      puVar11 = (undefined4 *)(local_70 + iVar9 * 0x60 + iVar19 * 0x10);
      iVar19 = iVar19 + 1;
      uVar23 = VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
      uVar22 = VectorSignedToFloat(uVar6,(byte)(in_fpscr >> 0x16) & 3);
      *puVar11 = uVar23;
      puVar11[1] = uVar22;
      if ((uVar6 & 1) == 0) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0x3f800000;
      }
      puVar11[2] = uVar22;
      if (uVar6 + 1 < 3) {
        uVar22 = 0;
      }
      else {
        uVar22 = 0xbf800000;
      }
      iVar10 = iVar10 + -1;
      puVar11[3] = uVar22;
      puVar13 = puVar13 + 1;
    } while (iVar10 != 0);
    iVar9 = iVar9 + 1;
  } while (iVar9 < 0x17);
  fn_0015fa54(local_70,0x8a0);
  fn_00150cb4(param_1 + 1,&DAT_007d81ac,0x140);
  uVar15 = 0;
  iVar9 = *(int *)(iVar4 + 0x10) + iVar4 + 8;
  uVar6 = *(uint *)(iVar4 + 0x14);
  if (uVar6 != 0) {
    do {
      uVar16 = uVar6 - uVar15;
      local_7c = 0xf02cb;
      if (0x7f < uVar16) {
        uVar16 = 0x80;
      }
      local_78 = *(undefined4 *)(iVar9 + uVar15 * 4);
      local_74 = uVar16 * 0x100000 - 0x100000 | 0xf02cc;
      local_80 = uVar15;
      fn_00150cb4(param_1 + 1,&local_80,0x10);
      fn_00150cb4(param_1 + 1,iVar9 + uVar15 * 4 + 4,uVar16 * 4 + -4);
      fn_00150d0c(param_1 + 1,8);
      uVar6 = *(uint *)(iVar4 + 0x14);
      uVar15 = uVar15 + uVar16;
    } while (uVar15 < uVar6);
  }
  fn_00150cb4(param_1 + 1,&DAT_007d7ff4,8);
  uVar15 = 0;
  iVar9 = *(int *)(iVar4 + 0x18) + iVar4 + 8;
  uVar6 = *(uint *)(iVar4 + 0x1c);
  if (uVar6 != 0) {
    do {
      uVar16 = uVar6 - uVar15;
      local_7c = 0xf02d5;
      if (0x7f < uVar16) {
        uVar16 = 0x80;
      }
      local_74 = uVar16 * 0x100000 - 0x100000 | 0xf02d6;
      local_78 = *(undefined4 *)(iVar9 + uVar15 * 8);
      local_80 = uVar15;
      fn_00150cb4(param_1 + 1,&local_80,0x10);
      uVar6 = 1;
      if (1 < uVar16) {
        do {
          fn_00150cb4(param_1 + 1,iVar9 + (uVar15 + uVar6) * 8,4);
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar16);
      }
      fn_00150d0c(param_1 + 1,8);
      uVar6 = *(uint *)(iVar4 + 0x1c);
      uVar15 = uVar15 + uVar16;
    } while (uVar15 < uVar6);
  }
  iVar9 = *(int *)(iVar5 + 0x18);
  uVar6 = 0;
  if (*(int *)(iVar5 + 0x1c) != 0) {
    do {
      local_94 = 0x803f02c0;
      local_84 = 0;
      iVar4 = iVar9 + iVar5 + uVar6 * 0x14;
      local_98 = *(ushort *)(iVar4 + 2) & 0xff;
      local_90 = (*(uint *)(iVar4 + 0xc) & 0xffffff) >> 0x10 | *(int *)(iVar4 + 0x10) << 8;
      local_8c = *(int *)(iVar4 + 0xc) << 0x10 | (*(uint *)(iVar4 + 8) & 0xffffff) >> 8;
      local_88 = *(uint *)(iVar4 + 4) & 0xffffff | *(int *)(iVar4 + 8) << 0x18;
      fn_00150cb4(param_1 + 1,&local_98,0x18);
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(iVar5 + 0x1c));
  }
  uVar6 = fn_0015fa88(local_70);
  local_7c = 0;
  local_78 = 0x10100000;
  local_90 = (uVar6 >> 4) << 1;
  local_8c = 0x826f0200;
  local_88 = 0xf;
  local_80 = uVar6 - (uVar6 & 0xfffffff0) & 0xfffffff;
  local_84 = 0;
  fn_00150cb4(param_1 + 1,&local_90,0x1c);
  fn_00150cb4(param_1 + 1,&DAT_007d839c,0x94);
  local_98 = 0;
  local_94 = 0x80229;
  local_90 = 0xa0000000;
  local_8c = 0xb02b9;
  local_84 = 0xf02ba;
  local_88 = *(uint *)(iVar5 + 8) | 0x7fff0000;
  fn_00150cb4(param_1 + 1,&local_98,0x18);
  uVar15 = 0;
  local_38 = 0;
  local_34 = 0;
  do {
    iVar9 = uVar15 * 4;
    local_30[uVar15] = '\0';
    uVar15 = uVar15 + 1;
    *(undefined4 *)(auStack_54 + iVar9 + -4) = 0x1f1f1f1f;
  } while (uVar15 < 7);
  iVar9 = *(int *)(iVar5 + 0x28);
  uVar16 = 0;
  uVar15 = *(uint *)(iVar5 + 0x2c);
  bVar20 = uVar15 == 7;
  if (uVar15 < 8) {
    bVar20 = uVar15 == 0;
  }
  if (!bVar20) {
    do {
      puVar7 = (ushort *)(iVar9 + iVar5 + uVar16 * 8);
      if (*puVar7 != 9) {
        local_30[puVar7[1]] = '\x01';
        uVar1 = *puVar7;
        uVar2 = puVar7[2];
        uVar3 = puVar7[1];
        auStack_54[uVar1 + 0x1c] = (char)uVar2;
        cVar17 = (&DAT_007d7ffc)[uVar1];
        iVar4 = (uint)uVar3 * 4;
        if ((uVar2 & 1) != 0) {
          auStack_54[iVar4 + -4] = cVar17;
          cVar17 = cVar17 + '\x01';
        }
        cVar18 = cVar17;
        if ((puVar7[2] & 2) != 0) {
          cVar18 = cVar17 + '\x01';
          auStack_54[iVar4 + -3] = cVar17;
        }
        cVar17 = cVar18;
        if ((puVar7[2] & 4) != 0) {
          cVar17 = cVar18 + '\x01';
          auStack_54[iVar4 + -2] = cVar18;
        }
        if ((puVar7[2] & 8) != 0) {
          auStack_54[iVar4 + -1] = cVar17;
        }
      }
      uVar15 = *(uint *)(iVar5 + 0x2c);
      uVar16 = uVar16 + 1;
      if (7 < uVar15) {
        uVar15 = 7;
      }
    } while (uVar16 < uVar15);
  }
  local_60 = 0;
  iVar9 = 0;
  iVar4 = 3;
  pcVar8 = (char *)((int)&local_34 + 3);
  do {
    if (local_30[0] != '\0') {
      local_60 = local_60 + 1;
    }
    local_30[0] = pcVar8[3];
    if (pcVar8[2] != '\0') {
      iVar9 = iVar9 + 1;
    }
    iVar4 = iVar4 + -1;
    pcVar8 = pcVar8 + 2;
  } while (iVar4 != 0);
  local_60 = local_60 + iVar9;
  local_8c = 0xf02bd;
  local_84 = 0xf0251;
  local_80 = 0;
  local_7c = 0xf0252;
  local_78 = 0;
  local_74 = 0xf0242;
  if (local_30[6] != '\0') {
    local_60 = local_60 + 1;
  }
  uStack_6c = 0xf024a;
  uStack_64 = 0x1025e;
  uStack_5c = 0xf004f;
  local_88 = local_60 + -1;
  local_90 = (uint)*(ushort *)(iVar5 + 0x12);
  local_70 = local_88;
  local_68 = local_88;
  fn_00150cb4(param_1 + 1,&local_90,0x38);
  local_94 = 0x806f0050;
  local_98 = local_58;
  fn_00150cb4(param_1 + 1,&local_98,8);
  fn_00150cb4(param_1 + 1,auStack_54,0x18);
  bVar21 = (local_38 & 1) != 0;
  if ((local_38 & 2) != 0) {
    bVar21 = bVar21 + 1;
  }
  if ((local_38 & 4) != 0) {
    bVar21 = bVar21 + 1;
  }
  if ((local_38 & 8) != 0) {
    bVar21 = bVar21 + 1;
  }
  uVar15 = local_34 >> 0x18;
  bVar20 = uVar15 == 0;
  if (bVar20) {
    uVar15 = local_38 >> 8 & 0xff;
  }
  if (!bVar20 || uVar15 != 0) {
    uVar15 = 1;
  }
  uVar12 = (uint)(local_38 >> 0x18 != 0);
  uVar14 = (uint)((local_34 >> 8 & 0xff) != 0);
  uVar16 = (uint)((local_34 & 0xff) != 0);
  local_88 = (uint)(2 < bVar21) | (uint)(((unsigned int)(local_38) >> 16) & 0xff != '\0') << 1 | uVar12 << 8 | uVar14 << 9 |
             (uint)(((unsigned int)(local_34) >> 16) & 0xff != '\0') << 10 | uVar16 << 0x10 | uVar15 << 0x18;
  local_8c = 0xf0064;
  local_90 = (uint)(((uVar12 != 0 || uVar14 != 0) || (((unsigned int)(local_34) >> 16) & 0xff != '\0') != 0) || uVar16 != 0);
  local_84 = 0xf006f;
  fn_00150cb4(param_1 + 1,&local_90,0x10);
  fn_00150cb4(param_1 + 1,&DAT_007d8034,0x98);
  fn_00150cb4(param_1 + 1,&DAT_007d80cc,0x30);
  fn_00150cb4(param_1 + 1,&DAT_007d812c,0x18);
  param_1[9] = uVar6 & 0xfffffff0;
  fn_00150cb4(param_1 + 5,&DAT_007d8144,0x28);
  return;
}



void fn_00141a68(int param_1,int *param_2,undefined1 *param_3,undefined4 param_4)

{
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(int **)(param_1 + 8) = param_2;
  *(undefined1 **)(param_1 + 0xc) = param_3;
  if (*param_2 == 0x554e4643) {
    *(undefined1 *)(param_1 + 0x2c) = *param_3;
    *(undefined1 *)(param_1 + 0x2d) = param_3[0x14];
    *(undefined1 *)(param_1 + 0x2e) = param_3[0x15];
    *(undefined1 *)(param_1 + 0x2f) = param_3[0x16];
    *(short *)(param_1 + 0x30) = (short)(char)param_3[1];
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_3 + 2);
    *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_3 + 4);
    *(undefined1 *)(param_1 + 0x36) = param_3[6];
    *(undefined1 *)(param_1 + 0x37) = param_3[7];
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0xc);
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_3 + 0x10);
    *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(*(int *)(param_3 + 8) + 8);
    *(short *)(param_1 + 0x46) = (short)*(char *)(*(int *)(param_3 + 8) + 2);
    *(int *)(param_1 + 0xc) = param_1 + 0x2c;
    return;
  }
  *(ushort *)(param_1 + 0x44) = (ushort)*(byte *)(*(int *)(param_3 + 0xc) + 2);
  *(undefined2 *)(param_1 + 0x46) = *(undefined2 *)(*(int *)(param_3 + 0xc) + 8);
  return;
}


