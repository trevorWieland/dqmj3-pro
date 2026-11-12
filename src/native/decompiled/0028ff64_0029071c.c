#include "0028ff64_0029071c.h"



void fn_0029071c(undefined4 param_1)

{
  fn_002e2ea4(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



uint fn_002906f8(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = fn_006bc5dc(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return uVar1 ^ 1;
}



void fn_002906e0(undefined4 param_1)

{
  fn_002e2d98(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



undefined4 fn_00290544(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = fn_00259f7c();
  if (iVar1 == 0) {
switchD_00290584_caseD_0:
    return 0;
  }
  iVar1 = fn_006bc590(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  if (iVar1 != 0) {
    switch(param_1) {
    default:
      goto switchD_00290584_caseD_0;
    case 7:
      iVar1 = 0;
      do {
        iVar3 = fn_002e2dc8(*(undefined4 *)(DAT_00897804 + 0x20),iVar1);
        if (iVar3 != 0) {
          iVar3 = fn_006bc5bc(*(undefined4 *)(DAT_00897804 + 0x20),iVar1);
          if (iVar3 == 0) {
            return 1;
          }
          if (iVar1 == 0) {
            iVar3 = 0;
            do {
              fn_003199a0(iVar3);
              iVar2 = fn_00154ac8();
              if ((iVar2 != 0) &&
                 (iVar2 = fn_006bc5dc(*(undefined4 *)(DAT_00897804 + 0x20),iVar3), iVar2 != 1)) {
                return 1;
              }
              iVar3 = iVar3 + 1;
            } while (iVar3 < 0x31);
          }
        }
        iVar1 = iVar1 + 1;
        if (5 < iVar1) {
          return 0;
        }
      } while( true );
    case 0xc:
      iVar1 = 500;
      while ((iVar3 = fn_00154ac8(iVar1), iVar3 == 0 ||
             (iVar3 = fn_002e2e44(*(undefined4 *)(DAT_00897804 + 0x20),iVar1 - 500U & 0xff),
             iVar3 != 0))) {
        iVar1 = iVar1 + 1;
        if (599 < iVar1) {
          return 0;
        }
      }
    }
  }
  return 1;
}



void fn_0029052c(undefined4 param_1)

{
  fn_002e2e20(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  return;
}



undefined4 fn_00290488(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006bc5bc(*(undefined4 *)(DAT_00897804 + 0x20),param_1);
  if (iVar1 != 0) {
    if (param_1 != 0) {
      return 0;
    }
    iVar1 = 0;
    while( true ) {
      fn_003199a0(iVar1);
      iVar2 = fn_00154ac8();
      if ((iVar2 != 0) &&
         (iVar2 = fn_006bc5dc(*(undefined4 *)(DAT_00897804 + 0x20),iVar1), iVar2 != 1)) break;
      iVar1 = iVar1 + 1;
      if (0x30 < iVar1) {
        return 0;
      }
    }
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x002902bc) */
/* WARNING: Removing unreachable block (ram,0x002902c8) */
/* WARNING: Removing unreachable block (ram,0x00290294) */
/* WARNING: Removing unreachable block (ram,0x00290298) */
/* WARNING: Removing unreachable block (ram,0x0029029c) */
/* WARNING: Removing unreachable block (ram,0x002902a0) */
/* WARNING: Removing unreachable block (ram,0x002902a4) */
/* WARNING: Removing unreachable block (ram,0x002902e4) */
/* WARNING: Removing unreachable block (ram,0x002902f4) */
/* WARNING: Removing unreachable block (ram,0x002902cc) */
/* WARNING: Removing unreachable block (ram,0x002902d4) */
/* WARNING: Removing unreachable block (ram,0x002902d8) */
/* WARNING: Removing unreachable block (ram,0x002902dc) */

undefined4 * fn_0029011c(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)fn_00660458();
  puVar1[0x33] = 0;
  puVar1[0x32] = 1;
  *puVar1 = &DAT_0081e3dc;
  puVar11 = (undefined4 *)puVar1[0x15];
  puVar12 = puVar1 + 0x14;
  puVar2 = (undefined4 *)puVar1[0x14];
  puVar6 = (undefined4 *)((int)puVar11 - (int)puVar2);
  local_28 = (int)puVar6 >> 2;
  if (local_28 < 2) {
    iVar13 = 2 - local_28;
    if (iVar13 != 0) {
      local_28 = iVar13 + local_28;
      if ((uint)(puVar1[0x16] - (int)puVar2 >> 2) < local_28) {
        uVar14 = (int)(puVar1[0x15] - *puVar12) >> 2;
        local_24 = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_24 < uVar14 + 0x20) {
          local_24 = uVar14 + 0x20;
        }
        puVar8 = &local_24;
        if (local_24 <= local_28) {
          puVar8 = &local_28;
        }
        uVar14 = *puVar8;
        puVar3 = (undefined4 *)fn_00100fc6(uVar14 << 2,0);
        puVar2 = puVar3;
        for (puVar6 = (undefined4 *)*puVar12; puVar6 != puVar11; puVar6 = puVar6 + 1) {
          if (puVar2 != (undefined4 *)0x0) {
            *puVar2 = *puVar6;
          }
          puVar2 = puVar2 + 1;
        }
        puVar6 = (undefined4 *)(((int)puVar11 - *puVar12 & 0xfffffffc) + (int)puVar3);
        for (iVar9 = iVar13; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = 0;
          }
          puVar6 = puVar6 + 1;
        }
        puVar2 = (undefined4 *)puVar1[0x15];
        puVar6 = puVar3 + iVar13 + ((int)((int)puVar11 - *puVar12) >> 2);
        for (; puVar11 != puVar2; puVar11 = puVar11 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar11;
          }
          puVar6 = puVar6 + 1;
        }
        uVar4 = *puVar12;
        uVar10 = puVar1[0x15];
        uVar5 = uVar4;
        if (uVar10 < uVar4) {
          do {
            uVar5 = uVar5 + 4;
          } while (uVar5 != uVar10);
        }
        fn_001008c4(uVar4,(int)(puVar1[0x16] - uVar4) >> 2,0);
        puVar1[0x16] = puVar3 + uVar14;
        puVar1[0x15] = puVar3 + ((int)(uVar10 - uVar4) >> 2) + iVar13;
        *puVar12 = (uint)puVar3;
      }
      else {
        puVar6 = puVar11 + iVar13;
        puVar1[0x15] = puVar11 + iVar13;
        if (puVar6 < puVar11) {
          puVar7 = puVar11 + -iVar13;
          puVar3 = puVar11;
          for (puVar2 = puVar7; puVar2 != puVar11; puVar2 = puVar2 + 1) {
            if (puVar3 != (undefined4 *)0x0) {
              *puVar3 = *puVar2;
            }
            puVar3 = puVar3 + 1;
          }
          puVar2 = puVar11;
          if (puVar11 < puVar7) {
            if (0 < (int)puVar7 - (int)puVar11) {
              iVar13 = (int)puVar7 - (int)puVar11 >> 2;
              iVar9 = 0;
              do {
                iVar13 = iVar13 + -1;
                puVar11[iVar9 + -1] = puVar7[iVar9 + -1];
                iVar9 = iVar9 + -1;
              } while (iVar13 != 0);
            }
          }
          else {
            while (puVar11 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar2[-1] = *puVar7;
              puVar2 = puVar2 + -1;
            }
          }
          if (puVar11 < puVar6) {
            iVar13 = (int)puVar6 - (int)puVar11;
            if (0 < iVar13) {
              puVar6 = puVar11;
              if (iVar13 * 0x20000000 < 0) {
                puVar6 = puVar11 + 1;
                *puVar11 = 0;
              }
              for (iVar13 = iVar13 >> 3; iVar13 != 0; iVar13 = iVar13 + -1) {
                puVar11 = puVar6 + 1;
                *puVar6 = 0;
                puVar6 = puVar6 + 2;
                *puVar11 = 0;
              }
            }
          }
          else {
            for (; puVar11 != puVar6; puVar11 = puVar11 + 1) {
              *puVar11 = 0;
            }
          }
        }
        else {
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
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
    if (local_28 != 2) {
      puVar6 = puVar2 + 2;
    }
    if (local_28 != 2 && puVar2 != puVar11) {
      puVar2 = puVar6;
      if (puVar11 <= puVar6) {
        for (; puVar2 != puVar11; puVar2 = puVar2 + 1) {
        }
      }
      puVar1[0x15] = (int)puVar11 - ((int)puVar11 - (int)puVar6 & 0xfffffffcU);
    }
  }
  return puVar1;
}



void fn_00290100(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xcc);
  if (iVar1 != param_2) {
    *(int *)(param_1 + 0xcc) = param_2;
    *(int *)(param_1 + 0x98) = param_2;
    *(int *)(param_1 + 0x9c) = iVar1;
  }
  return;
}



void fn_0028ff64(undefined4 *param_1)

{
  *param_1 = &DAT_0081e3b0;
  if (*(char *)(param_1 + 4) != '\0') {
    fn_00151954(*(undefined4 *)(param_1[10] + 0xc));
    fn_0068af3c(param_1);
    if (param_1[8] != -1) {
      DAT_00895f14 = DAT_00895f14 + -1;
      fn_00159f34(param_1[5]);
      param_1[8] = 0xffffffff;
    }
    if (param_1[7] != -1) {
      fn_0016a43c(param_1[5]);
      param_1[7] = 0xffffffff;
    }
    if (param_1[6] != -1) {
                    /* WARNING: Subroutine does not return */
      fn_001482f4(param_1[5]);
    }
    *(undefined1 *)(param_1 + 4) = 0;
  }
  fn_006896f4(param_1);
  fn_002feef8();
  return;
}


