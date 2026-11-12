#include "0027422c_0027583cb.h"



void fn_0027583c(int param_1,byte param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  
  iVar4 = 0;
  do {
    iVar3 = param_1 + iVar4 * 0x10;
    iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(iVar3 + 0x7c));
    *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) =
         *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe | param_2;
    if (*(int *)(iVar3 + 0x84) != -1) {
      iVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0xc));
      uVar2 = fn_00176970();
      uVar2 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      *(undefined4 *)(iVar1 + 0x10) = uVar2;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 3);
  return;
}



void fn_00275800(undefined4 param_1,undefined4 param_2)

{
  fn_00271e64(param_1,(char *)&DAT_0027582c,param_2);
  fn_00271e64(param_1,(char *)&DAT_00275834,param_2);
  return;
}



void fn_002757a0(int param_1,int param_2)

{
  fn_00271e64(param_1,(char *)&DAT_002757ec,param_2);
  if (param_2 != 0) {
    fn_00273898(param_1);
    return;
  }
  if (*(int *)(param_1 + 0x4c) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  }
  return;
}



void fn_00275604(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  fn_00271e64(param_1,(char *)&DAT_00275730,1);
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 != '\x06' && cVar1 != '\a') {
    if (cVar1 == '\n') {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
      uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_00892124,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined1 *)(param_1 + 8) = 7;
    }
    else {
      if (*(int *)(param_1 + 0x18) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0xc));
      }
      uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
                           DAT_00892120,*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x18) = uVar2;
      *(undefined1 *)(param_1 + 8) = 6;
    }
  }
  if (*(char *)(param_1 + 0x48) == '\0') {
    fn_00271e64(param_1,(char *)&DAT_00275744,1);
    fn_00271e64(param_1,(char *)&DAT_00275750,0);
  }
  else if (*(char *)(param_1 + 0x48) == '\x01') {
    fn_00271e64(param_1,(char *)&DAT_00275750,1);
    fn_00271e64(param_1,(char *)&DAT_00275744,0);
  }
  fn_00271e64(param_1,(char *)&DAT_00276148,1);
  iVar3 = fn_00154ac8(0x39);
  if (iVar3 == 0) {
    return;
  }
  fn_00271e64(param_1,(char *)&DAT_002755c0,1);
  return;
}



void fn_00274f5c(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = fn_001088e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x18));
  if (0x416fffff < *(int *)(iVar1 + 0x10)) {
    fn_00271e64(param_1,(char *)&DAT_0027506c,0);
  }
  if (*(int *)(iVar1 + 0x10) < 0x41f00000) {
    fn_00154a6c(iVar1);
    return;
  }
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 4) + 0x7c))();
  iVar1 = (**(code **)(*piVar2 + 0x20))();
  if (iVar1 != 0) {
    iVar1 = fn_006f75ac(DAT_008977e0);
    iVar3 = fn_001759d0(*(undefined4 *)(iVar1 + 8));
    if (iVar3 == 0) {
      fn_0038ff40(iVar1,0,0,0);
      uVar4 = fn_0025f988(DAT_00897800,(char *)&DAT_00275084);
      fn_0038fee8(iVar1,uVar4);
      return;
    }
    iVar3 = fn_006b5398(iVar1);
    if (iVar3 == 0) {
      return;
    }
    fn_0016b40c(iVar1);
  }
  fn_0026fd8c(param_1,0);
  return;
}



void fn_00274e4c(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 unaff_r4;
  
  if (param_2 != 0) {
    unaff_r4 = 0xff;
  }
  if (param_2 == 0) {
    unaff_r4 = 0;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_00274f2c,1);
  *(undefined1 *)(iVar1 + 0x45) = unaff_r4;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_00274f34,1);
  *(undefined1 *)(iVar1 + 0x45) = unaff_r4;
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_00274f3c,1);
  *(undefined1 *)(iVar1 + 0x45) = unaff_r4;
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x98))();
  if ((uVar2 & param_2) == 0) {
    unaff_r4 = 0;
  }
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x14));
  iVar1 = (**(code **)(**(int **)(iVar1 + 0x10) + 0x2c))(*(int **)(iVar1 + 0x10),(char *)&DAT_00274f4c,1);
  *(undefined1 *)(iVar1 + 0x45) = unaff_r4;
  return;
}


