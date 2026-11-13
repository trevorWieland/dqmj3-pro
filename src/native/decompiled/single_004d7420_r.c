#include "single_004d7420_r.h"


extern undefined4 UndefinedInstruction;

void fn_004d7420(int param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  ushort uVar11;
  ushort uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  undefined4 local_38;
  uint *local_34;
  uint *local_30;
  uint *local_2c;
  
  if ((0x3fefffff < *(int *)(param_1 + 0x10) - 0x100000U) && (DAT_008c0630 != 0)) {
    param_4 = (char *)&DAT_004d7758;
    param_3 = 0;
  }
  local_38 = *(undefined4 *)(param_1 + 0xc);
  puVar4 = (undefined4 *)fn_0050953c(*(undefined4 *)(param_1 + 0x10),&local_38,param_3,param_4);
  iVar5 = (**(code **)(*(int *)*puVar4 + 0x2c))();
  if (iVar5 == 0) {
    local_30 = (uint *)(param_1 + 0x694);
    local_34 = (uint *)(param_1 + 0x690);
    local_2c = (uint *)(param_1 + 0x698);
    do {
      puVar6 = (uint *)fn_006d9a38(puVar4);
      uVar9 = puVar6[1];
      uVar13 = (uint)*(byte *)(uVar9 + 1);
      if ((uVar13 < (*(uint *)(param_1 + 0x14) & 0xff)) &&
         (uVar14 = (uint)*(byte *)(param_1 + 0x18), uVar14 != uVar13)) {
        iVar5 = *(int *)(param_1 + 0x5b4);
        pcVar7 = (char *)(iVar5 + uVar13 * 0x20);
        if (*pcVar7 != '\0') {
          pbVar10 = (byte *)(uVar9 + 0x14);
          uVar11 = *(ushort *)(uVar9 + 0x16) << 8 | *(ushort *)(uVar9 + 0x16) >> 8;
          if (uVar11 != 0xffff) {
            bVar1 = *pbVar10;
            if (bVar1 == 0x12) {
              if (*puVar6 == 4) {
                uVar3 = *(ushort *)(iVar5 + uVar14 * 0x20 + 2);
joined_r0x004d7a9c:
                if (uVar3 == uVar11) {
                  *local_30 = *(uint *)(param_1 + 0x694) & ~(1 << uVar13);
                }
              }
            }
            else if (bVar1 < 0x12) {
              if (bVar1 == 3) {
                if (*puVar6 == 4) {
                  uVar3 = *(ushort *)(pcVar7 + 2);
                  uVar12 = uVar3 + 1;
                  if (uVar12 == 0xffff) {
                    uVar12 = 0;
                  }
                  if (uVar3 == 0xffff || uVar11 == uVar12) {
                    pcVar7[1] = '\0';
                    *(ushort *)(pcVar7 + 2) = uVar11;
                    pcVar7[4] = '\0';
                    pcVar7[5] = '\0';
                    pcVar7[6] = '\0';
                    pcVar7[7] = '\0';
                    pcVar7[8] = '\0';
                    pcVar7[9] = '\0';
                    pcVar7[10] = -1;
                    pcVar7[0xb] = -1;
                    pcVar7[0xc] = '\0';
                    pcVar7[0xd] = '\0';
                    pcVar7[0xe] = '\0';
                    pcVar7[0xf] = '\0';
                    *(undefined4 *)(*(int *)(param_1 + 0x5c4) + uVar13 * 4) = 0;
                    fn_004d989c(param_1,2);
                  }
                  else {
                    if (uVar3 != uVar11) goto LAB_004d7b88;
                    pcVar7[0x14] = '\0';
                    pcVar7[0x18] = '\0';
                    pcVar7[0x19] = '\0';
                    pcVar7[0x1a] = -1;
                    pcVar7[0x1b] = -1;
                    if (pcVar7[1] != '\0') {
                      pcVar7[1] = '\0';
                      pcVar7[8] = '\0';
                      pcVar7[9] = '\0';
                      pcVar7[10] = -1;
                      pcVar7[0xb] = -1;
                      pcVar7[0xc] = '\0';
                      pcVar7[0xd] = '\0';
                      pcVar7[0xe] = '\0';
                      pcVar7[0xf] = '\0';
                      *(undefined4 *)(*(int *)(param_1 + 0x5c4) + uVar13 * 4) = 0;
                      fn_004d989c(param_1,2);
                    }
                  }
                  fn_004d69a8(param_1,uVar13,0x13,uVar11);
                }
              }
              else if (bVar1 < 3) {
                if (bVar1 == 1) {
                  if (*puVar6 == 0x10) {
                    uVar15 = *(uint *)(uVar9 + 0x1c);
                    uVar14 = *(uint *)(uVar9 + 0x18);
                    uVar8 = uVar14 >> 8 & 0xff;
                    uVar17 = (uVar14 & 0xff) << 8;
                    uVar14 = ((uVar14 >> 0x10) << 0x18 | (uVar14 >> 0x18) << 0x10) >> 0x10 |
                             (uVar17 | uVar8) << 0x10;
                    uVar16 = 0;
                    if ((uVar17 | uVar8) >> 1 == 0) {
                      do {
                        if (((uVar14 & 1 << (uVar16 & 0xff)) != 0) &&
                           (*(int *)(param_1 + uVar16 * 8 + 0x5cc) == 0)) goto LAB_004d7b88;
                        uVar16 = uVar16 + 1;
                      } while (uVar16 < 0x11);
                      uVar17 = 0;
                      uVar8 = 0;
                      if (*(uint *)(param_1 + 0x14) != 0) {
                        do {
                          if (*(char *)(*(int *)(param_1 + 0x5b4) + (uVar8 & 0xff) * 0x20) != '\0')
                          {
                            uVar17 = uVar17 | 1 << (uVar8 & 0xff) & 0xffffU;
                          }
                          uVar8 = uVar8 + 1;
                        } while (uVar8 < *(uint *)(param_1 + 0x14));
                      }
                      if (uVar17 == ((*(ushort *)(uVar9 + 0x20) & 0xff) << 8 |
                                    (uint)(*(ushort *)(uVar9 + 0x20) >> 8))) {
                        uVar3 = *(ushort *)(pcVar7 + 2);
                        uVar12 = uVar3 + 1;
                        if (uVar12 == 0xffff) {
                          uVar12 = 0;
                        }
                        if (uVar3 == 0xffff || uVar11 == uVar12) {
                          uVar9 = (uint)*(byte *)(param_1 + 0x19);
                          bVar18 = uVar9 < 2;
                          if (bVar18) {
                            uVar9 = *(uint *)(param_1 + 0x654);
                          }
                          if (bVar18 && uVar9 == 0) {
                            pcVar7[1] = '\x01';
                            *(ushort *)(pcVar7 + 2) = uVar11;
                            pcVar7[0xc] = '\0';
                            pcVar7[0xd] = '\0';
                            pcVar7[0xe] = '\0';
                            pcVar7[0xf] = '\0';
                            *(uint *)(pcVar7 + 4) = uVar14;
                            pcVar7[8] = '\0';
                            pcVar7[9] = '\0';
                            pcVar7[10] = -1;
                            pcVar7[0xb] = -1;
                            pcVar7[0x14] = '\0';
                            pcVar7[0x18] = '\0';
                            pcVar7[0x19] = '\0';
                            pcVar7[0x1a] = -1;
                            pcVar7[0x1b] = -1;
                            *(uint *)(*(int *)(param_1 + 0x5c4) + uVar13 * 4) =
                                 ((uVar15 >> 0x10) << 0x18 | (uVar15 >> 0x18) << 0x10) >> 0x10 |
                                 ((uVar15 & 0xff) << 8 | uVar15 >> 8 & 0xff) << 0x10;
LAB_004d7800:
                            fn_004d69a8(param_1,uVar13,0x11,uVar11);
                          }
                        }
                        else if ((uVar3 != uVar11) || (*(uint *)(pcVar7 + 4) == uVar14))
                        goto LAB_004d7800;
                      }
                    }
                  }
                }
                else {
                  if (bVar1 == 2) {
                    pbVar10 = (byte *)*puVar6;
                  }
                  if (((bVar1 == 2 && pbVar10 == &UndefinedInstruction) &&
                      (*(ushort *)(pcVar7 + 2) != 0xffff)) && (*(ushort *)(pcVar7 + 2) == uVar11)) {
                    cVar2 = pcVar7[1];
                    bVar18 = cVar2 == '\0';
                    if (bVar18) {
                      cVar2 = pcVar7[0x1c];
                    }
                    if (!bVar18 || cVar2 != '\0') {
                      pcVar7[1] = '\0';
                      pcVar7[0xc] = '\0';
                      pcVar7[0xd] = '\0';
                      pcVar7[0xe] = '\0';
                      pcVar7[0xf] = '\0';
                      pcVar7[8] = '\0';
                      pcVar7[9] = '\0';
                      pcVar7[10] = -1;
                      pcVar7[0xb] = -1;
                      *(undefined4 *)(*(int *)(param_1 + 0x5c4) + uVar13 * 4) = 0;
                      fn_004d989c(param_1,2);
                    }
                    pcVar7[0x14] = '\0';
                    pcVar7[0x18] = '\0';
                    pcVar7[0x19] = '\0';
                    pcVar7[0x1a] = -1;
                    pcVar7[0x1b] = -1;
                    fn_004d69a8(param_1,uVar13,0x12,uVar11);
                  }
                }
              }
              else if (bVar1 == 4) {
                if (*puVar6 == 8) {
                  uVar9 = *(uint *)(uVar9 + 0x18);
                  uVar9 = ((uVar9 >> 0x10) << 0x18 | (uVar9 >> 0x18) << 0x10) >> 0x10 |
                          ((uVar9 & 0xff) << 8 | uVar9 >> 8 & 0xff) << 0x10;
                  if (*(ushort *)(pcVar7 + 2) == uVar11) {
                    uVar8 = *(uint *)(param_1 + 0x654);
                    bVar18 = uVar8 == 0;
                    if (bVar18) {
                      uVar8 = (uint)(byte)pcVar7[1];
                    }
                    if (bVar18 && uVar8 == 0) {
                      if (pcVar7[0x14] != '\0') goto LAB_004d7a28;
                    }
                    else {
                      cVar2 = *(char *)(param_1 + 0x19);
                      if (cVar2 == '\0') {
                        *(uint *)(pcVar7 + 0x18) = uVar9;
                        pcVar7[0x14] = '\x01';
                      }
                      else {
                        if (*(char *)(iVar5 + uVar14 * 0x20 + 0x14) == '\0') {
                          if (cVar2 == '\x05' || cVar2 == '\x04') {
                            pcVar7[0x14] = '\x01';
                            *(uint *)(pcVar7 + 0x18) = uVar9;
                            pcVar7[1] = '\0';
                          }
                          else {
                            pcVar7[0x14] = '\x01';
                            *(uint *)(pcVar7 + 0x18) = uVar9;
                            if ((int)(*(int *)(param_1 + 0x668) - uVar9) < 1) goto LAB_004d7b88;
                          }
                        }
                        else {
                          pcVar7[0x14] = '\x01';
                          pcVar7[1] = '\0';
                          pcVar7[0x1c] = '\x01';
                          *(uint *)(pcVar7 + 0x18) = uVar9;
                        }
LAB_004d7a28:
                        fn_004d69a8(param_1,uVar13,0x14,uVar11);
                      }
                    }
                  }
                }
              }
              else {
                if (bVar1 == 0x11) {
                  pcVar7 = (char *)*puVar6;
                }
                if ((bVar1 == 0x11 && pcVar7 == &UndefinedInstruction) &&
                   (*(ushort *)(iVar5 + uVar14 * 0x20 + 2) == uVar11)) {
                  *local_34 = *(uint *)(param_1 + 0x690) & ~(1 << uVar13);
                }
              }
            }
            else if (bVar1 == 0x13) {
              if (*puVar6 == 4) {
                if (*(ushort *)(iVar5 + uVar14 * 0x20 + 2) == uVar11) {
                  *local_34 = *(uint *)(param_1 + 0x690) & ~(1 << uVar13);
                }
                uVar3 = *(ushort *)
                         (*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 2);
                goto joined_r0x004d7a9c;
              }
            }
            else if (bVar1 == 0x14) {
              if (*puVar6 == 4) {
                if (*(ushort *)(iVar5 + uVar14 * 0x20 + 2) == uVar11) {
                  *local_34 = *(uint *)(param_1 + 0x690) & ~(1 << uVar13);
                }
                if (*(ushort *)
                     (*(int *)(param_1 + 0x5b4) + (uint)*(byte *)(param_1 + 0x18) * 0x20 + 2) ==
                    uVar11) {
                  *local_2c = *(uint *)(param_1 + 0x698) & ~(1 << uVar13);
                }
              }
            }
            else if ((bVar1 == 0x21 || bVar1 == 0x22) && (0xf < *puVar6)) {
              fn_004d7ef0(param_1,uVar13,uVar11,pbVar10,*puVar6,bVar1 == 0x22);
            }
LAB_004d7b88:
            *(undefined4 *)(*(int *)(param_1 + 0x5b4) + uVar13 * 0x20 + 0x10) =
                 *(undefined4 *)(param_1 + 0x680);
          }
        }
      }
      (**(code **)(*(int *)*puVar4 + 0x30))();
      iVar5 = (**(code **)(*(int *)*puVar4 + 0x2c))();
    } while (iVar5 == 0);
  }
  return;
}


