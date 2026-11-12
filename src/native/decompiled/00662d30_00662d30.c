#include "00662d30_00662d30.h"



undefined4
fn_00662d30(undefined4 param_1,uint *param_2,int param_3,int param_4,code *param_5,code *param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  ushort uVar5;
  undefined4 *extraout_r1;
  undefined4 *extraout_r1_00;
  undefined4 *extraout_r1_01;
  undefined4 *extraout_r1_02;
  undefined4 *extraout_r1_03;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *extraout_r1_04;
  ushort uVar8;
  ushort uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_2b30 [5392];
  undefined4 local_1620;
  undefined4 uStack_161c;
  undefined1 *puStack_1618;
  undefined4 local_1614;
  undefined4 uStack_1610;
  undefined1 local_160c;
  undefined1 local_160b;
  undefined4 *local_1608;
  undefined4 *local_1604;
  undefined4 *local_1600;
  undefined4 local_15fc;
  undefined4 local_15f8;
  undefined4 local_15f4;
  undefined4 local_15f0;
  undefined4 local_15ec;
  undefined4 local_15e8;
  undefined4 local_15e4;
  undefined4 local_15e0;
  undefined4 local_15dc;
  undefined4 *local_15d8;
  undefined4 *local_15d4;
  undefined4 *local_15d0;
  undefined4 local_15c8;
  undefined4 uStack_15c4;
  uint *local_15b4;
  undefined4 local_15b0;
  undefined4 uStack_15ac;
  undefined1 *local_15a8;
  uint local_15a4;
  uint local_15a0;
  undefined4 *local_1598;
  undefined1 auStack_1590 [5464];
  undefined4 uStack_38;
  uint *local_34;
  int iStack_30;
  int local_2c;
  
  bVar16 = param_3 != 0;
  local_15fc = *(undefined4 *)**(undefined4 **)(DAT_008ccfb8 + 0x18);
  local_15b4 = param_2;
  uStack_38 = param_1;
  local_34 = param_2;
  iStack_30 = param_3;
  local_2c = param_4;
  local_15a4 = fn_006e9e24(local_15fc,bVar16);
  uVar12 = *local_15b4;
  uVar13 = local_15b4[1];
  uVar11 = uVar12;
  if (uVar12 != uVar13) {
    do {
      uVar11 = uVar11 + 0x1528;
    } while (uVar11 != uVar13);
    local_15b4[1] = local_15b4[1] + ((int)(uVar13 - uVar12) / 0x1528) * -0x1528;
  }
  fn_00797a98(local_15b4,local_15a4);
  local_1608 = (undefined4 *)0x0;
  local_1604 = (undefined4 *)0x0;
  local_1600 = (undefined4 *)0x0;
  local_15d8 = (undefined4 *)0x0;
  local_15d4 = (undefined4 *)0x0;
  local_15d0 = (undefined4 *)0x0;
  uVar11 = 0;
  if (local_15a4 != 0) {
    puVar6 = &local_1620;
    local_1598 = puVar6;
    do {
      iVar3 = fn_00662a34(auStack_2b30,puVar6);
      iVar3 = fn_00453ab4(iVar3 + 0x151c);
      *(undefined1 *)(iVar3 + 8) = 0;
      *(undefined1 *)(iVar3 + 9) = 0;
      *(undefined4 *)(iVar3 + -0xc) = 0x88d;
      *(undefined1 *)(iVar3 + -8) = 0xc;
      *(undefined1 *)(iVar3 + -7) = 0x1f;
      *(undefined1 *)(iVar3 + -5) = 0x17;
      *(undefined1 *)(iVar3 + -4) = 0x3b;
      *(undefined1 *)(iVar3 + -3) = 0x3b;
      *(undefined2 *)(iVar3 + -2) = 999;
      fn_00453ab4(&local_15c8);
      do {
        iVar3 = fn_005df19c(local_15fc,uVar11,&local_15c8,auStack_1590,0x1530,bVar16);
      } while (iVar3 == 5);
      if (iVar3 == 2) {
        uVar12 = 0;
        uVar5 = 0xc6;
        do {
          uVar13 = (int)uVar12 >> 2;
          if (uVar13 == 0) {
            uVar8 = (ushort)(byte)(&DAT_007c8a42)[uVar12 & 3];
          }
          else if (uVar12 - 4 < 4) {
            uVar8 = (ushort)(byte)(&UNK_007c8a3e)[uVar12 & 3];
          }
          else if (uVar13 == 2) {
            uVar8 = (ushort)(byte)(&UNK_007c8a46)[uVar12 & 3];
          }
          else {
            uVar8 = (ushort)(byte)(&UNK_007c8a4a)[uVar12 & 3];
          }
          uVar10 = uVar13;
          if (uVar13 == 0) {
            uVar10 = uVar12 & 3;
          }
          if (uVar13 == 0) {
            uVar9 = (ushort)(byte)(&DAT_007c8a42)[uVar10];
          }
          else if (uVar12 - 4 < 4) {
            uVar9 = (ushort)(byte)(&UNK_007c8a3e)[uVar12 & 3];
          }
          else if (uVar13 == 2) {
            uVar9 = (ushort)(byte)(&UNK_007c8a46)[uVar12 & 3];
          }
          else {
            uVar9 = (ushort)(byte)(&UNK_007c8a4a)[uVar12 & 3];
          }
          iVar3 = uVar12 * 2;
          uVar12 = uVar12 + 1;
          *(ushort *)(auStack_1590 + iVar3 + -0x68) = uVar9 ^ uVar5;
          uVar5 = uVar8 + uVar5 & 0xff;
        } while ((int)uVar12 < 0x10);
        fn_005273d8(auStack_2b30,auStack_1590,0x1530);
        local_15f8 = 0;
        local_15f4 = 0;
        local_15f0 = 0;
        local_15ec = 0;
        local_15e8 = 0;
        local_15e4 = 0;
        local_15e0 = 0;
        local_15dc = 0;
        if ((param_6 == (code *)0x0) || (iVar3 = (*param_6)(auStack_2b30), iVar3 != 0)) {
          if ((param_5 == (code *)0x0) || (iVar3 = (*param_5)(auStack_2b30), iVar3 != 0)) {
            local_1614 = local_15c8;
            uStack_1610 = uStack_15c4;
            local_160b = 1;
            fn_006cfc24(&local_15b0,local_15fc,uVar11,bVar16);
            local_1620 = local_15b0;
            uStack_161c = uStack_15ac;
            puStack_1618 = local_15a8;
            iVar3 = fn_004547d4(local_1598);
            if (iVar3 == 0) {
              fn_006cfd2c(&local_15b0,local_15fc,uVar11,bVar16);
              local_1620 = local_15b0;
              uStack_161c = uStack_15ac;
              puStack_1618 = local_15a8;
            }
            puVar14 = local_15b4;
            local_160c = 1;
            uVar12 = local_15b4[1];
            if (uVar12 == local_15b4[2]) {
              local_15a8 = auStack_2b30;
              uVar13 = (int)(uVar12 - *local_15b4) / 0x1528;
              if (uVar13 < (uint)((int)(local_15b4[2] - *local_15b4) / 0x1528)) {
                local_15b4[1] = uVar12 + 0x1528;
                if (uVar12 != 0) {
                  fn_0017821c(uVar12,uVar12 - 0x1528,0x1528);
                }
                uVar13 = uVar12 - 0x1528;
                if (uVar13 < uVar12) {
                  puVar14 = (uint *)0x1526;
                }
                uVar10 = uVar12;
                if (uVar12 < uVar13) {
                  iVar3 = uVar13 - uVar12;
                  iVar15 = 1;
                  if (1 < iVar3 / 0x1528 + 1) {
                    do {
                      uVar13 = uVar13 - 0x1528;
                      uVar10 = uVar10 - 0x1528;
                      fn_0017821c(uVar10,uVar13,0x1526);
                      iVar15 = iVar15 + 1;
                    } while (iVar15 < iVar3 / 0x1528 + 1);
                  }
                }
                else {
                  while (uVar12 != uVar13) {
                    uVar13 = uVar13 - 0x1528;
                    fn_0017821c(uVar10 - 0x1528,uVar13,puVar14);
                    uVar10 = uVar10 - 0x1528;
                  }
                }
                puVar7 = local_15a8;
                goto LAB_00663500;
              }
              local_15a0 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
              if (local_15a0 < uVar13 + 0x20) {
                local_15a0 = uVar13 + 0x20;
              }
              uVar4 = fn_00100fc6(local_15a0 * 0x1528,0);
              uVar10 = uVar4;
              for (uVar13 = *puVar14; uVar13 != uVar12; uVar13 = uVar13 + 0x1528) {
                if (uVar10 != 0) {
                  fn_0017821c(uVar10,uVar13,0x1528);
                }
                uVar10 = uVar10 + 0x1528;
              }
              iVar3 = uVar4 + ((int)(uVar12 - *puVar14) / 0x1528) * 0x1528;
              if (iVar3 != 0) {
                fn_0017821c(iVar3,local_15a8,0x1528);
              }
              uVar10 = puVar14[1];
              bVar17 = uVar12 != uVar10;
              uVar13 = uVar12;
              if (bVar17) {
                uVar13 = 0x1528;
              }
              iVar3 = uVar4 + ((int)(uVar12 - *puVar14) / 0x1528) * 0x1528;
              while (bVar17) {
                iVar3 = iVar3 + 0x1528;
                if (iVar3 != 0) {
                  fn_0017821c(iVar3,uVar12,uVar13);
                }
                uVar12 = uVar12 + 0x1528;
                bVar17 = uVar12 != uVar10;
              }
              uVar12 = *puVar14;
              iVar3 = puVar14[1] - uVar12;
              for (; uVar12 != puVar14[1]; uVar12 = uVar12 + 0x1528) {
              }
              fn_001008c4(*puVar14,(int)(puVar14[2] - *puVar14) / 0x1528,0);
              *puVar14 = uVar4;
              puVar6 = (undefined4 *)(uVar4 + local_15a0 * 0x1528);
              puVar14[1] = uVar4 + (iVar3 / 0x1528) * 0x1528 + 0x1528;
              puVar14[2] = (uint)puVar6;
            }
            else {
              puVar6 = (undefined4 *)(uVar12 + 0x1528);
              local_15b4[1] = (uint)puVar6;
              if (uVar12 != 0) {
                puVar7 = auStack_2b30;
LAB_00663500:
                fn_0017821c(uVar12,puVar7);
                puVar6 = extraout_r1_04;
              }
            }
          }
          else {
            if (local_1604 != local_1600) {
              puVar6 = local_1604 + 2;
              puVar2 = puVar6;
              puVar1 = local_1604;
              goto joined_r0x00663354;
            }
            fn_00791f18(&local_1608,local_1604,&local_15c8);
            puVar6 = extraout_r1_03;
          }
        }
        else if (local_15d4 == local_15d0) {
          fn_00791f18(&local_15d8,local_15d4,&local_15c8);
          puVar6 = extraout_r1_02;
        }
        else {
          puVar6 = local_15d4 + 2;
          puVar2 = local_1604;
          puVar1 = local_15d4;
          local_15d4 = puVar6;
joined_r0x00663354:
          local_1604 = puVar2;
          if (puVar1 != (undefined4 *)0x0) {
            fn_00166824(puVar1,&local_15c8);
            puVar6 = extraout_r1_01;
          }
        }
      }
      else if (local_1604 == local_1600) {
        fn_00791f18(&local_1608,local_1604,&local_15c8);
        puVar6 = extraout_r1_00;
      }
      else {
        puVar6 = local_1604 + 2;
        bVar17 = local_1604 != (undefined4 *)0x0;
        local_1604 = puVar6;
        if (bVar17) {
          fn_00166824();
          puVar6 = extraout_r1;
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 < local_15a4);
  }
  uVar11 = 0;
  if ((int)local_1604 - (int)local_1608 >> 3 != 0) {
    do {
      fn_005df474(local_15fc,bVar16,local_1608 + uVar11 * 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)((int)local_1604 - (int)local_1608 >> 3));
  }
  uVar11 = 0;
  if ((int)local_15d4 - (int)local_15d8 >> 3 != 0) {
    do {
      fn_005df474(local_15fc,bVar16,local_15d8 + uVar11 * 2);
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)((int)local_15d4 - (int)local_15d8 >> 3));
  }
  if (local_2c != 0) {
    fn_006640c0(local_34);
  }
  uVar11 = 0;
  iVar15 = (int)(local_15b4[1] - *local_15b4) >> 0x1f;
  iVar3 = (int)(local_15b4[1] - *local_15b4) / 0x1528 + iVar15;
  if (iVar3 != iVar15) {
    do {
      uVar11 = uVar11 + 1;
    } while (uVar11 < (uint)(iVar3 - iVar15));
  }
  puVar6 = local_15d8;
  if (local_15d4 < local_15d8) {
    do {
      puVar6 = puVar6 + 2;
    } while (puVar6 != local_15d4);
  }
  fn_001008c4(local_15d8,(int)local_15d0 - (int)local_15d8 >> 3,0);
  puVar6 = local_1608;
  if (local_1604 < local_1608) {
    do {
      puVar6 = puVar6 + 2;
    } while (puVar6 != local_1604);
  }
  fn_001008c4(local_1608,(int)local_1600 - (int)local_1608 >> 3,0);
  return 2;
}


