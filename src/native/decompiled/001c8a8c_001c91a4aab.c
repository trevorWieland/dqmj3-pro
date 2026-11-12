#include "001c8a8c_001c91a4aab.h"



undefined4 fn_001c8abc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_1c;
  undefined1 local_1b;
  
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00172cfc();
  }
  iVar1 = fn_00167500(param_1,*(undefined4 *)(param_1 + 8),param_1 + 8,param_2);
  local_1c = 0;
  local_1b = 1;
  iVar1 = fn_00172be0(piVar3,param_3,*(undefined4 *)(iVar1 + 0xc),0,*(undefined4 *)(param_1 + 0x74)
                       ,&local_1c);
  if (iVar1 != 0) {
    uVar2 = fn_0016a318(param_1,piVar3,param_3,0,0,0,1);
    return uVar2;
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0xffffffff;
}


