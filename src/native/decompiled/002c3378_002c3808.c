#include "002c3378_002c3808.h"



void fn_002c3808(int param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 auStack_58 [36];
  int iStack_34;
  undefined4 local_30;
  int local_2c;
  int iStack_28;
  
  uVar12 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  while( true ) {
    if (param_4 == 0) {
      fn_001028d4(auStack_58,(char *)&DAT_002c3ab4,uVar12);
    }
    else {
      fn_001028d4(auStack_58,param_4,uVar12);
    }
    iVar2 = fn_00172c98(local_30,auStack_58);
    if (iVar2 == 0) break;
    piVar10 = *(int **)(param_1 + 0x88);
    puVar11 = (uint *)(param_1 + 0x84);
    if (piVar10 == *(int **)(param_1 + 0x8c)) {
      uVar1 = (int)((int)piVar10 - *puVar11) >> 2;
      if (uVar1 < (uint)((int)((int)*(int **)(param_1 + 0x8c) - *puVar11) >> 2)) {
        *(int **)(param_1 + 0x88) = piVar10 + 1;
        if (piVar10 != (int *)0x0) {
          *piVar10 = piVar10[-1];
        }
        piVar6 = piVar10 + -1;
        piVar7 = piVar10;
        if (piVar10 < piVar6) {
          if (0 < (int)piVar6 - (int)piVar10) {
            iVar4 = (int)piVar6 - (int)piVar10 >> 2;
            iVar5 = 0;
            do {
              iVar4 = iVar4 + -1;
              piVar10[iVar5 + -1] = piVar6[iVar5 + -1];
              iVar5 = iVar5 + -1;
            } while (iVar4 != 0);
          }
        }
        else {
          while (piVar10 != piVar6) {
            piVar6 = piVar6 + -1;
            piVar7[-1] = *piVar6;
            piVar7 = piVar7 + -1;
          }
        }
        *piVar10 = iVar2;
      }
      else {
        uVar13 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
        if (uVar13 < uVar1 + 0x20) {
          uVar13 = uVar1 + 0x20;
        }
        piVar3 = (int *)fn_00100fc6(uVar13 << 2,0);
        piVar7 = piVar3;
        for (piVar6 = (int *)*puVar11; piVar6 != piVar10; piVar6 = piVar6 + 1) {
          if (piVar7 != (int *)0x0) {
            *piVar7 = *piVar6;
          }
          piVar7 = piVar7 + 1;
        }
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar3);
        if (piVar6 != (int *)0x0) {
          *piVar6 = iVar2;
        }
        piVar7 = *(int **)(param_1 + 0x88);
        piVar6 = (int *)(((int)piVar10 - *puVar11 & 0xfffffffc) + (int)piVar3);
        for (; piVar10 != piVar7; piVar10 = piVar10 + 1) {
          piVar6 = piVar6 + 1;
          if (piVar6 != (int *)0x0) {
            *piVar6 = *piVar10;
          }
        }
        uVar8 = *(uint *)(param_1 + 0x88);
        uVar9 = *puVar11;
        uVar1 = uVar9;
        if (uVar8 <= uVar9) {
          for (; uVar1 != uVar8; uVar1 = uVar1 + 4) {
          }
        }
        fn_001008c4(uVar9,(int)(*(int *)(param_1 + 0x8c) - uVar9) >> 2,0);
        *(int **)(param_1 + 0x8c) = piVar3 + uVar13;
        *(int **)(param_1 + 0x88) = piVar3 + ((int)(uVar8 - uVar9) >> 2) + 1;
        *puVar11 = (uint)piVar3;
      }
    }
    else {
      *(int **)(param_1 + 0x88) = piVar10 + 1;
      if (piVar10 != (int *)0x0) {
        *piVar10 = iVar2;
      }
    }
    if (uVar12 < (uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2)) {
      iVar4 = fn_00145b00(0x98,&DAT_00812c8c);
      piVar10 = (int *)0x0;
      if (iVar4 != 0) {
        piVar10 = (int *)fn_0031bb74(iVar4,*(undefined4 *)(param_1 + 4),iVar2,1,
                                      *(undefined4 *)(param_1 + 0x48),1);
      }
      (**(code **)(*piVar10 + 0x10))(piVar10);
      if (local_2c != 0) {
        piVar10[0xd] = local_2c;
      }
      *(int **)(*(int *)(param_1 + 0x78) + uVar12 * 4) = piVar10;
    }
    else {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    uVar12 = uVar12 + 1;
  }
  return;
}



void fn_002c37e0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_3;
  fn_0031b554(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),local_8);
  return;
}



void fn_002c37b4(int param_1,int param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_4;
  fn_0031b590(*(undefined4 *)(*(int *)(param_1 + 0x78) + param_2 * 4),param_3,local_8);
  return;
}



void fn_002c3798(int param_1,undefined4 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x002c37b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(*(int **)(param_1 + 0x9c),0,param_2);
  return;
}



void fn_002c374c(undefined4 param_1,int *param_2,int *param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_3;
  iVar2 = *param_2;
  if (param_5 <= iVar1 * param_4 + iVar2) {
    if (iVar2 == 0) {
      if (iVar1 != 0) {
        *param_3 = iVar1 + -1;
        *param_2 = param_4 + -1;
      }
    }
    else {
      *param_2 = iVar2 + -1;
    }
  }
  return;
}



void fn_002c3688(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar1 = fn_00172c98(param_2,(char *)&DAT_002c373c,param_2,param_4,param_4);
  if (iVar1 == 0) {
    return;
  }
  iVar2 = fn_00145b00(0x44,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_00307cc4(iVar2,*(undefined4 *)(param_1 + 4),iVar1,
                                 (int)*(char *)(param_3 + 0x2c),*(undefined4 *)(param_1 + 0x48));
  }
  piVar4 = *(int **)(param_1 + 0x90);
  if (piVar4 != piVar3) {
    if (piVar4 != (int *)0x0) {
      (**(code **)(*piVar4 + 4))(piVar4);
    }
    *(int **)(param_1 + 0x90) = piVar3;
  }
  (**(code **)(**(int **)(param_1 + 0x90) + 0x10))();
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x34) = *(undefined4 *)(*(int *)(param_1 + 0x9c) + 200)
  ;
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) = param_4;
  return;
}



void fn_002c3614(int param_1)

{
  int extraout_r1;
  
  if (*(int *)(param_1 + 0xac) == -1) {
    return;
  }
  fn_00169f1c(*(int *)(param_1 + 0xac),*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2);
  (**(code **)(**(int **)(param_1 + 0x94) + 0x20))(*(int **)(param_1 + 0x94),0);
  fn_001c9d80(*(undefined4 *)(param_1 + 0x9c),extraout_r1);
  fn_001c9d44(*(undefined4 *)(param_1 + 0x9c),extraout_r1,
               *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x78) + extraout_r1 * 4) + 0x14),0);
  return;
}



void fn_002c3504(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0xac) != -1) {
    if (param_3 < 1) {
      *(int *)(param_1 + 0xac) = param_2;
      param_2 = param_2 + 1;
    }
    else {
      *(int *)(param_1 + 0xac) = param_3;
      param_3 = param_3 + 1;
    }
  }
  piVar3 = *(int **)(param_1 + 0x90);
  iVar2 = 0;
  if (0 < param_2) {
    iVar1 = fn_00300f74(param_3 + -1,param_2);
    iVar2 = iVar1 + 1;
    if (1 < iVar2) {
      piVar3[0xd] = iVar2;
      if (param_4 < iVar2) {
        iVar1 = param_4;
      }
      else {
      }
      *(int *)(*(int *)(param_1 + 0x90) + 0x3c) = iVar1;
      goto LAB_002c359c;
    }
  }
  (**(code **)(*piVar3 + 0x20))(piVar3,0);
LAB_002c359c:
  *(int *)(*(int *)(param_1 + 0x9c) + 0xe4) = param_3;
  *(int *)(*(int *)(param_1 + 0x9c) + 200) = iVar2;
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x24))(*(int **)(param_1 + 0x9c),1,param_2);
  if (param_3 <= param_2 * param_4 + param_5) {
    if (param_5 == 0) {
      param_5 = param_2 + -1;
      param_4 = param_4 + -1;
    }
    else {
      param_5 = param_5 + -1;
    }
  }
  fn_0025f2d0(*(undefined4 *)(param_1 + 0x9c),param_4);
                    /* WARNING: Could not recover jumptable at 0x002c3610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x2c))(*(int **)(param_1 + 0x9c),0,param_5);
  return;
}



void fn_002c34a4(int *param_1,int param_2)

{
  if (param_1[0x2b] ==
      (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + param_2) {
    fn_002b20a4(param_1[0x25],1);
  }
  else {
    fn_0031b3c4(*(undefined4 *)(param_1[0x1e] + param_2 * 4),2);
  }
                    /* WARNING: Could not recover jumptable at 0x002c3500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



int fn_002c3378(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (*(undefined4 **)(param_1 + 0x28) != &DAT_008f9cf4) {
    piVar3 = *(undefined4 **)(param_1 + 0x28) + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(*(int *)(param_1 + 0x28) + -0xc,*(int *)(*(int *)(param_1 + 0x28) + -8) + 8,0);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x24);
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = *(int *)(param_1 + 0x24);
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x20);
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = *(int *)(param_1 + 0x20);
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  puVar2 = *(undefined4 **)(param_1 + 0x1c);
  if (puVar2 != &DAT_008f9cf4) {
    piVar3 = puVar2 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      iVar1 = *(int *)(param_1 + 0x1c);
      fn_001008c4(iVar1 + -0xc,*(int *)(iVar1 + -8) + 8,0);
    }
  }
  return param_1;
}


