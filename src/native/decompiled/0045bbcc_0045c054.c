#include "0045bbcc_0045c054.h"



void fn_0045c054(int param_1,int param_2)

{
  undefined2 uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  bool bVar9;
  undefined *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  char *local_24;
  char *local_20;
  
  iVar3 = fn_004b616c(*(byte *)(param_2 + 0x26) >> 4);
  if ((((*(char *)(iVar3 + 0xa0) != '\0') && (*(char *)(param_2 + 0x88) == '\0')) &&
      (*(int *)(param_2 + 0xd8) != 0)) &&
     (uVar2 = *(ushort *)(param_2 + 0x3c) & 0xf, uVar2 == 2 || uVar2 == 5)) {
    if ((*(ushort *)(param_2 + 0x3c) & 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0045c0cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + (uint)*(byte *)(param_2 + 0x84) * 4) + 0x14
                  ))();
      return;
    }
    local_2c = 1;
    local_28 = 0;
    local_30 = &DAT_008558c4;
    puVar4 = (undefined4 *)fn_001676b0(&local_24,0x20);
    fn_00158f6c(*puVar4,0x20);
    if ((*(ushort *)(param_2 + 0x3c) & 0x600) == 0) {
      iVar3 = *(int *)(param_1 + 0x44);
      if (iVar3 == *(int *)(param_1 + 0x48)) {
        iVar3 = 0;
      }
    }
    else {
      iVar3 = *(int *)(param_1 + 0x5c);
      if (iVar3 == *(int *)(param_1 + 0x60)) {
        iVar3 = 0;
      }
    }
    pcVar5 = local_24;
    if (local_24 == local_20) {
      pcVar5 = (char *)0x0;
    }
    fn_00301a9c(pcVar5,iVar3,0x20);
    uVar1 = *(undefined2 *)(param_2 + 0x44);
    pcVar5 = local_24;
    if (local_24 == local_20) {
      pcVar5 = (char *)0x0;
    }
    *pcVar5 = (char)uVar1 + *pcVar5;
    pcVar5 = local_24;
    if (local_24 == local_20) {
      pcVar5 = (char *)0x0;
    }
    pcVar5[1] = pcVar5[1] + (char)((ushort)uVar1 >> 8);
    pcVar5 = local_24;
    if (local_24 == local_20) {
      pcVar5 = (char *)0x0;
    }
    pcVar5[(int)(local_20 + (-1 - (int)local_24))] =
         pcVar5[(int)(local_20 + (-1 - (int)local_24))] + *(char *)(param_2 + 0x65);
    piVar8 = *(int **)(param_1 + 0x1c);
    uVar6 = (int)local_20 - (int)local_24;
    uVar7 = piVar8[8];
    bVar9 = uVar7 <= uVar6;
    if (bVar9) {
      uVar7 = piVar8[9];
    }
    if (bVar9 && uVar6 <= uVar7) {
      fn_0015ed58(piVar8 + 2,&local_30);
      (**(code **)(*piVar8 + 0x1c))(piVar8);
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x14))
              (*(int **)(param_1 + 0x1c),*(undefined4 *)(param_2 + 0xd8));
    fn_0014f2b0(&local_30);
  }
  return;
}



/* WARNING: Removing unreachable block (ram,0x0045bcf4) */
/* WARNING: Removing unreachable block (ram,0x0045bd00) */
/* WARNING: Removing unreachable block (ram,0x0045beec) */
/* WARNING: Removing unreachable block (ram,0x0045bef8) */

void fn_0045bbcc(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  int unaff_r7;
  int unaff_r8;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  undefined1 auStack_40 [12];
  int iStack_34;
  int iStack_30;
  undefined1 auStack_2c [4];
  
  *(short *)(param_1 + 0x6a) = (short)param_2;
  if (*(char *)(param_1 + 0x68) == '\0') {
    return;
  }
  uVar13 = param_2 + 1;
  while (uVar13 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -4;
  }
  fn_00798bc0(param_1 + 4,uVar13);
  fn_00798bc0(param_1 + 0x10,param_2 + 1);
  for (iVar12 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2; iVar12 < (int)uVar13;
      iVar12 = iVar12 + 1) {
    iVar3 = fn_0015ece0(0x230);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_00468824();
    }
    piVar4 = *(int **)(iVar3 + 0x22c);
    (**(code **)(*piVar4 + 8))();
    *(undefined1 *)(iVar3 + 0x22a) = 0;
    (**(code **)(*piVar4 + 0xc))(piVar4);
    puVar11 = (uint *)(param_1 + 4);
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 == *(int **)(param_1 + 0xc)) {
      uVar1 = (int)((int)piVar4 - *puVar11) >> 2;
      if (uVar1 < (uint)((int)((int)*(int **)(param_1 + 0xc) - *puVar11) >> 2)) {
        *(int **)(param_1 + 8) = piVar4 + 1;
        if (piVar4 != (int *)0x0) {
          *piVar4 = piVar4[-1];
        }
        *piVar4 = iVar3;
      }
      else {
        uVar2 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar2 < uVar1 + 0x20) {
          uVar2 = uVar1 + 0x20;
        }
        piVar5 = (int *)fn_0015ece0(uVar2 << 2);
        piVar9 = piVar5;
        for (piVar8 = (int *)*puVar11; piVar8 != piVar4; piVar8 = piVar8 + 1) {
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar8;
          }
          piVar9 = piVar9 + 1;
        }
        piVar8 = (int *)(((int)piVar4 - *puVar11 & 0xfffffffc) + (int)piVar5);
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar3;
        }
        piVar9 = *(int **)(param_1 + 8);
        piVar8 = (int *)(((int)piVar4 - *puVar11 & 0xfffffffc) + (int)piVar5);
        for (; piVar4 != piVar9; piVar4 = piVar4 + 1) {
          piVar8 = piVar8 + 1;
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar4;
          }
        }
        uVar6 = *(uint *)(param_1 + 8);
        uVar10 = *puVar11;
        uVar1 = uVar6;
        if (uVar10 < uVar6) {
          uVar1 = (uVar6 - uVar10) * 0x20000000;
        }
        iVar3 = (int)(uVar6 - uVar10) >> 2;
        if (uVar10 < uVar6) {
          uVar1 = uVar1 >> 0x1f;
        }
        else {
          uVar1 = 0;
        }
        for (iVar7 = uVar1 + 1; iVar7 < iVar3 + 1; iVar7 = iVar7 + 2) {
        }
        if (uVar10 != 0) {
          if (*(code **)(uVar10 - 8) == (code *)0x0) {
            fn_0030233c(uVar10 - 8);
          }
          else {
            (**(code **)(uVar10 - 8))();
          }
        }
        *(int **)(param_1 + 0xc) = piVar5 + uVar2;
        *(int **)(param_1 + 8) = piVar5 + iVar3 + 1;
        *puVar11 = (uint)piVar5;
      }
    }
    else {
      *(int **)(param_1 + 8) = piVar4 + 1;
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar3;
      }
    }
    iVar3 = fn_0015ece0(0x230);
    if (iVar3 == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = fn_00468824();
    }
    piVar4 = *(int **)(iVar3 + 0x22c);
    (**(code **)(*piVar4 + 8))();
    *(undefined1 *)(iVar3 + 0x22a) = 0;
    (**(code **)(*piVar4 + 0xc))(piVar4);
    puVar11 = (uint *)(param_1 + 0x10);
    piVar4 = *(int **)(param_1 + 0x14);
    if (piVar4 == *(int **)(param_1 + 0x18)) {
      uVar1 = (int)((int)piVar4 - *puVar11) >> 2;
      if (uVar1 < (uint)((int)((int)*(int **)(param_1 + 0x18) - *puVar11) >> 2)) {
        *(int **)(param_1 + 0x14) = piVar4 + 1;
        if (piVar4 != (int *)0x0) {
          *piVar4 = piVar4[-1];
        }
        *piVar4 = iVar3;
      }
      else {
        uVar2 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar2 < uVar1 + 0x20) {
          uVar2 = uVar1 + 0x20;
        }
        piVar5 = (int *)fn_0015ece0(uVar2 << 2);
        piVar9 = piVar5;
        for (piVar8 = (int *)*puVar11; piVar8 != piVar4; piVar8 = piVar8 + 1) {
          if (piVar9 != (int *)0x0) {
            *piVar9 = *piVar8;
          }
          piVar9 = piVar9 + 1;
        }
        piVar8 = (int *)(((int)piVar4 - *puVar11 & 0xfffffffc) + (int)piVar5);
        if (piVar8 != (int *)0x0) {
          *piVar8 = iVar3;
        }
        piVar9 = *(int **)(param_1 + 0x14);
        piVar8 = (int *)(((int)piVar4 - *puVar11 & 0xfffffffc) + (int)piVar5);
        for (; piVar4 != piVar9; piVar4 = piVar4 + 1) {
          piVar8 = piVar8 + 1;
          if (piVar8 != (int *)0x0) {
            *piVar8 = *piVar4;
          }
        }
        uVar6 = *(uint *)(param_1 + 0x14);
        uVar10 = *puVar11;
        uVar1 = uVar6;
        if (uVar10 < uVar6) {
          uVar1 = (uVar6 - uVar10) * 0x20000000;
        }
        iVar3 = (int)(uVar6 - uVar10) >> 2;
        if (uVar10 < uVar6) {
          uVar1 = uVar1 >> 0x1f;
        }
        else {
          uVar1 = 0;
        }
        for (iVar7 = uVar1 + 1; iVar7 < iVar3 + 1; iVar7 = iVar7 + 2) {
        }
        if (uVar10 != 0) {
          if (*(code **)(uVar10 - 8) == (code *)0x0) {
            fn_0030233c(uVar10 - 8);
          }
          else {
            (**(code **)(uVar10 - 8))();
          }
        }
        *(int **)(param_1 + 0x18) = piVar5 + uVar2;
        *(int **)(param_1 + 0x14) = piVar5 + iVar3 + 1;
        *puVar11 = (uint)piVar5;
      }
    }
    else {
      *(int **)(param_1 + 0x14) = piVar4 + 1;
      if (piVar4 != (int *)0x0) {
        *piVar4 = iVar3;
      }
    }
  }
  if (1 < (uint)(*(int *)(param_1 + 8) - (int)*(int **)(param_1 + 4) >> 2)) {
    fn_004b31c4(auStack_40,**(int **)(param_1 + 4) + 8);
    fn_004b31c4(auStack_2c + 4,**(int **)(param_1 + 0x10) + 8);
    uVar13 = 1;
    if (1 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2)) {
      do {
        uVar1 = 0;
        if ((uint)(iStack_30 - iStack_34) >> 1 != 0) {
          do {
            iVar12 = iStack_34;
            if (iStack_34 == iStack_30) {
              iVar12 = 0;
            }
            *(char *)(iVar12 + uVar1) =
                 ((char)((uint)(iStack_30 - iStack_34) >> 1) - (char)uVar1) + '\x01' +
                 *(char *)(iVar12 + uVar1);
            iVar12 = unaff_r7;
            if (unaff_r7 == unaff_r8) {
              iVar12 = 0;
            }
            *(char *)(iVar12 + uVar1) =
                 ((char)((uint)(iStack_30 - iStack_34) >> 1) - (char)uVar1) + '\x01' +
                 *(char *)(iVar12 + uVar1);
            uVar1 = uVar1 + 1;
          } while (uVar1 < (uint)(iStack_30 - iStack_34) >> 1);
        }
        piVar4 = *(int **)(*(int *)(param_1 + 4) + uVar13 * 4);
        uVar1 = iStack_30 - iStack_34;
        bVar15 = uVar1 <= (uint)piVar4[8];
        bVar14 = piVar4[8] == uVar1;
        if (!bVar15 || bVar14) {
          bVar15 = (uint)piVar4[9] <= uVar1;
          bVar14 = uVar1 == piVar4[9];
        }
        if (!bVar15 || bVar14) {
          fn_0015ed58(piVar4 + 2,auStack_40);
          (**(code **)(*piVar4 + 0x1c))(piVar4);
        }
        piVar4 = *(int **)(*(int *)(param_1 + 0x10) + uVar13 * 4);
        uVar2 = unaff_r8 - unaff_r7;
        uVar1 = piVar4[8];
        bVar14 = uVar1 <= uVar2;
        if (bVar14) {
          uVar1 = piVar4[9];
        }
        if (bVar14 && uVar2 <= uVar1) {
          fn_0015ed58(piVar4 + 2,auStack_2c + 4);
          (**(code **)(*piVar4 + 0x1c))(piVar4);
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < (uint)(*(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2));
    }
    fn_0014f2b0(auStack_2c + 4);
    fn_0014f2b0(auStack_40);
  }
  return;
}


