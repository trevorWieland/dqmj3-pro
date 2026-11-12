#include "0026b844_0026c5e8ba.h"



void fn_0026bfd4(undefined4 param_1)

{
  int iVar1;
  
  fn_001c2b7c(1);
  fn_0018cc4c();
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39e) == '\0') {
    fn_0026c208(param_1);
    return;
  }
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003391c8(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x20));
  return;
}



undefined4 * fn_0026bf84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0026bb64();
  *puVar1 = &DAT_0081e044;
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  return puVar1;
}


