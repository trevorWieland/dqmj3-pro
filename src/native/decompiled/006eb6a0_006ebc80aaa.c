#include "006eb6a0_006ebc80aaa.h"



void fn_006eb730(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_20 [20];
  
  *param_1 = 0xffffffff;
  uVar2 = (uint)*(byte *)(*param_2 + 0x1b);
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



void fn_006eb6a0(undefined4 *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined1 local_20 [20];
  
  *param_1 = 0xffffffff;
  uVar2 = (uint)*(byte *)(*param_2 + 0x1a);
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


