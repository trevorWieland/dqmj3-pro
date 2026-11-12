#include "003a1d14_003a1fd4a.h"



void fn_003a1e98(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 8) == '\0') {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar2 = fn_0016561c(uVar3,(int)*(char *)(param_1 + 4));
    if (*(int *)(param_1 + 0x10) < iVar2) {
      do {
        iVar4 = fn_0015b414(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
        iVar5 = *(int *)(param_1 + 0x10) + 1;
        *(int *)(param_1 + 0x10) = iVar5;
      } while (iVar5 < iVar2);
      if (iVar4 != 0) {
        *(int *)(param_1 + 0xc) = iVar4;
        *(undefined1 *)(param_1 + 8) = 1;
        *(undefined1 *)(param_1 + 9) = 0;
        return;
      }
    }
    uVar1 = 2;
  }
  else {
    if (*(char *)(param_1 + 8) != '\x01') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar2;
    if (0 < iVar2) {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 9);
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}



void fn_003a1e14(int param_1)

{
  fn_00311598();
  if (*(char *)(param_1 + 0x24) == '\0') {
    fn_001ec30c(*(undefined4 *)(DAT_008977e0 + 0x30),*(undefined4 *)(param_1 + 0x20),param_1 + 4);
    return;
  }
  fn_001f52f0();
  return;
}



void fn_003a1d14(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  int iVar2;
  uint local_18;
  
  if (*(char *)(param_1 + 0x46) == '\0') {
    *(undefined1 *)(param_1 + 0x46) = 1;
  }
  else {
    if (*(char *)(param_1 + 0x44) == '\0') {
      local_18 = param_4;
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    if (*(char *)(param_1 + 0x45) == '\0') {
      local_18 = (uint)*(byte *)(*(int *)(param_1 + 4) + 0x35);
      uVar1 = fn_0017484c(DAT_008977e4);
      iVar2 = fn_006be4c8(uVar1,&local_18);
      if (*(char *)(iVar2 + 0x60) != '\0') {
        fn_00182994(DAT_008977e4);
        fn_00149534();
        fn_00182994(DAT_008977e4);
        fn_00149390();
        *(undefined1 *)(param_1 + 0x45) = 1;
      }
    }
  }
  return;
}


