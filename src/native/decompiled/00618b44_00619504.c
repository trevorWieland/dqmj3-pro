#include "00618b44_00619504.h"



void fn_00619504(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = 0;
  do {
    puVar2 = (undefined4 *)(param_1 + iVar1 * 0x10);
    iVar1 = iVar1 + 1;
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
  } while (iVar1 < 0x10);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00619334) */

void fn_00618b44(int param_1,uint param_2,uint param_3,uint param_4,uint **param_5,int param_6)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint **ppuVar11;
  uint **ppuVar12;
  uint ***pppuVar13;
  undefined4 uVar14;
  int iVar15;
  int *piVar16;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  byte bVar21;
  int iVar22;
  bool bVar23;
  bool bVar24;
  uint **local_120;
  undefined4 ***local_11c;
  undefined4 local_118;
  uint **local_114;
  uint **local_110;
  int local_10c;
  undefined4 local_108;
  uint **local_100;
  undefined4 local_fc;
  int local_f0;
  int local_ec;
  int local_e0;
  int local_d8;
  int local_44;
  undefined4 local_40 [2];
  uint local_38;
  uint local_34;
  
  iVar7 = param_4 + param_3 * 0x418;
  if (param_1 == 0x1b0) {
    if ('\0' < *(char *)(iVar7 + -0x4024)) {
      cVar2 = -*(char *)(iVar7 + -0x4024);
      bVar1 = cVar2 != '\0';
      *(char *)(param_6 + 1) = cVar2;
LAB_00618e5c:
      *(byte *)(param_6 + 0x62) = bVar1;
      return;
    }
  }
  else if (param_1 == 0x1d3) {
    iVar8 = 2;
    do {
      if ((iVar8 == 2 || iVar8 == 3) || (iVar8 == 4 || iVar8 == 5)) {
        cVar2 = -*(char *)(iVar7 + -0x4080 + iVar8 + 0x5b);
        *(char *)(param_6 + iVar8) = cVar2;
        *(bool *)(param_6 + iVar8 + 0x61) = cVar2 != '\0';
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < 0x61);
  }
  else {
    if (param_1 == 0x1d6) {
      uVar19 = fn_0063a5a4();
      bVar1 = (&DAT_007f00a8)[uVar19 & 3];
      uVar4 = fn_00691af0(0x1d6,0);
      *(undefined1 *)(param_6 + (uint)bVar1) = uVar4;
      *(undefined1 *)(param_6 + (uint)bVar1 + 0x61) = 1;
      return;
    }
    if (param_1 == 0x274) {
      if (param_3 - 0x10 < 8) {
        *(char *)(param_6 + 2) = *(char *)(iVar7 + -0x4023) * -2;
        *(undefined1 *)(param_6 + 99) = 1;
        *(char *)(param_6 + 3) = *(char *)(iVar7 + -0x4022) * -2;
        *(undefined1 *)(param_6 + 100) = 1;
        *(char *)(param_6 + 4) = *(char *)(iVar7 + -0x4021) * -2;
        *(undefined1 *)(param_6 + 0x65) = 1;
        *(char *)(param_6 + 5) = *(char *)(iVar7 + -0x4020) * -2;
        *(undefined1 *)(param_6 + 0x66) = 1;
        return;
      }
    }
    else {
      uVar19 = param_4;
      iVar8 = fn_001639e4(param_1);
      iVar9 = param_4 + param_2 * 0x418;
      if (iVar8 != 0x32) {
        if (iVar8 < 0x33) {
          if (iVar8 == 0x23) {
            cVar2 = *(char *)(iVar9 + -0x4024);
            if (param_2 == param_3) {
              cVar2 = -cVar2;
            }
            *(char *)(param_6 + 1) = cVar2;
          }
          else {
            if (iVar8 != 0x24) {
              if (iVar8 == 0x28) {
                uVar19 = 1;
                do {
                  cVar2 = *(char *)(iVar7 + -0x4025 + (uVar19 & 0xff));
                  iVar8 = fn_0068fea8((int)(short)uVar19,(int)cVar2);
                  if (iVar8 != 0) {
                    *(char *)(param_6 + uVar19) = -cVar2;
                    *(bool *)(param_6 + uVar19 + 0x61) = cVar2 != 0;
                  }
                  uVar19 = uVar19 + 1;
                } while ((int)uVar19 < 0x61);
                return;
              }
              if (iVar8 == 0x29) {
                ppuVar11 = (uint **)fn_00691af0(param_1,0);
                ppuVar12 = (uint **)fn_00691af0(param_1,1);
                uVar19 = 1;
                do {
                  iVar8 = (int)*(char *)(iVar7 + -0x4025 + (uVar19 & 0xff));
                  iVar9 = fn_0068fd00((int)(short)uVar19,iVar8);
                  if (iVar9 != 0) {
                    local_120 = (uint **)-iVar8;
                    local_110 = ppuVar12;
                    local_11c = (undefined4 ***)ppuVar11;
                    if ((int)ppuVar12 < (int)ppuVar11) goto code_r0x00618d84;
                    if ((int)local_120 < (int)ppuVar11) {
                      pppuVar13 = (uint ***)&local_11c;
                    }
                    else {
                      pppuVar13 = &local_120;
                    }
                    if ((int)ppuVar12 < (int)*pppuVar13) {
                      pppuVar13 = &local_110;
                    }
                    else if ((int)local_120 < (int)ppuVar11) {
                      pppuVar13 = (uint ***)&local_11c;
                    }
                    else {
                      pppuVar13 = &local_120;
                    }
                    *(undefined1 *)(param_6 + uVar19) = *(undefined1 *)pppuVar13;
                    *(bool *)(param_6 + uVar19 + 0x61) = iVar8 != 0;
                  }
                  uVar19 = uVar19 + 1;
                  if (0x60 < (int)uVar19) {
                    return;
                  }
                } while( true );
              }
              goto LAB_00618d34;
            }
            iVar7 = fn_0061be08(param_2);
            if (param_2 == param_3) {
              uVar10 = 0x10;
              uVar17 = 0x14;
              if (iVar7 == 0) {
                uVar10 = 0x14;
                uVar17 = 0x18;
              }
              bVar21 = 0;
              if (uVar10 < uVar17) {
                do {
                  uVar18 = uVar10 - param_2;
                  bVar23 = uVar10 == param_2;
                  iVar7 = param_4 + uVar10 * 0x418;
                  if (!bVar23) {
                    uVar18 = (uint)*(short *)(iVar7 + -0x4080);
                    uVar19 = uVar18;
                  }
                  if ((!bVar23 && uVar19 != 0) &&
                      (int)uVar18 < 0 == (bVar23 && SBORROW4(uVar10,param_2))) {
                    uVar19 = (uint)*(byte *)(iVar7 + -0x4019);
                    bVar23 = uVar19 == 0;
                    if (bVar23) {
                      uVar19 = (uint)*(byte *)(iVar7 + -0x400a);
                    }
                    bVar24 = bVar23 && uVar19 == 0;
                    if (bVar23 && uVar19 == 0) {
                      bVar24 = *(char *)(iVar7 + -0x4018) == '\0';
                    }
                    if (bVar24) {
                      bVar21 = 1;
                      break;
                    }
                  }
                  uVar10 = (uint)(char)((char)uVar10 + '\x01');
                } while ((int)uVar10 < (int)uVar17);
              }
              uVar4 = fn_00691af0(param_1,0);
              *(undefined1 *)(param_6 + 1) = uVar4;
              bVar1 = fn_006207d0(1,param_3,param_4);
              bVar1 = bVar1 & bVar21;
              goto LAB_00618e5c;
            }
            uVar4 = fn_00691af0(param_1,1);
            *(undefined1 *)(param_6 + 1) = uVar4;
          }
        }
        else {
          if (iVar8 != 0x35) {
            if (iVar8 == 0x39) {
              iVar8 = fn_00691af0(param_1,0);
              iVar9 = fn_00691af0(param_1,1);
              iVar20 = fn_00691af0(param_1,2);
              iVar22 = fn_00691af0(param_1,3);
              sVar5 = *(short *)(iVar7 + -0x4064);
              uVar14 = fn_00176dc0(iVar7 + -0x4080);
              iVar15 = fn_00300f74(sVar5 * 100,uVar14);
              cVar2 = '\0';
              if ((iVar15 < iVar8) && (cVar2 = iVar9 <= iVar15, iVar15 < iVar9)) {
                if (iVar15 < iVar20) {
                  if (iVar15 < iVar22) {
                    cVar2 = '\x04';
                  }
                  else {
                    cVar2 = '\x03';
                  }
                }
                else {
                  cVar2 = '\x02';
                }
              }
              *(char *)(param_6 + 1) = cVar2 - *(char *)(iVar7 + -0x4024);
              *(undefined1 *)(param_6 + 0x62) = 1;
              return;
            }
            if (iVar8 == 0x3b) {
              uVar19 = 1;
              do {
                iVar8 = (int)*(char *)(iVar7 + -0x4025 + (uVar19 & 0xff));
                iVar9 = fn_0068fd00((int)(short)uVar19,iVar8);
                if (iVar9 != 0) {
                  local_120 = (uint **)-iVar8;
                  local_114 = (uint **)0x4;
                  local_11c = (undefined4 ***)0xfffffffc;
                  if ((int)local_120 < -4) {
                    pppuVar13 = (uint ***)&local_11c;
                  }
                  else {
                    pppuVar13 = &local_120;
                  }
                  if ((int)*pppuVar13 < 5) {
                    if ((int)local_120 < -4) {
                      pppuVar13 = (uint ***)&local_11c;
                    }
                    else {
                      pppuVar13 = &local_120;
                    }
                  }
                  else {
                    pppuVar13 = &local_114;
                  }
                  *(undefined1 *)(param_6 + uVar19) = *(undefined1 *)pppuVar13;
                  *(bool *)(param_6 + uVar19 + 0x61) = iVar8 != 0;
                }
                uVar19 = uVar19 + 1;
              } while ((int)uVar19 < 0x61);
              return;
            }
LAB_00618d34:
            local_11c = &local_100;
            local_120 = param_5;
            local_118 = param_4;
            local_10c = param_1;
            fn_0061f150(param_1,param_2,param_3,param_4);
            local_108 = 0x7fffffff;
            local_120 = local_100;
            local_11c = (undefined4 ***)0x0;
            pppuVar13 = (uint ***)0x0;
            if ((int)local_100 < 0) {
              pppuVar13 = (uint ***)&local_11c;
            }
            if (local_100 < (uint **)0x80000000) {
              pppuVar13 = &local_120;
            }
            iVar7 = fn_00655488(*pppuVar13,local_fc);
            local_f0 = param_6 + 0x61;
            iVar8 = 0;
            local_ec = local_118 + param_3 * 0x418 + -0x4080;
            do {
              piVar16 = (int *)fn_006925d4(local_10c,(int)(short)iVar8);
              iVar20 = *piVar16;
              sVar5 = (short)iVar20;
              iVar9 = fn_006914c4((int)sVar5);
              if (iVar9 != 0) {
                iVar9 = iVar20 >> 0x10;
                iVar22 = (int)sVar5;
                *(char *)(param_6 + iVar22) = (char)((uint)iVar20 >> 0x10);
                if ((iVar7 != 0) &&
                   ((local_d8 = iVar9, 7 < param_3 - 0x10 ||
                    (((((((local_e0 = local_ec, *(char *)(local_ec + 0xae) < '\x01' ||
                          (param_2 == param_3)) || (6 < iVar22 - 6U)) ||
                        (iVar9 = fn_0068f87c(iVar22), iVar9 != 3)) &&
                       (((iVar9 = fn_006f44fc(local_e0,0x1c5), iVar9 == 0 || param_2 == param_3 ||
                         (iVar22 != 6 && iVar22 != 7)) ||
                        (iVar9 = fn_0068f87c(iVar22,(int)(char)local_d8), iVar9 != 3)))) &&
                      (((iVar9 = fn_006f44fc(local_e0,0x1e8), iVar9 == 0 || (iVar22 != 6)) ||
                       (iVar9 = fn_0068f87c(6,(int)(char)local_d8), iVar9 != 3)))) &&
                     (((iVar9 = fn_006f44fc(local_e0,0x1ea), iVar9 == 0 || (iVar22 != 0x19)) ||
                      (iVar9 = fn_0068f87c(0x19,(int)(char)local_d8), iVar9 != 3)))))))) {
                  uVar4 = fn_006207d0((int)sVar5,param_3,local_118);
                  *(undefined1 *)(sVar5 + local_f0) = uVar4;
                }
              }
              iVar8 = iVar8 + 1;
            } while (iVar8 < 4);
            return;
          }
          uVar4 = fn_00691af0(param_1,0);
          local_118 = CONCAT31(((unsigned int)(local_118) >> 8) & 0xffffff,uVar4);
          uVar4 = fn_00691af0(param_1,1);
          local_118 = (local_118 & ~((unsigned int)0xffff << 0)) | ((unsigned int)(CONCAT11(uVar4,(undefined1)local_118)) & 0xffff);
          uVar4 = fn_00691af0(param_1,2);
          local_118 = (local_118 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(uVar4,(undefined2)local_118)) & 0xffffff);
          uVar4 = fn_00691af0(param_1,3);
          local_118 = CONCAT13(uVar4,(undefined3)local_118);
          uVar19 = fn_0063a5a4();
          *(undefined1 *)(param_6 + 1) = *(undefined1 *)((int)&local_118 + (uVar19 & 3));
        }
        bVar1 = fn_006207d0(1,param_3,param_4);
        goto LAB_00618e5c;
      }
      local_40[0] = 0x5040302;
      local_38 = param_2;
      local_34 = param_4;
      fn_00301a9c(&local_120,iVar9 + -0x4025,0xc2);
      cVar2 = fn_00691af0(param_1,2);
      cVar3 = fn_00691af0(param_1,3);
      iVar8 = (int)cVar3;
      sVar5 = fn_00691af0(param_1,0);
      iVar7 = fn_00691af0(param_1,1);
      sVar6 = fn_00176dc0(iVar9 + -0x4080);
      if (iVar7 == 0) {
code_r0x00618d84:
                    /* WARNING: Subroutine does not return */
        fn_00146590();
      }
      iVar20 = fn_00169f1c((int)sVar6 * (int)sVar5 + iVar7 + -1,iVar7);
      sVar5 = fn_00300f74(iVar20 * iVar7,iVar7);
      cVar3 = fn_00300f74(*(undefined4 *)(iVar9 + -0x4030),(int)sVar5);
      iVar7 = 0;
      local_44 = (int)cVar3;
      if (0 < cVar3) {
        do {
          iVar9 = 0;
          do {
            uVar4 = *(undefined1 *)((int)local_40 + iVar9);
            uVar14 = fn_0063a5a4();
            fn_00169f1c(uVar14,4);
            *(undefined1 *)((int)local_40 + iVar9) = *(undefined1 *)((int)local_40 + extraout_r1);
            iVar9 = iVar9 + 1;
            *(undefined1 *)((int)local_40 + extraout_r1) = uVar4;
          } while (iVar9 < 4);
          iVar20 = 0;
          iVar9 = 0;
          do {
            fn_00300f74(iVar9,4);
            uVar19 = (uint)*(byte *)((int)local_40 + extraout_r1_00);
            if ((3 < iVar9) ||
               (iVar22 = fn_00182924(uVar19), *(char *)((int)&local_120 + uVar19) < iVar22)) {
              *(char *)(param_6 + uVar19) = *(char *)(param_6 + uVar19) + cVar2;
              iVar22 = fn_006207d0(uVar19,local_38,local_34);
              if (iVar22 != 0) {
                *(char *)((int)&local_120 + uVar19) = *(char *)((int)&local_120 + uVar19) + cVar2;
                iVar20 = iVar20 + 1;
                *(undefined1 *)(param_6 + uVar19 + 0x61) = 1;
              }
            }
            bVar23 = SBORROW4(iVar20,iVar8);
            iVar22 = iVar20 - iVar8;
            if (iVar20 < iVar8) {
              bVar23 = SBORROW4(iVar9 + 1,8);
              iVar22 = iVar9 + -7;
              iVar9 = iVar9 + 1;
            }
          } while (iVar22 < 0 != bVar23);
          iVar7 = iVar7 + 1;
        } while (iVar7 < local_44);
        return;
      }
    }
  }
  return;
}


