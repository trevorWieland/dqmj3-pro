#include "0039f0e8_0039f324.h"



/* WARNING: Removing unreachable block (ram,0x0039f67c) */
/* WARNING: Removing unreachable block (ram,0x0039f698) */
/* WARNING: Removing unreachable block (ram,0x0039f64c) */
/* WARNING: Removing unreachable block (ram,0x0039f654) */
/* WARNING: Removing unreachable block (ram,0x0039f660) */
/* WARNING: Removing unreachable block (ram,0x0039f6c4) */
/* WARNING: Removing unreachable block (ram,0x0039f6f4) */
/* WARNING: Removing unreachable block (ram,0x0039f69c) */
/* WARNING: Removing unreachable block (ram,0x0039f6a4) */
/* WARNING: Removing unreachable block (ram,0x0039f6ac) */
/* WARNING: Removing unreachable block (ram,0x0039f6bc) */

void fn_0039f324(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  int *piVar13;
  int *piVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uStack_48;
  uint auStack_44 [3];
  uint *local_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  int local_28;
  undefined4 uStack_24;
  uint local_20;
  
  uVar1 = fn_006ba274();
  fn_0039e5e0(param_1);
  fn_0039e7c4(param_1,uVar1);
  fn_0039ecf0(param_1,uVar1);
  piVar13 = (int *)(param_1 + 0x16c);
  uVar2 = fn_006ba214(param_1);
  local_20 = local_20 & 0xffffff00;
  iVar19 = *(int *)(param_1 + 0x170);
  if ((uint)((*(int *)(param_1 + 0x178) + (*(int *)(param_1 + 0x174) - *piVar13 >> 2) * 0x20) -
            iVar19) < uVar2) {
    local_38 = &local_20;
    fn_0079b030(param_1 + 0x16c,*(int *)(param_1 + 0x174),*(int *)(param_1 + 0x178),
                 uVar2 - ((*(int *)(param_1 + 0x178) +
                          (*(int *)(param_1 + 0x174) - *piVar13 >> 2) * 0x20) -
                         *(int *)(param_1 + 0x170)));
  }
  else {
    piVar14 = (int *)(param_1 + 0x174);
    if (uVar2 < (uint)((*(int *)(param_1 + 0x178) + (*piVar14 - *piVar13 >> 2) * 0x20) - iVar19)) {
      iVar19 = uVar2 + iVar19;
      local_2c = iVar19 % 0x20;
      local_30 = *piVar13 + ((int)(iVar19 + ((uint)(iVar19 >> 0x1f) >> 0x1b)) >> 5) * 4;
      local_38 = (uint *)*piVar14;
      uStack_34 = *(undefined4 *)(param_1 + 0x178);
      if (local_2c < 0) {
        local_2c = local_2c + 0x20;
        local_30 = local_30 + -4;
      }
      fn_0079b33c(&local_28,param_1 + 0x16c,*piVar14,*(undefined4 *)(param_1 + 0x178));
      *piVar14 = local_28;
      *(undefined4 *)(param_1 + 0x178) = uStack_24;
    }
  }
  puVar15 = (uint *)(param_1 + 0x148);
  puVar3 = *(undefined4 **)(param_1 + 0x14c);
  puVar11 = (undefined4 *)*puVar15;
  uVar2 = (int)puVar3 - (int)puVar11 >> 4;
  if (uVar2 < 10) {
    iVar19 = 10 - uVar2;
    if (iVar19 != 0) {
      uVar2 = iVar19 + uVar2;
      if ((uint)(*(int *)(param_1 + 0x150) - (int)puVar11 >> 4) < uVar2) {
        uStack_48 = uVar2;
        uVar6 = (int)(*(int *)(param_1 + 0x14c) - *puVar15) >> 4;
        auStack_44[0] = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (auStack_44[0] < uVar6 + 0x20) {
          auStack_44[0] = uVar6 + 0x20;
        }
        puVar7 = auStack_44;
        if (auStack_44[0] <= uVar2) {
          puVar7 = &uStack_48;
        }
        uVar2 = *puVar7;
        puVar4 = (undefined4 *)fn_00100fc6(uVar2 << 4,0);
        puVar10 = puVar4;
        for (puVar11 = (undefined4 *)*puVar15; puVar11 != puVar3; puVar11 = puVar11 + 4) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar16 = puVar11[1];
            uVar17 = puVar11[2];
            uVar18 = puVar11[3];
            *puVar10 = *puVar11;
            puVar10[1] = uVar16;
            puVar10[2] = uVar17;
            puVar10[3] = uVar18;
          }
          puVar10 = puVar10 + 4;
        }
        puVar11 = (undefined4 *)(((int)puVar3 - *puVar15 & 0xfffffff0) + (int)puVar4);
        for (iVar8 = iVar19; iVar8 != 0; iVar8 = iVar8 + -1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0;
            puVar11[1] = 0;
            puVar11[2] = 0;
            puVar11[3] = 0;
          }
          puVar11 = puVar11 + 4;
        }
        puVar10 = *(undefined4 **)(param_1 + 0x14c);
        puVar11 = puVar4 + (iVar19 + ((int)((int)puVar3 - *puVar15) >> 4)) * 4;
        for (; puVar3 != puVar10; puVar3 = puVar3 + 4) {
          if (puVar11 != (undefined4 *)0x0) {
            uVar16 = puVar3[1];
            uVar17 = puVar3[2];
            uVar18 = puVar3[3];
            *puVar11 = *puVar3;
            puVar11[1] = uVar16;
            puVar11[2] = uVar17;
            puVar11[3] = uVar18;
          }
          puVar11 = puVar11 + 4;
        }
        uVar5 = *puVar15;
        uVar9 = *(uint *)(param_1 + 0x14c);
        uVar6 = uVar5;
        if (uVar9 < uVar5) {
          do {
            uVar6 = uVar6 + 0x10;
          } while (uVar6 != uVar9);
        }
        fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x150) - uVar5) >> 4,0);
        *(undefined4 **)(param_1 + 0x150) = puVar4 + uVar2 * 4;
        *(undefined4 **)(param_1 + 0x14c) = puVar4 + ((int)(uVar9 - uVar5) >> 4) * 4 + iVar19 * 4;
        *puVar15 = (uint)puVar4;
      }
      else {
        puVar11 = puVar3 + iVar19 * 4;
        *(undefined4 **)(param_1 + 0x14c) = puVar3 + iVar19 * 4;
        if (puVar11 < puVar3) {
          puVar12 = puVar3 + iVar19 * -4;
          puVar10 = puVar3;
          for (puVar4 = puVar12; puVar4 != puVar3; puVar4 = puVar4 + 4) {
            if (puVar10 != (undefined4 *)0x0) {
              uVar16 = puVar4[1];
              uVar17 = puVar4[2];
              uVar18 = puVar4[3];
              *puVar10 = *puVar4;
              puVar10[1] = uVar16;
              puVar10[2] = uVar17;
              puVar10[3] = uVar18;
            }
            puVar10 = puVar10 + 4;
          }
          puVar10 = puVar3;
          if (puVar3 < puVar12) {
            iVar19 = (int)puVar12 - (int)puVar3;
            if (0 < iVar19) {
              puVar10 = puVar12;
              puVar4 = puVar3;
              if (iVar19 * 0x8000000 < 0) {
                puVar10 = puVar12 + -4;
                puVar4 = puVar3 + -4;
                uVar16 = puVar12[-3];
                uVar17 = puVar12[-2];
                uVar18 = puVar12[-1];
                *puVar4 = *puVar10;
                puVar3[-3] = uVar16;
                puVar3[-2] = uVar17;
                puVar3[-1] = uVar18;
              }
              for (iVar19 = iVar19 >> 5; iVar19 != 0; iVar19 = iVar19 + -1) {
                uVar16 = puVar10[-3];
                uVar17 = puVar10[-2];
                uVar18 = puVar10[-1];
                puVar4[-4] = puVar10[-4];
                puVar4[-3] = uVar16;
                puVar4[-2] = uVar17;
                puVar4[-1] = uVar18;
                uVar16 = puVar10[-7];
                uVar17 = puVar10[-6];
                uVar18 = puVar10[-5];
                puVar4[-8] = puVar10[-8];
                puVar4[-7] = uVar16;
                puVar4[-6] = uVar17;
                puVar4[-5] = uVar18;
                puVar10 = puVar10 + -8;
                puVar4 = puVar4 + -8;
              }
            }
          }
          else {
            while (puVar3 != puVar12) {
              uVar16 = puVar12[-3];
              uVar17 = puVar12[-2];
              uVar18 = puVar12[-1];
              puVar10[-4] = puVar12[-4];
              puVar10[-3] = uVar16;
              puVar10[-2] = uVar17;
              puVar10[-1] = uVar18;
              puVar10 = puVar10 + -4;
              puVar12 = puVar12 + -4;
            }
          }
          if (puVar3 < puVar11) {
            iVar19 = (int)puVar11 - (int)puVar3;
            if (0 < iVar19) {
              puVar11 = puVar3;
              if (iVar19 * 0x8000000 < 0) {
                *puVar3 = 0;
                puVar3[1] = 0;
                puVar11 = puVar3 + 4;
                puVar3[2] = 0;
                puVar3[3] = 0;
              }
              for (iVar19 = iVar19 >> 5; iVar19 != 0; iVar19 = iVar19 + -1) {
                *puVar11 = 0;
                puVar11[1] = 0;
                puVar11[2] = 0;
                puVar11[3] = 0;
                puVar11[4] = 0;
                puVar11[5] = 0;
                puVar11[6] = 0;
                puVar11[7] = 0;
                puVar11 = puVar11 + 8;
              }
            }
          }
          else {
            for (; puVar3 != puVar11; puVar3 = puVar3 + 4) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
            }
          }
        }
        else {
          for (; iVar19 != 0; iVar19 = iVar19 + -1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = 0;
              puVar3[1] = 0;
              puVar3[2] = 0;
              puVar3[3] = 0;
            }
            puVar3 = puVar3 + 4;
          }
        }
      }
    }
  }
  else if ((10 < uVar2) && (puVar10 = puVar11 + 0x28, puVar11 != puVar3)) {
    puVar11 = puVar10;
    if (puVar3 <= puVar10) {
      for (; puVar11 != puVar3; puVar11 = puVar11 + 4) {
      }
    }
    *(uint *)(param_1 + 0x14c) = (int)puVar3 - ((int)puVar3 - (int)puVar10 & 0xfffffff0U);
  }
  *(undefined4 *)(param_1 + 0x154) = uVar1;
  uVar2 = 0;
  if (*(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x148) >> 4 != 0) {
    do {
      fn_001028d4(&uStack_48,"delivered_icon_%02d",uVar2);
      iVar19 = fn_00688920(*(undefined4 *)(param_1 + 0x70),&uStack_48);
      if (iVar19 != 0) {
        *(byte *)(iVar19 + 0x44) = *(byte *)(iVar19 + 0x44) & 0xfe;
      }
      *(int *)(*(int *)(param_1 + 0x148) + uVar2 * 0x10) = iVar19;
      fn_001028d4(&uStack_48,"tb_delivered_%02d",uVar2);
      uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&uStack_48);
      *(undefined4 *)(*(int *)(param_1 + 0x148) + uVar2 * 0x10 + 4) = uVar1;
      fn_001028d4(&uStack_48,"tb_slash_%02d",uVar2);
      iVar19 = fn_00689210(*(undefined4 *)(param_1 + 0x70),&uStack_48);
      if (iVar19 != 0) {
        *(byte *)(iVar19 + 0x44) = *(byte *)(iVar19 + 0x44) & 0xfe;
      }
      *(int *)(*(int *)(param_1 + 0x148) + uVar2 * 0x10 + 8) = iVar19;
      fn_001028d4(&uStack_48,"tb_scout_%02d",uVar2);
      uVar1 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),&uStack_48);
      iVar19 = uVar2 * 0x10;
      uVar2 = uVar2 + 1;
      *(undefined4 *)(*(int *)(param_1 + 0x148) + iVar19 + 0xc) = uVar1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x14c) - *(int *)(param_1 + 0x148) >> 4));
  }
  return;
}



void fn_0039f2d4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = *(uint *)(param_1 + 0x148);
  *(undefined4 *)(param_1 + 0x148) = 0;
  uVar2 = *(uint *)(param_1 + 0x14c);
  *(undefined4 *)(param_1 + 0x14c) = 0;
  iVar3 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x150) = 0;
  uVar1 = uVar4;
  if (uVar2 < uVar4) {
    do {
      uVar1 = uVar1 + 0x10;
    } while (uVar1 != uVar2);
  }
  fn_002feef8(uVar4,(int)(iVar3 - uVar4) >> 4,0);
  return;
}



void fn_0039f248(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_00689280(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_0039f298);
  uVar1 = fn_0068897c(uVar1,(char *)&DAT_0039f2ac);
  iVar2 = fn_006b876c(*(undefined4 *)(DAT_00897804 + 0x38));
  fn_0015b0f8(0x1e - iVar2);
  uVar3 = fn_0022f584((char *)&DAT_0039f2b8,0);
  fn_00190d50(uVar1,uVar3);
  return;
}



void fn_0039f0e8(int param_1,int param_2,int param_3)

{
  char *pcVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) =
         *(byte *)(iVar3 + 0x44) & 0xfe | (byte)((*(byte *)(param_3 + 0xa74) & 0xf) >> 3);
  }
  if ((*(uint *)(param_3 + 0xa74) & 0x10) == 0) {
    if ((*(uint *)(param_3 + 0xa74) & 2) == 0) {
      pcVar1 = (char *)&DAT_0039f228;
    }
    else {
      pcVar1 = (char *)&DAT_0039f208;
    }
  }
  else {
    pcVar1 = (char *)&DAT_0039f1e4;
  }
  uVar2 = fn_0022f584(pcVar1,0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 4);
  if (iVar3 != 0) {
    fn_00190d50(iVar3,uVar2);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 8);
  if (iVar3 != 0) {
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  }
  iVar3 = fn_002940c0(param_3);
  if (iVar3 == 0) {
    if ((*(byte *)(param_3 + 0xa74) & 4) == 0) {
      pcVar1 = (char *)&DAT_0039f208;
    }
    else {
      pcVar1 = (char *)&DAT_0039f228;
    }
  }
  else {
    pcVar1 = (char *)&DAT_0039f1e4;
  }
  uVar2 = fn_0022f584(pcVar1,0);
  iVar3 = *(int *)(*(int *)(param_1 + 0x148) + param_2 * 0x10 + 0xc);
  if (iVar3 == 0) {
    return;
  }
  fn_00190d50(iVar3,uVar2);
  return;
}


