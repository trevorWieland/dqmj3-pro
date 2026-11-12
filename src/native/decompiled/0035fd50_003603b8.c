#include "0035fd50_003603b8.h"



void fn_003603b8(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  float *pfVar7;
  int *piVar8;
  int iVar9;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_2c = fn_006f7a70(DAT_008977e0);
  iVar1 = fn_006f7a0c(DAT_008977e0);
  local_30 = *(undefined4 *)(iVar1 + 0x3c);
  local_34 = *(undefined4 *)(DAT_008977e0 + 0x1c);
  uVar2 = fn_006afe90(local_34,*(undefined4 *)(DAT_008977e0 + 0xa8));
  iVar1 = fn_006f7c6c(local_30);
  iVar9 = 0;
  if (0 < iVar1) {
    do {
      iVar3 = fn_006f7c20(local_30,iVar9);
      if (*(char *)(iVar3 + 300) == '\0') {
        uVar4 = fn_006afe90(local_34,*(undefined4 *)(iVar3 + 0x120));
        uVar5 = fn_002febd8(uVar2);
        if (((uVar5 < 3) || (uVar5 = fn_002febd8(uVar4), uVar5 < 3)) ||
           (iVar6 = fn_00147e6c(uVar2,uVar4,3), iVar6 != 0)) {
          iVar6 = fn_00145b00(0x19c,&DAT_00812c8c);
          if (iVar6 == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)fn_00211c48(iVar6,0);
          }
          iVar6 = fn_0026e5c4(0);
          if (iVar6 == 0) {
            iVar6 = -1;
          }
          else {
            uVar4 = fn_006f7a9c(DAT_008977e0);
            iVar6 = fn_006b77f0(uVar4,(char *)&DAT_007bef61);
            if (iVar6 == -1) {
              iVar6 = fn_002772e4(uVar4,(char *)&DAT_007bef61);
            }
          }
          fn_002fe310(local_2c,piVar8,iVar6);
          (**(code **)(*piVar8 + 0x10))(piVar8,iVar3);
          (**(code **)(*piVar8 + 0x14))(piVar8,iVar3 + 0xc);
          local_40 = *(float *)(iVar3 + 0x18);
          local_3c = *(float *)(iVar3 + 0x1c);
          local_38 = *(float *)(iVar3 + 0x20);
          if (local_40 < local_3c) {
            pfVar7 = &local_3c;
          }
          else {
            pfVar7 = &local_40;
          }
          if (local_38 <= *pfVar7) {
            pfVar7 = &local_40;
            if (local_40 < local_3c) {
              pfVar7 = &local_3c;
            }
            local_38 = *pfVar7;
          }
          local_40 = local_38;
          local_3c = local_38;
          (**(code **)(*piVar8 + 0x18))(piVar8,&local_40);
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < iVar1);
  }
  return;
}



int fn_00360360(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0026e5c4(param_2);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    uVar2 = fn_006f7a9c(DAT_008977e0);
    iVar1 = fn_006b77f0(uVar2,param_3);
    if (iVar1 == -1) {
      iVar1 = fn_002772e4(uVar2,param_3);
      return iVar1;
    }
  }
  return iVar1;
}



void fn_0035fd50(int param_1)

{
  bool bVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint local_138;
  undefined4 local_134;
  uint local_130;
  undefined4 uStack_12c;
  int *piStack_128;
  undefined4 uStack_124;
  uint uStack_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint local_114;
  uint local_110;
  int local_10c;
  uint local_108;
  undefined4 uStack_104;
  int *local_100;
  undefined4 uStack_fc;
  uint local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  int local_c0;
  uint local_bc;
  char local_b8 [4];
  int local_b4;
  int local_b0;
  int local_ac;
  undefined1 auStack_a8 [32];
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined1 auStack_60 [32];
  int local_40;
  undefined1 auStack_38 [8];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar15 = *(undefined4 *)(DAT_008977e0 + 0xa8);
  iVar2 = fn_006af76c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
  if ((iVar2 == 0) &&
     (iVar2 = fn_00211f10(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15), iVar2 == 0)) {
    uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
    iVar2 = fn_003035b0(uVar4,(char *)&DAT_006c2ec4);
    if (iVar2 == 0) goto LAB_0035fe10;
    iVar2 = fn_003035b0(uVar4,(char *)&DAT_006c2ecc);
  }
  else {
    fn_006f7a0c(DAT_008977e0);
    iVar2 = fn_006f637c();
    if (iVar2 == 0) {
      return;
    }
    iVar2 = **(int **)(DAT_008977e0 + 0x40);
  }
  if (iVar2 != 0) {
    return;
  }
LAB_0035fe10:
  iVar2 = fn_006af668(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
  if ((iVar2 == 1 || iVar2 == 3) || (iVar2 == 9)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  pcVar3 = (char *)fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
  local_b8[0] = *pcVar3;
  fn_006af3a8(&local_114,*(undefined4 *)(DAT_008977e0 + 0x1c),local_b8,1);
  uVar4 = fn_006f7a9c(DAT_008977e0);
  local_134 = fn_00277bd0(uVar4,(int)local_b8[0]);
  iVar2 = fn_00279bbc(uVar4,local_134);
  if (iVar2 == 0) {
    fn_00279ae4(uVar4,local_134);
    uVar18 = local_114;
    if (local_110 < local_114) {
      do {
        uVar18 = uVar18 + 4;
      } while (uVar18 != local_110);
    }
  }
  else {
    uVar5 = fn_006b7664();
    fn_00118624(auStack_38,uVar5);
    uVar15 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar15);
    iVar2 = fn_003035b0(uVar15,(char *)&DAT_006c2ec4);
    if ((iVar2 == 0) || (iVar2 = fn_003035b0(uVar15,(char *)&DAT_006c2ecc), iVar2 == 0)) {
      iVar2 = 4;
      local_c0 = 1;
    }
    else if (bVar1) {
      iVar2 = 7;
      local_c0 = 4;
    }
    else {
      iVar2 = 5;
      local_c0 = 3;
    }
    iVar13 = *(int *)(param_1 + 0x20);
    iVar16 = *(int *)(param_1 + 0x1c);
    iVar11 = iVar16;
    if (iVar16 != iVar13) {
      do {
        fn_0035dac8(iVar11);
        iVar11 = iVar11 + 0x28;
      } while (iVar11 != iVar13);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + ((iVar13 - iVar16) / 0x28) * -0x28;
    }
    iVar11 = fn_00145b00(8,&DAT_00812c8c);
    piVar6 = (int *)0x0;
    if (iVar11 != 0) {
      piVar6 = (int *)fn_00692eac();
    }
    uVar18 = 0;
    local_bc = (int)(local_110 - local_114) >> 2;
    if (local_bc != 0) {
      local_40 = iVar2 - local_c0;
      do {
        uVar5 = *(undefined4 *)(local_114 + uVar18 * 4);
        uVar15 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar5);
        fn_00102908(auStack_60,0x20,(char *)&DAT_00360348,uVar15);
        iVar2 = fn_006eddc0(auStack_38,auStack_60);
        if (iVar2 != 0) {
          iVar2 = fn_00176d74(auStack_38,auStack_60);
          piVar6[1] = iVar2;
          fn_00183718(&local_108,piVar6,&DAT_00360358);
          local_130 = local_108;
          uStack_12c = uStack_104;
          piStack_128 = local_100;
          uStack_124 = uStack_fc;
          uStack_120 = local_f8;
          uStack_11c = uStack_f4;
          uStack_118 = uStack_f0;
          uVar12 = 0;
          local_b4 = 0;
          local_b0 = 0;
          local_ac = 0;
          if (local_108 != 0) {
            do {
              fn_00176ec8(&local_108,&uStack_12c,uVar12);
              fn_0017821c(auStack_a8,&local_108,0x44);
              local_30 = local_88;
              uStack_2c = uStack_84;
              uStack_28 = uStack_80;
              fn_0035eb50(param_1,&local_b4,auStack_a8,&local_30,uVar5);
              uVar12 = uVar12 + 1;
            } while (uVar12 < local_130);
          }
          iVar11 = fn_00163868(local_40 + 1);
          iVar2 = local_b0;
          uVar12 = (local_b0 - local_b4) / 0x28;
          uVar14 = iVar11 + local_c0;
          if (uVar12 < (uint)(iVar11 + local_c0)) {
            uVar14 = uVar12;
          }
          iVar11 = local_b4;
          if (uVar14 == 0) {
            for (; iVar11 != iVar2; iVar11 = iVar11 + 0x28) {
              fn_0035dac8(iVar11);
            }
          }
          else {
            puVar10 = &local_138;
            if (0x1f < uVar14) {
              puVar10 = &local_f8;
            }
            local_f8 = uVar14;
            local_138 = 0x20;
            uVar17 = *puVar10;
            piVar7 = (int *)fn_00100fc6(uVar17 << 2,0);
            piVar8 = piVar7;
            for (uVar12 = local_f8; uVar12 != 0; uVar12 = uVar12 - 1) {
              if (piVar8 != (int *)0x0) {
                *piVar8 = -1;
              }
              piVar8 = piVar8 + 1;
            }
            local_100 = piVar7 + uVar17;
            iVar2 = 0;
            piVar8 = piVar7 + local_f8;
            if (0 < (int)uVar14) {
              do {
                while (iVar11 = piVar7[iVar2], iVar11 == -1) {
                  iVar13 = fn_00163868((local_b0 - local_b4) / 0x28);
                  piVar9 = piVar7;
                  while( true ) {
                    if (piVar9 != piVar8) {
                      iVar11 = *piVar9;
                    }
                    if (piVar9 == piVar8 || iVar11 == iVar13) break;
                    piVar9 = piVar9 + 1;
                  }
                  if (piVar9 == piVar8) {
                    piVar7[iVar2] = iVar13;
                  }
                }
                iVar13 = *(int *)(param_1 + 0x20);
                if (iVar13 == *(int *)(param_1 + 0x24)) {
                  fn_0078e7a8();
                }
                else {
                  *(int *)(param_1 + 0x20) = iVar13 + 0x28;
                  if (iVar13 != 0) {
                    fn_0035d9ac(iVar13,local_b4 + iVar11 * 0x28);
                  }
                }
                iVar2 = iVar2 + 1;
              } while (iVar2 < (int)uVar14);
            }
            piVar9 = piVar7;
            if (piVar8 < piVar7) {
              do {
                piVar9 = piVar9 + 1;
              } while (piVar9 != piVar8);
            }
            fn_001008c4(piVar7,(int)local_100 - (int)piVar7 >> 2,0);
            iVar11 = local_b0;
            for (iVar2 = local_b4; iVar2 != iVar11; iVar2 = iVar2 + 0x28) {
              fn_0035dac8(iVar2);
            }
          }
          fn_001008c4(local_b4,(local_ac - local_b4) / 0x28,0);
        }
        uVar18 = uVar18 + 1;
      } while (uVar18 < local_bc);
    }
    fn_00279ae4(uVar4,local_134);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    fn_005f5d3c(auStack_38);
    uVar18 = local_114;
    if (local_110 < local_114) {
      do {
        uVar18 = uVar18 + 4;
      } while (uVar18 != local_110);
    }
  }
  fn_001008c4(local_114,(int)(local_10c - local_114) >> 2,0);
  return;
}


