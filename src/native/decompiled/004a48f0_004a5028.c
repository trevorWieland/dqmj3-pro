#include "004a48f0_004a5028.h"



undefined4 fn_004a4b40(int param_1,uint param_2,uint param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  undefined2 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  uint unaff_r9;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  undefined2 local_48 [2];
  uint local_44;
  undefined *local_40;
  undefined4 local_3c [3];
  int iStack_30;
  uint local_2c;
  uint uStack_28;
  
  piVar1 = (int *)(param_1 + 0xc);
  iStack_30 = param_1;
  local_2c = param_2;
  uStack_28 = param_3;
  (**(code **)(*piVar1 + 8))();
  uVar12 = 0xffffffff;
  if (*(char *)(param_1 + 0x34) == '\0') {
    uVar12 = 0;
  }
  if (*(char *)(param_1 + 0x35) == '\0') {
    uVar12 = 1;
  }
  else if (uVar12 == 0xffffffff) {
    (**(code **)(*piVar1 + 0xc))();
    return 0;
  }
  iVar14 = param_1 + uVar12 * 4;
  if (*(int *)(iVar14 + 0x94) == 0) {
    puVar2 = (undefined4 *)fn_0015ece0(0x34);
    if (puVar2 == (undefined4 *)0x0) {
      *(undefined4 *)(iVar14 + 0x94) = 0;
    }
    else {
      local_40 = &DAT_00855a94;
      fn_0015e6f0(local_3c,L"Transport Buffer Thread (recv)");
      uVar18 = DAT_008b6434;
      *puVar2 = &DAT_008536ec;
      puVar2[1] = &DAT_00855a94;
      fn_0015e6f0(puVar2 + 2,local_3c[0]);
      puVar2[4] = 0;
      puVar2[5] = uVar18;
      puVar2[6] = 0;
      *(undefined1 *)(puVar2 + 7) = 0;
      *(undefined1 *)((int)puVar2 + 0x1e) = 0;
      puVar2[8] = 0x80000000;
      puVar3 = (undefined4 *)fn_0015ece0(0x10);
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        *(undefined1 *)(puVar3 + 3) = 0;
      }
      puVar2[3] = puVar3;
      *puVar2 = &DAT_00852b8c;
      puVar2[0xb] = 0;
      puVar2[9] = 0;
      puVar2[10] = 0;
      *(undefined4 **)(iVar14 + 0x94) = puVar2;
      fn_00170f54(&local_40);
    }
    if (DAT_008b6444 != -0x80000000) {
      *(int *)(*(int *)(iVar14 + 0x94) + 0x20) = DAT_008b6444;
    }
    iVar5 = *(int *)(iVar14 + 0x94);
    *(code **)(iVar5 + 0x24) = fn_004a5028;
    *(undefined4 *)(iVar5 + 0x28) = 0;
    *(int *)(iVar5 + 0x2c) = param_1;
    *(uint *)(iVar5 + 0x30) = uVar12;
    fn_0047e764(iVar5,0);
  }
  local_40 = (undefined *)(local_2c & 0xffff);
  puVar10 = (uint *)(param_1 + 0x3c);
  puVar13 = *(uint **)(param_1 + 0x40);
  uVar15 = unaff_r9 & 0xffff0000 | (uint)local_40;
  if (puVar13 == *(uint **)(param_1 + 0x44)) {
    uVar11 = (int)((int)puVar13 - *puVar10) / 0xc;
    if (uVar11 < (uint)((int)((int)*(uint **)(param_1 + 0x44) - *puVar10) / 0xc)) {
      *(uint **)(param_1 + 0x40) = puVar13 + 3;
      if (puVar13 != (uint *)0x0) {
        *puVar13 = puVar13[-3];
        puVar13[1] = puVar13[-2];
        puVar13[2] = puVar13[-1];
      }
      puVar10 = puVar13 + -3;
      if (0xb < (int)puVar10 - (int)puVar13) {
        uVar11 = ((int)puVar10 - (int)puVar13) / 0xc;
        puVar6 = puVar13;
        if ((uVar11 & 1) != 0) {
          puVar10 = puVar13 + -6;
          puVar6 = puVar13 + -3;
          *puVar6 = *puVar10;
          puVar13[-2] = puVar13[-5];
          puVar13[-1] = puVar13[-4];
        }
        for (iVar5 = (int)uVar11 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar11 = puVar10[-2];
          uVar16 = puVar10[-1];
          puVar6[-3] = puVar10[-3];
          puVar6[-2] = uVar11;
          puVar6[-1] = uVar16;
          uVar11 = puVar10[-5];
          uVar16 = puVar10[-4];
          puVar6[-6] = puVar10[-6];
          puVar6[-5] = uVar11;
          puVar6[-4] = uVar16;
          puVar10 = puVar10 + -6;
          puVar6 = puVar6 + -6;
        }
      }
      *puVar13 = uVar15;
      puVar13[1] = uVar12;
      puVar13[2] = param_3;
    }
    else {
      uVar16 = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
      if (uVar16 < uVar11 + 0x20) {
        uVar16 = uVar11 + 0x20;
      }
      puVar4 = (uint *)fn_0015ece0(uVar16 * 0xc);
      puVar9 = puVar4;
      for (puVar6 = (uint *)*puVar10; puVar6 != puVar13; puVar6 = puVar6 + 3) {
        if (puVar9 != (uint *)0x0) {
          uVar11 = puVar6[1];
          uVar17 = puVar6[2];
          *puVar9 = *puVar6;
          puVar9[1] = uVar11;
          puVar9[2] = uVar17;
        }
        puVar9 = puVar9 + 3;
      }
      puVar6 = puVar4 + ((int)((int)puVar13 - *puVar10) / 0xc) * 3;
      if (puVar6 != (uint *)0x0) {
        *puVar6 = uVar15;
        puVar6[1] = uVar12;
        puVar6[2] = param_3;
      }
      puVar9 = *(uint **)(param_1 + 0x40);
      puVar6 = puVar4 + ((int)((int)puVar13 - *puVar10) / 0xc) * 3;
      for (; puVar13 != puVar9; puVar13 = puVar13 + 3) {
        puVar7 = puVar6 + 3;
        if (puVar7 != (uint *)0x0) {
          uVar15 = puVar13[1];
          uVar11 = puVar13[2];
          *puVar7 = *puVar13;
          puVar6[4] = uVar15;
          puVar6[5] = uVar11;
        }
        puVar6 = puVar7;
      }
      uVar11 = *puVar10;
      uVar15 = (int)(*(uint *)(param_1 + 0x40) - uVar11) / 0xc;
      if (uVar11 < *(uint *)(param_1 + 0x40)) {
        uVar17 = uVar15 & 1;
      }
      else {
        uVar17 = 0;
      }
      for (iVar5 = uVar17 + 1; iVar5 < (int)(uVar15 + 1); iVar5 = iVar5 + 2) {
      }
      if (uVar11 != 0) {
        if (*(code **)(uVar11 - 8) == (code *)0x0) {
          fn_0030233c(uVar11 - 8);
        }
        else {
          (**(code **)(uVar11 - 8))();
        }
      }
      *puVar10 = (uint)puVar4;
      *(uint **)(param_1 + 0x40) = puVar4 + uVar15 * 3 + 3;
      *(uint **)(param_1 + 0x44) = puVar4 + uVar16 * 3;
    }
  }
  else {
    *(uint **)(param_1 + 0x40) = puVar13 + 3;
    if (puVar13 != (uint *)0x0) {
      *puVar13 = uVar15;
      puVar13[1] = uVar12;
      puVar13[2] = param_3;
    }
  }
  *(undefined1 *)(param_1 + uVar12 + 0x34) = 1;
  *(undefined1 *)(param_1 + 5) = 1;
  (**(code **)(**(int **)(iVar14 + 0x48) + 8))();
  iVar5 = param_1 + uVar12 * 8;
  *(short *)(iVar5 + 0x50) = (short)local_40;
  *(uint *)(iVar5 + 0x54) = param_3;
  (**(code **)(**(int **)(iVar14 + 0x48) + 0xc))();
  fn_00170704(param_1 + 0x74);
  local_48[0] = SUB42(local_40,0);
  puVar8 = *(undefined2 **)(param_1 + 100);
  local_44 = param_3;
  if (puVar8 == *(undefined2 **)(param_1 + 0x68)) {
    fn_0079a6b8(param_1 + 0x60,puVar8,local_48);
  }
  else {
    *(undefined2 **)(param_1 + 100) = puVar8 + 4;
    if (puVar8 != (undefined2 *)0x0) {
      *puVar8 = local_48[0];
      *(uint *)(puVar8 + 2) = param_3;
    }
  }
  fn_001707b4(param_1 + 0x74);
  *(undefined1 *)(param_1 + 5) = 0;
  (**(code **)(*piVar1 + 0xc))();
  return 1;
}



void fn_004a5028(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_008b637e != '\0') {
    fn_00477090(*(undefined4 *)(param_1 + 8));
  }
  if (*(char *)(param_1 + 4) == '\0') {
    iVar3 = param_1 + param_2 * 4;
    do {
      iVar2 = 0;
      if (*(char *)(param_1 + param_2 + 0x36) == '\0') {
        (**(code **)(**(int **)(iVar3 + 0x48) + 8))();
        iVar1 = *(int *)(param_1 + param_2 * 8 + 0x54);
        if (iVar1 != 0) {
          iVar2 = fn_004a749c(iVar1,0);
        }
        (**(code **)(**(int **)(iVar3 + 0x48) + 0xc))();
        if ((iVar2 == 0) || (*(char *)(param_1 + 5) != '\0')) goto LAB_004a50c0;
      }
      else {
LAB_004a50c0:
        fn_00735640(2000000,0);
      }
    } while (*(char *)(param_1 + 4) == '\0');
  }
  return;
}



void fn_004a48f0(int param_1,uint param_2,uint param_3,int param_4)

{
  char cVar1;
  int *piVar2;
  ushort *puVar3;
  int *piVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  ushort *puVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint in_r12;
  undefined4 uVar12;
  bool bVar13;
  
  piVar2 = (int *)(param_1 + 0xc);
  (**(code **)(*piVar2 + 8))();
  puVar3 = *(ushort **)(param_1 + 0x40);
  puVar8 = *(ushort **)(param_1 + 0x3c);
  param_2 = param_2 & 0xffff;
  while( true ) {
    if (puVar8 != puVar3) {
      param_3 = (uint)*puVar8;
    }
    if (puVar8 == puVar3 || param_3 == param_2) break;
    puVar8 = puVar8 + 6;
  }
  if (puVar3 != puVar8) {
    iVar10 = *(int *)(puVar8 + 2);
    iVar11 = param_1 + iVar10;
    *(undefined1 *)(iVar11 + 0x36) = 1;
    *(uint *)(param_1 + 0x38) = param_2;
    piVar4 = *(int **)(puVar8 + 4);
    cVar1 = (char)piVar4[1];
    bVar13 = cVar1 != '\x03';
    if (bVar13) {
      cVar1 = (char)piVar4[0x10];
    }
    if (bVar13 && cVar1 != '\0') {
      piVar4 = (int *)piVar4[0xf];
    }
    if ((bVar13 && cVar1 != '\0') && piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 0x14))();
    }
    puVar3 = *(ushort **)(param_1 + 0x40);
    if (*(ushort **)(param_1 + 0x3c) != puVar3) {
      puVar5 = puVar8 + 6;
      bVar13 = SBORROW4((int)puVar3,(int)puVar5);
      iVar7 = (int)puVar3 - (int)puVar5;
      if (puVar3 != puVar5) {
        param_4 = (int)puVar3 - (int)puVar5;
        bVar13 = SBORROW4(param_4,0xb);
        iVar7 = param_4 + -0xb;
      }
      if ((puVar3 != puVar5 && param_4 != 0xb) && iVar7 < 0 == bVar13) {
        in_r12 = param_4 / 0xc;
        puVar3 = puVar8;
        puVar6 = puVar8 + -6;
        if ((in_r12 & 1) != 0) {
          in_r12 = *(uint *)(puVar8 + 10);
          *(undefined4 *)puVar8 = *(undefined4 *)puVar5;
          *(undefined4 *)(puVar8 + 2) = *(undefined4 *)(puVar8 + 8);
          *(uint *)(puVar8 + 4) = in_r12;
          puVar3 = puVar5;
          puVar6 = puVar8;
        }
        for (iVar7 = param_4 / 0xc >> 1; iVar7 != 0; iVar7 = iVar7 + -1) {
          uVar9 = *(undefined4 *)(puVar3 + 8);
          uVar12 = *(undefined4 *)(puVar3 + 10);
          *(undefined4 *)(puVar6 + 6) = *(undefined4 *)(puVar3 + 6);
          *(undefined4 *)(puVar6 + 8) = uVar9;
          *(undefined4 *)(puVar6 + 10) = uVar12;
          uVar9 = *(undefined4 *)(puVar3 + 0xe);
          in_r12 = *(uint *)(puVar3 + 0x10);
          *(undefined4 *)(puVar6 + 0xc) = *(undefined4 *)(puVar3 + 0xc);
          *(undefined4 *)(puVar6 + 0xe) = uVar9;
          *(uint *)(puVar6 + 0x10) = in_r12;
          puVar3 = puVar3 + 0xc;
          puVar6 = puVar6 + 0xc;
        }
      }
      *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + -0xc;
    }
    *(undefined1 *)(iVar11 + 0x34) = 0;
    *(undefined1 *)(param_1 + 5) = 1;
    iVar7 = param_1 + iVar10 * 4;
    (**(code **)(**(int **)(iVar7 + 0x48) + 8))();
    iVar10 = param_1 + iVar10 * 8;
    *(undefined2 *)(iVar10 + 0x50) = 0;
    *(undefined4 *)(iVar10 + 0x54) = 0;
    *(undefined1 *)(iVar11 + 0x36) = 0;
    (**(code **)(**(int **)(iVar7 + 0x48) + 0xc))();
    fn_00170704(param_1 + 0x74);
    puVar8 = *(ushort **)(param_1 + 100);
    puVar3 = *(ushort **)(param_1 + 0x60);
    while( true ) {
      if (puVar3 != puVar8) {
        in_r12 = (uint)*puVar3;
      }
      if (puVar3 == puVar8 || in_r12 == param_2) break;
      puVar3 = puVar3 + 4;
    }
    if (*(ushort **)(param_1 + 0x60) != puVar8) {
      puVar5 = puVar3 + 4;
      if ((puVar8 != puVar5) && (iVar10 = (int)puVar8 - (int)puVar5, 0 < iVar10 >> 3)) {
        puVar8 = puVar3;
        puVar6 = puVar3 + -4;
        if (iVar10 * 0x10000000 < 0) {
          *(undefined4 *)puVar3 = *(undefined4 *)puVar5;
          *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar3 + 6);
          puVar8 = puVar5;
          puVar6 = puVar3;
        }
        for (iVar10 = iVar10 >> 4; iVar10 != 0; iVar10 = iVar10 + -1) {
          uVar9 = *(undefined4 *)(puVar8 + 6);
          *(undefined4 *)(puVar6 + 4) = *(undefined4 *)(puVar8 + 4);
          *(undefined4 *)(puVar6 + 6) = uVar9;
          uVar9 = *(undefined4 *)(puVar8 + 10);
          *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(puVar8 + 8);
          *(undefined4 *)(puVar6 + 10) = uVar9;
          puVar8 = puVar8 + 8;
          puVar6 = puVar6 + 8;
        }
      }
      *(int *)(param_1 + 100) = *(int *)(param_1 + 100) + -8;
    }
    *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
    fn_001707b4(param_1 + 0x74);
    *(undefined1 *)(param_1 + 5) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x004a494c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


