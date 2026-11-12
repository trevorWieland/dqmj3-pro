#include "0042c080_0042cda0aba.h"



void fn_0042c234(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_0083ba94;
  fn_002e40d8(param_1);
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 0x18))();
    if ((int *)param_1[10] != (int *)0x0) {
      (**(code **)(*(int *)param_1[10] + 4))();
      param_1[10] = 0;
    }
  }
  fn_002e4388(param_1);
  fn_002feef8();
  return;
}


