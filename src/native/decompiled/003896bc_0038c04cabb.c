#include "003896bc_0038c04cabb.h"



void fn_0038b9a4(void)

{
  int iVar1;
  
  iVar1 = fn_001296e8(DAT_00898840);
  if (iVar1 == 0) {
    return;
  }
  fn_0066e31c(DAT_00898840);
  return;
}



void fn_0038b610(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0082a8ec;
  if (param_1[0x25] != 0) {
    fn_003cbff8();
    fn_002feef8();
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 4))();
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 4))();
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 4))();
  }
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 4))();
  }
  if ((int *)param_1[0x20] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x20] + 4))();
  }
  if ((int *)param_1[0x1f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x1f] + 4))();
  }
  fn_0068ad5c(param_1);
  return;
}


