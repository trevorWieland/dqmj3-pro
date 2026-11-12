#include "004f7504_004f7504.h"



undefined4 fn_004f7504(int *param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  byte bVar3;
  longlong lVar4;
  undefined2 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  undefined1 *puVar12;
  uint *puVar13;
  int *piVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  undefined4 uVar25;
  undefined8 uVar26;
  int local_80;
  int local_7c;
  int local_78;
  undefined *local_74 [4];
  undefined4 local_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined *local_58 [13];
  
  fn_0014f590(local_74);
  uVar21 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  local_58[0] = (undefined *)param_1[3];
  puVar6 = (undefined4 *)fn_0050953c(param_1[4],local_58);
  (**(code **)(*(int *)*puVar6 + 0x28))();
  iVar7 = (**(code **)(*(int *)*puVar6 + 0x2c))();
  while (iVar7 == 0) {
    puVar8 = (undefined4 *)fn_006d9a38(puVar6);
    iVar7 = puVar8[1];
    uVar1 = *(undefined1 *)(iVar7 + 1);
    local_5c = puVar8 + 3;
    uVar25 = *puVar8;
    uVar9 = fn_006db024(puVar8);
    uVar2 = *(undefined1 *)(puVar8 + 7);
    local_78 = CONCAT31(((unsigned int)(local_78) >> 8) & 0xffffff,uVar1);
    local_80 = iVar7 + 0x14;
    local_7c = uVar25;
    fn_004ed810(local_74,local_5c);
    local_64 = uVar9;
    local_60 = uVar2;
    fn_004f4594(param_1,&local_80);
    (**(code **)(*(int *)*puVar6 + 0x30))();
    iVar7 = (**(code **)(*(int *)*puVar6 + 0x2c))((int *)*puVar6);
  }
  uVar5 = (**(code **)(*param_1 + 0xc))(param_1);
  local_5c = (undefined4 *)CONCAT22(uVar5,1);
  puVar6 = (undefined4 *)fn_0050953c(param_1[4],&local_5c);
  (**(code **)(*(int *)*puVar6 + 0x28))();
  iVar7 = (**(code **)(*(int *)*puVar6 + 0x2c))();
  while (iVar7 == 0) {
    iVar7 = fn_006d9a38(puVar6);
    uVar10 = (uint)*(byte *)(*(int *)(iVar7 + 4) + 1);
    uVar22 = uVar21;
    if (uVar21 < 0xc) {
      uVar22 = uVar10;
    }
    if (uVar22 < 0xc) {
      if (uVar21 <= uVar10) {
        uVar10 = uVar10 - 1;
      }
      iVar18 = param_1[0x10] + uVar10 * 0x68;
      iVar11 = fn_006db038(iVar18);
      if (((iVar11 != 0) && (iVar7 = fn_005171e8(iVar18,iVar7), -1 < iVar7)) && (DAT_008bf4a0 != 0)
         ) {
        fn_004eea84(DAT_008bf4a0,7);
        fn_004f15b4();
        if (DAT_008bf4a0 != 0) {
          fn_004eea84(DAT_008bf4a0,8);
          fn_004f15b4();
        }
      }
    }
    (**(code **)(*(int *)*puVar6 + 0x30))();
    iVar7 = (**(code **)(*(int *)*puVar6 + 0x2c))();
  }
  uVar22 = 0;
  uVar21 = 0;
  if (param_1[0xf] != 0) {
    do {
      iVar7 = fn_006db038(param_1[0x10] + uVar22 * 0x68);
      if (iVar7 != 0) {
        while (iVar7 = fn_00517618(param_1[0x10] + uVar22 * 0x68,param_1[0x13],&local_5c,
                                    param_1[0x12]), -1 < iVar7) {
          if (DAT_008bf4a0 != 0) {
            uVar9 = *(undefined4 *)(param_1[0x10] + uVar22 * 0x68 + 0x30);
            uVar26 = fn_004eea84(DAT_008bf4a0,8);
            fn_004f15b4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),uVar9,0);
          }
          uVar1 = *(undefined1 *)(param_1[0x10] + uVar22 * 0x68 + 9);
          fn_0014f590(local_58);
          iVar7 = fn_006d9ef0(DAT_008bf4cc,local_58,uVar1);
          if (-1 < iVar7) {
            local_80 = param_1[0x13];
            local_7c = (int)local_5c;
            local_78 = CONCAT31(((unsigned int)(local_78) >> 8) & 0xffffff,uVar1);
            fn_004ed810(local_74,local_58);
            local_64 = 0;
            local_60 = 0;
            fn_004f4594(param_1,&local_80);
          }
          local_58[0] = &DAT_00856c94;
        }
      }
      uVar21 = param_1[0xf];
      uVar22 = uVar22 + 1;
    } while (uVar22 < uVar21);
  }
  uVar22 = 0;
  if (uVar21 != 0) {
    do {
      iVar7 = fn_006db038(param_1[0x10] + uVar22 * 0x68);
      if (iVar7 != 0) {
        fn_00517930(param_1[0x10] + uVar22 * 0x68,param_1[4]);
      }
      uVar22 = uVar22 + 1;
    } while (uVar22 < (uint)param_1[0xf]);
  }
  local_74[0] = &DAT_00856c94;
  local_80 = 0;
  local_7c = 0;
  uVar21 = *(uint *)(DAT_008bf4d4 + 8);
  uVar22 = *(uint *)(DAT_008bf4d4 + 0xc);
  local_78 = *(int *)(DAT_008bf4cc + 0xa4);
  if (local_78 - 0x100000U < 0x3ff00000) {
    if (((*(byte *)(DAT_008bf4e0 + 99) < 0xc) &&
        (*(byte *)(DAT_008bf4e0 + 99) == *(byte *)(DAT_008bf4e0 + 0x62))) &&
       ((*(int *)(DAT_008bf4e0 + 0x2c) != 0 &&
        (uVar10 = *(uint *)(*(int *)(DAT_008bf4e0 + 0x2c) + 0x5c), uVar10 != 0)))) {
      uVar20 = 0;
      uVar19 = 1;
      uVar16 = 0;
      do {
        if ((((uVar10 & 1) != 0) &&
            (puVar12 = (undefined1 *)
                       fn_004f9c30(*(undefined4 *)(DAT_008bf4e0 + 0x30),uVar16 & 0xff),
            (int)puVar12 < 0)) && (puVar12 != &DAT_d8a1482e)) {
          uVar20 = uVar20 | uVar19;
        }
        uVar10 = uVar10 >> 1;
        if (uVar10 == 0) break;
        uVar16 = uVar16 + 1;
        uVar19 = uVar19 << 1;
      } while ((int)uVar16 < 0xb);
      *(uint *)(*(int *)(DAT_008bf4e0 + 0x2c) + 0x5c) = uVar20;
    }
    iVar7 = 0;
    piVar15 = (int *)(DAT_008bf4cc + 0x3c);
    while (piVar15 != (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c)) {
      piVar14 = piVar15 + 1;
      iVar11 = *piVar15;
      iVar7 = iVar7 + 1;
      piVar15 = piVar14;
      if (iVar11 != local_78) {
        bVar24 = false;
        if (*(char *)(iVar11 + 0x20) == '\x05') {
          uVar10 = param_1[9];
          if ((((*(int *)(DAT_008bf4d4 + 100) != 0) && (*(byte *)(iVar11 + 0x14) < 0xc)) &&
              (*(byte *)(local_78 + 0x14) < 0xc)) &&
             ((iVar18 = fn_006da484(*(int *)(DAT_008bf4d4 + 100),*(byte *)(local_78 + 0x14),
                                     *(byte *)(iVar11 + 0x14),local_74), -1 < iVar18 &&
              (*(char *)(iVar11 + 0x14) != (char)local_74[0])))) {
            iVar18 = fn_006dbec0(DAT_008bf4d4);
            uVar10 = uVar10 + iVar18 * 2;
          }
          puVar13 = (uint *)fn_004f0ce8();
          lVar4 = (ulonglong)uVar10 * (ulonglong)*puVar13;
          uVar19 = (uint)lVar4;
          uVar10 = *puVar13 * ((int)uVar10 >> 0x1f) +
                   puVar13[1] * uVar10 + (int)((ulonglong)lVar4 >> 0x20) + *(int *)(iVar11 + 100) +
                   (uint)CARRY4(*(uint *)(iVar11 + 0x60),uVar19);
          bVar24 = uVar10 <= uVar22 &&
                   (uint)(uVar21 <= *(uint *)(iVar11 + 0x60) + uVar19) <= uVar10 - uVar22;
        }
        bVar23 = *(char *)(iVar11 + 0x68) != '\0';
        if (bVar23) {
          bVar24 = true;
        }
        if ((bVar23 || bVar24) || (*(char *)(iVar11 + 0x20) == '\x06')) {
          bVar3 = *(byte *)(iVar11 + 0x14);
          iVar18 = fn_006d92e4(DAT_008bf4e0,bVar3);
          if (iVar18 != 0) {
            if ((*(byte *)(DAT_008bf4e0 + 0x62) == bVar3) && (bVar24)) {
              local_7c = 1;
            }
            fn_00505a0c(DAT_008bf4e0,bVar3);
            if (*(byte *)(*(int *)(DAT_008bf4e0 + 0x10) + 0x78) == bVar3) {
              fn_00500560(*(int *)(DAT_008bf4e0 + 0x10),bVar3);
            }
            else {
              local_80 = 1;
              if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
                *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
              }
            }
          }
          if (((*(int *)(DAT_008bf4d4 + 100) != 0) && (bVar3 < 0xc)) && (local_7c == 0)) {
            fn_005118f4(*(int *)(DAT_008bf4d4 + 100),bVar3);
          }
          (**(code **)(**(int **)(iVar11 + 0x30) + 0x18))(*(int **)(iVar11 + 0x30),iVar11);
          fn_0051ba28(DAT_008c06a0,iVar11);
          fn_005191c0(DAT_008c0674,iVar11);
          fn_0051c5c8(iVar11);
          fn_0051ca8c(iVar11);
          fn_0050b66c(DAT_008bf4cc,iVar11);
          fn_004fca08(*(undefined4 *)(DAT_008bf4e0 + 0x14),bVar3);
          fn_0051da28(DAT_008bf4d4);
          iVar11 = 0;
          piVar15 = (int *)(DAT_008bf4cc + 0x3c);
          if (0 < iVar7) {
            piVar14 = (int *)(DAT_008bf4cc + *(int *)(DAT_008bf4cc + 0x38) * 4 + 0x3c);
            do {
              piVar15 = piVar15 + 1;
              bVar24 = SBORROW4((int)piVar15,(int)piVar14);
              iVar18 = (int)piVar15 - (int)piVar14;
              if (piVar15 != piVar14) {
                iVar11 = iVar11 + 1;
                bVar24 = SBORROW4(iVar7,iVar11);
                iVar18 = iVar7 - iVar11;
              }
            } while ((piVar15 != piVar14 && iVar7 != iVar11) && iVar18 < 0 == bVar24);
          }
        }
      }
    }
    bVar3 = *(byte *)(DAT_008bf4e0 + 99);
    bVar24 = bVar3 == 0xb;
    if (bVar3 < 0xc) {
      bVar24 = bVar3 == *(byte *)(DAT_008bf4e0 + 0x62);
    }
    if (bVar24) {
      uVar10 = *(uint *)(DAT_008bf4e0 + 0x6c);
      uVar19 = 0;
      do {
        if (((uVar10 & 1) != 0) && (iVar7 = fn_0050b080(DAT_008bf4cc,uVar19 & 0xff), iVar7 == 0)) {
          fn_00505a0c(DAT_008bf4e0,uVar19 & 0xff);
          if ((uint)*(byte *)(*(int *)(DAT_008bf4e0 + 0x10) + 0x78) == (uVar19 & 0xff)) {
            fn_00500560(*(int *)(DAT_008bf4e0 + 0x10),uVar19 & 0xff);
          }
          else {
            local_80 = 1;
            if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
              *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
            }
          }
          if (*(int *)(DAT_008bf4d4 + 100) != 0) {
            fn_005118f4(*(int *)(DAT_008bf4d4 + 100),uVar19 & 0xff);
          }
        }
        uVar10 = uVar10 >> 1;
      } while ((uVar10 != 0) && (uVar19 = uVar19 + 1, uVar19 < 0xb));
    }
    if (local_80 == 0) {
      bVar3 = *(byte *)(DAT_008bf4e0 + 99);
      bVar24 = bVar3 == 0xb;
      if (bVar3 < 0xc) {
        bVar24 = bVar3 == *(byte *)(DAT_008bf4e0 + 0x62);
      }
      if (bVar24) {
        if ((1 < *(ushort *)(DAT_008bf4e0 + 0x5c)) &&
           ((*(char *)(DAT_008bf4e0 + 0x69) == '\0' ||
            (*(char *)(*(int *)(DAT_008bf4e0 + 0x20) + 0x6f) == '\0')))) {
          if ((char)param_1[0xe] != '\0') {
            *(undefined1 *)(param_1 + 0xe) = 0;
            fn_004f5004(param_1,1);
          }
          uVar10 = 0;
          if (param_1[0xf] != 0) {
            do {
              iVar7 = fn_006db038(param_1[0x10] + uVar10 * 0x68);
              if ((iVar7 != 0) &&
                 (puVar13 = (uint *)(param_1[0x18] + uVar10 * 8), uVar16 = *puVar13,
                 uVar19 = puVar13[1], uVar19 < uVar22 || uVar22 - uVar19 < (uint)(uVar16 <= uVar21))
                 ) {
                fn_00124e48(&local_80,uVar21 - uVar16);
                iVar7 = fn_006db058(&local_80);
                uVar19 = fn_006db058(&local_80);
                iVar7 = fn_00517cf0(param_1[0x10] + uVar10 * 0x68,param_1[0x15],
                                     ((iVar7 - (uVar19 & 3)) + 4) *
                                     (uint)*(ushort *)(DAT_008bf4e0 + 0x5e) + 0xc);
                if ((-1 < iVar7) && (DAT_008bf4a0 != 0)) {
                  iVar7 = param_1[0x10];
                  uVar26 = fn_004eea84(DAT_008bf4a0,7);
                  fn_004f15b4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),
                               *(undefined4 *)(iVar7 + uVar10 * 0x68 + 0x1c),0);
                }
                uVar17 = param_1[10];
                piVar15 = (int *)(param_1[0x18] + uVar10 * 8);
                puVar13 = (uint *)fn_004f0ce8();
                uVar20 = *puVar13;
                uVar16 = puVar13[1];
                lVar4 = (ulonglong)uVar17 * (ulonglong)uVar20;
                uVar19 = (uint)lVar4;
                *piVar15 = uVar19 + uVar21;
                piVar15[1] = uVar20 * ((int)uVar17 >> 0x1f) +
                             uVar16 * uVar17 + (int)((ulonglong)lVar4 >> 0x20) + uVar22 +
                             (uint)CARRY4(uVar19,uVar21);
                fn_0051811c(&local_80);
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < (uint)param_1[0xf]);
          }
        }
        if ((((*(char *)(DAT_008bf4e0 + 0x69) != '\0') &&
             (*(char *)((int)*(int **)(DAT_008bf4e0 + 0x20) + 0x6f) == '\0')) &&
            (iVar7 = (**(code **)(**(int **)(DAT_008bf4e0 + 0x20) + 0x1c))(), iVar7 != 0)) &&
           (iVar7 = fn_004f8e14(*(undefined4 *)(DAT_008bf4e0 + 0x18),0,1), iVar7 != 0)) {
          fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0x18),0);
          *(undefined1 *)(DAT_008bf4e0 + 0x65) = 9;
        }
      }
      else if ((*(char *)(DAT_008bf4e0 + 0x69) != '\0') && (*(char *)(DAT_008bf4e0 + 0x82) != '\0'))
      {
        if (*(char *)(*(int *)(DAT_008bf4e0 + 0x20) + 0x6f) == '\0') {
          iVar7 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
          if (iVar7 != 0) {
            iVar11 = fn_006d92e4(DAT_008bf4e0,*(undefined1 *)(iVar7 + 0x14));
            if (iVar11 != 0) {
              fn_00505a0c(DAT_008bf4e0,*(undefined1 *)(iVar7 + 0x14));
              if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
                *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
              }
            }
            (**(code **)(**(int **)(iVar7 + 0x30) + 0x18))(*(int **)(iVar7 + 0x30),iVar7);
            fn_0051ba28(DAT_008c06a0,iVar7);
            fn_005191c0(DAT_008c0674,iVar7);
            fn_0051c5c8(iVar7);
            fn_0051ca8c(iVar7);
            fn_0050b66c(DAT_008bf4cc,iVar7);
            fn_0051da28(DAT_008bf4d4);
          }
          iVar7 = fn_005028bc(*(undefined4 *)(DAT_008bf4e0 + 0x20),0,0xfd);
          if (iVar7 != 0) {
            fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0x20),0);
          }
        }
        *(undefined1 *)(DAT_008bf4e0 + 0x82) = 0;
      }
    }
    else {
      bVar3 = *(byte *)(DAT_008bf4e0 + 99);
      bVar24 = bVar3 == 0xb;
      if (bVar3 < 0xc) {
        bVar24 = bVar3 == *(byte *)(DAT_008bf4e0 + 0x62);
      }
      if (bVar24) {
        if ((*(char *)(DAT_008bf4e0 + 0x69) == '\0') ||
           (*(char *)(*(int *)(DAT_008bf4e0 + 0x20) + 0x6f) == '\0')) {
          fn_004f5004(param_1,1);
        }
        else {
          *(undefined1 *)(param_1 + 0xe) = 1;
        }
      }
      else if (local_7c != 0) {
        uVar22 = *(uint *)(DAT_008bf4e0 + 0x6c);
        uVar21 = 0;
        do {
          if (((uVar22 & 1 << (uVar21 & 0xff)) != 0) &&
             (iVar7 = fn_0050b080(DAT_008bf4cc,uVar21 & 0xff), iVar7 == 0)) {
            fn_00505a0c(DAT_008bf4e0,uVar21 & 0xff);
            if (*(short *)(DAT_008bf4e0 + 0x5c) != 0) {
              *(short *)(DAT_008bf4e0 + 0x5c) = *(short *)(DAT_008bf4e0 + 0x5c) + -1;
            }
            fn_0051da28(DAT_008bf4d4);
          }
          uVar21 = uVar21 + 1 & 0xffff;
        } while (uVar21 < 0xb);
        if (*(char *)(DAT_008bf4e0 + 0x69) == '\0') {
          fn_00505974();
          iVar7 = fn_006d897c(*(undefined4 *)(DAT_008bf4e0 + 8));
          if (iVar7 == 0) {
            *(undefined1 *)(DAT_008bf4e0 + 0x65) = 8;
            fn_00505a04();
          }
          else {
            fn_004f3498(*(undefined4 *)(DAT_008bf4e0 + 8),0xd8a148e1);
            (**(code **)(**(int **)(DAT_008bf4e0 + 8) + 8))(*(int **)(DAT_008bf4e0 + 8),1);
          }
          fn_005044fc(DAT_008bf4e0);
        }
        else {
          if (*(char *)(DAT_008bf4e0 + 0x66) == '\x02') {
            local_80 = 0;
            iVar7 = fn_005010ac(*(undefined4 *)(DAT_008bf4e0 + 0x20),0,0,0);
          }
          else {
            iVar7 = fn_005028bc(*(undefined4 *)(DAT_008bf4e0 + 0x20),0,0xfd);
          }
          if (iVar7 != 0) {
            fn_004efcf4(*(undefined4 *)(DAT_008bf4e0 + 0x20),0);
          }
        }
      }
    }
  }
  return 0;
}


