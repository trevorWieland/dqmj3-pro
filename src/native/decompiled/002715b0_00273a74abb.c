#include "002715b0_00273a74abb.h"



undefined4 fn_00271ef0(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 8) == '\a' || *(char *)(param_1 + 8) == '\x06') {
    if (*(int *)(param_1 + 0x18) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0xc));
    }
    uVar1 = fn_0010887c(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),DAT_008921e0
                         ,*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x18) = uVar1;
    *(undefined1 *)(param_1 + 8) = 8;
    fn_00271e64(param_1,(char *)&DAT_00271f8c,1);
    fn_00271e64(param_1,(char *)&DAT_00271f9c,0);
    fn_00271e64(param_1,(char *)&DAT_00276148,0);
    fn_00271e64(param_1,(char *)&DAT_002755c0,0);
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


