#include "0053c0dc_0053c158.h"



void fn_0053c158(int param_1,float *param_2)

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  int extraout_r1;
  float *pfVar4;
  int *piVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  uint in_fpscr;
  float in_s0;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 uVar25;
  float local_40;
  float local_3c;
  float local_38;
  
  iVar8 = *(int *)(param_1 + 0xdc);
  uVar25 = 0;
  fVar19 = (float)(int)(*param_2 - in_s0);
  if (((*(uint *)(iVar8 + 0x548) & 1) != 0) &&
     ((((int)param_2[2] + -1) * *(int *)(iVar8 + 0x564)) / 100 <= (int)fVar19)) {
    fVar21 = (float)VectorSignedToFloat(*(undefined4 *)(iVar8 + 0x56c),(byte)(in_fpscr >> 0x16) & 3)
    ;
    if ((param_2[0x58] < fVar21) || (param_2[0x59] == fVar19)) {
      param_2[0x58] = param_2[0x58] + in_s0;
    }
    else {
      param_2[0x59] = fVar19;
      param_2[0x58] = 0.0;
      fn_0053cc64(param_1,param_2);
    }
  }
  if (*(int *)(iVar8 + 0x328) == 5) {
    fVar21 = param_2[0x55];
    piVar12 = (int *)((uint)*(ushort *)(iVar8 + 0x55a) + iVar8);
    if (fVar21 != 0.0) {
      fVar24 = *param_2;
      iVar15 = *(int *)((int)fVar21 + 8);
      fVar20 = fVar24 + in_s0;
      iVar1 = (int)fVar21 + iVar15 * 0x58;
      pfVar9 = (float *)(iVar1 + 0xc);
      fn_006fa358();
      fn_006fa358();
      if ((int)(fVar20 - fVar24) != 0) {
        uVar2 = (uint)*(ushort *)(iVar8 + 0x550);
        if ((*(ushort *)(iVar8 + 0x550) & 1) == 0) {
          bVar18 = SBORROW4((int)fVar19,2);
          iVar8 = (int)fVar19 + -2;
          bVar17 = fVar19 == 2.8026e-45;
          if (2 < (int)fVar19) {
            uVar2 = piVar12[4];
          }
          fVar20 = (float)piVar12[8];
          if (2 < (int)fVar19) {
            bVar18 = SBORROW4(uVar2,3);
            iVar8 = uVar2 - 3;
            bVar17 = uVar2 == 3;
          }
          if (((bVar17 || iVar8 < 0 != bVar18) || (0x3f7fffff < (int)fVar20)) ||
             (iVar15 == *(int *)((int)fVar21 + 4))) {
            fVar20 = param_2[0xc];
            fVar24 = param_2[0xd];
            fVar23 = param_2[0xe];
            *pfVar9 = fVar20;
            *(float *)(iVar1 + 0x10) = fVar24;
            *(float *)(iVar1 + 0x14) = fVar23;
            *(float *)((int)fVar21 + 0x5864) = fVar20;
            *(float *)((int)fVar21 + 0x5868) = fVar24;
            *(float *)((int)fVar21 + 0x586c) = fVar23;
            *(float *)((int)fVar21 + 0x5858) = fVar20;
            *(float *)((int)fVar21 + 0x585c) = fVar24;
            *(float *)((int)fVar21 + 0x5860) = fVar23;
          }
          else {
            iVar15 = iVar15 + -1;
            bVar17 = iVar15 < 0;
            if (bVar17) {
              iVar15 = piVar12[4];
            }
            fVar24 = param_2[0xd];
            if (bVar17) {
              iVar15 = iVar15 + -1;
            }
            iVar6 = iVar15 + -1;
            iVar8 = extraout_r1;
            if (iVar6 < 0) {
              iVar8 = piVar12[4];
            }
            fVar23 = param_2[0xe];
            if (iVar6 < 0) {
              iVar6 = iVar8 + -1;
            }
            pfVar4 = (float *)((int)fVar21 + 0x5858);
            iVar15 = (int)fVar21 + iVar15 * 0x58;
            iVar8 = (int)fVar21 + iVar6 * 0x58;
            *pfVar4 = *pfVar4 + (param_2[0xc] - *pfVar4) * fVar20;
            *(float *)((int)fVar21 + 0x585c) =
                 *(float *)((int)fVar21 + 0x585c) +
                 (fVar24 - *(float *)((int)fVar21 + 0x585c)) * fVar20;
            pfVar3 = (float *)((int)fVar21 + 0x5864);
            *(float *)((int)fVar21 + 0x5860) =
                 *(float *)((int)fVar21 + 0x5860) +
                 (fVar23 - *(float *)((int)fVar21 + 0x5860)) * fVar20;
            *pfVar3 = *pfVar3 + (*pfVar4 - *pfVar3) * fVar20;
            *(float *)((int)fVar21 + 0x5868) =
                 *(float *)((int)fVar21 + 0x5868) +
                 (*(float *)((int)fVar21 + 0x585c) - *(float *)((int)fVar21 + 0x5868)) * fVar20;
            *(float *)((int)fVar21 + 0x586c) =
                 *(float *)((int)fVar21 + 0x586c) +
                 (*(float *)((int)fVar21 + 0x5860) - *(float *)((int)fVar21 + 0x586c)) * fVar20;
            uVar25 = *(undefined4 *)((int)fVar21 + 0x5868);
            uVar7 = *(undefined4 *)((int)fVar21 + 0x586c);
            *(undefined4 *)(iVar8 + 0xc) = *(undefined4 *)((int)fVar21 + 0x5864);
            *(undefined4 *)(iVar8 + 0x10) = uVar25;
            *(undefined4 *)(iVar8 + 0x14) = uVar7;
            fVar20 = param_2[0xc];
            fVar22 = *pfVar3;
            fVar24 = param_2[0xd];
            fVar23 = *(float *)((int)fVar21 + 0x5868);
            *(float *)(iVar15 + 0x14) =
                 *(float *)((int)fVar21 + 0x586c) +
                 (param_2[0xe] - *(float *)((int)fVar21 + 0x586c)) * 0.7;
            *(float *)(iVar15 + 0xc) = fVar22 + (fVar20 - fVar22) * 0.7;
            *(float *)(iVar15 + 0x10) = fVar23 + (fVar24 - fVar23) * 0.7;
            fVar20 = param_2[0xd];
            fVar24 = param_2[0xe];
            *pfVar9 = param_2[0xc];
            *(float *)(iVar1 + 0x10) = fVar20;
            *(float *)(iVar1 + 0x14) = fVar24;
          }
          uVar25 = *(undefined4 *)(param_1 + 0x5c);
          uVar7 = *(undefined4 *)(param_1 + 0x60);
          uVar10 = *(undefined4 *)(param_1 + 100);
          uVar11 = *(undefined4 *)(param_1 + 0x68);
          uVar13 = *(undefined4 *)(param_1 + 0x6c);
          uVar14 = *(undefined4 *)(param_1 + 0x70);
          uVar16 = *(undefined4 *)(param_1 + 0x74);
          *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)(param_1 + 0x58);
          *(undefined4 *)(iVar1 + 0x20) = uVar25;
          *(undefined4 *)(iVar1 + 0x24) = uVar7;
          *(undefined4 *)(iVar1 + 0x28) = uVar10;
          *(undefined4 *)(iVar1 + 0x2c) = uVar11;
          *(undefined4 *)(iVar1 + 0x30) = uVar13;
          *(undefined4 *)(iVar1 + 0x34) = uVar14;
          *(undefined4 *)(iVar1 + 0x38) = uVar16;
          uVar25 = *(undefined4 *)(param_1 + 0x7c);
          uVar7 = *(undefined4 *)(param_1 + 0x80);
          uVar10 = *(undefined4 *)(param_1 + 0x84);
          *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x78);
          *(undefined4 *)(iVar1 + 0x40) = uVar25;
          *(undefined4 *)(iVar1 + 0x44) = uVar7;
          *(undefined4 *)(iVar1 + 0x48) = uVar10;
        }
        else {
          fVar20 = param_2[4];
          fVar24 = param_2[5];
          *pfVar9 = param_2[3];
          *(float *)(iVar1 + 0x10) = fVar20;
          *(float *)(iVar1 + 0x14) = fVar24;
          if (((DAT_008c6300 & 1) == 0) && (iVar8 = fn_00303afc(&DAT_008c6300), iVar8 != 0)) {
            DAT_008f9e38 = 0x3f800000;
            DAT_008f9e4c = 0x3f800000;
            DAT_008f9e60 = 0x3f800000;
            DAT_008f9e3c = uVar25;
            DAT_008f9e40 = uVar25;
            DAT_008f9e44 = uVar25;
            DAT_008f9e48 = uVar25;
            DAT_008f9e50 = uVar25;
            DAT_008f9e54 = uVar25;
            DAT_008f9e58 = uVar25;
            DAT_008f9e5c = uVar25;
            DAT_008f9e64 = uVar25;
          }
          fn_001781f0(iVar1 + 0x1c,&DAT_008f9e38);
        }
        *(float *)(iVar1 + 0x18) = param_2[0x1a] * *(float *)(*(int *)(param_1 + 0x1c) + 0x21c);
        if (*(int *)((int)fVar21 + 8) != *(int *)((int)fVar21 + 4)) {
          iVar8 = *(int *)((int)fVar21 + 8) + -1;
          bVar17 = iVar8 < 0;
          if (bVar17) {
            iVar8 = piVar12[4];
          }
          if (bVar17) {
            iVar8 = iVar8 + -1;
          }
          iVar8 = (int)fVar21 + iVar8 * 0x58;
          if ((int)fVar19 < 2) {
            fVar23 = *(float *)(iVar8 + 0x10);
            fVar20 = *(float *)(iVar1 + 0x10);
            fVar19 = *(float *)(iVar1 + 0x14);
            fVar24 = *(float *)(iVar8 + 0x14);
            *(float *)((int)fVar21 + 0x584c) = *pfVar9 - *(float *)(iVar8 + 0xc);
            *(float *)((int)fVar21 + 0x5850) = fVar20 - fVar23;
            *(float *)((int)fVar21 + 0x5854) = fVar19 - fVar24;
          }
          else {
            local_40 = *pfVar9 - *(float *)(iVar8 + 0xc);
            local_3c = *(float *)(iVar1 + 0x10) - *(float *)(iVar8 + 0x10);
            local_38 = *(float *)(iVar1 + 0x14) - *(float *)(iVar8 + 0x14);
            fn_005253e4(&local_40);
            pfVar9 = (float *)((int)fVar21 + 0x584c);
            fVar19 = (float)piVar12[9];
            *pfVar9 = *pfVar9 + (local_40 - *pfVar9) * fVar19;
            *(float *)((int)fVar21 + 0x5850) =
                 *(float *)((int)fVar21 + 0x5850) +
                 (local_3c - *(float *)((int)fVar21 + 0x5850)) * fVar19;
            *(float *)((int)fVar21 + 0x5854) =
                 *(float *)((int)fVar21 + 0x5854) +
                 (local_38 - *(float *)((int)fVar21 + 0x5854)) * fVar19;
          }
          fn_005253e4((int)fVar21 + 0x584c,(int)fVar21 + 0x584c);
          uVar25 = *(undefined4 *)((int)fVar21 + 0x5850);
          uVar7 = *(undefined4 *)((int)fVar21 + 0x5854);
          *(undefined4 *)(iVar1 + 0x58) = *(undefined4 *)((int)fVar21 + 0x584c);
          *(undefined4 *)(iVar1 + 0x5c) = uVar25;
          *(undefined4 *)(iVar1 + 0x60) = uVar7;
          if (*piVar12 == 2) {
            *(undefined4 *)(iVar1 + 0x4c) = *(undefined4 *)(iVar1 + 0x20);
            *(undefined4 *)(iVar1 + 0x50) = *(undefined4 *)(iVar1 + 0x30);
            *(undefined4 *)(iVar1 + 0x54) = *(undefined4 *)(iVar1 + 0x40);
          }
          else {
            local_40 = *(float *)(iVar1 + 0x30) * *(float *)((int)fVar21 + 0x5854) -
                       *(float *)(iVar1 + 0x40) * *(float *)((int)fVar21 + 0x5850);
            local_3c = *(float *)(iVar1 + 0x40) * *(float *)((int)fVar21 + 0x584c) -
                       *(float *)(iVar1 + 0x20) * *(float *)((int)fVar21 + 0x5854);
            local_38 = *(float *)(iVar1 + 0x20) * *(float *)((int)fVar21 + 0x5850) -
                       *(float *)(iVar1 + 0x30) * *(float *)((int)fVar21 + 0x584c);
            fn_005253e4(&local_40);
            *(float *)(iVar1 + 0x4c) = local_40;
            *(float *)(iVar1 + 0x50) = local_3c;
            *(float *)(iVar1 + 0x54) = local_38;
          }
        }
        iVar8 = *(int *)((int)fVar21 + 8) + 1;
        *(int *)((int)fVar21 + 8) = iVar8;
        if (piVar12[4] <= iVar8) {
          *(undefined4 *)((int)fVar21 + 8) = 0;
        }
        if ((*(int *)((int)fVar21 + 8) == *(int *)((int)fVar21 + 4)) &&
           (iVar8 = *(int *)((int)fVar21 + 4) + 1, *(int *)((int)fVar21 + 4) = iVar8,
           piVar12[4] <= iVar8)) {
          *(undefined4 *)((int)fVar21 + 4) = 0;
        }
        piVar5 = (int *)((int)fVar21 + 0x580c);
        iVar8 = *piVar5 + 1;
        *piVar5 = iVar8;
        if (piVar12[4] < iVar8) {
          iVar8 = piVar12[4];
        }
        *piVar5 = iVar8;
        uVar25 = *(undefined4 *)(param_1 + 0x5c);
        uVar7 = *(undefined4 *)(param_1 + 0x60);
        uVar10 = *(undefined4 *)(param_1 + 100);
        uVar11 = *(undefined4 *)(param_1 + 0x68);
        uVar13 = *(undefined4 *)(param_1 + 0x6c);
        uVar14 = *(undefined4 *)(param_1 + 0x70);
        uVar16 = *(undefined4 *)(param_1 + 0x74);
        *(undefined4 *)((int)fVar21 + 0x581c) = *(undefined4 *)(param_1 + 0x58);
        *(undefined4 *)((int)fVar21 + 0x5820) = uVar25;
        *(undefined4 *)((int)fVar21 + 0x5824) = uVar7;
        *(undefined4 *)((int)fVar21 + 0x5828) = uVar10;
        *(undefined4 *)((int)fVar21 + 0x582c) = uVar11;
        *(undefined4 *)((int)fVar21 + 0x5830) = uVar13;
        *(undefined4 *)((int)fVar21 + 0x5834) = uVar14;
        *(undefined4 *)((int)fVar21 + 0x5838) = uVar16;
        uVar25 = *(undefined4 *)(param_1 + 0x7c);
        uVar7 = *(undefined4 *)(param_1 + 0x80);
        uVar10 = *(undefined4 *)(param_1 + 0x84);
        *(undefined4 *)((int)fVar21 + 0x583c) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)((int)fVar21 + 0x5840) = uVar25;
        *(undefined4 *)((int)fVar21 + 0x5844) = uVar7;
        *(undefined4 *)((int)fVar21 + 0x5848) = uVar10;
        *(int *)((int)fVar21 + 0x5818) = *(int *)((int)fVar21 + 0x5818) + 1;
        return;
      }
      iVar15 = iVar15 + -1;
      bVar17 = iVar15 < 0;
      if (bVar17) {
        iVar15 = piVar12[4];
      }
      if (bVar17) {
        iVar15 = iVar15 + -1;
      }
      if ((*(ushort *)(iVar8 + 0x550) & 1) == 0) {
        fVar19 = param_2[0xd];
        fVar20 = param_2[0xe];
        iVar8 = (int)fVar21 + iVar15 * 0x58;
        *(float *)(iVar8 + 0xc) = param_2[0xc];
        *(float *)(iVar8 + 0x10) = fVar19;
        *(float *)(iVar8 + 0x14) = fVar20;
        return;
      }
      fVar19 = param_2[4];
      fVar20 = param_2[5];
      iVar8 = (int)fVar21 + iVar15 * 0x58;
      *(float *)(iVar8 + 0xc) = param_2[3];
      *(float *)(iVar8 + 0x10) = fVar19;
      *(float *)(iVar8 + 0x14) = fVar20;
    }
  }
  return;
}



void fn_0053c0dc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  *(undefined4 *)(param_2 + 0x284) = 0;
  iVar1 = *(int *)(param_2 + 0xe0);
  while (iVar1 != 0) {
    if (*(int *)(iVar1 + 4) < *(int *)(iVar1 + 8)) {
      fn_00534a50(param_2,iVar1);
      *(int *)(param_2 + 0x284) = *(int *)(param_2 + 0x284) + 1;
      iVar1 = *(int *)(iVar1 + 0x14c);
    }
    else {
      iVar2 = *(int *)(iVar1 + 0x14c);
      fn_0053138c(iVar1);
      iVar1 = iVar2;
    }
  }
  return;
}


