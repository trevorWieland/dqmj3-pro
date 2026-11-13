#include "0059d948_0059e0f8.h"



void fn_0059e0f8(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  fn_003e5bbc();
  uVar2 = 0;
  if (*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xd0) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x14))();
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0xd4) - *(int *)(param_1 + 0xd0) >> 2));
  }
  return;
}



void fn_0059e074(int param_1,int param_2,int param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    fn_00394dc4(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),1);
    fn_00394db4(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),param_4);
    return;
  }
  fn_00394ddc();
  fn_00394dbc(*(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 4),param_4);
  return;
}



void fn_0059e040(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x10) + param_3 * 4);
  uVar2 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(param_2 + 0x20) = *(undefined4 *)(iVar1 + 0x20);
  *(undefined4 *)(param_2 + 0x24) = uVar2;
  *(byte *)(param_2 + 0x44) = *(byte *)(param_2 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0059d948(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,int param_5,
                 int param_6,uint param_7)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  int *piVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  uint local_60;
  uint local_5c [10];
  int iStack_34;
  undefined4 local_30;
  uint local_2c;
  undefined4 local_28;
  
  puVar12 = &local_60;
  puVar13 = &local_60;
  puVar11 = (uint *)(param_1 + 4);
  local_5c[0] = param_7;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  if (0x3fffffff < param_7) {
    local_60 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7658,&DAT_008c7658,param_7);
  }
  if ((uint)((int)(*(int *)(param_1 + 0xc) - *puVar11) >> 2) < local_5c[0]) {
    uVar16 = (int)(*(int *)(param_1 + 8) - *puVar11) >> 2;
    local_60 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_60 < uVar16 + 0x20) {
      local_60 = uVar16 + 0x20;
    }
    if (local_60 <= local_5c[0]) {
      puVar12 = local_5c;
    }
    uVar16 = *puVar12;
    puVar1 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
    puVar10 = *(undefined4 **)(param_1 + 8);
    puVar9 = puVar1;
    for (puVar7 = (undefined4 *)*puVar11; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar7;
      }
      puVar9 = puVar9 + 1;
    }
    uVar2 = *puVar11;
    uVar3 = uVar2;
    if (*(uint *)(param_1 + 8) < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != *(uint *)(param_1 + 8));
    }
    fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
    uVar3 = *puVar11;
    *puVar11 = (uint)puVar1;
    *(uint *)(param_1 + 8) = (*(int *)(param_1 + 8) - uVar3 & 0xfffffffc) + (int)puVar1;
    *(undefined4 **)(param_1 + 0xc) = puVar1 + uVar16;
  }
  puVar12 = (uint *)(param_1 + 0x10);
  local_5c[0] = param_7;
  if (0x3fffffff < param_7) {
    local_60 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7664,&DAT_008c7664,param_7);
  }
  if ((uint)((int)(*(int *)(param_1 + 0x18) - *puVar12) >> 2) < local_5c[0]) {
    uVar16 = (int)(*(int *)(param_1 + 0x14) - *puVar12) >> 2;
    local_60 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_60 < uVar16 + 0x20) {
      local_60 = uVar16 + 0x20;
    }
    if (local_60 <= local_5c[0]) {
      puVar13 = local_5c;
    }
    uVar16 = *puVar13;
    puVar1 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
    puVar10 = *(undefined4 **)(param_1 + 0x14);
    puVar9 = puVar1;
    for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      if (puVar9 != (undefined4 *)0x0) {
        *puVar9 = *puVar7;
      }
      puVar9 = puVar9 + 1;
    }
    uVar2 = *puVar12;
    uVar3 = uVar2;
    if (*(uint *)(param_1 + 0x14) < uVar2) {
      do {
        uVar3 = uVar3 + 4;
      } while (uVar3 != *(uint *)(param_1 + 0x14));
    }
    fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x18) - uVar2) >> 2,0);
    uVar3 = *puVar12;
    *(undefined4 **)(param_1 + 0x10) = puVar1;
    *(int *)(param_1 + 0x14) = (*(int *)(param_1 + 0x14) - uVar3 & 0xfffffffc) + (int)puVar1;
    *(undefined4 **)(param_1 + 0x18) = puVar1 + uVar16;
  }
  iVar15 = 0;
  if (0 < (int)param_7) {
    do {
      local_5c[1] = 0;
      local_5c[2] = 0;
      local_5c[3] = 0;
      local_5c[4] = 0;
      local_5c[5] = 0;
      local_5c[6] = 0;
      local_5c[7] = 0;
      local_5c[8] = 0;
      fn_00102908(local_5c + 1,0x20,DAT_008931fc,iVar15);
      iVar4 = fn_00172c98(local_28,local_5c + 1);
      if (iVar4 != 0) {
        iVar5 = fn_00145b00(0x20,&DAT_00812c8c);
        if (iVar5 == 0) {
          piVar17 = (int *)0x0;
        }
        else {
          local_60 = local_2c;
          piVar17 = (int *)fn_00394df4(iVar5,local_30,iVar4,1);
        }
        (**(code **)(*piVar17 + 0x10))(piVar17);
        fn_00102908(local_5c + 1,0x20,DAT_00893200);
        local_60 = fn_001828f0(local_28,local_5c + 1);
        puVar13 = *(uint **)(param_1 + 0x14);
        puVar12 = (uint *)(param_1 + 0x10);
        if (puVar13 == *(uint **)(param_1 + 0x18)) {
          uVar16 = (int)((int)puVar13 - *puVar12) >> 2;
          if (uVar16 < (uint)((int)((int)*(uint **)(param_1 + 0x18) - *puVar12) >> 2)) {
            *(uint **)(param_1 + 0x14) = puVar13 + 1;
            if (puVar13 != (uint *)0x0) {
              *puVar13 = puVar13[-1];
            }
            puVar12 = puVar13 + -1;
            puVar11 = puVar13;
            if (puVar13 < puVar12) {
              if (0 < (int)puVar12 - (int)puVar13) {
                iVar4 = (int)puVar12 - (int)puVar13 >> 2;
                iVar5 = 0;
                do {
                  iVar4 = iVar4 + -1;
                  puVar13[iVar5 + -1] = puVar12[iVar5 + -1];
                  iVar5 = iVar5 + -1;
                } while (iVar4 != 0);
              }
            }
            else {
              while (puVar13 != puVar12) {
                puVar12 = puVar12 + -1;
                puVar11[-1] = *puVar12;
                puVar11 = puVar11 + -1;
              }
            }
            *puVar13 = local_60;
          }
          else {
            local_5c[0] = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
            if (local_5c[0] < uVar16 + 0x20) {
              local_5c[0] = uVar16 + 0x20;
            }
            puVar6 = (uint *)fn_00100fc6(local_5c[0] << 2,0);
            puVar8 = puVar6;
            for (puVar11 = (uint *)*puVar12; puVar11 != puVar13; puVar11 = puVar11 + 1) {
              if (puVar8 != (uint *)0x0) {
                *puVar8 = *puVar11;
              }
              puVar8 = puVar8 + 1;
            }
            puVar11 = (uint *)(((int)puVar13 - *puVar12 & 0xfffffffc) + (int)puVar6);
            if (puVar11 != (uint *)0x0) {
              *puVar11 = local_60;
            }
            puVar8 = *(uint **)(param_1 + 0x14);
            puVar11 = (uint *)(((int)puVar13 - *puVar12 & 0xfffffffc) + (int)puVar6);
            for (; puVar13 != puVar8; puVar13 = puVar13 + 1) {
              puVar11 = puVar11 + 1;
              if (puVar11 != (uint *)0x0) {
                *puVar11 = *puVar13;
              }
            }
            uVar3 = *puVar12;
            uVar2 = *(uint *)(param_1 + 0x14);
            uVar16 = uVar3;
            if (uVar2 < uVar3) {
              do {
                uVar16 = uVar16 + 4;
              } while (uVar16 != uVar2);
            }
            fn_001008c4(uVar3,(int)(*(int *)(param_1 + 0x18) - uVar3) >> 2,0);
            *(uint **)(param_1 + 0x18) = puVar6 + local_5c[0];
            *(uint **)(param_1 + 0x14) = puVar6 + ((int)(uVar2 - uVar3) >> 2) + 1;
            *puVar12 = (uint)puVar6;
          }
        }
        else {
          *(uint **)(param_1 + 0x14) = puVar13 + 1;
          if (puVar13 != (uint *)0x0) {
            *puVar13 = local_60;
          }
        }
        if (param_5 < iVar15) {
          (**(code **)(*piVar17 + 0x20))(piVar17,0);
        }
        else {
          piVar14 = (int *)(param_6 + iVar15 * 8);
          if (*(int *)(*piVar14 + -4) != 0) {
            fn_00394ddc(piVar17,1);
            fn_00394dbc(piVar17,*piVar14);
          }
          if (*(int *)(piVar14[1] + -4) != 0) {
            fn_00394dc4(piVar17,1);
            fn_00394db4(piVar17,piVar14[1]);
          }
        }
        puVar7 = *(undefined4 **)(param_1 + 8);
        puVar13 = (uint *)(param_1 + 4);
        if (puVar7 == *(undefined4 **)(param_1 + 0xc)) {
          uVar16 = (int)((int)puVar7 - *puVar13) >> 2;
          if (uVar16 < (uint)((int)((int)*(undefined4 **)(param_1 + 0xc) - *puVar13) >> 2)) {
            *(undefined4 **)(param_1 + 8) = puVar7 + 1;
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = puVar7[-1];
            }
            puVar9 = puVar7 + -1;
            puVar1 = puVar7;
            if (puVar7 < puVar9) {
              if (0 < (int)puVar9 - (int)puVar7) {
                iVar4 = (int)puVar9 - (int)puVar7 >> 2;
                iVar5 = 0;
                do {
                  iVar4 = iVar4 + -1;
                  puVar7[iVar5 + -1] = puVar9[iVar5 + -1];
                  iVar5 = iVar5 + -1;
                } while (iVar4 != 0);
              }
            }
            else {
              while (puVar7 != puVar9) {
                puVar9 = puVar9 + -1;
                puVar1[-1] = *puVar9;
                puVar1 = puVar1 + -1;
              }
            }
            *puVar7 = piVar17;
          }
          else {
            local_60 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
            if (local_60 < uVar16 + 0x20) {
              local_60 = uVar16 + 0x20;
            }
            puVar10 = (undefined4 *)fn_00100fc6(local_60 << 2,0);
            puVar1 = puVar10;
            for (puVar9 = (undefined4 *)*puVar13; puVar9 != puVar7; puVar9 = puVar9 + 1) {
              if (puVar1 != (undefined4 *)0x0) {
                *puVar1 = *puVar9;
              }
              puVar1 = puVar1 + 1;
            }
            puVar9 = (undefined4 *)(((int)puVar7 - *puVar13 & 0xfffffffc) + (int)puVar10);
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = piVar17;
            }
            puVar1 = *(undefined4 **)(param_1 + 8);
            puVar9 = (undefined4 *)(((int)puVar7 - *puVar13 & 0xfffffffc) + (int)puVar10);
            for (; puVar7 != puVar1; puVar7 = puVar7 + 1) {
              puVar9 = puVar9 + 1;
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = *puVar7;
              }
            }
            uVar3 = *(uint *)(param_1 + 8);
            uVar2 = *puVar13;
            uVar16 = uVar2;
            if (uVar3 <= uVar2) {
              for (; uVar16 != uVar3; uVar16 = uVar16 + 4) {
              }
            }
            fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
            *(undefined4 **)(param_1 + 0xc) = puVar10 + local_60;
            *(undefined4 **)(param_1 + 8) = puVar10 + ((int)(uVar3 - uVar2) >> 2) + 1;
            *puVar13 = (uint)puVar10;
          }
        }
        else {
          *(undefined4 **)(param_1 + 8) = puVar7 + 1;
          if (puVar7 != (undefined4 *)0x0) {
            *puVar7 = piVar17;
          }
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 < (int)param_7);
  }
  return;
}


