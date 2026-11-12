#include "001465e8_006f9544bba.h"



undefined4 * fn_005523e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  *param_1 = &DAT_00857c64;
  if (param_1[0xe] != 0) {
    (**(code **)(*DAT_0089a918 + 0xc))();
    param_1[0xe] = 0;
  }
  iVar1 = param_1[5];
  if (iVar1 != 0) {
    fn_0054a928(iVar1);
    (**(code **)(*DAT_0089a918 + 0xc))(DAT_0089a918,iVar1);
  }
  puVar2 = (undefined4 *)param_1[4];
  if ((puVar2 != (undefined4 *)0x0) && ((*(byte *)(puVar2 + 0x11) & 8) == 0)) {
    (**(code **)*puVar2)(puVar2);
    (**(code **)(*DAT_0089a918 + 0xc))(DAT_0089a918,puVar2);
  }
  puVar2 = (undefined4 *)param_1[2];
  if ((undefined4 *)param_1[2] != param_1 + 2) {
    do {
      puVar3 = (undefined4 *)*puVar2;
      fn_00150c1c(param_1 + 1,puVar2);
      piVar4 = puVar2 + -1;
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
        (**(code **)(*DAT_0089a918 + 0xc))(DAT_0089a918,piVar4);
      }
      puVar2 = puVar3;
    } while (puVar3 != param_1 + 2);
  }
  return param_1;
}


