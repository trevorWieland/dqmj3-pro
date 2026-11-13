#include "0052b914_00538914.h"



uint * fn_00538914(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  uint *puVar2;
  code *pcVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int local_88;
  uint *local_84;
  undefined4 local_80;
  uint *local_7c;
  float local_78;
  float local_74;
  float local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  int local_60;
  uint *local_5c;
  int local_34;
  undefined4 uStack_30;
  int local_2c;
  int local_28;
  
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_3 + 0x28c) = 0;
  if ((((*(char *)(param_1 + 0x14) == '\0') && (iVar14 = *(int *)(param_3 + 0xe0), iVar14 != 0)) &&
      (*(int *)(iVar14 + 0x154) != 0)) && (*(int *)(*(int *)(iVar14 + 0x154) + 0x5814) != 0)) {
    DAT_008c3454 = 0;
    uVar10 = 0;
    uVar18 = (ulonglong)*(uint *)(param_3 + 0x264) << 0x20;
    uVar19 = *(undefined4 *)(param_3 + 0x268);
    local_34 = param_1;
    uStack_30 = param_2;
    local_2c = param_3;
    local_28 = param_4;
    DAT_008c3450 = (uint *)param_2;
    puVar2 = (uint *)fn_0053e3f4(*(undefined4 *)(param_3 + 0xf0));
    if (puVar2 != (uint *)0x0) {
      iVar11 = *(int *)(local_2c + 0x248);
      if (iVar11 != 0 && *(int *)(local_2c + 0x240) != 0) {
        DAT_008c3450 = puVar2;
        fn_001694e4(puVar2,*(int *)(local_2c + 0x240),iVar11 << 2);
        puVar2 = puVar2 + iVar11;
      }
    }
    DAT_008c3450 = puVar2;
    iVar11 = fn_0053fb0c(**(undefined4 **)(local_2c + 0x1c),local_2c);
    if (iVar11 != 0) {
      local_88 = local_2c;
      local_84 = DAT_008c3450;
      pcVar3 = (code *)fn_0053fb0c(**(undefined4 **)(local_2c + 0x1c),local_2c);
      DAT_008c3450 = (uint *)(*pcVar3)(&local_88);
    }
    uVar21 = 0x3f800000;
    uVar20 = CONCAT44(0x3f000000,uVar19);
    puVar2 = (uint *)0x0;
    iVar11 = *(int *)(local_2c + 0x1c);
    local_6c = *(undefined4 *)(iVar11 + 0x23c);
    local_74 = *(float *)(*(int *)(local_2c + 0xdc) + 0x4b8);
    local_78 = *(float *)(iVar11 + 0x230) * local_74;
    local_74 = *(float *)(iVar11 + 0x234) * local_74;
    local_70 = *(float *)(iVar11 + 0x238) * *(float *)(*(int *)(local_2c + 0xdc) + 0x4b8);
    do {
      iVar11 = *(int *)(iVar14 + 0x154);
      if (iVar11 == 0) break;
      piVar13 = (int *)(iVar11 + 0x587c);
      uVar1 = *(ushort *)(*(int *)(iVar11 + 0x5814) + 0x55a);
      *piVar13 = 0;
      piVar12 = (int *)(*(int *)(iVar11 + 0x5814) + (uint)uVar1);
      if ((*(int *)(iVar14 + 8) != 0) && (*(int *)(*(int *)(iVar14 + 0x154) + 0x5814) != 0)) {
        *(int *)(local_34 + 0x10) = *(int *)(local_34 + 0x10) + 1;
        *(int *)(local_34 + 8) = *(int *)(local_34 + 8) + 1;
        *(int *)(local_34 + 4) = *(int *)(local_34 + 4) + 1;
        iVar5 = *(int *)(iVar14 + 0x154);
        iVar8 = piVar12[7];
        iVar6 = *(int *)(iVar5 + 0x580c);
        iVar9 = iVar8;
        if (iVar6 < iVar8) {
          iVar9 = iVar6;
        }
        if (((1 < iVar9) && (3 < iVar9 * 2 - 2U)) && (2 < iVar9)) {
          local_68 = iVar9 + -2;
          fVar15 = (float)VectorSignedToFloat(local_68,(byte)(in_fpscr >> 0x16) & 3);
          if ((piVar12[3] == 1) && (*(int *)(iVar5 + 0x5818) < iVar8)) {
            VectorSignedToFloat(iVar8 + -2,(byte)(in_fpscr >> 0x16) & 3);
          }
          uVar17 = (ulonglong)(uint)((float)uVar21 / fVar15);
          local_64 = iVar9 + -1;
          *(uint *)(iVar5 + 0x5878) = uVar10;
          if (0 < local_64) {
            iVar6 = iVar6 + -2;
          }
          iVar9 = 0;
          uVar18 = uVar18 & 0xffffffff00000000;
          if (0 < local_64) {
            local_60 = iVar6;
            do {
              fVar15 = (float)VectorSignedToFloat(local_60,(byte)(in_fpscr >> 0x16) & 3);
              fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
              iVar5 = (*(int *)(*(int *)(iVar14 + 0x154) + 8) -
                      (int)(fVar16 * (float)uVar17 * fVar15 + (float)((ulonglong)uVar20 >> 0x20))) +
                      -1;
              if (iVar5 < 0) {
                iVar5 = iVar5 + piVar12[4];
              }
              if (puVar2 == (uint *)0x0) {
                puVar2 = DAT_008c3450;
              }
              local_7c = DAT_008c3450;
              local_88 = local_28;
              puVar4 = (uint *)fn_005390a0(local_34,DAT_008c3450,iVar11,iVar5);
              uVar10 = uVar10 + 2;
              DAT_008c3450 = puVar4;
              *piVar13 = *piVar13 + 2;
              DAT_008c3454 = DAT_008c3454 + 2;
              if (DAT_008c3454 == 0x12) {
                local_88 = (int)(uVar18 >> 0x20);
                local_84 = (uint *)uVar20;
                local_80 = 0;
                local_5c = puVar4;
                local_88 = fn_00539d4c(local_34,puVar4,iVar14,&local_78);
                iVar5 = DAT_008c3474;
                DAT_008c3450 = (uint *)local_88;
                fn_001694e4(local_88,*(undefined4 *)(DAT_008c3474 + 0x964),
                             *(int *)(DAT_008c3474 + 0x968) << 2);
                DAT_008c3450 = (uint *)(local_88 + *(int *)(iVar5 + 0x968) * 4);
                if ((piVar12[1] == 1) && (*piVar12 != 0)) {
                  local_88 = (int)local_5c - (int)puVar2 >> 2;
                  fn_001694e4(DAT_008c3450,puVar2,local_88 << 2);
                  DAT_008c3450 = DAT_008c3450 + local_88;
                  local_88 = (int)(uVar18 >> 0x20);
                  local_84 = (uint *)uVar20;
                  local_80 = 1;
                  local_88 = fn_00539d4c(local_34,DAT_008c3450,iVar14,&local_78);
                  iVar5 = DAT_008c3474;
                  DAT_008c3450 = (uint *)local_88;
                  fn_001694e4(local_88,*(undefined4 *)(DAT_008c3474 + 0x964),
                               *(int *)(DAT_008c3474 + 0x968) << 2);
                  DAT_008c3450 = (uint *)(local_88 + *(int *)(iVar5 + 0x968) * 4);
                  uVar10 = uVar10 + DAT_008c3454;
                }
                puVar2 = DAT_008c3450;
                DAT_008c3454 = 0;
                fn_001694e4(DAT_008c3450,local_7c,0x90);
                *DAT_008c3450 = DAT_008c3454 * 4 + 1U | 0x80000000;
                DAT_008c3450 = DAT_008c3450 + 0x24;
                DAT_008c3454 = 0;
                if (iVar9 != local_68) {
                  uVar10 = uVar10 + 2;
                  DAT_008c3454 = 2;
                }
              }
              iVar9 = iVar9 + 1;
            } while (iVar9 < local_64);
          }
          puVar4 = DAT_008c3450;
          if ((DAT_008c3454 != 0) && (2 < uVar10)) {
            local_88 = (int)(uVar18 >> 0x20);
            local_84 = (uint *)uVar20;
            local_80 = 0;
            iVar9 = fn_00539d4c(local_34,DAT_008c3450,iVar14,&local_78);
            iVar11 = DAT_008c3474;
            puVar7 = (undefined4 *)(DAT_008c3474 + 0x970);
            DAT_008c3450 = (uint *)iVar9;
            *(int *)(*(int *)(DAT_008c3474 + 0x970) + 0x10) = DAT_008c3454;
            fn_001694e4(iVar9,*puVar7,*(int *)(iVar11 + 0x974) << 2);
            DAT_008c3450 = (uint *)(iVar9 + *(int *)(iVar11 + 0x974) * 4);
            if ((piVar12[1] == 1) && (*piVar12 != 0)) {
              iVar11 = (int)puVar4 - (int)puVar2 >> 2;
              fn_001694e4(DAT_008c3450,puVar2,iVar11 << 2);
              DAT_008c3450 = DAT_008c3450 + iVar11;
              local_88 = (int)(uVar18 >> 0x20);
              local_84 = (uint *)uVar20;
              local_80 = 1;
              iVar9 = fn_00539d4c(local_34,DAT_008c3450,iVar14,&local_78);
              iVar11 = DAT_008c3474;
              puVar7 = (undefined4 *)(DAT_008c3474 + 0x970);
              DAT_008c3450 = (uint *)iVar9;
              *(int *)(*(int *)(DAT_008c3474 + 0x970) + 0x10) = DAT_008c3454;
              fn_001694e4(iVar9,*puVar7,*(int *)(iVar11 + 0x974) << 2);
              DAT_008c3450 = (uint *)(iVar9 + *(int *)(iVar11 + 0x974) * 4);
              uVar10 = uVar10 + DAT_008c3454;
            }
            puVar2 = (uint *)0x0;
            DAT_008c3454 = 0;
          }
        }
      }
      iVar14 = *(int *)(iVar14 + 0x14c);
    } while (iVar14 != 0);
    *(uint *)(local_2c + 0x28c) = uVar10;
    *(uint *)(local_34 + 0xc) = uVar10;
    iVar14 = DAT_008c3474;
    puVar2 = DAT_008c3450;
    fn_001694e4(DAT_008c3450,*(undefined4 *)(DAT_008c3474 + 0x958),
                 *(int *)(DAT_008c3474 + 0x95c) << 2);
    puVar2 = puVar2 + *(int *)(iVar14 + 0x95c);
  }
  else {
    puVar2 = DAT_008c3450;
  }
  return puVar2;
}



/* WARNING: Removing unreachable block (ram,0x0052ba54) */
/* WARNING: Removing unreachable block (ram,0x0052ba6c) */
/* WARNING: Removing unreachable block (ram,0x0052ba78) */
/* WARNING: Removing unreachable block (ram,0x0052ba80) */
/* WARNING: Removing unreachable block (ram,0x0052ba88) */
/* WARNING: Removing unreachable block (ram,0x0052ba90) */
/* WARNING: Removing unreachable block (ram,0x0052baa0) */
/* WARNING: Removing unreachable block (ram,0x0052bb30) */
/* WARNING: Removing unreachable block (ram,0x0052bac0) */
/* WARNING: Removing unreachable block (ram,0x0052bad0) */

int fn_0052b914(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
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
    iVar2 = fn_0052adb4(local_48,local_34,uStack_30,uStack_2c,local_28,param_5,param_6,param_7);
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


