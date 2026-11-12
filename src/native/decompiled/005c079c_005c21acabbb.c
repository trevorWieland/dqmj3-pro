#include "005c079c_005c21acabbb.h"



int fn_005c1ab0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00660e2c();
  if ((iVar1 != 6 && iVar1 != 7) && (iVar1 != 8 && iVar1 != 9)) {
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_2);
    return iVar1;
  }
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (0 < iVar1) {
    do {
      iVar1 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar3);
      iVar3 = iVar3 + 1;
      if (*(short *)(iVar1 + 4) == param_2) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    } while (iVar3 < iVar1);
  }
  return iVar2;
}



void fn_005c1a80(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039571c();
  puVar1[3] = 0;
  *puVar1 = &DAT_0084a1f0;
  return;
}


