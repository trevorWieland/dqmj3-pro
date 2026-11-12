#include "004fbcec_004fbcec.h"



undefined4 fn_004fbcec(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  code *pcVar11;
  byte bVar12;
  uint uVar13;
  uint uVar14;
  int *piVar15;
  uint uVar16;
  uint uVar17;
  undefined4 *puVar18;
  undefined4 *puVar19;
  bool bVar20;
  int local_b0 [12];
  undefined1 auStack_80 [84];
  int local_2c;
  
  iVar9 = DAT_008c06a0;
  puVar19 = DAT_008bf4e0;
  if (*(uint *)(DAT_008bf49c + 0x34) <= *(uint *)(param_1 + 0x44) &&
      (uint)(*(uint *)(param_1 + 0x40) <= *(uint *)(DAT_008bf49c + 0x30)) <=
      *(uint *)(DAT_008bf49c + 0x34) - *(uint *)(param_1 + 0x44)) {
    bVar12 = *(byte *)((int)DAT_008bf4e0 + 99);
    uVar17 = (uint)bVar12;
    local_b0[3] = (int)*(byte *)((int)DAT_008bf4e0 + 0x62);
    uVar16 = uVar17;
    if (uVar17 < 0xc) {
      uVar16 = local_b0[3];
    }
    if (uVar16 < 0xc) {
      if ((*(char *)((int)DAT_008bf4e0 + 0x67) == '\x01') || (*(char *)(param_1 + 0xa5) != '\0')) {
        local_b0[7] = 0;
      }
      else {
        local_b0[7] = 1;
      }
      if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
        uVar16 = 0;
        local_2c = 0;
        puVar18 = (undefined4 *)&DAT_00000001;
        fn_00124e48(auStack_80,*(int *)(DAT_008bf4cc + 0xa4),
                     *(uint *)(DAT_008bf49c + 0x30) - *(uint *)(param_1 + 0x40));
        local_b0[1] = 0;
        if (((*(char *)((int)DAT_008bf4e0 + 0x67) == '\x02') && (*(char *)(param_1 + 0xa5) == '\0'))
           && (*(char *)(iVar9 + 0x2b) == '\x02')) {
          local_b0[1] = (short)(ushort)bVar12 * 0x9c4;
        }
        uVar13 = 0;
        if (*(int *)(param_1 + 0x88) != 0) {
          local_b0[4] = param_1 + 0x60;
          do {
            uVar16 = uVar16 | 1 << (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
            iVar4 = fn_006d92e4(puVar19);
            if ((iVar4 == 0) ||
               (puVar5 = (undefined4 *)
                         fn_0050b080(DAT_008bf4cc,
                                      *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar13)),
               puVar5 == (undefined4 *)0x0)) {
LAB_004fbf68:
              puVar5 = (undefined4 *)fn_006db530(iVar9,*(int *)(param_1 + 0x70) + uVar13 * 0x54);
              if (puVar5 == (undefined4 *)0x0) {
                iVar4 = fn_006d6e30(*(int *)(param_1 + 0x70) + uVar13 * 0x54 + 8);
                if (iVar4 != 0) {
                  puVar5 = (undefined4 *)
                           fn_0050b144(DAT_008bf4cc,*(int *)(param_1 + 0x70) + uVar13 * 0x54 + 8);
                  if (((puVar5 != (undefined4 *)0x0) &&
                      ((*(undefined4 **)(DAT_008bf4cc + 0xa4) != puVar5 ||
                       (*(char *)(*(int *)(param_1 + 0x74) + uVar13) ==
                        *(char *)((int)DAT_008bf4e0 + 99))))) &&
                     (iVar4 = fn_006db908(iVar9,puVar5,auStack_80), iVar4 < 0)) goto LAB_004fc018;
                  puVar5 = (undefined4 *)
                           fn_006db790(iVar9,*(int *)(param_1 + 0x70) + uVar13 * 0x54 + 4,0);
                  if (puVar5 == (undefined4 *)0x0) goto LAB_004fc190;
                  if (*(char *)(puVar5 + 8) != '\x05' && *(char *)(puVar5 + 8) != '\x06')
                  goto LAB_004fc018;
                  (**(code **)*puVar5)(puVar5,*(code **)*puVar5,0,2);
                  uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
                  if ((uint)*(byte *)(uVar6 + local_b0[4]) < *(uint *)(param_1 + 0x6c)) {
                    *(undefined1 *)(param_1 + uVar6 + 0x60) = 0xff;
                  }
                  if ((*(byte *)(puVar5 + 5) != *(byte *)(*(int *)(param_1 + 0x74) + uVar13)) &&
                     (*(byte *)(puVar5 + 5) < 0xc)) {
                    fn_00505a0c(puVar19);
                    sVar3 = *(short *)(DAT_008bf4e0 + 0x17);
                    goto joined_r0x004fc06c;
                  }
                  goto LAB_004fc128;
                }
              }
              else {
LAB_004fc018:
                bVar12 = *(byte *)(puVar5 + 5);
                bVar1 = *(byte *)(*(int *)(param_1 + 0x74) + uVar13);
                if ((bVar12 == bVar1) || (0xb < bVar12)) {
                  if ((*(char *)(puVar5 + 8) == '\x05') && (0xb < bVar12)) {
                    local_2c = 1;
                  }
                  *(byte *)(puVar5 + 5) = bVar1;
                  goto LAB_004fc3ac;
                }
                iVar4 = fn_006d92e4(puVar19);
                if (iVar4 != 0) {
                  if (*(byte *)(puVar5 + 5) == uVar17) goto LAB_004fc3f8;
                  fn_00505a0c(puVar19);
                  sVar3 = *(short *)(DAT_008bf4e0 + 0x17);
joined_r0x004fc06c:
                  if (sVar3 != 0) {
                    *(short *)(DAT_008bf4e0 + 0x17) = sVar3 + -1;
                  }
                }
LAB_004fc128:
                (**(code **)(*(int *)puVar5[0xc] + 0x18))((int *)puVar5[0xc],puVar5);
                fn_0051ba28(DAT_008c06a0,puVar5);
                fn_005191c0(DAT_008c0674,puVar5);
                fn_0051ca8c(puVar5);
                fn_0051c5c8(puVar5);
                fn_0050b66c(DAT_008bf4cc,puVar5);
                local_2c = 1;
              }
LAB_004fc190:
              uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
              if ((uVar6 == uVar17) ||
                 ((uVar6 == local_b0[3] &&
                  ((*(char *)((int)DAT_008bf4e0 + 0x69) == '\0' ||
                   (*(char *)(DAT_008bf4e0[8] + 0x6f) == '\0')))))) goto LAB_004fc3f8;
              uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
              if (uVar6 < uVar17) {
                if (local_b0[7] != 0) {
                  if (*(uint *)(DAT_008bf4d4 + 0x30) <= *(uint *)(DAT_008bf4cc + 0x38))
                  goto LAB_004fc3f8;
                  iVar4 = fn_0050b370(DAT_008bf4cc);
                  fn_0051cb64(iVar4,puVar19[0x14],
                               *(undefined1 *)(*(int *)(param_1 + 0x74) + uVar13),
                               *(int *)(param_1 + 0x70) + uVar13 * 0x54 + 8);
                  uVar14 = 0xff;
                  uVar7 = *(undefined4 *)(iVar4 + 0x2c);
                  uVar6 = 0;
                  if (*(uint *)(param_1 + 0x6c) != 0) {
                    do {
                      iVar10 = 0;
                      do {
                        if (*(byte *)(param_1 + iVar10 + 0x60) == uVar6) goto LAB_004fc2d0;
                        iVar10 = iVar10 + 1;
                      } while (iVar10 < 0xc);
                      if (*(char *)(*(int *)(param_1 + 0x5c) + uVar6 * 0x14) != '\x01') {
                        uVar14 = uVar6 & 0xff;
                        break;
                      }
LAB_004fc2d0:
                      uVar6 = uVar6 + 1;
                    } while (uVar6 < *(uint *)(param_1 + 0x6c));
                  }
                  iVar10 = fn_0050fb58(uVar7,*(int *)(param_1 + 0x5c) + uVar14 * 0x14,iVar4,
                                        *(int *)(param_1 + 0x70) + uVar13 * 0x54,0,
                                        *(undefined4 *)(*(int *)(iVar4 + 0x28) + 0x14));
                  if (iVar10 < 0) goto LAB_004fc3f8;
                  fn_0051b784(iVar9,iVar4,*(int *)(param_1 + 0x70) + uVar13 * 0x54);
                  *(undefined1 *)(iVar4 + 0x20) = 2;
                  *(char *)((uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13) + param_1 + 0x60) =
                       (char)uVar14;
                  fn_004efcf4(uVar7,0);
                }
              }
              else {
                cVar2 = *(char *)((int)DAT_008bf4e0 + 0x67);
                bVar20 = cVar2 == '\x02';
                if (bVar20) {
                  cVar2 = *(char *)(param_1 + 0xa5);
                }
                if (bVar20 && cVar2 == '\0') {
                  if (*(char *)(*(int *)(param_1 + 0x70) + uVar13 * 0x54 + 0x27) == '\x02') {
                    iVar4 = uVar6 * 0x9c4;
                  }
                  else {
                    iVar4 = 5000;
                  }
                  if (local_b0[1] < iVar4) {
                    local_b0[1] = iVar4;
                  }
                }
              }
            }
            else {
              iVar4 = fn_006db908(iVar9,puVar5,auStack_80);
              if (iVar4 < 0) {
                (**(code **)*puVar5)(puVar5,*(code **)*puVar5,0,2);
                goto LAB_004fbf68;
              }
              iVar4 = fn_006db160(auStack_80,*(int *)(param_1 + 0x70) + uVar13 * 0x54);
              if (iVar4 == 0) {
                uVar6 = (uint)*(byte *)(*(int *)(param_1 + 0x74) + uVar13);
                if (uVar6 != uVar17) {
                  if ((uint)*(byte *)(uVar6 + local_b0[4]) < *(uint *)(param_1 + 0x6c)) {
                    *(undefined1 *)(param_1 + uVar6 + 0x60) = 0xff;
                  }
                  fn_00505a0c(puVar19,*(undefined1 *)(*(int *)(param_1 + 0x74) + uVar13));
                  if (*(short *)(DAT_008bf4e0 + 0x17) != 0) {
                    *(short *)(DAT_008bf4e0 + 0x17) = *(short *)(DAT_008bf4e0 + 0x17) + -1;
                  }
                  (**(code **)(*(int *)puVar5[0xc] + 0x18))((int *)puVar5[0xc],puVar5);
                  fn_0051ba28(DAT_008c06a0,puVar5);
                  fn_005191c0(DAT_008c0674,puVar5);
                  fn_0051ca8c(puVar5);
                  fn_0051c5c8(puVar5);
                  fn_0050b66c(DAT_008bf4cc,puVar5);
                  local_2c = 1;
                  goto LAB_004fbf68;
                }
                if (*(char *)(param_1 + 0xa6) == '\0') goto LAB_004fc3f8;
              }
            }
LAB_004fc3ac:
            uVar13 = uVar13 + 1;
          } while (uVar13 < *(uint *)(param_1 + 0x88));
        }
        uVar17 = puVar19[0x1b];
        if ((uVar17 & ~uVar16) != 0) {
          puVar18 = &DAT_008bf4d4;
          uVar13 = 1;
          bVar12 = 0;
          do {
            if ((uVar17 & ~uVar16 & uVar13) != 0) {
              if (*(byte *)((int)puVar19 + 99) == bVar12) {
                if (*(char *)(param_1 + 0xa6) == '\0') {
LAB_004fc3f8:
                  fn_0051811c(auStack_80);
                  return 0;
                }
              }
              else {
                fn_00505a0c(puVar19,bVar12);
                if (*(short *)(DAT_008bf4e0 + 0x17) != 0) {
                  *(short *)(puVar19 + 0x17) = *(short *)(puVar19 + 0x17) + -1;
                }
                iVar4 = fn_0050b080(DAT_008bf4cc,bVar12);
                if (iVar4 != 0) {
                  (**(code **)(**(int **)(iVar4 + 0x30) + 0x18))(*(int **)(iVar4 + 0x30),iVar4);
                  fn_0051ba28(DAT_008c06a0,iVar4);
                  fn_005191c0(DAT_008c0674,iVar4);
                  fn_0051ca8c(iVar4);
                  fn_0051c5c8(iVar4);
                  fn_0050b66c(DAT_008bf4cc,iVar4);
                }
                if (*(int *)(DAT_008bf4d4 + 100) != 0) {
                  fn_005118f4(*(int *)(DAT_008bf4d4 + 100),bVar12);
                }
              }
            }
            bVar12 = bVar12 + 1;
            uVar13 = uVar13 << 1;
          } while (bVar12 < 0xc);
          local_2c = 1;
        }
        iVar4 = DAT_008bf4cc;
        local_b0[0] = 0;
        local_b0[1] = 0;
        local_b0[2] = 0;
        local_b0[3] = 0;
        local_b0[4] = 0;
        local_b0[5] = 0;
        local_b0[6] = 0;
        uVar16 = 0;
        local_b0[7] = 0;
        local_b0[8] = 0;
        local_b0[9] = 0;
        local_b0[10] = 0;
        local_b0[0xb] = 0;
        piVar15 = (int *)(DAT_008bf4cc + 0x3c);
        do {
          piVar8 = (int *)(iVar4 + *(int *)(iVar4 + 0x38) * 4 + 0x3c);
          if (piVar15 == piVar8) {
            if (uVar16 != 0) {
              puVar18 = &DAT_008c06a0;
              puVar19 = &DAT_008c0674;
            }
            uVar17 = 0;
            if (uVar16 != 0) {
              do {
                pcVar11 = (code *)**(undefined4 **)local_b0[uVar17];
                (*pcVar11)((undefined4 *)local_b0[uVar17],pcVar11,0,2);
                iVar9 = fn_006d897c(*(undefined4 *)(local_b0[uVar17] + 0x2c));
                if (((iVar9 == 0) &&
                    (iVar9 = fn_006d897c(*(undefined4 *)(local_b0[uVar17] + 0x34)), iVar9 == 0)) &&
                   (iVar9 = local_b0[uVar17], *(char *)(iVar9 + 0x20) != '\x05')) {
                  uVar13 = (uint)*(byte *)(iVar9 + 0x14);
                  (**(code **)(**(int **)(iVar9 + 0x30) + 0x18))();
                  fn_0051ba28(*puVar18,local_b0[uVar17]);
                  fn_005191c0(*puVar19,local_b0[uVar17]);
                  fn_0051ca8c(local_b0[uVar17]);
                  fn_0051c5c8(local_b0[uVar17]);
                  fn_0050b66c(iVar4,local_b0[uVar17]);
                  iVar9 = fn_0050b080(iVar4,uVar13);
                  if (uVar13 < 0xc) {
                    cVar2 = '\0';
                    if (iVar9 != 0) {
                      cVar2 = *(char *)(iVar9 + 0x20);
                    }
                    if ((iVar9 == 0 || cVar2 == '\x05') &&
                       ((uint)*(byte *)(param_1 + uVar13 + 0x60) < *(uint *)(param_1 + 0x6c))) {
                      *(undefined1 *)(param_1 + uVar13 + 0x60) = 0xff;
                    }
                  }
                  local_2c = 1;
                }
                uVar17 = uVar17 + 1;
              } while (uVar17 < uVar16);
            }
            if (local_2c != 0) {
              fn_0051da28(DAT_008bf4d4);
            }
            fn_0051811c(auStack_80);
            return 1;
          }
          iVar10 = *piVar15;
          bVar20 = iVar10 != *(int *)(iVar4 + 0xa4);
          if (bVar20) {
            piVar8 = (int *)(uint)*(byte *)(iVar10 + 0x20);
          }
          if (bVar20 && piVar8 != (int *)&DAT_00000006) {
            iVar10 = fn_006db908(iVar9,iVar10,auStack_80);
            if ((-1 < iVar10) && (uVar17 = 0, *(int *)(param_1 + 0x88) != 0)) {
              do {
                iVar10 = fn_006db160(auStack_80,*(int *)(param_1 + 0x70) + uVar17 * 0x54);
                if (iVar10 != 0) goto LAB_004fc5a4;
                uVar17 = uVar17 + 1;
              } while (uVar17 < *(uint *)(param_1 + 0x88));
            }
            local_b0[uVar16] = *piVar15;
            uVar16 = uVar16 + 1;
          }
LAB_004fc5a4:
          piVar15 = piVar15 + 1;
        } while( true );
      }
    }
  }
  return 0;
}


