#include "00370a70_0038b6d4.h"



void fn_0038b6d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_18;
  
  local_18 = param_4;
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138cc(iVar1,&DAT_0038b978);
  }
  piVar6 = *(int **)(param_1 + 8);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 8) = piVar2;
  }
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001138ac(iVar1,&DAT_0038b978);
  }
  piVar6 = *(int **)(param_1 + 0xc);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0xc) = piVar2;
  }
  uVar7 = *(undefined4 *)(param_1 + 8);
  uVar8 = *(undefined4 *)(param_1 + 0xc);
  uVar3 = fn_00129004();
  fn_002416b4(uVar3,uVar7,uVar8);
  iVar1 = fn_00145b00(0x78,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00241510(iVar1,0x80000);
  }
  piVar6 = *(int **)(param_1 + 0x10);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x10) = piVar2;
  }
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00110518();
  }
  piVar6 = *(int **)(param_1 + 0x14);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    *(int **)(param_1 + 0x14) = piVar2;
  }
  fn_0011050c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 8),
               *(undefined4 *)(param_1 + 0xc));
  iVar1 = fn_00145b00(0x2c,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_001f7350(iVar1,0);
  }
  piVar6 = *(int **)(param_1 + 0x1c);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    *(int **)(param_1 + 0x1c) = piVar2;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x10) = *(undefined4 *)(param_1 + 0x10);
  iVar1 = fn_00145b00(0x48,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_001f7e18(iVar1,*(undefined4 *)(param_1 + 0x1c));
    *piVar2 = (int)&DAT_007cc444;
    fn_0028e434(piVar2[5],&DAT_007cc39c);
    fn_0028e434(piVar2[3],&DAT_007cc400);
  }
  piVar6 = *(int **)(param_1 + 0x18);
  if (piVar6 != piVar2) {
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))();
    }
    *(int **)(param_1 + 0x18) = piVar2;
  }
  local_18 = 0;
  fn_00163988(DAT_0089780c,&local_18,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  fn_001f7438(*(undefined4 *)(param_1 + 0x18),0x5e,0);
  puVar4 = (undefined4 *)fn_001f74e4(*(undefined4 *)(param_1 + 0x18),0x5e);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00895b24) goto LAB_0038b968;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0038b968:
  *(undefined1 *)((int)puVar4 + 9) = 1;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00370c64) */
/* WARNING: Removing unreachable block (ram,0x00370c70) */
/* WARNING: Removing unreachable block (ram,0x00370c3c) */
/* WARNING: Removing unreachable block (ram,0x00370c40) */
/* WARNING: Removing unreachable block (ram,0x00370c44) */
/* WARNING: Removing unreachable block (ram,0x00370c48) */
/* WARNING: Removing unreachable block (ram,0x00370c4c) */
/* WARNING: Removing unreachable block (ram,0x00370c8c) */
/* WARNING: Removing unreachable block (ram,0x00370c9c) */
/* WARNING: Removing unreachable block (ram,0x00370c74) */
/* WARNING: Removing unreachable block (ram,0x00370c7c) */
/* WARNING: Removing unreachable block (ram,0x00370c80) */
/* WARNING: Removing unreachable block (ram,0x00370c84) */

undefined4 fn_00370a70(int param_1,uint *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined1 *puVar11;
  undefined4 uVar12;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  uint local_2c [2];
  
  uVar12 = 1;
  iVar1 = fn_00227ca8(DAT_00897894,0x10,0xffffffff,0);
  if ((iVar1 == 0) ||
     (iVar1 = (**(code **)(*DAT_00897894 + 0x30))(DAT_00897894,param_1 + 0x20,iVar1), iVar1 == 0)) {
    uVar12 = 0;
  }
  else {
    local_30 = 0;
    fn_00522030(param_1 + 0x20,3,&local_30,4);
    puVar2 = (undefined1 *)param_2[1];
    puVar5 = (undefined1 *)*param_2;
    uVar8 = (int)puVar2 - (int)puVar5;
    if (uVar8 < 0x2000) {
      iVar1 = 0x2000 - uVar8;
      if (iVar1 != 0) {
        uVar8 = uVar8 + iVar1;
        if (param_2[2] - (int)puVar5 < uVar8) {
          local_38 = uVar8;
          uVar4 = param_2[1] - *param_2;
          uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
          local_2c[0] = uVar4 + 0x20;
          if (uVar4 + 0x20 <= uVar10) {
            local_2c[0] = uVar10;
          }
          puVar6 = &local_38;
          if (uVar8 < local_2c[0]) {
            puVar6 = local_2c;
          }
          local_34 = *puVar6;
          puVar9 = (undefined1 *)fn_00100fc6(local_34,0);
          puVar11 = puVar9;
          for (puVar5 = (undefined1 *)*param_2; puVar5 != puVar2; puVar5 = puVar5 + 1) {
            if (puVar11 != (undefined1 *)0x0) {
              *puVar11 = *puVar5;
            }
            puVar11 = puVar11 + 1;
          }
          puVar5 = puVar9 + ((int)puVar2 - *param_2);
          for (iVar7 = iVar1; iVar7 != 0; iVar7 = iVar7 + -1) {
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = 0;
            }
            puVar5 = puVar5 + 1;
          }
          puVar11 = (undefined1 *)param_2[1];
          puVar5 = puVar9 + (int)(puVar2 + (iVar1 - *param_2));
          for (; puVar2 != puVar11; puVar2 = puVar2 + 1) {
            if (puVar5 != (undefined1 *)0x0) {
              *puVar5 = *puVar2;
            }
            puVar5 = puVar5 + 1;
          }
          uVar4 = *param_2;
          uVar10 = param_2[1];
          uVar8 = uVar4;
          if (uVar10 < uVar4) {
            do {
              uVar8 = uVar8 + 1;
            } while (uVar8 != uVar10);
          }
          fn_001008c4(uVar4,param_2[2] - uVar4,0);
          param_2[2] = (uint)(puVar9 + local_34);
          param_2[1] = (uint)(puVar9 + iVar1 + (uVar10 - uVar4));
          *param_2 = (uint)puVar9;
        }
        else {
          puVar5 = puVar2 + iVar1;
          param_2[1] = (uint)(puVar2 + iVar1);
          if (puVar5 < puVar2) {
            puVar3 = puVar2 + -iVar1;
            puVar9 = puVar2;
            for (puVar11 = puVar3; puVar11 != puVar2; puVar11 = puVar11 + 1) {
              if (puVar9 != (undefined1 *)0x0) {
                *puVar9 = *puVar11;
              }
              puVar9 = puVar9 + 1;
            }
            puVar11 = puVar2;
            if (puVar2 < puVar3) {
              uVar8 = (int)puVar3 - (int)puVar2;
              if (0 < (int)uVar8) {
                if ((uVar8 & 1) != 0) {
                  puVar3 = puVar3 + -1;
                  puVar11 = puVar2 + -1;
                  *puVar11 = *puVar3;
                }
                for (iVar1 = (int)uVar8 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar11[-1] = puVar3[-1];
                  puVar3 = puVar3 + -2;
                  puVar11 = puVar11 + -2;
                  *puVar11 = *puVar3;
                }
              }
            }
            else {
              while (puVar2 != puVar3) {
                puVar3 = puVar3 + -1;
                puVar11[-1] = *puVar3;
                puVar11 = puVar11 + -1;
              }
            }
            if (puVar2 < puVar5) {
              uVar8 = (int)puVar5 - (int)puVar2;
              if (0 < (int)uVar8) {
                puVar5 = puVar2;
                if ((uVar8 & 1) != 0) {
                  puVar5 = puVar2 + 1;
                  *puVar2 = 0;
                }
                for (iVar1 = (int)uVar8 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
                  puVar2 = puVar5 + 1;
                  *puVar5 = 0;
                  puVar5 = puVar5 + 2;
                  *puVar2 = 0;
                }
              }
            }
            else {
              for (; puVar2 != puVar5; puVar2 = puVar2 + 1) {
                *puVar2 = 0;
              }
            }
          }
          else {
            for (; iVar1 != 0; iVar1 = iVar1 + -1) {
              if (puVar2 != (undefined1 *)0x0) {
                *puVar2 = 0;
              }
              puVar2 = puVar2 + 1;
            }
          }
        }
      }
    }
    else if ((0x2000 < uVar8) && (puVar11 = puVar5 + 0x2000, puVar5 != puVar2)) {
      puVar5 = puVar11;
      if (puVar2 <= puVar11) {
        for (; puVar5 != puVar2; puVar5 = puVar5 + 1) {
        }
      }
      param_2[1] = (uint)puVar11;
    }
    iVar1 = fn_005222ac(param_1 + 0x20,*param_2,param_2[1] - *param_2);
    if (iVar1 < 0) {
      fn_00522220(param_1 + 0x20);
      uVar12 = 0;
    }
  }
  return uVar12;
}


