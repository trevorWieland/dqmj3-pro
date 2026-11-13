#include "002d8ba8_002d8e50.h"



void fn_002d8e50(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 5) - (iVar2 >> 0x1f);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 4) + iVar4 * 0x38);
      if (*(int *)(param_1 + 0x2c) == -1) {
        fn_002d9528(param_1);
      }
      if (((*(int *)(param_1 + 0x2c) == *piVar3) && (**(int **)(DAT_008977e0 + 0x40) == 0)) &&
         (*(int *)(DAT_008977e0 + 0xa8) == piVar3[6])) {
        piVar3[2] = 8;
        piVar3[3] = 0;
      }
      else {
        piVar3[2] = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



void fn_002d8e38(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  fn_002d9528();
  iVar4 = 0;
  uVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = (iVar2 >> 5) - (iVar2 >> 0x1f);
  if (0 < iVar2) {
    do {
      piVar3 = (int *)(*(int *)(param_1 + 4) + iVar4 * 0x38);
      if (*(int *)(param_1 + 0x2c) == -1) {
        fn_002d9528(param_1);
      }
      if (((*(int *)(param_1 + 0x2c) == *piVar3) && (**(int **)(DAT_008977e0 + 0x40) == 0)) &&
         (*(int *)(DAT_008977e0 + 0xa8) == piVar3[6])) {
        piVar3[2] = 8;
        piVar3[3] = 0;
      }
      else {
        piVar3[2] = 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  return;
}



void fn_002d8cb4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_30;
  undefined1 local_20;
  
  iVar1 = fn_002d84c0();
  fn_006f7a84(DAT_008977e0);
  iVar2 = fn_006aa6e0();
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x40;
  }
  iVar2 = fn_006f7a84(DAT_008977e0);
  *(int *)(iVar1 + 0x24) = (int)*(char *)(iVar2 + 0x208);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  fn_00696400(DAT_008977e0,*(undefined4 *)(DAT_008977e0 + 0xa8),param_2,param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0xc);
  local_48 = 0;
  if (iVar2 == 1) {
    if (*(int *)(iVar1 + 0x10) == 2) {
      local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8e18);
    }
    else {
      local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8e10);
    }
  }
  else if (iVar2 == 2) {
    local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8e20);
  }
  else if (iVar2 == 3) {
    local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8e28);
  }
  else if (iVar2 == 4) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8360);
    }
    else if (*(int *)(iVar1 + 0x10) == 1) {
      local_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_002d8368);
    }
  }
  iVar1 = DAT_008977e0;
  fn_0011a24c(&local_48);
  local_44 = 2;
  local_30 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) +
                                           *(int *)(iVar1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))();
  local_20 = fn_006c3a84(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + *(int *)(iVar1 + 0x70) * 4)
                           + 0x30));
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) +
                                           *(int *)(iVar1 + 0x70) * 4) + 0x30) + 0x28) + 0x2c))();
  fn_006949f8(iVar1,&local_48);
  *(undefined1 *)(iVar1 + 0x16e) = 1;
  *(code **)(iVar1 + 0x178) = fn_006960c0;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
  fn_00699014(iVar1,1);
  fn_003b682c(iVar1);
  fn_00365c70(*(undefined4 *)
                (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
  if ((*(code **)(iVar1 + 0x1d4) != (code *)0x0) &&
     ((**(code **)(iVar1 + 0x1d4))(), *(char *)(iVar1 + 0x1a6) != '\0')) {
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    *(undefined1 *)(iVar1 + 0x1a6) = 0;
  }
  return;
}



void fn_002d8cac(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uStack_48;
  undefined1 uStack_44;
  undefined4 uStack_30;
  undefined1 uStack_20;
  
  *(undefined4 *)(param_1 + 0x60) = param_3;
  iVar1 = fn_002d84c0();
  fn_006f7a84(DAT_008977e0);
  iVar2 = fn_006aa6e0();
  if (iVar2 != 0) {
    *(uint *)(iVar1 + 8) = *(uint *)(iVar1 + 8) | 0x40;
  }
  iVar2 = fn_006f7a84(DAT_008977e0);
  *(int *)(iVar1 + 0x24) = (int)*(char *)(iVar2 + 0x208);
  *(undefined4 *)(param_1 + 0x38) = param_2;
  fn_00696400(DAT_008977e0,*(undefined4 *)(DAT_008977e0 + 0xa8),param_2,param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0xc);
  uStack_48 = 0;
  if (iVar2 == 1) {
    if (*(int *)(iVar1 + 0x10) == 2) {
      uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O00_02");
    }
    else {
      uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O00_01");
    }
  }
  else if (iVar2 == 2) {
    uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O00_00");
  }
  else if (iVar2 == 3) {
    uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O00_03");
  }
  else if (iVar2 == 4) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O02_00");
    }
    else if (*(int *)(iVar1 + 0x10) == 1) {
      uStack_48 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),"O03_00");
    }
  }
  iVar1 = DAT_008977e0;
  fn_0011a24c(&uStack_48);
  uStack_44 = 2;
  uStack_30 = 0xffffffff;
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) +
                                           *(int *)(iVar1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))();
  uStack_20 = fn_006c3a84(*(undefined4 *)
                            (*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + *(int *)(iVar1 + 0x70) * 4
                                     ) + 0x30));
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) +
                                           *(int *)(iVar1 + 0x70) * 4) + 0x30) + 0x28) + 0x2c))();
  fn_006949f8(iVar1,&uStack_48);
  *(undefined1 *)(iVar1 + 0x16e) = 1;
  *(code **)(iVar1 + 0x178) = fn_006960c0;
  *(undefined4 *)(iVar1 + 0x17c) = 0;
  fn_00699014(iVar1,1);
  fn_003b682c(iVar1);
  fn_00365c70(*(undefined4 *)
                (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
  if ((*(code **)(iVar1 + 0x1d4) != (code *)0x0) &&
     ((**(code **)(iVar1 + 0x1d4))(), *(char *)(iVar1 + 0x1a6) != '\0')) {
    *(undefined4 *)(iVar1 + 0x1d4) = 0;
    *(undefined1 *)(iVar1 + 0x1a6) = 0;
  }
  return;
}



bool fn_002d8c64(undefined4 param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  if (param_4 == -1) {
    return false;
  }
  iVar1 = fn_002d84c0(param_1,param_4);
  if (iVar1 != 0) {
    uVar2 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3);
    *param_2 = uVar2;
    uVar2 = VectorSignedToFloat(*(undefined4 *)(iVar1 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    *param_3 = uVar2;
  }
  return iVar1 != 0;
}



undefined4 fn_002d8ba8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 2;
  if (((**(int **)(DAT_008977e0 + 0x40) == 0) || (iVar1 = fn_006f700c(), iVar1 == 0)) ||
     ((iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar1 != 0 &&
      (iVar1 = fn_006cc234(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4)), iVar1 != 1)))) {
    iVar1 = fn_006f75c0(DAT_008977e0,*(undefined4 *)(param_1 + 0x28));
    if (iVar1 == 0) {
      return 2;
    }
    iVar1 = fn_006f75c0(DAT_008977e0,*(undefined4 *)(param_1 + 0x28));
    iVar1 = *(int *)(iVar1 + 0xc);
    if (iVar1 == 1) {
      uVar2 = 1;
    }
    if (iVar1 == 1 || iVar1 == 2) {
      return uVar2;
    }
    if (iVar1 == 3) {
      return 3;
    }
    if (iVar1 != 4) {
      return uVar2;
    }
  }
  return 4;
}


