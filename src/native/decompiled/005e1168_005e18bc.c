#include "005e1168_005e18bc.h"



undefined4 fn_005e18bc(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 400) + param_2 * 0xc + 8);
}



undefined4 fn_005e18a4(int param_1,int param_2)

{
  return *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 400) + param_2 * 0xc + 4);
}



void fn_005e1844(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  fn_0012bc84(0x207,piVar2 + 2);
  iVar1 = fn_00153d6c();
  *(undefined1 *)(*piVar2 + iVar1 * 0x10 + 0xc) = 0;
  fn_0012b2f0(*(undefined4 *)(*piVar2 + iVar1 * 0x10));
  fn_0012b574();
  fn_0012bc84(0x208,iVar1 * 0x10 + 8 + *piVar2);
  return;
}



void fn_005e17f8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)*param_1;
  iVar1 = fn_00153d6c();
  *(undefined4 *)(*piVar2 + iVar1 * 0x10 + 4) = param_2;
  fn_0012b2f0(piVar2[2]);
  piVar2[2] = 0;
  *(undefined1 *)(*piVar2 + iVar1 * 0x10 + 0xc) = 1;
  return;
}



undefined4 * fn_005e173c(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  *param_1 = &DAT_00858968;
  puVar1 = (undefined4 *)fn_00145b00(0x10,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    puVar1[1] = 0;
    puVar1[2] = 0;
    puVar1[3] = 0;
  }
  param_1[1] = puVar1;
  return param_1;
}



void fn_005e16f0(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = 0;
  uVar1 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 3;
  if (uVar1 != 0) {
    while (*(int *)(*(int *)(iVar3 + 4) + uVar2 * 8 + 4) != param_2) {
      uVar2 = uVar2 + 1;
      if (uVar1 <= uVar2) {
        return;
      }
    }
    *(undefined1 *)(*(int *)(iVar3 + 4) + uVar2 * 8) = 0;
  }
  return;
}



undefined4 fn_005e1698(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = 0;
  uVar1 = *(int *)(iVar3 + 8) - *(int *)(iVar3 + 4) >> 3;
  if (uVar1 != 0) {
    do {
      if (*(char *)(*(int *)(iVar3 + 4) + uVar2 * 8) == '\0') {
        *(undefined1 *)(*(int *)(iVar3 + 4) + uVar2 * 8) = 1;
        return *(undefined4 *)(*(int *)(iVar3 + 4) + uVar2 * 8 + 4);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  return 0;
}



void fn_005e15cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  iVar8 = (int)(puVar1[2] - puVar1[1]) >> 3;
  while (iVar8 = iVar8 + -1, -1 < iVar8) {
    *(undefined1 *)(puVar1[1] + iVar8 * 8) = 0;
    uVar2 = fn_005e0a8c(*(undefined4 *)(puVar1[1] + iVar8 * 8 + 4));
    iVar7 = puVar1[1] + iVar8 * 8;
    piVar3 = *(int **)(iVar7 + 4);
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)(iVar7 + 4) = 0;
    fn_00143a58(uVar2);
  }
  uVar6 = puVar1[1];
  puVar1[1] = 0;
  uVar5 = puVar1[2];
  puVar1[2] = 0;
  iVar8 = puVar1[3];
  puVar1[3] = 0;
  uVar4 = uVar6;
  if (uVar5 < uVar6) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar5);
  }
  fn_001008c4(uVar6,(int)(iVar8 - uVar6) >> 3,0);
  *puVar1 = 0;
  return;
}



/* WARNING: Removing unreachable block (ram,0x005e135c) */
/* WARNING: Removing unreachable block (ram,0x005e1370) */
/* WARNING: Removing unreachable block (ram,0x005e1330) */
/* WARNING: Removing unreachable block (ram,0x005e1338) */
/* WARNING: Removing unreachable block (ram,0x005e1340) */
/* WARNING: Removing unreachable block (ram,0x005e1394) */
/* WARNING: Removing unreachable block (ram,0x005e13b0) */
/* WARNING: Removing unreachable block (ram,0x005e1374) */
/* WARNING: Removing unreachable block (ram,0x005e137c) */
/* WARNING: Removing unreachable block (ram,0x005e1384) */
/* WARNING: Removing unreachable block (ram,0x005e138c) */

void fn_005e1168(int param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  undefined4 uVar16;
  uint local_40;
  uint local_3c [2];
  undefined4 *puStack_34;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar14 = puVar1 + 1;
  puVar2 = (undefined4 *)puVar1[2];
  puVar12 = (undefined4 *)*puVar14;
  uVar13 = (int)puVar2 - (int)puVar12 >> 3;
  puStack_34 = puVar1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  if (uVar13 < param_3) {
    iVar15 = param_3 - uVar13;
    if (iVar15 != 0) {
      uVar13 = iVar15 + uVar13;
      if ((uint)(puVar1[3] - (int)puVar12 >> 3) < uVar13) {
        local_40 = uVar13;
        uVar6 = (int)(puVar1[2] - *puVar14) >> 3;
        local_3c[0] = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
        if (local_3c[0] < uVar6 + 0x20) {
          local_3c[0] = uVar6 + 0x20;
        }
        puVar8 = &local_40;
        if (uVar13 < local_3c[0]) {
          puVar8 = local_3c;
        }
        uVar13 = *puVar8;
        puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 3,0);
        puVar10 = puVar4;
        for (puVar12 = (undefined4 *)*puVar14; puVar12 != puVar2; puVar12 = puVar12 + 2) {
          if (puVar10 != (undefined4 *)0x0) {
            uVar16 = puVar12[1];
            *puVar10 = *puVar12;
            puVar10[1] = uVar16;
          }
          puVar10 = puVar10 + 2;
        }
        puVar12 = (undefined4 *)(((int)puVar2 - *puVar14 & 0xfffffff8) + (int)puVar4);
        for (iVar9 = iVar15; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = 0;
            puVar12[1] = 0;
          }
          puVar12 = puVar12 + 2;
        }
        puVar10 = (undefined4 *)puVar1[2];
        puVar12 = puVar4 + (iVar15 + ((int)((int)puVar2 - *puVar14) >> 3)) * 2;
        for (; puVar2 != puVar10; puVar2 = puVar2 + 2) {
          if (puVar12 != (undefined4 *)0x0) {
            uVar16 = puVar2[1];
            *puVar12 = *puVar2;
            puVar12[1] = uVar16;
          }
          puVar12 = puVar12 + 2;
        }
        uVar5 = *puVar14;
        uVar11 = puVar1[2];
        uVar6 = uVar5;
        if (uVar11 < uVar5) {
          do {
            uVar6 = uVar6 + 8;
          } while (uVar6 != uVar11);
        }
        fn_001008c4(uVar5,(int)(puVar1[3] - uVar5) >> 3,0);
        puVar1[3] = puVar4 + uVar13 * 2;
        puVar1[2] = puVar4 + ((int)(uVar11 - uVar5) >> 3) * 2 + iVar15 * 2;
        *puVar14 = (uint)puVar4;
      }
      else {
        puVar12 = puVar2 + iVar15 * 2;
        puVar1[2] = puVar2 + iVar15 * 2;
        if (puVar12 < puVar2) {
          puVar3 = puVar2 + iVar15 * -2;
          puVar10 = puVar2;
          for (puVar4 = puVar3; puVar4 != puVar2; puVar4 = puVar4 + 2) {
            if (puVar10 != (undefined4 *)0x0) {
              uVar16 = puVar4[1];
              *puVar10 = *puVar4;
              puVar10[1] = uVar16;
            }
            puVar10 = puVar10 + 2;
          }
          puVar10 = puVar2;
          if (puVar2 < puVar3) {
            iVar15 = (int)puVar3 - (int)puVar2;
            if (0 < iVar15) {
              puVar10 = puVar3;
              puVar4 = puVar2;
              if (iVar15 * 0x10000000 < 0) {
                puVar10 = puVar3 + -2;
                puVar4 = puVar2 + -2;
                uVar16 = puVar3[-1];
                *puVar4 = *puVar10;
                puVar2[-1] = uVar16;
              }
              for (iVar15 = iVar15 >> 4; iVar15 != 0; iVar15 = iVar15 + -1) {
                uVar16 = puVar10[-1];
                puVar4[-2] = puVar10[-2];
                puVar4[-1] = uVar16;
                uVar16 = puVar10[-3];
                puVar4[-4] = puVar10[-4];
                puVar4[-3] = uVar16;
                puVar10 = puVar10 + -4;
                puVar4 = puVar4 + -4;
              }
            }
          }
          else {
            while (puVar2 != puVar3) {
              uVar16 = puVar3[-1];
              puVar10[-2] = puVar3[-2];
              puVar10[-1] = uVar16;
              puVar10 = puVar10 + -2;
              puVar3 = puVar3 + -2;
            }
          }
          if (puVar2 < puVar12) {
            iVar15 = (int)puVar12 - (int)puVar2;
            if (0 < iVar15) {
              if (iVar15 * 0x10000000 < 0) {
                puVar12 = puVar2 + 1;
                *puVar2 = 0;
                puVar2 = puVar2 + 2;
                *puVar12 = 0;
              }
              for (iVar15 = iVar15 >> 4; iVar15 != 0; iVar15 = iVar15 + -1) {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
                puVar2 = puVar2 + 4;
              }
            }
          }
          else {
            for (; puVar2 != puVar12; puVar2 = puVar2 + 2) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
          }
        }
        else {
          for (; iVar15 != 0; iVar15 = iVar15 + -1) {
            if (puVar2 != (undefined4 *)0x0) {
              *puVar2 = 0;
              puVar2[1] = 0;
            }
            puVar2 = puVar2 + 2;
          }
        }
      }
    }
  }
  else if ((param_3 < uVar13) && (puVar10 = puVar12 + param_3 * 2, puVar12 != puVar2)) {
    puVar12 = puVar10;
    if (puVar2 < puVar10) {
      do {
        puVar12 = puVar12 + 2;
      } while (puVar12 != puVar2);
    }
    puVar1[2] = (int)puVar2 - ((int)puVar2 - (int)puVar10 & 0xfffffff8U);
  }
  *puVar1 = param_2;
  uVar13 = 0;
  if ((int)(puVar1[2] - puVar1[1]) >> 3 != 0) {
    do {
      uVar7 = fn_00143ac8(param_2,4);
      iVar15 = fn_00145b00(8,&DAT_00812c8c);
      uVar16 = 0;
      if (iVar15 != 0) {
        uVar16 = fn_005e0a98(iVar15,uVar7,param_2,local_28);
      }
      *(undefined4 *)(puVar1[1] + uVar13 * 8 + 4) = uVar16;
      *(undefined1 *)(puVar1[1] + uVar13 * 8) = 0;
      uVar13 = uVar13 + 1;
    } while (uVar13 < (uint)((int)(puVar1[2] - puVar1[1]) >> 3));
  }
  return;
}


