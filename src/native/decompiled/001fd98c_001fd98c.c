#include "001fd98c_001fd98c.h"



void fn_001fd98c(undefined4 *param_1)

{
  int *piVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int **ppiVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  byte bVar14;
  int iVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  bool bVar22;
  undefined4 in_s0;
  float in_s1;
  undefined8 uVar23;
  float fVar24;
  int *local_84;
  int *local_80;
  int *local_7c;
  int local_78;
  undefined4 *local_74;
  uint local_70;
  int local_64;
  int *local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 *local_40;
  
  uVar18 = 0;
  param_1 = (undefined4 *)*param_1;
  uVar3 = fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6754(uVar3,1);
  if (0 < iVar4) {
    do {
      uVar3 = fn_00144810(DAT_008977e8);
      local_84 = (int *)fn_006a8858(uVar3,uVar18 & 0xff,1);
      if ((int *)param_1[uVar18 + 0x389] != local_84) {
        ppiVar5 = &local_60;
        if ((int)local_84 < 100) {
          ppiVar5 = &local_84;
        }
        local_60 = (int *)0x63;
        fn_00688c04(param_1[uVar18 + 7],*ppiVar5,0);
      }
      param_1[uVar18 + 0x389] = local_84;
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
      if (iVar4 != param_1[0x392]) {
        fn_001028d4(&local_80,s_playerframe_sub__02d_008c407c,uVar18 << 1);
        iVar4 = fn_00178f9c(*param_1,param_1[4]);
        iVar4 = fn_00689210(*(undefined4 *)(iVar4 + 0x10),&local_80);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
        fn_001028d4(&local_80,s_tb_name__02d_008c4091,uVar18);
        iVar4 = fn_00178f9c(*param_1,param_1[4]);
        iVar4 = fn_00689210(*(undefined4 *)(iVar4 + 0x10),&local_80);
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
      }
      iVar4 = 0;
      do {
        if (param_1[uVar18 * 4 + iVar4 + 0xb] != 0) {
          uVar3 = fn_00144810(DAT_008977e8);
          sVar2 = fn_006a88b8(uVar3,uVar18,1);
          *(byte *)(param_1[uVar18 * 4 + iVar4 + 0xb] + 0x44) =
               sVar2 == iVar4 | *(byte *)(param_1[uVar18 * 4 + iVar4 + 0xb] + 0x44) & 0xfe;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      uVar18 = uVar18 + 1;
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6754(uVar3,1);
    } while ((int)uVar18 < iVar4);
  }
  fn_0014481c(DAT_008977e8);
  iVar6 = fn_006b6bc4();
  iVar15 = param_1[0x392];
  bVar22 = SBORROW4(iVar6,iVar15);
  iVar4 = iVar6 - iVar15;
  if (iVar6 != iVar15) {
    bVar22 = SBORROW4(uVar18,4);
    iVar4 = uVar18 - 4;
  }
  if (iVar4 < 0 != bVar22) {
    do {
      fn_001028d4(&local_80,s_playerframe_sub__02d_008c407c,uVar18 << 1);
      iVar4 = fn_00178f9c(*param_1,param_1[4]);
      iVar4 = fn_00689210(*(undefined4 *)(iVar4 + 0x10),&local_80);
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      fn_001028d4(&local_80,s_tb_name__02d_008c4091,uVar18);
      iVar4 = fn_00178f9c(*param_1,param_1[4]);
      iVar4 = fn_00689210(*(undefined4 *)(iVar4 + 0x10),&local_80);
      *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      iVar4 = param_1[uVar18 * 4 + 0xb];
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar4 = param_1[uVar18 * 4 + 0xc];
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar4 = param_1[uVar18 * 4 + 0xd];
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      iVar4 = param_1[uVar18 * 4 + 0xe];
      if (iVar4 != 0) {
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
      }
      uVar18 = uVar18 + 1;
    } while ((int)uVar18 < 4);
  }
  fn_0014481c(DAT_008977e8);
  uVar3 = fn_006b6bc4();
  param_1[0x392] = uVar3;
  uVar18 = 0;
  uVar3 = fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6754(uVar3,1);
  uVar3 = 0;
  uVar23 = 0;
  if (0 < iVar4) {
    do {
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6f3c(uVar3,uVar18 & 0xff,1);
      if ((iVar4 != 0) && (param_1[uVar18 + 0x1b] != 0)) {
        fn_001fd428(param_1,iVar4 + 8);
        iVar4 = param_1[uVar18 + 0x1b];
        *(int *)(iVar4 + 0x24) = (int)uVar23;
        *(undefined4 *)(iVar4 + 0x1c) = in_s0;
        *(float *)(iVar4 + 0x20) = in_s1;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        *(byte *)(param_1[uVar18 + 0x1b] + 0x44) =
             *(byte *)(param_1[uVar18 + 0x1b] + 0x44) & 0xfe | 1;
      }
      uVar18 = uVar18 + 1;
      uVar3 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6754(uVar3,1);
      uVar3 = (undefined4)uVar23;
    } while ((int)uVar18 < iVar4);
  }
  fn_001088e0(*param_1,param_1[0x386]);
  fVar24 = 1.0;
  fn_00154a6c();
  fn_001088e0(*param_1,param_1[0x387]);
  fn_00154a6c();
  uVar18 = 0;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6bc4();
  if (0 < iVar4) {
    uVar23 = 0x43340000;
    uVar8 = uVar3;
    do {
      uVar7 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b71a8(uVar7,uVar18 & 0xff);
      if ((iVar4 != 0) && (uVar20 = (uint)*(byte *)(iVar4 + 0x104), param_1[uVar20 + 0x1f] != 0)) {
        fn_001fd428(param_1,iVar4 + 8);
        iVar6 = param_1[uVar20 + 0x1f];
        *(undefined4 *)(iVar6 + 0x24) = uVar8;
        *(float *)(iVar6 + 0x1c) = fVar24;
        *(float *)(iVar6 + 0x20) = in_s1;
        *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xef | 0x10;
        iVar6 = param_1[5];
        fVar24 = *(float *)(iVar4 + 0x24);
        fn_00163890();
        in_s1 = *(float *)(iVar6 + 0x30);
        iVar4 = param_1[uVar20 + 0x1f];
        *(undefined4 *)(iVar4 + 0x28) = uVar8;
        *(undefined4 *)(iVar4 + 0x2c) = uVar8;
        fVar24 = (fVar24 - (float)uVar23) + in_s1;
        *(float *)(iVar4 + 0x30) = fVar24;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
        *(byte *)(param_1[uVar20 + 0x1f] + 0x44) =
             *(byte *)(param_1[uVar20 + 0x1f] + 0x44) & 0xfe | 1;
        iVar4 = fn_0068eb24(DAT_008977e8);
        if (uVar20 == *(byte *)(iVar4 + 0x104)) {
          iVar6 = param_1[uVar20 + 0x1f];
          iVar4 = param_1[0x388];
          uVar7 = *(undefined4 *)(iVar6 + 0x20);
          uVar21 = *(undefined4 *)(iVar6 + 0x24);
          *(undefined4 *)(iVar4 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
          *(undefined4 *)(iVar4 + 0x20) = uVar7;
          *(undefined4 *)(iVar4 + 0x24) = uVar21;
          *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
          iVar4 = param_1[uVar20 + 0x1f];
          iVar6 = param_1[0x388];
          uVar7 = *(undefined4 *)(iVar4 + 0x2c);
          uVar21 = *(undefined4 *)(iVar4 + 0x30);
          *(undefined4 *)(iVar6 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
          *(undefined4 *)(iVar6 + 0x2c) = uVar7;
          *(undefined4 *)(iVar6 + 0x30) = uVar21;
          *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xef | 0x10;
        }
      }
      uVar18 = uVar18 + 1;
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
    } while ((int)uVar18 < iVar4);
  }
  fn_001fc3ec(param_1);
  local_70 = 0;
  local_74 = param_1;
LAB_001fdeac:
  local_48 = local_74[local_70 * 2 + 0x28];
  local_4c = local_74[local_70 * 2 + 0x29];
  if (local_48 != 0 && local_4c != 0) {
    *(byte *)(local_48 + 0x44) = *(byte *)(local_48 + 0x44) & 0xfe;
    *(byte *)(local_4c + 0x44) = *(byte *)(local_4c + 0x44) & 0xfe;
    fn_0014481c(DAT_008977e8);
    iVar4 = fn_006b6c88();
    if ((int)local_70 < iVar4) {
      uVar8 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6b3c(uVar8,local_70);
      local_50 = iVar4;
      if (*(char *)(iVar4 + 0x5c) == '\0') {
        if (*(char *)(iVar4 + 0x74) == '\0') {
          if (*(char *)(iVar4 + 0x8d) == '\0') {
            fn_001fd428(local_74,iVar4 + 8);
            *(undefined4 *)(local_48 + 0x24) = uVar3;
            *(float *)(local_48 + 0x1c) = fVar24;
            *(float *)(local_48 + 0x20) = in_s1;
            *(byte *)(local_48 + 0x44) = *(byte *)(local_48 + 0x44) & 0xee | 0x11;
            goto LAB_001fe488;
          }
          fn_001fd428(local_74,iVar4 + 8);
          *(undefined4 *)(local_4c + 0x24) = uVar3;
          *(float *)(local_4c + 0x1c) = fVar24;
          *(float *)(local_4c + 0x20) = in_s1;
          bVar14 = *(byte *)(local_4c + 0x44) & 0xee | 0x11;
        }
        else {
          local_40 = local_74;
          if (iVar4 != 0) {
            uVar18 = 0;
            fn_0014481c(DAT_008977e8);
            iVar6 = fn_006b6bc4();
            if (0 < iVar6) {
              do {
                uVar8 = fn_0014481c(DAT_008977e8);
                local_78 = fn_006b71a8(uVar8,uVar18 & 0xff);
                local_84 = (int *)0x0;
                local_80 = (int *)0x0;
                local_7c = (int *)0x0;
                iVar6 = fn_006f7de8();
                uVar20 = iVar6 + 1;
                if (0x3ffffffe < uVar20 && iVar6 != 0x3ffffffe) {
                  fn_002ff628(8,&DAT_008c7647,&DAT_008c7647,uVar20,0x3fffffff);
                }
                if ((uint)((int)local_7c - (int)local_84 >> 2) < uVar20) {
                  uVar13 = (int)local_80 - (int)local_84 >> 2;
                  uVar9 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
                  if (uVar9 < uVar13 + 0x20) {
                    uVar9 = uVar13 + 0x20;
                  }
                  if (uVar20 < uVar9) {
                    uVar20 = uVar9;
                  }
                  piVar10 = (int *)fn_00100fc6(uVar20 << 2,0);
                  piVar11 = piVar10;
                  for (piVar16 = local_84; piVar1 = local_84, piVar16 != local_80;
                      piVar16 = piVar16 + 1) {
                    if (piVar11 != (int *)0x0) {
                      *piVar11 = *piVar16;
                    }
                    piVar11 = piVar11 + 1;
                  }
                  for (; piVar1 != local_80; piVar1 = piVar1 + 1) {
                  }
                  fn_001008c4(local_84,(int)local_7c - (int)local_84 >> 2,0);
                  local_80 = (int *)(((int)local_80 - (int)local_84 & 0xfffffffcU) + (int)piVar10);
                  local_7c = piVar10 + uVar20;
                  local_84 = piVar10;
                }
                iVar6 = fn_006f8074(local_78);
                if (iVar6 == 0) {
                  iVar6 = 0;
LAB_001fe168:
                  iVar15 = 0x7fffffff;
                }
                else {
                  iVar6 = *(int *)(local_78 + 0xfc);
                  if (iVar6 == 0) goto LAB_001fe168;
                  iVar15 = *(int *)(iVar6 + 0x58);
                }
                bVar22 = false;
                iVar19 = 0;
                iVar12 = fn_006f7de8(local_78);
                if (0 < iVar12) {
                  do {
                    iVar12 = fn_006f8418(local_78,iVar19);
                    if (iVar15 < *(int *)(iVar12 + 0x94)) {
                      if (!bVar22) {
                        local_5c = iVar6;
                        if (local_80 == local_7c) {
                          fn_00797ee4(&local_84,local_80,&local_5c);
                          piVar16 = local_80;
                        }
                        else {
                          piVar16 = local_80 + 1;
                          if (local_80 != (int *)0x0) {
                            *local_80 = iVar6;
                          }
                        }
                        local_80 = piVar16;
                        bVar22 = true;
                      }
                      piVar16 = local_80;
                      local_58 = iVar12;
                      if (local_80 == local_7c) {
                        piVar16 = &local_58;
                        goto LAB_001fe24c;
                      }
joined_r0x001fe240:
                      local_80 = piVar16 + 1;
                      if (piVar16 != (int *)0x0) {
                        *piVar16 = iVar12;
                      }
                    }
                    else {
                      local_54 = iVar12;
                      piVar16 = local_80;
                      if (local_80 != local_7c) goto joined_r0x001fe240;
                      piVar16 = &local_54;
LAB_001fe24c:
                      fn_00797ee4(&local_84,local_80,piVar16);
                    }
                    iVar19 = iVar19 + 1;
                    iVar12 = fn_006f7de8(local_78);
                  } while (iVar19 < iVar12);
                }
                piVar16 = local_80;
                if ((iVar6 != 0) && (!bVar22)) {
                  local_64 = iVar6;
                  if (local_80 == local_7c) {
                    fn_00797ee4(&local_84,local_80,&local_64);
                    piVar16 = local_80;
                  }
                  else {
                    piVar16 = local_80 + 1;
                    if (local_80 != (int *)0x0) {
                      *local_80 = iVar6;
                    }
                  }
                }
                local_80 = piVar16;
                uVar13 = 0;
                uVar20 = (int)local_80 - (int)local_84 >> 2;
                piVar16 = local_84;
                if (uVar20 != 0) {
                  do {
                    if (local_84[uVar13] == iVar4) {
                      uVar18 = 0;
                      goto LAB_001fe2e0;
                    }
                    uVar13 = uVar13 + 1;
                  } while (uVar13 < uVar20);
                }
                for (; piVar16 != local_80; piVar16 = piVar16 + 1) {
                }
                fn_001008c4(local_84,(int)local_7c - (int)local_84 >> 2,0);
                uVar18 = uVar18 + 1;
                fn_0014481c(DAT_008977e8);
                iVar6 = fn_006b6bc4();
              } while ((int)uVar18 < iVar6);
            }
          }
          if ((((byte)DAT_008c62ec & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62ec), iVar4 != 0))
          {
            DAT_008c62f0 = uVar3;
            DAT_008c62f4 = uVar3;
          }
          *(byte *)(local_48 + 0x44) = *(byte *)(local_48 + 0x44) & 0xfe;
          bVar14 = *(byte *)(local_4c + 0x44) & 0xfe;
        }
        *(byte *)(local_4c + 0x44) = bVar14;
      }
    }
  }
  goto LAB_001fe488;
  while (uVar18 = uVar18 + 1, uVar18 < 4) {
LAB_001fe2e0:
    if (local_40[uVar18 * 0xa3 + 0xfa] == local_78) {
      puVar17 = local_40 + uVar18 * 0xa3 + 0xfa;
      goto LAB_001fe31c;
    }
  }
  puVar17 = (undefined4 *)0x0;
LAB_001fe31c:
  uVar8 = puVar17[uVar13 * 0x10 + 0x11];
  uVar7 = puVar17[uVar13 * 0x10 + 0x12];
  for (; piVar16 != local_80; piVar16 = piVar16 + 1) {
  }
  fn_001008c4(local_84,(int)local_7c - (int)local_84 >> 2,0);
  if (*(char *)(local_50 + 0x8d) == '\0') {
    *(byte *)(local_48 + 0x44) = *(byte *)(local_48 + 0x44) & 0xfe | 1;
    *(undefined4 *)(local_48 + 0x1c) = uVar8;
    *(undefined4 *)(local_48 + 0x20) = uVar7;
    *(undefined4 *)(local_48 + 0x24) = uVar3;
    *(byte *)(local_48 + 0x44) = *(byte *)(local_48 + 0x44) & 0xef | 0x10;
  }
  else {
    *(byte *)(local_4c + 0x44) = *(byte *)(local_4c + 0x44) & 0xfe | 1;
    *(undefined4 *)(local_4c + 0x1c) = uVar8;
    *(undefined4 *)(local_4c + 0x20) = uVar7;
    *(undefined4 *)(local_4c + 0x24) = uVar3;
    *(byte *)(local_4c + 0x44) = *(byte *)(local_4c + 0x44) & 0xef | 0x10;
  }
LAB_001fe488:
  local_70 = local_70 + 1;
  if (4 < local_70) {
    return;
  }
  goto LAB_001fdeac;
}


