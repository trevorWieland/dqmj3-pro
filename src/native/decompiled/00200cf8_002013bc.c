#include "00200cf8_002013bc.h"



void fn_002013bc(undefined4 *param_1)

{
  fn_001ff9c4(*param_1);
  return;
}



bool fn_00201384(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = *param_1;
  uVar3 = *(uint *)(iVar1 + 0x14);
  if (*(uint *)(iVar1 + 0x18) < uVar3) {
    iVar2 = (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 8)) - uVar3;
  }
  else {
    iVar2 = -uVar3;
  }
  return *(uint *)(iVar1 + 0x18) + iVar2 != 0;
}



/* WARNING: Removing unreachable block (ram,0x00200f38) */
/* WARNING: Removing unreachable block (ram,0x00200f44) */
/* WARNING: Removing unreachable block (ram,0x00200f10) */
/* WARNING: Removing unreachable block (ram,0x00200f14) */
/* WARNING: Removing unreachable block (ram,0x00200f18) */
/* WARNING: Removing unreachable block (ram,0x00200f1c) */
/* WARNING: Removing unreachable block (ram,0x00200f20) */
/* WARNING: Removing unreachable block (ram,0x00200f60) */
/* WARNING: Removing unreachable block (ram,0x00200f70) */
/* WARNING: Removing unreachable block (ram,0x00200f48) */
/* WARNING: Removing unreachable block (ram,0x00200f50) */
/* WARNING: Removing unreachable block (ram,0x00200f54) */
/* WARNING: Removing unreachable block (ram,0x00200f58) */

undefined4 * fn_00200cf8(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint *puVar15;
  undefined8 uVar16;
  uint local_38;
  uint local_34 [4];
  
  *param_1 = 0;
  param_1[1] = &DAT_00858878;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0xffffffff;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0xffffffff;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x45] = 0;
  *(undefined1 *)(param_1 + 0x76) = 0;
  iVar2 = fn_00145b00(0x50,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_0069c558();
  }
  param_1[0x77] = uVar3;
  *(undefined1 *)(param_1 + 0x78) = 0;
  param_1[0x79] = 0;
  param_1[0x82] = 0xffffffff;
  *(undefined1 *)(param_1 + 0xad) = 0;
  param_1[0xae] = 0;
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xb1] = 0;
  param_1[0xb2] = 0;
  param_1[0xb3] = 0;
  param_1[0xb4] = 0;
  param_1[0xb5] = 0;
  param_1[0xb6] = 0;
  *(undefined1 *)(param_1 + 0xb7) = 0;
  *(undefined1 *)((int)param_1 + 0x2dd) = 0;
  *(undefined1 *)((int)param_1 + 0x2de) = 0;
  puVar6 = (undefined1 *)param_1[3];
  puVar12 = (undefined1 *)param_1[2];
  puVar15 = param_1 + 2;
  uVar11 = (int)puVar6 - (int)puVar12;
  if (uVar11 < 0x21) {
    iVar2 = 0x21 - uVar11;
    if (iVar2 != 0) {
      uVar11 = uVar11 + iVar2;
      if ((uint)(param_1[4] - (int)puVar12) < uVar11) {
        local_38 = uVar11;
        uVar14 = param_1[3] - *puVar15;
        local_34[0] = uVar14 + (uVar14 >> 1) + (uVar14 >> 3);
        if (local_34[0] < uVar14 + 0x20) {
          local_34[0] = uVar14 + 0x20;
        }
        puVar8 = local_34;
        if (local_34[0] <= uVar11) {
          puVar8 = &local_38;
        }
        uVar11 = *puVar8;
        puVar13 = (undefined1 *)fn_00100fc6(uVar11,0);
        puVar4 = puVar13;
        for (puVar12 = (undefined1 *)*puVar15; puVar12 != puVar6; puVar12 = puVar12 + 1) {
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = *puVar12;
          }
          puVar4 = puVar4 + 1;
        }
        puVar12 = puVar13 + ((int)puVar6 - *puVar15);
        for (iVar10 = iVar2; iVar10 != 0; iVar10 = iVar10 + -1) {
          if (puVar12 != (undefined1 *)0x0) {
            *puVar12 = 0;
          }
          puVar12 = puVar12 + 1;
        }
        puVar4 = (undefined1 *)param_1[3];
        puVar12 = puVar13 + (int)(puVar6 + (iVar2 - *puVar15));
        for (; puVar6 != puVar4; puVar6 = puVar6 + 1) {
          if (puVar12 != (undefined1 *)0x0) {
            *puVar12 = *puVar6;
          }
          puVar12 = puVar12 + 1;
        }
        uVar5 = *puVar15;
        uVar9 = param_1[3];
        uVar14 = uVar5;
        if (uVar9 < uVar5) {
          do {
            uVar14 = uVar14 + 1;
          } while (uVar14 != uVar9);
        }
        fn_001008c4(uVar5,param_1[4] - uVar5,0);
        *puVar15 = (uint)puVar13;
        param_1[3] = puVar13 + iVar2 + (uVar9 - uVar5);
        param_1[4] = puVar13 + uVar11;
      }
      else {
        puVar12 = puVar6 + iVar2;
        param_1[3] = puVar6 + iVar2;
        if (puVar12 < puVar6) {
          puVar7 = puVar6 + -iVar2;
          puVar13 = puVar6;
          for (puVar4 = puVar7; puVar4 != puVar6; puVar4 = puVar4 + 1) {
            if (puVar13 != (undefined1 *)0x0) {
              *puVar13 = *puVar4;
            }
            puVar13 = puVar13 + 1;
          }
          puVar4 = puVar6;
          if (puVar6 < puVar7) {
            uVar11 = (int)puVar7 - (int)puVar6;
            if (0 < (int)uVar11) {
              if ((uVar11 & 1) != 0) {
                puVar7 = puVar7 + -1;
                puVar4 = puVar6 + -1;
                *puVar4 = *puVar7;
              }
              for (iVar2 = (int)uVar11 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar4[-1] = puVar7[-1];
                puVar7 = puVar7 + -2;
                puVar4 = puVar4 + -2;
                *puVar4 = *puVar7;
              }
            }
          }
          else {
            while (puVar6 != puVar7) {
              puVar7 = puVar7 + -1;
              puVar4[-1] = *puVar7;
              puVar4 = puVar4 + -1;
            }
          }
          if (puVar6 < puVar12) {
            uVar11 = (int)puVar12 - (int)puVar6;
            if (0 < (int)uVar11) {
              puVar12 = puVar6;
              if ((uVar11 & 1) != 0) {
                puVar12 = puVar6 + 1;
                *puVar6 = 0;
              }
              for (iVar2 = (int)uVar11 >> 1; iVar2 != 0; iVar2 = iVar2 + -1) {
                puVar6 = puVar12 + 1;
                *puVar12 = 0;
                puVar12 = puVar12 + 2;
                *puVar6 = 0;
              }
            }
          }
          else {
            for (; puVar6 != puVar12; puVar6 = puVar6 + 1) {
              *puVar6 = 0;
            }
          }
        }
        else {
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            if (puVar6 != (undefined1 *)0x0) {
              *puVar6 = 0;
            }
            puVar6 = puVar6 + 1;
          }
        }
      }
    }
  }
  else if ((0x21 < uVar11) && (puVar4 = puVar12 + 0x21, puVar12 != puVar6)) {
    puVar12 = puVar4;
    if (puVar6 < puVar4) {
      do {
        puVar12 = puVar12 + 1;
      } while (puVar12 != puVar6);
    }
    param_1[3] = puVar4;
  }
  iVar10 = 0;
  iVar2 = 0;
  do {
    iVar10 = iVar10 + 2;
    param_1[iVar2 + 7] = 0xffffffff;
    param_1[iVar2 + 8] = 0xffffffff;
    iVar2 = iVar2 + 2;
  } while (iVar10 < 0x20);
  param_1[0x31] = 0;
  param_1[0x27] = 0xffffffff;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  uVar16 = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  uVar11 = 0;
  do {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
      DAT_008f9e2c = (undefined4)uVar16;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar1 = DAT_008f9e30;
    uVar3 = DAT_008f9e2c;
    uVar14 = uVar11 + 1;
    param_1[uVar11 * 3 + 0x3b] = DAT_008f9e34;
    param_1[uVar11 * 3 + 0x39] = uVar3;
    param_1[uVar11 * 3 + 0x3a] = uVar1;
    uVar11 = uVar14;
  } while (uVar14 < 4);
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  uVar11 = 0;
  do {
    if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
      DAT_008f9e2c = (undefined4)uVar16;
      DAT_008f9e30 = DAT_008f9e2c;
      DAT_008f9e34 = DAT_008f9e2c;
    }
    uVar1 = DAT_008f9e34;
    uVar3 = DAT_008f9e30;
    uVar14 = uVar11 + 1;
    param_1[uVar11 * 3 + 0x6a] = DAT_008f9e2c;
    param_1[uVar11 * 3 + 0x6b] = uVar3;
    param_1[uVar11 * 3 + 0x6c] = uVar1;
    uVar11 = uVar14;
  } while (uVar14 < 4);
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  param_1[0x9a] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x9d] = 0;
  param_1[0x9e] = 0;
  param_1[0x9f] = 0;
  param_1[0xa0] = 0;
  param_1[0xa1] = 0;
  param_1[0xa2] = 0;
  param_1[0xa3] = 0;
  param_1[0xa4] = 0;
  param_1[0xa5] = 0;
  param_1[0xa6] = 0;
  param_1[0xa7] = 0;
  param_1[0xa8] = 0;
  param_1[0xa9] = 0;
  param_1[0xaa] = 0;
  param_1[0xab] = 0;
  param_1[0xac] = 0;
  return param_1;
}


