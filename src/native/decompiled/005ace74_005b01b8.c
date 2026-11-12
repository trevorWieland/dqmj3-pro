#include "005ace74_005b01b8.h"



undefined4 fn_005b01b8(int *param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint local_40 [2];
  undefined1 auStack_38 [36];
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))
            (param_1,L"rom:/data/Layout/menu/library/lib_monster.arc",(char *)&DAT_00862250,
             &DAT_00860454);
  fn_005ca6ac(param_1);
  iVar3 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  uVar6 = *(undefined4 *)(iVar3 + 0x10);
  iVar3 = fn_0068897c(uVar6,(char *)&DAT_005b04f8);
  param_1[0x2c] = iVar3;
  iVar3 = fn_0068897c(uVar6,(char *)&DAT_005b0508);
  param_1[0x2d] = iVar3;
  iVar3 = fn_0068897c(uVar6,(char *)&DAT_005b0518);
  param_1[0x2e] = iVar3;
  iVar3 = fn_0068897c(uVar6,(char *)&DAT_005b0528);
  param_1[0x2f] = iVar3;
  iVar3 = fn_0068897c(uVar6,(char *)&DAT_005b0534);
  param_1[0x30] = iVar3;
  uVar5 = 0;
  if (param_1[0x32] - param_1[0x31] >> 2 != 0) {
    do {
      local_40[0] = uVar5;
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005b0544);
      uVar1 = param_1[0x32] - param_1[0x31] >> 2;
      if (uVar1 <= uVar5) {
        local_40[0] = uVar1;
        fn_002ff628(9,&DAT_008c7667,&DAT_008c7667,uVar5);
      }
      iVar3 = param_1[0x31];
      uVar4 = fn_0068897c(uVar6,auStack_38);
      *(undefined4 *)(iVar3 + uVar5 * 4) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_1[0x32] - param_1[0x31] >> 2));
  }
  uVar5 = 0;
  if (param_1[0x35] - param_1[0x34] >> 2 != 0) {
    do {
      local_40[0] = uVar5;
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005b055c);
      uVar1 = param_1[0x35] - param_1[0x34] >> 2;
      if (uVar1 <= uVar5) {
        local_40[0] = uVar1;
        fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar5);
      }
      iVar3 = param_1[0x34];
      uVar4 = fn_00688920(uVar6,auStack_38);
      *(undefined4 *)(iVar3 + uVar5 * 4) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_1[0x35] - param_1[0x34] >> 2));
  }
  uVar5 = 0;
  if (param_1[0x38] - param_1[0x37] >> 2 != 0) {
    do {
      local_40[0] = uVar5 + 4;
      fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005b055c);
      uVar1 = param_1[0x38] - param_1[0x37] >> 2;
      if (uVar1 <= uVar5) {
        local_40[0] = uVar1;
        fn_002ff628(9,&DAT_008c7666,&DAT_008c7666,uVar5);
      }
      iVar3 = param_1[0x37];
      uVar4 = fn_00688920(uVar6,auStack_38);
      *(undefined4 *)(iVar3 + uVar5 * 4) = uVar4;
      uVar5 = uVar5 + 1;
    } while (uVar5 < (uint)(param_1[0x38] - param_1[0x37] >> 2));
  }
  sVar2 = *(short *)(param_1[0x26] + 0x1c);
  iVar3 = fn_0028bbc0((int)sVar2);
  if (iVar3 == 0) {
    fn_005ca88c(param_1,param_1[0x2c],8);
  }
  else {
    local_40[0] = (int)sVar2;
    fn_0017d96c(auStack_38,0x20,0x1f,(char *)&DAT_005b1524);
    uVar6 = fn_0016ba34(DAT_00897800,DAT_00898784,auStack_38,0);
    fn_00190d50(param_1[0x2c],uVar6);
  }
  sVar2 = *(short *)(param_1[0x26] + 0x1c);
  iVar3 = fn_0028bbc0((int)sVar2);
  if (iVar3 == 0) {
    fn_005ca88c(param_1,param_1[0x2d],8);
  }
  else {
    uVar6 = fn_006613d0((int)sVar2);
    fn_002317d8(local_40,uVar6,0);
    fn_00190d50(param_1[0x2d],local_40[0]);
    fn_001588d4(local_40);
  }
  sVar2 = *(short *)(param_1[0x26] + 0x1c);
  iVar3 = fn_0028bbc0((int)sVar2);
  if (iVar3 == 0) {
    fn_005ca88c(param_1,param_1[0x2e],8);
  }
  else {
    uVar6 = fn_006614fc((int)sVar2);
    fn_002317d8(local_40,uVar6,0);
    fn_00190d50(param_1[0x2e],local_40[0]);
    fn_001588d4(local_40);
  }
  sVar2 = *(short *)(param_1[0x26] + 0x1c);
  uVar6 = fn_006616a8((int)sVar2);
  iVar3 = fn_0028bbc0((int)sVar2);
  if ((iVar3 == 0) || (iVar3 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),uVar6), iVar3 == 0)
     ) {
    fn_005ca88c(param_1,param_1[0x2f],8);
  }
  else {
    fn_0023097c(local_40,uVar6,0);
    fn_00190d50(param_1[0x2f],local_40[0]);
    fn_001588d4(local_40);
  }
  sVar2 = *(short *)(param_1[0x26] + 0x1c);
  uVar6 = fn_0066161c((int)sVar2);
  iVar3 = fn_0028bbc0((int)sVar2);
  if ((iVar3 == 0) || (iVar3 = fn_006b7d34(*(undefined4 *)(DAT_00897804 + 0x24),uVar6), iVar3 == 0)
     ) {
    fn_005ca88c(param_1,param_1[0x30],8);
  }
  else {
    fn_0023097c(local_40,uVar6,0);
    fn_00190d50(param_1[0x30],local_40[0]);
    fn_001588d4(local_40);
  }
  fn_005afd78(param_1);
  fn_005ca68c(param_1);
  return 1;
}



void fn_005ace74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  short *psVar7;
  short *psVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  int iVar13;
  short *psVar14;
  undefined4 *puVar15;
  bool bVar16;
  undefined4 *local_5c;
  uint local_58 [2];
  uint local_50 [2];
  uint local_48;
  uint local_44;
  int local_40;
  undefined1 auStack_3c [8];
  uint local_34;
  uint uStack_30;
  int local_2c;
  int local_18;
  
  local_18 = param_4;
  fn_003d4398();
  puVar15 = (undefined4 *)0x0;
  switch(*(undefined1 *)(param_1 + 0xbc)) {
  case 1:
    if (*(char *)(*(int *)(param_1 + 0xa4) + 8) != '\0') {
      fn_00689efc(param_1,0x2d,0);
      iVar5 = fn_005aba44(param_1);
      if (iVar5 != 0) {
        uVar6 = fn_001c80ac(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68),
                             (char *)&DAT_005ac2c4,local_18);
        puVar15 = (undefined4 *)fn_001f74ec(param_1,0xdb);
        if (puVar15 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar15)(puVar15);
          do {
            if (puVar2 == &DAT_00890b14) goto LAB_005ac008;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        puVar15 = (undefined4 *)0x0;
LAB_005ac008:
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        fn_0060183c(puVar15,&local_48);
        uVar4 = fn_00100b58(uVar6);
        puVar15 = &DAT_008f9ce8;
        local_5c = &DAT_008f9cf4;
        if (uVar4 != 0) {
          puVar10 = local_50;
          if (0x20 < uVar4) {
            puVar10 = local_58;
          }
          local_58[0] = uVar4;
          local_50[0] = 0x20;
          uVar12 = *puVar10;
          if (0xfffffff1 < uVar12) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar12,0xfffffff1);
          }
          if (uVar12 < uVar4) {
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4,uVar12);
          }
          if (uVar12 != 0) {
            puVar15 = (undefined4 *)fn_00100fc6((uVar12 + 8) * 2,0);
            if (puVar15 != (undefined4 *)0x0) {
              *puVar15 = 0;
              puVar15[1] = 0;
              puVar15[2] = 0;
            }
            puVar11 = (undefined2 *)((int)puVar15 + uVar4 * 2 + 0xc);
            *puVar15 = 0;
            puVar15[1] = uVar12;
            puVar15[2] = uVar4;
            if (puVar11 != (undefined2 *)0x0) {
              *puVar11 = 0;
            }
          }
          local_5c = puVar15 + 3;
        }
        fn_00301a9c(local_5c,uVar6,uVar4 << 1);
        fn_005ac948(param_1 + 0x1bc,&local_5c);
        if (local_5c != &DAT_008f9cf4) {
          piVar1 = local_5c + -3;
          iVar5 = *piVar1;
          if ((iVar5 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar5 + -1, iVar5 == 0)))) {
            fn_001008c4(local_5c + -3,local_5c[-2] + 8,0);
          }
        }
        uVar4 = local_48;
        if (local_44 != local_48) {
          do {
            if (*(short *)(uVar4 + 4) != 0) {
              iVar13 = 1;
              iVar5 = fn_001746f4();
              if (1 < iVar5) {
LAB_005ac188:
                iVar5 = fn_00163940(iVar13);
                if (((iVar5 == 0) || (iVar5 = fn_00660e64(iVar13), iVar5 == 0)) ||
                   (iVar5 = fn_00660d60(iVar13), iVar5 != *(short *)(uVar4 + 4)))
                goto LAB_005ac2f0;
                fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar13,1);
                if (*(int *)(param_1 + 0x1c4) == *(int *)(param_1 + 0x1c8)) {
                  uVar6 = fn_005ac76c(auStack_3c,param_1 + 0x1bc,*(undefined4 *)(param_1 + 0x1c0));
                  fn_007950c0(param_1 + 0x1c4,uVar6);
                  uVar12 = local_34;
                  if (uStack_30 < local_34) {
                    do {
                      uVar12 = uVar12 + 2;
                    } while (uVar12 != uStack_30);
                  }
                  fn_001008c4(local_34,(int)(local_2c - local_34) >> 1,0);
                }
                iVar5 = fn_005ac58c(*(int *)(param_1 + 0x1c8) + -0x14,iVar13);
                if (iVar5 == 0) {
                  uVar6 = fn_005ac76c(auStack_3c,param_1 + 0x1bc,*(undefined4 *)(param_1 + 0x1c0));
                  fn_007950c0(param_1 + 0x1c4,uVar6);
                  uVar12 = local_34;
                  if (uStack_30 < local_34) {
                    do {
                      uVar12 = uVar12 + 2;
                    } while (uVar12 != uStack_30);
                  }
                  fn_001008c4(local_34,(int)(local_2c - local_34) >> 1,0);
                  fn_005ac58c(*(int *)(param_1 + 0x1c8) + -0x14,iVar13);
                }
              }
            }
LAB_005ac308:
            uVar4 = uVar4 + 8;
          } while (local_44 != uVar4);
        }
        fn_005aca1c(param_1 + 0x1bc,*(undefined4 *)(param_1 + 0x5c));
        fn_00689bd0(param_1,0x48,0);
        fn_003d3c74(param_1,0);
        *(undefined1 *)(param_1 + 0xbc) = 2;
        uVar4 = local_48;
        if (local_44 < local_48) {
          do {
            uVar4 = uVar4 + 8;
          } while (uVar4 != local_44);
        }
        fn_001008c4(local_48,(int)(local_40 - local_48) >> 3,0);
        return;
      }
LAB_005acf54:
      uVar6 = *(undefined4 *)(param_1 + 0xc0);
      puVar15 = (undefined4 *)fn_001f7510(param_1,0x4c);
      if (puVar15 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar15)(puVar15);
        do {
          if (puVar2 == &DAT_008946d4) goto LAB_005ad10c;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar15 = (undefined4 *)0x0;
LAB_005ad10c:
      *(undefined1 *)(puVar15 + 2) = 3;
      *(undefined1 *)(puVar15 + 7) = 0;
      *(undefined1 *)(puVar15 + 9) = 1;
      iVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
      fn_00231700(local_58,0x20,(int)*(short *)(iVar5 + 0x1c),0);
      uVar6 = fn_0022f750((char *)&DAT_005ad228);
      uVar9 = fn_00100b58();
      fn_00231d04(local_58,0x20,uVar6,uVar9);
      fn_003212cc(puVar15,local_58);
      uVar6 = fn_0015b064((int)*(short *)(iVar5 + 0x1c));
      fn_003212bc(puVar15,uVar6);
      puVar15[0x11] = *(undefined4 *)(param_1 + 0xa0);
      fn_00689bd0(param_1,0x4c,0);
      puVar15 = (undefined4 *)fn_001f74ec(param_1,0xdc);
      if (puVar15 != (undefined4 *)0x0) {
        puVar2 = (undefined4 *)(**(code **)*puVar15)(puVar15);
        do {
          if (puVar2 == &DAT_00890c80) goto LAB_005ad1fc;
          puVar2 = (undefined4 *)*puVar2;
        } while (puVar2 != (undefined4 *)0x0);
      }
      puVar15 = (undefined4 *)0x0;
LAB_005ad1fc:
      fn_005c8048(puVar15);
      fn_003d3c74(param_1,0);
      *(undefined1 *)(param_1 + 0xbc) = 3;
      return;
    }
    break;
  case 2:
    if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) != '\0') {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      if (*(uint *)(param_1 + 0x1d0) <
          (uint)((*(int *)(param_1 + 0x1c8) - *(int *)(param_1 + 0x1c4)) / 0x14)) {
        fn_005aca1c(param_1 + 0x1bc,*(undefined4 *)(param_1 + 0x5c));
        fn_00689bd0(param_1,0x48,0);
        return;
      }
      goto LAB_005acf54;
    }
    break;
  case 3:
    puVar2 = (undefined4 *)fn_001f7510(param_1,0x4c);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008946d4) goto LAB_005acfa4;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005acfa4:
    uVar4 = fn_001f7424(param_1,0x4c);
    bVar16 = uVar4 == 0;
    if (bVar16) {
      uVar4 = (uint)*(byte *)(puVar2 + 7);
    }
    if (bVar16 && uVar4 == 1) {
      psVar14 = (short *)puVar2[5];
      iVar5 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0xc0));
      uVar6 = fn_0024e350();
      uVar4 = 0;
      psVar7 = (short *)(iVar5 + 4);
      do {
        uVar4 = uVar4 + 1;
        psVar8 = psVar7 + 1;
        *psVar7 = *psVar14;
        bVar16 = psVar14[1] == 0;
        psVar7 = psVar8;
        psVar14 = psVar14 + 1;
      } while ((bVar16 || uVar4 < 0xb) && (!bVar16 && uVar4 != 10));
      *psVar8 = 0;
      fn_0024f108(iVar5,uVar6);
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0x50);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00890b2c) {
            puVar15 = puVar2;
            break;
          }
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      local_18 = (int)*(char *)(param_1 + 0x1b8);
      fn_00604994(puVar15,*(undefined4 *)(param_1 + 0xc0),(int)*(char *)(param_1 + 0xc4),
                   param_1 + 200);
      fn_006899f4(param_1,0x50,0,1);
      fn_003d3c74(param_1,0);
      *(undefined1 *)(param_1 + 0xbc) = 4;
    }
  }
  return;
LAB_005ac2f0:
  iVar13 = (int)(short)((short)iVar13 + 1);
  iVar5 = fn_001746f4();
  if (iVar5 <= iVar13) goto LAB_005ac308;
  goto LAB_005ac188;
}


