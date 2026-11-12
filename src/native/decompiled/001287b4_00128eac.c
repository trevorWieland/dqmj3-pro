#include "001287b4_00128eac.h"



undefined * fn_00128eac(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined *local_8 [2];
  
  local_8[0] = &DAT_00128edc;
  fn_00143f98(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return local_8[0];
}



undefined4 fn_00128e7c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_00143ed8(local_8,**(undefined4 **)(param_1 + 4),param_2,param_3);
  return local_8[0];
}



undefined4 fn_00128e54(int param_1,undefined4 param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  fn_00143e3c(local_8,**(undefined4 **)(param_1 + 4),param_2);
  return local_8[0];
}



undefined4 * fn_00128dc4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  *param_1 = &DAT_00859430;
  iVar5 = param_1[1];
  if (iVar5 != 0) {
    uVar2 = *(uint *)(iVar5 + 4);
    uVar4 = *(uint *)(iVar5 + 8);
    uVar1 = uVar2;
    if (uVar2 < uVar4) {
      if (0 < (int)(uVar4 - uVar2)) {
        for (iVar3 = (int)(uVar4 - uVar2) >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        }
      }
    }
    else {
      for (; uVar1 != uVar4; uVar1 = uVar1 + 8) {
      }
    }
    fn_001008c4(uVar2,(int)(*(int *)(iVar5 + 0xc) - uVar2) >> 3,0);
    fn_002feef8(iVar5);
  }
  return param_1;
}



/* WARNING: Removing unreachable block (ram,0x00128abc) */
/* WARNING: Removing unreachable block (ram,0x00128ad0) */
/* WARNING: Removing unreachable block (ram,0x00128a90) */
/* WARNING: Removing unreachable block (ram,0x00128a98) */
/* WARNING: Removing unreachable block (ram,0x00128aa0) */
/* WARNING: Removing unreachable block (ram,0x00128aec) */
/* WARNING: Removing unreachable block (ram,0x00128b0c) */
/* WARNING: Removing unreachable block (ram,0x00128ad4) */
/* WARNING: Removing unreachable block (ram,0x00128adc) */
/* WARNING: Removing unreachable block (ram,0x00128ae0) */
/* WARNING: Removing unreachable block (ram,0x00128ae4) */

void fn_00128858(int param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  uint local_38 [3];
  int iStack_2c;
  uint local_28;
  
  local_28 = param_2;
  iStack_2c = param_1;
  iVar14 = *(int *)(param_1 + 4);
  puVar10 = *(undefined4 **)(iVar14 + 4);
  puVar5 = *(undefined4 **)(iVar14 + 8);
  if (puVar10 != puVar5) {
    puVar2 = puVar10;
    if (puVar10 < puVar5) {
      if (0 < (int)puVar5 - (int)puVar10) {
        for (iVar12 = (int)puVar5 - (int)puVar10 >> 4; iVar12 != 0; iVar12 = iVar12 + -1) {
        }
      }
    }
    else {
      do {
        puVar2 = puVar2 + 2;
      } while (puVar2 != puVar5);
    }
    *(uint *)(iVar14 + 8) = (int)puVar5 - ((int)puVar5 - (int)puVar10 & 0xfffffff8U);
  }
  local_38[1] = 1;
  puVar1 = &local_28;
  if (param_2 == 0) {
    puVar1 = local_38 + 1;
  }
  uVar8 = *puVar1;
  **(uint **)(param_1 + 4) = uVar8;
  iVar14 = *(int *)(param_1 + 4);
  piVar11 = (int *)(iVar14 + 4);
  puVar2 = (undefined4 *)*piVar11;
  puVar5 = *(undefined4 **)(iVar14 + 8);
  uVar13 = (int)puVar5 - (int)puVar2 >> 3;
  if (uVar13 < uVar8) {
    iVar12 = uVar8 - uVar13;
    if (iVar12 != 0) {
      if ((uint)(*(int *)(iVar14 + 0xc) - (int)puVar2 >> 3) < iVar12 + uVar13) {
        local_38[0] = iVar12 + uVar13;
        uVar8 = *(int *)(iVar14 + 8) - *piVar11 >> 3;
        local_38[2] = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        if (local_38[2] < uVar8 + 0x20) {
          local_38[2] = uVar8 + 0x20;
        }
        puVar1 = local_38;
        if (iVar12 + uVar13 < local_38[2]) {
          puVar1 = local_38 + 2;
        }
        uVar13 = *puVar1;
        puVar3 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
        puVar2 = puVar3;
        for (puVar10 = (undefined4 *)*piVar11; puVar10 != puVar5; puVar10 = puVar10 + 2) {
          if (puVar2 != (undefined4 *)0x0) {
            uVar15 = puVar10[1];
            *puVar2 = *puVar10;
            puVar2[1] = uVar15;
          }
          puVar2 = puVar2 + 2;
        }
        puVar10 = (undefined4 *)(((int)puVar5 - *piVar11 & 0xfffffff8U) + (int)puVar3);
        for (iVar7 = iVar12; iVar7 != 0; iVar7 = iVar7 + -1) {
          if (puVar10 != (undefined4 *)0x0) {
            *puVar10 = 0;
            puVar10[1] = 0;
          }
          puVar10 = puVar10 + 2;
        }
        puVar2 = *(undefined4 **)(iVar14 + 8);
        puVar10 = puVar3 + (iVar12 + ((int)puVar5 - *piVar11 >> 3)) * 2;
        for (; puVar5 != puVar2; puVar5 = puVar5 + 2) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar15 = puVar5[1];
            *puVar10 = *puVar5;
            puVar10[1] = uVar15;
          }
          puVar10 = puVar10 + 2;
        }
        puVar10 = (undefined4 *)*piVar11;
        puVar2 = *(undefined4 **)(iVar14 + 8);
        iVar7 = (int)puVar2 - (int)puVar10;
        puVar5 = puVar10;
        if (puVar10 < puVar2) {
          if (0 < iVar7) {
            for (iVar4 = iVar7 >> 4; iVar4 != 0; iVar4 = iVar4 + -1) {
            }
          }
        }
        else {
          for (; puVar5 != puVar2; puVar5 = puVar5 + 2) {
          }
        }
        fn_001008c4(puVar10,*(int *)(iVar14 + 0xc) - (int)puVar10 >> 3,0);
        *(undefined4 **)(iVar14 + 0xc) = puVar3 + uVar13 * 2;
        *(undefined4 **)(iVar14 + 8) = puVar3 + (iVar7 >> 3) * 2 + iVar12 * 2;
        *piVar11 = (int)puVar3;
      }
      else {
        puVar2 = puVar5 + iVar12 * 2;
        *(undefined4 **)(iVar14 + 8) = puVar5 + iVar12 * 2;
        puVar10 = puVar5;
        if (puVar2 < puVar5) {
          puVar6 = puVar5 + iVar12 * -2;
          puVar3 = puVar5;
          for (puVar9 = puVar6; puVar9 != puVar5; puVar9 = puVar9 + 2) {
            if (puVar3 != (undefined4 *)0x0) {
              uVar15 = puVar9[1];
              *puVar3 = *puVar9;
              puVar3[1] = uVar15;
            }
            puVar3 = puVar3 + 2;
          }
          if (puVar5 < puVar6) {
            iVar14 = (int)puVar6 - (int)puVar5;
            if (0 < iVar14) {
              puVar3 = puVar6;
              if (iVar14 * 0x10000000 < 0) {
                puVar3 = puVar6 + -2;
                puVar10 = puVar5 + -2;
                uVar15 = puVar6[-1];
                *puVar10 = *puVar3;
                puVar5[-1] = uVar15;
              }
              for (iVar14 = iVar14 >> 4; iVar14 != 0; iVar14 = iVar14 + -1) {
                uVar15 = puVar3[-1];
                puVar10[-2] = puVar3[-2];
                puVar10[-1] = uVar15;
                uVar15 = puVar3[-3];
                puVar10[-4] = puVar3[-4];
                puVar10[-3] = uVar15;
                puVar3 = puVar3 + -4;
                puVar10 = puVar10 + -4;
              }
            }
          }
          else {
            while (puVar5 != puVar6) {
              uVar15 = puVar6[-1];
              puVar10[-2] = puVar6[-2];
              puVar10[-1] = uVar15;
              puVar10 = puVar10 + -2;
              puVar6 = puVar6 + -2;
            }
          }
          if (puVar5 < puVar2) {
            iVar14 = (int)puVar2 - (int)puVar5;
            if (0 < iVar14) {
              if (iVar14 * 0x10000000 < 0) {
                *puVar5 = 0;
                puVar5[1] = 0;
                puVar5 = puVar5 + 2;
              }
              iVar14 = iVar14 >> 4;
              if (iVar14 != 0) {
                puVar10 = (undefined4 *)0x0;
                do {
                  *puVar5 = 0;
                  puVar5[1] = 0;
                  puVar5[2] = 0;
                  puVar5[3] = 0;
                  puVar5 = puVar5 + 4;
                  iVar14 = iVar14 + -1;
                } while (iVar14 != 0);
              }
            }
          }
          else {
            for (; puVar5 != puVar2; puVar5 = puVar5 + 2) {
              *puVar5 = 0;
              puVar5[1] = 0;
            }
          }
        }
        else {
          for (; iVar12 != 0; iVar12 = iVar12 + -1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = 0;
              puVar5[1] = 0;
            }
            puVar5 = puVar5 + 2;
          }
        }
      }
    }
  }
  else if ((uVar8 < uVar13) && (puVar10 = puVar2 + uVar8 * 2, puVar2 != puVar5)) {
    puVar2 = puVar10;
    if (puVar10 < puVar5) {
      if (0 < (int)puVar5 - (int)puVar10) {
        for (iVar12 = (int)puVar5 - (int)puVar10 >> 4; iVar12 != 0; iVar12 = iVar12 + -1) {
        }
      }
    }
    else {
      for (; puVar2 != puVar5; puVar2 = puVar2 + 2) {
      }
    }
    *(uint *)(iVar14 + 8) = (int)puVar5 - ((int)puVar5 - (int)puVar10 & 0xfffffff8U);
  }
  puVar5 = *(undefined4 **)(*(int *)(param_1 + 4) + 4);
  puVar2 = *(undefined4 **)(*(int *)(param_1 + 4) + 8);
  if (puVar2 < puVar5) {
    puVar10 = (undefined4 *)0x0;
  }
  if (puVar5 < puVar2) {
    iVar14 = (int)puVar2 - (int)puVar5;
    if (0 < iVar14) {
      if (iVar14 * 0x10000000 < 0) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5 = puVar5 + 2;
      }
      for (iVar14 = iVar14 >> 4; iVar14 != 0; iVar14 = iVar14 + -1) {
        *puVar5 = 0;
        puVar5[1] = 0;
        puVar5[2] = 0;
        puVar5[3] = 0;
        puVar5 = puVar5 + 4;
      }
    }
  }
  else {
    for (; puVar5 != puVar2; puVar5 = puVar5 + 2) {
      *puVar5 = 0;
      puVar5[1] = puVar10;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x10) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x20) = 0;
  *(undefined4 *)(iVar14 + 0x24) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x18) = 0;
  *(undefined4 *)(iVar14 + 0x1c) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x40) = 0;
  *(undefined4 *)(iVar14 + 0x44) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x38) = 0;
  *(undefined4 *)(iVar14 + 0x3c) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x30) = 0;
  *(undefined4 *)(iVar14 + 0x34) = 0;
  iVar14 = *(int *)(param_1 + 4);
  *(undefined4 *)(iVar14 + 0x28) = 0;
  *(undefined4 *)(iVar14 + 0x2c) = 0;
  return;
}



void fn_0012881c(void)

{
  int iVar1;
  
  iVar1 = DAT_008bf77c;
  if (DAT_008bf77c != 0) {
    fn_0012b6ec(2,DAT_008bf77c + 4);
    fn_002feef8(iVar1);
    DAT_008bf77c = 0;
  }
  return;
}



undefined4 * fn_001287b4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)0x0;
  if ((DAT_0089a509 & DAT_0089a508) != 0) {
    puVar1 = &DAT_0089a510;
  }
  return puVar1;
}


