#include "0033db6c_0034516c.h"



undefined4 fn_0034516c(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = 0;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar1 = fn_006b2a40(uVar5);
  if (0 < iVar1) {
    do {
      uVar2 = fn_006b2948(uVar5,iVar4);
      iVar1 = fn_006b2a74(uVar5,uVar2);
      if (*(char *)(iVar1 + 4) == '\x03') {
        iVar3 = 0;
        do {
          if (*(byte *)(iVar1 + iVar3 + 8) == param_1) {
            uVar5 = fn_0022fc1c(iVar1 + 8);
            return uVar5;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 3);
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006b2a40(uVar5);
    } while (iVar4 < iVar1);
  }
  return 0;
}



void fn_0033db6c(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  undefined4 *in_s0;
  undefined1 auStack_29c [512];
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  uint local_80;
  uint local_7c [2];
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68 [2];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *puStack_48;
  undefined4 local_38;
  int local_2c;
  int local_28;
  
  local_2c = param_1;
  local_28 = param_2;
  fn_00128f40(auStack_60);
  uVar1 = fn_0012a26c(*(undefined4 *)(local_2c + 8));
  uVar2 = fn_00145ac0(*(undefined4 *)(local_2c + 8));
  iVar3 = fn_00128ee0(auStack_60,uVar2,uVar1);
  if (iVar3 != 0) {
    iVar3 = fn_005f6e60(auStack_60,&DAT_007bfab8);
    if (iVar3 != 0) {
      fn_005f44cc(auStack_58);
      uVar1 = fn_00145ac0(*(undefined4 *)(local_2c + 4));
      fn_005f4484(auStack_58,uVar1);
      local_74 = fn_00128e54(auStack_60,&DAT_007bfab8);
      iVar3 = 0;
      if (0 < (int)local_74) {
        do {
          uVar1 = fn_00128eac(auStack_60,&DAT_007bfab8,iVar3);
          uVar4 = fn_002febd8();
          puVar6 = (undefined4 *)&DAT_008f9d04;
          if (uVar4 != 0) {
            puVar9 = &local_80;
            local_80 = 0x20;
            local_7c[0] = uVar4;
            if (0x20 < uVar4) {
              puVar9 = local_7c;
            }
            uVar15 = *puVar9;
            if (0xfffffff1 < uVar15) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar15,0xfffffff1);
            }
            if (uVar15 < uVar4) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar4,uVar15);
            }
            if (uVar15 == 0) {
              puVar6 = &DAT_008f9cf8;
            }
            else {
              puVar6 = (undefined4 *)fn_00100fc6(uVar15 + 0xe,0);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
              }
              puVar6[2] = uVar4;
              puVar5 = (undefined1 *)((int)puVar6 + uVar4 + 0xc);
              puVar6[1] = uVar15;
              *puVar6 = 0;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
              }
            }
            puVar6 = puVar6 + 3;
          }
          fn_00301a9c(puVar6,uVar1,uVar4);
          uVar14 = puVar6[-1];
          uVar4 = fn_002febd8(&DAT_0033e040);
          local_4c = (undefined4 *)&DAT_0033e040;
          uVar15 = puVar6[-1];
          if (uVar15 < uVar14) {
            if (uVar4 < uVar15) {
              uVar12 = uVar15;
            }
            else {
              uVar12 = uVar4;
            }
            uVar13 = 0;
            if (uVar15 < uVar14) {
              uVar13 = uVar14;
            }
            fn_002ff628(9,&DAT_008c7614,&DAT_008c7614,uVar13,uVar12);
          }
          if (-uVar4 - 0xf < (uint)puVar6[-1]) {
            fn_002ff628(8,&DAT_008c7614,&DAT_008c7614,puVar6[-1],-uVar4 - 0xf);
          }
          puVar7 = (undefined4 *)puVar6[-1];
          uVar15 = (int)puVar7 + uVar4;
          if (uVar15 == 0) {
            if (puVar6 != (undefined4 *)&DAT_008f9d04) {
              iVar10 = puVar6[-3];
              if ((iVar10 == -1) ||
                 ((puVar6 + -3 != &DAT_008f9cf8 && (puVar6[-3] = iVar10 + -1, iVar10 == 0)))) {
                fn_001008c4(puVar6 + -3,puVar6[-2] + 0xe,0);
              }
            }
            puVar6 = (undefined4 *)&DAT_008f9d04;
          }
          else {
            local_80 = (int)puVar7 - uVar14;
            uVar12 = puVar6[-3] + 1;
            bVar17 = puVar6[-3] != -1;
            bVar16 = uVar12 == 1;
            if (uVar12 < 2) {
              bVar17 = (uint)puVar6[-2] <= uVar15;
              bVar16 = uVar15 == puVar6[-2];
            }
            if (!bVar17 || bVar16) {
              puVar8 = puVar6;
              if (local_4c >= puVar6) {
                puVar8 = (undefined4 *)((int)puVar7 + (int)puVar6);
                puVar7 = puVar8;
              }
              if ((local_4c < puVar6 || puVar7 < local_4c) || local_4c == puVar8) {
                if (local_80 != 0) {
                  fn_00301b24((int)puVar6 + uVar14 + uVar4,(int)puVar6 + uVar14,local_80);
                }
                if (uVar4 != 0) {
                  fn_00301b24((int)puVar6 + uVar14,local_4c,uVar4);
                }
                puVar6[-1] = uVar15;
                *(undefined1 *)((int)puVar6 + uVar15) = 0;
                goto LAB_0033dfb8;
              }
            }
            uVar12 = puVar6[-1];
            local_70 = uVar15;
            local_6c = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
            if (local_6c < uVar12 + 0x80) {
              local_6c = uVar12 + 0x80;
            }
            puVar9 = &local_6c;
            if (local_6c < uVar15) {
              puVar9 = &local_70;
            }
            uVar12 = *puVar9;
            if (0xfffffff1 < uVar12) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar12,0xfffffff1);
            }
            if (uVar12 < uVar15) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar15,uVar12);
            }
            if (uVar12 == 0) {
              puVar7 = &DAT_008f9cf8;
            }
            else {
              puVar7 = (undefined4 *)fn_00100fc6(uVar12 + 0xe,0);
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = 0;
                puVar7[1] = 0;
                puVar7[2] = 0;
              }
              puVar5 = (undefined1 *)((int)puVar7 + uVar15 + 0xc);
              *puVar7 = 0;
              puVar7[1] = uVar12;
              puVar7[2] = uVar15;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
              }
            }
            if (uVar14 != 0) {
              fn_00301a9c(puVar7 + 3,puVar6,uVar14);
            }
            if (uVar4 != 0) {
              fn_00301a9c((int)puVar7 + uVar14 + 0xc,local_4c,uVar4);
            }
            if (local_80 != 0) {
              fn_00301a9c((int)puVar7 + uVar4 + uVar14 + 0xc,(int)puVar6 + uVar14,local_80);
            }
            if (puVar6 != (undefined4 *)&DAT_008f9d04) {
              iVar10 = puVar6[-3];
              if ((iVar10 == -1) ||
                 ((puVar6 + -3 != &DAT_008f9cf8 && (puVar6[-3] = iVar10 + -1, iVar10 == 0)))) {
                fn_001008c4(puVar6 + -3,puVar6[-2] + 0xe,0);
              }
            }
            puVar6 = puVar7 + 3;
          }
LAB_0033dfb8:
          fn_00211ce4(puVar6,auStack_29c,*(undefined4 *)(local_2c + 0x14));
          uVar4 = 0;
          iVar10 = fn_006ec94c(auStack_58);
          if (0 < iVar10) {
            do {
              fn_006ec970(auStack_58,uVar4 & 0xffff,&local_50);
              iVar10 = fn_00147e6c(uVar1,local_38,6);
              if (iVar10 == 0) {
                if (-1 < (int)uVar4) {
                  fn_006ec970(auStack_58,uVar4 & 0xffff,&local_50);
                  local_9c = local_50;
                  local_98 = local_4c;
                  local_94 = puStack_48;
                  iVar10 = *(int *)(local_28 + 4);
                  if (iVar10 == *(int *)(local_28 + 8)) {
                    fn_0078dfac(local_28,iVar10,auStack_29c);
                  }
                  else {
                    *(int *)(local_28 + 4) = iVar10 + 0x20c;
                    if (iVar10 != 0) {
                      fn_0017821c(iVar10,auStack_29c,0x20c);
                    }
                  }
                }
                break;
              }
              uVar4 = uVar4 + 1;
              iVar10 = fn_006ec94c(auStack_58);
            } while ((int)uVar4 < iVar10);
          }
          if (puVar6 != (undefined4 *)&DAT_008f9d04) {
            iVar10 = puVar6[-3];
            if ((iVar10 == -1) ||
               ((puVar6 + -3 != &DAT_008f9cf8 && (puVar6[-3] = iVar10 + -1, iVar10 == 0)))) {
              fn_001008c4(puVar6 + -3,puVar6[-2] + 0xe,0);
            }
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)local_74);
      }
      fn_005f44bc(auStack_58);
      fn_005f4564(auStack_58);
    }
    iVar3 = fn_005f6e60(auStack_60,(char *)&DAT_007bfac4);
    if (iVar3 != 0) {
      iVar3 = fn_00128e54(auStack_60,(char *)&DAT_007bfac4);
      iVar10 = 0;
      iVar3 = (int)(iVar3 + ((uint)(iVar3 >> 0x1f) >> 0x1e)) >> 2;
      if (0 < iVar3) {
        do {
          iVar11 = iVar10 * 4;
          local_7c[0] = fn_00128eac(auStack_60,(char *)&DAT_007bfac4,iVar11);
          uVar4 = fn_002febd8();
          puVar6 = (undefined4 *)&DAT_008f9d04;
          if (uVar4 != 0) {
            puVar9 = &local_74;
            if (0x20 < uVar4) {
              puVar9 = local_68;
            }
            local_68[0] = uVar4;
            local_74 = 0x20;
            uVar15 = *puVar9;
            if (0xfffffff1 < uVar15) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar15,0xfffffff1);
            }
            if (uVar15 < uVar4) {
              fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar4,uVar15);
            }
            if (uVar15 == 0) {
              puVar6 = &DAT_008f9cf8;
            }
            else {
              puVar6 = (undefined4 *)fn_00100fc6(uVar15 + 0xe,0);
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = 0;
                puVar6[1] = 0;
                puVar6[2] = 0;
              }
              puVar5 = (undefined1 *)((int)puVar6 + uVar4 + 0xc);
              *puVar6 = 0;
              puVar6[1] = uVar15;
              puVar6[2] = uVar4;
              if (puVar5 != (undefined1 *)0x0) {
                *puVar5 = 0;
              }
            }
            puVar6 = puVar6 + 3;
          }
          fn_00301a9c(puVar6,local_7c[0],uVar4);
          fn_00101a50(auStack_29c,0x100,L"rom:/data/Field/Obj/%s.bch",puVar6);
          fn_005f6dac(auStack_60,(char *)&DAT_007bfac4,iVar11 + 1);
          puVar7 = in_s0;
          fn_005f6dac(auStack_60,(char *)&DAT_007bfac4,iVar11 + 2);
          puVar8 = in_s0;
          fn_005f6dac(auStack_60,(char *)&DAT_007bfac4,iVar11 + 3);
          iVar11 = *(int *)(local_28 + 4);
          local_9c = puVar7;
          local_98 = puVar8;
          local_94 = in_s0;
          if (iVar11 == *(int *)(local_28 + 8)) {
            fn_0078dfac(local_28,iVar11,auStack_29c);
          }
          else {
            *(int *)(local_28 + 4) = iVar11 + 0x20c;
            if (iVar11 != 0) {
              fn_0017821c(iVar11,auStack_29c,0x20c);
            }
          }
          if (puVar6 != (undefined4 *)&DAT_008f9d04) {
            iVar11 = puVar6[-3];
            if ((iVar11 == -1) ||
               ((puVar6 + -3 != &DAT_008f9cf8 && (puVar6[-3] = iVar11 + -1, iVar11 == 0)))) {
              fn_001008c4(puVar6 + -3,puVar6[-2] + 0xe,0);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < iVar3);
      }
    }
  }
  fn_00128fc4(auStack_60);
  return;
}


