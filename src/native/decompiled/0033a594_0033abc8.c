#include "0033a594_0033abc8.h"



void fn_0033abc8(int param_1)

{
  undefined4 uVar1;
  
  (**(code **)(**(int **)(param_1 + 0x40) + 0xc))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x24))();
  *(undefined4 *)(param_1 + 0x44) = uVar1;
  fn_002cb154(param_1);
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,uVar1,0);
  fn_00305b50(*(undefined4 *)(param_1 + 0x1c),uVar1);
  return;
}



void fn_0033aaf4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  (**(code **)(**(int **)(param_1 + 0x40) + 8))();
  (**(code **)(**(int **)(param_1 + 0x40) + 0x10))();
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x1c))();
  iVar2 = fn_002cb15c(param_1,uVar1);
  if (iVar2 != 0) {
    uVar1 = fn_006ba320(param_1);
    fn_00305a4c(*(undefined4 *)(param_1 + 0x1c),uVar1);
    uVar1 = fn_006ba674(param_1);
    fn_00305b48(*(undefined4 *)(param_1 + 0x1c),uVar1);
  }
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x20))();
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898228,uVar1,0);
  fn_00305b50(*(undefined4 *)(param_1 + 0x1c),uVar1);
  return;
}



void fn_0033aa68(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x18,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = *(undefined4 *)(param_1 + 0x44);
    *puVar1 = &DAT_00852140;
    puVar1[2] = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = param_2;
  }
  fn_0033b240(param_1,2,puVar1,(char *)&DAT_0033aae4,param_3,param_4);
  return;
}



void fn_0033a9b8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x30) = param_5;
  *(undefined4 *)(param_1 + 0x44) = param_6;
  *(undefined4 *)(param_1 + 0x24) = param_2;
  *(undefined4 *)(param_1 + 0x28) = param_3;
  *(undefined4 *)(param_1 + 0x2c) = param_4;
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c,param_3,param_4,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_00305c50(iVar1,*(undefined4 *)(param_1 + 0x28),
                                 *(undefined4 *)(param_1 + 0x30),0,*(undefined4 *)(param_1 + 0x2c));
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x1c) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x0033aa5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_0033a594(int param_1)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  short *psVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 uVar14;
  uint *puVar15;
  undefined4 uVar16;
  uint uVar17;
  undefined4 local_88;
  short *local_5c;
  short *local_58;
  short *local_54;
  uint local_50 [8];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [8];
  
  local_5c = (short *)0x0;
  local_58 = (short *)0x0;
  local_54 = (short *)0x0;
  uVar16 = *(undefined4 *)(DAT_00897804 + 0x14);
  local_88 = CONCAT22(((unsigned int)(local_88) >> 16) & 0xffff,1);
  iVar1 = fn_001746f4();
  if ((short)local_88 < iVar1) {
    do {
      iVar1 = fn_00163940((int)(short)local_88);
      psVar7 = local_58;
      if (iVar1 != 0) {
        iVar1 = fn_006b2aa0(uVar16,(int)(short)local_88);
        psVar7 = local_58;
        if (iVar1 != 0) {
          iVar1 = fn_00660e64((int)(short)local_88);
          psVar7 = local_58;
          if (iVar1 != 0) {
            if (local_58 == local_54) {
              fn_0079e460(&local_5c,local_58,&local_88);
              psVar7 = local_58;
            }
            else {
              psVar7 = local_58 + 1;
              if (local_58 != (short *)0x0) {
                *local_58 = (short)local_88;
              }
            }
          }
        }
      }
      local_58 = psVar7;
      local_88 = CONCAT22(((unsigned int)(local_88) >> 16) & 0xffff,(short)local_88 + 1);
      iVar1 = fn_001746f4();
    } while ((short)local_88 < iVar1);
  }
  puVar11 = *(uint **)(param_1 + 0xc);
  puVar15 = *(uint **)(param_1 + 8);
  if (puVar15 != puVar11) {
    puVar2 = puVar15;
    if (puVar11 <= puVar15) {
      do {
        puVar2 = puVar2 + 1;
      } while (puVar2 != puVar11);
    }
    *(uint *)(param_1 + 0xc) = (int)puVar11 - ((int)puVar11 - (int)puVar15 & 0xfffffffcU);
  }
  uVar16 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x14));
  fn_0020bbc4(auStack_30,uVar16);
  iVar1 = fn_006c02d4(auStack_2c,local_50,7);
  psVar7 = local_5c;
  if (local_58 != local_5c) {
    do {
      uVar14 = 1;
      iVar12 = 0;
      if (0 < iVar1) {
        puVar15 = local_50;
      }
      local_88 = CONCAT22((short)(local_88 >> 0x10),*psVar7) & 0xff00ffff;
      if (0 < iVar1) {
        do {
          iVar3 = fn_00660d60((int)*psVar7);
          if (iVar3 == (short)puVar15[iVar12]) {
            uVar14 = 0;
            break;
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar1);
      }
      local_88 = (local_88 & ~((unsigned int)0xffffff << 0)) | ((unsigned int)(CONCAT12(uVar14,(short)local_88)) & 0xffffff);
      puVar13 = *(undefined4 **)(param_1 + 0xc);
      puVar15 = (uint *)(param_1 + 8);
      if (puVar13 == *(undefined4 **)(param_1 + 0x10)) {
        uVar6 = (int)((int)puVar13 - *puVar15) >> 2;
        if (uVar6 < (uint)((int)((int)*(undefined4 **)(param_1 + 0x10) - *puVar15) >> 2)) {
          *(undefined4 **)(param_1 + 0xc) = puVar13 + 1;
          if (puVar13 != (undefined4 *)0x0) {
            *puVar13 = puVar13[-1];
          }
          puVar8 = puVar13 + -1;
          puVar9 = puVar13;
          if (puVar13 < puVar8) {
            iVar3 = 1;
            iVar12 = (int)puVar8 - (int)puVar13 >> 2;
            if (1 < iVar12 + 1) {
              do {
                iVar3 = iVar3 + 1;
                *(undefined2 *)(puVar9 + -1) = *(undefined2 *)(puVar8 + -1);
                *(undefined1 *)((int)puVar9 + -2) = *(undefined1 *)((int)puVar8 + -2);
                puVar8 = puVar8 + -1;
                puVar9 = puVar9 + -1;
              } while (iVar3 < iVar12 + 1);
            }
          }
          else {
            while (puVar13 != puVar8) {
              *(undefined2 *)(puVar9 + -1) = *(undefined2 *)(puVar8 + -1);
              *(undefined1 *)((int)puVar9 + -2) = *(undefined1 *)((int)puVar8 + -2);
              puVar9 = puVar9 + -1;
              puVar8 = puVar8 + -1;
            }
          }
          *(short *)puVar13 = (short)local_88;
          *(undefined1 *)((int)puVar13 + 2) = uVar14;
        }
        else {
          uVar17 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          if (uVar17 < uVar6 + 0x20) {
            uVar17 = uVar6 + 0x20;
          }
          puVar4 = (undefined4 *)fn_00100fc6(uVar17 << 2,0);
          puVar9 = puVar4;
          for (puVar8 = (undefined4 *)*puVar15; puVar8 != puVar13; puVar8 = puVar8 + 1) {
            if (puVar9 != (undefined4 *)0x0) {
              *puVar9 = *puVar8;
            }
            puVar9 = puVar9 + 1;
          }
          puVar8 = (undefined4 *)(((int)puVar13 - *puVar15 & 0xfffffffc) + (int)puVar4);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = local_88;
          }
          puVar9 = *(undefined4 **)(param_1 + 0xc);
          puVar8 = (undefined4 *)(((int)puVar13 - *puVar15 & 0xfffffffc) + (int)puVar4);
          for (; puVar13 != puVar9; puVar13 = puVar13 + 1) {
            puVar8 = puVar8 + 1;
            if (puVar8 != (undefined4 *)0x0) {
              *puVar8 = *puVar13;
            }
          }
          uVar5 = *puVar15;
          uVar10 = *(uint *)(param_1 + 0xc);
          uVar6 = uVar5;
          if (uVar10 < uVar5) {
            do {
              uVar6 = uVar6 + 4;
            } while (uVar6 != uVar10);
          }
          fn_001008c4(uVar5,(int)(*(int *)(param_1 + 0x10) - uVar5) >> 2,0);
          *(undefined4 **)(param_1 + 0x10) = puVar4 + uVar17;
          *(undefined4 **)(param_1 + 0xc) = puVar4 + ((int)(uVar10 - uVar5) >> 2) + 1;
          *puVar15 = (uint)puVar4;
        }
      }
      else {
        *(undefined4 **)(param_1 + 0xc) = puVar13 + 1;
        if (puVar13 != (undefined4 *)0x0) {
          *puVar13 = local_88;
        }
      }
      psVar7 = psVar7 + 1;
    } while (local_58 != psVar7);
  }
  psVar7 = local_5c;
  if (local_58 < local_5c) {
    do {
      psVar7 = psVar7 + 1;
    } while (psVar7 != local_58);
  }
  fn_001008c4(local_5c,(int)local_54 - (int)local_5c >> 1,0);
  return;
}


