#include "003149fc_00315100.h"



int fn_00315100(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  uVar3 = *(byte *)(param_1 + 0x3e) & 0x7f;
  if (9 < uVar3) {
    uVar3 = 0;
  }
  iVar2 = uVar3 * 5;
  if ((char)(&DAT_007c339c)[iVar2] < 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (uint)*(byte *)(param_1 + 0x38) << (((int)(char)(&DAT_007c339c)[iVar2] & 0x1fU) << 3);
  }
  if ((char)(&DAT_007c339d)[iVar2] < 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (uint)*(byte *)(param_1 + 0x39) << (((int)(char)(&DAT_007c339d)[iVar2] & 0x1fU) << 3);
  }
  if ((char)(&DAT_007c339e)[iVar2] < 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = (uint)*(byte *)(param_1 + 0x3f) << (((int)(char)(&DAT_007c339e)[iVar2] & 0x1fU) << 3);
  }
  uVar3 = (uint)(char)(&DAT_007c339f)[iVar2];
  bVar7 = -1 < (int)uVar3;
  if (bVar7) {
    uVar3 = uVar3 << 3;
  }
  if (bVar7) {
    iVar1 = ((*(uint *)(param_1 + 0x40) & 0x3ff) >> 2) << (uVar3 & 0xff);
  }
  else {
    iVar1 = 0;
  }
  if ((char)(&DAT_007c33a0)[iVar2] < 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(uint *)(param_1 + 0x40) >> 0x18) <<
            (((int)(char)(&DAT_007c33a0)[iVar2] & 0x1fU) << 3);
  }
  return iVar2 + iVar6 + iVar4 + iVar5 + iVar1;
}



/* WARNING: Removing unreachable block (ram,0x00314f98) */
/* WARNING: Removing unreachable block (ram,0x00314f9c) */
/* WARNING: Removing unreachable block (ram,0x00314fa0) */
/* WARNING: Removing unreachable block (ram,0x00314fa4) */
/* WARNING: Removing unreachable block (ram,0x00314fa8) */

undefined4 fn_003149fc(int param_1,undefined4 param_2)

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
  short local_3c [12];
  
  iVar11 = 0;
  iVar12 = 0;
  do {
    iVar14 = (int)*(short *)(param_1 + iVar12 * 2 + 0x44);
    if (iVar14 != 0) {
      iVar3 = fn_003159fc(iVar14);
      if (iVar3 == 0) {
        return 1;
      }
      iVar14 = fn_0020aca8(iVar14);
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
  iVar12 = fn_0020b20c((int)*(short *)(param_1 + 0x1c),0);
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
        local_3c[iVar12] = 0;
      }
      else {
        sVar2 = fn_002d6dd4();
        local_3c[iVar12] = sVar2;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 9);
    iVar12 = 0;
    do {
      sVar2 = local_3c[iVar12];
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
          if ((local_3c[iVar14] != 0) && (sVar2 == local_3c[iVar14])) {
            return 1;
          }
        }
        for (; iVar3 < 9; iVar3 = iVar3 + 8) {
          if ((local_3c[iVar3] != 0) && (sVar2 == local_3c[iVar3])) {
            return 1;
          }
          if ((local_3c[iVar3 + 1] != 0) && (sVar2 == local_3c[iVar3 + 1])) {
            return 1;
          }
          if ((local_3c[iVar3 + 2] != 0) && (sVar2 == local_3c[iVar3 + 2])) {
            return 1;
          }
          if ((local_3c[iVar3 + 3] != 0) && (sVar2 == local_3c[iVar3 + 3])) {
            return 1;
          }
          if ((local_3c[iVar3 + 4] != 0) && (sVar2 == local_3c[iVar3 + 4])) {
            return 1;
          }
          if ((local_3c[iVar3 + 5] != 0) && (sVar2 == local_3c[iVar3 + 5])) {
            return 1;
          }
          if ((local_3c[iVar3 + 6] != 0) && (sVar2 == local_3c[iVar3 + 6])) {
            return 1;
          }
          if ((local_3c[iVar3 + 7] != 0) && (sVar2 == local_3c[iVar3 + 7])) {
            return 1;
          }
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < 8);
    if ((1 < iVar11) &&
       (sVar2 = fn_0020b090(param_2,*(undefined1 *)(param_1 + 0x3c)), iVar11 <= sVar2)) {
      if (*(byte *)(param_1 + 0x3c) < 100) {
        iVar11 = 0;
        local_128 = (undefined2 *)0x0;
        puVar5 = (undefined2 *)0x0;
        puVar13 = (undefined2 *)0x0;
        local_124 = param_2;
LAB_00314d90:
        iVar12 = param_1 + iVar11 * 2;
        puVar6 = puVar5;
        puVar7 = puVar13;
        if ((*(short *)(iVar12 + 0x44) != 0) && (iVar14 = fn_002d6dd4(), iVar14 != 1)) {
          bVar16 = false;
          iVar14 = fn_0020b1b4(local_124);
          if (iVar11 < iVar14 + 1) {
            iVar14 = 0;
            do {
              iVar3 = fn_0020b124((int)*(short *)(param_1 + 0x1c),iVar14);
              if (iVar3 == *(short *)(iVar12 + 0x44)) goto LAB_00314e1c;
              iVar14 = iVar14 + 1;
            } while (iVar14 < 5);
          }
          iVar14 = fn_0020b14c(*(undefined1 *)(param_1 + 0x3c));
          iVar3 = 0;
          if (0 < iVar14) {
            do {
              iVar4 = fn_0020afb4((int)*(short *)(param_1 + 0x1c),iVar3);
              if (iVar4 == *(short *)(iVar12 + 0x44)) goto LAB_00314e1c;
              iVar3 = iVar3 + 1;
            } while (iVar3 < iVar14);
          }
          goto LAB_00314e30;
        }
        goto LAB_00315004;
      }
      fn_0017821c(&local_128,param_1,0xec);
      iVar12 = 0;
      iVar11 = 0;
      do {
        if (*(short *)(param_1 + iVar11 * 2 + 0x44) != 0) {
          iVar14 = fn_0020ac8c();
          iVar12 = iVar12 + iVar14;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 9);
      iVar11 = fn_002d731c(&local_128);
      if (iVar12 <= iVar11) {
        return 0;
      }
    }
  }
  return 1;
LAB_00314e1c:
  bVar16 = true;
LAB_00314e30:
  iVar14 = 0;
  do {
    iVar3 = fn_0020b20c((int)*(short *)(param_1 + 0x1c),iVar14);
    if (iVar3 == *(short *)(iVar12 + 0x44)) goto LAB_00315004;
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
LAB_00315004:
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
  goto LAB_00314d90;
}


