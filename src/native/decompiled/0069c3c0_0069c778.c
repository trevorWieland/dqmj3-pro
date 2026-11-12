#include "0069c3c0_0069c778.h"



uint * fn_0069c778(undefined4 param_1,uint *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  bool bVar20;
  bool bVar21;
  uint local_100 [11];
  uint local_d4;
  uint local_d0;
  uint local_c8 [35];
  uint local_3c;
  int local_38;
  
  local_c8[8] = 3;
  local_c8[9] = 4;
  local_c8[10] = 5;
  local_c8[0xb] = 6;
  local_c8[0xc] = 0xe;
  local_c8[0xd] = 0;
  local_c8[0xe] = 0xf;
  local_c8[0xf] = 0xd;
  local_c8[0x10] = 0;
  local_c8[0x11] = 1;
  local_c8[0x12] = 2;
  local_c8[0x13] = 3;
  local_c8[0x14] = 4;
  local_c8[0x15] = 5;
  local_c8[0x16] = 9;
  local_c8[0x17] = 8;
  local_100[0] = 0;
  local_100[1] = 1;
  local_100[2] = 2;
  local_100[3] = 3;
  local_100[4] = 4;
  local_100[5] = 5;
  local_100[6] = 8;
  local_100[7] = 9;
  local_100[8] = 0xc;
  local_100[9] = 0xd;
  local_c8[0] = 0;
  local_c8[1] = 1;
  local_c8[2] = 2;
  local_c8[3] = 3;
  local_c8[4] = 4;
  local_c8[5] = 5;
  local_c8[6] = 6;
  local_c8[7] = 7;
  local_c8[0x1e] = 0;
  local_c8[0x1f] = 1;
  local_c8[0x20] = 2;
  local_c8[0x18] = 0xc0;
  local_c8[0x19] = 200;
  local_c8[0x1a] = 0xd0;
  local_c8[0x1b] = 0xd8;
  local_c8[0x1c] = 0xf0;
  local_c8[0x1d] = 0xf8;
  local_3c = 0;
  if ((*(ushort *)(param_3 + 0x76) & 0x1ff) >> 6 < 3) {
    local_d4 = (*(ushort *)(param_3 + 0x76) & 0x1ff) >> 6;
    if (local_d4 == 0) goto LAB_0069c9b0;
  }
  else {
    local_d4 = 3;
  }
  uVar19 = 0;
  local_38 = *(int *)(param_3 + 0x84);
  local_c8[0x21] = 3 - local_d4;
  do {
    pbVar3 = (byte *)(local_38 + uVar19 * 0x16);
    uVar13 = *(uint *)(param_3 + (uint)pbVar3[0x12] * 4 + 0x88);
    uVar18 = *(uint *)(param_3 + (uint)pbVar3[0x13] * 4 + 0x88);
    iVar4 = (3 - local_d4) + uVar19;
    if (uVar19 == 0) {
      bVar1 = pbVar3[4];
      bVar20 = bVar1 == 4;
      if (!bVar20) {
        bVar1 = pbVar3[5];
      }
      bVar21 = bVar1 == 4;
      if (!bVar20 && !bVar21) {
        bVar1 = pbVar3[6];
      }
      if ((bVar20 || bVar21) || bVar1 == 4) {
        bVar1 = pbVar3[7];
        bVar20 = bVar1 != 4;
        if (bVar20) {
          bVar1 = pbVar3[8];
        }
        bVar21 = bVar1 != 4;
        if (bVar20 && bVar21) {
          bVar1 = pbVar3[9];
        }
        if ((!bVar20 || !bVar21) || bVar1 == 4) goto LAB_0069c898;
      }
      iVar6 = 1;
      if (1 < iVar4 + 1) {
        do {
          *param_2 = 0xeef0eef;
          iVar2 = iVar6 + 0x18;
          iVar6 = iVar6 + 1;
          param_2[1] = local_c8[iVar2] | 0x804f0000;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0xffffffff;
          param_2[5] = 0;
          param_2 = param_2 + 6;
        } while (iVar6 < iVar4 + 1);
      }
      iVar4 = 0;
    }
    else if (uVar19 - 1 < 4) {
      local_3c = local_3c |
                 (uint)(pbVar3[0x14] != 0) << (iVar4 + 7U & 0xff) |
                 (uint)(pbVar3[0x15] != 0) << (iVar4 + 0xbU & 0xff);
    }
LAB_0069c898:
    uVar5 = local_c8[iVar4 + 0x18];
    local_d0 = uVar5 | 0x804f0000;
    uVar14 = local_100[pbVar3[10]];
    uVar7 = local_100[pbVar3[0xb]];
    uVar11 = local_100[pbVar3[0xc]];
    uVar19 = uVar19 + 1;
    uVar15 = local_c8[pbVar3[0xd]];
    uVar9 = local_c8[pbVar3[0xf]];
    uVar8 = local_c8[pbVar3[0xe]];
    uVar10 = local_c8[*pbVar3 + 0x10];
    uVar16 = local_c8[pbVar3[1] + 0x10];
    uVar12 = local_c8[pbVar3[0x10] + 0x1e];
    uVar17 = local_c8[pbVar3[0x11] + 0x1e];
    *param_2 = local_c8[pbVar3[6] + 8] << 8 | local_c8[pbVar3[7] + 8] << 0x10 |
               local_c8[pbVar3[4] + 8] | local_c8[pbVar3[5] + 8] << 4 |
               local_c8[pbVar3[8] + 8] << 0x14 | (uint)(byte)local_c8[pbVar3[9] + 8] << 0x18;
    param_2[4] = uVar13 & 0xffffff | uVar18 & 0xff000000;
    param_2[1] = uVar5 | 0x804f0000;
    param_2[2] = uVar11 << 8 | uVar15 << 0xc | uVar14 | uVar7 << 4 | uVar8 << 0x10 | uVar9 << 0x14;
    param_2[3] = uVar10 | uVar16 << 0x10;
    param_2[5] = uVar12 | uVar17 << 0x10;
    param_2 = param_2 + 6;
  } while (uVar19 < local_d4);
LAB_0069c9b0:
  *param_2 = *(uint *)(param_3 + 0x88);
  param_2[1] = 0xf00fd;
  param_2[2] = 1 << local_d4 + 7 | 1 << local_d4 + 0xb | local_3c;
  param_2[3] = 0x200e0;
  return param_2 + 4;
}



undefined4 fn_0069c610(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (((0x17 < *(byte *)(param_1 + 0x30) + 1) || (0x20 < *(byte *)(param_1 + 0x31) + 8)) ||
     (0x20 < *(byte *)(param_1 + 0x33) + 7)) {
    if (*(byte *)(param_1 + 0x30) != 0) {
      param_2 = fn_0054f158(param_1);
    }
    *(undefined1 *)(param_1 + 0x31) = 0;
    *(undefined1 *)(param_1 + 0x32) = 0;
  }
  iVar1 = fn_006e1ee4(param_3);
  uVar2 = *(undefined4 *)(param_3 + 0x48);
  uVar3 = *(undefined4 *)(param_3 + 0x4c);
  uVar4 = *(undefined4 *)(param_3 + 0x50);
  uVar5 = *(undefined4 *)(param_3 + 0x54);
  uVar6 = *(undefined4 *)(param_3 + 0x58);
  uVar7 = *(undefined4 *)(param_3 + 0x5c);
  uVar8 = *(undefined4 *)(param_3 + 0x60);
  uVar9 = *(undefined4 *)(param_3 + 100);
  *(undefined4 *)(param_4 + 0x74) = uVar2;
  *(undefined4 *)(param_4 + 0x78) = uVar3;
  *(undefined4 *)(param_4 + 0x7c) = uVar4;
  *(undefined4 *)(param_4 + 0x80) = uVar5;
  *(undefined4 *)(param_4 + 0x84) = uVar6;
  *(undefined4 *)(param_4 + 0x88) = uVar7;
  *(undefined4 *)(param_4 + 0x8c) = uVar8;
  *(undefined4 *)(param_4 + 0x90) = uVar9;
  uVar4 = *(undefined4 *)(param_3 + 0x6c);
  uVar5 = *(undefined4 *)(param_3 + 0x70);
  uVar6 = *(undefined4 *)(param_3 + 0x74);
  *(undefined4 *)(param_4 + 0x94) = *(undefined4 *)(param_3 + 0x68);
  *(undefined4 *)(param_4 + 0x98) = uVar4;
  *(undefined4 *)(param_4 + 0x9c) = uVar5;
  *(undefined4 *)(param_4 + 0xa0) = uVar6;
  *(undefined1 *)(param_4 + 0xba) = 0;
  fn_0054e2f0(param_1,0);
  if ((*(ushort *)(iVar1 + 0x76) & 0x1c0) == 0) {
    uVar4 = fn_0054df04(param_1,param_2,iVar1);
  }
  else {
    uVar4 = fn_0069caa4();
  }
  uVar4 = fn_0054e7a0(param_1,uVar4,iVar1);
  uVar4 = fn_0054ec64(param_1,uVar4,param_4,param_3,iVar1,*(undefined4 *)(param_3 + 0xbc));
  fn_005511c8(param_1,param_3 + 0x48);
  fn_006e1f68(param_3);
  local_28 = uVar2;
  uStack_24 = uVar3;
  fn_00551268(param_1,param_3 + 0x3c,&local_28);
  fn_0054e354(param_1,param_3 + 0xa8,*(undefined1 *)(param_3 + 0x46));
  fn_00560974(param_1);
  return uVar4;
}



undefined4 * fn_0069c558(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  param_1[2] = 0xffffffff;
  *param_1 = &DAT_00851408;
  param_1[1] = 0;
  param_1[3] = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = 0;
    DAT_008f9e30 = 0;
    DAT_008f9e34 = 0;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[7] = DAT_008f9e2c;
  param_1[8] = uVar1;
  param_1[9] = uVar2;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  return param_1;
}



void fn_0069c510(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4 + 0x28);
      if (iVar1 != 0) {
        bVar3 = *(byte *)(iVar1 + 0x44) & 0xfe;
        if (iVar2 < param_2) {
          bVar3 = bVar3 | 1;
        }
        *(byte *)(iVar1 + 0x44) = bVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0x14));
  }
  return;
}



void fn_0069c3c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  byte *pbVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  
  if (param_2 < 2) {
    param_2 = 0;
  }
  fVar6 = 0.0;
  iVar5 = 0;
  *(int *)(param_1 + 0x14) = param_2;
  fVar7 = fVar6;
LAB_0069c3e8:
  do {
    iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x18),(&DAT_0088fe1c)[iVar5]);
    if (iVar1 != 0) {
      pbVar3 = (byte *)(iVar1 + 0x44);
      if (iVar5 < *(int *)(param_1 + 0x14)) {
        *pbVar3 = *pbVar3 & 0xfe | 1;
      }
      else {
        *pbVar3 = *pbVar3 & 0xfe;
      }
      if (iVar5 == 0) {
        fVar6 = *(float *)(iVar1 + 0x1c);
        iVar5 = 1;
        goto LAB_0069c3e8;
      }
      if (iVar5 == 1) {
        fVar7 = *(float *)(iVar1 + 0x1c);
        iVar5 = 2;
        goto LAB_0069c3e8;
      }
    }
    iVar5 = iVar5 + 1;
    if (9 < iVar5) {
      iVar5 = 0;
      if (0 < *(int *)(param_1 + 0x14)) {
        do {
          uVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x18),(&DAT_0088fe44)[iVar5]);
          iVar1 = iVar5 * 4;
          iVar5 = iVar5 + 1;
          *(undefined4 *)(param_1 + iVar1 + 0x28) = uVar2;
        } while (iVar5 < *(int *)(param_1 + 0x14));
      }
      iVar5 = *(int *)(param_1 + 0x18);
      if (iVar5 != 0) {
        uVar4 = *(undefined4 *)(param_1 + 0x20);
        uVar2 = *(undefined4 *)(param_1 + 0x24);
        fVar7 = (float)VectorSignedToFloat((10 - *(int *)(param_1 + 0x14)) *
                                           (int)((fVar7 - fVar6) * 0.5),(byte)(in_fpscr >> 0x16) & 3
                                          );
        *(float *)(iVar5 + 0x1c) = *(float *)(param_1 + 0x1c) + fVar7;
        *(undefined4 *)(iVar5 + 0x24) = uVar2;
        *(undefined4 *)(iVar5 + 0x20) = uVar4;
        *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
      }
      return;
    }
  } while( true );
}


