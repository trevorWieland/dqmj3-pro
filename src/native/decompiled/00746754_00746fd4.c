#include "00746754_00746fd4.h"



int * fn_00746fd4(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 100) + 0x10);
  piVar1 = (int *)(**(code **)(*piVar1 + 0x2c))(piVar1,(&DAT_007bb4ec)[param_2],1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) {
        return piVar1;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return (int *)0x0;
}



/* WARNING: Removing unreachable block (ram,0x00746ed0) */
/* WARNING: Removing unreachable block (ram,0x00746f0c) */

void fn_00746ea0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0039c4c8();
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  for (puVar1 = *(undefined4 **)(param_1 + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xb8);
  for (puVar1 = *(undefined4 **)(param_1 + 0xb4); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x00746d9c) */
/* WARNING: Removing unreachable block (ram,0x00746dd8) */

void fn_00746d6c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0022cf0c();
  puVar2 = *(undefined4 **)(param_1 + 0xa0);
  for (puVar1 = *(undefined4 **)(param_1 + 0x9c); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))((int *)*puVar1);
  }
  puVar2 = *(undefined4 **)(param_1 + 0xac);
  for (puVar1 = *(undefined4 **)(param_1 + 0xa8); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    (**(code **)(*(int *)*puVar1 + 0x14))();
  }
  return;
}



/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffcc : 0x00746a1c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * fn_00746754(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  uVar13 = 0;
  iVar10 = *param_1;
  local_2c = param_1[1];
  local_28 = param_2;
  if (*(int *)(iVar10 + 8) - *(int *)(iVar10 + 4) >> 4 != 0) {
    do {
      puVar15 = (undefined4 *)(*(int *)(iVar10 + 4) + uVar13 * 0x10);
      iVar1 = (**(code **)(*(int *)*puVar15 + 0xc))((int *)*puVar15,local_2c);
      if (iVar1 != 0) {
        puVar2 = (undefined4 *)puVar15[2];
        puVar14 = puVar15 + 1;
        if (puVar2 == (undefined4 *)puVar15[3]) {
          uVar13 = (int)((int)puVar2 - *puVar14) >> 2;
          if ((uint)((int)((int)puVar15[3] - *puVar14) >> 2) <= uVar13) {
            uVar16 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
            if (uVar16 < uVar13 + 0x20) {
              uVar16 = uVar13 + 0x20;
            }
            puVar3 = (undefined4 *)fn_00100fc6(uVar16 << 2,0);
            puVar8 = puVar3;
            for (puVar7 = (undefined4 *)*puVar14; puVar7 != puVar2; puVar7 = puVar7 + 1) {
              if (puVar8 != (undefined4 *)0x0) {
                *puVar8 = *puVar7;
              }
              puVar8 = puVar8 + 1;
            }
            puVar7 = (undefined4 *)(((int)puVar2 - *puVar14 & 0xfffffffc) + (int)puVar3);
            if (puVar7 != (undefined4 *)0x0) {
              *puVar7 = local_28;
            }
            puVar8 = (undefined4 *)puVar15[2];
            puVar7 = (undefined4 *)(((int)puVar2 - *puVar14 & 0xfffffffc) + (int)puVar3);
            for (; puVar2 != puVar8; puVar2 = puVar2 + 1) {
              puVar7 = puVar7 + 1;
              if (puVar7 != (undefined4 *)0x0) {
                *puVar7 = *puVar2;
              }
            }
            uVar4 = *puVar14;
            uVar9 = puVar15[2];
            uVar13 = uVar4;
            if (uVar9 < uVar4) {
              do {
                uVar13 = uVar13 + 4;
              } while (uVar13 != uVar9);
            }
            fn_001008c4(uVar4,(int)(puVar15[3] - uVar4) >> 2,0);
            puVar15[3] = puVar3 + uVar16;
            puVar15[2] = puVar3 + ((int)(uVar9 - uVar4) >> 2) + 1;
            *puVar14 = (uint)puVar3;
            return param_1;
          }
          puVar15[2] = puVar2 + 1;
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = puVar2[-1];
          }
          puVar15 = puVar2 + -1;
          puVar7 = puVar2;
          if (puVar2 < puVar15) {
            iVar10 = (int)puVar15 - (int)puVar2;
            if (0 < iVar10) {
              if (iVar10 * 0x20000000 < 0) {
                puVar15 = puVar2 + -2;
                puVar7 = puVar2 + -1;
                *puVar7 = *puVar15;
              }
              for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
                puVar7[-1] = puVar15[-1];
                puVar15 = puVar15 + -2;
                puVar7 = puVar7 + -2;
                *puVar7 = *puVar15;
              }
            }
          }
          else {
            while (puVar2 != puVar15) {
              puVar15 = puVar15 + -1;
              puVar7[-1] = *puVar15;
              puVar7 = puVar7 + -1;
            }
          }
          *puVar2 = local_28;
          return param_1;
        }
        puVar15[2] = puVar2 + 1;
        if (puVar2 == (undefined4 *)0x0) {
          return param_1;
        }
        *puVar2 = local_28;
        return param_1;
      }
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)(*(int *)(iVar10 + 8) - *(int *)(iVar10 + 4) >> 4));
  }
  local_48 = (undefined4 *)fn_00145b00(0xc,&DAT_00812c8c);
  if (local_48 != (undefined4 *)0x0) {
    local_48[2] = local_2c;
    *local_48 = &DAT_00851e4c;
  }
  local_38 = local_28;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_34 = 0x80;
  local_30 = 0x20;
  puVar7 = (undefined4 *)fn_00100fc6(0x200,0);
  puVar2 = puVar7;
  for (puVar15 = local_44; puVar15 != local_40; puVar15 = puVar15 + 1) {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar15;
    }
    puVar2 = puVar2 + 1;
  }
  puVar15 = local_44;
  if (local_40 <= local_44) {
    for (; puVar15 != local_40; puVar15 = puVar15 + 1) {
    }
  }
  fn_001008c4(local_44,(int)local_3c - (int)local_44 >> 2,0);
  local_3c = puVar7 + 0x80;
  local_40 = (undefined4 *)(((int)local_40 - (int)local_44 & 0xfffffffcU) + (int)puVar7);
  local_44 = puVar7;
  if (local_40 == local_3c) {
    fn_0079ce44(&local_44,local_40,&local_38);
    puVar15 = local_40;
  }
  else {
    puVar15 = local_40 + 1;
    if (local_40 != (undefined4 *)0x0) {
      *local_40 = local_38;
    }
  }
  local_40 = puVar15;
  piVar11 = (int *)(iVar10 + 8);
  puVar15 = (undefined4 *)*piVar11;
  piVar12 = (int *)(iVar10 + 4);
  if (puVar15 == *(undefined4 **)(iVar10 + 0xc)) {
    uVar13 = (int)puVar15 - *piVar12 >> 4;
    if (uVar13 < (uint)((int)*(undefined4 **)(iVar10 + 0xc) - *piVar12 >> 4)) {
      *piVar11 = (int)(puVar15 + 4);
      if (puVar15 != (undefined4 *)0x0) {
        fn_002d177c(puVar15,puVar15 + -4);
      }
      puVar2 = puVar15;
      puVar7 = puVar15 + -4;
      while (puVar15 != puVar7) {
        puVar2[-4] = puVar7[-4];
        fn_0079d664(puVar2 + -3,puVar7 + -3);
        puVar2 = puVar2 + -4;
        puVar7 = puVar7 + -4;
      }
      *puVar15 = local_48;
      fn_0079d664(puVar15 + 1,&local_44);
    }
    else {
      uVar16 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
      if (uVar16 < uVar13 + 0x20) {
        uVar16 = uVar13 + 0x20;
      }
      iVar5 = fn_00100fc6(uVar16 << 4,0);
      iVar1 = iVar5;
      for (puVar2 = (undefined4 *)*piVar12; puVar2 != puVar15; puVar2 = puVar2 + 4) {
        if (iVar1 != 0) {
          fn_002d177c(iVar1,puVar2);
        }
        iVar1 = iVar1 + 0x10;
      }
      iVar1 = ((int)puVar15 - *piVar12 & 0xfffffff0U) + iVar5;
      if (iVar1 != 0) {
        fn_002d177c(iVar1,&local_48);
      }
      puVar2 = (undefined4 *)*piVar11;
      iVar1 = ((int)puVar15 - *piVar12 & 0xfffffff0U) + iVar5;
      for (; puVar15 != puVar2; puVar15 = puVar15 + 4) {
        iVar1 = iVar1 + 0x10;
        if (iVar1 != 0) {
          fn_002d177c(iVar1,puVar15);
        }
      }
      iVar1 = *piVar12;
      iVar17 = *piVar11;
      iVar6 = iVar17 - iVar1;
      for (; iVar1 != iVar17; iVar1 = iVar1 + 0x10) {
        uVar4 = *(uint *)(iVar1 + 4);
        uVar13 = uVar4;
        if (*(uint *)(iVar1 + 8) < uVar4) {
          do {
            uVar13 = uVar13 + 4;
          } while (uVar13 != *(uint *)(iVar1 + 8));
        }
        fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0xc) - uVar4) >> 2,0);
      }
      fn_001008c4(*piVar12,*(int *)(iVar10 + 0xc) - *piVar12 >> 4,0);
      *piVar12 = iVar5;
      *piVar11 = iVar5 + (iVar6 >> 4) * 0x10 + 0x10;
      *(uint *)(iVar10 + 0xc) = iVar5 + uVar16 * 0x10;
    }
  }
  else {
    *piVar11 = (int)(puVar15 + 4);
    if (puVar15 != (undefined4 *)0x0) {
      fn_002d177c(puVar15,&local_48);
    }
  }
  puVar15 = local_44;
  if (local_40 < local_44) {
    do {
      puVar15 = puVar15 + 1;
    } while (puVar15 != local_40);
  }
  fn_001008c4(local_44,(int)local_3c - (int)local_44 >> 2,0);
  return param_1;
}


