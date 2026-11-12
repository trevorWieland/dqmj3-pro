#include "0012be5c_0012bf98.h"



void fn_0012bf98(void)

{
  int iVar1;
  
  if (DAT_008e31c8 != (code *)0x0) {
    (*DAT_008e31c8)(0x401);
  }
  iVar1 = DAT_008e31c0 + 1;
  DAT_008e31c0 = iVar1 + ((int)((longlong)iVar1 * 0x40000001 >> 0x3d) - (iVar1 >> 0x1f)) *
                         -0x7fffffff;
  return;
}



void fn_0012bf54(void)

{
  int iVar1;
  
  if (DAT_008e31c4 != (code *)0x0) {
    (*DAT_008e31c4)(0x400);
  }
  iVar1 = DAT_008e31bc + 1;
  DAT_008e31bc = iVar1 + ((int)((longlong)iVar1 * 0x40000001 >> 0x3d) - (iVar1 >> 0x1f)) *
                         -0x7fffffff;
  return;
}



void fn_0012bef4(void)

{
  fn_0013ddf8();
  return;
}



void fn_0012beb4(int param_1,int param_2)

{
  if (DAT_008e3104 != 0) {
    if (param_1 == 0x200) {
      *(int *)(DAT_008e3104 + 0x2c) = param_2;
    }
    else if (param_1 == 0x20f) {
      *(bool *)(DAT_008e3104 + 0x3d) = param_2 != 0;
    }
  }
  return;
}



void fn_0012be5c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = (&DAT_008e3190)[DAT_008e318c];
  if (iVar2 != 0) {
    if (param_1 == 0x600) {
      uVar1 = *(undefined4 *)(iVar2 + 4);
    }
    else if (param_1 == 0x601) {
      uVar1 = *(undefined4 *)(iVar2 + 8);
    }
    else if (param_1 == 0x602) {
      uVar1 = *(undefined4 *)(iVar2 + 0xc);
    }
    else {
      if (param_1 != 0x603) {
        return;
      }
      uVar1 = *(undefined4 *)(iVar2 + 0x10);
    }
    *param_2 = uVar1;
  }
  return;
}


