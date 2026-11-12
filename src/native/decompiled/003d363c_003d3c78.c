#include "003d363c_003d3c78.h"



void fn_003d3c78(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_50 [32];
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  uVar12 = 0;
  iStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  while( true ) {
    if (param_3 == 0) {
      fn_001028d4(auStack_50,(char *)&DAT_003d3f10,uVar12);
    }
    else {
      fn_001028d4(auStack_50,param_3,uVar12);
    }
    iVar2 = fn_00172c98(local_2c,auStack_50);
    if (iVar2 == 0) break;
    piVar10 = *(int **)(param_1 + 0x88);
    puVar11 = (uint *)(param_1 + 0x84);
    if (piVar10 == *(int **)(param_1 + 0x8c)) {
      uVar1 = (int)((int)piVar10 - *puVar11) >> 2;
      if (uVar1 < (uint)((int)((int)*(int **)(param_1 + 0x8c) - *puVar11) >> 2)) {
        *(int **)(param_1 + 0x88) = piVar10 + 1;
        if (piVar10 != (int *)0x0) {
          *piVar10 = piVar10[-1];
        }
        piVar6 = piVar10 + -1;
        piVar7 = piVar10;
        if (piVar10 < piVar6) {
          if (0 < (int)piVar6 - (int)piVar10) {
            iVar4 = (int)piVar6 - (int)piVar10 >> 2;
            iVar5 = 0;
            do {
              iVar4 = iVar4 + -1;
              piVar10[iVar5 + -1] = piVar6[iVar5 + -1];
              iVar5 = iVar5 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          while (piVar10 != piVar6) {
            piVar6 = piVar6 + -1;
            piVar7[-1] = *piVar6;
            piVar7 = piVar7 + -1;
          }
        }
        *piVar10 = iVar2;
      }
      else {
        uVar13 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar13 < uVar1 + 0x20) {
          uVar13 = uVar1 + 0x20;
        }
        piVar3 = (int *)fn_00100fc6(uVar13 << 2,0);
        piVar7 = piVar3;
        for (piVar6 = (int *)*puVar11; piVar6 != piVar10; piVar6 = piVar6 + 1) {
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar6;
          }
          piVar7 = piVar7 + 1;
        }
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar3);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar2;
        }
        piVar7 = *(int **)(param_1 + 0x88);
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar3);
        for (; piVar10 != piVar7; piVar10 = piVar10 + 1) {
          piVar6 = piVar6 + 1;
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar10;
          }
        }
        uVar8 = *(uint *)(param_1 + 0x88);
        uVar9 = *puVar11;
        uVar1 = uVar9;
        if (uVar8 <= uVar9) {
          for (; uVar1 != uVar8; uVar1 = uVar1 + 4) {
          }
        }
        fn_001008c4(uVar9,(int)(*(int *)(param_1 + 0x8c) - uVar9) >> 2,0);
        *(int **)(param_1 + 0x8c) = piVar3 + uVar13;
        *(int **)(param_1 + 0x88) = piVar3 + ((int)(uVar8 - uVar9) >> 2) + 1;
        *puVar11 = (uint)piVar3;
      }
    }
    else {
      *(int **)(param_1 + 0x88) = piVar10 + 1;
      if (piVar10 != (int *)0x0) {
        *piVar10 = iVar2;
      }
    }
    if (uVar12 < (uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2)) {
      iVar4 = fn_00145b00(0x30,&DAT_00812c8c);
      piVar10 = (int *)0x0;
      if (iVar4 != 0) {
        piVar10 = (int *)fn_002b20c0(iVar4,*(undefined4 *)(param_1 + 4),iVar2,1,
                                      *(undefined4 *)(param_1 + 0x48),1,0);
      }
      (**(code **)(*piVar10 + 0x10))(piVar10);
      *(int **)(*(int *)(param_1 + 0x78) + uVar12 * 4) = piVar10;
    }
    else {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    uVar12 = uVar12 + 1;
  }
  return;
}



void fn_003d3c74(int param_1,undefined1 param_2)

{
  *(undefined1 *)(*(int *)(param_1 + 0x44) + 8) = param_2;
  return;
}



void fn_003d3c40(undefined4 *param_1)

{
  param_1[3] = &DAT_008f9cf4;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *(undefined1 *)((int)param_1 + 0x13) = 0xff;
  return;
}



/* WARNING: Removing unreachable block (ram,0x003d3824) */
/* WARNING: Removing unreachable block (ram,0x003d3830) */
/* WARNING: Removing unreachable block (ram,0x003d37fc) */
/* WARNING: Removing unreachable block (ram,0x003d3800) */
/* WARNING: Removing unreachable block (ram,0x003d3804) */
/* WARNING: Removing unreachable block (ram,0x003d3808) */
/* WARNING: Removing unreachable block (ram,0x003d380c) */
/* WARNING: Removing unreachable block (ram,0x003d384c) */
/* WARNING: Removing unreachable block (ram,0x003d385c) */
/* WARNING: Removing unreachable block (ram,0x003d3834) */
/* WARNING: Removing unreachable block (ram,0x003d383c) */
/* WARNING: Removing unreachable block (ram,0x003d3840) */
/* WARNING: Removing unreachable block (ram,0x003d3844) */

undefined4 fn_003d363c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40 [2];
  uint local_38 [3];
  int local_2c;
  
  local_58 = 1;
  iVar1 = fn_001481c8(param_1[0x19],*param_2,&DAT_003d3994,1);
  param_1[0x1a] = iVar1;
  local_58 = 1;
  local_50 = 0;
  local_54 = 1;
  iVar1 = fn_001480d0(param_1[0x19],iVar1,param_2[1],&DAT_003d3998);
  param_1[0x1b] = iVar1;
  local_2c = fn_00178f9c(param_1[0x19],iVar1);
  puVar15 = (uint *)(param_1 + 0x1e);
  param_1[0x1c] = *(int *)(local_2c + 0x10);
  puVar14 = (undefined4 *)param_1[0x1f];
  puVar2 = (undefined4 *)param_1[0x1e];
  uVar8 = (int)puVar14 - (int)puVar2 >> 2;
  if (uVar8 < 2) {
    iVar1 = 2 - uVar8;
    if (iVar1 != 0) {
      uVar8 = iVar1 + uVar8;
      if ((uint)(param_1[0x20] - (int)puVar2 >> 2) < uVar8) {
        local_38[0] = uVar8;
        uVar5 = (int)(param_1[0x1f] - *puVar15) >> 2;
        local_40[0] = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
        if (local_40[0] < uVar5 + 0x20) {
          local_40[0] = uVar5 + 0x20;
        }
        puVar10 = local_40;
        if (local_40[0] <= uVar8) {
          puVar10 = local_38;
        }
        uVar8 = *puVar10;
        puVar3 = (undefined4 *)fn_00100fc6(uVar8 << 2,0);
        puVar11 = puVar3;
        for (puVar2 = (undefined4 *)*puVar15; puVar2 != puVar14; puVar2 = puVar2 + 1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar2;
          }
          puVar11 = puVar11 + 1;
        }
        puVar2 = (undefined4 *)(((int)puVar14 - *puVar15 & 0xfffffffc) + (int)puVar3);
        for (iVar6 = iVar1; iVar6 != 0; iVar6 = iVar6 + -1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = 0;
          }
          puVar2 = puVar2 + 1;
        }
        puVar11 = (undefined4 *)param_1[0x1f];
        puVar2 = puVar3 + iVar1 + ((int)((int)puVar14 - *puVar15) >> 2);
        for (; puVar14 != puVar11; puVar14 = puVar14 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar14;
          }
          puVar2 = puVar2 + 1;
        }
        uVar4 = *puVar15;
        uVar12 = param_1[0x1f];
        uVar5 = uVar4;
        if (uVar12 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar12);
        }
        fn_001008c4(uVar4,(int)(param_1[0x20] - uVar4) >> 2,0);
        param_1[0x20] = (int)(puVar3 + uVar8);
        param_1[0x1f] = (int)(puVar3 + ((int)(uVar12 - uVar4) >> 2) + iVar1);
        *puVar15 = (uint)puVar3;
      }
      else {
        puVar2 = puVar14 + iVar1;
        param_1[0x1f] = (int)(puVar14 + iVar1);
        if (puVar2 < puVar14) {
          puVar9 = puVar14 + -iVar1;
          puVar3 = puVar14;
          for (puVar11 = puVar9; puVar11 != puVar14; puVar11 = puVar11 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar11;
            }
            puVar3 = puVar3 + 1;
          }
          puVar11 = puVar14;
          if (puVar14 < puVar9) {
            if (0 < (int)puVar9 - (int)puVar14) {
              iVar1 = (int)puVar9 - (int)puVar14 >> 2;
              iVar6 = 0;
              do {
                iVar1 = iVar1 + -1;
                puVar14[iVar6 + -1] = puVar9[iVar6 + -1];
                iVar6 = iVar6 + -1;
              } while (iVar1 != 0);
            }
          }
          else {
            while (puVar14 != puVar9) {
              puVar9 = puVar9 + -1;
              puVar11[-1] = *puVar9;
              puVar11 = puVar11 + -1;
            }
          }
          if (puVar14 < puVar2) {
            iVar1 = (int)puVar2 - (int)puVar14;
            if (0 < iVar1) {
              puVar2 = puVar14;
              if (iVar1 * 0x20000000 < 0) {
                puVar2 = puVar14 + 1;
                *puVar14 = 0;
              }
              for (iVar1 = iVar1 >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
                puVar14 = puVar2 + 1;
                *puVar2 = 0;
                puVar2 = puVar2 + 2;
                *puVar14 = 0;
              }
            }
          }
          else {
            for (; puVar14 != puVar2; puVar14 = puVar14 + 1) {
              *puVar14 = 0;
            }
          }
        }
        else {
          for (; iVar1 != 0; iVar1 = iVar1 + -1) {
            if (puVar14 != (undefined4 *)0x0) {
              *puVar14 = 0;
            }
            puVar14 = puVar14 + 1;
          }
        }
      }
    }
  }
  else if ((2 < uVar8) && (puVar11 = puVar2 + 2, puVar2 != puVar14)) {
    puVar2 = puVar11;
    if (puVar14 < puVar11) {
      do {
        puVar2 = puVar2 + 1;
      } while (puVar2 != puVar14);
    }
    param_1[0x1f] = (int)puVar14 - ((int)puVar14 - (int)puVar11 & 0xfffffffcU);
  }
  (**(code **)(*param_1 + 0x124))(param_1,local_2c,0);
  iVar1 = (**(code **)(*(int *)param_1[0x1c] + 0x2c))((int *)param_1[0x1c],(char *)&DAT_003d3c28,1);
  iVar6 = fn_00145b00(0x5c,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar6 != 0) {
    if (iVar1 == 0) {
      iVar1 = param_1[0x1c];
    }
    piVar7 = (int *)fn_0025e920(iVar6,param_1[1],iVar1);
  }
  piVar13 = (int *)param_1[0x25];
  if (piVar13 != piVar7) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    param_1[0x25] = (int)piVar7;
  }
  (**(code **)(*(int *)param_1[0x25] + 0x10))((int *)param_1[0x25],param_1[0x12]);
  iVar1 = fn_00145b00(0xe4,&DAT_00812c8c);
  piVar7 = (int *)0x0;
  if (iVar1 != 0) {
    piVar7 = (int *)fn_001caa80(iVar1,param_1[1],0);
  }
  piVar13 = (int *)param_1[0x26];
  if (piVar13 != piVar7) {
    if (piVar13 != (int *)0x0) {
      (**(code **)(*piVar13 + 4))(piVar13);
    }
    param_1[0x26] = (int)piVar7;
  }
  *(int **)(param_1[0x26] + 8) = param_1;
  (**(code **)(*(int *)param_1[0x26] + 0x24))((int *)param_1[0x26],2,1);
  *(undefined1 *)(param_1[0x26] + 0x45) = 0;
  *(undefined1 *)(param_1[0x26] + 0x44) = 1;
  *(undefined4 *)(param_1[0x26] + 0x10) = 0x100094e;
  fn_003d3f24(param_1,local_2c,param_2);
  fn_00245330(param_1,param_1[0x26]);
  uVar8 = 0;
  if (param_1[0x1f] - param_1[0x1e] >> 2 != 0) {
    do {
      fn_001c9d44(param_1[0x26],uVar8,*(undefined4 *)(*(int *)(param_1[0x1e] + uVar8 * 4) + 0x1c),0
                  );
      uVar8 = uVar8 + 1;
    } while (uVar8 < (uint)(param_1[0x1f] - param_1[0x1e] >> 2));
  }
  fn_002b20a4(*(undefined4 *)(param_1[0x1e] + param_2[2] * 4),1);
  (**(code **)(*(int *)param_1[0x26] + 0x30))((int *)param_1[0x26],&local_4c,0);
  iVar1 = fn_001c9db4(param_1[0x26],local_4c);
  fn_00688ff8();
  local_48 = *(undefined4 *)(iVar1 + 0x3c);
  local_44 = *(undefined4 *)(iVar1 + 0x40);
  fn_0025e7cc(param_1[0x25],&local_58);
  fn_0025e378(param_1[0x25],&local_48);
  (**(code **)(*param_1 + 0x120))(param_1);
  (**(code **)(*(int *)param_1[0x26] + 0x2c))((int *)param_1[0x26],param_2[2],0);
  return 1;
}


