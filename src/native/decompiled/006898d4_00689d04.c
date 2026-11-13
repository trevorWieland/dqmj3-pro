#include "006898d4_00689d04.h"



void fn_00689d04(int param_1)

{
  fn_001f7500(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689ce4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_00747ef8();
}



void fn_00689cd4(int param_1,int param_2)

{
  *(int *)(param_1 + 0x38) = param_2;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x34);
  return;
}



void fn_00689ca0(int param_1,int param_2,undefined1 param_3)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x30);
  piVar1 = (int *)*piVar2;
  if (piVar1 != piVar2) {
    while (piVar1[2] != param_2) {
      piVar1 = (int *)*piVar1;
      if (piVar1 == piVar2) {
        return;
      }
    }
    *(undefined1 *)(piVar1 + 3) = param_3;
  }
  return;
}



int fn_00689c48(int param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = (int *)**(int **)(param_1 + 0x30);
  while( true ) {
    if (piVar1 == *(int **)(param_1 + 0x30)) {
      return 0;
    }
    if (piVar1[2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  return (int)*(char *)((int)piVar1 + 0xd);
}



void fn_00689c30(int param_1)

{
  *(undefined1 *)(param_1 + 0x1d) = 0;
  return;
}



void fn_00689c1c(int param_1)

{
  fn_0028e650(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689bdc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x18) + 0x14);
  piVar2 = *(int **)(iVar1 + 0x28);
  piVar3 = (int *)*piVar2;
  if (piVar3 != piVar2) {
    do {
      (**(code **)(**(int **)piVar3[2] + 0x28))(*(int **)piVar3[2],param_2,param_3,0);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(iVar1 + 0x28));
  }
  return;
}



void fn_00689b38(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 0x30);
  piVar1 = (int *)*piVar2;
  while( true ) {
    if (piVar1 == piVar2) {
      return;
    }
    if (piVar1[2] == param_2) break;
    piVar1 = (int *)*piVar1;
  }
  if (piVar1 == piVar2) {
    return;
  }
  *(int *)piVar1[1] = *piVar1;
  *(int *)(*piVar1 + 4) = piVar1[1];
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + -1;
  *piVar1 = *(int *)(param_1 + 0x24);
  *(int **)(param_1 + 0x24) = piVar1;
  return;
}



void fn_00689b30(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  piVar3 = *(int **)(iVar1 + 0x30);
  piVar2 = (int *)*piVar3;
  while( true ) {
    if (piVar2 == piVar3) {
      return;
    }
    if (piVar2[2] == param_2) break;
    piVar2 = (int *)*piVar2;
  }
  if (piVar2 == piVar3) {
    return;
  }
  *(int *)piVar2[1] = *piVar2;
  *(int *)(*piVar2 + 4) = piVar2[1];
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + -1;
  *piVar2 = *(int *)(iVar1 + 0x24);
  *(int **)(iVar1 + 0x24) = piVar2;
  return;
}



undefined4 fn_00689b18(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 8))();
  return *(undefined4 *)(iVar1 + 0x18);
}



void fn_00689a10(int param_1,int param_2,uint param_3,uint param_4)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint unaff_r6;
  int iVar6;
  undefined4 *puVar7;
  
  puVar7 = (undefined4 *)**(undefined4 **)(param_1 + 0x30);
  while( true ) {
    if (puVar7 == *(undefined4 **)(param_1 + 0x30)) {
      piVar4 = (int *)(param_1 + 0x20);
      piVar1 = *(int **)(param_1 + 0x24);
      iVar6 = *(int *)(param_1 + 0x30);
      if (piVar1 == (int *)0x0) {
        piVar1 = *(int **)(param_1 + 0x28);
        if (piVar1 == *(int **)(param_1 + 0x2c)) {
          if (*piVar4 == 0) {
            uVar5 = 0x20;
          }
          else {
            uVar2 = *(uint *)(*piVar4 + 4);
            uVar5 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar5 < uVar2 + 0x20) {
              uVar5 = uVar2 + 0x20;
            }
          }
          piVar1 = (int *)fn_00100fc6(0xc,0);
          iVar3 = fn_00100fc6(uVar5 << 4,0);
          piVar1[2] = iVar3;
          *piVar1 = *piVar4;
          piVar1[1] = uVar5;
          *piVar4 = (int)piVar1;
          piVar1 = (int *)piVar1[2];
          *(int **)(param_1 + 0x28) = piVar1;
          *(int **)(param_1 + 0x2c) = piVar1 + uVar5 * 4;
        }
        *(int **)(param_1 + 0x28) = piVar1 + 4;
      }
      else {
        *(int *)(param_1 + 0x24) = *piVar1;
      }
      if (piVar1 + 2 != (int *)0x0) {
        piVar1[2] = param_2;
        piVar1[3] = param_3 & 0xff | unaff_r6 & 0xffff0000 | (param_4 & 0xff) << 8;
      }
      *piVar1 = iVar6;
      piVar1[1] = *(int *)(iVar6 + 4);
      **(int **)(iVar6 + 4) = (int)piVar1;
      *(int **)(iVar6 + 4) = piVar1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + 1;
      return;
    }
    if (puVar7[2] == param_2) break;
    puVar7 = (undefined4 *)*puVar7;
  }
  return;
}



void fn_00689a00(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint unaff_r6;
  int iVar8;
  undefined4 *puVar9;
  
  bVar1 = *(byte *)(param_1 + 0x47);
  iVar2 = *(int *)(param_1 + 8);
  puVar9 = (undefined4 *)**(undefined4 **)(iVar2 + 0x30);
  while( true ) {
    if (puVar9 == *(undefined4 **)(iVar2 + 0x30)) {
      piVar6 = (int *)(iVar2 + 0x20);
      piVar3 = *(int **)(iVar2 + 0x24);
      iVar8 = *(int *)(iVar2 + 0x30);
      if (piVar3 == (int *)0x0) {
        piVar3 = *(int **)(iVar2 + 0x28);
        if (piVar3 == *(int **)(iVar2 + 0x2c)) {
          if (*piVar6 == 0) {
            uVar7 = 0x20;
          }
          else {
            uVar4 = *(uint *)(*piVar6 + 4);
            uVar7 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar7 < uVar4 + 0x20) {
              uVar7 = uVar4 + 0x20;
            }
          }
          piVar3 = (int *)fn_00100fc6(0xc,0);
          iVar5 = fn_00100fc6(uVar7 << 4,0);
          piVar3[2] = iVar5;
          *piVar3 = *piVar6;
          piVar3[1] = uVar7;
          *piVar6 = (int)piVar3;
          piVar3 = (int *)piVar3[2];
          *(int **)(iVar2 + 0x28) = piVar3;
          *(int **)(iVar2 + 0x2c) = piVar3 + uVar7 * 4;
        }
        *(int **)(iVar2 + 0x28) = piVar3 + 4;
      }
      else {
        *(int *)(iVar2 + 0x24) = *piVar3;
      }
      if (piVar3 + 2 != (int *)0x0) {
        piVar3[2] = param_2;
        piVar3[3] = (uint)bVar1 | unaff_r6 & 0xffff0000 | (param_3 & 0xff) << 8;
      }
      *piVar3 = iVar8;
      piVar3[1] = *(int *)(iVar8 + 4);
      **(int **)(iVar8 + 4) = (int)piVar3;
      *(int **)(iVar8 + 4) = piVar3;
      *(int *)(iVar2 + 0x34) = *(int *)(iVar2 + 0x34) + 1;
      return;
    }
    if (puVar9[2] == param_2) break;
    puVar9 = (undefined4 *)*puVar9;
  }
  return;
}



void fn_00689960(int *param_1)

{
  (**(code **)(*param_1 + 0x160))(param_1);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}



void fn_0068993c(int param_1)

{
  fn_001f7448(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_00689930(int param_1)

{
  fn_001f7438(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
  return;
}



void fn_006898d4(int *param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  uVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
  fn_0044aa54(param_1[0x3c],uVar2);
  uVar1 = fn_0029272c(uVar2);
  *(undefined1 *)(param_1[0x3c] + 0x903) = uVar1;
  fn_001f7438(*(undefined4 *)(param_1[1] + 0x18),0xe7,0);
  return;
}


