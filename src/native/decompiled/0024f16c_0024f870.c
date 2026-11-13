#include "0024f16c_0024f870.h"



undefined4 fn_0024f870(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  uVar1 = *(uint *)(DAT_0088fcd8 + *(short *)(param_1 + 0x1c) * 4);
  if (uVar1 == 0) {
    uVar1 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
  }
  uVar2 = fn_002500b8(param_1);
  uVar3 = fn_0024e96c(param_1);
  if (uVar1 == 0) {
    uVar1 = uVar2 ^ uVar3;
    iVar4 = fn_0014ccb4((int)*(short *)(param_1 + 0x1c),uVar1,
                         *(undefined4 *)(DAT_0088fcdc + *(short *)(param_1 + 0x1c) * 4));
    if (iVar4 == 0) {
      return 1;
    }
    iVar4 = (int)*(short *)(param_1 + 0x1c);
    if (((*(int *)(DAT_0088fcd8 + iVar4 * 4) == 0) &&
        (iVar5 = fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc)), iVar5 == 0)) &&
       (iVar5 = fn_0014ccb4(iVar4,uVar1,*(undefined4 *)(DAT_0088fcdc + iVar4 * 4)), iVar5 != 0)) {
      fn_0028ad34(*(undefined4 *)(DAT_00897804 + 0xc),iVar4,uVar1);
    }
  }
  uVar6 = uVar2 ^ uVar3;
  bVar7 = uVar6 == uVar1;
  if (bVar7) {
    uVar6 = uVar2 ^ uVar1;
  }
  if (bVar7 && uVar6 == uVar3) {
    return 0;
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x0024f708) */
/* WARNING: Removing unreachable block (ram,0x0024f70c) */
/* WARNING: Removing unreachable block (ram,0x0024f710) */
/* WARNING: Removing unreachable block (ram,0x0024f714) */
/* WARNING: Removing unreachable block (ram,0x0024f718) */

undefined4 fn_0024f16c(int param_1,undefined4 param_2)

{
  short sVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined2 *puVar10;
  int iVar11;
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  undefined2 *puVar15;
  bool bVar16;
  bool bVar17;
  undefined2 *local_128;
  undefined4 local_124;
  short local_38 [10];
  
  iVar11 = 0;
  iVar12 = 0;
  do {
    iVar14 = (int)*(short *)(param_1 + iVar12 * 2 + 0x44);
    if (iVar14 != 0) {
      iVar3 = fn_0025be84(iVar14);
      if (iVar3 == 0) {
        return 1;
      }
      iVar14 = fn_00660ccc(iVar14);
      if (iVar14 == 0) {
        return 1;
      }
      iVar11 = iVar11 + 1;
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 9);
  iVar12 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar12 * 2 + 0x44);
    if (sVar2 != 0) {
      if (iVar12 < 8) {
        uVar9 = 8U - iVar12 & 7;
      }
      else {
        uVar9 = 0;
      }
      iVar14 = uVar9 + iVar12 + 1;
      iVar3 = iVar12;
      while (iVar3 = iVar3 + 1, iVar3 < iVar14) {
        sVar1 = *(short *)(param_1 + iVar3 * 2 + 0x44);
        if ((sVar1 != 0) && (sVar2 == sVar1)) {
          return 1;
        }
      }
      for (; iVar14 < 9; iVar14 = iVar14 + 8) {
        iVar3 = param_1 + iVar14 * 2;
        if ((*(short *)(iVar3 + 0x44) != 0) && (sVar2 == *(short *)(iVar3 + 0x44))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x46) != 0) && (sVar2 == *(short *)(iVar3 + 0x46))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x48) != 0) && (sVar2 == *(short *)(iVar3 + 0x48))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x4a) != 0) && (sVar2 == *(short *)(iVar3 + 0x4a))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x4c) != 0) && (sVar2 == *(short *)(iVar3 + 0x4c))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x4e) != 0) && (sVar2 == *(short *)(iVar3 + 0x4e))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x50) != 0) && (sVar2 == *(short *)(iVar3 + 0x50))) {
          return 1;
        }
        if ((*(short *)(iVar3 + 0x52) != 0) && (sVar2 == *(short *)(iVar3 + 0x52))) {
          return 1;
        }
      }
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 8);
  iVar12 = fn_006616f4((int)*(short *)(param_1 + 0x1c),0);
  if (iVar12 != 0) {
    iVar14 = (int)*(short *)(param_1 + 0x44);
    bVar16 = iVar14 != iVar12;
    if (bVar16) {
      iVar14 = (int)*(short *)(param_1 + 0x46);
    }
    if (bVar16 && iVar14 != iVar12) {
      iVar14 = (int)*(short *)(param_1 + 0x48);
      bVar16 = iVar14 != iVar12;
      if (bVar16) {
        iVar14 = (int)*(short *)(param_1 + 0x4a);
      }
      if (bVar16 && iVar14 != iVar12) {
        iVar14 = (int)*(short *)(param_1 + 0x4c);
        bVar16 = iVar14 != iVar12;
        if (bVar16) {
          iVar14 = (int)*(short *)(param_1 + 0x4e);
        }
        if (bVar16 && iVar14 != iVar12) {
          iVar14 = (int)*(short *)(param_1 + 0x50);
          bVar16 = iVar14 != iVar12;
          if (bVar16) {
            iVar14 = (int)*(short *)(param_1 + 0x52);
          }
          bVar17 = iVar14 != iVar12;
          if (bVar16 && bVar17) {
            iVar14 = (int)*(short *)(param_1 + 0x54);
          }
          if ((bVar16 && bVar17) && iVar14 != iVar12) {
            return 1;
          }
        }
      }
    }
    iVar12 = 0;
    do {
      if (*(short *)(param_1 + iVar12 * 2 + 0x44) == 0) {
        local_38[iVar12] = 0;
      }
      else {
        sVar2 = fn_0020cc00();
        local_38[iVar12] = sVar2;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 9);
    iVar12 = 0;
    do {
      sVar2 = local_38[iVar12];
      if (sVar2 != 0) {
        if (iVar12 < 8) {
          uVar9 = 8U - iVar12 & 7;
        }
        else {
          uVar9 = 0;
        }
        iVar3 = uVar9 + iVar12 + 1;
        iVar14 = iVar12;
        while (iVar14 = iVar14 + 1, iVar14 < iVar3) {
          if ((local_38[iVar14] != 0) && (sVar2 == local_38[iVar14])) {
            return 1;
          }
        }
        for (; iVar3 < 9; iVar3 = iVar3 + 8) {
          if ((local_38[iVar3] != 0) && (sVar2 == local_38[iVar3])) {
            return 1;
          }
          if ((local_38[iVar3 + 1] != 0) && (sVar2 == local_38[iVar3 + 1])) {
            return 1;
          }
          if ((local_38[iVar3 + 2] != 0) && (sVar2 == local_38[iVar3 + 2])) {
            return 1;
          }
          if ((local_38[iVar3 + 3] != 0) && (sVar2 == local_38[iVar3 + 3])) {
            return 1;
          }
          if ((local_38[iVar3 + 4] != 0) && (sVar2 == local_38[iVar3 + 4])) {
            return 1;
          }
          if ((local_38[iVar3 + 5] != 0) && (sVar2 == local_38[iVar3 + 5])) {
            return 1;
          }
          if ((local_38[iVar3 + 6] != 0) && (sVar2 == local_38[iVar3 + 6])) {
            return 1;
          }
          if ((local_38[iVar3 + 7] != 0) && (sVar2 == local_38[iVar3 + 7])) {
            return 1;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    if ((1 < iVar11) &&
       (sVar2 = fn_0066133c(param_2,*(undefined1 *)(param_1 + 0x3c)), iVar11 <= sVar2)) {
      if (*(byte *)(param_1 + 0x3c) < 100) {
        iVar11 = 0;
        local_128 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)0x0;
        puVar13 = (undefined2 *)0x0;
        local_124 = param_2;
LAB_0024f500:
        iVar12 = param_1 + iVar11 * 2;
        puVar6 = puVar5;
        puVar7 = puVar13;
        if ((*(short *)(iVar12 + 0x44) != 0) && (iVar14 = fn_0020cc00(), iVar14 != 1)) {
          bVar16 = false;
          iVar14 = fn_0066158c(local_124);
          if (iVar11 < iVar14 + 1) {
            iVar14 = 0;
            do {
              iVar3 = fn_006613ec((int)*(short *)(param_1 + 0x1c),iVar14);
              if (iVar3 == *(short *)(iVar12 + 0x44)) goto LAB_0024f58c;
              iVar14 = iVar14 + 1;
            } while (iVar14 < 5);
          }
          iVar14 = fn_006614d0(*(undefined1 *)(param_1 + 0x3c));
          iVar3 = 0;
          if (0 < iVar14) {
            do {
              iVar4 = fn_00661248((int)*(short *)(param_1 + 0x1c),iVar3);
              if (iVar4 == *(short *)(iVar12 + 0x44)) goto LAB_0024f58c;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar14);
          }
          goto LAB_0024f5a0;
        }
        goto LAB_0024f774;
      }
      fn_0017821c(&local_128,param_1,0xf0);
      iVar12 = 0;
      iVar11 = 0;
      do {
        if (*(short *)(param_1 + iVar11 * 2 + 0x44) != 0) {
          iVar14 = fn_00660c64();
          iVar12 = iVar12 + iVar14;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 9);
      iVar11 = fn_0020de2c(&local_128);
      if (iVar12 <= iVar11) {
        return 0;
      }
    }
  }
  return 1;
LAB_0024f58c:
  bVar16 = true;
LAB_0024f5a0:
  iVar14 = 0;
  do {
    iVar3 = fn_006616f4((int)*(short *)(param_1 + 0x1c),iVar14);
    if (iVar3 == *(short *)(iVar12 + 0x44)) goto LAB_0024f774;
    iVar14 = iVar14 + 1;
  } while (iVar14 < 8);
  if (!bVar16) {
    puVar15 = (undefined2 *)(iVar12 + 0x44);
    if (puVar13 == local_128) {
      uVar9 = (int)puVar13 - (int)puVar5 >> 1;
      if (uVar9 < (uint)((int)local_128 - (int)puVar5 >> 1)) {
        if (puVar13 != (undefined2 *)0x0) {
          *puVar13 = puVar13[-1];
        }
        puVar5 = puVar13 + -1;
        puVar7 = puVar13 + 1;
        puVar10 = puVar13;
        if (puVar13 < puVar5) {
          iVar12 = (int)puVar5 - (int)puVar13;
          if (0 < iVar12) {
            if (iVar12 * 0x40000000 < 0) {
              puVar5 = puVar13 + -2;
              puVar10 = puVar13 + -1;
              *puVar10 = *puVar5;
            }
            for (iVar12 = iVar12 >> 2; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar10[-1] = puVar5[-1];
              puVar5 = puVar5 + -2;
              puVar10 = puVar10 + -2;
              *puVar10 = *puVar5;
            }
          }
        }
        else {
          while (puVar13 != puVar5) {
            puVar5 = puVar5 + -1;
            puVar10[-1] = *puVar5;
            puVar10 = puVar10 + -1;
          }
        }
        *puVar13 = *puVar15;
      }
      else {
        uVar8 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
        if (uVar8 < uVar9 + 0x20) {
          uVar8 = uVar9 + 0x20;
        }
        puVar6 = (undefined2 *)fn_00100fc6(uVar8 << 1,0);
        puVar10 = puVar6;
        for (puVar7 = puVar5; puVar7 != puVar13; puVar7 = puVar7 + 1) {
          if (puVar10 != (undefined2 *)0x0) {
            *puVar10 = *puVar7;
          }
          puVar10 = puVar10 + 1;
        }
        puVar7 = (undefined2 *)(((int)puVar13 - (int)puVar5 & 0xfffffffeU) + (int)puVar6);
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = *puVar15;
        }
        puVar7 = puVar5;
        if (puVar13 < puVar5) {
          do {
            puVar7 = puVar7 + 1;
          } while (puVar7 != puVar13);
        }
        fn_001008c4(puVar5,(int)local_128 - (int)puVar5 >> 1,0);
        local_128 = puVar6 + uVar8;
        puVar7 = puVar6 + ((int)puVar13 - (int)puVar5 >> 1) + 1;
      }
    }
    else {
      if (puVar13 != (undefined2 *)0x0) {
        *puVar13 = *puVar15;
      }
      puVar7 = puVar13 + 1;
    }
  }
LAB_0024f774:
  iVar11 = iVar11 + 1;
  puVar5 = puVar6;
  puVar13 = puVar7;
  if (8 < iVar11) {
    uVar9 = (int)puVar7 - (int)puVar6 >> 1;
    if (uVar9 == 0) {
      if (puVar7 < puVar6) {
        do {
          puVar5 = puVar5 + 1;
        } while (puVar5 != puVar7);
      }
      fn_001008c4(puVar6,(int)local_128 - (int)puVar6 >> 1,0);
      return 0;
    }
    for (uVar8 = 0; uVar8 < uVar9; uVar8 = uVar8 + 1) {
    }
    if (puVar7 < puVar6) {
      do {
        puVar5 = puVar5 + 1;
      } while (puVar5 != puVar7);
    }
    fn_001008c4(puVar6,(int)local_128 - (int)puVar6 >> 1,0);
    return 1;
  }
  goto LAB_0024f500;
}


