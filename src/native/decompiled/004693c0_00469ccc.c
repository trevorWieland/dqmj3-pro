#include "004693c0_00469ccc.h"



int fn_00469ccc(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 0) {
    return *(int *)(param_1 + 0x1c);
  }
  piVar1 = (int *)(param_1 + 0x4c);
  (**(code **)(*piVar1 + 8))();
  iVar4 = 0;
  iVar2 = *(int *)(*(int *)(param_1 + 0x18) + 8);
  while (iVar2 != *(int *)(param_1 + 0x18)) {
    if (((*(int *)(iVar2 + 0x18) == *(int *)(param_2 + 8)) &&
        (*(short *)(iVar2 + 0x16) == *(short *)(param_2 + 6))) ||
       ((*(int *)(iVar2 + 0x38) == *(int *)(param_2 + 8) &&
        (*(short *)(iVar2 + 0x36) == *(short *)(param_2 + 6))))) {
      iVar4 = iVar4 + 1;
    }
    iVar3 = *(int *)(iVar2 + 0xc);
    if (*(int *)(iVar2 + 0xc) == 0) {
      iVar3 = *(int *)(iVar2 + 4);
      if (iVar2 == *(int *)(iVar3 + 0xc)) {
        do {
          iVar2 = iVar3;
          iVar3 = *(int *)(iVar2 + 4);
        } while (iVar2 == *(int *)(iVar3 + 0xc));
      }
      if (*(int *)(iVar2 + 0xc) != iVar3) {
        iVar2 = iVar3;
      }
    }
    else {
      do {
        iVar2 = iVar3;
        iVar3 = *(int *)(iVar2 + 8);
      } while (*(int *)(iVar2 + 8) != 0);
    }
  }
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return iVar4;
}



void fn_004699bc(void)

{
  int iVar1;
  
  iVar1 = fn_004699ec();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004699dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



/* WARNING: Removing unreachable block (ram,0x00469680) */
/* WARNING: Removing unreachable block (ram,0x00469684) */
/* WARNING: Removing unreachable block (ram,0x00469688) */
/* WARNING: Removing unreachable block (ram,0x0046968c) */
/* WARNING: Removing unreachable block (ram,0x00469690) */
/* WARNING: Removing unreachable block (ram,0x004696bc) */
/* WARNING: Removing unreachable block (ram,0x004696cc) */
/* WARNING: Removing unreachable block (ram,0x004696a8) */
/* WARNING: Removing unreachable block (ram,0x004696b0) */
/* WARNING: Removing unreachable block (ram,0x004696b4) */

int fn_004693c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  code *pcVar14;
  uint uVar15;
  
  *param_1 = &PTR_FUN_00852f04;
  iVar1 = fn_004745d8(param_1 + 1,0x20000000,param_3,param_4,param_4);
  iVar1 = fn_004745d8(iVar1 + 0x28,0x20000000);
  *(undefined4 *)(iVar1 + 0x28) = 0x554;
  *(undefined1 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined **)(iVar1 + 0x30) = &DAT_00854240;
  *(undefined1 *)(iVar1 + 0x50) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined **)(iVar1 + 0x4c) = &DAT_00853c7c;
  iVar1 = fn_00495e28(iVar1 + 0x68);
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined2 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar3 = fn_0015ece0(0xc);
  piVar2[2] = iVar3;
  *piVar2 = *(int *)(iVar1 + 0x20);
  piVar2[1] = 1;
  *(int *)(iVar1 + 0x20) = (int)piVar2;
  iVar3 = piVar2[2];
  *(int *)(iVar1 + 0x28) = iVar3;
  *(int *)(iVar1 + 0x2c) = iVar3 + 0xc;
  *(int *)(iVar1 + 0x30) = iVar3;
  *(int *)(iVar1 + 0x28) = iVar3 + 0xc;
  *(int *)iVar3 = iVar3;
  *(int *)(*(int *)(iVar1 + 0x30) + 4) = *(int *)(iVar1 + 0x30);
  *(undefined **)(iVar1 + 0x38) = &DAT_00852db4;
  *(undefined **)(iVar1 + 0x3c) = &DAT_00855a94;
  fn_0015e6f0(iVar1 + 0x40,&DAT_007db524);
  *(undefined2 *)(iVar1 + 0x44) = 0;
  *(undefined **)(iVar1 + 0x48) = &DAT_00855a94;
  fn_0015e6f0(iVar1 + 0x4c,&DAT_007db524);
  *(undefined2 *)(iVar1 + 0x50) = 0;
  *(undefined1 *)(iVar1 + 0x52) = 0;
  *(undefined1 *)(iVar1 + 0x53) = 0;
  *(undefined4 *)(iVar1 + 0x54) = 0;
  *(undefined1 *)(iVar1 + 0x58) = 0;
  *(undefined **)(iVar1 + 0x5c) = &DAT_00853378;
  *(undefined1 *)(iVar1 + 0x60) = 0;
  *(undefined2 *)(iVar1 + 0x62) = 0;
  *(undefined1 *)(iVar1 + 100) = 1;
  *(undefined1 *)(iVar1 + 0x65) = 0;
  *(undefined1 *)(iVar1 + 0x66) = 0;
  *(undefined1 *)(iVar1 + 0x67) = 0;
  *(undefined1 *)(iVar1 + 0x68) = 0;
  *(undefined1 *)(iVar1 + 0x69) = 0;
  *(undefined1 *)(iVar1 + 0x6a) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined **)(iVar1 + 0x7c) = &DAT_008528bc;
  *(undefined4 *)(iVar1 + 0x80) = 0;
  *(undefined4 *)(iVar1 + 0x84) = 0;
  *(undefined1 *)(iVar1 + 0x81) = 2;
  *(undefined **)(iVar1 + 0x9c) = &DAT_00855a94;
  fn_0015e6f0(iVar1 + 0xa0,&DAT_007db524);
  *(int *)(iVar1 + 0x14) = iVar1 + -0x94;
  puVar4 = *(undefined4 **)(iVar1 + 0x74);
  puVar11 = *(undefined4 **)(iVar1 + 0x70);
  uVar8 = (int)puVar4 - (int)puVar11 >> 2;
  if (uVar8 < 4) {
    iVar3 = 4 - uVar8;
    if (iVar3 != 0) {
      uVar15 = iVar3 + uVar8;
      if ((uint)(*(int *)(iVar1 + 0x78) - (int)puVar11 >> 2) < uVar15) {
        uVar5 = uVar8 + (uVar8 >> 1) + (uVar8 >> 3);
        uVar7 = uVar5;
        if (uVar5 < uVar8 + 0x20) {
          uVar7 = uVar8 + 0x20;
        }
        if ((uVar15 <= uVar7) && (uVar15 = uVar8 + 0x20, uVar8 + 0x20 <= uVar5)) {
          uVar15 = uVar5;
        }
        puVar6 = (undefined4 *)fn_0015ece0(uVar15 << 2);
        puVar13 = puVar6;
        for (puVar11 = *(undefined4 **)(iVar1 + 0x70); puVar11 != puVar4; puVar11 = puVar11 + 1) {
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = *puVar11;
          }
          puVar13 = puVar13 + 1;
        }
        puVar11 = (undefined4 *)(((int)puVar4 - *(int *)(iVar1 + 0x70) & 0xfffffffcU) + (int)puVar6)
        ;
        for (iVar12 = iVar3; iVar12 != 0; iVar12 = iVar12 + -1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = 0;
          }
          puVar11 = puVar11 + 1;
        }
        puVar13 = *(undefined4 **)(iVar1 + 0x74);
        puVar11 = puVar6 + iVar3 + ((int)puVar4 - *(int *)(iVar1 + 0x70) >> 2);
        for (; puVar4 != puVar13; puVar4 = puVar4 + 1) {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar4;
          }
          puVar11 = puVar11 + 1;
        }
        uVar7 = *(uint *)(iVar1 + 0x74);
        uVar5 = *(uint *)(iVar1 + 0x70);
        uVar8 = uVar7;
        if (uVar5 < uVar7) {
          uVar8 = (uVar7 - uVar5) * 0x20000000;
        }
        iVar12 = (int)(uVar7 - uVar5) >> 2;
        if (uVar5 < uVar7) {
          uVar8 = uVar8 >> 0x1f;
        }
        else {
          uVar8 = 0;
        }
        iVar9 = uVar8 + 1;
        if (iVar9 < iVar12 + 1) {
          do {
            iVar9 = iVar9 + 2;
          } while (iVar9 < iVar12 + 1);
        }
        if (uVar5 != 0) {
          pcVar14 = *(code **)(uVar5 - 8);
          if (pcVar14 == (code *)0x0) {
            fn_0030233c((undefined4 *)(uVar5 - 8));
          }
          else {
            (*pcVar14)();
          }
        }
        *(undefined4 **)(iVar1 + 0x78) = puVar6 + uVar15;
        *(undefined4 **)(iVar1 + 0x74) = puVar6 + iVar12 + iVar3;
        *(undefined4 **)(iVar1 + 0x70) = puVar6;
      }
      else {
        *(undefined4 **)(iVar1 + 0x74) = puVar4 + iVar3;
        if (puVar4 + iVar3 < puVar4) {
          puVar6 = puVar4 + -iVar3;
          puVar13 = puVar4;
          for (puVar11 = puVar6; puVar11 != puVar4; puVar11 = puVar11 + 1) {
            if (puVar13 != (undefined4 *)0x0) {
              *puVar13 = *puVar11;
            }
            puVar13 = puVar13 + 1;
          }
          iVar12 = (int)puVar6 - (int)puVar4 >> 2;
          if (0 < iVar12) {
            iVar9 = 0;
            do {
              iVar12 = iVar12 + -1;
              puVar4[iVar9 + -1] = puVar6[iVar9 + -1];
              iVar9 = iVar9 + -1;
            } while (iVar12 != 0);
          }
          iVar3 = (int)(puVar4 + iVar3) - (int)puVar4;
          if (0 < iVar3 >> 2) {
            puVar11 = puVar4;
            if (iVar3 * 0x20000000 < 0) {
              puVar11 = puVar4 + 1;
              *puVar4 = 0;
            }
            for (iVar3 = iVar3 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
              puVar4 = puVar11 + 1;
              *puVar11 = 0;
              puVar11 = puVar11 + 2;
              *puVar4 = 0;
            }
          }
        }
        else {
          for (; iVar3 != 0; iVar3 = iVar3 + -1) {
            if (puVar4 != (undefined4 *)0x0) {
              *puVar4 = 0;
            }
            puVar4 = puVar4 + 1;
          }
        }
      }
    }
  }
  else if ((4 < uVar8) && (puVar13 = puVar11 + 4, puVar11 != puVar4)) {
    if (puVar13 < puVar4) {
      puVar11 = (undefined4 *)((int)puVar4 - (int)puVar13);
    }
    if (puVar13 < puVar4) {
      uVar8 = ((uint)puVar11 & 7) >> 2;
    }
    else {
      uVar8 = 0;
    }
    iVar3 = uVar8 + 1;
    if (iVar3 < ((int)puVar4 - (int)puVar13 >> 2) + 1) {
      do {
        iVar3 = iVar3 + 2;
      } while (iVar3 < ((int)puVar4 - (int)puVar13 >> 2) + 1);
    }
    *(uint *)(iVar1 + 0x74) = (int)puVar4 - ((int)puVar4 - (int)puVar13 & 0xfffffffcU);
  }
  iVar3 = 0;
  do {
    puVar4 = (undefined4 *)fn_0015ece0(0x214);
    if (puVar4 != (undefined4 *)0x0) {
      puVar4[2] = 0x100;
      *(undefined2 *)(puVar4 + 4) = 0;
      puVar4[1] = puVar4 + 4;
      *(undefined1 *)(puVar4 + 0x84) = 0;
      *(undefined1 *)((int)puVar4 + 0x211) = 1;
      *(undefined1 *)((int)puVar4 + 0x212) = 1;
      puVar4[3] = puVar4 + 4;
      *puVar4 = &DAT_00852ce0;
    }
    *(undefined4 **)(*(int *)(iVar1 + 0x70) + iVar3 * 4) = puVar4;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  puVar4 = (undefined4 *)fn_0015ece0(0x20);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = 0;
    puVar4[7] = 0;
    puVar4[1] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(char *)((int)puVar4 + 0x1d) = (char)puVar4;
    puVar4[4] = 0;
    puVar4[3] = 0;
    puVar4[2] = 0;
    piVar2 = (int *)fn_0015ece0(0xc);
    iVar3 = fn_0015ece0(0x600);
    piVar2[2] = iVar3;
    *piVar2 = puVar4[1];
    piVar2[1] = 0x20;
    puVar4[1] = piVar2;
    puVar10 = (undefined1 *)piVar2[2];
    puVar4[3] = puVar10;
    puVar4[4] = puVar10 + 0x600;
    puVar4[3] = puVar10 + 0x30;
    *(undefined4 *)(puVar10 + 8) = 0;
    *(undefined4 *)(puVar10 + 0xc) = 0;
    *puVar10 = 0;
    puVar4[5] = puVar10;
    *(undefined4 *)(puVar10 + 4) = 0;
    *(undefined4 *)(puVar4[5] + 8) = puVar4[5];
    *(undefined4 *)(puVar4[5] + 0xc) = puVar4[5];
  }
  *(undefined4 **)(iVar1 + 0x6c) = puVar4;
  return iVar1 + -0x94;
}


