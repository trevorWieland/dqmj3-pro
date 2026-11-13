#include "0045c250_0045c8f4.h"



undefined4 fn_0045c8f4(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_r3;
  undefined4 local_10;
  
  iVar7 = DAT_008b63d8;
  uVar2 = 0;
  local_10 = in_r3;
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)(DAT_008b63d8 + 0x10);
    (**(code **)(*(int *)(DAT_008b63d8 + 0x10) + 8))();
    uVar2 = fn_0013d1a8();
    iVar8 = *(int *)(iVar7 + 0x48);
    iVar4 = iVar8;
    iVar3 = *(int *)(iVar8 + 4);
    while (iVar3 != 0) {
      if (*(uint *)(iVar3 + 0x10) < uVar2) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    if ((iVar4 == iVar8) || (uVar2 < *(uint *)(iVar4 + 0x10))) {
      iVar4 = iVar8;
    }
    if (iVar4 == *(int *)(iVar7 + 0x48)) {
      local_10 = fn_0013d1a8();
      puVar5 = (undefined4 *)fn_00147a40(iVar7 + 0x38,&local_10);
      *puVar5 = *(undefined4 *)(iVar7 + 0xc);
      local_10 = fn_0013d1a8();
      puVar6 = (uint *)fn_00147a40(iVar7 + 0x38,&local_10);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      puVar6 = (uint *)(iVar4 + 0x14);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    uVar2 = *puVar6;
  }
  if (uVar2 == 0) {
    puVar5 = &DAT_008e76a0;
  }
  else {
    if ((uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) <= uVar2) {
      fn_0015ebe4(L"c:\\PiaDevelopEnv\\CTRNEX\\CTR_NEX3.10.1-S1150\\include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar7 = -1;
      goto LAB_0045ca24;
    }
    puVar5 = *(undefined4 **)(*DAT_008e76e4 + uVar2 * 4);
  }
  iVar7 = puVar5[0xd];
  if (iVar7 == 0) {
    return 0;
  }
LAB_0045ca24:
  return *(undefined4 *)(iVar7 + 0xc);
}



int fn_0045c774(int param_1)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint extraout_r1;
  uint extraout_r1_00;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar6 = 0;
  if (*(int *)(param_1 + 8) - iVar3 >> 2 != 0) {
    do {
      piVar1 = *(int **)(iVar3 + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x10) + uVar6 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      iVar3 = *(int *)(param_1 + 4);
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)(*(int *)(param_1 + 8) - iVar3 >> 2));
  }
  if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1c) + 4))();
  }
  iVar3 = fn_0014f2b0(param_1 + 0x50);
  iVar3 = fn_0014f2b0(iVar3 + -0x18);
  uVar7 = fn_0014f2b0(iVar3 + -0x18);
  uVar6 = (uint)((ulonglong)uVar7 >> 0x20);
  iVar3 = (int)uVar7;
  uVar2 = *(uint *)(iVar3 + -0x10);
  uVar5 = *(uint *)(iVar3 + -0xc);
  if (uVar2 < uVar5) {
    uVar6 = uVar5 - uVar2;
  }
  if (uVar2 < uVar5) {
    uVar6 = uVar6 << 0x1d;
  }
  if (uVar2 < uVar5) {
    uVar6 = uVar6 >> 0x1f;
  }
  else {
    uVar6 = 0;
  }
  uVar6 = uVar6 + 1;
  if ((int)uVar6 < ((int)(uVar5 - uVar2) >> 2) + 1) {
    do {
      uVar6 = uVar6 + 2;
    } while ((int)uVar6 < ((int)(uVar5 - uVar2) >> 2) + 1);
  }
  if (uVar2 != 0) {
    if (*(code **)(uVar2 - 8) == (code *)0x0) {
      fn_0030233c();
      uVar6 = extraout_r1_00;
    }
    else {
      (**(code **)(uVar2 - 8))();
      uVar6 = extraout_r1;
    }
  }
  uVar2 = *(uint *)(iVar3 + -0x1c);
  uVar5 = *(uint *)(iVar3 + -0x18);
  if (uVar2 < uVar5) {
    uVar6 = uVar5 - uVar2;
  }
  if (uVar2 < uVar5) {
    uVar6 = uVar6 << 0x1d;
  }
  if (uVar2 < uVar5) {
    uVar6 = uVar6 >> 0x1f;
  }
  else {
    uVar6 = 0;
  }
  iVar4 = uVar6 + 1;
  if (iVar4 < ((int)(uVar5 - uVar2) >> 2) + 1) {
    do {
      iVar4 = iVar4 + 2;
    } while (iVar4 < ((int)(uVar5 - uVar2) >> 2) + 1);
  }
  if (uVar2 != 0) {
    if (*(code **)(uVar2 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar2 - 8))();
    }
  }
  return iVar3 + -0x20;
}



/* WARNING: Removing unreachable block (ram,0x0045c588) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffe4 : 0x0045c58c */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * fn_0045c4f4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int local_20;
  
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = (undefined4 *)fn_0015ece0(0x80);
  iVar2 = 1;
  *(int *)(param_1 + 4) = (int)puVar1;
  do {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    iVar2 = iVar2 + -1;
    puVar1 = puVar1 + 1;
  } while (iVar2 != 0);
  iVar2 = *(int *)(param_1 + 4);
  *(int *)(param_1 + 0xc) = iVar2 + 0x80;
  *(int *)(param_1 + 8) = iVar2 + 4;
  piVar3 = (int *)(param_1 + 0x10);
  *piVar3 = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  local_20 = 1;
  puVar1 = (undefined4 *)fn_0015ece0(0x80);
  *piVar3 = (int)puVar1;
  for (; local_20 != 0; local_20 = local_20 + -1) {
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = 0;
    }
    puVar1 = puVar1 + 1;
  }
  *(int *)(param_1 + 0x18) = *piVar3 + 0x80;
  *(int *)(param_1 + 0x14) = *piVar3 + 4;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x24) = 1;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined **)(param_1 + 0x20) = &DAT_008558c4;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined1 *)(param_1 + 0x40) = 0;
  *(undefined **)(param_1 + 0x38) = &DAT_008558c4;
  puVar1 = (undefined4 *)fn_001676b0(param_1 + 0x44,0x20);
  fn_00158f6c(*puVar1,0x20);
  puVar1[4] = 0;
  puVar1[4] = 1;
  *(undefined1 *)(puVar1 + 5) = 0;
  puVar1[3] = &DAT_008558c4;
  puVar1 = (undefined4 *)fn_001676b0(puVar1 + 6,0x20);
  fn_00158f6c(*puVar1,0x20);
  *(undefined1 *)(puVar1 + 3) = 0;
  *(undefined2 *)((int)puVar1 + 0xe) = 1;
  iVar2 = fn_0015ece0(0x230);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_00468824();
  }
  piVar3 = *(int **)(iVar2 + 0x22c);
  (**(code **)(*piVar3 + 8))();
  *(undefined1 *)(iVar2 + 0x22a) = 0;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  *(int *)puVar1[-0x16] = iVar2;
  iVar2 = fn_0015ece0(0x230);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_00468824();
  }
  piVar3 = *(int **)(iVar2 + 0x22c);
  (**(code **)(*piVar3 + 8))(piVar3);
  *(undefined1 *)(iVar2 + 0x22a) = 0;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  *(int *)puVar1[-0x13] = iVar2;
  iVar2 = fn_0015ece0(0x230);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = fn_00468824();
  }
  piVar3 = *(int **)(iVar2 + 0x22c);
  (**(code **)(*piVar3 + 8))(piVar3);
  *(undefined1 *)(iVar2 + 0x22a) = 0;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  puVar1[-0x10] = iVar2;
  return puVar1 + -0x17;
}



void fn_0045c250(int param_1,int param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  char *pcVar8;
  uint uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint *puVar12;
  bool bVar13;
  undefined *local_38;
  undefined4 local_34;
  undefined1 local_30;
  char *local_2c;
  char *local_28;
  
  iVar4 = fn_004b616c(param_3);
  if ((((*(char *)(iVar4 + 0xa0) != '\0') && (*(char *)(param_2 + 0x88) == '\0')) &&
      (iVar4 = *(int *)(param_2 + 0xd8), iVar4 != 0)) &&
     (uVar3 = *(ushort *)(param_2 + 0x3c) & 0xf, uVar3 == 2 || uVar3 == 5)) {
    if (param_4 != 0) {
      iVar4 = fn_0015ece0(0x20);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_004b5404(iVar4,*(undefined4 *)(param_2 + 0xd8));
      }
      iVar5 = *(int *)(param_2 + 0xd8);
      uVar1 = *(undefined1 *)(iVar4 + 0x1c);
      *(undefined1 *)(iVar4 + 0x1c) = *(undefined1 *)(iVar5 + 0x1c);
      *(undefined1 *)(iVar5 + 0x1c) = uVar1;
      uVar10 = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar5 + 0xc);
      *(undefined4 *)(iVar5 + 0xc) = uVar10;
    }
    if ((*(ushort *)(param_2 + 0x3c) & 0x20) == 0) {
      local_34 = 1;
      local_30 = 0;
      local_38 = &DAT_008558c4;
      puVar7 = (undefined4 *)fn_001676b0(&local_2c,0x20);
      fn_00158f6c(*puVar7,0x20);
      if ((*(ushort *)(param_2 + 0x3c) & 0x600) == 0) {
        iVar5 = *(int *)(param_1 + 0x44);
        if (iVar5 == *(int *)(param_1 + 0x48)) {
          iVar5 = 0;
        }
      }
      else {
        iVar5 = *(int *)(param_1 + 0x5c);
        if (iVar5 == *(int *)(param_1 + 0x60)) {
          iVar5 = 0;
        }
      }
      pcVar8 = local_2c;
      if (local_2c == local_28) {
        pcVar8 = (char *)0x0;
      }
      fn_00301a9c(pcVar8,iVar5,0x20);
      uVar2 = *(undefined2 *)(param_2 + 0x44);
      pcVar8 = local_2c;
      if (local_2c == local_28) {
        pcVar8 = (char *)0x0;
      }
      *pcVar8 = (char)uVar2 + *pcVar8;
      pcVar8 = local_2c;
      if (local_2c == local_28) {
        pcVar8 = (char *)0x0;
      }
      pcVar8[1] = pcVar8[1] + (char)((ushort)uVar2 >> 8);
      pcVar8 = local_2c;
      if (local_2c == local_28) {
        pcVar8 = (char *)0x0;
      }
      pcVar8[(int)(local_28 + (-1 - (int)local_2c))] =
           pcVar8[(int)(local_28 + (-1 - (int)local_2c))] + *(char *)(param_2 + 0x65);
      piVar6 = *(int **)(param_1 + 0x1c);
      uVar9 = (int)local_28 - (int)local_2c;
      uVar11 = piVar6[8];
      bVar13 = uVar11 <= uVar9;
      if (bVar13) {
        uVar11 = piVar6[9];
      }
      if (bVar13 && uVar9 <= uVar11) {
        fn_0015ed58(piVar6 + 2,&local_38);
        (**(code **)(*piVar6 + 0x1c))(piVar6);
      }
      (**(code **)(**(int **)(param_1 + 0x1c) + 0xc))(*(int **)(param_1 + 0x1c),iVar4);
      fn_0014f2b0(&local_38);
    }
    else {
      piVar6 = *(int **)(*(int *)(param_1 + 4) + (uint)*(byte *)(param_2 + 0x84) * 4);
      (**(code **)(*piVar6 + 0xc))(piVar6,iVar4);
    }
    if (param_4 != 0) {
      piVar6 = *(int **)(param_2 + 0xd8);
      if (piVar6 != (int *)0x0) {
        puVar12 = (uint *)(piVar6 + 1);
        do {
          uVar11 = *puVar12 - 1;
          bVar13 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar13);
        *puVar12 = uVar11;
        bVar13 = uVar11 == 0;
        if (bVar13) {
          uVar11 = (uint)*(byte *)(piVar6 + 2);
        }
        if (bVar13 && uVar11 == 0) {
          *(undefined1 *)(piVar6 + 2) = 1;
          (**(code **)(*piVar6 + 4))();
        }
      }
      *(int *)(param_2 + 0xd8) = iVar4;
    }
  }
  return;
}


