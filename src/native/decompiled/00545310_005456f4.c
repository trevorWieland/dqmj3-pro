#include "00545310_005456f4.h"



void fn_005456f4(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *unaff_r4;
  bool bVar4;
  bool bVar5;
  undefined8 uVar6;
  
  uVar6 = (**(code **)(**(int **)(param_1 + 600) + 0x10))();
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  puVar1 = (uint *)uVar6;
  bVar4 = puVar1 != (uint *)0x0;
  if (bVar4) {
    uVar2 = *puVar1;
  }
  bVar5 = (uVar2 & 0x80000000) != 0;
  if (bVar4 && bVar5) {
    unaff_r4 = puVar1;
  }
  if (!bVar4 || !bVar5) {
    unaff_r4 = (uint *)0x0;
  }
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  if (unaff_r4 == (uint *)0x0) {
    if (puVar1 != (uint *)0x0) {
      uVar2 = param_2[1];
      uVar3 = param_2[2];
      puVar1[2] = *param_2;
      puVar1[3] = uVar2;
      puVar1[4] = uVar3;
      return;
    }
  }
  else {
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    unaff_r4[2] = *param_2;
    unaff_r4[3] = uVar2;
    unaff_r4[4] = uVar3;
  }
  return;
}



void fn_005456d0(int param_1)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *unaff_r4;
  bool bVar5;
  bool bVar6;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined8 uVar7;
  
  *(undefined4 *)(param_1 + 0x28) = in_s0;
  *(undefined4 *)(param_1 + 0x2c) = in_s1;
  *(undefined4 *)(param_1 + 0x30) = in_s2;
  iVar1 = fn_00176d68(*(undefined4 *)(param_1 + 4));
  uVar7 = (**(code **)(**(int **)(iVar1 + 600) + 0x10))();
  uVar3 = (uint)((ulonglong)uVar7 >> 0x20);
  puVar2 = (uint *)uVar7;
  bVar5 = puVar2 != (uint *)0x0;
  if (bVar5) {
    uVar3 = *puVar2;
  }
  bVar6 = (uVar3 & 0x80000000) != 0;
  if (bVar5 && bVar6) {
    unaff_r4 = puVar2;
  }
  if (!bVar5 || !bVar6) {
    unaff_r4 = (uint *)0x0;
  }
  puVar2 = (uint *)(**(code **)(**(int **)(iVar1 + 600) + 0x10))();
  if ((puVar2 != (uint *)0x0) && ((*puVar2 & 0x40000000) == 0)) {
    puVar2 = (uint *)0x0;
  }
  if (unaff_r4 == (uint *)0x0) {
    if (puVar2 != (uint *)0x0) {
      uVar3 = *(uint *)(param_1 + 0x2c);
      uVar4 = *(uint *)(param_1 + 0x30);
      puVar2[2] = *(uint *)(param_1 + 0x28);
      puVar2[3] = uVar3;
      puVar2[4] = uVar4;
      return;
    }
  }
  else {
    uVar3 = *(uint *)(param_1 + 0x2c);
    uVar4 = *(uint *)(param_1 + 0x30);
    unaff_r4[2] = *(uint *)(param_1 + 0x28);
    unaff_r4[3] = uVar3;
    unaff_r4[4] = uVar4;
  }
  return;
}



void fn_00545620(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return;
  }
  iVar2 = *(int *)(param_2 + 0xc0);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar2 + param_2 + 0xc0;
  }
  if (iVar1 != 0) {
    iVar1 = param_2 + 0xc0;
    if (iVar2 != 0) {
      iVar1 = iVar1 + iVar2;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    (**(code **)(*param_1 + 0xc))(param_1,iVar1);
    *(undefined4 *)(param_2 + 0xc0) = 0;
  }
  iVar2 = *(int *)(param_2 + 0xbc);
  if (iVar2 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = iVar2 + param_2 + 0xbc;
  }
  if (iVar1 != 0) {
    iVar1 = param_2 + 0xbc;
    if (iVar2 != 0) {
      iVar1 = iVar1 + iVar2;
    }
    if (iVar2 == 0) {
      iVar1 = 0;
    }
    (**(code **)(*param_1 + 0xc))(param_1,iVar1);
    *(undefined4 *)(param_2 + 0xbc) = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x005456c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0xc))(param_1,param_2);
  return;
}



void fn_005455e4(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 600) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x40000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  puVar1[5] = *param_2;
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  return;
}



int fn_00545364(int param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  
  iVar9 = 0;
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0;
  }
  piVar1 = (int *)(*(int *)(param_1 + 8) + 0x2c);
  iVar7 = *piVar1;
  if (iVar7 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)piVar1 + iVar7;
  }
  if (iVar7 == 0) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(iVar7 + 0x28);
    if (iVar8 == 0) {
      iVar8 = 0;
    }
    else {
      iVar8 = iVar8 + iVar7 + 0x28;
    }
  }
  iVar7 = (**(code **)(*param_2 + 8))(param_2,0x68,4);
  if (iVar7 == 0) {
LAB_00545434:
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_00546fb0(iVar7,iVar8,param_1,param_2);
    uVar3 = fn_005461c0(puVar2,1);
    if ((uVar3 & 0x80000000) != 0) {
      if (puVar2 != (undefined4 *)0x0) {
        (**(code **)*puVar2)(puVar2);
        (**(code **)(*(int *)puVar2[1] + 0xc))((int *)puVar2[1],puVar2);
      }
      goto LAB_00545434;
    }
    if (puVar2 != (undefined4 *)0x0) goto LAB_0054543c;
  }
  iVar9 = -0x80000000;
LAB_0054543c:
  if (iVar9 == 0) {
    *(undefined4 **)(param_1 + 0x268) = puVar2;
    iVar7 = 0;
    iVar8 = *(int *)(puVar2[2] + 0x10);
    if (0 < iVar8) {
      do {
        piVar1 = (int *)(*(int *)(*(int *)(param_1 + 0x268) + 8) + 0x14);
        iVar5 = *piVar1;
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          iVar5 = (int)piVar1 + iVar5;
        }
        if (iVar5 == 0) {
          iVar5 = 0;
        }
        else {
          piVar1 = (int *)(iVar5 + iVar7 * 0x10 + 0x28);
          iVar5 = *piVar1;
          if (iVar5 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = iVar5 + (int)piVar1;
          }
        }
        iVar6 = *(int *)(iVar5 + 0x10);
        iVar4 = param_1;
        if (iVar6 != 9) {
          if (iVar6 == 10) {
            iVar4 = (**(code **)(**(int **)(param_1 + 600) + 0x10))();
          }
          else if (iVar6 == 0xb) {
            iVar4 = (**(code **)(**(int **)(param_1 + 0x260) + 0x10))();
          }
          else {
            iVar4 = 0;
          }
        }
        *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x34) + iVar7 * 4) = iVar4;
        iVar6 = *(int *)(iVar5 + 0x10);
        bVar10 = iVar6 == 9;
        if (bVar10) {
          iVar6 = *(int *)(iVar5 + 0x14);
        }
        if (bVar10 && iVar6 == 0) {
          *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x44) + iVar7 * 4) = param_1 + 0x4c;
        }
        else {
          *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x44) + iVar7 * 4) =
               *(int *)(iVar5 + 8) + iVar4;
        }
        *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x268) + 0x24) + iVar7 * 4) = 0;
        iVar4 = 0;
        iVar6 = *(int *)(iVar5 + 0x10);
        if (iVar6 == 9) {
          if (*(int *)(iVar5 + 0x14) == 0) {
            iVar4 = param_1 + 0x270;
          }
        }
        else {
          if (iVar6 == 10) {
            piVar1 = (int *)(*(int *)(param_1 + 0x26c) + 0xbc);
            iVar4 = *piVar1;
            if (iVar4 == 0) {
LAB_005455dc:
              iVar4 = 0;
            }
            else {
              iVar4 = iVar4 + (int)piVar1;
            }
          }
          else {
            if (iVar6 != 0xb) goto LAB_00545598;
            piVar1 = (int *)(*(int *)(param_1 + 0x26c) + 0xc0);
            iVar4 = *piVar1;
            if (iVar4 == 0) goto LAB_005455dc;
            iVar4 = (int)piVar1 + iVar4;
          }
          iVar4 = iVar4 + *(int *)(iVar5 + 8);
        }
LAB_00545598:
        *(int *)(*(int *)(*(int *)(param_1 + 0x268) + 0x54) + iVar7 * 4) = iVar4;
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar8);
    }
    **(undefined4 **)(*(int *)(param_1 + 0x28) + 0xc) = *(undefined4 *)(param_1 + 0x268);
  }
  return iVar9;
}



void fn_00545310(int param_1)

{
  uint *puVar1;
  uint in_s0;
  uint in_s1;
  uint in_s2;
  uint in_s3;
  
  puVar1 = (uint *)(**(code **)(**(int **)(param_1 + 0x260) + 0x10))();
  if ((puVar1 != (uint *)0x0) && ((*puVar1 & 0x20000000) == 0)) {
    puVar1 = (uint *)0x0;
  }
  puVar1[1] = in_s2;
  puVar1[2] = in_s3;
  puVar1[3] = in_s1;
  puVar1[4] = in_s0;
  return;
}


