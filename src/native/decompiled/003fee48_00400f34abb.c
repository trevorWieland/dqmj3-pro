#include "003fee48_00400f34abb.h"



void fn_003ff840(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039e374();
  *puVar1 = &DAT_00836e68;
  puVar1[0x3d] = 0;
  return;
}



void fn_003ff780(int param_1)

{
  char cVar1;
  int iVar2;
  
  fn_0039e370();
  cVar1 = *(char *)(param_1 + 0xf0);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
        iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),
                             (int)*(short *)(*(int *)(param_1 + 0xe4) + 0x10));
        if (iVar2 == 0) {
          fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x24),1);
        }
        else {
          fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x20),1);
        }
        *(undefined1 *)(param_1 + 0xf0) = 0;
        return;
      }
    }
    else if (cVar1 == '\x02') {
      fn_006899f4(param_1,0x5c,0);
      *(undefined1 *)(param_1 + 0xf0) = 0;
    }
  }
  return;
}


