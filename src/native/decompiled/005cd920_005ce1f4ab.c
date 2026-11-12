#include "005cd920_005ce1f4ab.h"



undefined1 fn_005cdc08(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x28))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_005cdbb0(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x2c))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



undefined1 fn_005cdb58(int param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_2 + 0x46) != '\0') {
    uVar2 = (**(code **)(**(int **)(param_1 + 0xc) + 0x30))
                      (*(int **)(param_1 + 0xc),*(undefined4 *)(param_1 + 4),param_2,
                       *(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  if (((*(byte *)(param_2 + 0x44) & 2) == 0) || (uVar1 = 0, *(char *)(param_2 + 0x45) != '\0')) {
    uVar1 = 1;
  }
  return uVar1;
}



void fn_005cda00(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  
  iVar3 = DAT_008977e0;
  fVar4 = *(float *)(param_1 + 0xc);
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x11) == '\0') {
    iVar2 = fn_006f7a48(DAT_008977e0);
    cVar1 = *(char *)(iVar2 + 4);
    if (*(char *)(iVar3 + 0x170) != -1) {
      return;
    }
    fn_006f7a84(DAT_008977e0);
    iVar2 = fn_006aab48();
    if (iVar2 != 0) {
      return;
    }
    iVar3 = fn_006f7a30(iVar3);
    if (iVar3 != 0) {
      return;
    }
    if (cVar1 != '\0' && cVar1 != '\x03') {
      return;
    }
  }
  fVar4 = *(float *)(param_1 + 8) + fVar4;
  *(float *)(param_1 + 8) = fVar4;
  if (0x46a8bfff < (int)fVar4) {
    fVar4 = 0.0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  *(bool *)(param_1 + 4) = (undefined4 *)((int)fVar4 + -0x4607f000) <= &DAT_00708000;
  return;
}


