#include "005cfd88_005d0718.h"



void fn_005d0718(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006e9c1c();
  if ((uint)(*(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3) <= uVar1) {
    fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar1);
  }
  if (*(char *)(*(int *)(param_1 + 0xc0) + uVar1 * 8 + 1) == '\0') {
    fn_005d0980(param_1,1,uVar1);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  fn_0068ab44(param_1,0x100094d);
  return;
}



void fn_005d0610(undefined4 param_1)

{
  fn_002c3d68();
  fn_005d0980(param_1,0);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005d0330(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  short *psVar5;
  uint local_120;
  uint local_11c;
  undefined1 auStack_118 [240];
  uint local_28;
  uint local_24;
  int local_20;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  fn_0017821c(auStack_118,param_3 + 0x10,0xf0);
  fn_005d0ccc(param_1,&local_28,auStack_118,0xffffffff);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 4));
  fn_0017821c(auStack_118,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_28,auStack_118,0);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 8));
  fn_0017821c(auStack_118,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_28,auStack_118,1);
  fn_005cf2b8(param_1,&local_28);
  fn_005cf58c(param_1,&local_28);
  uVar4 = 0;
  iVar3 = (int)(local_24 - local_28) >> 3;
  if (*(byte *)(param_3 + 0x4c) < 100) {
    if (iVar3 != 0) {
      do {
        uVar2 = (int)(local_24 - local_28) >> 3;
        if (uVar2 <= uVar4) {
          local_120 = uVar2;
          fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4);
        }
        iVar3 = local_28 + uVar4 * 8;
        psVar5 = (short *)(iVar3 + 4);
        uVar2 = fn_0068f6a8((int)*psVar5);
        if ((uVar2 <= *(ushort *)(iVar3 + 6)) && (uVar2 = fn_002d81a0((int)*psVar5), uVar2 != 0)) {
          local_120 = 0;
          local_11c = uVar2 & 0xffff;
          iVar3 = *(int *)(param_2 + 4);
          if (iVar3 == *(int *)(param_2 + 8)) {
            fn_007957d0(param_2,iVar3,&local_120);
          }
          else {
            *(int *)(param_2 + 4) = iVar3 + 8;
            if (iVar3 != 0) {
              fn_00166824(iVar3,&local_120);
            }
          }
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < (uint)((int)(local_24 - local_28) >> 3));
    }
  }
  else if (iVar3 != 0) {
    do {
      uVar2 = (int)(local_24 - local_28) >> 3;
      if (uVar2 <= uVar4) {
        local_120 = uVar2;
        fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar4);
      }
      uVar2 = fn_002d81a0((int)*(short *)(local_28 + uVar4 * 8 + 4));
      if (uVar2 != 0) {
        local_120 = 0;
        local_11c = uVar2 & 0xffff;
        iVar3 = *(int *)(param_2 + 4);
        if (iVar3 == *(int *)(param_2 + 8)) {
          fn_007957d0(param_2,iVar3,&local_120);
        }
        else {
          *(int *)(param_2 + 4) = iVar3 + 8;
          if (iVar3 != 0) {
            fn_00166824(iVar3,&local_120);
          }
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)((int)(local_24 - local_28) >> 3));
  }
  uVar4 = local_28;
  if (local_24 < local_28) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 3,0);
  return;
}



/* WARNING: Removing unreachable block (ram,0x005cfeac) */
/* WARNING: Removing unreachable block (ram,0x005cfeb4) */
/* WARNING: Removing unreachable block (ram,0x005cfebc) */
/* WARNING: Removing unreachable block (ram,0x005cfedc) */
/* WARNING: Removing unreachable block (ram,0x005cfe78) */

void fn_005cfd88(undefined4 param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined4 ****ppppuVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint *puVar11;
  undefined4 ***pppuVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  uint uVar18;
  undefined1 auStack_158 [240];
  undefined4 ***local_68;
  uint local_64;
  uint *local_58;
  uint ***local_54 [5];
  uint local_40;
  uint local_3c;
  int local_38;
  undefined4 uStack_30;
  int local_2c;
  int iStack_28;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  uStack_30 = param_1;
  local_2c = param_2;
  iStack_28 = param_3;
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 4));
  fn_0017821c(auStack_158,uVar2,0xf0);
  fn_005d0ccc(param_1,&local_40,auStack_158,0);
  uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 8));
  fn_0017821c(auStack_158,uVar2,0xf0);
  fn_005d0ccc(param_1,&local_40,auStack_158,1);
  puVar10 = (uint *)0x0;
  puVar16 = (uint *)0x0;
  local_68 = (undefined4 ***)((int)(local_3c - local_40) >> 3);
  if ((undefined4 ***)0x1fffffff < local_68) {
    fn_002ff628(8,&DAT_008c7633,&DAT_008c7633,local_68,0x1fffffff);
  }
  if (local_68 != (undefined4 ***)0x0) {
    ppppuVar7 = local_54;
    if ((undefined4 ***)0x1f < local_68) {
      ppppuVar7 = &local_68;
    }
    local_54[0] = (uint ***)&DAT_00000020;
    pppuVar12 = *ppppuVar7;
    puVar10 = (uint *)fn_00100fc6((int)pppuVar12 << 3,0);
    fn_001008c4(0,0,0);
    puVar16 = puVar10 + (int)pppuVar12 * 2;
  }
  uVar15 = 0;
  puVar6 = puVar10;
  puVar11 = puVar10;
  puVar3 = puVar10;
  if ((int)(local_3c - local_40) >> 3 != 0) {
    do {
      local_68 = (undefined4 ***)(local_40 + uVar15 * 8);
      local_64 = local_64 & 0xffffff00;
      puVar3 = puVar11;
      if (puVar6 == puVar16) {
        uVar18 = (int)puVar6 - (int)puVar11 >> 3;
        local_58 = puVar6;
        local_54[0] = (uint ***)&local_68;
        if (uVar18 < (uint)((int)puVar16 - (int)puVar11 >> 3)) {
          puVar10 = puVar6 + 2;
          if (puVar6 != (uint *)0x0) {
            *puVar6 = puVar6[-2];
            puVar6[1] = puVar6[-1];
          }
          puVar11 = puVar6 + -2;
          puVar8 = puVar6;
          if (puVar6 < puVar11) {
            iVar17 = 1;
            iVar4 = (int)puVar11 - (int)puVar6 >> 3;
            if (1 < iVar4 + 1) {
              do {
                puVar11 = puVar11 + -2;
                puVar6 = puVar6 + -2;
                fn_00176fb0(puVar6,puVar11);
                iVar17 = iVar17 + 1;
              } while (iVar17 < iVar4 + 1);
            }
          }
          else {
            while (puVar6 != puVar11) {
              puVar11 = puVar11 + -2;
              fn_00176fb0(puVar8 + -2,puVar11);
              puVar8 = puVar8 + -2;
            }
          }
          fn_00176fb0(local_58,local_54[0]);
        }
        else {
          uVar13 = uVar18 + (uVar18 >> 1) + (uVar18 >> 3);
          if (uVar13 < uVar18 + 0x20) {
            uVar13 = uVar18 + 0x20;
          }
          puVar3 = (uint *)fn_00100fc6(uVar13 << 3,0);
          puVar10 = puVar3;
          for (puVar8 = puVar11; puVar8 != local_58; puVar8 = puVar8 + 2) {
            if (puVar10 != (uint *)0x0) {
              uVar18 = puVar8[1];
              *puVar10 = *puVar8;
              puVar10[1] = uVar18;
            }
            puVar10 = puVar10 + 2;
          }
          puVar10 = (uint *)(((int)local_58 - (int)puVar11 & 0xfffffff8U) + (int)puVar3);
          if (puVar10 != (uint *)0x0) {
            *puVar10 = (uint)local_68;
            puVar10[1] = local_64;
          }
          puVar10 = (uint *)(((int)local_58 - (int)puVar11 & 0xfffffff8U) + (int)puVar3);
          for (puVar8 = local_58; puVar8 != puVar6; puVar8 = puVar8 + 2) {
            puVar9 = puVar10 + 2;
            if (puVar9 != (uint *)0x0) {
              uVar18 = puVar8[1];
              *puVar9 = *puVar8;
              puVar10[3] = uVar18;
            }
            puVar10 = puVar9;
          }
          puVar10 = puVar11;
          if (puVar6 <= puVar11) {
            for (; puVar10 != puVar6; puVar10 = puVar10 + 2) {
            }
          }
          fn_001008c4(puVar11,(int)puVar16 - (int)puVar11 >> 3,0);
          puVar16 = puVar3 + uVar13 * 2;
          puVar10 = puVar3 + ((int)puVar6 - (int)puVar11 >> 3) * 2 + 2;
        }
      }
      else {
        puVar10 = puVar6 + 2;
        if (puVar6 != (uint *)0x0) {
          *puVar6 = (uint)local_68;
          puVar6[1] = local_64;
        }
      }
      uVar15 = uVar15 + 1;
      puVar6 = puVar10;
      puVar11 = puVar3;
    } while (uVar15 < (uint)((int)(local_3c - local_40) >> 3));
  }
  iVar17 = 0;
  iVar4 = fn_00299eec();
  if (0 < iVar4) {
    do {
      iVar4 = (int)(short)iVar17;
      pppuVar12 = (undefined4 ***)fn_00299e00();
      puVar6 = puVar3;
      if (pppuVar12 != (undefined4 ***)0x0) {
        for (; puVar10 != puVar6; puVar6 = puVar6 + 2) {
          *(undefined1 *)(puVar6 + 1) = 0;
        }
        iVar14 = 0;
        local_68 = (undefined4 ***)0x0;
        if (0 < (int)pppuVar12) {
          do {
            iVar5 = fn_00299ea4(iVar4,iVar14);
            uVar15 = fn_00299e7c(iVar4,iVar14);
            for (puVar6 = puVar3; puVar10 != puVar6; puVar6 = puVar6 + 2) {
              if ((((char)puVar6[1] == '\0') && (*(short *)(*puVar6 + 4) == iVar5)) &&
                 (uVar15 <= *(ushort *)(*puVar6 + 6))) {
                local_68 = (undefined4 ***)((int)local_68 + 1);
                *(undefined1 *)(puVar6 + 1) = 1;
                break;
              }
            }
            iVar14 = iVar14 + 1;
          } while (iVar14 < (int)pppuVar12);
        }
        if (local_68 == pppuVar12) {
          local_68 = (undefined4 ***)0x0;
          local_64 = 0;
          uVar1 = fn_00299ecc(iVar4);
          local_64 = CONCAT22(((unsigned int)(local_64) >> 16) & 0xffff,uVar1);
          iVar4 = *(int *)(local_2c + 4);
          if (iVar4 == *(int *)(local_2c + 8)) {
            fn_007957d0(local_2c,iVar4,&local_68);
          }
          else {
            *(int *)(local_2c + 4) = iVar4 + 8;
            if (iVar4 != 0) {
              fn_00166824(iVar4,&local_68);
            }
          }
        }
      }
      iVar17 = iVar17 + 1;
      iVar4 = fn_00299eec();
    } while (iVar17 < iVar4);
  }
  puVar6 = puVar3;
  if (puVar10 < puVar3) {
    do {
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar10);
  }
  fn_001008c4(puVar3,(int)puVar16 - (int)puVar3 >> 3,0);
  uVar15 = local_40;
  if (local_3c < local_40) {
    do {
      uVar15 = uVar15 + 8;
    } while (uVar15 != local_3c);
  }
  fn_001008c4(local_40,(int)(local_38 - local_40) >> 3,0);
  return;
}


