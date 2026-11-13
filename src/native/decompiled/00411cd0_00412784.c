#include "00411cd0_00412784.h"



void fn_00412784(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  fn_00581768();
  fn_00412bbc(param_1,param_2);
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x6c))();
  if (-1 < iVar2) {
    fn_002c32c4(param_1,iVar2,0);
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x34))();
  if ((iVar2 == 0) && (iVar2 = (**(code **)(**(int **)(param_1 + 0x9c) + 0x38))(), iVar2 == 0)) {
    if (*(int *)(param_1 + 0xec) != 0) {
      fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)*(int *)(param_1 + 0xec));
    }
    iVar2 = fn_006ba284(param_1);
    uVar3 = param_2 + iVar2 * 8;
    uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
    if (uVar1 <= uVar3) {
      fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar3,uVar1);
    }
    *(int *)(param_1 + 0xec) = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar3 * 2);
  }
  return;
}



void fn_00412740(int param_1)

{
  fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)*(short *)(param_1 + 0xec));
  fn_005c21ac(param_1);
  fn_006899f4(param_1,0x93,0);
  return;
}



void fn_00412628(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_1 + 0xd4);
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar2) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar2,uVar1);
  }
  iVar3 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar2 * 2);
  fn_00229a50(*(undefined4 *)(DAT_00897804 + 0x14),iVar3,
               (int)*(short *)(*(int *)(param_1 + 0xcc) + 0x3c));
  iVar3 = fn_001d5844(iVar3,*(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x28));
  *(int *)(param_1 + 0xc4) = iVar3 * *(int *)(*(int *)(param_1 + 0xcc) + 0x3c);
  return;
}



int fn_0041257c(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = *(uint *)(param_1 + 0xd4);
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar1);
  }
  iVar7 = (int)*(short *)(*(int *)(param_1 + 0xe0) + uVar6 * 2);
  iVar2 = fn_005c1ab0(param_1,iVar7);
  iVar3 = fn_00660fe0(iVar7);
  uVar4 = fn_001d5844(iVar7,*(undefined1 *)(*(int *)(param_1 + 0xb0) + 0x28));
  uVar5 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
  iVar7 = fn_00169f1c(uVar5,uVar4);
  if (iVar3 < iVar7 + iVar2) {
    iVar7 = iVar3 - iVar2;
  }
  return iVar7;
}



void fn_00412548(int *param_1)

{
  (**(code **)(*param_1 + 0x124))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00412578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x16c))(param_1,1,0);
  return;
}



undefined4 fn_0041219c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x93);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893ddc) goto LAB_004121e4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004121e4:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  fn_00666698();
  fn_001d58ac();
  fn_00581208(param_1);
  return 1;
}



void fn_00411db0(int *param_1)

{
  short sVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  short *psVar6;
  short *psVar7;
  undefined4 uVar8;
  uint uVar9;
  uint *puVar10;
  undefined2 *puVar11;
  short *psVar12;
  short *psVar13;
  uint uVar14;
  undefined2 *puVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  uint local_30;
  uint local_2c [2];
  
  iVar2 = param_1[0x2c];
  uVar17 = *(uint *)(iVar2 + 0x1c);
  uVar16 = *(uint *)(iVar2 + 0x20);
  if (uVar17 != uVar16) {
    uVar9 = uVar17;
    if (uVar16 <= uVar17) {
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 != uVar16);
    }
    *(uint *)(iVar2 + 0x20) = uVar16 - (uVar16 - uVar17 & 0xfffffffe);
  }
  puVar18 = (uint *)(param_1 + 0x38);
  uVar16 = *puVar18;
  uVar17 = param_1[0x39];
  if (uVar16 != uVar17) {
    uVar9 = uVar16;
    if (uVar17 <= uVar16) {
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 != uVar17);
    }
    param_1[0x39] = uVar17 - (uVar17 - uVar16 & 0xfffffffe);
  }
  local_30 = 0x44c;
  if ((uint)((int)(param_1[0x3a] - *puVar18) >> 1) < 0x44c) {
    uVar16 = (int)(param_1[0x39] - *puVar18) >> 1;
    local_2c[0] = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
    if (local_2c[0] < uVar16 + 0x20) {
      local_2c[0] = uVar16 + 0x20;
    }
    puVar10 = local_2c;
    if (local_2c[0] < 0x44d) {
      puVar10 = &local_30;
    }
    uVar16 = *puVar10;
    puVar3 = (undefined2 *)fn_00100fc6(uVar16 << 1,0);
    puVar15 = (undefined2 *)param_1[0x39];
    puVar11 = puVar3;
    for (puVar4 = (undefined2 *)*puVar18; puVar4 != puVar15; puVar4 = puVar4 + 1) {
      if (puVar11 != (undefined2 *)0x0) {
        *puVar11 = *puVar4;
      }
      puVar11 = puVar11 + 1;
    }
    uVar9 = *puVar18;
    uVar17 = uVar9;
    if ((uint)param_1[0x39] < uVar9) {
      do {
        uVar17 = uVar17 + 2;
      } while (uVar17 != param_1[0x39]);
    }
    fn_001008c4(uVar9,(int)(param_1[0x3a] - uVar9) >> 1,0);
    uVar17 = *puVar18;
    param_1[0x38] = (int)puVar3;
    param_1[0x39] = (param_1[0x39] - uVar17 & 0xfffffffe) + (int)puVar3;
    param_1[0x3a] = (int)(puVar3 + uVar16);
  }
  iVar2 = 1;
  do {
    iVar5 = fn_001d59fc(iVar2,*(undefined1 *)(param_1[0x2c] + 0x28));
    if (iVar5 != 0) {
      sVar1 = (short)iVar2;
      psVar6 = (short *)param_1[0x39];
      puVar18 = (uint *)(param_1 + 0x38);
      if (psVar6 == (short *)param_1[0x3a]) {
        uVar16 = (int)((int)psVar6 - *puVar18) >> 1;
        if (uVar16 < (uint)((int)(param_1[0x3a] - *puVar18) >> 1)) {
          param_1[0x39] = (int)(psVar6 + 1);
          if (psVar6 != (short *)0x0) {
            *psVar6 = psVar6[-1];
          }
          psVar12 = psVar6 + -1;
          psVar13 = psVar6;
          if (psVar6 < psVar12) {
            iVar5 = (int)psVar12 - (int)psVar6;
            if (0 < iVar5) {
              if (iVar5 * 0x40000000 < 0) {
                psVar12 = psVar6 + -2;
                psVar13 = psVar6 + -1;
                *psVar13 = *psVar12;
              }
              for (iVar5 = iVar5 >> 2; iVar5 != 0; iVar5 = iVar5 + -1) {
                psVar13[-1] = psVar12[-1];
                psVar12 = psVar12 + -2;
                psVar13 = psVar13 + -2;
                *psVar13 = *psVar12;
              }
            }
          }
          else {
            while (psVar6 != psVar12) {
              psVar12 = psVar12 + -1;
              psVar13[-1] = *psVar12;
              psVar13 = psVar13 + -1;
            }
          }
          *psVar6 = sVar1;
        }
        else {
          uVar17 = uVar16 + (uVar16 >> 1) + (uVar16 >> 3);
          if (uVar17 < uVar16 + 0x20) {
            uVar17 = uVar16 + 0x20;
          }
          psVar7 = (short *)fn_00100fc6(uVar17 << 1,0);
          psVar13 = psVar7;
          for (psVar12 = (short *)*puVar18; psVar12 != psVar6; psVar12 = psVar12 + 1) {
            if (psVar13 != (short *)0x0) {
              *psVar13 = *psVar12;
            }
            psVar13 = psVar13 + 1;
          }
          psVar12 = (short *)(((int)psVar6 - *puVar18 & 0xfffffffe) + (int)psVar7);
          if (psVar12 != (short *)0x0) {
            *psVar12 = sVar1;
          }
          psVar13 = (short *)param_1[0x39];
          psVar12 = (short *)(((int)psVar6 - *puVar18 & 0xfffffffe) + (int)psVar7);
          for (; psVar6 != psVar13; psVar6 = psVar6 + 1) {
            psVar12 = psVar12 + 1;
            if (psVar12 != (short *)0x0) {
              *psVar12 = *psVar6;
            }
          }
          uVar9 = *puVar18;
          uVar14 = param_1[0x39];
          uVar16 = uVar9;
          if (uVar14 < uVar9) {
            do {
              uVar16 = uVar16 + 2;
            } while (uVar16 != uVar14);
          }
          fn_001008c4(uVar9,(int)(param_1[0x3a] - uVar9) >> 1,0);
          param_1[0x3a] = (int)(psVar7 + uVar17);
          param_1[0x39] = (int)(psVar7 + ((int)(uVar14 - uVar9) >> 1) + 1);
          *puVar18 = (uint)psVar7;
        }
      }
      else {
        param_1[0x39] = (int)(psVar6 + 1);
        if (psVar6 != (short *)0x0) {
          *psVar6 = sVar1;
        }
      }
      iVar5 = fn_006b7a80(*(undefined4 *)(DAT_00897804 + 0x24),(int)sVar1);
      if (iVar5 == 0) {
        iVar5 = param_1[0x2c];
        local_30 = CONCAT22(((unsigned int)(local_30) >> 16) & 0xffff,sVar1);
        psVar6 = *(short **)(iVar5 + 0x20);
        if (psVar6 == *(short **)(iVar5 + 0x24)) {
          fn_0079e460(iVar5 + 0x1c,psVar6,&local_30);
        }
        else {
          *(short **)(iVar5 + 0x20) = psVar6 + 1;
          if (psVar6 != (short *)0x0) {
            *psVar6 = sVar1;
          }
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x44c);
  param_1[0x2f] = param_1[0x39] - param_1[0x38] >> 1;
  uVar8 = (**(code **)(*param_1 + 0x168))(param_1);
  fn_0022e4c4(param_1 + 0x38,uVar8);
  return;
}



void fn_00411d70(undefined4 *param_1)

{
  *param_1 = &DAT_00838a34;
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  param_1[0x2d] = 0;
  fn_002c471c(param_1);
  return;
}



void fn_00411d6c(undefined4 *param_1)

{
  *param_1 = &DAT_00838a34;
  if ((int *)param_1[0x2d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x2d] + 4))();
  }
  param_1[0x2d] = 0;
  fn_002c471c(param_1);
  return;
}



undefined4 * fn_00411cd0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00838a34;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002ddb0c();
  }
  puVar1[0x2d] = uVar3;
  fn_002b0d18(uVar3,0,1);
  return puVar1;
}


