#include "single_0055fb5c_r.h"


extern undefined4 SUB_00040080;

uint * fn_0055fb5c(int param_1,uint *param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  float *pfVar14;
  int iVar15;
  int *piVar16;
  short *psVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  byte *pbVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  undefined4 uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  float fVar39;
  float fVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  float fVar43;
  undefined4 uVar44;
  uint local_100;
  uint local_fc;
  int local_f8 [6];
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_c8;
  uint local_c4;
  uint *local_c0;
  int local_bc;
  int *local_b8;
  uint local_ac;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 local_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  int local_9c;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_84;
  uint local_80;
  int iStack_34;
  uint *local_30;
  undefined4 uStack_2c;
  int iStack_28;
  
  local_bc = param_1 + 0x400;
  uVar9 = *(uint *)(param_4 + 4);
  uVar37 = 0;
  *(undefined4 *)(param_1 + 0x5fc) = 0;
  *(undefined1 *)(param_1 + 0x5f8) = 0;
  *(undefined1 *)(param_1 + 0x5f9) = 0;
  *(undefined1 *)(param_1 + 0x5fa) = 0;
  *(undefined1 *)(param_1 + 0x5fb) = 0;
  local_c0 = (uint *)(param_4 + 0x18);
  uVar9 = uVar9 & 0xffff;
  iStack_34 = param_1;
  local_30 = param_2;
  uStack_2c = param_3;
  iStack_28 = param_4;
  fn_00101a1c(&local_c8,fn_0017d8f8,4,2);
  fn_001694e4(&local_c8,local_c0,8);
  local_9c = *(int *)(param_4 + 8);
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  *(undefined1 *)(param_1 + 0x31) = 7;
  *(undefined1 *)(param_1 + 0x32) = 7;
  iVar18 = local_9c + uVar9 * 0x24;
  iVar15 = (int)(uVar9 + 7) >> 3;
  uVar10 = iVar15 - 1;
  if (iVar15 != 0) {
    puVar11 = (undefined1 *)(uVar10 + iVar18);
    puVar12 = puVar11 + 1;
    if ((uVar10 & 1) == 0) {
      *puVar11 = 0;
      puVar12 = puVar11;
    }
    for (iVar15 = (int)(uVar9 + 7) >> 4; iVar15 != 0; iVar15 = iVar15 + -1) {
      puVar12[-1] = 0;
      puVar12 = puVar12 + -2;
      *puVar12 = 0;
    }
  }
  local_b8 = local_f8;
  local_e0 = 0;
  local_fc = 0xffffffff;
  local_100 = 0xffffffff;
  local_90 = 0;
  local_f8[2] = 0;
  local_f8[0] = 0;
  local_f8[1] = 0;
  local_f8[3] = 0;
  local_8c = 0;
  local_dc = 0;
  local_80 = *(byte *)((int)local_c0 + 0x29) & 1;
  local_84 = (*(byte *)((int)local_c0 + 0x29) & 2) >> 1;
  local_ac = local_c0[8];
  if ((*(char *)((int)local_c0 + 0x2a) == '\0') || (*(char *)((int)local_c0 + 0x2a) != '\x01')) {
    uVar37 = 0xbf00000000000000;
  }
  local_d8 = 0;
  if (uVar9 != 0) {
    uVar44 = 0x40a00000;
    uVar38 = 0x38800000;
    uVar41 = 0x3f80000000000000;
    uVar42 = 0x3b008081;
    do {
      uVar10 = local_8c;
      while ((*(byte *)(iVar18 + ((int)(uVar10 + ((uint)((int)uVar10 >> 0x1f) >> 0x1d)) >> 3)) >>
              ((int)uVar10 % 8 & 0xffU) & 1) != 0) {
        uVar10 = uVar10 + 1;
      }
      iVar15 = local_9c + uVar10 * 0x24;
      uVar19 = *(uint *)(iVar15 + 0x18) & 0xfffffffe;
      uVar6 = (uint)*(ushort *)(iVar15 + 0x1e) * *(int *)(uVar19 + 0x10) + *(int *)(uVar19 + 4);
      local_8c = uVar10 + 1;
      if (local_e0 != uVar6) {
        cVar1 = '\0';
        if (local_d8 != 0) {
          cVar1 = *(char *)(param_1 + 0x30);
        }
        local_e0 = uVar6;
        if (local_d8 != 0 && cVar1 != '\0') {
          local_30 = (uint *)fn_005607cc(param_1,local_30);
          fn_001694e4(&local_c8,local_c0,8);
        }
        puVar20 = local_30;
        uVar13 = (uint)*(byte *)(uVar19 + 0xe);
        uVar6 = uVar13;
        if (local_fc == uVar13) {
          uVar6 = local_dc;
        }
        uVar7 = *(uint *)(iVar15 + 0x18) & 1;
        if (local_fc != uVar13 || uVar6 != uVar7) {
          uVar6 = (uint)(uVar13 == 0xb || uVar13 == 8) | uVar7 << 1;
          local_dc = uVar7;
          if (local_84 == 0) {
            iVar15 = uVar6 * 0x10;
            piVar16 = (int *)(&DAT_0089a7dc + iVar15);
            if (*local_b8 != *piVar16) {
              uVar6 = *(uint *)(&DAT_0089a7e0 + iVar15);
              fn_0017821c(local_30,*piVar16,uVar6);
              local_30 = (uint *)((uVar6 & 0xfffffffc) + (int)puVar20);
            }
            puVar20 = local_30;
            if (local_b8[2] != *(int *)(&DAT_0089a7e4 + iVar15)) {
              uVar6 = *(uint *)(&DAT_0089a7e8 + iVar15);
              fn_0017821c(local_30,*(int *)(&DAT_0089a7e4 + iVar15),uVar6);
              local_30 = (uint *)((uVar6 & 0xfffffffc) + (int)puVar20);
            }
          }
          else {
            if (local_80 == 0) {
              piVar16 = (int *)(&DAT_0089a7dc + uVar6 * 0x10);
            }
            else {
              piVar16 = (int *)(&DAT_0089a81c + uVar6 * 8);
            }
            if (*local_b8 != *piVar16) {
              uVar6 = piVar16[1];
              fn_0017821c(local_30,*piVar16,uVar6);
              local_30 = (uint *)((uVar6 & 0xfffffffc) + (int)puVar20);
            }
          }
          local_b8 = piVar16;
        }
        if (local_fc != 0xffffffff) {
          *local_30 = 0;
          local_30[1] = (uint)&DAT_00200080;
          local_30[2] = 0;
          local_30[3] = 0;
          local_30 = local_30 + 4;
        }
        if (local_fc != uVar13) {
          *local_30 = uVar13;
          local_30[1] = 0xf008e;
          local_fc = uVar13;
          local_30 = local_30 + 2;
        }
        uVar6 = *(uint *)(uVar19 + 8);
        *local_30 = 0x11001;
        local_30[1] = (uint)&SUB_00040080;
        local_30[2] = local_e0;
        local_30[3] = 0xf0085;
        puVar20 = local_30 + 4;
        if (uVar6 != local_90) {
          local_30[4] = uVar6;
          local_30[5] = 0xf0082;
          local_90 = uVar6;
          puVar20 = local_30 + 6;
        }
        local_30 = puVar20;
        uVar6 = *(uint *)(uVar19 + 0x14);
        if (local_100 != uVar6) {
          local_30[1] = 0xf0083;
          *local_30 = uVar6;
          local_100 = uVar6;
          local_30 = local_30 + 2;
        }
      }
      if (uVar10 < uVar9) {
        uVar42 = CONCAT44(0x3b800000,(int)uVar42);
        uVar38 = CONCAT44(0x3d800000,(int)uVar38);
        fVar43 = 0.015625;
        uVar41 = CONCAT44((int)((ulonglong)uVar41 >> 0x20),0x3e800000);
        do {
          psVar17 = (short *)(local_9c + uVar10 * 0x24);
          pbVar21 = (byte *)(iVar18 + ((int)(uVar10 + ((uint)((int)uVar10 >> 0x1f) >> 0x1d)) >> 3));
          if (((*pbVar21 >> ((int)uVar10 % 8 & 0xffU) & 1) == 0) &&
             ((uint)(ushort)psVar17[0xf] * *(int *)((*(uint *)(psVar17 + 0xc) & 0xfffffffe) + 0x10)
              + *(int *)((*(uint *)(psVar17 + 0xc) & 0xfffffffe) + 4) == local_e0)) {
            puVar20 = (uint *)(psVar17 + 4);
            fn_00101a1c(&local_a8,fn_0017d8f8,4,2);
            if (local_ac != 0) {
              iVar15 = local_ac + uVar10 * 0x2c;
              local_a8 = (char)((uint)((int)(short)(ushort)(byte)*puVar20 *
                                      (int)(short)(ushort)*(byte *)(iVar15 + 0x24)) / 0xff);
              uStack_a7 = (char)((uint)((int)(short)(ushort)*(byte *)((int)psVar17 + 9) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x25)) / 0xff);
              uStack_a6 = (char)((uint)((int)(short)(ushort)*(byte *)(psVar17 + 5) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x26)) / 0xff);
              uStack_a5 = (char)((uint)((int)(short)(ushort)*(byte *)((int)psVar17 + 0xb) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x27)) / 0xff);
              local_a4 = (char)((uint)((int)(short)(ushort)*(byte *)(psVar17 + 6) *
                                      (int)(short)(ushort)*(byte *)(iVar15 + 0x28)) / 0xff);
              uStack_a3 = (char)((uint)((int)(short)(ushort)*(byte *)((int)psVar17 + 0xd) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x29)) / 0xff);
              uStack_a2 = (char)((uint)((int)(short)(ushort)*(byte *)(psVar17 + 7) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x2a)) / 0xff);
              puVar20 = (uint *)&local_a8;
              uStack_a1 = (char)((uint)((int)(short)(ushort)*(byte *)((int)psVar17 + 0xf) *
                                       (int)(short)(ushort)*(byte *)(iVar15 + 0x2b)) / 0xff);
            }
            uVar6 = *local_c0;
            uVar19 = *puVar20;
            uVar19 = uVar19 << 0x18 | ((uVar19 & 0xffff) >> 8) << 0x10 |
                     ((uVar19 & 0xffffff) >> 0x10) << 8 | uVar19 >> 0x18;
            if ((uVar6 << 0x18 | ((uVar6 & 0xffff) >> 8) << 0x10 | ((uVar6 & 0xffffff) >> 0x10) << 8
                | uVar6 >> 0x18) == uVar19) {
              uVar6 = local_c0[1];
              uVar13 = puVar20[1];
              if ((uVar6 << 0x18 | ((uVar6 & 0xffff) >> 8) << 0x10 |
                   ((uVar6 & 0xffffff) >> 0x10) << 8 | uVar6 >> 0x18) !=
                  (uVar13 << 0x18 | ((uVar13 & 0xffff) >> 8) << 0x10 |
                   ((uVar13 & 0xffffff) >> 0x10) << 8 | uVar13 >> 0x18)) goto LAB_005601f0;
              *(undefined4 *)(local_bc + 0x208) = uVar44;
            }
            else {
LAB_005601f0:
              if (((local_c8 << 0x18 | ((local_c8 & 0xffff) >> 8) << 0x10 |
                    ((local_c8 & 0xffffff) >> 0x10) << 8 | local_c8 >> 0x18) == uVar19) &&
                 (uVar6 = puVar20[1],
                 (local_c4 << 0x18 | ((local_c4 & 0xffff) >> 8) << 0x10 |
                  ((local_c4 & 0xffffff) >> 0x10) << 8 | local_c4 >> 0x18) ==
                 (uVar6 << 0x18 | ((uVar6 & 0xffff) >> 8) << 0x10 |
                  ((uVar6 & 0xffffff) >> 0x10) << 8 | uVar6 >> 0x18))) {
                uVar25 = VectorUnsignedToFloat(local_94,(byte)(in_fpscr >> 0x16) & 3);
                *(undefined4 *)(local_bc + 0x208) = uVar25;
              }
              else {
                local_94 = (uint)*(byte *)(param_1 + 0x31);
                fn_001694e4(&local_c8,puVar20,8);
                fn_0055fa84(param_1,puVar20);
              }
            }
            uVar6 = (uint)*(byte *)(param_1 + 0x33);
            fVar24 = (float)uVar38;
            uVar19 = uVar6 + 1 & 0xff;
            pfVar8 = (float *)(param_1 + 0x3f8 + uVar6 * 0x10);
            fVar27 = (float)((ulonglong)uVar41 >> 0x20);
            uVar25 = VectorUnsignedToFloat(uVar6 + 0x20,(byte)(in_fpscr >> 0x16) & 3);
            fVar39 = (float)((ulonglong)uVar38 >> 0x20);
            fVar40 = (float)uVar41;
            *(undefined4 *)(local_bc + 0x204) = uVar25;
            fVar26 = (float)VectorSignedToFloat((int)psVar17[0xb],(byte)(in_fpscr >> 0x16) & 3);
            fVar29 = (float)VectorSignedToFloat((int)psVar17[9],(byte)(in_fpscr >> 0x16) & 3);
            fVar28 = (float)VectorSignedToFloat((int)psVar17[8],(byte)(in_fpscr >> 0x16) & 3);
            fVar30 = (float)VectorSignedToFloat((int)psVar17[10],(byte)(in_fpscr >> 0x16) & 3);
            pfVar8[2] = fVar30 * fVar24;
            pfVar8[3] = fVar27 - fVar26 * fVar24;
            *pfVar8 = fVar28 * fVar24;
            pfVar8[1] = fVar27 - fVar29 * fVar24;
            cVar1 = (char)(uVar6 + 1);
            *(char *)(param_1 + 0x33) = cVar1;
            sVar2 = *psVar17;
            uVar25 = VectorUnsignedToFloat(uVar19 + 0x20,(byte)(in_fpscr >> 0x16) & 3);
            sVar3 = psVar17[2];
            sVar4 = psVar17[3];
            fVar30 = (float)VectorSignedToFloat((int)psVar17[1],(byte)(in_fpscr >> 0x16) & 3);
            *(undefined4 *)(local_bc + 0x200) = uVar25;
            fVar29 = (float)VectorSignedToFloat((int)sVar2,(byte)(in_fpscr >> 0x16) & 3);
            fVar28 = (float)VectorSignedToFloat((int)sVar3,(byte)(in_fpscr >> 0x16) & 3);
            fVar26 = (float)VectorSignedToFloat((int)sVar4,(byte)(in_fpscr >> 0x16) & 3);
            if (local_ac == 0) {
              pfVar8 = (float *)(param_1 + 0x3f8 + uVar19 * 0x10);
              *pfVar8 = fVar29 * fVar39;
              pfVar8[1] = fVar30 * fVar39;
              pfVar8[2] = fVar28 * fVar40;
              pfVar8[3] = fVar26 * fVar40;
              *(char *)(param_1 + 0x33) = cVar1 + '\x01';
            }
            else {
              pfVar8 = (float *)(local_ac + uVar10 * 0x2c);
              iVar15 = param_1 + 0x3f8;
              uVar13 = uVar19 + 1 & 0xff;
              fVar33 = pfVar8[3];
              fVar31 = pfVar8[4];
              pfVar14 = (float *)(iVar15 + uVar19 * 0x10);
              fVar35 = pfVar8[6];
              fVar36 = pfVar8[7];
              fVar32 = *pfVar8;
              fVar27 = pfVar8[2];
              fVar24 = pfVar8[5];
              fVar34 = pfVar8[1];
              *pfVar14 = fVar29 * fVar39;
              pfVar14[1] = fVar30 * fVar39;
              fVar29 = (float)((ulonglong)uVar37 >> 0x20);
              fVar36 = fVar36 + fVar26 * fVar40;
              uVar37 = CONCAT44(fVar29,fVar36);
              pfVar14[2] = fVar35 + fVar28 * fVar40;
              pfVar14[3] = fVar36;
              uVar6 = uVar13 + 1;
              pfVar14 = (float *)(iVar15 + uVar13 * 0x10);
              *pfVar14 = fVar34 * fVar27;
              pfVar14[1] = -(fVar34 * fVar24);
              cVar1 = (char)uVar6;
              pfVar14[2] = fVar33 * fVar31 * fVar27 + fVar32 * fVar24;
              pfVar14[3] = -(fVar33 * fVar31) * fVar24 + fVar32 * fVar27;
              *(char *)(param_1 + 0x33) = cVar1;
              pfVar14 = (float *)(iVar15 + (uVar6 & 0xff) * 0x10);
              fVar26 = pfVar8[8];
              pfVar14[2] = fVar29;
              *pfVar14 = -(fVar32 * fVar31) * fVar27 + fVar33 * fVar24;
              pfVar14[1] = fVar32 * fVar31 * fVar24 + fVar33 * fVar27;
              pfVar14[3] = fVar26;
              *(char *)(param_1 + 0x33) = cVar1 + '\x01';
            }
            fVar28 = (float)VectorUnsignedToFloat
                                      ((uint)*(byte *)(psVar17 + 0x10),(byte)(in_fpscr >> 0x16) & 3)
            ;
            fVar26 = (float)VectorSignedToFloat((int)*(float *)(local_bc + 0x204),
                                                (byte)(in_fpscr >> 0x16) & 3);
            *(float *)(local_bc + 0x204) = fVar26 + fVar28 * (float)uVar42;
            bVar5 = (byte)(1 << ((int)uVar10 % 8 & 0xffU));
            *pbVar21 = *pbVar21 & ~bVar5 | bVar5;
            local_d8 = local_d8 + 1;
            fVar26 = *(float *)(param_1 + 0x600);
            fVar28 = *(float *)(param_1 + 0x604);
            fVar29 = *(float *)(param_1 + 0x608);
            iVar15 = param_1 + (uint)*(byte *)(param_1 + 0x30) * 0x10;
            pfVar8 = (float *)(iVar15 + 0x88);
            *pfVar8 = *(float *)(param_1 + 0x5fc);
            *(float *)(iVar15 + 0x8c) = fVar26;
            *(float *)(iVar15 + 0x90) = fVar28;
            *(float *)(iVar15 + 0x94) = fVar29;
            if (*(byte *)(param_1 + 0x5f8) != 0) {
              fVar30 = (float)VectorUnsignedToFloat
                                        ((uint)*(byte *)(param_1 + 0x5f8),
                                         (byte)(in_fpscr >> 0x16) & 3);
              *pfVar8 = *pfVar8 + fVar30 * (float)((ulonglong)uVar42 >> 0x20);
            }
            if (*(byte *)(param_1 + 0x5f9) != 0) {
              fVar30 = (float)VectorUnsignedToFloat
                                        ((uint)*(byte *)(param_1 + 0x5f9),
                                         (byte)(in_fpscr >> 0x16) & 3);
              *(float *)(iVar15 + 0x8c) = fVar26 + fVar30 * fVar39;
            }
            if (*(byte *)(param_1 + 0x5fa) != 0) {
              fVar26 = (float)VectorUnsignedToFloat
                                        ((uint)*(byte *)(param_1 + 0x5fa),
                                         (byte)(in_fpscr >> 0x16) & 3);
              *(float *)(iVar15 + 0x90) = fVar28 + fVar26 * fVar43;
            }
            if ((0x3f800000 < (int)fVar29) && (*(byte *)(param_1 + 0x5fb) != 0)) {
              fVar26 = (float)VectorUnsignedToFloat
                                        ((uint)*(byte *)(param_1 + 0x5fb),
                                         (byte)(in_fpscr >> 0x16) & 3);
              *(float *)(iVar15 + 0x94) = fVar29 + fVar26 * fVar40;
            }
            bVar5 = *(char *)(param_1 + 0x30) + 1;
            bVar23 = 0x15 < bVar5;
            bVar22 = bVar5 == 0x16;
            *(byte *)(param_1 + 0x30) = bVar5;
            if (bVar5 < 0x17) {
              bVar23 = 0x1d < *(byte *)(param_1 + 0x33);
              bVar22 = *(byte *)(param_1 + 0x33) == 0x1e;
            }
            if (!bVar23 || bVar22) {
              bVar23 = 0x1d < *(byte *)(param_1 + 0x31);
              bVar22 = *(byte *)(param_1 + 0x31) == 0x1e;
            }
            if (bVar23 && !bVar22) {
              local_30 = (uint *)fn_005607cc(param_1,local_30);
              fn_001694e4(&local_c8,local_c0,8);
            }
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < uVar9);
      }
    } while (local_d8 < uVar9);
  }
  if (*(char *)(param_1 + 0x30) != '\0') {
    local_30 = (uint *)fn_005607cc(param_1,local_30);
  }
  *(undefined1 *)(param_1 + 0x31) = 0;
  *(undefined1 *)(param_1 + 0x32) = 0;
  *(undefined1 *)(param_1 + 0x33) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
  return local_30;
}


