#include "single_0035f234.h"
void fn_0035f234(int param_1)
{
  undefined1 *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  undefined1 *puVar10;
  char *pcVar11;
  char *pcVar12;
  undefined4 uVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  int *piVar20;
  byte *pbVar21;
  bool bVar22;
  undefined8 uVar23;
  undefined8 in_d9;
  byte *local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined8 local_14c;
  undefined4 uStack_144;
  int local_128;
  undefined4 *local_124;
  undefined4 local_120;
  undefined1 *local_11c;
  undefined1 *local_118;
  undefined1 *local_114;
  undefined4 local_110;
  undefined1 local_10c;
  int local_108;
  int local_104;
  int local_100;
  int *local_f8;
  undefined4 local_f4;
  int *local_f0 [2];
  char *local_e8;
  int *local_e4;
  char *local_e0;
  undefined4 uStack_dc;
  char *local_d8;
  undefined1 local_d4;
  int local_cc;
  char *local_c8 [2];
  undefined1 auStack_c0 [20];
  int *local_ac;
  char local_a8 [4];
  byte *local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  int *local_78;
  int local_74;
  uint local_70;
  uint local_6c;
  int local_68;
  int *local_64;
  undefined1 auStack_60 [32];
  undefined1 auStack_40 [28];
  uVar13 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  iVar3 = fn_00154ac8(0x3d);
  if (iVar3 != 0) {
    if (**(int **)(DAT_008977e0 + 0x40) != 0) {
      uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar13);
      iVar3 = fn_003035b0(uVar4,(char *)&DAT_006c2ec4);
      if ((iVar3 != 0) && (iVar3 = fn_003035b0(uVar4,(char *)&DAT_006c2ecc), iVar3 != 0)) {
        return;
      }
    }
    pcVar5 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar13);
    local_a8[0] = *pcVar5;
    fn_006af3a8(&local_70,*(undefined4 *)(DAT_008977e0 + 0x1c),local_a8,1);
    local_f4 = fn_006f7a9c(DAT_008977e0);
    local_80 = fn_002778ac(local_f4,(int)local_a8[0]);
    iVar3 = fn_00279bbc(local_f4,local_80);
    if (iVar3 == 0) {
      fn_00279ae4(local_f4,local_80);
      uVar7 = local_70;
      if (local_6c < local_70) {
        do {
          uVar7 = uVar7 + 4;
        } while (uVar7 != local_6c);
      }
    }
    else {
      uVar13 = fn_006b7664();
      fn_00118624(auStack_40,uVar13);
      iVar14 = *(int *)(param_1 + 0x2c);
      iVar16 = *(int *)(param_1 + 0x28);
      iVar3 = iVar16;
      if (iVar16 != iVar14) {
        do {
          fn_0035dac8(iVar3);
          iVar3 = iVar3 + 0x2c;
        } while (iVar3 != iVar14);
        *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + ((iVar14 - iVar16) / 0x2c) * -0x2c;
      }
      iVar3 = fn_00145b00(8,&DAT_00812c8c);
      local_64 = (int *)0x0;
      if (iVar3 != 0) {
        local_64 = (int *)fn_00692eac();
      }
      local_88 = (int)(local_6c - local_70) >> 2;
      if (local_88 != 0) {
        in_d9 = 0x3f80000000000000;
      }
      local_84 = 0;
      if (local_88 != 0) {
        do {
          local_74 = *(int *)(local_70 + local_84 * 4);
          uVar13 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c));
          fn_00102908(auStack_60,0x20,(char *)&DAT_0035f694,uVar13);
          iVar3 = fn_006eddc0(auStack_40,auStack_60);
          piVar17 = local_64;
          if (iVar3 != 0) {
            iVar3 = fn_00176d74(auStack_40,auStack_60);
            piVar17[1] = iVar3;
            fn_00183718(&local_170,local_64,&DAT_0035f6a0);
            local_8c = local_158;
            local_ac = (int *)0x0;
            local_78 = (int *)0x0;
            local_f8 = (int *)0x0;
            local_a4 = local_170;
            uStack_a0 = uStack_16c;
            uStack_9c = uStack_168;
            uStack_98 = uStack_164;
            uStack_94 = uStack_160;
            uStack_90 = uStack_15c;
            pbVar21 = (byte *)0x0;
            if (local_170 != (byte *)0x0) {
              do {
                uVar13 = (undefined4)((ulonglong)in_d9 >> 0x20);
                fn_00176ec8(local_f0,&uStack_a0,pbVar21);
                fn_0017821c(&uStack_16c,local_f0,0x44);
                in_d9 = CONCAT44(uVar13,uStack_144);
                local_124 = (undefined4 *)0x0;
                local_10c = 0;
                local_114 = (undefined1 *)0x0;
                local_110 = 0;
                local_118 = (undefined1 *)0x0;
                local_11c = (undefined1 *)0x0;
                local_120 = 0;
                uVar23 = local_14c;
                puVar6 = (undefined4 *)fn_00100fc6(0xc,0);
                uVar13 = fn_00100fc6(0x400,0);
                iVar3 = local_74;
                puVar6[2] = uVar13;
                *puVar6 = local_124;
                puVar6[1] = 0x20;
                local_114 = (undefined1 *)puVar6[2];
                local_118 = local_114 + 0x400;
                local_11c = local_114 + 0x20;
                *(undefined4 *)(local_114 + 8) = 0;
                *(undefined4 *)(local_114 + 0xc) = 0;
                *local_114 = 0;
                *(undefined4 *)(local_114 + 4) = 0;
                *(undefined1 **)(local_114 + 8) = local_114;
                *(undefined1 **)(local_114 + 0xc) = local_114;
                local_124 = puVar6;
                iVar14 = fn_00101c78(&uStack_16c,&local_cc,10);
                if (-1 < iVar14) {
                  uVar2 = fn_00101c78(local_cc + 1,&local_cc,10);
                  iVar16 = 100;
                  uVar7 = fn_002febd8(local_cc);
                  if (3 < uVar7) {
                    iVar16 = fn_00101c78(local_cc + 1,&local_cc,10);
                  }
                  local_e8 = (char *)CONCAT31(((unsigned int)(local_e8) >> 8) & 0xffffff,uVar2);
                  local_e4 = (int *)uVar23;
                  local_e0 = (char *)((ulonglong)uVar23 >> 0x20);
                  uStack_dc = (undefined4)in_d9;
                  local_108 = (int)((ulonglong)in_d9 >> 0x20);
                  local_128 = iVar14 + iVar3 * 0x10000;
                  fn_00772a50(auStack_c0,&local_124,&local_e8);
                  local_104 = iVar3;
                  local_100 = iVar16;
                }
                for (piVar17 = *(int **)(param_1 + 0x28);
                    (piVar17 != *(int **)(param_1 + 0x2c) && (*piVar17 != local_128));
                    piVar17 = piVar17 + 0xb) {
                }
                piVar18 = local_ac;
                if (piVar17 == *(int **)(param_1 + 0x2c)) {
                  for (; (piVar18 != local_78 && (*piVar18 != local_128)); piVar18 = piVar18 + 1) {
                  }
                  piVar20 = local_78;
                  if (piVar18 == local_78) {
                    iVar3 = fn_00163868(100);
                    piVar17 = local_78;
                    if (iVar3 < local_100) {
                      piVar18 = (int *)(param_1 + 0x28);
                      piVar17 = *(int **)(param_1 + 0x2c);
                      if (piVar17 == *(int **)(param_1 + 0x30)) {
                        local_e4 = &local_128;
                        uVar7 = ((int)piVar17 - *piVar18) / 0x2c;
                        local_f0[0] = piVar17;
                        if (uVar7 < (uint)(((int)*(int **)(param_1 + 0x30) - *piVar18) / 0x2c)) {
                          *(int **)(param_1 + 0x2c) = piVar17 + 0xb;
                          if (piVar17 != (int *)0x0) {
                            iVar3 = fn_0035d9ac(piVar17,piVar17 + -0xb);
                            *(int *)(iVar3 + 0x28) = piVar17[-1];
                          }
                          piVar9 = local_f0[0];
                          piVar20 = local_f0[0];
                          for (piVar18 = piVar17 + -0xb; local_f0[0] = piVar20, piVar9 != piVar18;
                              piVar18 = piVar18 + -0xb) {
                            piVar17[-0xb] = piVar18[-0xb];
                            fn_00773090(piVar17 + -10,piVar18 + -10);
                            piVar17[-3] = piVar18[-3];
                            piVar17[-2] = piVar18[-2];
                            piVar17[-1] = piVar18[-1];
                            piVar17 = piVar17 + -0xb;
                            piVar20 = local_f0[0];
                          }
                          *piVar20 = local_128;
                          fn_00773090(piVar20 + 1,local_e4 + 1);
                          piVar20[8] = local_108;
                          piVar20[9] = local_104;
                          piVar20[10] = local_100;
                          piVar20 = local_78;
                        }
                        else {
                          uVar19 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
                          if (uVar19 < uVar7 + 0x20) {
                            uVar19 = uVar7 + 0x20;
                          }
                          pbVar8 = (byte *)fn_00100fc6(uVar19 * 0x2c,0);
                          piVar20 = local_f0[0];
                          local_170 = pbVar8;
                          for (piVar17 = (int *)*piVar18; piVar17 != piVar20;
                              piVar17 = piVar17 + 0xb) {
                            if (pbVar8 != (byte *)0x0) {
                              iVar3 = fn_0035d9ac(pbVar8,piVar17);
                              *(int *)(iVar3 + 0x28) = piVar17[10];
                            }
                            pbVar8 = pbVar8 + 0x2c;
                          }
                          if (local_170 + (((int)local_f0[0] - *piVar18) / 0x2c) * 0x2c !=
                              (byte *)0x0) {
                            iVar3 = fn_0035d9ac(local_170 +
                                                 (((int)local_f0[0] - *piVar18) / 0x2c) * 0x2c,
                                                 local_e4);
                            *(int *)(iVar3 + 0x28) = local_100;
                          }
                          piVar20 = *(int **)(param_1 + 0x2c);
                          pbVar8 = local_170 + (((int)local_f0[0] - *piVar18) / 0x2c) * 0x2c;
                          for (piVar17 = local_f0[0]; piVar17 != piVar20; piVar17 = piVar17 + 0xb) {
                            pbVar8 = pbVar8 + 0x2c;
                            if (pbVar8 != (byte *)0x0) {
                              iVar3 = fn_0035d9ac(pbVar8,piVar17);
                              *(int *)(iVar3 + 0x28) = piVar17[10];
                            }
                          }
                          iVar3 = *piVar18;
                          iVar16 = *(int *)(param_1 + 0x2c);
                          iVar14 = iVar16 - iVar3;
                          for (; iVar3 != iVar16; iVar3 = iVar3 + 0x2c) {
                            fn_0035dac8(iVar3);
                          }
                          fn_001008c4(*piVar18,(*(int *)(param_1 + 0x30) - *piVar18) / 0x2c,0);
                          *piVar18 = (int)local_170;
                          *(byte **)(param_1 + 0x2c) = local_170 + (iVar14 / 0x2c) * 0x2c + 0x2c;
                          *(byte **)(param_1 + 0x30) = local_170 + uVar19 * 0x2c;
                          piVar20 = local_78;
                        }
                      }
                      else {
                        *(int **)(param_1 + 0x2c) = piVar17 + 0xb;
                        piVar20 = local_78;
                        if (piVar17 != (int *)0x0) {
                          iVar3 = fn_0035d9ac(piVar17,&local_128);
                          *(int *)(iVar3 + 0x28) = local_100;
                          piVar20 = local_78;
                        }
                      }
                    }
                    else if (local_78 == local_f8) {
                      uVar7 = (int)local_78 - (int)local_ac >> 2;
                      if (uVar7 < (uint)((int)local_f8 - (int)local_ac >> 2)) {
                        if (local_78 != (int *)0x0) {
                          *local_78 = local_78[-1];
                        }
                        piVar17 = local_78 + -1;
                        piVar18 = local_78;
                        if (local_78 < piVar17) {
                          iVar3 = (int)piVar17 - (int)local_78;
                          if (0 < iVar3) {
                            if (iVar3 * 0x20000000 < 0) {
                              piVar17 = local_78 + -2;
                              piVar18 = local_78 + -1;
                              *piVar18 = *piVar17;
                            }
                            for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
                              piVar18[-1] = piVar17[-1];
                              piVar17 = piVar17 + -2;
                              piVar18 = piVar18 + -2;
                              *piVar18 = *piVar17;
                            }
                          }
                        }
                        else {
                          while (local_78 != piVar17) {
                            piVar17 = piVar17 + -1;
                            piVar18[-1] = *piVar17;
                            piVar18 = piVar18 + -1;
                          }
                        }
                        *local_78 = local_128;
                        piVar20 = local_78 + 1;
                      }
                      else {
                        uVar19 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
                        if (uVar19 < uVar7 + 0x20) {
                          uVar19 = uVar7 + 0x20;
                        }
                        piVar9 = (int *)fn_00100fc6(uVar19 << 2,0);
                        piVar20 = piVar9;
                        for (piVar18 = local_ac; piVar18 != piVar17; piVar18 = piVar18 + 1) {
                          if (piVar20 != (int *)0x0) {
                            *piVar20 = *piVar18;
                          }
                          piVar20 = piVar20 + 1;
                        }
                        piVar18 = (int *)(((int)piVar17 - (int)local_ac & 0xfffffffcU) + (int)piVar9
                                         );
                        if (piVar18 != (int *)0x0) {
                          *piVar18 = local_128;
                        }
                        piVar18 = (int *)(((int)piVar17 - (int)local_ac & 0xfffffffcU) + (int)piVar9
                                         );
                        for (; piVar17 != local_78; piVar17 = piVar17 + 1) {
                          piVar18 = piVar18 + 1;
                          if (piVar18 != (int *)0x0) {
                            *piVar18 = *piVar17;
                          }
                        }
                        iVar3 = (int)local_78 - (int)local_ac;
                        piVar17 = local_ac;
                        if (local_78 < local_ac) {
                          do {
                            piVar17 = piVar17 + 1;
                          } while (piVar17 != local_78);
                        }
                        fn_001008c4(local_ac,(int)local_f8 - (int)local_ac >> 2,0);
                        local_f8 = piVar9 + uVar19;
                        local_ac = piVar9;
                        piVar20 = piVar9 + (iVar3 >> 2) + 1;
                      }
                    }
                    else {
                      piVar20 = local_78 + 1;
                      if (local_78 != (int *)0x0) {
                        *local_78 = local_128;
                      }
                    }
                  }
                }
                else {
                  puVar15 = *(undefined1 **)(local_114 + 8);
                  while (piVar20 = local_78, puVar15 != local_114) {
                    pcVar12 = (char *)piVar17[5];
                    pbVar8 = puVar15 + 0x10;
                    bVar22 = true;
                    pcVar5 = pcVar12;
                    if (*(char **)(pcVar12 + 4) != (char *)0x0) {
                      pcVar11 = *(char **)(pcVar12 + 4);
                      do {
                        pcVar5 = pcVar11;
                        bVar22 = *pbVar8 < (byte)pcVar5[0x10];
                        if (bVar22) {
                          pcVar11 = *(char **)(pcVar5 + 8);
                        }
                        else {
                          pcVar11 = *(char **)(pcVar5 + 0xc);
                        }
                      } while (pcVar11 != (char *)0x0);
                    }
                    if ((char)piVar17[7] == '\0') {
                      if (bVar22) {
                        if (pcVar5 == *(char **)(pcVar12 + 8)) {
                          local_170 = pbVar8;
                          fn_00772cd4(&local_e0);
                          local_d8 = local_e0;
                          local_d4 = 1;
                          goto LAB_0035fc30;
                        }
                        if ((*pcVar5 == '\0') && (*(char **)(*(int *)(pcVar5 + 4) + 4) == pcVar5)) {
                          pcVar5 = *(char **)(pcVar5 + 0xc);
                        }
                        else {
                          pcVar12 = *(char **)(pcVar5 + 8);
                          if (*(char **)(pcVar5 + 8) == (char *)0x0) {
                            pcVar12 = pcVar5;
                            pcVar5 = *(char **)(pcVar5 + 4);
                            while (pcVar12 == *(char **)(pcVar5 + 8)) {
                              pcVar12 = pcVar5;
                              pcVar5 = *(char **)(pcVar5 + 4);
                            }
                          }
                          else {
                            do {
                              pcVar5 = pcVar12;
                              pcVar12 = *(char **)(pcVar5 + 0xc);
                            } while (*(char **)(pcVar5 + 0xc) != (char *)0x0);
                          }
                        }
                      }
                      if ((byte)pcVar5[0x10] < *pbVar8) {
                        local_170 = pbVar8;
                        fn_00772cd4(local_c8);
                        local_d8 = local_c8[0];
                        local_d4 = 1;
                      }
                      else {
                        local_d4 = 0;
                        local_d8 = pcVar5;
                      }
                    }
                    else {
                      local_170 = pbVar8;
                      fn_00772cd4(&local_e8);
                      local_d8 = local_e8;
                      local_d4 = 1;
                    }
LAB_0035fc30:
                    puVar1 = *(undefined1 **)(puVar15 + 0xc);
                    if (*(undefined1 **)(puVar15 + 0xc) == (undefined1 *)0x0) {
                      puVar1 = *(undefined1 **)(puVar15 + 4);
                      while (puVar10 = puVar1, puVar15 == *(undefined1 **)(puVar10 + 0xc)) {
                        puVar1 = *(undefined1 **)(puVar10 + 4);
                        puVar15 = puVar10;
                      }
                      if (*(undefined1 **)(puVar15 + 0xc) != puVar10) {
                        puVar15 = puVar10;
                      }
                    }
                    else {
                      do {
                        puVar15 = puVar1;
                        puVar1 = *(undefined1 **)(puVar15 + 8);
                      } while (*(undefined1 **)(puVar15 + 8) != (undefined1 *)0x0);
                    }
                  }
                }
                local_78 = piVar20;
                fn_0035dac8(&local_128);
                pbVar21 = pbVar21 + 1;
              } while (pbVar21 < local_a4);
            }
            piVar17 = local_ac;
            if (local_78 < local_ac) {
              do {
                piVar17 = piVar17 + 1;
              } while (piVar17 != local_78);
            }
            fn_001008c4(local_ac,(int)local_f8 - (int)local_ac >> 2,0);
          }
          local_84 = local_84 + 1;
        } while (local_84 < local_88);
      }
      fn_00279ae4(local_f4,local_80);
      if (local_64 != (int *)0x0) {
        (**(code **)(*local_64 + 4))();
      }
      fn_005f5d3c(auStack_40);
      uVar7 = local_70;
      if (local_6c < local_70) {
        do {
          uVar7 = uVar7 + 4;
        } while (uVar7 != local_6c);
      }
    }
    fn_001008c4(local_70,(int)(local_68 - local_70) >> 2,0);
  }
  return;
}
