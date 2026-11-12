#include "0054df04_0054e354.h"



void fn_0054e354(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  float local_58 [17];
  
  bVar1 = true;
  fVar6 = (float)VectorUnsignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  fVar6 = fVar6 * 0.003921569;
  if (param_2 != 0) {
    iVar2 = 0;
    do {
      uVar3 = *(uint *)(param_2 + iVar2 * 4);
      if ((uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18
          ) == 0xffffffff) {
        if (!bVar1) {
          local_58[iVar2 * 4] = 1.0;
          local_58[iVar2 * 4 + 1] = 1.0;
          local_58[iVar2 * 4 + 2] = 1.0;
          local_58[iVar2 * 4 + 3] = fVar6;
        }
      }
      else {
        iVar4 = param_2 + iVar2 * 4;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(param_2 + iVar2 * 4),(byte)(in_fpscr >> 0x16) & 3)
        ;
        local_58[iVar2 * 4] = fVar8 * 0.003921569;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 1),(byte)(in_fpscr >> 0x16) & 3);
        local_58[iVar2 * 4 + 1] = fVar8 * 0.003921569;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 2),(byte)(in_fpscr >> 0x16) & 3);
        local_58[iVar2 * 4 + 2] = fVar8 * 0.003921569;
        iVar5 = 0;
        fVar8 = (float)VectorUnsignedToFloat
                                 ((uint)*(byte *)(iVar4 + 3),(byte)(in_fpscr >> 0x16) & 3);
        local_58[iVar2 * 4 + 3] = fVar8 * 0.003921569;
        for (; bVar1 && iVar5 < iVar2; iVar5 = iVar5 + 1) {
          local_58[iVar5 * 4] = 1.0;
          local_58[iVar5 * 4 + 1] = 1.0;
          local_58[iVar5 * 4 + 2] = 1.0;
          local_58[iVar5 * 4 + 3] = fVar6;
        }
        bVar1 = false;
        local_58[iVar2 * 4 + 3] = local_58[iVar2 * 4 + 3] * fVar6;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 4);
    if (!bVar1) {
      uVar7 = VectorUnsignedToFloat((uint)*(byte *)(param_1 + 0x31),(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(param_1 + 0x608) = uVar7;
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1f8) = local_58[0];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x1fc) = local_58[1];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x200) = local_58[2];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x204) = local_58[3];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x208) = local_58[4];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x20c) = local_58[5];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x210) = local_58[6];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x214) = local_58[7];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x218) = local_58[8];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x21c) = local_58[9];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x220) = local_58[10];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x224) = local_58[0xb];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x228) = local_58[0xc];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x22c) = local_58[0xd];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x230) = local_58[0xe];
      *(float *)(param_1 + (uint)*(byte *)(param_1 + 0x31) * 0x10 + 0x234) = local_58[0xf];
      *(char *)(param_1 + 0x31) = *(char *)(param_1 + 0x31) + '\x04';
      return;
    }
  }
  *(float *)(param_1 + 0x608) = fVar6;
  return;
}



void fn_0054e2f0(int param_1,uint param_2)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = 0;
  uVar2 = 0;
  if ((param_2 & 2) != 0) {
    bVar1 = 0x80;
  }
  if ((param_2 != 0) && ((param_2 & 0x40000000) == 0)) {
    uVar2 = 8;
  }
  if ((param_2 & 4) != 0) {
    bVar1 = bVar1 | 8;
  }
  if ((param_2 & 8) != 0) {
    bVar1 = bVar1 | 4;
  }
  if ((param_2 & 0x10) != 0) {
    bVar1 = bVar1 | 0x20;
  }
  if ((param_2 & 0x20) != 0) {
    bVar1 = bVar1 | 0x10;
  }
  if ((param_2 & 0x10000) != 0) {
    bVar1 = bVar1 | 0x40;
  }
  if ((param_2 & 0x20000) != 0) {
    bVar1 = bVar1 | 2;
  }
  if ((param_2 & 0x40000) != 0) {
    bVar1 = bVar1 | 1;
  }
  *(byte *)(param_1 + 0x5f8) = bVar1;
  *(undefined1 *)(param_1 + 0x5f9) = uVar2;
  return;
}



undefined4 * fn_0054df04(int param_1,undefined4 *param_2,int param_3)

{
  uint *puVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 *unaff_r10;
  bool bVar15;
  undefined4 local_b0;
  undefined1 local_ac [3];
  undefined1 uStack_a9;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  undefined4 local_98;
  uint local_94;
  uint *local_90;
  undefined1 local_8c [12];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_50;
  uint local_3c;
  undefined4 local_38;
  int local_30;
  undefined4 *puStack_2c;
  uint local_28;
  
  if ((*(byte *)(param_3 + 0x7c) & 2) != 0) {
    if ((1 < *(byte *)(param_1 + 0x61e)) && (*(byte *)(param_1 + 0x61e) != 2)) {
      param_2 = (undefined4 *)fn_0054de6c(param_1,param_2);
    }
    return param_2;
  }
  puVar4 = (undefined4 *)fn_0054e5b8(param_1,param_2);
  if ((*(ushort *)(param_3 + 0x74) & 0x1000) != 0) {
    local_30 = param_1;
    puStack_2c = puVar4;
    local_28 = param_3;
    puVar4 = (undefined4 *)fn_0054de6c(param_1);
    local_3c = 0;
    uVar14 = 0;
    uVar12 = (*(ushort *)(param_3 + 0x76) & 0x1ff) >> 6;
    if (uVar12 != 0) {
      do {
        uVar3 = *(ushort *)(param_3 + 0x74);
        puVar11 = (uint *)((uVar3 >> 8 & 0xc) +
                           (uVar3 >> 1 & 0x18) + (uVar3 & 3) * 0x20 + ((uVar3 & 0xf) >> 2) * 0x14 +
                           (uVar3 >> 6 & 8) + *(int *)(param_3 + 0x78) + uVar14 * 0xc);
        uVar7 = puVar11[2];
        fn_0054a814(&local_38,param_3,uVar7 & 0xf);
        fn_0054a814(local_8c,param_3,uVar7 >> 4 & 0xf);
        local_38 = CONCAT13(local_8c[3],(undefined3)local_38);
        iVar9 = (6 - uVar12) + uVar14;
        if ((uVar14 == 0) &&
           ((((uVar7 = *puVar11, (uVar7 & 0xf) != 0xe && ((uVar7 & 0xff) >> 4 != 0xe)) &&
             ((uVar7 & 0xfff) >> 8 != 0xe)) ||
            (((uVar7 = puVar11[1], (uVar7 & 0xf) != 0xe && ((uVar7 & 0xff) >> 4 != 0xe)) &&
             ((uVar7 & 0xfff) >> 8 != 0xe)))))) {
          iVar9 = iVar9 + 1;
          if (1 < iVar9) {
            unaff_r10 = &DAT_007d8724;
          }
          iVar10 = 1;
          puVar13 = puVar4;
          if (1 < iVar9) {
            do {
              fn_0017821c(puVar13,&DAT_007d873c,0x18);
              puVar1 = unaff_r10 + iVar10;
              puVar4 = puVar13 + 6;
              iVar10 = iVar10 + 1;
              puVar13[1] = *puVar1 | 0x804f0000;
              puVar13 = puVar4;
            } while (iVar10 < iVar9);
          }
          iVar9 = 0;
        }
        else if (uVar14 - 1 < 4) {
          local_3c = (uint)((*puVar11 & 0x40000000) != 0) << (iVar9 + 7U & 0xff) |
                     (uint)((puVar11[1] & 0x40000000) != 0) << (iVar9 + 0xbU & 0xff) | local_3c;
        }
        uVar7 = *puVar11;
        uVar8 = puVar11[1];
        local_90 = &local_a8;
        local_50 = 0xf;
        local_78 = 0xf;
        local_6c = 0xf;
        local_68 = 0xf;
        local_b0 = 0xf;
        local_70 = 0xf;
        local_64 = 0xf;
        local_80 = 0xf;
        local_7c = 0xf;
        unaff_r10 = (undefined4 *)0x3;
        local_a8 = uVar7 & 0xf | (uVar7 >> 4 & 0xf) << 4 | (uVar7 >> 8 & 0xf) << 8 |
                   (uVar8 & 0xf) << 0x10 | (uVar8 >> 4 & 0xf) << 0x14 | (uVar8 >> 8 & 0xf) << 0x18;
        local_a4 = (&DAT_007d8724)[iVar9] | 0x804f0000;
        uVar7 = *puVar11;
        uVar8 = puVar11[1];
        local_a0 = uVar7 >> 0xc & 0xf | (uVar7 >> 0x10 & 0xf) << 4 | (uVar7 >> 0x14 & 0xf) << 8 |
                   (uVar8 >> 0xc & 0xf) << 0xc | (uVar8 >> 0x10 & 0xf) << 0x10 |
                   (uVar8 >> 0x14 & 0xf) << 0x14;
        local_9c = *puVar11 >> 0x18 & 0xf | (puVar11[1] >> 0x18 & 0xf) << 0x10;
        local_98 = local_38;
        local_94 = *puVar11 >> 0x1c & 3 | (puVar11[1] >> 0x1c & 3) << 0x10;
        fn_0017821c(puVar4,local_90,0x18);
        uVar14 = uVar14 + 1;
        puVar4 = puVar4 + 6;
      } while (uVar14 < uVar12);
    }
    if ((*(ushort *)(param_3 + 0x74) & 0x1000) == 0) {
      uVar12 = 0;
    }
    else {
      puVar11 = (uint *)fn_006e2ab0(param_3);
      uVar12 = *puVar11 & 0xf;
    }
    if ((*(ushort *)(param_3 + 0x74) & 0x1000) == 0) {
      uVar14 = 0;
    }
    else {
      puVar11 = (uint *)fn_006e2ab0(param_3);
      uVar14 = (*puVar11 & 0xff) >> 4;
    }
    fn_0054a814(&local_b0,param_3,uVar12);
    fn_0054a814(local_ac,param_3,uVar14);
    local_b0 = CONCAT13(uStack_a9,(undefined3)local_b0);
    *puVar4 = local_b0;
    puVar4[1] = 0xf00fd;
    puVar4[2] = local_3c;
    puVar4[3] = 0x200e0;
    *(undefined1 *)(local_30 + 0x61e) = 6;
    *(undefined1 *)(local_30 + 0x36) = 0;
    return puVar4 + 4;
  }
  if (*(char *)(param_1 + 0x61e) == '\x06') {
    uVar5 = fn_0054de6c(param_1,puVar4);
    puVar4 = (undefined4 *)fn_00560bcc(param_1,uVar5);
  }
  iVar9 = *(int *)(param_3 + 0x70);
  puVar13 = *(undefined4 **)(param_3 + 0x6c);
  if ((*(byte *)(param_3 + 0x7c) & 4) == 0) {
    if (*(char *)(param_1 + 0x36) != '\x01') {
      uVar5 = fn_0054de6c(param_1,puVar4);
      puVar4 = (undefined4 *)fn_00560bf4(param_1,uVar5);
      *(undefined1 *)(param_1 + 0x36) = 1;
    }
  }
  else {
    fn_00560c1c(&local_30,param_1,iVar9,puVar13);
    iVar9 = local_30;
    puVar13 = puStack_2c;
    if ((char)local_28 != *(char *)(param_1 + 0x36)) {
      uVar5 = fn_0054de6c(param_1,puVar4);
      puVar4 = (undefined4 *)fn_00561320(param_1,uVar5,local_28 & 0xff);
      *(char *)(param_1 + 0x36) = (char)local_28;
    }
  }
  if (4 < *(byte *)(param_1 + 0x61e)) {
    uVar5 = fn_0054de6c(param_1,puVar4);
    local_30 = 1;
    puVar4 = (undefined4 *)fn_00550670(param_1,uVar5,iVar9,puVar13);
  }
  uVar3 = *(ushort *)(param_3 + 0x76) & 3;
  if ((*(ushort *)(param_3 + 0x76) & 3) == 0) {
    if (*(char *)(param_1 + 0x61e) != '\0') {
      iVar10 = fn_0054de6c(param_1,puVar4);
      fn_0017821c(iVar10,&DAT_007d861c,0x18);
      *(undefined4 *)(iVar10 + 0x18) = 0x1100;
      *(undefined4 *)(iVar10 + 0x1c) = 0x200e0;
      local_30 = 0;
      puVar4 = (undefined4 *)fn_00550670(param_1,iVar10 + 0x20,iVar9,puVar13);
      *(undefined1 *)(param_1 + 0x61e) = 0;
      return puVar4;
    }
    iVar10 = *(int *)(param_1 + 0x620);
    bVar15 = iVar10 == iVar9;
    if (bVar15) {
      iVar10 = *(int *)(param_1 + 0x624);
    }
    if (bVar15 && (undefined4 *)iVar10 == puVar13) {
      return puVar4;
    }
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 == 2) {
        uVar5 = fn_0054f20c(param_1,puVar4,param_3);
        local_30 = 0;
        puVar4 = (undefined4 *)fn_00550670(param_1,uVar5,iVar9,puVar13);
        return puVar4;
      }
      if (uVar3 == 3) {
        uVar5 = fn_0054f4bc(param_1,puVar4,param_3);
        local_30 = 0;
        puVar4 = (undefined4 *)fn_00550670(param_1,uVar5,iVar9,puVar13);
        return puVar4;
      }
      return puVar4;
    }
    cVar2 = *(char *)(param_1 + 0x61e);
    if ((cVar2 != '\x01') && (cVar2 != '\x02')) {
      puVar11 = (uint *)fn_0054de6c(param_1,puVar4);
      fn_0017821c(puVar11,&DAT_007d8634,0x18);
      puVar11[6] = 0x1100;
      puVar11[7] = 0x200e0;
      local_30 = 0;
      puVar4 = (undefined4 *)fn_00550670(param_1,puVar11 + 8,iVar9,puVar13);
      uVar12 = (*(uint *)(*(int *)(param_3 + 0x78) + 8) & 0xffff) >> 8;
      if (uVar12 == 1 || uVar12 == 0xd) {
        *puVar11 = *puVar11 & 0xfffffff0 | 0xe;
        *(undefined1 *)(param_1 + 0x61e) = 2;
        return puVar4;
      }
      *(undefined1 *)(param_1 + 0x61e) = 1;
      return puVar4;
    }
    uVar12 = (*(uint *)(*(int *)(param_3 + 0x78) + 8) & 0xffff) >> 8;
    if (uVar12 == 1 || uVar12 == 0xd) {
      if (cVar2 != '\x02') {
        puVar6 = (undefined4 *)fn_0054de6c(param_1,puVar4);
        puVar4 = puVar6 + 2;
        *puVar6 = 0x3000e;
        puVar6[1] = 0xf00c0;
        *(undefined1 *)(param_1 + 0x61e) = 2;
      }
    }
    else if (cVar2 != '\x01') {
      puVar4 = (undefined4 *)fn_0054de6c(param_1,puVar4);
      puVar4[1] = 0xf00c0;
      *puVar4 = 0x30003;
      puVar4 = puVar4 + 2;
      *(undefined1 *)(param_1 + 0x61e) = 1;
    }
    iVar10 = *(int *)(param_1 + 0x620);
    bVar15 = iVar10 == iVar9;
    if (bVar15) {
      iVar10 = *(int *)(param_1 + 0x624);
    }
    if (bVar15 && (undefined4 *)iVar10 == puVar13) {
      return puVar4;
    }
  }
  uVar5 = fn_0054de6c(param_1,puVar4);
  local_30 = 0;
  puVar4 = (undefined4 *)fn_00550670(param_1,uVar5,iVar9,puVar13);
  return puVar4;
}


