#include "006c89e4_006c9504.h"



int fn_006c9504(int param_1,int param_2)

{
  return (int)*(short *)(*(int *)(param_1 + 0x24) + param_2 * 0x40);
}



/* WARNING: Removing unreachable block (ram,0x006c935c) */
/* WARNING: Removing unreachable block (ram,0x006c936c) */
/* WARNING: Removing unreachable block (ram,0x006c9334) */
/* WARNING: Removing unreachable block (ram,0x006c9338) */
/* WARNING: Removing unreachable block (ram,0x006c933c) */
/* WARNING: Removing unreachable block (ram,0x006c9340) */
/* WARNING: Removing unreachable block (ram,0x006c9344) */
/* WARNING: Removing unreachable block (ram,0x006c93a4) */
/* WARNING: Removing unreachable block (ram,0x006c93bc) */
/* WARNING: Removing unreachable block (ram,0x006c9374) */
/* WARNING: Removing unreachable block (ram,0x006c9384) */
/* WARNING: Removing unreachable block (ram,0x006c9394) */
/* WARNING: Removing unreachable block (ram,0x006c939c) */

void fn_006c9184(int param_1,uint *param_2)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined2 *puVar6;
  uint uVar7;
  int iVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  uint local_28;
  uint local_24;
  
  fn_0079e608(param_2);
  puVar9 = (undefined2 *)param_2[1];
  puVar10 = *(undefined2 **)(param_1 + 0x60);
  puVar11 = *(undefined2 **)(param_1 + 100);
  if (puVar10 != puVar11) {
    iVar8 = (int)puVar11 - (int)puVar10 >> 1;
    local_28 = iVar8 + ((int)((int)puVar9 - *param_2) >> 1);
    if ((uint)((int)(param_2[2] - *param_2) >> 1) < local_28) {
      uVar12 = (int)(param_2[1] - *param_2) >> 1;
      local_24 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
      if (local_24 < uVar12 + 0x20) {
        local_24 = uVar12 + 0x20;
      }
      puVar5 = &local_24;
      if (local_24 <= local_28) {
        puVar5 = &local_28;
      }
      uVar12 = *puVar5;
      puVar2 = (undefined2 *)fn_00100fc6(uVar12 << 1,0);
      puVar1 = puVar2;
      for (puVar6 = (undefined2 *)*param_2; puVar6 != puVar9; puVar6 = puVar6 + 1) {
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = *puVar6;
        }
        puVar1 = puVar1 + 1;
      }
      puVar6 = (undefined2 *)(((int)puVar9 - *param_2 & 0xfffffffe) + (int)puVar2);
      for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
        if (puVar6 != (undefined2 *)0x0) {
          *puVar6 = *puVar10;
        }
        puVar6 = puVar6 + 1;
      }
      puVar11 = (undefined2 *)param_2[1];
      puVar10 = puVar2 + iVar8 + ((int)((int)puVar9 - *param_2) >> 1);
      for (; puVar9 != puVar11; puVar9 = puVar9 + 1) {
        if (puVar10 != (undefined2 *)0x0) {
          *puVar10 = *puVar9;
        }
        puVar10 = puVar10 + 1;
      }
      uVar3 = *param_2;
      uVar7 = param_2[1];
      uVar4 = uVar3;
      if (uVar7 < uVar3) {
        do {
          uVar4 = uVar4 + 2;
        } while (uVar4 != uVar7);
      }
      fn_001008c4(uVar3,(int)(param_2[2] - uVar3) >> 1,0);
      param_2[2] = (uint)(puVar2 + uVar12);
      param_2[1] = (uint)(puVar2 + ((int)(uVar7 - uVar3) >> 1) + iVar8);
      *param_2 = (uint)puVar2;
      return;
    }
    param_2[1] = (uint)(puVar9 + iVar8);
    if (puVar9 + iVar8 < puVar9) {
      puVar1 = puVar9;
      for (puVar6 = puVar9 + -iVar8; puVar6 != puVar9; puVar6 = puVar6 + 1) {
        if (puVar1 != (undefined2 *)0x0) {
          *puVar1 = *puVar6;
        }
        puVar1 = puVar1 + 1;
      }
      puVar6 = puVar9 + -iVar8;
      puVar1 = puVar9;
      if (puVar9 < puVar6) {
        iVar8 = (int)puVar6 - (int)puVar9;
        if (0 < iVar8) {
          if (iVar8 * 0x40000000 < 0) {
            puVar6 = puVar6 + -1;
            puVar1 = puVar9 + -1;
            *puVar1 = *puVar6;
          }
          for (iVar8 = iVar8 >> 2; iVar8 != 0; iVar8 = iVar8 + -1) {
            puVar1[-1] = puVar6[-1];
            puVar6 = puVar6 + -2;
            puVar1 = puVar1 + -2;
            *puVar1 = *puVar6;
          }
        }
      }
      else {
        while (puVar9 != puVar6) {
          puVar6 = puVar6 + -1;
          puVar1[-1] = *puVar6;
          puVar1 = puVar1 + -1;
        }
      }
      if (puVar10 < puVar11) {
        iVar8 = (int)puVar11 - (int)puVar10;
        if (0 < iVar8) {
          puVar11 = puVar9 + -1;
          puVar6 = puVar10 + -1;
          if (iVar8 * 0x40000000 < 0) {
            *puVar9 = *puVar10;
            puVar11 = puVar9;
            puVar6 = puVar10;
          }
          iVar8 = iVar8 >> 2;
          if (iVar8 != 0) {
            do {
              iVar8 = iVar8 + -1;
              puVar11[1] = puVar6[1];
              puVar6 = puVar6 + 2;
              puVar11 = puVar11 + 2;
              *puVar11 = *puVar6;
            } while (iVar8 != 0);
            return;
          }
        }
      }
      else {
        for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
          *puVar9 = *puVar10;
          puVar9 = puVar9 + 1;
        }
      }
    }
    else {
      for (; puVar10 != puVar11; puVar10 = puVar10 + 1) {
        if (puVar9 != (undefined2 *)0x0) {
          *puVar9 = *puVar10;
        }
        puVar9 = puVar9 + 1;
      }
    }
  }
  return;
}



bool fn_006c8cb8(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int in_r12;
  
  piVar2 = *(int **)(param_1 + 0x7c);
  piVar1 = *(int **)(param_1 + 0x78);
  while( true ) {
    if (piVar1 != piVar2) {
      in_r12 = *piVar1;
    }
    if (piVar1 == piVar2 || in_r12 == param_2) break;
    piVar1 = piVar1 + 1;
  }
  return piVar2 != piVar1;
}



undefined1 fn_006c8c2c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),**(undefined4 **)(param_1 + 0x30));
  uVar5 = *(uint *)(param_1 + 0xc);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      iVar4 = *(int *)(param_1 + 0x28) + iVar3 * 0x12;
      if ((*(byte *)(iVar4 + 10) == uVar5) && (iVar2 = fn_00147e6c(iVar4 + 4,uVar1,3), iVar2 == 0))
      goto LAB_006c8cac;
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar4 = 0;
LAB_006c8cac:
  return *(undefined1 *)(iVar4 + 0x10);
}



int fn_006c8ad4(int param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int extraout_r1;
  short *psVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  short *local_28;
  short *local_24;
  short *local_20;
  short local_1c [4];
  
  uVar7 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  iVar2 = (int)((ulonglong)uVar7 >> 0x20);
  uVar5 = (uint)*(ushort *)((int)uVar7 + 0xc);
  if ((uVar5 == 0) || (3 < uVar5)) {
    iVar2 = uVar5 * -0x55555555;
    uVar5 = uVar5 % 3 + 1;
  }
  iVar6 = 1;
  local_28 = (short *)0x0;
  local_24 = (short *)0x0;
  local_20 = (short *)0x0;
  iVar2 = fn_001746f4(0,iVar2);
  if (1 < iVar2) {
    do {
      sVar1 = (short)iVar6;
      iVar2 = fn_00163940();
      psVar4 = local_24;
      if (((iVar2 != 0) && (iVar2 = fn_00660ec0((int)sVar1), psVar4 = local_24, iVar2 == 0x15)) &&
         (uVar3 = fn_00661010((int)sVar1), psVar4 = local_24, uVar3 == uVar5)) {
        local_1c[0] = sVar1;
        if (local_24 == local_20) {
          fn_0079e460(&local_28,local_24,local_1c);
          psVar4 = local_24;
        }
        else {
          psVar4 = local_24 + 1;
          if (local_24 != (short *)0x0) {
            *local_24 = sVar1;
          }
        }
      }
      local_24 = psVar4;
      iVar6 = iVar6 + 1;
      iVar2 = fn_001746f4();
    } while (iVar6 < iVar2);
  }
  fn_00169f1c(*(undefined4 *)(param_1 + 0x48),(int)local_24 - (int)local_28 >> 1);
  sVar1 = local_28[extraout_r1];
  psVar4 = local_28;
  if (local_24 < local_28) {
    do {
      psVar4 = psVar4 + 1;
    } while (psVar4 != local_24);
  }
  fn_001008c4(local_28,(int)local_20 - (int)local_28 >> 1,0);
  return (int)sVar1;
}



void fn_006c8ac0(void)

{
  int iVar1;
  
  iVar1 = fn_006c9754();
  fn_00176dc0(iVar1 + 8);
  return;
}



bool fn_006c8a44(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  if (*(char *)(iVar2 + 7) == '\0') {
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
  }
  else {
    if (*(char *)(iVar2 + 7) != '\x02') {
      return false;
    }
    sVar1 = *(short *)(*(int *)(param_1 + 0x24) + **(short **)(param_1 + 0x54) * 0x40);
  }
  return sVar1 == param_2;
}



int fn_006c8a2c(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  return (int)*(short *)(iVar1 + 8);
}



undefined2 fn_006c8a14(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  return *(undefined2 *)(iVar1 + 0xc);
}



int fn_006c89fc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 9));
  return (int)*(char *)(iVar1 + 7);
}



int fn_006c89e4(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001d4f28(*(undefined1 *)(*(int *)(param_1 + 8) + 10));
  return (int)*(char *)(iVar1 + 0xb);
}


