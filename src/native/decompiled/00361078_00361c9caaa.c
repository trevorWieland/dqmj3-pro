#include "00361078_00361c9caaa.h"



undefined4 fn_00361078(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = fn_002fb61c();
  if (iVar1 == 0) {
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    iVar1 = fn_006f7a0c(DAT_008977e0);
    (**(code **)(**(int **)(iVar1 + 0x50) + 0x10))(*(int **)(iVar1 + 0x50),&local_20);
    fn_0035ee00(param_1,&local_20);
    fn_00789b34(&local_20);
  }
  iVar1 = fn_00341260(0xffffffff);
  if (iVar1 != 0) {
    fn_0035dbd0(param_1);
    return 1;
  }
  iVar1 = fn_006f7a20(DAT_008977e0);
  if (iVar1 == 0) {
    uVar3 = *(undefined4 *)(DAT_008977e0 + 0xa8);
    uVar2 = fn_006f7a0c();
    iVar1 = fn_006f6434(uVar2,uVar3);
    if (iVar1 != 2) {
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      iVar1 = fn_006f7a0c(DAT_008977e0);
      (**(code **)(**(int **)(iVar1 + 0x50) + 0x20))(*(int **)(iVar1 + 0x50),&local_20);
      fn_0035ee00(param_1,&local_20);
      fn_00789b34(&local_20);
      fn_0035fd50(param_1);
      fn_0035f234(param_1);
      fn_003617b8(param_1);
      fn_00361280(param_1);
    }
    if (**(int **)(DAT_008977e0 + 0x40) == 0) {
      fn_0035f064(param_1);
      fn_0035e60c(param_1);
      fn_0035dbd0(param_1);
    }
    else {
      iVar1 = fn_006f6fc4();
      if (iVar1 != 0) {
        fn_003603b8(param_1);
        iVar1 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
        fn_00360bac(param_1);
        if (*(char *)(iVar1 + 0x20) != '\x01') {
          iVar1 = fn_006c89fc(iVar1);
          if (iVar1 == 2) {
            fn_003615e0(param_1);
          }
          else if (iVar1 == 5) {
            fn_003613ec(param_1);
          }
          else if (iVar1 == 6) {
            fn_00361a44(param_1);
          }
        }
      }
    }
  }
  return 1;
}


