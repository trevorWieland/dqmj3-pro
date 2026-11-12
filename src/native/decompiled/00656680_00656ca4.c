#include "00656680_00656ca4.h"



void fn_00656ca4(int param_1)

{
  fn_001707b4(param_1 + 0x10);
  return;
}



void fn_00656bb8(int param_1)

{
  fn_00170704(param_1 + 0x10);
  return;
}



void fn_00656aec(undefined4 *param_1,int param_2,int param_3)

{
  if ((0 < param_2) && (param_3 != 0)) {
    *param_1 = 0;
    param_1[1] = param_2;
    param_1[2] = param_3;
  }
  return;
}



void fn_00656a88(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  if (param_2 < 0) {
    return;
  }
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar4 = iVar2 + 1;
  bVar6 = SBORROW4(iVar3,iVar4);
  iVar1 = iVar3 - iVar4;
  bVar5 = iVar3 == iVar4;
  if (iVar4 <= iVar3) {
    bVar6 = SBORROW4(iVar2,param_2);
    iVar1 = iVar2 - param_2;
    bVar5 = iVar2 == param_2;
  }
  if (iVar1 < 0 == bVar6) {
    if (!bVar5 && iVar1 < 0 == bVar6) {
      fn_0016986c(param_1[2] + (param_2 + 1) * 4,param_1[2] + param_2 * 4,(iVar2 - param_2) * 4);
    }
    *(undefined4 *)(param_1[2] + param_2 * 4) = param_3;
    *param_1 = *param_1 + 1;
  }
  return;
}



void fn_00656a30(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (param_2 < 0 || param_3 < 0) {
    return;
  }
  iVar2 = *param_1;
  iVar1 = param_2 + param_3;
  if (iVar1 <= iVar2) {
    if (iVar1 < iVar2) {
      fn_0016986c(param_1[2] + param_2 * 4,param_1[2] + iVar1 * 4,(iVar2 - iVar1) * 4);
    }
    *param_1 = *param_1 - param_3;
  }
  return;
}



void fn_00656968(int *param_1,code *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = param_1[2];
  if (1 < *param_1) {
    iVar6 = 0;
    iVar1 = iVar6;
    iVar3 = *param_1 + -1;
    iVar7 = iVar6;
    do {
      for (; iVar8 = iVar1, iVar6 < iVar3; iVar6 = iVar6 + 1) {
        iVar5 = iVar4 + iVar6 * 4;
        iVar1 = (*param_2)(*(undefined4 *)(iVar4 + iVar6 * 4),*(undefined4 *)(iVar5 + 4));
        if (0 < iVar1) {
          uVar2 = *(undefined4 *)(iVar5 + 4);
          *(undefined4 *)(iVar5 + 4) = *(undefined4 *)(iVar4 + iVar6 * 4);
          *(undefined4 *)(iVar4 + iVar6 * 4) = uVar2;
          iVar8 = iVar6;
        }
        iVar1 = iVar8;
      }
      iVar1 = iVar8;
      iVar6 = iVar8;
      if (iVar7 == iVar8) {
        return;
      }
      for (; iVar7 < iVar1; iVar1 = iVar1 + -1) {
        iVar5 = iVar4 + iVar1 * 4;
        iVar3 = (*param_2)(*(undefined4 *)(iVar4 + iVar1 * 4),*(undefined4 *)(iVar5 + -4));
        if (iVar3 < 0) {
          uVar2 = *(undefined4 *)(iVar5 + -4);
          *(undefined4 *)(iVar5 + -4) = *(undefined4 *)(iVar4 + iVar1 * 4);
          *(undefined4 *)(iVar4 + iVar1 * 4) = uVar2;
          iVar6 = iVar1;
        }
      }
      iVar1 = iVar6;
      iVar3 = iVar8;
      iVar7 = iVar6;
    } while (iVar6 != iVar8);
  }
  return;
}



void fn_006568fc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  if (0 < param_2) {
    uVar1 = param_2 * 4;
    iVar2 = fn_00656e58(uVar1,param_3,param_4);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          puVar4 = (undefined1 *)(iVar2 + uVar3);
          uVar3 = uVar3 + 1;
          if (puVar4 != (undefined1 *)0x0) {
            *puVar4 = 0;
          }
        } while (uVar3 < uVar1);
      }
    }
    if ((0 < param_2) && (iVar2 != 0)) {
      param_1[2] = iVar2;
      *param_1 = 0;
      param_1[1] = param_2;
    }
  }
  return;
}



void fn_006568c4(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[2] = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



int fn_00656870(int *param_1)

{
  int iVar1;
  
  fn_00158768(param_1 + 1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *param_1 = 0;
  }
  fn_00158768();
  iVar1 = fn_001587a4(param_1 + 1);
  return iVar1 + -4;
}



void fn_0065683c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 0;
  param_1[4] = 0;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0xffffffff;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  return;
}



void fn_006567d4(int *param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  
  if ((int)param_2 < 1) {
    return;
  }
  iVar1 = fn_00656e14(param_2 << 2,param_3);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        puVar3 = (undefined4 *)(iVar1 + uVar2 * 4);
        uVar2 = uVar2 + 1;
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = 0;
        }
      } while (uVar2 < param_2);
    }
  }
  *param_1 = iVar1;
  fn_00158514(param_1 + 1,iVar1,param_2);
  return;
}



void fn_00656774(int *param_1)

{
  int iVar1;
  
  fn_00158768(param_1 + 1);
  iVar1 = *param_1;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    *param_1 = 0;
  }
  return;
}



void fn_00656b7c(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)fn_006f5438(DAT_008c06d0,param_1);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00656bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x1c))(piVar1,param_1);
  return;
}



undefined4 fn_00656b0c(int param_1)

{
  if ((*(uint *)(param_1 + -4) & 1) == 0) {
    param_1 = param_1 + -0x10;
  }
  else {
    param_1 = *(uint *)(param_1 + -4) - 1;
  }
  return *(undefined4 *)(param_1 + 8);
}



uint fn_006566c4(uint param_1,int param_2)

{
  uint uVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0xffffffff;
    }
    param_2 = param_2 + -1;
    if (param_2 < 1) break;
    param_1 = param_1 & param_1 - 1;
  }
  uVar1 = (param_1 & -param_1) - 1;
  uVar1 = uVar1 - (uVar1 >> 1 & 0x55555555);
  uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}



uint fn_00656680(uint param_1)

{
  uint uVar1;
  
  param_1 = param_1 - (param_1 >> 1 & 0x55555555);
  uVar1 = (param_1 >> 2 & 0x33333333) + (param_1 & 0x33333333);
  uVar1 = uVar1 + (uVar1 >> 4) & 0xf0f0f0f;
  uVar1 = uVar1 + (uVar1 >> 8);
  return uVar1 + (uVar1 >> 0x10) & 0x3f;
}


