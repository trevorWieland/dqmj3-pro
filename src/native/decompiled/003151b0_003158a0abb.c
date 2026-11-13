#include "003151b0_003158a0abb.h"



void fn_00315424(void)

{
  fn_00143b48(DAT_008923b4);
  fn_00143b48(DAT_008923b8);
  DAT_008923b4 = 0;
  DAT_008923b8 = 0;
  return;
}



bool fn_003153ac(undefined2 param_1,undefined4 param_2,uint param_3)

{
  undefined2 local_34 [2];
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint local_24;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint local_14;
  undefined4 local_10 [2];
  
  local_34[0] = param_1;
  local_10[0] = param_2;
  fn_001628b0(&local_30,local_34,2,local_10,4);
  return (local_30 ^ uStack_2c ^ uStack_28 ^ local_24 ^ local_20 ^ uStack_1c ^ uStack_18 ^ local_14)
         == param_3;
}


