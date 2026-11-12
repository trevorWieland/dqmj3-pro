#include "0029a6e0_0029ab90.h"



void fn_0029ab90(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  do {
    iVar5 = param_1 + iVar4 * 4;
    if (*(int *)(iVar5 + 0x20) != 0) {
      uVar1 = fn_00182994(DAT_008977e4);
      uVar2 = fn_001659c0(uVar1,param_2,param_3);
      iVar5 = fn_0029a8a8(param_1,*(undefined4 *)(iVar5 + 0x20),uVar2 & 0xff);
      if (iVar5 != -1) {
        iVar3 = fn_00174828(DAT_008977e4);
        switch(*(undefined1 *)(iVar3 + uVar2 * 0x418 + -0x4027)) {
        case 0:
          break;
        case 1:
          break;
        case 3:
          break;
        case 4:
        }
        uVar1 = fn_006a7b84(DAT_008977e4);
        fn_0023dd30(uVar1,iVar5);
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 2);
  return;
}



void fn_0029aa90(void)

{
  undefined4 in_r3;
  uint in_fpscr;
  undefined4 in_stack_00000000;
  
  VectorSignedToFloat(in_r3,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(in_stack_00000000,(byte)(in_fpscr >> 0x16) & 3);
  fn_00182994(DAT_008977e4);
  fn_00149390();
  VectorSignedToFloat(in_stack_00000000,(byte)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(in_r3,(byte)(in_fpscr >> 0x16) & 3);
  fn_00182994(DAT_008977e4);
  fn_00149534();
  return;
}



void fn_0029a9e4(undefined4 param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  switch(param_4) {
  default:
    return;
  case 1:
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00155194(uVar1,param_2,param_3);
    return;
  case 2:
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00155240(uVar1,param_2,param_3);
    return;
  case 3:
    uVar1 = fn_00182994(DAT_008977e4);
    fn_0016427c(uVar1,param_2,param_3);
    return;
  case 4:
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00154d74(uVar1,param_2,param_3);
    return;
  }
}



int fn_0029a8a8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int local_30 [2];
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  local_30[0] = 0;
  iStack_28 = param_1;
  uStack_24 = param_2;
  uStack_20 = param_3;
  uVar1 = fn_006a7b84(DAT_008977e4);
  iVar2 = fn_00175978(uVar1,param_2);
  if (iVar2 != -1) {
    if (local_30[0] == -1) {
      return -1;
    }
    uVar1 = fn_0017484c(DAT_008977e4);
    iVar3 = fn_00165bb4(uVar1,&uStack_20);
    if (iVar3 != 0) {
      if (local_30[0] == -1) {
        return -1;
      }
      iVar3 = fn_0017fde4(*(undefined4 *)(iVar3 + 4));
      if (iVar3 == 0) {
        local_30[0] = -1;
      }
      uVar1 = fn_006a7b84(DAT_008977e4);
      uVar4 = fn_00175944(uVar1,param_2);
      if ((uVar4 & 0x10) == 0) {
        uVar1 = fn_006a7b84(DAT_008977e4);
        local_30[0] = fn_0016aa48(uVar1,param_2,iVar3,iVar2);
      }
      else {
        uVar1 = fn_006a7b84(DAT_008977e4);
        local_30[0] = fn_0016a9b0(uVar1,param_2,iVar3,iVar2);
      }
      if (local_30[0] == -1) {
        return -1;
      }
      uVar1 = fn_006a7b84(DAT_008977e4);
      fn_0023e554(uVar1,local_30[0]);
      piVar5 = *(int **)(param_1 + 0x38);
      if (piVar5 == *(int **)(param_1 + 0x3c)) {
        fn_0079ce44(param_1 + 0x34,piVar5,local_30);
        return local_30[0];
      }
      *(int **)(param_1 + 0x38) = piVar5 + 1;
      if (piVar5 == (int *)0x0) {
        return local_30[0];
      }
      *piVar5 = local_30[0];
      return local_30[0];
    }
  }
  return -1;
}



void fn_0029a6e0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int local_30 [6];
  
  iVar5 = 0;
  do {
    iVar4 = *(int *)(param_1 + iVar5 * 4 + 0x28);
    if (iVar4 != 0) {
      if (*(char *)(param_1 + 0x1c) == '\0') {
        local_30[0] = 0;
        uVar2 = fn_006a7b84(DAT_008977e4);
        local_30[0] = fn_0023ddec(uVar2,iVar4);
        if (local_30[0] != -1) {
          uVar2 = fn_006a7b84(DAT_008977e4);
          fn_0023e554(uVar2,local_30[0]);
          cVar1 = *(char *)(param_1 + 2);
          if ((cVar1 == '\x04' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\a')) {
            uVar2 = fn_006a7b84(DAT_008977e4);
            fn_0023dd30(uVar2,local_30[0]);
          }
          piVar3 = *(int **)(param_1 + 0x38);
          if (piVar3 == *(int **)(param_1 + 0x3c)) {
            fn_0079ce44(param_1 + 0x34,piVar3,local_30);
          }
          else {
            *(int **)(param_1 + 0x38) = piVar3 + 1;
            if (piVar3 != (int *)0x0) {
              *piVar3 = local_30[0];
            }
          }
        }
      }
      else {
        local_30[0] = 0;
        uVar2 = fn_006a7b84(DAT_008977e4);
        local_30[0] = fn_0023ddec(uVar2,iVar4);
        if (local_30[0] != -1) {
          uVar2 = fn_006a7b84(DAT_008977e4);
          fn_0023e554(uVar2,local_30[0]);
          cVar1 = *(char *)(param_1 + 2);
          if ((cVar1 == '\x04' || cVar1 == '\x05') || (cVar1 == '\x06' || cVar1 == '\a')) {
            uVar2 = fn_006a7b84(DAT_008977e4);
            fn_0023dd30(uVar2,local_30[0]);
          }
          piVar3 = *(int **)(param_1 + 0x38);
          if (piVar3 == *(int **)(param_1 + 0x3c)) {
            fn_0079ce44(param_1 + 0x34,piVar3,local_30);
          }
          else {
            *(int **)(param_1 + 0x38) = piVar3 + 1;
            if (piVar3 != (int *)0x0) {
              *piVar3 = local_30[0];
            }
          }
        }
      }
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  return;
}


