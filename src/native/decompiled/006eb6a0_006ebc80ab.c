#include "006eb6a0_006ebc80ab.h"



int fn_006eba70(int *param_1)

{
  return *param_1 + 0x28;
}



int fn_006eba5c(int param_1)

{
  if (*(int *)(param_1 + 0x18) == 0) {
    param_1 = 0;
  }
  else {
    param_1 = param_1 + 0x18;
  }
  return param_1;
}



void fn_006eb97c(int *param_1)

{
  uint uVar1;
  undefined4 local_8 [2];
  
  local_8[0] = 0;
  uVar1 = (uint)*(byte *)(*param_1 + 0x21);
  if (uVar1 != 0xff) {
    fn_00781854(*(undefined4 *)(*(int *)(*param_1 + 0xc) + uVar1 * 4),local_8);
  }
  return;
}



void fn_006eb8ec(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_20 [20];
  
  *param_1 = 0xffffffff;
  uVar2 = (uint)*(byte *)(*param_2 + 0x1d);
  if (uVar2 != 0xff) {
    uVar2 = fn_00781908(*(undefined4 *)(*(int *)(*param_2 + 0xc) + uVar2 * 4),local_20);
    if ((uVar2 & 0x10000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)param_1 = uVar1;
    }
    if ((uVar2 & 0x20000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
    }
    if ((uVar2 & 0x40000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
    }
    if ((uVar2 & 0x80000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 3) = uVar1;
    }
  }
  return;
}



void fn_006eb85c(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_20 [20];
  
  *param_1 = 0xffffffff;
  uVar2 = (uint)*(byte *)(*param_2 + 0x1c);
  if (uVar2 != 0xff) {
    uVar2 = fn_00781908(*(undefined4 *)(*(int *)(*param_2 + 0xc) + uVar2 * 4),local_20);
    if ((uVar2 & 0x10000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)param_1 = uVar1;
    }
    if ((uVar2 & 0x20000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 1) = uVar1;
    }
    if ((uVar2 & 0x40000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 2) = uVar1;
    }
    if ((uVar2 & 0x80000) != 0) {
      uVar1 = fn_00549818();
      *(undefined1 *)((int)param_1 + 3) = uVar1;
    }
  }
  return;
}


