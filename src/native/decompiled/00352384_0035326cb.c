#include "00352384_0035326cb.h"



void fn_0035326c(int param_1,char param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  param_1 = param_1 + (char)(param_2 + -0x10) * 4;
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 0;
  }
  else if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 2;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 0x9b) = uVar2;
  return;
}



int fn_00353250(int param_1,char *param_2)

{
  return (int)*(char *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x55);
}



void fn_003531e0(int param_1,char *param_2,undefined1 param_3)

{
  int iVar1;
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar1 = iVar1 + *param_2 * 0x418;
  if (*(short *)(iVar1 + -0x4080) < 1) {
    return;
  }
  *(undefined1 *)(iVar1 + -0x4026) = param_3;
  *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 4) + 0x59) = param_3;
  return;
}



void fn_0035305c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1e] != -1) {
    fn_001088e0(uVar2);
    iVar1 = fn_00154a6c();
    if ((iVar1 != 0) && (param_1[0x1e] == param_1[0x1f])) {
      iVar1 = fn_0010887c(uVar2,param_1[0x1c],
                           (&PTR_s_tournament_01_congratulations_bf_00892cdc)[param_1[0x21]],
                           param_1[0x1d]);
      param_1[0x20] = iVar1;
      param_1[0x1e] = iVar1;
    }
  }
  if (param_1[0x1b] == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if ((param_1[0x1b] == 1) && (param_1[0x1e] == param_1[0x20])) {
    param_1[0x1b] = 2;
    *(undefined1 *)(param_1[0x19] + 9) = 1;
  }
  return;
}



undefined4 fn_00352f00(int *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  bVar1 = *(byte *)(param_1[0x19] + 8);
  param_1[0x21] = (uint)bVar1;
  if (bVar1 != 0) {
    iVar2 = (**(code **)(*param_1 + 8))(param_1);
    uVar4 = *(undefined4 *)(iVar2 + 8);
    iVar3 = param_1[0x21] + -1;
    iVar2 = fn_001481c8(uVar4,*(undefined4 *)(&DAT_00892cbc + iVar3 * 4),&DAT_00353014,1,1);
    param_1[0x1c] = iVar2;
    iVar2 = fn_001480d0(uVar4,iVar2,*(undefined4 *)(&DAT_00892cc8 + iVar3 * 4),&DAT_0035301c,0,1,0)
    ;
    param_1[0x1d] = iVar2;
    iVar2 = fn_0010887c(uVar4,param_1[0x1c],*(undefined4 *)(&DAT_00892cd4 + iVar3 * 4),iVar2);
    param_1[0x1f] = iVar2;
    param_1[0x1e] = iVar2;
  }
  iVar2 = param_1[0x21];
  if (iVar2 == 1 || iVar2 == 2) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  if (iVar2 == 3) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  param_1[0x1b] = 1;
  return 1;
}



void fn_00352e7c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = *(undefined4 *)(iVar1 + 8);
  if (param_1[0x1f] != -1) {
    fn_00159f34(uVar2);
    param_1[0x1f] = -1;
  }
  if (param_1[0x20] != -1) {
    fn_00159f34(uVar2);
    param_1[0x20] = -1;
  }
  if (param_1[0x1d] != -1) {
    fn_0016a43c(uVar2);
    param_1[0x1d] = -1;
  }
  if (param_1[0x1c] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(uVar2);
  }
  return;
}


