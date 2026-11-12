#include "0044c644_0044cdd0bba.h"



int fn_0044cc48(longlong *param_1,longlong *param_2)

{
  int iVar1;
  undefined4 local_28 [2];
  undefined1 auStack_20 [4];
  uint local_1c;
  uint local_18;
  uint local_14;
  
  *(undefined4 *)param_2 = 0;
  *(undefined4 *)((int)param_2 + 4) = 0;
  *(undefined4 *)param_1 = 0;
  *(undefined4 *)((int)param_1 + 4) = 0;
  local_28[0] = DAT_0089a670;
  iVar1 = fn_0044e554(local_28,auStack_20,2);
  if (-1 < iVar1) {
    *param_2 = (ulonglong)local_1c * (ulonglong)local_14;
    iVar1 = 0;
    *param_1 = (ulonglong)local_1c * (ulonglong)local_18;
  }
  return iVar1;
}



void fn_0044cc30(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined2 *)(param_1 + 2) = 0;
  *param_1 = param_2;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = param_3;
  *(undefined4 *)(param_1 + 8) = param_4;
  return;
}


