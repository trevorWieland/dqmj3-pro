#include "006b130c_006b1c64a.h"



bool fn_006b1428(void)

{
  int iVar1;
  
  iVar1 = fn_002aad7c();
  return 2 < iVar1;
}



bool fn_006b13fc(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x16d) == '\0') {
    iVar1 = fn_0013ad98((int)*(short *)(*(int *)(param_1 + 0x19c) + 2));
    return iVar1 != 0;
  }
  return false;
}



undefined4 fn_006b1384(int *param_1)

{
  int iVar1;
  uint uVar2;
  
  if (param_1[0x71] == 0xf) {
    return 0;
  }
  uVar2 = param_1[2];
  iVar1 = (**(code **)(*param_1 + 0x70))(param_1,uVar2);
  if (((uVar2 < 2) || (uVar2 != 2)) || (iVar1 != 7 && iVar1 != 8)) {
    return 1;
  }
  return 0;
}



undefined4 fn_006b130c(int *param_1)

{
  int iVar1;
  
  if ((param_1[2] == 1) &&
     (((iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 7 ||
       (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 10)) ||
      (iVar1 = (**(code **)(*param_1 + 0x70))(param_1,1), iVar1 == 5)))) {
    return 1;
  }
  return 0;
}


