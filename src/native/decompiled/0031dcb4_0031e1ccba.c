#include "0031dcb4_0031e1ccba.h"



void fn_0031e0f4(int param_1,int param_2)

{
  int iVar1;
  
  fn_002cb37c();
  if (param_2 == 0) {
    fn_0031e148(*(undefined4 *)(param_1 + 0x1c),1);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  else {
    fn_0031e148(*(undefined4 *)(param_1 + 0x1c),0);
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  fn_0025e4dc(*(undefined4 *)(iVar1 + 0x34),param_2 == 0);
  return;
}



void fn_0031e04c(int param_1,int param_2,int param_3)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_20;
  float local_1c;
  float local_18;
  
  iVar1 = param_1 + param_2 * 4;
  fn_002b209c(*(undefined4 *)(iVar1 + 0x14),param_3);
  fn_0025e31c(*(undefined4 *)(param_1 + 0x30),param_3);
  if (param_3 != 0) {
    fn_0037d284(*(undefined4 *)(iVar1 + 0x14));
    fn_00688ff8();
    local_20 = in_s0;
    local_1c = in_s1;
    local_18 = in_s2;
    (**(code **)(**(int **)(param_1 + 8) + 0x2c))(*(int **)(param_1 + 8),(char *)&DAT_0031e0e4,1);
    fn_00688ff8();
    local_20 = local_20 - in_s0;
    local_1c = local_1c - in_s1;
    local_18 = local_18 - in_s2;
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x30),&local_20);
  }
  return;
}


