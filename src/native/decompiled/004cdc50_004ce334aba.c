#include "004cdc50_004ce334aba.h"



void fn_004cdd38(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  *param_1 = &DAT_00856220;
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[2] = 0;
  }
  iVar1 = param_1[3];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[3] = 0;
  }
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    fn_00656b0c(iVar1);
    fn_00656b7c(iVar1);
    param_1[4] = 0;
  }
  fn_004ecfd0(param_1);
  return;
}


