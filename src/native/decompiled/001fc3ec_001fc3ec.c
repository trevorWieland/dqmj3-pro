#include "001fc3ec_001fc3ec.h"



void fn_001fc3ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  byte bVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int *extraout_r1;
  int *piVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  int *piVar16;
  int *piVar17;
  float in_s0;
  float in_s1;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  int *local_8c;
  int *local_88;
  int *local_84;
  int local_80;
  int local_78;
  float local_74 [3];
  float local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_4c;
  int local_28;
  
  uVar11 = 0;
  local_28 = param_1;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6bc4();
  fVar20 = 0.0;
  if (0 < iVar4) {
    piVar16 = (int *)(local_28 + 0x674);
    piVar17 = (int *)(local_28 + 0xb8c);
    do {
      uVar5 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b71a8(uVar5,uVar11 & 0xff);
      if (iVar4 != 0) {
        iVar14 = *(int *)(local_28 + 0x14);
        fVar19 = *(float *)(local_28 + 0x18) * *(float *)(iVar4 + 8);
        fVar21 = -(*(float *)(iVar4 + 0x10) * *(float *)(local_28 + 0x18));
        fn_0017fe34();
        fn_0052534c(local_74,&local_68);
        iVar10 = *(int *)(local_28 + 1000);
        piVar9 = extraout_r1;
        if (iVar10 == iVar4) {
          piVar9 = (int *)(local_28 + 1000);
        }
        fVar18 = local_68 * fVar19 + local_74[0] * fVar21 + fVar20 + *(float *)(iVar14 + 0x1c);
        fVar19 = -local_74[0] * fVar19 + local_68 * fVar21 + fVar20 + *(float *)(iVar14 + 0x20);
        if ((iVar10 == iVar4) || (piVar9 = piVar16, *(int *)(local_28 + 0x674) == iVar4)) {
LAB_001fc504:
          if (piVar9 == (int *)0x0) goto LAB_001fc630;
        }
        else {
          if (*(int *)(local_28 + 0x900) == iVar4) {
            piVar9 = (int *)(local_28 + 0x900);
            goto LAB_001fc504;
          }
          piVar9 = piVar17;
          if (*(int *)(local_28 + 0xb8c) == iVar4) goto LAB_001fc504;
LAB_001fc630:
          if (iVar10 == 0) {
            *(int *)(local_28 + 1000) = iVar4;
            piVar9 = (int *)(local_28 + 1000);
          }
          else if (*(int *)(local_28 + 0x674) == 0) {
            *(int *)(local_28 + 0x674) = iVar4;
            piVar9 = piVar16;
          }
          else if (*(int *)(local_28 + 0x900) == 0) {
            *(int *)(local_28 + 0x900) = iVar4;
            piVar9 = (int *)(local_28 + 0x900);
          }
          else if (*(int *)(local_28 + 0xb8c) == 0) {
            *(int *)(local_28 + 0xb8c) = iVar4;
            piVar9 = piVar17;
          }
          else {
            piVar9 = (int *)0x0;
          }
        }
        fVar21 = (float)piVar9[1] - fVar18;
        in_s1 = (float)piVar9[2] - fVar19;
        in_s0 = fVar21 * fVar21 + in_s1 * in_s1;
        if (0x3f7fffff < (int)in_s0) {
          iVar10 = 0x50;
          iVar4 = 0;
          do {
            iVar10 = iVar10 + -1;
            piVar9[iVar4 * 2 + 0xa1] = piVar9[iVar4 * 2 + 0x9f];
            piVar9[iVar4 * 2 + 0xa2] = piVar9[iVar4 * 2 + 0xa0];
            iVar4 = iVar4 + -1;
          } while (iVar10 != 0);
          piVar9[1] = (int)fVar18;
          piVar9[2] = (int)fVar19;
        }
      }
      uVar11 = uVar11 + 1;
      fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6bc4();
    } while ((int)uVar11 < iVar4);
  }
  iVar4 = 0;
  do {
    iVar10 = *(int *)(local_28 + iVar4 * 0x10 + 200);
    if (iVar10 != 0) {
      *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x32);
  local_78 = 0;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6e94();
  if (iVar4 < 1) {
    return;
  }
LAB_001fc5dc:
  uVar5 = fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6d3c(uVar5,local_78);
  if (iVar4 != 0) {
    local_54 = (uint)*(byte *)(iVar4 + 0x57);
    iVar10 = fn_006ba7d4(iVar4);
    if (iVar10 == 0) {
      iVar14 = local_28 + local_78 * 0x10;
      iVar10 = *(int *)(iVar14 + 200);
      if (iVar10 != 0) {
        *(byte *)(iVar10 + 0x44) = *(byte *)(iVar10 + 0x44) & 0xfe | 1;
      }
      if ((local_54 != 0) && (local_54 < 4)) {
        iVar10 = 0;
        do {
          iVar7 = *(int *)(iVar14 + iVar10 * 4 + 0xcc);
          if (iVar7 != 0) {
            bVar3 = *(byte *)(iVar7 + 0x44) & 0xfe;
            if (iVar10 == local_54 - 1) {
              bVar3 = bVar3 | 1;
            }
            *(byte *)(iVar7 + 0x44) = bVar3;
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < 3);
      }
      fn_001fd428(local_28,iVar4 + 8);
      iVar4 = *(int *)(iVar14 + 200);
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x24) = fVar20;
        *(float *)(iVar4 + 0x1c) = in_s0;
        *(float *)(iVar4 + 0x20) = in_s1;
        bVar3 = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
LAB_001fc724:
        *(byte *)(iVar4 + 0x44) = bVar3;
      }
    }
    else {
      iVar10 = fn_006ba7d4(iVar4);
      if (iVar10 == 1) {
        uVar11 = 0;
        local_4c = local_28;
        fn_0014481c(DAT_008977e8);
        iVar10 = fn_006b6bc4();
        if (0 < iVar10) {
          do {
            uVar5 = fn_0014481c(DAT_008977e8);
            local_80 = fn_006b71a8(uVar5,uVar11 & 0xff);
            local_8c = (int *)0x0;
            local_88 = (int *)0x0;
            local_84 = (int *)0x0;
            iVar10 = fn_006f7de8(local_80);
            uVar12 = iVar10 + 1;
            if (0x3ffffffe < uVar12 && iVar10 != 0x3ffffffe) {
              fn_002ff628(8,&DAT_008c7647,&DAT_008c7647,uVar12,0x3fffffff);
            }
            if ((uint)((int)local_84 - (int)local_8c >> 2) < uVar12) {
              uVar8 = (int)local_88 - (int)local_8c >> 2;
              uVar6 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
              if (uVar6 < uVar8 + 0x20) {
                uVar6 = uVar8 + 0x20;
              }
              if (uVar12 < uVar6) {
                uVar12 = uVar6;
              }
              piVar9 = (int *)fn_00100fc6(uVar12 << 2,0);
              piVar17 = piVar9;
              for (piVar16 = local_8c; piVar2 = local_8c, piVar16 != local_88; piVar16 = piVar16 + 1
                  ) {
                if (piVar17 != (int *)0x0) {
                  *piVar17 = *piVar16;
                }
                piVar17 = piVar17 + 1;
              }
              for (; piVar2 != local_88; piVar2 = piVar2 + 1) {
              }
              fn_001008c4(local_8c,(int)local_84 - (int)local_8c >> 2,0);
              local_88 = (int *)(((int)local_88 - (int)local_8c & 0xfffffffcU) + (int)piVar9);
              local_84 = piVar9 + uVar12;
              local_8c = piVar9;
            }
            iVar10 = fn_006f8074(local_80);
            if (iVar10 == 0) {
              iVar10 = 0;
LAB_001fc8e8:
              iVar14 = 0x7fffffff;
            }
            else {
              iVar10 = *(int *)(local_80 + 0xfc);
              if (iVar10 == 0) goto LAB_001fc8e8;
              iVar14 = *(int *)(iVar10 + 0x58);
            }
            bVar1 = false;
            iVar15 = 0;
            iVar7 = fn_006f7de8(local_80);
            if (0 < iVar7) {
              do {
                iVar7 = fn_006f8418(local_80,iVar15);
                if (iVar14 < *(int *)(iVar7 + 0x94)) {
                  if (!bVar1) {
                    local_64 = iVar10;
                    if (local_88 == local_84) {
                      fn_00797ee4(&local_8c,local_88,&local_64);
                      piVar16 = local_88;
                    }
                    else {
                      piVar16 = local_88 + 1;
                      if (local_88 != (int *)0x0) {
                        *local_88 = iVar10;
                      }
                    }
                    local_88 = piVar16;
                    bVar1 = true;
                  }
                  piVar16 = local_88;
                  local_60 = iVar7;
                  if (local_88 != local_84) goto joined_r0x001fc9bc;
                  piVar16 = &local_60;
LAB_001fc9c8:
                  fn_00797ee4(&local_8c,local_88,piVar16);
                }
                else {
                  local_5c = iVar7;
                  piVar16 = local_88;
                  if (local_88 == local_84) {
                    piVar16 = &local_5c;
                    goto LAB_001fc9c8;
                  }
joined_r0x001fc9bc:
                  local_88 = piVar16 + 1;
                  if (piVar16 != (int *)0x0) {
                    *piVar16 = iVar7;
                  }
                }
                iVar15 = iVar15 + 1;
                iVar7 = fn_006f7de8(local_80);
              } while (iVar15 < iVar7);
            }
            piVar16 = local_88;
            if ((iVar10 != 0) && (!bVar1)) {
              local_58 = iVar10;
              if (local_88 == local_84) {
                fn_00797ee4(&local_8c,local_88,&local_58);
                piVar16 = local_88;
              }
              else {
                piVar16 = local_88 + 1;
                if (local_88 != (int *)0x0) {
                  *local_88 = iVar10;
                }
              }
            }
            local_88 = piVar16;
            uVar8 = 0;
            uVar12 = (int)local_88 - (int)local_8c >> 2;
            piVar16 = local_8c;
            if (uVar12 != 0) {
              do {
                if (local_8c[uVar8] == iVar4) {
                  uVar11 = 0;
                  goto LAB_001fca5c;
                }
                uVar8 = uVar8 + 1;
              } while (uVar8 < uVar12);
            }
            for (; piVar16 != local_88; piVar16 = piVar16 + 1) {
            }
            fn_001008c4(local_8c,(int)local_84 - (int)local_8c >> 2,0);
            uVar11 = uVar11 + 1;
            fn_0014481c(DAT_008977e8);
            iVar10 = fn_006b6bc4();
          } while ((int)uVar11 < iVar10);
        }
        if ((((byte)DAT_008c62ec & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62ec), iVar4 != 0)) {
          DAT_008c62f0 = fVar20;
          DAT_008c62f4 = fVar20;
        }
        iVar4 = *(int *)(local_28 + local_78 * 0x10 + 200);
        if (iVar4 != 0) {
          bVar3 = *(byte *)(iVar4 + 0x44) & 0xfe;
          goto LAB_001fc724;
        }
      }
    }
  }
  goto LAB_001fc728;
  while (uVar11 = uVar11 + 1, uVar11 < 4) {
LAB_001fca5c:
    if (*(int *)(local_4c + uVar11 * 0x28c + 1000) == local_80) {
      iVar4 = local_4c + uVar11 * 0x28c + 1000;
      goto LAB_001fca98;
    }
  }
  iVar4 = 0;
LAB_001fca98:
  iVar4 = iVar4 + uVar8 * 0x40;
  uVar13 = *(undefined4 *)(iVar4 + 0x44);
  uVar5 = *(undefined4 *)(iVar4 + 0x48);
  for (; piVar16 != local_88; piVar16 = piVar16 + 1) {
  }
  fn_001008c4(local_8c,(int)local_84 - (int)local_8c >> 2,0);
  iVar10 = local_28 + local_78 * 0x10;
  iVar4 = *(int *)(iVar10 + 200);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe | 1;
  }
  iVar4 = *(int *)(iVar10 + 200);
  if (iVar4 != 0) {
    *(undefined4 *)(iVar4 + 0x20) = uVar5;
    *(undefined4 *)(iVar4 + 0x1c) = uVar13;
    *(float *)(iVar4 + 0x24) = fVar20;
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
  }
  if ((local_54 != 0) && (local_54 < 4)) {
    iVar4 = 0;
    do {
      iVar14 = *(int *)(iVar10 + iVar4 * 4 + 0xcc);
      if (iVar14 != 0) {
        bVar3 = *(byte *)(iVar14 + 0x44) & 0xfe;
        if (iVar4 == local_54 - 1) {
          bVar3 = bVar3 | 1;
        }
        *(byte *)(iVar14 + 0x44) = bVar3;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 3);
  }
LAB_001fc728:
  local_78 = local_78 + 1;
  fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6e94();
  if (iVar4 <= local_78) {
    return;
  }
  goto LAB_001fc5dc;
}


