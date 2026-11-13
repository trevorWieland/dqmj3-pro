#include "004228d0_004231f0aa.h"



void fn_00422d2c(int param_1,undefined1 *param_2,undefined1 *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_0026ad4c(*(undefined4 *)(param_1 + 100),*param_2,*param_3,param_4,param_5,1);
  *(undefined1 *)(param_1 + 0x68) = *param_2;
  return;
}



void fn_00422cb0(int param_1,int *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    iVar1 = fn_0028eac8(param_2,0x31);
    if (iVar1 != 0) {
      (**(code **)(*param_2 + 0x30))(param_2,0x31,0);
      (**(code **)(*param_2 + 0x2c))(param_2,0x2f,0);
    }
    fn_0026a778(*(undefined4 *)(param_1 + 100),0);
    *(undefined1 *)(param_1 + 0x68) = 0;
  }
  return;
}



void fn_004228d0(int param_1,int *param_2,char *param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  uint uVar4;
  char *pcVar5;
  uint uVar6;
  undefined4 uVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x68) == *param_3) {
    return;
  }
  pcVar5 = param_3;
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = (int)*param_3;
  uVar6 = iVar2 - 0x10;
  if (7 < uVar6) {
    pcVar5 = (char *)(iVar2 + -0x18);
  }
  if (7 < uVar6 && &DAT_00000007 < pcVar5) {
    psVar3 = (short *)0x0;
  }
  else {
    psVar3 = (short *)(iVar1 + iVar2 * 0x418 + -0x4080);
  }
  if (*psVar3 < 1) {
    return;
  }
  uVar4 = (uint)*(byte *)(psVar3 + 0x20a);
  if (uVar4 != 0) {
    if (3 < uVar6) {
      uVar4 = iVar2 - 0x18;
    }
    if ((3 >= uVar6 || uVar4 < 4) || (iVar2 == 0x20 || iVar2 == 0x22)) {
      iVar1 = fn_0028eac8(param_2,0x2f);
      if (iVar1 != 0) {
        (**(code **)(*param_2 + 0x30))(param_2,0x2f,0);
        (**(code **)(*param_2 + 0x2c))(param_2,0x31,0);
        *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
             *(undefined4 *)(&DAT_007bb5c0 + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
      }
      iVar1 = fn_0028eac8(param_2,0x30);
      if (iVar1 != 0) {
        (**(code **)(*param_2 + 0x30))(param_2,0x30,0);
        (**(code **)(*param_2 + 0x2c))(param_2,0x31,0);
        *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
             *(undefined4 *)(&DAT_007bb5b0 + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
      }
      iVar1 = fn_00182988(DAT_008977e4);
      uVar7 = *(undefined4 *)(iVar1 + 0x3bc);
      iVar1 = fn_00182988(DAT_008977e4);
      fn_0026ad4c(*(undefined4 *)(param_1 + 100),*param_3,0,*(undefined4 *)(iVar1 + 0x3b8),uVar7,0)
      ;
      goto LAB_00422c84;
    }
  }
  iVar1 = fn_0028eac8(param_2,0x31);
  if (iVar1 != 0) {
    iVar1 = (int)*param_3;
    uVar6 = iVar1 - 0x10;
    bVar8 = 3 < uVar6;
    if (bVar8) {
      uVar6 = iVar1 - 0x18;
    }
    if ((bVar8 && 3 < uVar6) && (iVar1 != 0x20 && iVar1 != 0x22)) {
      (**(code **)(*param_2 + 0x30))(param_2,0x31,0);
      (**(code **)(*param_2 + 0x2c))(param_2,0x30,0);
      *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
           *(undefined4 *)(&DAT_007bb5d4 + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
    }
    iVar1 = (int)*param_3;
    uVar6 = iVar1 - 0x10;
    bVar8 = 3 < uVar6;
    if (bVar8) {
      uVar6 = iVar1 - 0x18;
    }
    if ((!bVar8 || uVar6 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      (**(code **)(*param_2 + 0x30))(param_2,0x31,0);
      (**(code **)(*param_2 + 0x2c))(param_2,0x2f,0);
      *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
           *(undefined4 *)(&DAT_007bb5ec + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
    }
  }
  iVar1 = fn_0028eac8(param_2,0x2f);
  if (iVar1 != 0) {
    iVar1 = (int)*param_3;
    uVar6 = iVar1 - 0x10;
    bVar8 = 3 < uVar6;
    if (bVar8) {
      uVar6 = iVar1 - 0x18;
    }
    if ((bVar8 && 3 < uVar6) && (iVar1 != 0x20 && iVar1 != 0x22)) {
      (**(code **)(*param_2 + 0x30))(param_2,0x2f,0);
      (**(code **)(*param_2 + 0x2c))(param_2,0x30,0);
      *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
           *(undefined4 *)(&DAT_007bb604 + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
    }
  }
  iVar1 = fn_0028eac8(param_2,0x30);
  if (iVar1 != 0) {
    iVar1 = (int)*param_3;
    uVar6 = iVar1 - 0x10;
    bVar8 = 3 < uVar6;
    if (bVar8) {
      uVar6 = iVar1 - 0x18;
    }
    if ((!bVar8 || uVar6 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
      (**(code **)(*param_2 + 0x30))(param_2,0x30,0);
      (**(code **)(*param_2 + 0x2c))(param_2,0x2f,0);
      *(undefined4 *)(*(int *)(param_1 + 100) + 0xc) =
           *(undefined4 *)(&DAT_007bb5b8 + *(int *)(*(int *)(param_1 + 100) + 0x10) * 4);
    }
  }
  fn_0026a778(*(undefined4 *)(param_1 + 100),*param_3);
LAB_00422c84:
  *(char *)(param_1 + 0x68) = *param_3;
  return;
}


