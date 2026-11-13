#include "0040db4c_0040e3f0.h"



void fn_0040e3f0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003690f4();
  *puVar1 = &PTR_FUN_008380e8;
  return;
}



undefined4 fn_0040e064(int *param_1,undefined4 param_2)

{
  uint uVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int *unaff_r11;
  uint in_fpscr;
  float in_s0;
  float fVar12;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int *piStack_2c;
  undefined4 local_28;
  
  iVar4 = (param_1[2] - param_1[1]) / 0x34;
  piStack_2c = param_1;
  local_28 = param_2;
  puVar6 = (undefined4 *)fn_006f7770(DAT_008977e0);
  local_4c = *puVar6;
  uStack_48 = puVar6[1];
  uStack_44 = puVar6[2];
  if (0 < iVar4) {
    unaff_r11 = &DAT_00897804;
  }
  iVar10 = 0;
  if (0 < iVar4) {
    do {
      psVar9 = (short *)(param_1[1] + iVar10 * 0x34);
      if ((char)psVar9[2] != '\0') {
        iVar7 = fn_006afabc(*(undefined4 *)(DAT_008977e0 + 0x1c),
                             *(undefined4 *)(DAT_008977e0 + 0xa8));
        if (iVar7 != 0) {
          iVar7 = fn_006f7a0c(DAT_008977e0);
          iVar7 = fn_006c3a70(*(undefined4 *)(iVar7 + 0x30));
          if (*(char *)((int)psVar9 + 7) != -1 && *(char *)((int)psVar9 + 7) != iVar7)
          goto LAB_0040e3c4;
        }
        iVar7 = fn_00368c90(local_28,(int)*psVar9);
        if (iVar7 == 0) {
          if (psVar9[6] == 0) {
            fn_005f1940(&local_4c,psVar9 + 8);
          }
          else {
            puVar6 = (undefined4 *)(**(code **)(*param_1 + 0x30))(param_1,iVar10,0);
            local_40 = *puVar6;
            uStack_3c = puVar6[1];
            uStack_38 = puVar6[2];
            fn_005f1940(&local_4c,&local_40);
          }
          fVar12 = in_s0;
          if (*(char *)((int)psVar9 + 0xb) == -1) {
            uVar5 = (**(code **)(*param_1 + 0x44))(param_1,(int)*psVar9);
            *(undefined1 *)((int)psVar9 + 0xb) = uVar5;
          }
          iVar11 = 0;
          iVar7 = fn_003b21d0(param_1[10]);
          if ((iVar7 != 0) && (iVar7 = fn_003b1928(param_1[10],(int)*psVar9), iVar7 != 0)) {
            iVar11 = (int)*(short *)(iVar7 + 2);
          }
          if ((char)psVar9[3] == '\x02' || (char)psVar9[3] == '\x04') {
            uVar8 = (**(code **)(*param_1 + 0x1c))
                              (param_1,(int)*(char *)((int)psVar9 + 0xb),(int)*psVar9,iVar11);
            in_s0 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
            in_fpscr = in_fpscr & 0xfffffff;
            if (in_s0 < fVar12) {
LAB_0040e350:
              *(undefined1 *)(psVar9 + 3) = 0;
            }
          }
          else {
            iVar7 = fn_006f7358(DAT_008977e0);
            if ((iVar7 != 0) && ((char)psVar9[3] == '\x01')) {
              iVar7 = fn_006f7508(DAT_008977e0);
              iVar7 = fn_003f2b64(*(undefined4 *)(iVar7 + 8),(int)*psVar9);
              if (iVar7 == 0) {
                uVar8 = (**(code **)(*param_1 + 0x20))
                                  (param_1,(int)*(char *)((int)psVar9 + 0xb),iVar11);
                in_s0 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
                in_fpscr = in_fpscr & 0xfffffff;
                if (in_s0 < fVar12) goto LAB_0040e350;
                goto LAB_0040e3c4;
              }
            }
            uVar8 = (**(code **)(*param_1 + 0x1c))
                              (param_1,(int)*(char *)((int)psVar9 + 0xb),(int)*psVar9,iVar11);
            in_s0 = (float)VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
            uVar1 = in_fpscr & 0xfffffff | (uint)(fVar12 < in_s0) << 0x1f |
                    (uint)(fVar12 == in_s0) << 0x1e;
            in_fpscr = uVar1 | (uint)(NAN(fVar12) || NAN(in_s0)) << 0x1c;
            bVar3 = (byte)(uVar1 >> 0x18);
            if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
              iVar7 = (**(code **)(*param_1 + 0x40))(param_1,(int)*psVar9);
              cVar2 = '\0';
              if (iVar7 != 0) {
                cVar2 = *(char *)(iVar7 + 0xe);
              }
              if (iVar7 != 0 && cVar2 != '\0') {
                iVar11 = fn_006f7a0c(DAT_008977e0);
                iVar11 = fn_006c3a84(*(undefined4 *)(iVar11 + 0x30));
                if ((iVar11 < 2) && (*(char *)(iVar11 + iVar7 + 0xf) != '\0')) {
                  iVar11 = fn_006f7a0c(DAT_008977e0);
                  iVar11 = fn_006c3a70(*(undefined4 *)(iVar11 + 0x30));
                  if (*(char *)(iVar11 + iVar7 + 0x11) != '\0') {
                    if (*(short *)(iVar7 + 0xc) == 4) {
                      iVar11 = fn_006b520c(*(undefined4 *)(*unaff_r11 + 0x1c),
                                            *(undefined4 *)(iVar7 + 8));
                      if (iVar11 == 0) {
                        iVar11 = fn_002fb61c();
                        if (iVar11 == 0) goto LAB_0040e384;
                        goto LAB_0040e3a4;
                      }
                    }
                    else {
LAB_0040e384:
                      uVar8 = fn_006f7508(DAT_008977e0);
                      iVar11 = fn_006c32a8(uVar8,(int)*(short *)(iVar7 + 4));
                      if (iVar11 != 0) {
LAB_0040e3a4:
                        in_s0 = fVar12;
                        (**(code **)(*param_1 + 0x6c))(param_1,iVar7,0,iVar10);
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0040e3c4:
      iVar10 = iVar10 + 1;
    } while (iVar10 < iVar4);
  }
  return 0;
}



void fn_0040db4c(int *param_1,uint *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int local_54;
  short local_48;
  undefined2 local_46;
  undefined2 local_44;
  undefined2 local_42;
  int local_40;
  uint local_3c;
  int local_2c;
  
  iVar2 = fn_002fb61c();
  if ((iVar2 == 0) && (iVar2 = fn_00341260(0xffffffff), iVar2 == 0)) {
    local_40 = (param_1[2] - param_1[1]) / 0x34;
    local_54 = 0;
    if (0 < local_40) {
      do {
        psVar3 = (short *)(param_1[1] + local_54 * 0x34);
        iVar2 = (int)*psVar3;
        if ((char)psVar3[2] != '\0') {
          local_2c = (**(code **)(*param_1 + 0x40))(param_1,iVar2);
          if (local_2c == 0) {
LAB_0040dc28:
            iVar2 = fn_003b37b0(param_1[10],iVar2);
            if ((iVar2 != 0) &&
               (iVar2 = fn_003b237c(param_1[10],(int)*(short *)(iVar2 + 8)), iVar2 != 0)) {
              iVar5 = 0;
              do {
                iVar6 = fn_003b2730(param_1[10],(int)*(short *)(iVar2 + iVar5 * 8 + 0xc));
                if ((iVar6 != 0) && (iVar7 = fn_001a46f4((int)*(short *)(iVar6 + 4)), iVar7 != 0))
                {
                  sVar1 = *(short *)(iVar6 + 2);
                  uVar10 = 0;
                  iVar7 = (int)(param_2[1] - *param_2) >> 3;
                  if (0 < iVar7) {
                    do {
                      uVar8 = (int)(param_2[1] - *param_2) >> 3;
                      if (uVar8 <= uVar10) {
                        fn_002ff628(9,&DAT_008c762b,&DAT_008c762b,uVar10,uVar8);
                      }
                      psVar3 = (short *)(*param_2 + uVar10 * 8);
                      if (*psVar3 == sVar1) {
                        if (*(short *)(iVar6 + 0x18) < psVar3[1]) {
                          psVar3[1] = *(short *)(iVar6 + 0x18);
                        }
                        if (((char)psVar3[2] == '\0') && (*(char *)(local_2c + 0xf) != '\0')) {
                          *(undefined1 *)(psVar3 + 2) = 1;
                        }
                        if ((*(char *)((int)psVar3 + 5) == '\0') &&
                           (*(char *)(local_2c + 0x10) != '\0')) {
                          *(undefined1 *)((int)psVar3 + 5) = 1;
                        }
                        if (((char)psVar3[3] == '\0') && (*(char *)(local_2c + 0x11) != '\0')) {
                          *(undefined1 *)(psVar3 + 3) = 1;
                        }
                        if ((*(char *)((int)psVar3 + 7) == '\0') &&
                           (*(char *)(local_2c + 0x12) != '\0')) {
                          *(undefined1 *)((int)psVar3 + 7) = 1;
                        }
                        goto LAB_0040dfd4;
                      }
                      uVar10 = uVar10 + 1;
                    } while ((int)uVar10 < iVar7);
                  }
                  local_46 = *(undefined2 *)(iVar6 + 0x18);
                  local_44 = *(undefined2 *)(local_2c + 0xf);
                  local_42 = *(undefined2 *)(local_2c + 0x11);
                  uVar10 = param_2[1];
                  local_48 = sVar1;
                  if (uVar10 == param_2[2]) {
                    uVar8 = (int)(uVar10 - *param_2) >> 3;
                    if (uVar8 < (uint)((int)(param_2[2] - *param_2) >> 3)) {
                      param_2[1] = uVar10 + 8;
                      if (uVar10 != 0) {
                        fn_00166824(uVar10,uVar10 - 8);
                      }
                      uVar11 = uVar10 - 8;
                      uVar8 = uVar10;
                      if (uVar10 < uVar11) {
                        iVar6 = uVar11 - uVar10;
                        if (0 < iVar6) {
                          uVar9 = uVar11;
                          if (iVar6 * 0x10000000 < 0) {
                            uVar9 = uVar10 - 0x10;
                            fn_00166824(uVar11,uVar9);
                            uVar8 = uVar11;
                          }
                          for (iVar6 = iVar6 >> 4; iVar6 != 0; iVar6 = iVar6 + -1) {
                            fn_00166824(uVar8 - 8,uVar9 - 8);
                            uVar8 = uVar8 - 0x10;
                            uVar9 = uVar9 - 0x10;
                            fn_00166824();
                          }
                        }
                      }
                      else {
                        while (uVar10 != uVar11) {
                          uVar11 = uVar11 - 8;
                          fn_00166824(uVar8 - 8,uVar11);
                          uVar8 = uVar8 - 8;
                        }
                      }
                      goto LAB_0040debc;
                    }
                    local_3c = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
                    if (local_3c < uVar8 + 0x20) {
                      local_3c = uVar8 + 0x20;
                    }
                    uVar11 = fn_00100fc6(local_3c << 3,0);
                    uVar9 = uVar11;
                    for (uVar8 = *param_2; uVar8 != uVar10; uVar8 = uVar8 + 8) {
                      if (uVar11 != 0) {
                        fn_00166824(uVar11,uVar8);
                      }
                      uVar11 = uVar11 + 8;
                    }
                    iVar6 = uVar9 + (uVar10 - *param_2 & 0xfffffff8);
                    if (iVar6 != 0) {
                      fn_00166824(iVar6,&local_48);
                    }
                    uVar8 = param_2[1];
                    iVar6 = uVar9 + (uVar10 - *param_2 & 0xfffffff8);
                    for (; uVar10 != uVar8; uVar10 = uVar10 + 8) {
                      iVar6 = iVar6 + 8;
                      if (iVar6 != 0) {
                        fn_00166824(iVar6,uVar10);
                      }
                    }
                    uVar8 = *param_2;
                    uVar11 = param_2[1];
                    uVar10 = uVar8;
                    if (uVar11 < uVar8) {
                      do {
                        uVar10 = uVar10 + 8;
                      } while (uVar10 != uVar11);
                    }
                    fn_001008c4(uVar8,(int)(param_2[2] - uVar8) >> 3,0);
                    param_2[2] = uVar9 + local_3c * 8;
                    *param_2 = uVar9;
                    param_2[1] = uVar9 + ((int)(uVar11 - uVar8) >> 3) * 8 + 8;
                  }
                  else {
                    param_2[1] = uVar10 + 8;
                    if (uVar10 != 0) {
LAB_0040debc:
                      fn_00166824(uVar10,&local_48);
                    }
                  }
                }
LAB_0040dfd4:
                iVar5 = iVar5 + 1;
              } while (iVar5 < 10);
            }
          }
          else if ((*(char *)(local_2c + 0xe) != '\0') && (*(short *)(local_2c + 0xc) != 4)) {
            uVar4 = fn_006f7508(DAT_008977e0);
            iVar5 = fn_006c32a8(uVar4,(int)*(short *)(local_2c + 4));
            if (iVar5 != 0) goto LAB_0040dc28;
          }
        }
        local_54 = local_54 + 1;
      } while (local_54 < local_40);
    }
  }
  return;
}


