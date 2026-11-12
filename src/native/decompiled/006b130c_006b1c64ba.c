#include "006b130c_006b1c64ba.h"



undefined4 fn_006b1564(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x138) != 7) {
    fn_006f7a48(DAT_008977e0);
    iVar1 = fn_006a7f0c();
    if (iVar1 != 0) {
      uVar2 = fn_006b1cac(param_1,*(undefined4 *)(param_1 + 0x94));
      return uVar2;
    }
  }
  return 0;
}



uint fn_006b1450(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  bVar1 = *(byte *)(*(int *)(param_1 + 0x110) + 0x44);
  uVar2 = bVar1 & 1;
  if ((bVar1 & 1) != 0) {
    uVar2 = param_1 + 0x100;
    bVar5 = *(char *)(param_1 + 0x1b0) == '\0';
    if (bVar5) {
      uVar2 = (uint)*(byte *)(param_1 + 0x1a0);
    }
    if (bVar5 && uVar2 == 0) {
      iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      uVar4 = (**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                        (*(int **)(iVar3 + 0x10),(char *)&DAT_006b14bc,1);
      uVar2 = fn_006b1cac(param_1,uVar4);
      return uVar2;
    }
    uVar2 = 0;
  }
  return uVar2;
}


