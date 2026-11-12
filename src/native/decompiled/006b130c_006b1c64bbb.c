#include "006b130c_006b1c64bbb.h"



undefined4 fn_006b1c64(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x138) != 7) {
    fn_006f7a48(DAT_008977e0);
    iVar1 = fn_006a7f0c();
    if (iVar1 != 0) {
      uVar2 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + 0x98));
      return uVar2;
    }
  }
  return 0;
}


