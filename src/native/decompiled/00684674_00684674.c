#include "00684674_00684674.h"



undefined4 fn_00684674(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  uint uVar19;
  int *piVar20;
  uint *puVar21;
  undefined8 uVar22;
  int *local_4c;
  int *local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  
  iVar11 = DAT_008977e0;
  uVar15 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  uVar1 = *(undefined4 *)(DAT_008977e0 + 0x1c);
  uVar2 = fn_006afe90();
  iVar3 = fn_006f7358(DAT_008977e0);
  fn_006840f4(param_1,uVar15);
  if ((iVar3 == 0) && (iVar4 = fn_00683cb4(param_1), iVar4 == 0)) {
    return 0;
  }
  iVar4 = fn_00145b00(0x94,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar4 != 0) {
    piVar5 = (int *)fn_0036a4c0(iVar4,uVar15);
  }
  piVar16 = *(int **)(param_1 + 0x30);
  if (piVar16 != piVar5) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *(int **)(param_1 + 0x30) = piVar5;
  }
  uVar6 = fn_006afa24(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0xa8));
  if ((uVar6 & ~(uint)(**(int **)(DAT_008977e0 + 0x40) != 0)) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = fn_006afabc(uVar1,uVar15);
  }
  uVar7 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
  iVar8 = fn_00163d44(0);
  if (iVar8 == 9) {
    iVar8 = fn_00163d44(10);
    if ((iVar8 == 1) && (iVar8 = fn_003035b0(uVar7,(char *)&DAT_00685174), iVar8 == 0)) {
      uVar6 = 1;
      goto LAB_00684834;
    }
  }
  else if (iVar8 == 0x32) {
    iVar8 = fn_00692f44();
    if ((iVar8 != 0) && (iVar8 = fn_003035b0(uVar7,(char *)&DAT_006f6528), iVar8 == 0)) {
      uVar6 = 2;
      goto LAB_00684834;
    }
    iVar8 = fn_00163d44(0x32);
    if (iVar8 == 10) {
      uVar6 = 0;
      do {
        iVar8 = fn_003035b0((&DAT_007bfb6c)[uVar6 * 2],uVar7);
        if (iVar8 == 0) {
          uVar6 = fn_00154ac8((&DAT_007bfb70)[uVar6 * 2]);
          uVar6 = uVar6 ^ 1;
          goto LAB_00684834;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < 4);
    }
  }
  uVar6 = 0;
LAB_00684834:
  if (iVar4 != 0 && uVar6 != 0) {
    iVar4 = 0;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x30) + 0x24);
  (**(code **)(*piVar5 + 8))(piVar5,iVar4);
  uVar9 = fn_006afb24(uVar1,uVar15);
  uVar10 = (uint)*(char *)(iVar11 + 0xd0);
  if (uVar10 == 0xffffffff) {
    uVar10 = 0;
  }
  uVar10 = uVar10 & 0xff;
  if (uVar6 != 0) {
    uVar9 = 0;
    uVar10 = uVar9;
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x30) + 0x28);
  (**(code **)(*piVar5 + 8))(piVar5,uVar10,uVar9);
  uVar22 = 0;
  (**(code **)(**(int **)(*(int *)(param_1 + 0x30) + 0x28) + 0x1c))();
  iVar11 = fn_006afdf4(uVar1,uVar15);
  if (iVar11 != -1) {
    iVar11 = fn_00145b00(0x1c,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar11 != 0) {
      piVar5 = (int *)fn_006883f0();
    }
    piVar16 = *(int **)(param_1 + 0x34);
    if (piVar16 != piVar5) {
      if (piVar16 != (int *)0x0) {
        (**(code **)(*piVar16 + 4))(piVar16);
      }
      *(int **)(param_1 + 0x34) = piVar5;
    }
    fn_0068808c(*(undefined4 *)(param_1 + 0x34),*(undefined4 *)(param_1 + 8));
  }
  piVar5 = *(int **)(*(int *)(param_1 + 0x30) + 0x28);
  (**(code **)(*piVar5 + 0x28))(piVar5,*(undefined4 *)(param_1 + 0x34));
  iVar4 = fn_00145b00(0x50,&DAT_00812c8c);
  iVar11 = 0;
  if (iVar4 != 0) {
    iVar11 = fn_0025825c();
  }
  iVar4 = *(int *)(param_1 + 0x38);
  if (iVar4 != iVar11) {
    if (iVar4 != 0) {
      fn_002feef8(iVar4);
    }
    *(int *)(param_1 + 0x38) = iVar11;
  }
  fn_00258110(*(undefined4 *)(param_1 + 0x38));
  (**(code **)(**(int **)(param_1 + 0x50) + 8))
            (*(int **)(param_1 + 0x50),uVar2,*(undefined4 *)(param_1 + 0x24),
             *(undefined4 *)(param_1 + 0x28));
  iVar11 = fn_00145b00(0x20,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar11 != 0) {
    piVar5 = (int *)fn_0069c190();
  }
  piVar16 = *(int **)(param_1 + 0x3c);
  if (piVar16 != piVar5) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *(int **)(param_1 + 0x3c) = piVar5;
  }
  fn_0069bf6c(*(undefined4 *)(param_1 + 0x3c));
  iVar11 = fn_00145b00(0x70,&DAT_00812c8c);
  piVar5 = (int *)0x0;
  if (iVar11 != 0) {
    piVar5 = (int *)fn_00257fc8();
  }
  piVar16 = *(int **)(param_1 + 0x40);
  if (piVar16 != piVar5) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 4))(piVar16);
    }
    *(int **)(param_1 + 0x40) = piVar5;
  }
  uVar7 = fn_006f7a9c(DAT_008977e0);
  iVar11 = fn_006b7664(uVar7,*(undefined4 *)(param_1 + 0x18));
  if (iVar11 != 0) {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = (undefined4)uVar22;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar7 = fn_00257da8(*(undefined4 *)(param_1 + 0x40),1,iVar11,&DAT_008f9e2c);
    *(undefined4 *)(param_1 + 0x6c) = uVar7;
  }
  uVar7 = fn_006f7a9c(DAT_008977e0);
  iVar11 = fn_006b7664(uVar7,*(undefined4 *)(param_1 + 0x1c));
  if (iVar11 != 0) {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = (undefined4)uVar22;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar7 = fn_00257da8(*(undefined4 *)(param_1 + 0x40),0,iVar11,&DAT_008f9e2c);
    *(undefined4 *)(param_1 + 0x70) = uVar7;
  }
  uVar7 = fn_006f7a9c(DAT_008977e0);
  iVar11 = fn_006b7664(uVar7,*(undefined4 *)(param_1 + 0x20));
  if (iVar11 != 0) {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar4 = fn_00303afc(&DAT_008c62fc), iVar4 != 0)) {
      DAT_008f9e2c = (undefined4)uVar22;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    fn_00257da8(*(undefined4 *)(param_1 + 0x40),2,iVar11,&DAT_008f9e2c);
  }
  uVar1 = fn_006afe90(uVar1,uVar15);
  uVar6 = 0;
  do {
    iVar11 = fn_003035b0(uVar1,(&DAT_008919a0)[uVar6]);
    if (iVar11 == 0) {
      iVar11 = fn_00145b00(0x28,&DAT_00812c8c);
      if (iVar11 == 0) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = (int *)fn_00343d40(iVar11,*(undefined4 *)(param_1 + 0x40));
      }
      piVar16 = *(int **)(param_1 + 0x58);
      if (piVar16 != piVar5) {
        if (piVar16 != (int *)0x0) {
          (**(code **)(*piVar16 + 4))();
        }
        *(int **)(param_1 + 0x58) = piVar5;
      }
      (**(code **)(**(int **)(param_1 + 0x58) + 0x34))(*(int **)(param_1 + 0x58),uVar15,0);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 < 9);
  piVar5 = (int *)fn_001b9374();
  piVar16 = *(int **)(param_1 + 0x4c);
  if (piVar16 != piVar5) {
    if (piVar16 != (int *)0x0) {
      (**(code **)(*piVar16 + 4))();
    }
    *(int **)(param_1 + 0x4c) = piVar5;
  }
  (**(code **)(**(int **)(param_1 + 0x4c) + 8))();
  piVar5 = (int *)fn_006f756c(DAT_008977e0);
  (**(code **)(*piVar5 + 0x34))(piVar5,uVar2);
  if (iVar3 != 0) {
    iVar11 = fn_00145b00(100,&DAT_00812c8c);
    piVar5 = (int *)0x0;
    if (iVar11 != 0) {
      piVar5 = (int *)fn_00259210();
    }
    piVar16 = *(int **)(param_1 + 0x54);
    if (piVar16 != piVar5) {
      if (piVar16 != (int *)0x0) {
        (**(code **)(*piVar16 + 4))(piVar16);
      }
      *(int **)(param_1 + 0x54) = piVar5;
    }
    iVar11 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)(DAT_008977e0 + 0x118)
                         );
    if (iVar11 == -1 || iVar11 == 8) {
      uVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_00685174);
    }
    else {
      uVar1 = fn_006af9e0(*(undefined4 *)(DAT_008977e0 + 0x1c),
                           *(undefined4 *)(DAT_008977e0 + 0x118));
    }
    fn_0025902c(*(undefined4 *)(param_1 + 0x54),uVar1);
  }
  local_4c = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = 0;
  (**(code **)(**(int **)(param_1 + 0x50) + 0x68))(*(int **)(param_1 + 0x50),&local_4c);
  uVar6 = 0;
  iVar11 = (int)local_48 - (int)local_4c >> 0x1f;
  if (((int)local_48 - (int)local_4c) / 0x28 + iVar11 != iVar11) {
    do {
      piVar5 = local_4c;
      iVar11 = fn_00145b00(0x14,&DAT_00812c8c);
      if (iVar11 == 0) {
        uVar1 = 0;
      }
      else {
        uVar1 = fn_00259344();
      }
      local_40 = piVar5[uVar6 * 10 + 7];
      iStack_3c = piVar5[uVar6 * 10 + 9];
      fn_00259330(uVar1,piVar5 + uVar6 * 10 + 1,&local_40);
      puVar21 = (uint *)(param_1 + 0x5c);
      puVar12 = *(undefined4 **)(param_1 + 0x60);
      if (puVar12 == *(undefined4 **)(param_1 + 100)) {
        uVar9 = (int)((int)puVar12 - *puVar21) >> 2;
        if (uVar9 < (uint)((int)((int)*(undefined4 **)(param_1 + 100) - *puVar21) >> 2)) {
          *(undefined4 **)(param_1 + 0x60) = puVar12 + 1;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = puVar12[-1];
          }
          puVar17 = puVar12 + -1;
          puVar18 = puVar12;
          if (puVar12 < puVar17) {
            if (0 < (int)puVar17 - (int)puVar12) {
              iVar11 = (int)puVar17 - (int)puVar12 >> 2;
              iVar3 = 0;
              do {
                iVar11 = iVar11 + -1;
                puVar12[iVar3 + -1] = puVar17[iVar3 + -1];
                iVar3 = iVar3 + -1;
              } while (iVar11 != 0);
            }
          }
          else {
            while (puVar12 != puVar17) {
              puVar17 = puVar17 + -1;
              puVar18[-1] = *puVar17;
              puVar18 = puVar18 + -1;
            }
          }
          *puVar12 = uVar1;
        }
        else {
          uVar10 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
          if (uVar10 < uVar9 + 0x20) {
            uVar10 = uVar9 + 0x20;
          }
          puVar13 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
          puVar18 = puVar13;
          for (puVar17 = (undefined4 *)*puVar21; puVar17 != puVar12; puVar17 = puVar17 + 1) {
            if (puVar18 != (undefined4 *)0x0) {
              *puVar18 = *puVar17;
            }
            puVar18 = puVar18 + 1;
          }
          puVar17 = (undefined4 *)(((int)puVar12 - *puVar21 & 0xfffffffc) + (int)puVar13);
          if (puVar17 != (undefined4 *)0x0) {
            *puVar17 = uVar1;
          }
          puVar18 = *(undefined4 **)(param_1 + 0x60);
          puVar17 = (undefined4 *)(((int)puVar12 - *puVar21 & 0xfffffffc) + (int)puVar13);
          for (; puVar12 != puVar18; puVar12 = puVar12 + 1) {
            puVar17 = puVar17 + 1;
            if (puVar17 != (undefined4 *)0x0) {
              *puVar17 = *puVar12;
            }
          }
          uVar14 = *puVar21;
          uVar19 = *(uint *)(param_1 + 0x60);
          uVar9 = uVar14;
          if (uVar19 < uVar14) {
            do {
              uVar9 = uVar9 + 4;
            } while (uVar9 != uVar19);
          }
          fn_001008c4(uVar14,(int)(*(int *)(param_1 + 100) - uVar14) >> 2,0);
          *puVar21 = (uint)puVar13;
          *(undefined4 **)(param_1 + 0x60) = puVar13 + ((int)(uVar19 - uVar14) >> 2) + 1;
          *(undefined4 **)(param_1 + 100) = puVar13 + uVar10;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0x60) = puVar12 + 1;
        if (puVar12 != (undefined4 *)0x0) {
          *puVar12 = uVar1;
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(((int)local_48 - (int)local_4c) / 0x28));
  }
  piVar16 = local_48;
  uVar1 = (undefined4)uVar22;
  for (piVar5 = local_4c; piVar5 != piVar16; piVar5 = piVar5 + 10) {
    if ((undefined1 *)*piVar5 != &DAT_008f9d04) {
      piVar20 = (int *)((undefined1 *)*piVar5 + -0xc);
      iVar11 = *piVar20;
      if ((iVar11 == -1) || ((piVar20 != &DAT_008f9cf8 && (*piVar20 = iVar11 + -1, iVar11 == 0)))) {
        fn_001008c4(*piVar5 + -0xc,*(int *)(*piVar5 + -8) + 0xe,0);
      }
    }
    uVar1 = (undefined4)uVar22;
  }
  fn_001008c4(local_4c,(local_44 - (int)local_4c) / 0x28,0);
  fn_006f7a84(DAT_008977e0);
  fn_001ea070();
  iVar11 = fn_006f72c8(DAT_008977e0);
  if (iVar11 != 0) {
    fn_006f72c8(DAT_008977e0);
    fn_00225f7c();
  }
  iVar11 = fn_0033e488(uVar15);
  if (iVar11 == 0) {
    iVar11 = fn_006f7358(DAT_008977e0);
    if ((iVar11 != 0) && (iVar11 = fn_0033e678(uVar15), iVar11 != 0)) {
      iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
      iVar11 = 0;
      if (iVar3 != 0) {
        iVar11 = fn_0033e82c();
      }
      iVar3 = *(int *)(param_1 + 0x48);
      if (iVar3 != iVar11) {
        if (iVar3 != 0) {
          fn_0033e8d4(iVar3);
          fn_002feef8();
        }
        *(int *)(param_1 + 0x48) = iVar11;
      }
      uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x54) + 0x38);
      uVar1 = fn_006b6164();
      fn_0033e3a0(*(undefined4 *)(param_1 + 0x48),1,uVar2,uVar1,1);
      return 1;
    }
    iVar11 = fn_002fb61c();
    if (iVar11 == 0) {
      return 1;
    }
    iVar11 = fn_0033e678(uVar15);
    if (iVar11 == 0) {
      return 1;
    }
    iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
    iVar11 = 0;
    if (iVar3 != 0) {
      iVar11 = fn_0033e82c();
    }
    iVar3 = *(int *)(param_1 + 0x48);
    if (iVar3 != iVar11) {
      if (iVar3 != 0) {
        fn_0033e8d4(iVar3);
        fn_002feef8();
      }
      *(int *)(param_1 + 0x48) = iVar11;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar11 = fn_00303afc(&DAT_008c62fc), iVar11 != 0)) {
      DAT_008f9e2c = uVar1;
      DAT_008f9e30 = uVar1;
      DAT_008f9e34 = uVar1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = 1;
  }
  else {
    iVar11 = fn_00145b00(0x28,&DAT_00812c8c);
    if (iVar11 == 0) {
      iVar11 = 0;
    }
    else {
      iVar11 = fn_0033e82c();
    }
    if (*(int *)(param_1 + 0x48) != iVar11) {
      if (*(int *)(param_1 + 0x48) != 0) {
        fn_0033e8d4();
        fn_002feef8();
      }
      *(int *)(param_1 + 0x48) = iVar11;
    }
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar11 = fn_00303afc(&DAT_008c62fc), iVar11 != 0)) {
      DAT_008f9e2c = uVar1;
      DAT_008f9e30 = uVar1;
      DAT_008f9e34 = uVar1;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x48);
    uVar2 = 0;
  }
  fn_0033e3a0(uVar1,uVar2,uVar15,&DAT_008f9e2c,1);
  return 1;
}


