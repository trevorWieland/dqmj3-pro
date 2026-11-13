#include "00253d18_00254430.h"



void fn_00254430(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  
  uVar5 = 0;
  do {
    uVar2 = 0;
    iVar3 = param_1 + uVar5 * 0xc;
    iVar4 = *(int *)(iVar3 + 0x1c);
    uVar1 = *(int *)(iVar3 + 0x20) - iVar4 >> 4;
    if (uVar1 != 0) {
      do {
        if (*(int *)(iVar4 + uVar2 * 0x10 + 4) == param_2) {
          puVar6 = (undefined4 *)(*(int *)(param_1 + uVar5 * 0xc + 0x1c) + uVar2 * 0x10);
          if ((puVar6 != (undefined4 *)0x0) &&
             (iVar3 = puVar6[3], puVar6[3] = iVar3 + -1, iVar3 + -1 == 0)) {
            fn_0012f208(param_1,puVar6[1]);
            fn_0012d73c(puVar6[2]);
            *puVar6 = 0xffffffff;
            puVar6[2] = 0;
          }
          return;
        }
        uVar2 = uVar2 + 1;
      } while (uVar2 < uVar1);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0xc);
  return;
}



undefined4 fn_002543a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [128];
  
  iVar1 = fn_006b3f44(*(undefined4 *)(param_1 + 0xac));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_00101a50(auStack_88,0x80,L"rom:/data/Battle/Map/%s.bch");
    uVar2 = fn_0016b874(param_1,7,0,auStack_88,0,0);
  }
  return uVar2;
}



undefined4 fn_00254310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [128];
  
  iVar1 = fn_006b3f1c(*(undefined4 *)(param_1 + 0xac));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_00101a50(auStack_88,0x80,L"rom:/data/Battle/Map/%s.bch");
    uVar2 = fn_0016b874(param_1,5,0,auStack_88,0,0);
  }
  return uVar2;
}



undefined4 fn_00254280(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_88 [128];
  
  iVar1 = fn_006b3ef0(*(undefined4 *)(param_1 + 0xac));
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    fn_00101a50(auStack_88,0x80,L"rom:/data/Battle/Map/%s.bch");
    uVar2 = fn_0016b874(param_1,6,0,auStack_88,0,0);
  }
  return uVar2;
}



undefined4 fn_002541e4(int param_1,int param_2,undefined8 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  
  uVar5 = 0;
  do {
    uVar4 = 0;
    iVar3 = param_1 + uVar5 * 0xc;
    iVar6 = *(int *)(iVar3 + 0x1c);
    uVar1 = *(int *)(iVar3 + 0x20) - iVar6 >> 4;
    if (uVar1 != 0) {
      do {
        if (*(int *)(iVar6 + uVar4 * 0x10 + 4) == param_2) {
          iVar3 = *(int *)(param_1 + uVar5 * 0xc + 0x1c) + uVar4 * 0x10;
          if (iVar3 == 0) {
            return 0;
          }
          uVar2 = fn_00145ac0(*(undefined4 *)(iVar3 + 8));
          if (param_3 == (undefined8 *)0x0) {
            return uVar2;
          }
          uVar7 = fn_0012a26c(*(undefined4 *)(iVar3 + 8));
          *param_3 = uVar7;
          return uVar2;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < uVar1);
    }
    uVar5 = uVar5 + 1;
    if (0xb < uVar5) {
      return 0;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x00253f30) */
/* WARNING: Removing unreachable block (ram,0x00253f38) */
/* WARNING: Removing unreachable block (ram,0x00253f44) */
/* WARNING: Removing unreachable block (ram,0x00253f60) */
/* WARNING: Removing unreachable block (ram,0x00253f7c) */
/* WARNING: Removing unreachable block (ram,0x00253f80) */
/* WARNING: Removing unreachable block (ram,0x00253f88) */
/* WARNING: Removing unreachable block (ram,0x00253f90) */
/* WARNING: Removing unreachable block (ram,0x00253fa0) */
/* WARNING: Removing unreachable block (ram,0x00253fa8) */
/* WARNING: Removing unreachable block (ram,0x00253fd8) */

void fn_00253d18(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_30;
  uint local_2c;
  int local_28;
  
  iVar16 = 0;
  local_28 = param_1;
  do {
    iVar12 = local_28 + iVar16 * 0xc;
    puVar2 = *(undefined4 **)(iVar12 + 0x20);
    puVar6 = *(undefined4 **)(iVar12 + 0x1c);
    uVar13 = ((&DAT_007ba728)[iVar16 * 2] - (&DAT_007ba724)[iVar16 * 2]) + 1;
    puVar14 = (uint *)(iVar12 + 0x1c);
    local_30 = (int)puVar2 - (int)puVar6 >> 4;
    if (local_30 < uVar13) {
      iVar15 = uVar13 - local_30;
      if (iVar15 != 0) {
        local_30 = iVar15 + local_30;
        if ((uint)(*(int *)(iVar12 + 0x24) - (int)puVar6 >> 4) < local_30) {
          uVar3 = (int)(*(int *)(iVar12 + 0x20) - *puVar14) >> 4;
          local_2c = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (local_2c < uVar3 + 0x20) {
            local_2c = uVar3 + 0x20;
          }
          puVar7 = &local_2c;
          if (local_2c <= local_30) {
            puVar7 = &local_30;
          }
          uVar3 = *puVar7;
          puVar4 = (undefined4 *)fn_00100fc6(uVar3 << 4,0);
          puVar8 = puVar4;
          for (puVar6 = (undefined4 *)*puVar14; puVar6 != puVar2; puVar6 = puVar6 + 4) {
            if (puVar8 != (undefined4 *)0x0) {
              uVar17 = puVar6[1];
              uVar18 = puVar6[2];
              uVar19 = puVar6[3];
              *puVar8 = *puVar6;
              puVar8[1] = uVar17;
              puVar8[2] = uVar18;
              puVar8[3] = uVar19;
            }
            puVar8 = puVar8 + 4;
          }
          puVar6 = (undefined4 *)((int)puVar4 + ((int)puVar2 - *puVar14 & 0xfffffff0));
          for (iVar10 = iVar15; iVar10 != 0; iVar10 = iVar10 + -1) {
            if (puVar6 != (undefined4 *)0x0) {
              *puVar6 = 0;
              puVar6[1] = 0;
              puVar6[2] = 0;
              puVar6[3] = 0;
            }
            puVar6 = puVar6 + 4;
          }
          puVar8 = *(undefined4 **)(iVar12 + 0x20);
          puVar6 = puVar4 + (iVar15 + ((int)((int)puVar2 - *puVar14) >> 4)) * 4;
          for (; puVar2 != puVar8; puVar2 = puVar2 + 4) {
            if (puVar6 != (undefined4 *)0x0) {
              uVar17 = puVar2[1];
              uVar18 = puVar2[2];
              uVar19 = puVar2[3];
              *puVar6 = *puVar2;
              puVar6[1] = uVar17;
              puVar6[2] = uVar18;
              puVar6[3] = uVar19;
            }
            puVar6 = puVar6 + 4;
          }
          uVar5 = *puVar14;
          uVar9 = *(uint *)(iVar12 + 0x20);
          uVar1 = uVar5;
          if (uVar9 <= uVar5) {
            for (; uVar1 != uVar9; uVar1 = uVar1 + 0x10) {
            }
          }
          fn_001008c4(uVar5,(int)(*(int *)(iVar12 + 0x24) - uVar5) >> 4,0);
          *(undefined4 **)(iVar12 + 0x24) = puVar4 + uVar3 * 4;
          *puVar14 = (uint)puVar4;
          *(undefined4 **)(iVar12 + 0x20) = puVar4 + ((int)(uVar9 - uVar5) >> 4) * 4 + iVar15 * 4;
        }
        else {
          *(undefined4 **)(iVar12 + 0x20) = puVar2 + iVar15 * 4;
          if (puVar2 + iVar15 * 4 < puVar2) {
            puVar6 = puVar2;
            for (puVar8 = puVar2 + iVar15 * -4; puVar8 != puVar2; puVar8 = puVar8 + 4) {
              if (puVar6 != (undefined4 *)0x0) {
                uVar17 = puVar8[1];
                uVar18 = puVar8[2];
                uVar19 = puVar8[3];
                *puVar6 = *puVar8;
                puVar6[1] = uVar17;
                puVar6[2] = uVar18;
                puVar6[3] = uVar19;
              }
              puVar6 = puVar6 + 4;
            }
            puVar8 = puVar2 + iVar15 * -4;
            puVar6 = puVar2;
            if (puVar2 < puVar8) {
              iVar10 = (int)puVar8 - (int)puVar2;
              if (0 < iVar10) {
                puVar6 = puVar8;
                puVar4 = puVar2;
                if (iVar10 * 0x8000000 < 0) {
                  puVar6 = puVar8 + -4;
                  puVar4 = puVar2 + -4;
                  uVar17 = puVar8[-3];
                  uVar18 = puVar8[-2];
                  uVar19 = puVar8[-1];
                  *puVar4 = *puVar6;
                  puVar2[-3] = uVar17;
                  puVar2[-2] = uVar18;
                  puVar2[-1] = uVar19;
                }
                for (iVar10 = iVar10 >> 5; iVar10 != 0; iVar10 = iVar10 + -1) {
                  uVar17 = puVar6[-3];
                  uVar18 = puVar6[-2];
                  uVar19 = puVar6[-1];
                  puVar4[-4] = puVar6[-4];
                  puVar4[-3] = uVar17;
                  puVar4[-2] = uVar18;
                  puVar4[-1] = uVar19;
                  uVar17 = puVar6[-7];
                  uVar18 = puVar6[-6];
                  uVar19 = puVar6[-5];
                  puVar4[-8] = puVar6[-8];
                  puVar4[-7] = uVar17;
                  puVar4[-6] = uVar18;
                  puVar4[-5] = uVar19;
                  puVar6 = puVar6 + -8;
                  puVar4 = puVar4 + -8;
                }
              }
            }
            else {
              while (puVar2 != puVar8) {
                uVar17 = puVar8[-3];
                uVar18 = puVar8[-2];
                uVar19 = puVar8[-1];
                puVar6[-4] = puVar8[-4];
                puVar6[-3] = uVar17;
                puVar6[-2] = uVar18;
                puVar6[-1] = uVar19;
                puVar6 = puVar6 + -4;
                puVar8 = puVar8 + -4;
              }
            }
            puVar6 = puVar2 + iVar15 * 4;
            if (puVar2 < puVar6) {
              iVar15 = (int)puVar6 - (int)puVar2;
              if (0 < iVar15) {
                puVar6 = puVar2;
                if (iVar15 * 0x8000000 < 0) {
                  *puVar2 = 0;
                  puVar2[1] = 0;
                  puVar6 = puVar2 + 4;
                  puVar2[2] = 0;
                  puVar2[3] = 0;
                }
                for (iVar15 = iVar15 >> 5; iVar15 != 0; iVar15 = iVar15 + -1) {
                  *puVar6 = 0;
                  puVar6[1] = 0;
                  puVar6[2] = 0;
                  puVar6[3] = 0;
                  puVar6[4] = 0;
                  puVar6[5] = 0;
                  puVar6[6] = 0;
                  puVar6[7] = 0;
                  puVar6 = puVar6 + 8;
                }
              }
            }
            else {
              for (; puVar2 != puVar6; puVar2 = puVar2 + 4) {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
              }
            }
          }
          else {
            for (; iVar15 != 0; iVar15 = iVar15 + -1) {
              if (puVar2 != (undefined4 *)0x0) {
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2[2] = 0;
                puVar2[3] = 0;
              }
              puVar2 = puVar2 + 4;
            }
          }
        }
      }
    }
    else if ((uVar13 < local_30) && (puVar8 = puVar6 + uVar13 * 4, puVar6 != puVar2)) {
      puVar6 = puVar8;
      if (puVar2 < puVar8) {
        do {
          puVar6 = puVar6 + 4;
        } while (puVar6 != puVar2);
      }
      *(uint *)(iVar12 + 0x20) = (int)puVar2 - ((int)puVar2 - (int)puVar8 & 0xfffffff0U);
    }
    iVar15 = 0;
    if (0 < (int)uVar13) {
      do {
        puVar2 = (undefined4 *)(*(int *)(iVar12 + 0x1c) + iVar15 * 0x10);
        *puVar2 = 0xffffffff;
        puVar2[1] = 0xffffffff;
        puVar2[2] = 0;
        puVar2[3] = 0;
        iVar10 = iVar15 * 0x10;
        iVar11 = (&DAT_007ba724)[iVar16 * 2] + iVar15;
        iVar15 = iVar15 + 1;
        *(int *)(*(int *)(iVar12 + 0x1c) + iVar10 + 4) = iVar11;
      } while (iVar15 < (int)uVar13);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0xc);
  return;
}


