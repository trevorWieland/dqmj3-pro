#include "0023daa0_0023de00.h"



int fn_0023de00(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 uVar7;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  
  uVar7 = CONCAT44(in_s1,in_s2);
  iVar1 = (**(code **)(*param_1 + 0x14))(param_1);
  if (-1 < iVar1) {
    iVar2 = fn_00182d34(param_1[2],param_2);
    uVar5 = 0;
    if ((iVar2 < 0) || (iVar2 = fn_001793c4(param_2), iVar2 == 0)) {
      uVar3 = 0;
    }
    else {
      uVar3 = (uint)*(ushort *)(iVar2 + 4);
    }
    iVar2 = fn_00182d34(param_1[2],param_2);
    if ((-1 < iVar2) && (iVar2 = fn_001793c4(param_2), iVar2 != 0)) {
      uVar5 = (uint)*(ushort *)(iVar2 + 4);
    }
    piVar4 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar4 + 0x4c))(piVar4,(uVar3 & 4) >> 2);
    piVar4 = *(int **)(param_1[3] + iVar1 * 4);
    (**(code **)(*piVar4 + 0x50))(piVar4,(uVar5 & 8) >> 3);
    piVar4 = *(int **)(param_1[3] + iVar1 * 4);
    if (piVar4 != (int *)0x0) {
      iVar6 = param_1[2];
      iVar2 = fn_00182d34(iVar6,piVar4[2]);
      if ((iVar2 < 0) || (*(char *)(*(int *)(iVar6 + 0x1c) + iVar2 * 0x28 + 0x24) == '\0')) {
        iVar2 = (**(code **)(*piVar4 + 0x48))(piVar4);
        *(undefined4 *)(iVar2 + 0x58) = in_s0;
        *(int *)(iVar2 + 0x68) = (int)((ulonglong)uVar7 >> 0x20);
        *(int *)(iVar2 + 0x78) = (int)uVar7;
        *(uint *)(iVar2 + 0x88) = *(uint *)(iVar2 + 0x88) | 0x800;
      }
      else {
        local_34 = (undefined4)((ulonglong)uVar7 >> 0x20);
        local_30 = (undefined4)uVar7;
        piVar4 = *(int **)(param_1[3] + iVar1 * 4);
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0xc))(piVar4,local_38);
        }
      }
    }
  }
  return iVar1;
}



void fn_0023dd30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 in_s0;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  piVar2 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar2 != (int *)0x0) {
    iVar3 = *(int *)(param_1 + 8);
    local_20 = in_s0;
    local_1c = in_s0;
    local_18 = in_s0;
    iVar1 = fn_00182d34(iVar3,piVar2[2]);
    if ((iVar1 < 0) || (*(char *)(*(int *)(iVar3 + 0x1c) + iVar1 * 0x28 + 0x24) == '\0')) {
      iVar1 = (**(code **)(*piVar2 + 0x48))(piVar2);
      *(undefined4 *)(iVar1 + 0x7c) = local_20;
      *(undefined4 *)(iVar1 + 0x80) = local_1c;
      *(undefined4 *)(iVar1 + 0x84) = local_18;
      *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
      return;
    }
    (**(code **)*piVar2)(piVar2,&local_20);
  }
  return;
}



void fn_0023dca4(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar4 != (int *)0x0) {
    iVar5 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar5,piVar4[2]);
    if ((-1 < iVar1) && (*(char *)(*(int *)(iVar5 + 0x1c) + iVar1 * 0x28 + 0x24) != '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0023dd00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)*piVar4)(piVar4,param_3);
      return;
    }
    iVar1 = (**(code **)(*piVar4 + 0x48))(piVar4);
    uVar2 = param_3[1];
    uVar3 = param_3[2];
    *(undefined4 *)(iVar1 + 0x7c) = *param_3;
    *(undefined4 *)(iVar1 + 0x80) = uVar2;
    *(undefined4 *)(iVar1 + 0x84) = uVar3;
    *(uint *)(iVar1 + 0x88) = *(uint *)(iVar1 + 0x88) | 0x800;
  }
  return;
}



void fn_0023dc64(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0xc) + param_2 * 4);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0023dc7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x14))();
  return;
}



void fn_0023db0c(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  piVar5 = *(int **)(param_1 + 0x18);
  do {
    if (*(int **)(param_1 + 0x1c) == piVar5) {
      return;
    }
    if (param_2 == 0) {
      while (0 < *piVar5) {
        piVar2 = piVar5 + 2;
        *piVar5 = *piVar5 + -1;
        piVar5 = piVar2;
        if (*(int **)(param_1 + 0x1c) == piVar2) {
          return;
        }
      }
    }
    uVar6 = *(undefined4 *)(piVar5[1] + 8);
    fn_002106ec();
    iVar7 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar7,uVar6);
    if ((-1 < iVar1) && (*(char *)(*(int *)(iVar7 + 0x1c) + iVar1 * 0x28 + 0x24) != '\0')) {
      fn_002a4530(*(undefined4 *)(param_1 + 8),uVar6);
    }
    fn_002a4bd0(*(undefined4 *)(param_1 + 8),uVar6);
    piVar2 = *(int **)(param_1 + 0x1c);
    if (*(int **)(param_1 + 0x18) != piVar2) {
      piVar3 = piVar5 + 2;
      if (piVar3 != piVar2) {
        piVar4 = piVar5;
        if (piVar3 < piVar2) {
          iVar1 = (int)piVar2 - (int)piVar3;
          if (0 < iVar1) {
            piVar2 = piVar5;
            piVar4 = piVar5 + -2;
            if (iVar1 * 0x10000000 < 0) {
              *piVar5 = *piVar3;
              piVar5[1] = piVar5[3];
              piVar2 = piVar3;
              piVar4 = piVar5;
            }
            for (iVar1 = iVar1 >> 4; iVar1 != 0; iVar1 = iVar1 + -1) {
              iVar7 = piVar2[3];
              piVar4[2] = piVar2[2];
              piVar4[3] = iVar7;
              iVar7 = piVar2[5];
              piVar4[4] = piVar2[4];
              piVar4[5] = iVar7;
              piVar2 = piVar2 + 4;
              piVar4 = piVar4 + 4;
            }
          }
        }
        else {
          do {
            iVar1 = *piVar3;
            iVar7 = piVar3[1];
            piVar3 = piVar3 + 2;
            *piVar4 = iVar1;
            piVar4[1] = iVar7;
            piVar4 = piVar4 + 2;
          } while (piVar3 != piVar2);
        }
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -8;
    }
  } while( true );
}



/* WARNING: Removing unreachable block (ram,0x0023db30) */
/* WARNING: Removing unreachable block (ram,0x0023dc4c) */

void fn_0023db04(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  while (*(undefined4 **)(param_1 + 0x1c) != puVar5) {
    uVar6 = *(undefined4 *)(puVar5[1] + 8);
    fn_002106ec();
    iVar7 = *(int *)(param_1 + 8);
    iVar1 = fn_00182d34(iVar7,uVar6);
    if ((-1 < iVar1) && (*(char *)(*(int *)(iVar7 + 0x1c) + iVar1 * 0x28 + 0x24) != '\0')) {
      fn_002a4530(*(undefined4 *)(param_1 + 8),uVar6);
    }
    fn_002a4bd0(*(undefined4 *)(param_1 + 8),uVar6);
    puVar2 = *(undefined4 **)(param_1 + 0x1c);
    if (*(undefined4 **)(param_1 + 0x18) != puVar2) {
      puVar3 = puVar5 + 2;
      if (puVar3 != puVar2) {
        puVar4 = puVar5;
        if (puVar3 < puVar2) {
          iVar1 = (int)puVar2 - (int)puVar3;
          if (0 < iVar1) {
            puVar2 = puVar5;
            puVar4 = puVar5 + -2;
            if (iVar1 * 0x10000000 < 0) {
              *puVar5 = *puVar3;
              puVar5[1] = puVar5[3];
              puVar2 = puVar3;
              puVar4 = puVar5;
            }
            for (iVar1 = iVar1 >> 4; iVar1 != 0; iVar1 = iVar1 + -1) {
              uVar6 = puVar2[3];
              puVar4[2] = puVar2[2];
              puVar4[3] = uVar6;
              uVar6 = puVar2[5];
              puVar4[4] = puVar2[4];
              puVar4[5] = uVar6;
              puVar2 = puVar2 + 4;
              puVar4 = puVar4 + 4;
            }
          }
        }
        else {
          do {
            uVar6 = *puVar3;
            uVar8 = puVar3[1];
            puVar3 = puVar3 + 2;
            *puVar4 = uVar6;
            puVar4[1] = uVar8;
            puVar4 = puVar4 + 2;
          } while (puVar3 != puVar2);
        }
      }
      *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -8;
    }
  }
  return;
}



void fn_0023daa0(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2 != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0xc) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 0x30))(piVar1,param_2);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc) >> 2));
  }
  return;
}


