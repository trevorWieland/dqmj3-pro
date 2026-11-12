#include "005b8458_005b92d4bab.h"



void fn_005b8f0c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*(int *)(param_1 + 0x104) == 0) {
    fn_00689824(param_1,0);
    fn_00689818(param_1,0xef,0);
    return;
  }
  iVar1 = fn_006896fc(param_1,0xef);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)fn_001f74d8(param_1,0xef);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_0089704c) goto LAB_005b8f78;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005b8f78:
    if (*(char *)(puVar2 + 4) == '\0') {
      *(code **)(param_1 + 0xf8) = fn_005b8ff4;
      *(undefined4 *)(param_1 + 0xfc) = 0;
      return;
    }
    if (*(char *)(puVar2 + 4) == '\x01') {
      fn_002f6dbc();
      return;
    }
    fn_00689824(param_1,1);
    *(undefined **)(param_1 + 0xf8) = &DAT_005b8f08;
    *(undefined4 *)(param_1 + 0xfc) = 0;
  }
  return;
}



void fn_005b8cec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0xffffffff;
  *puVar1 = &DAT_00848ee0;
  puVar1[0x1a] = 0xffffffff;
  return;
}


