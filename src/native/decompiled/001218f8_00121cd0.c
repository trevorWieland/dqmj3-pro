#include "001218f8_00121cd0.h"



void fn_00121cd0(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 *puVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint local_28;
  uint local_24 [2];
  
  uVar13 = 0;
  do {
    if (((-1 < (int)uVar13) &&
        (uVar13 < (uint)((*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x34))) &&
       (*(int *)(param_1 + 4) + uVar13 * 0x34 != 0)) {
      fn_0012f208(param_1,uVar13);
    }
    if (*(int *)(*(int *)(param_1 + 0x1c) + uVar13 * 4) != 0) {
      fn_0012d73c();
    }
    uVar13 = uVar13 + 1;
  } while ((int)uVar13 < 0x8c);
  puVar12 = (uint *)(param_1 + 0x1c);
  puVar10 = (undefined4 *)*puVar12;
  puVar7 = *(undefined4 **)(param_1 + 0x20);
  if (puVar10 != puVar7) {
    puVar8 = puVar10;
    if (puVar7 <= puVar10) {
      do {
        puVar8 = puVar8 + 1;
      } while (puVar8 != puVar7);
    }
    puVar7 = (undefined4 *)((int)puVar7 - ((int)puVar7 - (int)puVar10 & 0xfffffffcU));
    *(undefined4 **)(param_1 + 0x20) = puVar7;
  }
  if ((uint)(*(int *)(param_1 + 0x24) - (int)puVar10 >> 2) <
      ((int)puVar7 - (int)puVar10 >> 2) + 0x8cU) {
    local_28 = ((int)puVar7 - (int)puVar10 >> 2) + 0x8c;
    uVar13 = (int)(*(int *)(param_1 + 0x20) - *puVar12) >> 2;
    local_24[0] = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_24[0] < uVar13 + 0x20) {
      local_24[0] = uVar13 + 0x20;
    }
    puVar3 = local_24;
    if (local_24[0] <= local_28) {
      puVar3 = &local_28;
    }
    uVar13 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar8 = puVar4;
    for (puVar7 = (undefined4 *)*puVar12; puVar7 != puVar10; puVar7 = puVar7 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar7;
      }
      puVar8 = puVar8 + 1;
    }
    iVar2 = 0x8c;
    puVar7 = (undefined4 *)(((int)puVar10 - *puVar12 & 0xfffffffc) + (int)puVar4);
    do {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = 0;
      }
      iVar2 = iVar2 + -1;
      puVar7 = puVar7 + 1;
    } while (iVar2 != 0);
    puVar8 = *(undefined4 **)(param_1 + 0x20);
    puVar7 = puVar4 + ((int)((int)puVar10 - *puVar12) >> 2) + 0x8c;
    for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
      if (puVar7 != (undefined4 *)0x0) {
        *puVar7 = *puVar10;
      }
      puVar7 = puVar7 + 1;
    }
    uVar5 = *puVar12;
    uVar9 = *(uint *)(param_1 + 0x20);
    uVar6 = uVar5;
    if (uVar9 < uVar5) {
      do {
        uVar6 = uVar6 + 4;
      } while (uVar6 != uVar9);
    }
    fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x24) - uVar5) >> 2,0);
    *(undefined4 **)(param_1 + 0x24) = puVar4 + uVar13;
    *(undefined4 **)(param_1 + 0x20) = puVar4 + ((int)(uVar9 - uVar5) >> 2) + 0x8c;
    *puVar12 = (uint)puVar4;
    return;
  }
  puVar8 = puVar10 + 0x8c;
  *(undefined4 **)(param_1 + 0x20) = puVar7 + 0x8c;
  if (puVar8 < puVar7) {
    puVar1 = puVar7 + -0x8c;
    puVar14 = puVar7;
    for (puVar4 = puVar1; puVar4 != puVar7; puVar4 = puVar4 + 1) {
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = *puVar4;
      }
      puVar14 = puVar14 + 1;
    }
    if (puVar10 < puVar1) {
      if (0 < (int)puVar1 - (int)puVar10) {
        iVar2 = (int)puVar1 - (int)puVar10 >> 2;
        iVar11 = 0;
        do {
          iVar2 = iVar2 + -1;
          puVar7[iVar11 + -1] = puVar1[iVar11 + -1];
          iVar11 = iVar11 + -1;
        } while (iVar2 != 0);
      }
    }
    else {
      while (puVar10 != puVar1) {
        puVar1 = puVar1 + -1;
        puVar7 = puVar7 + -1;
        *puVar7 = *puVar1;
      }
    }
    if (puVar10 < puVar8) {
      iVar2 = (int)puVar8 - (int)puVar10;
      if (0 < iVar2) {
        puVar7 = puVar10;
        if (iVar2 * 0x20000000 < 0) {
          puVar7 = puVar10 + 1;
          *puVar10 = 0;
        }
        iVar2 = iVar2 >> 3;
        if (iVar2 != 0) {
          do {
            puVar10 = puVar7 + 1;
            *puVar7 = 0;
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + 2;
            *puVar10 = 0;
          } while (iVar2 != 0);
          return;
        }
      }
    }
    else {
      for (; puVar10 != puVar8; puVar10 = puVar10 + 1) {
        *puVar10 = 0;
      }
    }
  }
  else {
    iVar2 = (int)puVar7 - (int)puVar10;
    puVar4 = puVar7;
    for (iVar11 = 0x8c - (iVar2 >> 2); puVar14 = puVar10, iVar11 != 0; iVar11 = iVar11 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
      }
      puVar4 = puVar4 + 1;
    }
    for (; puVar14 != puVar7; puVar14 = puVar14 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar14;
      }
      puVar8 = puVar8 + 1;
    }
    if (puVar10 < puVar7) {
      if (0 < iVar2) {
        puVar7 = puVar10;
        if (iVar2 * 0x20000000 < 0) {
          puVar7 = puVar10 + 1;
          *puVar10 = 0;
        }
        iVar2 = iVar2 >> 3;
        if (iVar2 != 0) {
          do {
            puVar10 = puVar7 + 1;
            *puVar7 = 0;
            iVar2 = iVar2 + -1;
            puVar7 = puVar7 + 2;
            *puVar10 = 0;
          } while (iVar2 != 0);
          return;
        }
      }
    }
    else if (puVar10 != puVar7) {
      do {
        puVar8 = puVar10 + 1;
        *puVar10 = 0;
        puVar10 = puVar8;
      } while (puVar8 != puVar7);
      return;
    }
  }
  return;
}



undefined4 * fn_00121a00(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = (uint *)*param_1;
  if (puVar3 != (uint *)0x0) {
    fn_0012f268(puVar3);
    uVar1 = puVar3[0x23];
    uVar2 = uVar1;
    if (puVar3[0x24] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x24]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x25] - uVar1) >> 2,0);
    uVar1 = puVar3[0x20];
    uVar2 = uVar1;
    if (puVar3[0x21] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x21]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x22] - uVar1) >> 2,0);
    uVar1 = puVar3[0x1c];
    uVar2 = uVar1;
    if (puVar3[0x1d] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x1d]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x1e] - uVar1) >> 2,0);
    uVar1 = puVar3[0x19];
    uVar2 = uVar1;
    if (puVar3[0x1a] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x1a]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x1b] - uVar1) >> 2,0);
    uVar1 = puVar3[0x16];
    uVar2 = uVar1;
    if (puVar3[0x17] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x17]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x18] - uVar1) >> 2,0);
    uVar1 = puVar3[0x13];
    uVar2 = uVar1;
    if (puVar3[0x14] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x14]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x15] - uVar1) >> 2,0);
    uVar1 = puVar3[0x10];
    uVar2 = uVar1;
    if (puVar3[0x11] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0x11]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0x12] - uVar1) >> 2,0);
    uVar1 = puVar3[0xd];
    uVar2 = uVar1;
    if (puVar3[0xe] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0xe]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0xf] - uVar1) >> 2,0);
    uVar1 = puVar3[10];
    uVar2 = uVar1;
    if (puVar3[0xb] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[0xb]);
    }
    fn_001008c4(uVar1,(int)(puVar3[0xc] - uVar1) >> 2,0);
    uVar1 = puVar3[6];
    uVar2 = uVar1;
    if (puVar3[7] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[7]);
    }
    fn_001008c4(uVar1,(int)(puVar3[8] - uVar1) >> 2,0);
    uVar1 = puVar3[3];
    uVar2 = uVar1;
    if (puVar3[4] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[4]);
    }
    fn_001008c4(uVar1,(int)(puVar3[5] - uVar1) >> 2,0);
    uVar1 = *puVar3;
    uVar2 = uVar1;
    if (puVar3[1] < uVar1) {
      do {
        uVar2 = uVar2 + 4;
      } while (uVar2 != puVar3[1]);
    }
    fn_001008c4(uVar1,(int)(puVar3[2] - uVar1) >> 2,0);
    fn_002feef8(puVar3);
  }
  return param_1;
}



void fn_001219f0(undefined4 *param_1)

{
  fn_0012f268(*param_1);
  return;
}



void fn_001218f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *local_20;
  undefined1 auStack_1c [4];
  
  fn_00168a24(&local_20,*(undefined4 *)(param_2 + 8),auStack_1c);
  iVar1 = *(int *)(param_2 + 4) + -1;
  *(int *)(param_2 + 4) = iVar1;
  if ((iVar1 != 0) || (fn_0017d90c(param_1 + 8,param_2 + 0x10), param_2 == 0)) goto LAB_00121994;
  puVar2 = *(undefined4 **)(param_2 + 8);
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if (iVar1 == -1) {
LAB_00121974:
      iVar1 = *(int *)(param_2 + 8);
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
    else if (piVar3 != &DAT_008f9ce8) {
      *piVar3 = iVar1 + -1;
      if (iVar1 == 0) goto LAB_00121974;
    }
  }
  fn_002feef8(param_2);
LAB_00121994:
  fn_00148b70(*(undefined4 *)(param_1 + 4),local_20);
  if (local_20 != &DAT_008f9cf4) {
    piVar3 = local_20 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_20 + -3,local_20[-2] + 8,0);
    }
  }
  return;
}


