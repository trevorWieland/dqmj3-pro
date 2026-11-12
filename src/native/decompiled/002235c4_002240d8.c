#include "002235c4_002240d8.h"



undefined4 fn_002240d8(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  fn_006f7a48(DAT_008977e0);
  iVar1 = fn_006a7dc8();
  if ((((((iVar1 != 0 || param_3 != 0) && (*(char *)(param_2 + 0xdc) == '\0')) &&
        (*(char *)(param_1 + 0x58) != '\0')) &&
       ((*(char *)(param_1 + 0x23f) == '\0' &&
        (iVar1 = fn_006aa6e0(*(undefined4 *)(param_1 + 0x228)), iVar1 == 0)))) &&
      ((iVar1 = fn_006a9938(param_2), iVar1 != 0 || (iVar1 = fn_006a99b0(param_2), iVar1 != 0))))
     && ((((param_3 != 0 || (iVar1 = fn_006a9938(param_1), iVar1 != 0)) ||
          (iVar1 = fn_006a99b0(param_1), iVar1 != 0)) && (*(char *)(param_1 + 0x58) != '\0')))) {
    iVar1 = fn_006a9c40(param_2,param_1,param_3,0);
    if (iVar1 != 0) {
      fn_00223a90(param_1,param_2);
      return 1;
    }
  }
  return 0;
}



void fn_00223ff8(int param_1,int param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  iVar5 = *(int *)(param_1 + 0x180);
  iVar6 = *(int *)(param_1 + 0x184);
  if (iVar6 != 0 && iVar5 != 0) {
    if (param_2 == 0) {
      fn_0018911c(iVar6,iVar5,0);
      return;
    }
    if ((*(int *)(param_1 + 400) == 0) || (*(char *)(param_1 + 0x194) == -1)) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
      iVar2 = (int)*(short *)(iVar2 + 0x1c);
    }
    fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
    uVar1 = fn_001cad10();
    uVar3 = fn_0025988c(*(undefined4 *)(param_1 + 400));
    uVar4 = fn_002266b4(param_1,1,*(undefined4 *)(param_1 + 0xe0));
    fn_0017b048(iVar6,iVar5,uVar4,uVar1,uVar3,iVar2,param_3);
  }
  return;
}



void fn_00223f40(int *param_1)

{
  fn_00224444();
  (**(code **)(*param_1 + 0x54))(param_1,1);
  fn_002241e4(param_1);
  (**(code **)(*param_1 + 0x44))(param_1,0,0,1);
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x20d) = 0;
  *(undefined1 *)((int)param_1 + 0x20e) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  fn_00224908(param_1,1);
  fn_00221828(param_1);
  *(undefined1 *)(param_1 + 0x90) = 0;
  return;
}



void fn_00223e50(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (*(char *)(param_1 + 0x23b) != '\0') {
    iVar8 = *(int *)(param_1 + 0x188);
    iVar1 = fn_0017fde4(*(undefined4 *)(param_1 + 0x180));
    piVar2 = *(int **)(iVar8 + 0x18);
    piVar3 = *(int **)(iVar8 + 0x1c);
    while( true ) {
      if (piVar2 != piVar3) {
        param_4 = *piVar2;
      }
      if (piVar2 == piVar3 || param_4 == iVar1) break;
      piVar2 = piVar2 + 1;
    }
    if (piVar2 != piVar3) {
      piVar4 = piVar2 + 1;
      if (piVar4 < piVar3) {
        iVar6 = (int)piVar3 - (int)piVar4;
        if (0 < iVar6) {
          piVar3 = piVar2;
          if (iVar6 * 0x20000000 < 0) {
            iVar7 = *piVar4;
            piVar4 = piVar2 + 2;
            if (iVar7 != iVar1) {
              piVar3 = piVar2 + 1;
              *piVar2 = iVar7;
            }
          }
          piVar2 = piVar3;
          for (iVar6 = iVar6 >> 3; iVar6 != 0; iVar6 = iVar6 + -1) {
            piVar3 = piVar2;
            if (*piVar4 != iVar1) {
              piVar3 = piVar2 + 1;
              *piVar2 = *piVar4;
            }
            piVar5 = piVar4 + 1;
            piVar4 = piVar4 + 2;
            piVar2 = piVar3;
            if (*piVar5 != iVar1) {
              piVar2 = piVar3 + 1;
              *piVar3 = *piVar5;
            }
          }
        }
      }
      else {
        while (piVar4 != piVar3) {
          iVar6 = *piVar4;
          piVar4 = piVar4 + 1;
          if (iVar6 != iVar1) {
            *piVar2 = iVar6;
            piVar2 = piVar2 + 1;
          }
        }
      }
    }
    piVar3 = *(int **)(iVar8 + 0x1c);
    *(int **)(iVar8 + 0x1c) = piVar2;
    if (piVar3 != piVar2) {
      *(undefined4 *)(iVar1 + 0xc) = 0;
    }
    *(undefined1 *)(param_1 + 0x23b) = 0;
  }
  return;
}



void fn_00223cd4(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  
  if (*(char *)(param_1 + 0x23b) != '\0') {
    return;
  }
  iVar10 = *(int *)(param_1 + 0x188);
  iVar2 = fn_0017fde4(*(undefined4 *)(param_1 + 0x180));
  if (((*(int *)(iVar10 + 0xc) != 0) &&
      ((*(int *)(iVar10 + 0xc) == iVar2 || (iVar3 = fn_0019bb90(), iVar3 != 0)))) ||
     (*(int *)(iVar2 + 0xc) != 0)) goto LAB_00223d90;
  uVar9 = *(uint *)(iVar10 + 0x20);
  uVar4 = uVar9 & 0x3fffffff;
  if (*(int *)(iVar10 + 0x1c) - *(int *)(iVar10 + 0x18) >> 2 < (int)uVar4) {
LAB_00223e34:
    bVar1 = true;
    if (*(int **)(iVar10 + 0x1c) != (int *)0x0) {
      **(int **)(iVar10 + 0x1c) = iVar2;
    }
    *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x1c) + 4;
  }
  else {
    if (uVar4 == 0) {
      uVar4 = 1;
    }
    else {
      uVar4 = uVar4 << 1;
    }
    if (uVar4 <= (uVar9 & 0x3fffffff)) goto LAB_00223e34;
    piVar5 = *(int **)(iVar10 + 0x14);
    if ((piVar5 != (int *)0x0) && ((uVar9 & 0xc0000000) == 0x40000000)) {
      puVar6 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5,uVar4 << 2,0x20);
      if (puVar6 == (undefined4 *)0x0) goto LAB_00223d90;
      puVar7 = *(undefined4 **)(iVar10 + 0x18);
      puVar8 = *(undefined4 **)(iVar10 + 0x1c);
      iVar3 = 0;
      puVar11 = puVar6;
      if (puVar7 != puVar8) {
        do {
          if (puVar11 != (undefined4 *)0x0) {
            *puVar11 = *puVar7;
          }
          puVar7 = puVar7 + 1;
          puVar11 = puVar11 + 1;
        } while (puVar7 != puVar8);
        iVar3 = *(int *)(iVar10 + 0x1c) - *(int *)(iVar10 + 0x18) >> 2;
      }
      if (*(int *)(iVar10 + 0x18) != 0) {
        *(int *)(iVar10 + 0x1c) = *(int *)(iVar10 + 0x18);
        (**(code **)(**(int **)(iVar10 + 0x14) + 0xc))();
      }
      *(undefined4 **)(iVar10 + 0x1c) = puVar6 + iVar3;
      *(undefined4 **)(iVar10 + 0x18) = puVar6;
      *(uint *)(iVar10 + 0x20) = *(uint *)(iVar10 + 0x20) & 0xc0000000 | uVar4;
      goto LAB_00223e34;
    }
    bVar1 = false;
  }
  if (bVar1) {
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar10 + 0x10);
  }
LAB_00223d90:
  *(undefined1 *)(param_1 + 0x23b) = 1;
  return;
}



undefined4 fn_002235c4(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  bool bVar11;
  bool bVar12;
  float in_s0;
  float fVar13;
  undefined4 local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  
  iVar2 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = (int *)fn_005e846c();
  }
  piVar9 = *(int **)(param_1 + 0x180);
  if (piVar9 != piVar3) {
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 4))(piVar9);
    }
    *(int **)(param_1 + 0x180) = piVar3;
  }
  iVar2 = fn_006f7a9c(DAT_008977e0);
  uVar4 = *(uint *)(param_1 + 0x198);
  if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar4)) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar2 + 4) + uVar4 * 0x34;
  }
  iVar2 = fn_0069ee38(*(undefined4 *)(param_1 + 0x180),iVar2,0);
  if (iVar2 == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x19c) != -1) {
    iVar2 = fn_006f7a9c(DAT_008977e0);
    uVar4 = *(uint *)(param_1 + 0x19c);
    if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar2 + 8) - *(int *)(iVar2 + 4)) / 0x34) <= uVar4)) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(iVar2 + 4) + uVar4 * 0x34;
    }
    fn_0069eb10(*(undefined4 *)(param_1 + 0x180),iVar2,0);
  }
  uVar5 = fn_0017fde4(*(undefined4 *)(param_1 + 0x180));
  fn_0017fc28(uVar5,1);
  uVar5 = fn_0025988c(*(undefined4 *)(param_1 + 400));
  uVar6 = fn_0017fde4(*(undefined4 *)(param_1 + 0x180));
  fn_002cd6b0(uVar6,uVar5);
  iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 400));
  uVar5 = 0;
  local_3c = 0;
  local_38 = 0.0;
  local_34 = 0;
  if (((DAT_008c62f8 & 1) == 0) && (iVar7 = fn_00303afc(&DAT_008c62f8), iVar7 != 0)) {
    in_s0 = 1.0;
    DAT_008f9e20 = 1.0;
    DAT_008f9e24 = 1.0;
    DAT_008f9e28 = 1.0;
  }
  fn_002cd59c(2);
  local_30 = DAT_008f9e20 * in_s0;
  fStack_2c = DAT_008f9e24 * in_s0;
  local_28 = DAT_008f9e28 * in_s0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar7 = fn_00303afc(&DAT_008c62fc), iVar7 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar5 = fn_0017fde4(*(undefined4 *)(param_1 + 0x180));
  fn_0017ab7c(&local_3c,uVar5,2,&DAT_008f9e2c,&local_30);
  fVar13 = local_38 - local_38 * 0.25;
  if (*(short *)(iVar2 + 0x1c) == 0x1e6) {
    fVar13 = 40.0;
  }
  if (*(short *)(iVar2 + 0x1c) == 0x36d) {
    fVar13 = 40.0;
  }
  *(float *)(param_1 + 0x1b0) = fVar13;
  cVar1 = *(char *)(iVar2 + 0x72);
  bVar11 = cVar1 == '\0';
  if (bVar11) {
    cVar1 = *(char *)(iVar2 + 0x78);
  }
  bVar12 = bVar11 && cVar1 == '\0';
  if (bVar11 && cVar1 == '\0') {
    bVar12 = *(char *)(iVar2 + 0x7e) == '\0';
  }
  if (!bVar12) {
    iVar7 = fn_006f7a9c(DAT_008977e0);
    uVar5 = fn_00279fe4(iVar7,(int)*(short *)(iVar2 + 0x1c));
    iVar8 = fn_00279bbc(iVar7,uVar5);
    if (iVar8 != 0) {
      uVar6 = fn_006b7664(iVar7,uVar5);
      uVar4 = *(uint *)(param_1 + 0x198);
      if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4)) / 0x34) <= uVar4))
      {
        uVar10 = 0;
      }
      else {
        uVar10 = *(undefined4 *)(*(int *)(iVar7 + 0x10) + uVar4 * 4);
      }
      if (((int)uVar4 < 0) || ((uint)((*(int *)(iVar7 + 8) - *(int *)(iVar7 + 4)) / 0x34) <= uVar4))
      {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(iVar7 + 4) + uVar4 * 0x34;
      }
      fn_002cd5b0(iVar8,uVar10,uVar6,iVar2 + 0x72);
      fn_00279ae4(iVar7,uVar5);
    }
    iVar2 = fn_002798a0(iVar7,uVar5);
    if (iVar2 != 0) {
      fn_00279ae4(iVar7,uVar5);
    }
  }
  return 1;
}


