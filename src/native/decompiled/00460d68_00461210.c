#include "00460d68_00461210.h"



void fn_00461210(int param_1,undefined4 param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  uint uVar7;
  int unaff_r5;
  uint uVar8;
  uint unaff_r11;
  bool bVar9;
  bool bVar10;
  uint local_40;
  undefined4 uStack_3c;
  undefined *local_38;
  undefined2 local_34;
  undefined *local_30;
  undefined2 local_2c;
  
  local_30 = &DAT_00853688;
  local_2c = *(undefined2 *)(param_3 + 4);
  iVar2 = fn_0046bde8(*(undefined4 *)(*(int *)(param_1 + 0x9c) + param_4 * 4),&local_30);
  if ((iVar2 == 0) || (iVar3 = fn_00472008(*(int *)(param_1 + 4) + 0x14,iVar2), iVar3 == 0)) {
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2f0) + 1;
    return;
  }
  iVar3 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
  if ((uint)*(ushort *)(iVar2 + 0x120) < *(uint *)(iVar3 + 0x8c)) {
    fn_00465c40(param_1,param_2,iVar2);
  }
  local_40 = *(uint *)(iVar2 + 0x100);
  uVar8 = *(uint *)(iVar2 + 0x104);
  local_38 = &DAT_00853688;
  local_34 = *(undefined2 *)(param_3 + 4);
  fn_0046b5e0(*(undefined4 *)(*(int *)(param_1 + 0x9c) + param_4 * 4),&local_38,param_1 + 0x340);
  iVar6 = *(int *)(*(int *)(param_1 + 0x9c) + param_4 * 4);
  iVar3 = fn_001249d0();
  iVar2 = 0;
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  (**(code **)(*(int *)(iVar2 + 0x50) + 8))();
  iVar2 = 0;
  uVar5 = unaff_r11 & 0xffff0000;
  uVar7 = *(uint *)(*(int *)(iVar6 + 0x14) + 8);
  bVar9 = uVar7 != *(uint *)(*(int *)(*(int *)(param_1 + 0x9c) + param_4 * 4) + 0x14);
  if (bVar9) {
    unaff_r5 = *(int *)(uVar7 + 0x18);
  }
  local_38 = &DAT_00853688;
  local_34 = 2;
  if (!bVar9) {
    unaff_r5 = 0;
  }
  iVar3 = 0;
  uVar1 = *(short *)(param_3 + 4) - 2;
  uVar4 = (uint)uVar1;
  do {
    if ((unaff_r5 == 0) ||
       (uVar4 = (uint)(0 < (short)(*(short *)(unaff_r5 + 0x44) - uVar1)), uVar4 != 0)) break;
    if (unaff_r5 != 0) {
      uVar4 = *(uint *)(unaff_r5 + 0x104);
      uVar5 = *(uint *)(unaff_r5 + 0x100) - local_40;
      bVar9 = uVar4 - uVar8 < (uint)(local_40 <= *(uint *)(unaff_r5 + 0x100));
      bVar10 = uVar8 < uVar4 || bVar9;
      if (uVar8 >= uVar4 && !bVar9) {
        bVar10 = 4 < *(ushort *)(unaff_r5 + 0x120);
      }
      if (!bVar10) {
        fn_00472008(*(int *)(param_1 + 4) + 0x14,unaff_r5);
        fn_00460784(param_1,unaff_r5);
        iVar3 = iVar3 + 1;
        uVar5 = extraout_r1;
      }
    }
    uVar4 = *(uint *)(uVar7 + 0xc);
    if (*(uint *)(uVar7 + 0xc) == 0) {
      uVar4 = *(uint *)(uVar7 + 4);
      if (uVar7 == *(uint *)(uVar4 + 0xc)) {
        do {
          uVar7 = uVar4;
          uVar4 = *(uint *)(uVar7 + 4);
        } while (uVar7 == *(uint *)(uVar4 + 0xc));
      }
      uVar5 = *(uint *)(uVar7 + 0xc);
      if (uVar5 != uVar4) {
        uVar7 = uVar4;
      }
    }
    else {
      do {
        uVar7 = uVar4;
        uVar4 = *(uint *)(uVar7 + 8);
      } while (*(uint *)(uVar7 + 8) != 0);
    }
    uVar4 = *(uint *)(*(int *)(*(int *)(param_1 + 0x9c) + param_4 * 4) + 0x14);
    if (uVar7 == uVar4) {
      unaff_r5 = 0;
    }
    else {
      unaff_r5 = *(int *)(uVar7 + 0x18);
    }
  } while (iVar3 < 2);
  iVar3 = fn_001249d0(uVar4,uVar5);
  if (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0xc);
  }
  (**(code **)(*(int *)(iVar2 + 0x50) + 0xc))(iVar2 + 0x50);
  iVar2 = fn_0046b964(*(undefined4 *)(*(int *)(param_1 + 0x9c) + param_4 * 4));
  if (iVar2 != 0) {
    iVar3 = fn_004b61c8(*(undefined4 *)(param_1 + 4));
    if (*(char *)(iVar3 + 0x68) == '\0') {
      fn_0013d0fc(&local_40);
      *(uint *)(param_1 + 0xd8) = local_40;
      *(undefined4 *)(param_1 + 0xdc) = uStack_3c;
    }
    fn_00460784(param_1,iVar2);
  }
  return;
}



void fn_00460dac(int param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short local_20 [6];
  
  if ((*(char *)(param_2 + 0x24) == '\0') || (*(short *)(param_1 + 0xec) != 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    fn_0013d0fc(local_20);
    sVar2 = fn_004ba724(0xffff);
    *(short *)(param_1 + 0xec) = sVar2 + local_20[0];
    if (*(short *)(param_1 + 0xec) == 0) {
      *(undefined2 *)(param_1 + 0xec) = 1;
    }
    *(undefined2 *)(param_2 + 0x4c) = *(undefined2 *)(param_1 + 0xec);
  }
  return;
}



void fn_00460d68(int param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x26c) == '\0') {
    if (param_3 == 0) {
      *(int *)(param_1 + 0xc0) = param_2;
    }
    else {
      fn_00460e38(param_1);
    }
    if (param_2 != 2) {
      *(char *)(param_1 + 0x14a) = (char)param_2;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x26c) = 0;
  }
  return;
}



void fn_00460e38(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_38 [20];
  
  param_1[0x30] = param_2;
  iVar2 = fn_004b7748();
  piVar3 = (int *)(iVar2 + 0x3bc);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_004b7748();
  iVar15 = param_1[0x1e];
  piVar7 = *(int **)(iVar2 + 0x3b4);
  puVar12 = (uint *)(iVar2 + 0x3b0);
  if (piVar7 == *(int **)(iVar2 + 0x3b8)) {
    uVar6 = (int)((int)piVar7 - *puVar12) >> 3;
    if (uVar6 < (uint)((int)((int)*(int **)(iVar2 + 0x3b8) - *puVar12) >> 3)) {
      *(int **)(iVar2 + 0x3b4) = piVar7 + 2;
      if (piVar7 != (int *)0x0) {
        *piVar7 = piVar7[-2];
        piVar7[1] = piVar7[-1];
      }
      piVar8 = piVar7 + -2;
      iVar2 = (int)piVar8 - (int)piVar7;
      if (0 < iVar2 >> 3) {
        piVar11 = piVar7;
        if (iVar2 * 0x10000000 < 0) {
          piVar8 = piVar7 + -4;
          piVar11 = piVar7 + -2;
          *piVar11 = *piVar8;
          piVar7[-1] = piVar7[-3];
        }
        for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
          iVar14 = piVar8[-1];
          piVar11[-2] = piVar8[-2];
          piVar11[-1] = iVar14;
          iVar14 = piVar8[-3];
          piVar11[-4] = piVar8[-4];
          piVar11[-3] = iVar14;
          piVar8 = piVar8 + -4;
          piVar11 = piVar11 + -4;
        }
      }
      *piVar7 = (int)param_1;
      piVar7[1] = iVar15;
    }
    else {
      uVar13 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
      if (uVar13 < uVar6 + 0x20) {
        uVar13 = uVar6 + 0x20;
      }
      piVar4 = (int *)fn_0015ece0(uVar13 << 3);
      piVar11 = piVar4;
      for (piVar8 = (int *)*puVar12; piVar8 != piVar7; piVar8 = piVar8 + 2) {
        if (piVar11 != (int *)0x0) {
          *piVar11 = *piVar8;
          piVar11[1] = piVar8[1];
        }
        piVar11 = piVar11 + 2;
      }
      piVar8 = (int *)(((int)piVar7 - *puVar12 & 0xfffffff8) + (int)piVar4);
      if (piVar8 != (int *)0x0) {
        *piVar8 = (int)param_1;
        piVar8[1] = iVar15;
      }
      piVar11 = *(int **)(iVar2 + 0x3b4);
      piVar8 = (int *)(((int)piVar7 - *puVar12 & 0xfffffff8) + (int)piVar4);
      for (; piVar7 != piVar11; piVar7 = piVar7 + 2) {
        piVar9 = piVar8 + 2;
        if (piVar9 != (int *)0x0) {
          *piVar9 = *piVar7;
          piVar8[3] = piVar7[1];
        }
        piVar8 = piVar9;
      }
      uVar5 = *(uint *)(iVar2 + 0x3b4);
      uVar10 = *puVar12;
      uVar6 = uVar5;
      if (uVar10 < uVar5) {
        uVar6 = (uVar5 - uVar10) * 0x10000000;
      }
      iVar15 = (int)(uVar5 - uVar10) >> 3;
      if (uVar10 < uVar5) {
        uVar6 = uVar6 >> 0x1f;
      }
      else {
        uVar6 = 0;
      }
      for (iVar14 = uVar6 + 1; iVar14 < iVar15 + 1; iVar14 = iVar14 + 2) {
      }
      if (uVar10 != 0) {
        if (*(code **)(uVar10 - 8) == (code *)0x0) {
          fn_0030233c(uVar10 - 8);
        }
        else {
          (**(code **)(uVar10 - 8))();
        }
      }
      *(int **)(iVar2 + 0x3b8) = piVar4 + uVar13 * 2;
      *(int **)(iVar2 + 0x3b4) = piVar4 + iVar15 * 2 + 2;
      *puVar12 = (uint)piVar4;
    }
  }
  else {
    *(int **)(iVar2 + 0x3b4) = piVar7 + 2;
    if (piVar7 != (int *)0x0) {
      *piVar7 = (int)param_1;
      piVar7[1] = iVar15;
    }
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  iVar2 = (**(code **)(*param_1 + 0x2c))(param_1);
  if ((iVar2 == 0) && (iVar2 = (**(code **)(*param_1 + 0x30))(param_1), iVar2 == 0)) {
    if (((char)param_1[0x2f] == '\x01') || ((char)param_1[0x2f] == '\x03')) {
                    /* WARNING: Could not recover jumptable at 0x004611f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x58))(param_1,0);
      return;
    }
    return;
  }
  if (param_2 != 2 && param_2 != 3) {
    iVar2 = 0;
    do {
      iVar15 = fn_0015ece0(0x150);
      if (iVar15 == 0) {
        piVar7 = (int *)0x0;
      }
      else {
        piVar7 = (int *)fn_004bc1a4(iVar15,param_1,3,0,0,0);
      }
      *(char *)(piVar7 + 9) = (char)param_1[0x53];
      fn_0045fd08(auStack_38,param_1,piVar7);
      uVar6 = 0xffffffff;
      piVar3 = piVar7 + 1;
      do {
        iVar15 = *piVar3 + -1;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar15;
      if (iVar15 == 0) {
        uVar6 = (uint)*(byte *)(piVar7 + 2);
      }
      if (iVar15 == 0 && uVar6 == 0) {
        *(undefined1 *)(piVar7 + 2) = 1;
        (**(code **)(*piVar7 + 4))(piVar7);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
  }
  (**(code **)(*param_1 + 0x58))(param_1,4);
  fn_00465808(param_1);
  piVar7 = (int *)param_1[0x1c];
  if (piVar7 != (int *)0x0) {
    (**(code **)(*piVar7 + 0xc))(piVar7,param_1,param_2);
  }
  (**(code **)(*param_1 + 0x50))(param_1);
  fn_004580f4(param_1[1],param_1);
  return;
}


