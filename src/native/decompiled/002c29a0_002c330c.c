#include "002c29a0_002c330c.h"



void fn_002c330c(undefined4 *param_1)

{
  param_1[7] = &DAT_008f9cf4;
  param_1[8] = &DAT_008f9cf4;
  param_1[9] = &DAT_008f9cf4;
  param_1[10] = &DAT_008f9cf4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0xb) = 1;
  *(undefined1 *)((int)param_1 + 0x2d) = 0;
  *(undefined1 *)((int)param_1 + 0x2e) = 0;
  *(undefined1 *)((int)param_1 + 0x2f) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)((int)param_1 + 0x31) = 0;
  *(undefined1 *)((int)param_1 + 0x32) = 0;
  *(undefined1 *)((int)param_1 + 0x33) = 0xff;
  return;
}



void fn_002c32c4(int param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xac) ==
      (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2) *
      *(int *)(*(int *)(param_1 + 0x9c) + 0xcc) + param_2) {
    return;
  }
  fn_0031b474(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),param_3);
  return;
}



/* WARNING: Removing unreachable block (ram,0x002c2bb0) */
/* WARNING: Removing unreachable block (ram,0x002c2bbc) */
/* WARNING: Removing unreachable block (ram,0x002c2b88) */
/* WARNING: Removing unreachable block (ram,0x002c2b8c) */
/* WARNING: Removing unreachable block (ram,0x002c2b90) */
/* WARNING: Removing unreachable block (ram,0x002c2b94) */
/* WARNING: Removing unreachable block (ram,0x002c2b98) */
/* WARNING: Removing unreachable block (ram,0x002c2bd8) */
/* WARNING: Removing unreachable block (ram,0x002c2be8) */
/* WARNING: Removing unreachable block (ram,0x002c2bc0) */
/* WARNING: Removing unreachable block (ram,0x002c2bc8) */
/* WARNING: Removing unreachable block (ram,0x002c2bcc) */
/* WARNING: Removing unreachable block (ram,0x002c2bd0) */

undefined4 fn_002c29a0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int *extraout_r1;
  undefined4 *puVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar18 = param_2[2];
  iVar17 = param_2[5];
  if (*(char *)((int)param_2 + 0x2d) != '\0') {
    if (iVar17 < 1) {
      param_1[0x2b] = uVar18;
      uVar18 = uVar18 + 1;
    }
    else {
      param_1[0x2b] = iVar17;
      iVar17 = iVar17 + 1;
    }
  }
  iVar1 = fn_001481c8(param_1[0x19],*param_2,&DAT_002c2d2c,1,1);
  param_1[0x1a] = iVar1;
  local_30 = 0;
  puVar15 = (undefined4 *)&DAT_002c2d30;
  iVar1 = fn_001480d0(param_1[0x19],iVar1,param_2[1],&DAT_002c2d30,1,1);
  param_1[0x1b] = iVar1;
  local_2c = fn_00178f9c(param_1[0x19],iVar1);
  puVar16 = (uint *)(param_1 + 0x1e);
  param_1[0x1c] = *(int *)(local_2c + 0x10);
  puVar11 = (undefined4 *)param_1[0x1f];
  puVar14 = (undefined4 *)param_1[0x1e];
  uVar2 = (int)puVar11 - (int)puVar14 >> 2;
  if (uVar2 < uVar18) {
    iVar1 = uVar18 - uVar2;
    if (iVar1 != 0) {
      uVar2 = iVar1 + uVar2;
      if ((uint)(param_1[0x20] - (int)puVar14 >> 2) < uVar2) {
        local_30 = uVar2;
        uVar7 = (int)(param_1[0x1f] - *puVar16) >> 2;
        local_28 = uVar7 + (uVar7 >> 1) + (uVar7 >> 3);
        if (local_28 < uVar7 + 0x20) {
          local_28 = uVar7 + 0x20;
        }
        puVar4 = &local_28;
        if (local_28 <= uVar2) {
          puVar4 = &local_30;
        }
        uVar2 = *puVar4;
        puVar5 = (undefined4 *)fn_00100fc6(uVar2 << 2,0);
        puVar14 = puVar5;
        for (puVar15 = (undefined4 *)*puVar16; puVar15 != puVar11; puVar15 = puVar15 + 1) {
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = *puVar15;
          }
          puVar14 = puVar14 + 1;
        }
        puVar15 = (undefined4 *)((int)puVar5 + ((int)puVar11 - *puVar16 & 0xfffffffc));
        for (iVar9 = iVar1; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = 0;
          }
          puVar15 = puVar15 + 1;
        }
        puVar14 = (undefined4 *)param_1[0x1f];
        puVar15 = puVar5 + iVar1 + ((int)((int)puVar11 - *puVar16) >> 2);
        for (; puVar11 != puVar14; puVar11 = puVar11 + 1) {
          if (puVar15 != (undefined4 *)0x0) {
            *puVar15 = *puVar11;
          }
          puVar15 = puVar15 + 1;
        }
        uVar6 = *puVar16;
        uVar12 = param_1[0x1f];
        uVar7 = uVar6;
        if (uVar12 < uVar6) {
          do {
            uVar7 = uVar7 + 4;
          } while (uVar7 != uVar12);
        }
        fn_001008c4(uVar6,(int)(param_1[0x20] - uVar6) >> 2,0);
        param_1[0x20] = (int)(puVar5 + uVar2);
        *puVar16 = (uint)puVar5;
        param_1[0x1f] = (int)(puVar5 + ((int)(uVar12 - uVar6) >> 2) + iVar1);
      }
      else {
        puVar15 = puVar11 + iVar1;
        param_1[0x1f] = (int)(puVar11 + iVar1);
        if (puVar15 < puVar11) {
          puVar3 = puVar11 + -iVar1;
          puVar5 = puVar11;
          for (puVar14 = puVar3; puVar14 != puVar11; puVar14 = puVar14 + 1) {
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar14;
            }
            puVar5 = puVar5 + 1;
          }
          puVar14 = puVar11;
          if (puVar11 < puVar3) {
            if (0 < (int)puVar3 - (int)puVar11) {
              iVar1 = (int)puVar3 - (int)puVar11 >> 2;
              iVar9 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar11[iVar9 + -1] = puVar3[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar11 != puVar3) {
              puVar3 = puVar3 + -1;
              puVar14[-1] = *puVar3;
              puVar14 = puVar14 + -1;
            }
          }
          if (puVar11 < puVar15) {
            iVar1 = (int)puVar15 - (int)puVar11;
            if (0 < iVar1) {
              puVar15 = puVar11;
              if (iVar1 * 0x20000000 < 0) {
                puVar15 = puVar11 + 1;
                *puVar11 = 0;
              }
              for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar11 = puVar15 + 1;
                *puVar15 = 0;
                puVar15 = puVar15 + 2;
                *puVar11 = 0;
              }
            }
          }
          else {
            for (; puVar11 != puVar15; puVar11 = puVar11 + 1) {
              *puVar11 = 0;
            }
          }
        }
        else {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            if (puVar11 != (undefined4 *)0x0) {
              *puVar11 = 0;
            }
            puVar11 = puVar11 + 1;
          }
        }
      }
    }
  }
  else {
    if (uVar18 != uVar2) {
      puVar15 = puVar14 + uVar18;
    }
    if (uVar18 != uVar2 && puVar14 != puVar11) {
      puVar14 = puVar15;
      if (puVar11 <= puVar15) {
        for (; puVar14 != puVar11; puVar14 = puVar14 + 1) {
        }
      }
      param_1[0x1f] = (int)puVar11 - ((int)puVar11 - (int)puVar15 & 0xfffffffcU);
    }
  }
  uVar8 = (**(code **)(*(int *)param_1[0x1c] + 0x2c))((int *)param_1[0x1c],(char *)&DAT_002c311c,1);
  (**(code **)(*param_1 + 0x128))(param_1,local_2c,uVar8,0);
  iVar1 = (**(code **)(*(int *)param_1[0x1c] + 0x2c))((int *)param_1[0x1c],(char *)&DAT_002c3130,1);
  iVar9 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar10 = (int *)0x0;
  if (iVar9 != 0) {
    if (iVar1 == 0) {
      iVar1 = param_1[0x1c];
    }
    piVar10 = (int *)fn_0025e920(iVar9,param_1[1],iVar1);
  }
  piVar13 = (int *)param_1[0x26];
  if (piVar13 != piVar10) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    param_1[0x26] = (int)piVar10;
  }
  (**(code **)(*(int *)param_1[0x26] + 0x10))((int *)param_1[0x26],param_1[0x12]);
  iVar1 = fn_00145b00(0xe8,&DAT_00812c8c);
  piVar10 = (int *)0x0;
  if (iVar1 != 0) {
    piVar10 = (int *)fn_0025f31c(iVar1,param_1[1],0);
  }
  piVar13 = (int *)param_1[0x27];
  if (piVar13 != piVar10) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
      piVar13 = extraout_r1;
    }
    param_1[0x27] = (int)piVar10;
  }
  if (iVar17 <= (int)uVar18) {
    piVar13 = (int *)&DAT_00000001;
  }
  *(int **)(param_1[0x27] + 8) = param_1;
  if ((int)uVar18 < iVar17) {
    piVar13 = (int *)fn_00300f74(iVar17 + uVar18 + -1,uVar18);
    iVar1 = param_1[0x27];
  }
  else {
    iVar1 = param_1[0x27];
  }
  *(int **)(iVar1 + 200) = piVar13;
  fn_0025f2d0(param_1[0x27],param_2[4]);
  iVar1 = fn_00172c98(local_2c,(char *)&DAT_002c3144);
  if (iVar1 != 0) {
    iVar9 = fn_00145b00(0x30,&DAT_00812c8c);
    if (iVar9 == 0) {
      piVar10 = (int *)0x0;
    }
    else {
      local_30 = 0;
      piVar10 = (int *)fn_002b20c0(iVar9,param_1[1],iVar1,(int)*(char *)((int)param_2 + 0x2d),
                                    param_1[0x12],1);
    }
    piVar13 = (int *)param_1[0x25];
    if (piVar13 != piVar10) {
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))();
      }
      param_1[0x25] = (int)piVar10;
    }
    (**(code **)(*(int *)param_1[0x25] + 0x10))();
    fn_002b1fa0(param_1[0x25],param_2[10],1);
  }
  if (0 < iVar17) {
    *(int *)(param_1[0x27] + 0xe4) = iVar17;
  }
  (**(code **)(*(int *)param_1[0x27] + 0x24))((int *)param_1[0x27],1,uVar18);
  *(undefined1 *)(param_1[0x27] + 0x45) = 1;
  *(undefined1 *)(param_1[0x27] + 0x44) = 0;
  *(undefined4 *)(param_1[0x27] + 0x10) = 0x100094e;
  (**(code **)(*(int *)param_1[0x27] + 0x2c))((int *)param_1[0x27],0,param_2[3]);
  fn_002c3acc(param_1,local_2c,param_2);
  uVar8 = param_2[4];
  iVar17 = fn_00172c98(local_2c,(char *)&DAT_002c373c);
  if (iVar17 != 0) {
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      piVar10 = (int *)fn_00307cc4(iVar1,param_1[1],iVar17,(int)*(char *)(param_2 + 0xb),
                                    param_1[0x12]);
    }
    piVar13 = (int *)param_1[0x24];
    if (piVar13 != piVar10) {
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
      param_1[0x24] = (int)piVar10;
    }
    (**(code **)(*(int *)param_1[0x24] + 0x10))();
    *(undefined4 *)(param_1[0x24] + 0x34) = *(undefined4 *)(param_1[0x27] + 200);
    *(undefined4 *)(param_1[0x24] + 0x3c) = uVar8;
  }
  iVar17 = fn_00172c98(local_2c,(char *)&DAT_002c3d50);
  if (iVar17 != 0) {
    iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      piVar10 = (int *)fn_0037e6b4(iVar1,param_1[1],iVar17,(int)*(char *)((int)param_2 + 0x2e),
                                    param_1[0x12]);
    }
    piVar13 = (int *)param_1[0x28];
    if (piVar13 != piVar10) {
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
      param_1[0x28] = (int)piVar10;
    }
    (**(code **)(*(int *)param_1[0x28] + 0x10))();
    if (*(char *)((int)param_2 + 0x2e) != '\0') {
      fn_0037e698(param_1[0x28],param_2[8]);
    }
  }
  iVar17 = fn_00172c98(local_2c,&DAT_002c4688);
  if (iVar17 != 0) {
    iVar1 = fn_00145b00(0x24,&DAT_00812c8c);
    piVar10 = (int *)0x0;
    if (iVar1 != 0) {
      piVar10 = (int *)fn_00243834(iVar1,param_1[1],iVar17,(int)*(char *)((int)param_2 + 0x2f),
                                    param_1[0x12]);
    }
    piVar13 = (int *)param_1[0x29];
    if (piVar13 != piVar10) {
      if (piVar13 != (int *)0x0) {
        (**(code **)(*piVar13 + 4))(piVar13);
      }
      param_1[0x29] = (int)piVar10;
    }
    (**(code **)(*(int *)param_1[0x29] + 0x10))();
    if (*(char *)((int)param_2 + 0x2f) != '\0') {
      fn_00243550(param_1[0x29],param_2[9]);
    }
  }
  (**(code **)(*param_1 + 300))(param_1);
  fn_00245330(param_1,param_1[0x27]);
  uVar18 = 0;
  if (param_1[0x1f] - param_1[0x1e] >> 2 != 0) {
    do {
      fn_001c9d44(param_1[0x27],uVar18,*(undefined4 *)(*(int *)(param_1[0x1e] + uVar18 * 4) + 0x14)
                   ,0);
      uVar18 = uVar18 + 1;
    } while (uVar18 < (uint)(param_1[0x1f] - param_1[0x1e] >> 2));
  }
  (**(code **)(*param_1 + 0x130))(param_1,param_2[3]);
  (**(code **)(*param_1 + 0x124))(param_1);
  if ((*(int *)(param_1[0x27] + 200) < 2) && (piVar10 = (int *)param_1[0x24], piVar10 != (int *)0x0)
     ) {
    (**(code **)(*piVar10 + 0x20))(piVar10,0);
  }
  return 1;
}


