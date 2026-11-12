#include "00148b70_0015b140a.h"



void fn_00152258(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_00172d60();
  *puVar1 = &DAT_00857fe8;
  iVar2 = fn_00162694(puVar1 + 0x46);
  iVar2 = fn_00162618(iVar2 + 0x21fc);
  *(undefined4 *)(iVar2 + 0xd30) = param_2;
  iVar2 = fn_00101a1c(iVar2 + 0xd34,&LAB_00167720,0x10,4);
  *(undefined1 *)(iVar2 + 0x246) = 0;
  *(undefined4 *)(iVar2 + 0x248) = 0;
  *(undefined4 *)(iVar2 + 0x24c) = 0;
  return;
}



void fn_00151954(int param_1,int param_2)

{
  fn_0017d90c(param_1 + 0x10,param_2 + 4);
  *(undefined4 *)(param_2 + 0xc) = 0;
  return;
}



void fn_0014fbd8(void)

{
  fn_0015f1b0(&DAT_008ef56c);
  return;
}



void fn_0014f81c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  
  uVar1 = fn_001711b4();
  fn_0015f1e0(uVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



void fn_0014f24c(undefined4 *param_1,int param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_008558c4;
  piVar1 = (int *)fn_001676b0(param_1 + 3,param_3);
  uVar2 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = uVar2 + 1;
      *(undefined1 *)(*piVar1 + uVar2) = *(undefined1 *)(param_2 + uVar2);
      uVar2 = uVar3;
    } while (uVar3 < param_3);
  }
  return;
}



void fn_0014ee88(undefined4 *param_1)

{
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0;
  param_1[4] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  param_1[3] = &DAT_008558c4;
  param_1[7] = 0;
  *param_1 = &DAT_00852a84;
  param_1[8] = 0;
  param_1[9] = 6;
  param_1[10] = 0x40;
  return;
}



int fn_0014da74(uint *param_1,uint param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  uint unaff_r4;
  uint unaff_r5;
  bool bVar2;
  uint local_20;
  uint local_1c;
  
  if (param_5 != 0) {
    if (param_5 != 1) {
      if (param_5 == 2) {
        iVar1 = fn_0014d7c0(&local_20,*param_1 & 0xfffffffe);
        if (iVar1 < 0) {
          param_1[3] = 0;
          param_1[4] = 0;
          local_1c = unaff_r4;
          local_20 = unaff_r5;
        }
        else {
          param_1[4] = local_1c;
          param_1[3] = local_20;
        }
        if (-1 < iVar1) {
          bVar2 = CARRY4(param_3,local_20);
          param_3 = param_3 + local_20;
          param_4 = param_4 + local_1c + (uint)bVar2;
          param_2 = 0;
          goto LAB_0014db00;
        }
      }
      else {
        iVar1 = -0x1f1fb943;
      }
      return iVar1;
    }
    param_2 = param_1[2];
    bVar2 = CARRY4(param_3,param_1[1]);
    param_3 = param_3 + param_1[1];
    param_4 = param_2 + param_4 + (uint)bVar2;
  }
LAB_0014db00:
  iVar1 = fn_0015cfa4(param_1,param_2,param_3,param_4);
  return iVar1;
}



void fn_0014a674(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[6] = param_2;
  param_1[5] = param_3;
  *param_1 = &DAT_0081d370;
  return;
}



void fn_00148b70(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  
  iVar1 = fn_0012ea60(param_1,param_1 + 4,param_2);
  iVar3 = *(int *)(iVar1 + 0xc) + -1;
  *(int *)(iVar1 + 0xc) = iVar3;
  if ((0 < iVar3) || (fn_0017d90c(param_1 + 4,iVar1 + 0x10), iVar1 == 0)) {
    return;
  }
  fn_0012d73c(*(undefined4 *)(iVar1 + 8));
  if (*(undefined4 **)(iVar1 + 4) == &DAT_008f9cf4) goto LAB_00148c20;
  piVar2 = *(undefined4 **)(iVar1 + 4) + -3;
  iVar3 = *piVar2;
  if (iVar3 != -1) {
    if (piVar2 == &DAT_008f9ce8) goto LAB_00148c20;
    *piVar2 = iVar3 + -1;
    if (iVar3 != 0) goto LAB_00148c20;
  }
  fn_001008c4(*(int *)(iVar1 + 4) + -0xc,*(int *)(*(int *)(iVar1 + 4) + -8) + 8,0,param_4,unaff_r4)
  ;
LAB_00148c20:
  fn_002feef8(iVar1);
  return;
}


