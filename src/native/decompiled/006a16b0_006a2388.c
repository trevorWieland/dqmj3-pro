#include "006a16b0_006a2388.h"



void fn_006a2230(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(int *)(param_2 + 8));
      }
      iVar3 = 0x41f00000;
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      iVar3 = *(int *)(iVar1 + 0x204);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar3;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x208));
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_00263814();
      fn_00660790(0x19,iVar1 + 8,param_1 + 2);
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



void fn_006a2100(int *param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = param_1[0x68];
  bVar2 = iVar1 == 0;
  if (bVar2) {
    iVar1 = param_1[0x69];
  }
  if ((bVar2 && iVar1 == 0) && ((char)param_1[0x79] == '\0')) {
    if ((char)param_1[0x67] != '\0') {
      fn_006a69c8(param_1);
      return;
    }
    if ((char)param_1[0x61] == '\0') {
      iVar1 = fn_0068cafc(DAT_008977e8);
      (**(code **)(*param_1 + 0x40))(param_1,0x9c42,1);
      fn_0018d060(param_1[0x17],7,4);
      while (param_1[0x3b] - param_1[0x3a] >> 2 != 0) {
        fn_006a2620(param_1,(int *)(param_2 + 8));
      }
      iVar3 = 0x41f00000;
      *(undefined1 *)((int)param_1 + 0x185) = 0;
      fn_0017fe34();
      param_1[0x62] = iVar3;
      iVar3 = *(int *)(iVar1 + 0x1dc);
      iVar4 = *(int *)(param_2 + 8);
      iVar5 = *(int *)(param_2 + 0xc);
      fn_006a3744(param_1);
      param_1[0x23] = iVar3;
      param_1[0x24] = iVar4;
      param_1[0x25] = iVar5;
      fn_006a2584(param_1,*(undefined4 *)(iVar1 + 0x1e0));
      fn_006a2388(param_1);
      return;
    }
    *(undefined1 *)(param_1 + 0x61) = 0;
  }
  return;
}



void fn_006a2388(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0xfc) != 0) {
    fn_00232fa8(*(int *)(param_1 + 0xfc),0);
    fn_00232be4(*(undefined4 *)(param_1 + 0xfc),param_1);
    *(undefined4 *)(param_1 + 0xfc) = 0;
    if ((*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8) >> 2 == 0) &&
       (*(int *)(param_1 + 0xf8) != -1)) {
      piVar1 = (int *)fn_0068c7e8(DAT_008977e8);
      (**(code **)(*piVar1 + 0xc))(piVar1,*(undefined4 *)(param_1 + 0xf8));
      *(undefined4 *)(param_1 + 0xf8) = 0xffffffff;
    }
  }
  return;
}



void fn_006a1fd8(int *param_1,int param_2)

{
  int iVar1;
  
  param_1[0x3f] = param_2;
  fn_00232fa8(param_2,param_1);
  *(int *)(param_1[0x3f] + 0x58) = param_1[0x3b] - param_1[0x3a] >> 2;
  (**(code **)(*(int *)param_1[0x3f] + 0x40))((int *)param_1[0x3f],0x9c45,0);
  if (param_1[0x3e] == -1) {
    iVar1 = (**(code **)(*param_1 + 0x40))(param_1,0x9c51,0);
    param_1[0x3e] = iVar1;
  }
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00263814();
  fn_00660790(2,iVar1 + 8,param_2 + 8);
  return;
}



int fn_006a1bb0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001cc79c(param_1,param_2,*(undefined4 *)(param_1 + 0x5c));
  if (iVar1 != -1 && param_3 != 0) {
    uVar2 = fn_0068c7e8(DAT_008977e8);
    fn_002ee5ac(uVar2,iVar1);
  }
  return iVar1;
}



void fn_006a1a60(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int unaff_r4;
  int iVar7;
  int iVar8;
  bool bVar9;
  
  iVar7 = 0;
  piVar2 = *(int **)(param_1 + 0xe8);
  piVar6 = *(int **)(param_1 + 0xec);
  if (piVar2 < piVar6) {
    if (0 < (int)piVar6 - (int)piVar2) {
      iVar4 = (int)piVar6 - (int)piVar2 >> 2;
      iVar3 = 0;
      do {
        piVar1 = piVar2 + iVar3;
        iVar3 = iVar3 + 1;
        if (iVar7 < *(int *)(*piVar1 + 0x94)) {
          iVar7 = *(int *)(*piVar1 + 0x94);
        }
        iVar4 = iVar4 + -1;
        unaff_r4 = 0;
      } while (iVar4 != 0);
    }
  }
  else {
    while (piVar2 != piVar6) {
      iVar4 = *piVar2;
      piVar2 = piVar2 + 1;
      if (iVar7 < *(int *)(iVar4 + 0x94)) {
        iVar7 = *(int *)(iVar4 + 0x94);
      }
    }
  }
  iVar8 = 0;
  iVar5 = 0;
  bVar9 = *(int *)(param_1 + 0xfc) != 0;
  iVar4 = 0;
  iVar3 = 0;
  if (bVar9) {
    iVar3 = *(int *)(*(int *)(param_1 + 0xfc) + 0x58);
    iVar4 = iVar3 - iVar7;
  }
  if ((bVar9 && iVar3 != iVar7) && iVar4 < 0 == (bVar9 && SBORROW4(iVar3,iVar7))) {
    iVar7 = iVar3;
  }
  if (-1 < iVar7) {
    do {
      piVar2 = *(int **)(param_1 + 0xe8);
      bVar9 = false;
      if (piVar6 < piVar2) {
        unaff_r4 = iVar5 - iVar8;
      }
      if (piVar2 < piVar6) {
        unaff_r4 = 1;
        if (1 < ((int)piVar6 - (int)piVar2 >> 2) + 1) {
          iVar4 = (int)piVar6 - (int)piVar2;
          do {
            iVar3 = *piVar2;
            unaff_r4 = unaff_r4 + 1;
            piVar2 = piVar2 + 1;
            if (*(int *)(iVar3 + 0x94) == iVar5) {
              bVar9 = true;
              *(int *)(iVar3 + 0x94) = iVar5 - iVar8;
            }
          } while (unaff_r4 < (iVar4 >> 2) + 1);
        }
      }
      else {
        while (piVar2 != piVar6) {
          iVar4 = *piVar2;
          piVar2 = piVar2 + 1;
          if (*(int *)(iVar4 + 0x94) == iVar5) {
            bVar9 = true;
            *(int *)(iVar4 + 0x94) = unaff_r4;
          }
        }
      }
      iVar4 = *(int *)(param_1 + 0xfc);
      if ((iVar4 == 0) || (unaff_r4 = *(int *)(iVar4 + 0x58), unaff_r4 != iVar5)) {
        if (!bVar9) {
          iVar8 = iVar8 + 1;
        }
      }
      else {
        *(int *)(iVar4 + 0x58) = iVar5 - iVar8;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 <= iVar7);
  }
  return;
}



void fn_006a1868(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  fn_0014481c(DAT_008977e8);
  iVar1 = fn_00261f54();
  if (0 < iVar1) {
    do {
      uVar2 = fn_0014481c(DAT_008977e8);
      piVar3 = (int *)fn_00263780(uVar2,iVar4);
      iVar1 = (**(code **)(*piVar3 + 0x58))(piVar3);
      if (iVar1 == 0xe) {
        iVar1 = fn_0026005c(piVar3,param_1);
        if ((iVar1 == 0) && (iVar1 = fn_006c0c30(piVar3,param_1), iVar1 != 0)) {
          fn_006c0c98(piVar3);
        }
      }
      else {
        iVar1 = (**(code **)(*piVar3 + 0x58))(piVar3);
        if (((iVar1 == 0xd) && (iVar1 = fn_0026005c(piVar3,param_1), iVar1 == 0)) &&
           (iVar1 = fn_006be18c(piVar3,param_1), iVar1 != 0)) {
          fn_006be1f4(piVar3);
        }
      }
      iVar4 = iVar4 + 1;
      fn_0014481c(DAT_008977e8);
      iVar1 = fn_00261f54();
    } while (iVar4 < iVar1);
  }
  return;
}



int fn_006a16b0(int param_1,undefined2 param_2,uint param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 in_s0;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_005e846c();
  }
  piVar5 = *(int **)(param_1 + 0x5c);
  if (piVar5 != piVar2) {
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 4))(piVar5);
    }
    *(int **)(param_1 + 0x5c) = piVar2;
  }
  iVar1 = fn_0068eb30(DAT_008977e8);
  if (((int)param_3 < 0) || ((uint)((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x34) <= param_3))
  {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(iVar1 + 4) + param_3 * 0x34;
  }
  iVar1 = fn_0069ee38(*(undefined4 *)(param_1 + 0x5c),iVar1,0);
  *(undefined1 *)(param_1 + 0x114) = 1;
  *(undefined2 *)(param_1 + 0x13c) = param_2;
  if (iVar1 != 0) {
    if (param_4 != 0xffffffff) {
      iVar3 = fn_0068eb30(DAT_008977e8);
      if (((int)param_4 < 0) ||
         ((uint)((*(int *)(iVar3 + 8) - *(int *)(iVar3 + 4)) / 0x34) <= param_4)) {
        iVar3 = 0;
      }
      else {
        iVar3 = *(int *)(iVar3 + 4) + param_4 * 0x34;
      }
      fn_0069eb10(*(undefined4 *)(param_1 + 0x5c),iVar3,0);
    }
    fn_002cd59c((int)*(char *)(param_1 + 0x114));
    *(undefined4 *)(param_1 + 0x108) = in_s0;
    *(undefined4 *)(param_1 + 0x10c) = in_s0;
    *(undefined4 *)(param_1 + 0x110) = in_s0;
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
    iVar3 = fn_0068c694(DAT_008977e8);
    fn_001969a4(*(undefined4 *)(iVar3 + 0x24),uVar4);
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
    fn_0017fc28(uVar4,1);
    uVar4 = fn_0017fde4(*(undefined4 *)(param_1 + 0x5c));
    fn_002cd6b0(uVar4,(int)*(char *)(param_1 + 0x114));
  }
  fn_001cac80((int)*(char *)(param_1 + 0x114));
  *(undefined4 *)(param_1 + 0x48) = in_s0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = in_s0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  return iVar1;
}


