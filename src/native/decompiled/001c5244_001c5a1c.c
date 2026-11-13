#include "001c5244_001c5a1c.h"



void fn_001c5a1c(int param_1)

{
  int iVar1;
  
  if ((*(int **)(DAT_008977e0 + 0x28) == (int *)0x0) ||
     (iVar1 = (**(code **)(**(int **)(DAT_008977e0 + 0x28) + 0x2c))(), iVar1 != 0)) {
    return;
  }
  if (((*(char *)(DAT_008977e0 + 0x218) != '\0') ||
      (iVar1 = fn_006cc1fc(*(undefined4 *)(DAT_008977e0 + 0x50)), iVar1 != 0)) ||
     (iVar1 = fn_006b9588(*(undefined4 *)(DAT_008977e0 + 0x28)), iVar1 != 0)) {
    fn_00304cc0(*(undefined4 *)(DAT_008977e0 + 0x94));
    fn_00692fb0(*(undefined4 *)(DAT_008977e0 + 0x40));
    fn_006f72b4(DAT_008977e0);
    fn_0021956c();
    return;
  }
  fn_00698fb8(DAT_008977e0,0xffffffff);
  iVar1 = fn_006ac0d8(*(undefined4 *)(DAT_008977e0 + 0x30),5);
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  *(undefined1 *)(param_1 + 4) = 0xff;
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_001c5968(undefined4 *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  *param_1 = &PTR_FUN_0081b924;
  uVar5 = param_1[0x5b];
  uVar3 = param_1[0x5c];
  uVar2 = uVar5;
  if (uVar5 < uVar3) {
    iVar4 = 1;
    if (1 < (int)(uVar3 - uVar5) / 0x28 + 1) {
      uVar2 = (int)(uVar3 - uVar5) / 0x28 + 1;
      do {
        iVar4 = iVar4 + 1;
      } while (iVar4 < (int)uVar2);
    }
  }
  else {
    for (; uVar2 != uVar3; uVar2 = uVar2 + 0x28) {
    }
  }
  param_1[0x5c] = uVar5;
  piVar1 = (int *)param_1[0x5a];
  if (piVar1 != (int *)0x0) {
    uVar2 = param_1[0x5b];
  }
  if (piVar1 != (int *)0x0 && uVar2 != 0) {
    (**(code **)(*piVar1 + 0xc))();
  }
  fn_001dc08c(param_1);
  return;
}



undefined4 * fn_001c585c(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_001dbf48();
  *puVar1 = &PTR_FUN_0081b924;
  uVar2 = fn_00118290();
  puVar1[0x5a] = uVar2;
  puVar1[0x5b] = 0;
  puVar1[0x5c] = 0;
  puVar1[0x5d] = 0x40000000;
  puVar1[0x5e] = 0x21;
  fn_0075656c(puVar1 + 0x5a,0xb);
  return puVar1;
}



uint fn_001c54d0(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  int unaff_r7;
  uint uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *local_f0 [2];
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  undefined1 auStack_c0 [140];
  int local_34;
  int iStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  fn_00101a50(auStack_c0,0x40,L"rom:/data/Motion/Face/%s.bch",param_3);
  iVar2 = fn_00147fd4(auStack_c0,5);
  if (iVar2 == 0) {
    uVar3 = 0xffffffff;
  }
  else {
    uVar4 = fn_006f7a9c(DAT_008977e0);
    uVar3 = fn_006b78d8(uVar4,param_3);
    if (uVar3 == 0xffffffff) {
      uVar4 = fn_006f7a9c(DAT_008977e0);
      uVar3 = fn_00277b10(uVar4,param_3);
    }
    iVar2 = fn_006f7a9c(DAT_008977e0);
    if (((int)uVar3 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar3)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + uVar3 * 0x34;
    }
    uVar5 = fn_006eb368();
    if (uVar5 != 0) {
      unaff_r7 = 0x66666667;
    }
    uVar17 = 0;
    if (uVar5 != 0) {
      do {
        fn_005e8b38(local_f0,iVar2,uVar17);
        local_e4 = fn_005eef64(local_2c,local_f0);
        local_d0 = 0;
        local_e0 = 0;
        local_dc = 0;
        local_d8 = 0;
        local_d4 = 0;
        local_cc = 0;
        local_c8 = 0;
        local_c4 = 0;
        local_e8 = uVar3;
        fn_005e8b38(local_f0,iVar2,uVar17);
        fn_001782b8(&local_e0,*local_f0[0],0x20);
        piVar6 = (int *)(param_1 + 0x168);
        iVar13 = (int)((ulonglong)
                       ((longlong)unaff_r7 *
                       (longlong)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c))) >> 0x20);
        uVar7 = *(uint *)(param_1 + 0x174) & 0x3fffffff;
        if ((iVar13 >> 4) - (iVar13 >> 0x1f) < (int)uVar7) {
LAB_001c57cc:
          puVar11 = *(uint **)(param_1 + 0x170);
          if (puVar11 != (uint *)0x0) {
            *puVar11 = local_e8;
            puVar11[1] = local_e4;
            puVar11[2] = local_e0;
            puVar11[3] = local_dc;
            puVar11[4] = local_d8;
            puVar11[5] = local_d4;
            puVar11[6] = local_d0;
            puVar11[7] = local_cc;
            puVar11[8] = local_c8;
            puVar11[9] = local_c4;
          }
          *(int *)(param_1 + 0x170) = *(int *)(param_1 + 0x170) + 0x28;
        }
        else {
          if (uVar7 == 0) {
            uVar7 = 1;
          }
          else {
            uVar7 = uVar7 << 1;
          }
          if (uVar7 <= (*(uint *)(param_1 + 0x174) & 0x3fffffff)) goto LAB_001c57cc;
          if (((*piVar6 != 0) && ((*(uint *)(param_1 + 0x174) & 0xc0000000) == 0x40000000)) &&
             (puVar8 = (undefined4 *)
                       (**(code **)(*(int *)*piVar6 + 8))((int *)*piVar6,uVar7 * 0x28,0x20),
             puVar8 != (undefined4 *)0x0)) {
            puVar12 = *(undefined4 **)(param_1 + 0x16c);
            puVar15 = *(undefined4 **)(param_1 + 0x170);
            local_34 = 0;
            if (puVar12 != puVar15) {
              puVar9 = puVar8;
              do {
                if (puVar9 != (undefined4 *)0x0) {
                  uVar4 = puVar12[1];
                  uVar18 = puVar12[2];
                  uVar19 = puVar12[3];
                  uVar20 = puVar12[4];
                  uVar21 = puVar12[5];
                  uVar22 = puVar12[6];
                  uVar23 = puVar12[7];
                  *puVar9 = *puVar12;
                  puVar9[1] = uVar4;
                  puVar9[2] = uVar18;
                  puVar9[3] = uVar19;
                  puVar9[4] = uVar20;
                  puVar9[5] = uVar21;
                  puVar9[6] = uVar22;
                  puVar9[7] = uVar23;
                  uVar4 = puVar12[9];
                  puVar9[8] = puVar12[8];
                  puVar9[9] = uVar4;
                }
                puVar12 = puVar12 + 10;
                puVar9 = puVar9 + 10;
              } while (puVar12 != puVar15);
              iVar13 = (int)((ulonglong)
                             ((longlong)unaff_r7 *
                             (longlong)(*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c))) >>
                            0x20);
              local_34 = (iVar13 >> 4) - (iVar13 >> 0x1f);
            }
            uVar14 = *(uint *)(param_1 + 0x16c);
            if (uVar14 != 0) {
              uVar10 = *(uint *)(param_1 + 0x170);
              uVar1 = uVar14;
              if (uVar14 < uVar10) {
                iVar13 = 1;
                iVar16 = (int)((ulonglong)((longlong)unaff_r7 * (longlong)(int)(uVar10 - uVar14)) >>
                              0x20);
                if (1 < ((iVar16 >> 4) - (iVar16 >> 0x1f)) + 1) {
                  iVar16 = (int)((ulonglong)((longlong)unaff_r7 * (longlong)(int)(uVar10 - uVar14))
                                >> 0x20);
                  do {
                    iVar13 = iVar13 + 1;
                  } while (iVar13 < ((iVar16 >> 4) - (iVar16 >> 0x1f)) + 1);
                }
              }
              else {
                for (; uVar1 != uVar10; uVar1 = uVar1 + 0x28) {
                }
              }
              *(uint *)(param_1 + 0x170) = uVar14;
              (**(code **)(*(int *)*piVar6 + 0xc))((int *)*piVar6,*(undefined4 *)(param_1 + 0x16c));
            }
            *(undefined4 **)(param_1 + 0x16c) = puVar8;
            *(undefined4 **)(param_1 + 0x170) = puVar8 + local_34 * 10;
            *(uint *)(param_1 + 0x174) = *(uint *)(param_1 + 0x174) & 0xc0000000 | uVar7;
            goto LAB_001c57cc;
          }
        }
        uVar17 = uVar17 + 1;
      } while (uVar17 < uVar5);
    }
  }
  return uVar3;
}



void fn_001c5388(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  
  iVar2 = fn_006ec21c(param_2,10);
  if (iVar2 != 0) {
    fn_001a0b78();
  }
  iVar2 = 0;
  if (0 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28) {
    do {
      piVar6 = (int *)(*(int *)(param_1 + 0x16c) + iVar2 * 0x28);
      if (*piVar6 == param_3) {
        uVar3 = fn_006f7a9c(DAT_008977e0);
        fn_00279ae4(uVar3,*piVar6);
        *piVar6 = -1;
        piVar6[1] = -1;
        piVar6[2] = 0;
        piVar6[3] = 0;
        piVar6[4] = 0;
        piVar6[5] = 0;
        piVar6[6] = 0;
        piVar6[7] = 0;
        piVar6[8] = 0;
        piVar6[9] = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28);
  }
  uVar5 = *(uint *)(param_1 + 0x16c);
  uVar4 = *(uint *)(param_1 + 0x170);
  uVar1 = uVar5;
  if (uVar5 < uVar4) {
    iVar2 = 1;
    if (1 < (int)(uVar4 - uVar5) / 0x28 + 1) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uVar4 - uVar5) / 0x28 + 1);
    }
  }
  else {
    for (; uVar1 != uVar4; uVar1 = uVar1 + 0x28) {
    }
  }
  *(uint *)(param_1 + 0x170) = uVar5;
  return;
}



void fn_001c5244(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = fn_006ec21c(param_2,10);
  if (iVar2 != 0) {
    fn_001a0b78();
  }
  iVar2 = 0;
  if (0 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28) {
    do {
      piVar5 = (int *)(*(int *)(param_1 + 0x16c) + iVar2 * 0x28);
      if (*piVar5 != -1) {
        uVar3 = fn_006f7a9c(DAT_008977e0);
        fn_00279ae4(uVar3,*piVar5);
        *piVar5 = -1;
        piVar5[1] = -1;
        piVar5[2] = 0;
        piVar5[3] = 0;
        piVar5[4] = 0;
        piVar5[5] = 0;
        piVar5[6] = 0;
        piVar5[7] = 0;
        piVar5[8] = 0;
        piVar5[9] = 0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (*(int *)(param_1 + 0x170) - *(int *)(param_1 + 0x16c)) / 0x28);
  }
  uVar6 = *(uint *)(param_1 + 0x16c);
  uVar4 = *(uint *)(param_1 + 0x170);
  uVar1 = uVar6;
  if (uVar6 < uVar4) {
    iVar2 = 1;
    if (1 < (int)(uVar4 - uVar6) / 0x28 + 1) {
      do {
        iVar2 = iVar2 + 1;
      } while (iVar2 < (int)(uVar4 - uVar6) / 0x28 + 1);
    }
  }
  else {
    for (; uVar1 != uVar4; uVar1 = uVar1 + 0x28) {
    }
  }
  *(uint *)(param_1 + 0x170) = uVar6;
  return;
}


