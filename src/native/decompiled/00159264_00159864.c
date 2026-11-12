#include "00159264_00159864.h"



void fn_00159864(char *param_1,short param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar7;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  bool bVar8;
  undefined4 uVar9;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  iVar2 = iVar2 + cVar1 * 0x418;
  fn_00174610(iVar2 + -0x4080,(int)-param_2);
  iVar3 = fn_00174858(DAT_008977e4);
  fn_0017b278(*(undefined4 *)(iVar3 + 0x54),param_1,iVar2 + -0x4025);
  iVar3 = fn_00174858(DAT_008977e4);
  fn_0017b93c(*(undefined4 *)(iVar3 + 0x54),param_1);
  iVar3 = (int)*param_1;
  uVar6 = iVar3 - 0x10;
  bVar8 = 3 < uVar6;
  if (bVar8) {
    uVar6 = iVar3 - 0x18;
  }
  if ((bVar8 && 3 < uVar6) && (iVar3 != 0x20 && iVar3 != 0x22)) {
    bVar8 = false;
  }
  else {
    bVar8 = true;
  }
  if (*(char *)(iVar2 + -0x3c6c) == '\0') {
    return;
  }
  if (bVar8) {
    iVar3 = 0x20;
    iVar7 = 0x22;
  }
  else {
    iVar3 = 0x21;
    iVar7 = 0x23;
  }
  iVar4 = fn_00174828(DAT_008977e4);
  iVar5 = fn_00174828(DAT_008977e4,iVar3 + -0x20);
  *(char *)(iVar4 + iVar3 * 8 + 0x4182) = *param_1;
  *(char *)(iVar5 + iVar7 * 8 + 0x4182) = *param_1;
  fn_00180350(iVar2 + -0x4025,0x4e,1,0,0,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8);
  uVar9 = 0;
  fn_00180350(iVar2 + -0x4025,0x4f,1,0);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0017b1e8(*(undefined4 *)(iVar2 + 0x54),*param_1,1);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0017baa4(*(undefined4 *)(iVar2 + 0x54),*param_1,1,uVar9);
  return;
}



void fn_001596d8(char *param_1,char *param_2,uint param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  cVar1 = *param_1;
  iVar3 = fn_00174828(DAT_008977e4);
  cVar2 = *param_2;
  iVar3 = iVar3 + cVar1 * 8;
  iVar4 = fn_00174828(DAT_008977e4,cVar1 + -0x20);
  if (param_3 == 0) {
    *(undefined1 *)(iVar3 + 0x4183) = 1;
  }
  iVar4 = iVar4 + cVar2 * 0x418;
  iVar5 = iVar4 + -0x4080;
  if (param_3 < 2) {
    *(undefined1 *)(iVar3 + 0x4182) = 0;
    if ((int)*param_1 - 0x20U < 2) {
      fn_0017419c();
    }
    else {
      fn_00174398(iVar5,0);
    }
  }
  else if (param_3 == 2) {
    *(char *)(iVar3 + 0x4182) = *param_2;
    if ((int)*param_1 - 0x20U < 2) {
      fn_0017419c();
    }
    else {
      fn_00174398(iVar5,1);
    }
  }
  if ((int)*param_1 - 0x20U < 2) {
    iVar3 = fn_00174858(DAT_008977e4);
    fn_0017b1e8(*(undefined4 *)(iVar3 + 0x54),*param_2);
  }
  else {
    iVar3 = fn_00174858(DAT_008977e4);
    fn_0017baa4(*(undefined4 *)(iVar3 + 0x54),*param_2);
  }
  iVar3 = fn_00174858(DAT_008977e4);
  fn_0017b278(*(undefined4 *)(iVar3 + 0x54),param_2,iVar4 + -0x4025,0x61);
  return;
}



/* WARNING: Removing unreachable block (ram,0x00159794) */
/* WARNING: Removing unreachable block (ram,0x001597c8) */
/* WARNING: Removing unreachable block (ram,0x001597b4) */
/* WARNING: Removing unreachable block (ram,0x00159748) */
/* WARNING: Removing unreachable block (ram,0x00159750) */
/* WARNING: Removing unreachable block (ram,0x0015973c) */
/* WARNING: Removing unreachable block (ram,0x001597f8) */
/* WARNING: Removing unreachable block (ram,0x00159830) */

void fn_001596c4(undefined4 param_1,char *param_2,char *param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  cVar1 = *param_2;
  iVar3 = fn_00174828(DAT_008977e4);
  cVar2 = *param_3;
  iVar3 = iVar3 + cVar1 * 8;
  iVar4 = fn_00174828(DAT_008977e4,cVar1 + -0x20);
  *(undefined1 *)(iVar3 + 0x4183) = 1;
  iVar4 = iVar4 + cVar2 * 0x418;
  *(undefined1 *)(iVar3 + 0x4182) = 0;
  if ((int)*param_2 - 0x20U < 2) {
    fn_0017419c();
  }
  else {
    fn_00174398(iVar4 + -0x4080,0);
  }
  if ((int)*param_2 - 0x20U < 2) {
    iVar3 = fn_00174858(DAT_008977e4);
    fn_0017b1e8(*(undefined4 *)(iVar3 + 0x54),*param_3);
  }
  else {
    iVar3 = fn_00174858(DAT_008977e4);
    fn_0017baa4(*(undefined4 *)(iVar3 + 0x54),*param_3);
  }
  iVar3 = fn_00174858(DAT_008977e4);
  fn_0017b278(*(undefined4 *)(iVar3 + 0x54),param_3,iVar4 + -0x4025,0x61);
  return;
}



void fn_00159668(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  fn_0017455c(iVar2 + cVar1 * 0x418 + -0x4080,-param_2);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0016df3c(*(undefined4 *)(iVar2 + 0x54),param_1,param_2);
  return;
}



void fn_0015960c(char *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *param_1;
  iVar2 = fn_00174828(DAT_008977e4);
  fn_00180278(iVar2 + cVar1 * 0x418 + -0x4080,-param_2);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_0016de70(*(undefined4 *)(iVar2 + 0x54),param_1,param_2);
  return;
}



void fn_001594e4(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_3 == 0) {
    iVar9 = *param_1;
    iVar8 = *(int *)(iVar9 + 0x1c);
    iVar7 = fn_0017fde4(param_2);
    piVar2 = *(int **)(iVar8 + 0x18);
    piVar5 = *(int **)(iVar8 + 0x1c);
    while( true ) {
      if (piVar2 != piVar5) {
        param_3 = *piVar2;
      }
      if (piVar2 == piVar5 || param_3 == iVar7) break;
      piVar2 = piVar2 + 1;
    }
    if (piVar2 != piVar5) {
      piVar3 = piVar2 + 1;
      if (piVar3 < piVar5) {
        iVar10 = (int)piVar5 - (int)piVar3;
        if (0 < iVar10) {
          piVar5 = piVar2;
          if (iVar10 * 0x20000000 < 0) {
            iVar6 = *piVar3;
            piVar3 = piVar2 + 2;
            if (iVar6 != iVar7) {
              piVar5 = piVar2 + 1;
              *piVar2 = iVar6;
            }
          }
          piVar2 = piVar5;
          for (iVar10 = iVar10 >> 3; iVar10 != 0; iVar10 = iVar10 + -1) {
            piVar5 = piVar2;
            if (*piVar3 != iVar7) {
              piVar5 = piVar2 + 1;
              *piVar2 = *piVar3;
            }
            piVar4 = piVar3 + 1;
            piVar3 = piVar3 + 2;
            piVar2 = piVar5;
            if (*piVar4 != iVar7) {
              piVar2 = piVar5 + 1;
              *piVar5 = *piVar4;
            }
          }
        }
      }
      else {
        while (piVar3 != piVar5) {
          iVar10 = *piVar3;
          piVar3 = piVar3 + 1;
          if (iVar10 != iVar7) {
            *piVar2 = iVar10;
            piVar2 = piVar2 + 1;
          }
        }
      }
    }
    piVar5 = *(int **)(iVar8 + 0x1c);
    *(int **)(iVar8 + 0x1c) = piVar2;
    if (piVar5 != piVar2) {
      *(undefined4 *)(iVar7 + 0xc) = 0;
    }
    fn_00162d44(*(undefined4 *)(*(int *)(iVar9 + 0x10) + 0x24));
    return;
  }
  if (param_3 == 1) {
    iVar7 = *param_1;
    uVar1 = fn_0017fde4(param_2);
    fn_00162d54(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x24),uVar1);
    fn_00162d44(*(undefined4 *)(*(int *)(iVar7 + 0x10) + 0x24));
    return;
  }
  return;
}



int fn_00159264(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_40;
  int *local_3c;
  int local_38;
  uint local_30;
  int *local_2c;
  
  iVar4 = 0;
  local_38 = fn_002fece8(0x2c);
  if (local_38 != 0) {
    fn_0019b998(local_38,param_1,0);
  }
  *(undefined4 *)(local_38 + 0x18) = 0;
  iVar2 = *param_2;
  while( true ) {
    if (iVar2 == 0) {
      return local_38;
    }
    piVar3 = param_2 + iVar4 * 4;
    iVar2 = piVar3[1];
    piVar1 = (int *)fn_002fece8(0x48);
    if (piVar1 != (int *)0x0) {
      piVar1[1] = 0;
      piVar1[2] = 0;
      *piVar1 = (int)&DAT_0081e540;
      piVar1[7] = 0;
      piVar1[8] = 0;
      piVar1[9] = 0;
      piVar1[10] = 0;
      piVar1[0xb] = 0;
      piVar1[0xc] = 0;
      piVar1[0xe] = 0;
      piVar1[0xd] = 0x1000001;
      piVar1[0x11] = 0;
      piVar1[0x10] = 0x1000001;
      piVar1[0xf] = iVar2;
      piVar1[3] = 0;
      piVar1[4] = 0;
      piVar1[5] = param_1;
      piVar1[3] = *(int *)(param_1 + 0x44);
      iVar2 = *(int *)(param_1 + 0x44);
      if (iVar2 != 0) {
        *(int **)(iVar2 + 0x10) = piVar1;
      }
      *(int *)(param_1 + 0x44) = (int)piVar1;
    }
    piVar1[6] = piVar3[2];
    local_3c = (int *)fn_0019ba68(param_1,*piVar3,0xffffffff);
    local_40 = 0x8000010;
    if (local_3c == (int *)0x0) break;
    local_3c[1] = local_3c[1] + 1;
    fn_0019e864(piVar1 + 0x10,&local_40);
    if (((local_40 & 0x8000000) != 0) &&
       (iVar2 = local_3c[1], local_3c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    if ((piVar3[3] != 0) && (iVar2 = fn_0017875c(piVar1 + 7), iVar2 == 0)) {
      return 0;
    }
    local_30 = 0x8000200;
    local_2c = piVar1;
    if (piVar1 == (int *)0x0) break;
    piVar1[1] = piVar1[1] + 1;
    local_3c = (int *)fn_0019ba68(param_1,*piVar3,0xffffffff);
    local_40 = 0x8000010;
    if (local_3c == (int *)0x0) break;
    local_3c[1] = local_3c[1] + 1;
    fn_0019b728(local_38,&local_40,&local_30);
    if (((local_40 & 0x8000000) != 0) &&
       (iVar2 = local_3c[1], local_3c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_3c + 8))();
    }
    if (((local_30 & 0x8000000) != 0) &&
       (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
      (**(code **)(*local_2c + 8))();
    }
    iVar4 = iVar4 + 1;
    iVar2 = param_2[iVar4 * 4];
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}


