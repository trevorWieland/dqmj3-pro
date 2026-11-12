#include "005055c4_0050d470bab.h"



void fn_0050989c(int *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  undefined1 auStack_78 [84];
  
  iVar1 = (**(code **)(*param_1 + 0x2c))(param_1);
  do {
    if (iVar1 != 0) {
      return;
    }
LAB_005098d0:
    do {
      if (param_1[0x38] == 0) {
        iVar1 = param_1[0x46];
        param_1[0x46] = iVar1 + 1;
        param_1[0x47] = 0;
        if (*(int *)(param_1[2] + 0xc) <= iVar1 + 1) {
          return;
        }
        iVar1 = fn_0050935c();
        if (*(char *)(iVar1 + 0x5e8) == '\0') goto LAB_005098d0;
        fn_00516cec(param_1 + 0x37,iVar1,param_1[0x47]);
      }
      else {
        iVar1 = fn_0050935c(param_1[2],param_1[0x46]);
        uVar2 = param_1[0x47] + (param_1[0x37] + 0x13U & 0xfffffffc) + 4;
        param_1[0x47] = uVar2;
        if (uVar2 < *(int *)(iVar1 + 0x5b8) - 0xcU) {
          fn_00516cec(param_1 + 0x37);
        }
        else {
          fn_00516cc8();
        }
      }
    } while ((param_1[0x38] == 0) ||
            (uVar2 = *(uint *)(param_1[0x38] + 0xc), (param_1[0x45] & uVar2) != param_1[0x44]));
    piVar3 = param_1 + 0x3a;
    if (0x3fefffff < DAT_008bf4cc - 0x100000U) goto LAB_00509a9c;
    iVar1 = fn_0050b144(DAT_008bf4cc,piVar3);
    if (iVar1 == 0) {
      (**(code **)*piVar3)(piVar3,*(code **)*piVar3,0x8000000,0);
LAB_00509a68:
      if (((*(byte *)param_1[0x38] & 4) != 0) ||
         (iVar1 = fn_006dba50(DAT_008c0680,(uVar2 & 0xff) << 8 | uVar2 >> 8 & 0xff), iVar1 == 0))
      goto LAB_00509a9c;
      goto LAB_005098d0;
    }
    if (0x3fefffff < DAT_008c06a0 - 0x100000U) {
      if (*(char *)(iVar1 + 0x69) != '\0') goto LAB_00509a9c;
      goto LAB_00509a68;
    }
    fn_00124e48(auStack_78);
    iVar1 = fn_006db908(DAT_008c06a0,iVar1,auStack_78);
    if (iVar1 < 0) {
      (**(code **)*piVar3)(piVar3,*(code **)*piVar3,0x8000000,0);
      fn_0051811c(auStack_78);
      goto LAB_00509a68;
    }
    fn_0051811c(auStack_78);
LAB_00509a9c:
    iVar1 = (**(code **)(*param_1 + 0x3c))(param_1,param_1 + 0x37);
  } while( true );
}



void fn_00508048(int param_1)

{
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}


