#include "0051c788_00538628b.h"



void fn_00538628(int param_1,float *param_2)

{
  uint *puVar1;
  float *pfVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  float fVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  puVar1 = DAT_008c3450;
  iVar6 = *(int *)(param_1 + 0x150);
  *DAT_008c3450 = DAT_008c3454 * 10 + 1U | 0x80000000;
  puVar1[1] = 0xf02c0;
  iVar4 = *(int *)(iVar6 + 0xcc);
  pfVar2 = *(float **)(param_1 + 0x140);
  iVar3 = *(int *)(param_1 + 0x144);
  puVar1[3] = DAT_008c345c * 0x400000 - 0x100000U | 0xf02c1;
  if (iVar4 == 2) {
    uVar9 = *(undefined4 *)(iVar6 + 0x74);
    uVar11 = *(undefined4 *)(iVar6 + 0x84);
    uVar13 = *(undefined4 *)(iVar6 + 0x34);
    uVar15 = *(undefined4 *)(iVar6 + 0x44);
    uVar17 = *(undefined4 *)(iVar6 + 0x54);
    *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(iVar6 + 100);
    *(undefined4 *)(param_1 + 0x128) = uVar9;
    *(undefined4 *)(param_1 + 0x138) = uVar11;
    *(undefined4 *)(param_1 + 0xe8) = uVar13;
    *(undefined4 *)(param_1 + 0xf8) = uVar15;
    *(undefined4 *)(param_1 + 0x108) = uVar17;
  }
  puVar1[2] = (uint)(*(float *)(param_1 + 0x60) * *(float *)(param_1 + 0xb4));
  uVar5 = *(uint *)(param_1 + 0x74);
  puVar1[7] = *(uint *)(param_1 + 0x94);
  puVar1[8] = uVar5;
  fVar12 = *(float *)(iVar3 + 0x504);
  fVar7 = *(float *)(param_1 + 0xb8);
  fVar10 = *(float *)(param_1 + 0x68) * DAT_008c346c;
  fVar8 = *(float *)(param_1 + 0x6c) * DAT_008c3470 * fVar7;
  if (0.0 < fVar12) {
    fVar8 = fVar8 + (SQRT(*(float *)(param_1 + 0x24) * *(float *)(param_1 + 0x24) +
                          *(float *)(param_1 + 0x28) * *(float *)(param_1 + 0x28) +
                          *(float *)(param_1 + 0x2c) * *(float *)(param_1 + 0x2c)) +
                    SQRT(*(float *)(param_1 + 0x18) * *(float *)(param_1 + 0x18) +
                         *(float *)(param_1 + 0x1c) * *(float *)(param_1 + 0x1c) +
                         *(float *)(param_1 + 0x20) * *(float *)(param_1 + 0x20))) * fVar12;
  }
  uVar5 = *(uint *)(param_1 + 0x48);
  uVar14 = *(uint *)(param_1 + 0x4c);
  puVar1[0x1c] = *(uint *)(param_1 + 0x50);
  puVar1[0x1d] = uVar14;
  puVar1[0x1e] = uVar5;
  puVar1[9] = (uint)fVar8;
  puVar1[10] = (uint)(fVar10 * fVar7);
  uVar5 = *(uint *)(param_1 + 0x88);
  uVar14 = *(uint *)(param_1 + 0x8c);
  iVar3 = param_1 + DAT_008c3460 * 0x10;
  puVar1[4] = *(uint *)(iVar3 + 0xc4);
  puVar1[5] = *(uint *)(iVar3 + 0xc0);
  puVar1[6] = *(uint *)(iVar3 + 0xbc);
  puVar1[0xb] = uVar14;
  puVar1[0xc] = uVar5;
  puVar1[0xd] = (uint)(*(float *)(param_1 + 0x7c) - *(float *)(param_1 + 0x84));
  puVar1[0xe] = (uint)(*(float *)(param_1 + 0x78) + *(float *)(param_1 + 0x80));
  uVar5 = *(uint *)(param_1 + 0xac);
  uVar14 = *(uint *)(param_1 + 0xa8);
  puVar1[0x13] = *(uint *)(param_1 + 0x90);
  puVar1[0xf] = uVar5;
  puVar1[0x10] = uVar14;
  puVar1[0x11] = (uint)(*(float *)(param_1 + 0x9c) - *(float *)(param_1 + 0xa4));
  puVar1[0x12] = (uint)(*(float *)(param_1 + 0x98) + *(float *)(param_1 + 0xa0));
  puVar1[0x17] = *(uint *)(param_1 + 0xb0);
  fVar18 = pfVar2[5];
  fVar25 = pfVar2[1];
  fVar22 = pfVar2[6];
  fVar16 = pfVar2[7];
  fVar24 = pfVar2[4];
  fVar21 = pfVar2[2];
  fVar12 = pfVar2[3];
  fVar23 = *pfVar2;
  fVar7 = *(float *)(param_1 + 0xc);
  fVar8 = *(float *)(param_1 + 0x10);
  fVar10 = *(float *)(param_1 + 0x14);
  fVar19 = *param_2;
  fVar20 = param_2[1];
  puVar1[0x14] = (uint)(pfVar2[9] * fVar8 + pfVar2[10] * fVar10 + pfVar2[0xb] + pfVar2[8] * fVar7 +
                       param_2[2]);
  puVar1[0x15] = (uint)(fVar18 * fVar8 + fVar22 * fVar10 + fVar16 + fVar24 * fVar7 + fVar20);
  puVar1[0x16] = (uint)(fVar25 * fVar8 + fVar21 * fVar10 + fVar12 + fVar23 * fVar7 + fVar19);
  if (*(char *)(iVar6 + 0x293) != '\0') {
    uVar5 = *(uint *)(param_1 + 0x3c);
    uVar14 = *(uint *)(param_1 + 0x40);
    puVar1[0x18] = *(uint *)(param_1 + 0x44);
    puVar1[0x19] = uVar14;
    puVar1[0x1a] = uVar5;
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0052b4f8) */
/* WARNING: Removing unreachable block (ram,0x0052b510) */
/* WARNING: Removing unreachable block (ram,0x0052b51c) */
/* WARNING: Removing unreachable block (ram,0x0052b524) */
/* WARNING: Removing unreachable block (ram,0x0052b52c) */
/* WARNING: Removing unreachable block (ram,0x0052b534) */
/* WARNING: Removing unreachable block (ram,0x0052b544) */
/* WARNING: Removing unreachable block (ram,0x0052b5d4) */
/* WARNING: Removing unreachable block (ram,0x0052b564) */
/* WARNING: Removing unreachable block (ram,0x0052b574) */

int fn_0052b3b8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined1 *param_6,undefined4 param_7)

{
  int *piVar1;
  int *unaff_r6;
  int iVar2;
  int *piVar3;
  int local_48 [2];
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (param_6 == (undefined1 *)0x0) {
    param_6 = auStack_40;
    param_7 = 0;
  }
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  fn_00170704();
  if ((DAT_008ec111 == '\0') || (DAT_008ec112 != '\0')) {
    iVar2 = -0x375f8c08;
    fn_001707b4(&DAT_008ec0e0);
  }
  else if ((DAT_008ec0d8 == (int *)0x0) && (iVar2 = fn_0019f340(&DAT_008ec0d0), iVar2 < 0)) {
    fn_001707b4(&DAT_008ec0e0);
  }
  else {
    unaff_r6 = DAT_008ec0d8;
    if (DAT_008ec0d8 != (int *)0x0) {
      if ((int *)*DAT_008ec0d8 == DAT_008ec0d8) {
        DAT_008ec0d8 = (int *)0x0;
      }
      else {
        iVar2 = *DAT_008ec0d8;
        piVar3 = DAT_008ec0d8 + 1;
        DAT_008ec0d8 = (int *)DAT_008ec0d8[1];
        *(int *)*piVar3 = iVar2;
        *(int *)(*unaff_r6 + 4) = unaff_r6[1];
      }
      unaff_r6[1] = 0;
      *unaff_r6 = 0;
    }
    piVar3 = DAT_008ec0d4;
    DAT_008ec0fc = DAT_008ec0fc + -1;
    if (DAT_008ec0d4 == (int *)0x0) {
      unaff_r6[1] = (int)unaff_r6;
      *unaff_r6 = (int)unaff_r6;
      DAT_008ec0d4 = unaff_r6;
    }
    else {
      unaff_r6[1] = (int)DAT_008ec0d4;
      *(int **)(*piVar3 + 4) = unaff_r6;
      *unaff_r6 = *piVar3;
      *piVar3 = (int)unaff_r6;
    }
    iVar2 = 0;
    DAT_008ec0f4 = DAT_008ec0f4 + 1;
    fn_001707b4(&DAT_008ec0e0);
  }
  if (-1 < iVar2) {
    local_48[0] = unaff_r6[2];
    iVar2 = fn_0052ace4(local_48,local_34,uStack_30,uStack_2c,local_28,param_5,param_6,param_7);
    if (-1 < iVar2) {
      if (unaff_r6 != (int *)0x0) {
        fn_00170704();
        if (DAT_008ec111 == '\0') {
          fn_001707b4(&DAT_008ec0e0);
        }
        else {
          if ((int *)*unaff_r6 == unaff_r6) {
            DAT_008ec0d4 = (int *)0x0;
          }
          else {
            if (DAT_008ec0d4 == unaff_r6) {
              DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
            }
            *(int *)unaff_r6[1] = *unaff_r6;
            *(int *)(*unaff_r6 + 4) = unaff_r6[1];
          }
          unaff_r6[1] = 0;
          *unaff_r6 = 0;
          piVar1 = DAT_008ec0dc;
          piVar3 = DAT_008ec0d8;
          DAT_008ec0f4 = DAT_008ec0f4 + -1;
          if (unaff_r6[2] == 0) {
            if (DAT_008ec0dc == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0dc = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0dc;
              *(int **)(*piVar1 + 4) = unaff_r6;
              *unaff_r6 = *piVar1;
              *piVar1 = (int)unaff_r6;
            }
            DAT_008ec0f8 = DAT_008ec0f8 + 1;
          }
          else {
            if (DAT_008ec0d8 == (int *)0x0) {
              unaff_r6[1] = (int)unaff_r6;
              *unaff_r6 = (int)unaff_r6;
              DAT_008ec0d8 = unaff_r6;
            }
            else {
              unaff_r6[1] = (int)DAT_008ec0d8;
              *(int **)(*piVar3 + 4) = unaff_r6;
              *unaff_r6 = *piVar3;
              *piVar3 = (int)unaff_r6;
            }
            DAT_008ec0fc = DAT_008ec0fc + 1;
          }
          fn_0015dfc0(&DAT_008ec0ec);
          fn_001707b4(&DAT_008ec0e0);
        }
      }
      return 0;
    }
    if (unaff_r6 != (int *)0x0) {
      fn_00170704();
      if (DAT_008ec111 == '\0') {
        fn_001707b4(&DAT_008ec0e0);
      }
      else {
        if ((int *)*unaff_r6 == unaff_r6) {
          DAT_008ec0d4 = (int *)0x0;
        }
        else {
          if (DAT_008ec0d4 == unaff_r6) {
            DAT_008ec0d4 = (int *)DAT_008ec0d4[1];
          }
          *(int *)unaff_r6[1] = *unaff_r6;
          *(int *)(*unaff_r6 + 4) = unaff_r6[1];
        }
        unaff_r6[1] = 0;
        *unaff_r6 = 0;
        piVar1 = DAT_008ec0dc;
        piVar3 = DAT_008ec0d8;
        DAT_008ec0f4 = DAT_008ec0f4 + -1;
        if (unaff_r6[2] == 0) {
          if (DAT_008ec0dc == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0dc = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0dc;
            *(int **)(*piVar1 + 4) = unaff_r6;
            *unaff_r6 = *piVar1;
            *piVar1 = (int)unaff_r6;
          }
          DAT_008ec0f8 = DAT_008ec0f8 + 1;
        }
        else {
          if (DAT_008ec0d8 == (int *)0x0) {
            unaff_r6[1] = (int)unaff_r6;
            *unaff_r6 = (int)unaff_r6;
            DAT_008ec0d8 = unaff_r6;
          }
          else {
            unaff_r6[1] = (int)DAT_008ec0d8;
            *(int **)(*piVar3 + 4) = unaff_r6;
            *unaff_r6 = *piVar3;
            *piVar3 = (int)unaff_r6;
          }
          DAT_008ec0fc = DAT_008ec0fc + 1;
        }
        fn_0015dfc0(&DAT_008ec0ec);
        fn_001707b4(&DAT_008ec0e0);
      }
    }
  }
  return iVar2;
}


