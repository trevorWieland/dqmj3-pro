#include "00675ae0_006760fc.h"



void fn_006760fc(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = 0;
  uVar1 = *(int *)(DAT_0089883c + 8) - *(int *)(DAT_0089883c + 4) >> 2;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(DAT_0089883c + 4) + uVar3 * 4);
      (**(code **)(*piVar2 + 0x10))(piVar2,param_1);
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return;
}



undefined4 fn_00676094(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(int *)(DAT_0089883c + 8) - *(int *)(DAT_0089883c + 4) >> 2;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(DAT_0089883c + 4) + uVar4 * 4);
      iVar3 = (**(code **)(*piVar2 + 8))(piVar2,param_1);
      if (iVar3 != 0) {
        return 1;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}



int fn_0067602c(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar1 = *(int *)(DAT_0089883c + 8) - *(int *)(DAT_0089883c + 4) >> 2;
  if (uVar1 != 0) {
    do {
      piVar2 = *(int **)(*(int *)(DAT_0089883c + 4) + uVar4 * 4);
      iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2,param_1,param_2);
      if (iVar3 != 0) {
        return iVar3;
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar1);
  }
  return 0;
}



undefined4 fn_00675f54(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = *(int **)(param_1 + 4);
  if (*(int **)(param_1 + 8) != piVar3) {
    piVar5 = *(int **)(param_1 + 8);
    piVar4 = piVar3;
    do {
      if (*piVar4 == param_2) {
        if (piVar3 != piVar5) {
          piVar3 = piVar4 + 1;
          if (piVar5 != piVar3) {
            if (piVar5 < piVar3) {
              do {
                piVar1 = piVar3 + 1;
                *piVar4 = *piVar3;
                piVar3 = piVar1;
                piVar4 = piVar4 + 1;
              } while (piVar1 != piVar5);
            }
            else {
              uVar7 = (int)piVar5 - (int)piVar3;
              if (0 < (int)uVar7) {
                uVar2 = (uVar7 & 7) >> 2;
                if (uVar2 != 0) {
                  *piVar4 = *piVar3;
                }
                uVar6 = (uint)(uVar2 != 0);
                for (; (int)uVar2 < (int)uVar7 >> 2; uVar2 = uVar2 + 2) {
                  piVar4[uVar6] = piVar3[uVar6];
                  piVar4[uVar6 + 1] = piVar3[uVar6 + 1];
                  uVar6 = uVar6 + 2;
                }
              }
            }
          }
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + -4;
        }
        return 1;
      }
      piVar4 = piVar4 + 1;
    } while (piVar5 != piVar4);
  }
  return 0;
}



undefined4 fn_00675d74(int param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  uint *puVar10;
  uint uVar11;
  
  piVar6 = *(int **)(param_1 + 4);
  piVar9 = *(int **)(param_1 + 8);
  piVar8 = piVar6;
  while( true ) {
    if (piVar9 == piVar8) {
      puVar10 = (uint *)(param_1 + 4);
      if (piVar9 == *(int **)(param_1 + 0xc)) {
        uVar3 = (int)piVar9 - (int)piVar6 >> 2;
        if (uVar3 < (uint)((int)*(int **)(param_1 + 0xc) - (int)piVar6 >> 2)) {
          *(int **)(param_1 + 8) = piVar9 + 1;
          if (piVar9 != (int *)0x0) {
            *piVar9 = piVar9[-1];
          }
          piVar8 = piVar9 + -1;
          piVar6 = piVar9;
          if (piVar9 < piVar8) {
            if (0 < (int)piVar8 - (int)piVar9) {
              iVar7 = (int)piVar8 - (int)piVar9 >> 2;
              iVar4 = 0;
              do {
                iVar7 = iVar7 + -1;
                piVar9[iVar4 + -1] = piVar8[iVar4 + -1];
                iVar4 = iVar4 + -1;
              } while (iVar7 != 0);
            }
          }
          else {
            while (piVar9 != piVar8) {
              piVar8 = piVar8 + -1;
              piVar6[-1] = *piVar8;
              piVar6 = piVar6 + -1;
            }
          }
          *piVar9 = param_2;
        }
        else {
          uVar11 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
          if (uVar11 < uVar3 + 0x20) {
            uVar11 = uVar3 + 0x20;
          }
          piVar1 = (int *)fn_00100fc6(uVar11 << 2,0);
          piVar6 = piVar1;
          for (piVar8 = (int *)*puVar10; piVar8 != piVar9; piVar8 = piVar8 + 1) {
            if (piVar6 != (int *)0x0) {
              *piVar6 = *piVar8;
            }
            piVar6 = piVar6 + 1;
          }
          piVar8 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
          if (piVar8 != (int *)0x0) {
            *piVar8 = param_2;
          }
          piVar6 = *(int **)(param_1 + 8);
          piVar8 = (int *)(((int)piVar9 - *puVar10 & 0xfffffffc) + (int)piVar1);
          for (; piVar9 != piVar6; piVar9 = piVar9 + 1) {
            piVar8 = piVar8 + 1;
            if (piVar8 != (int *)0x0) {
              *piVar8 = *piVar9;
            }
          }
          uVar2 = *puVar10;
          uVar5 = *(uint *)(param_1 + 8);
          uVar3 = uVar2;
          if (uVar5 < uVar2) {
            do {
              uVar3 = uVar3 + 4;
            } while (uVar3 != uVar5);
          }
          fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
          *(int **)(param_1 + 0xc) = piVar1 + uVar11;
          *(int **)(param_1 + 8) = piVar1 + ((int)(uVar5 - uVar2) >> 2) + 1;
          *puVar10 = (uint)piVar1;
        }
      }
      else {
        *(int **)(param_1 + 8) = piVar9 + 1;
        if (piVar9 != (int *)0x0) {
          *piVar9 = param_2;
        }
      }
      return 1;
    }
    if (*piVar8 == param_2) break;
    piVar8 = piVar8 + 1;
  }
  return 0;
}



void fn_00675cc4(undefined4 param_1,undefined4 param_2)

{
  fn_0066e458(DAT_00898840,2,0);
  fn_0066e6b8(DAT_00898840,param_2);
  fn_0066de74(param_1,2);
  return;
}



undefined4 * fn_00675c38(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = &DAT_00859b90;
    fn_00129688(puVar1);
    fn_002fec40(puVar1 + 1,s_NetworkCommandEstablishSession_008c7111);
    *puVar1 = &DAT_00859be4;
    iVar2 = fn_00119b40(puVar1 + 0x13);
    puVar1 = (undefined4 *)(iVar2 + -0x4c);
    fn_00119b60();
    *puVar1 = &DAT_0085a5fc;
  }
  *(undefined4 **)(param_1 + 0x98) = puVar1;
  return puVar1;
}



void fn_00675bcc(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  int iVar1;
  
  iVar1 = DAT_00898840;
  *(undefined1 *)(DAT_00898840 + 0x44) = param_2;
  fn_0066e458(iVar1,param_3,1);
  *(undefined4 *)(DAT_00898840 + 0x38) = param_4;
  fn_0066e680(DAT_00898840,0);
  fn_0066de74(param_1,2);
  if (param_5 == 0) {
    return;
  }
  fn_0066e744(DAT_00898840,param_5);
  return;
}



void fn_00675bb8(int param_1)

{
  fn_0010fbf0(*(undefined4 *)(DAT_00898840 + 8),*(undefined4 *)(param_1 + 0x98));
  return;
}



void fn_00675b38(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  fn_0066e458(DAT_00898840,2,1);
  *(undefined4 *)(DAT_00898840 + 0x38) = param_2;
  fn_0066e55c(DAT_00898840,param_3);
  fn_0066e680(DAT_00898840,0);
  fn_0066de74(param_1,2);
  return;
}



void fn_00675ae0(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  fn_0066e458(DAT_00898840,1);
  iVar1 = DAT_00898840;
  *(undefined1 *)(DAT_00898840 + 0x44) = param_2;
  *(undefined4 *)(iVar1 + 0x38) = param_3;
  fn_0066e680(DAT_00898840,param_4);
  fn_0066de74(param_1,2);
  return;
}


