#include "00564940_0056582c.h"



void fn_0056582c(int param_1,int param_2)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  undefined4 *local_ac;
  undefined1 auStack_a8 [132];
  
  if (*(int *)(param_2 + 0xc) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar3 = fn_002e3e9c(*(undefined4 *)(param_1 + 0xb4),*(undefined4 *)(param_2 + 4),
                       *(undefined4 *)(param_2 + 8));
  piVar4 = *(int **)(param_1 + 0x10c);
  bVar2 = false;
  while (*(int **)(param_1 + 0x110) != piVar4) {
    iVar7 = *piVar4;
    piVar4 = piVar4 + 1;
    if (iVar7 == iVar3) {
      bVar2 = true;
    }
  }
  iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_002317d8(&local_ac,(int)*(short *)(iVar3 + 0x1c),0);
  sVar1 = *(short *)(iVar3 + 0x1c);
  iVar7 = fn_00154ac8(0x30);
  if (iVar7 == 0) {
    bVar8 = sVar1 == 0x1c5 || sVar1 == 0x1c6;
    if (sVar1 != 0x1c5 && sVar1 != 0x1c6) {
      bVar8 = sVar1 == 0x1c7;
    }
    if (!bVar8) goto LAB_005658d0;
    uVar5 = fn_0022f584(DAT_00898a78,0);
    fn_0068974c(param_1,uVar5,0,1);
    iVar3 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined1 *)(iVar3 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(param_1 + 0x119) = 3;
    fn_0068ab44(param_1,0x100094d);
    if (local_ac == &DAT_008f9cf4) {
      return;
    }
    piVar4 = local_ac + -3;
    iVar3 = *piVar4;
    if (iVar3 == -1) goto LAB_005659f8;
    if (piVar4 == &DAT_008f9ce8) {
      return;
    }
    *piVar4 = iVar3 + -1;
  }
  else {
LAB_005658d0:
    uVar5 = fn_0022f584(DAT_00898a60,0);
    fn_00301f50(auStack_a8,0x80);
    *(int *)(param_1 + 0x128) = iVar3 + 4;
    *(undefined1 *)(param_1 + 0x118) = 1;
    iVar3 = fn_005828a4(param_1);
    *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(param_2 + 8);
    *(undefined4 *)(iVar3 + 0x10) = *(undefined4 *)(param_2 + 4);
    uVar6 = (**(code **)(**(int **)(param_1 + 0xe0) + 0x5c))();
    *(undefined4 *)(iVar3 + 0x14) = uVar6;
    *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(param_1 + 0xfc);
    if (bVar2) {
      *(undefined1 *)(param_1 + 0x119) = 4;
      uVar6 = fn_0022f584(DAT_00898a64,0);
    }
    else {
      *(undefined1 *)(param_1 + 0x119) = 5;
      uVar6 = fn_0022f584(DAT_00898a68,0);
      *(undefined4 *)(param_1 + 0x1c0) = 0x1000955;
    }
    fn_00101a50(auStack_a8,0x80,L"%ls%ls\n%ls%ls",local_ac,uVar5,*(undefined4 *)(param_1 + 0x128),
                 uVar6);
    fn_0068974c(param_1,auStack_a8,1,1);
    iVar3 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar3 + 0x38) = 0;
    *(undefined1 *)(iVar3 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    fn_0068ab44(param_1,0x100094b);
    if (local_ac == &DAT_008f9cf4) {
      return;
    }
    piVar4 = local_ac + -3;
    iVar3 = *piVar4;
    if (iVar3 == -1) goto LAB_005659f8;
    if (piVar4 == &DAT_008f9ce8) {
      return;
    }
    *piVar4 = iVar3 + -1;
  }
  if (iVar3 != 0) {
    return;
  }
LAB_005659f8:
  fn_001008c4(local_ac + -3,local_ac[-2] + 8,0);
  return;
}



undefined4 fn_00564940(int *param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  int iVar15;
  undefined2 *puVar16;
  uint uVar17;
  undefined2 *local_12c;
  undefined2 *local_128;
  undefined2 *local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  char local_f2;
  undefined4 local_ec;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined2 local_ac;
  undefined2 local_aa;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined2 local_a6;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined2 local_a0;
  undefined2 local_9e;
  int local_30;
  int local_2c;
  
  uVar10 = param_1[0x43];
  uVar17 = param_1[0x44];
  if (uVar10 != uVar17) {
    uVar2 = uVar10;
    if (uVar17 <= uVar10) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != uVar17);
    }
    param_1[0x44] = uVar17 - (uVar17 - uVar10 & 0xfffffffc);
  }
  fn_00301f50(param_1 + 0x4b,0x94);
  uVar12 = *(undefined4 *)(*(int *)(param_1[1] + 8) + 0x78);
  uVar14 = *(undefined4 *)(*(int *)(param_1[1] + 8) + 0x7c);
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,uVar12,uVar14);
  local_30 = fn_005828a4(param_1);
  *(undefined4 *)(local_30 + 0xc) = 0;
  *(undefined4 *)(local_30 + 0x10) = 0;
  *(undefined4 *)(local_30 + 0x14) = 0;
  *(undefined4 *)(local_30 + 0x18) = 0;
  iVar4 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  param_1[0x48] = iVar4;
  iVar4 = fn_00145b00(0x1db7c,&DAT_00812c8c);
  param_1[0x47] = iVar4;
  fn_0017821c(param_1[0x47],*(undefined4 *)(*(int *)(DAT_00897804 + 0xc) + 4),0x1db7c);
  iVar4 = fn_006b8478(*(undefined4 *)(DAT_00897804 + 0xc));
  while (iVar4 = iVar4 + -1, -1 < iVar4) {
    uVar3 = fn_006b85d0(*(undefined4 *)(DAT_00897804 + 0xc),iVar4);
    fn_0028a68c(*(undefined4 *)(DAT_00897804 + 0xc),uVar3,0);
  }
  local_2c = *(int *)(param_1[0x41] + 8);
  iVar4 = 0;
  if (0 < *(int *)(param_1[0x41] + 0xc)) {
    do {
      puVar13 = (undefined4 *)(local_2c + iVar4 * 0x3c);
      if (*(short *)(puVar13 + 6) != 0) {
        iVar15 = 0;
        local_12c = (undefined2 *)0x0;
        local_128 = (undefined2 *)0x0;
        local_124 = (undefined2 *)0x0;
        do {
          puVar8 = local_128;
          if (*(short *)((int)puVar13 + iVar15 * 2 + 0x1c) != 0) {
            puVar16 = (undefined2 *)((int)puVar13 + iVar15 * 2 + 0x1c);
            if (local_128 == local_124) {
              uVar10 = (int)local_128 - (int)local_12c >> 1;
              if (uVar10 < (uint)((int)local_124 - (int)local_12c >> 1)) {
                if (local_128 != (undefined2 *)0x0) {
                  *local_128 = local_128[-1];
                }
                puVar8 = local_128 + -1;
                puVar7 = local_128;
                if (local_128 < puVar8) {
                  iVar11 = (int)puVar8 - (int)local_128;
                  if (0 < iVar11) {
                    if (iVar11 * 0x40000000 < 0) {
                      puVar8 = local_128 + -2;
                      puVar7 = local_128 + -1;
                      *puVar7 = *puVar8;
                    }
                    for (iVar11 = iVar11 >> 2; iVar11 != 0; iVar11 = iVar11 + -1) {
                      puVar7[-1] = puVar8[-1];
                      puVar8 = puVar8 + -2;
                      puVar7 = puVar7 + -2;
                      *puVar7 = *puVar8;
                    }
                  }
                }
                else {
                  while (local_128 != puVar8) {
                    puVar8 = puVar8 + -1;
                    puVar7[-1] = *puVar8;
                    puVar7 = puVar7 + -1;
                  }
                }
                *local_128 = *puVar16;
                puVar8 = local_128 + 1;
              }
              else {
                uVar17 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
                if (uVar17 < uVar10 + 0x20) {
                  uVar17 = uVar10 + 0x20;
                }
                puVar5 = (undefined2 *)fn_00100fc6(uVar17 << 1,0);
                puVar6 = puVar5;
                for (puVar7 = local_12c; puVar7 != puVar8; puVar7 = puVar7 + 1) {
                  if (puVar6 != (undefined2 *)0x0) {
                    *puVar6 = *puVar7;
                  }
                  puVar6 = puVar6 + 1;
                }
                puVar7 = (undefined2 *)(((int)puVar8 - (int)local_12c & 0xfffffffeU) + (int)puVar5);
                if (puVar7 != (undefined2 *)0x0) {
                  *puVar7 = *puVar16;
                }
                puVar16 = (undefined2 *)(((int)puVar8 - (int)local_12c & 0xfffffffeU) + (int)puVar5)
                ;
                for (; puVar8 != local_128; puVar8 = puVar8 + 1) {
                  puVar16 = puVar16 + 1;
                  if (puVar16 != (undefined2 *)0x0) {
                    *puVar16 = *puVar8;
                  }
                }
                iVar11 = (int)local_128 - (int)local_12c;
                puVar8 = local_12c;
                if (local_128 < local_12c) {
                  do {
                    puVar8 = puVar8 + 1;
                  } while (puVar8 != local_128);
                }
                fn_001008c4(local_12c,(int)local_124 - (int)local_12c >> 1,0);
                local_124 = puVar5 + uVar17;
                local_12c = puVar5;
                puVar8 = puVar5 + (iVar11 >> 1) + 1;
              }
            }
            else {
              puVar8 = local_128 + 1;
              if (local_128 != (undefined2 *)0x0) {
                *local_128 = *puVar16;
              }
            }
          }
          local_128 = puVar8;
          iVar15 = iVar15 + 1;
        } while (iVar15 < 6);
        switch(*(undefined2 *)((int)puVar13 + 0x1a)) {
        case 0x46:
          uVar3 = 0;
          break;
        case 0x47:
          uVar3 = 1;
          break;
        case 0x48:
          uVar3 = 2;
          break;
        case 0x49:
          uVar3 = 3;
          break;
        case 0x4a:
          uVar3 = 4;
          break;
        default:
          fn_00236d80(&local_120,&local_12c,(int)*(short *)(puVar13 + 6),1);
          goto LAB_00564d10;
        }
        fn_0023798c(&local_120,&local_12c,(int)*(short *)(puVar13 + 6),1,uVar3);
LAB_00564d10:
        uVar1 = fn_00661570((int)*(short *)(puVar13 + 6));
        local_ec = fn_002467b4(local_f2 + '\x01',uVar1);
        local_ae = *(undefined1 *)((int)puVar13 + 0x2a);
        local_ad = *(undefined1 *)((int)puVar13 + 0x2b);
        local_ac = *(undefined2 *)(puVar13 + 0xb);
        local_aa = *(undefined2 *)((int)puVar13 + 0x2e);
        local_a8 = *(undefined1 *)(puVar13 + 0xc);
        local_a7 = *(undefined1 *)((int)puVar13 + 0x31);
        local_a6 = *(undefined2 *)((int)puVar13 + 0x32);
        local_a4 = *(undefined2 *)(puVar13 + 0xd);
        local_a2 = *(undefined1 *)((int)puVar13 + 0x36);
        local_a1 = *(undefined1 *)((int)puVar13 + 0x37);
        local_a0 = *(undefined2 *)(puVar13 + 0xe);
        local_9e = *(undefined2 *)((int)puVar13 + 0x3a);
        local_11c = *puVar13;
        local_118 = puVar13[1];
        local_114 = puVar13[2];
        local_110 = puVar13[3];
        local_10c = puVar13[4];
        local_108 = puVar13[5];
        fn_0028b528(*(undefined4 *)(DAT_00897804 + 0xc),&local_120);
        puVar8 = local_12c;
        if (local_128 < local_12c) {
          do {
            puVar8 = puVar8 + 1;
          } while (puVar8 != local_128);
        }
        fn_001008c4(local_12c,(int)local_124 - (int)local_12c >> 1,0);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(param_1[0x41] + 0xc));
  }
  fn_00581bb0(param_1);
  iVar4 = fn_00178f9c(param_1[0x20],param_1[0x22]);
  uVar3 = *(undefined4 *)(iVar4 + 0x10);
  piVar9 = (int *)fn_00172c98(iVar4,(char *)&DAT_0056502c);
  piVar9 = (int *)(**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_00565040,1);
  if (piVar9 != (int *)0x0) {
    puVar13 = (undefined4 *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (puVar13 == &DAT_0089a928) goto LAB_00564eb0;
      puVar13 = (undefined4 *)*puVar13;
    } while (puVar13 != (undefined4 *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00564eb0:
  piVar9 = (int *)(**(code **)(*piVar9 + 0x2c))(piVar9,(char *)&DAT_00565054,1);
  if (piVar9 != (int *)0x0) {
    puVar13 = (undefined4 *)(**(code **)(*piVar9 + 8))(piVar9);
    do {
      if (puVar13 == &DAT_0089a930) goto LAB_00564ef8;
      puVar13 = (undefined4 *)*puVar13;
    } while (puVar13 != (undefined4 *)0x0);
  }
  piVar9 = (int *)0x0;
LAB_00564ef8:
  uVar12 = fn_0022f750(DAT_00898a48);
  fn_00190d50(piVar9,uVar12);
  uVar12 = fn_0068897c(uVar3,DAT_00898a44);
  uVar14 = fn_0022f750(DAT_00898a54);
  fn_00182810(uVar12,uVar14);
  iVar4 = fn_0068897c(uVar3,DAT_00898a40);
  param_1[0x42] = iVar4;
  uVar3 = fn_00311508(*(undefined4 *)(param_1[0x40] + 0x2c));
  uVar12 = fn_0022f750(DAT_00898a4c);
  local_12c = (undefined2 *)fn_0022f750(DAT_00898a50);
  local_128 = (undefined2 *)0x0;
  local_124 = (undefined2 *)0x0;
  local_120 = 0;
  fn_00101a50(&local_128,10,L"%ls%d%ls",uVar12,uVar3);
  fn_00182810(param_1[0x42],&local_128);
  uVar3 = fn_0022f584(DAT_00898a58,0);
  fn_0068974c(param_1,uVar3,0,1);
  iVar4 = param_1[0x17];
  *(undefined4 *)(iVar4 + 0x38) = 0x1000950;
  *(undefined1 *)(iVar4 + 0x5f) = 1;
  *(undefined4 *)(param_1[0x17] + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x46) = 1;
  uVar3 = fn_002e3e9c(param_1[0x2d],*(undefined4 *)(local_30 + 0x10),
                       *(undefined4 *)(local_30 + 0xc));
  (**(code **)(*param_1 + 400))(param_1,uVar3);
  fn_00582f2c(param_1);
  return 1;
}


