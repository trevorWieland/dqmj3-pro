#include "0043f94c_00440d78bbbb.h"



void fn_00440d78(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = *(int *)(param_1 + 100);
  if (*(char *)(iVar1 + 0x1c) != '\x01') {
    if (*(char *)(iVar1 + 0x1c) == '\x02') {
      fn_006899f4(param_1,0xd6,1);
      fn_00689930(param_1,0xd8,1);
      *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 0;
    }
    return;
  }
  fn_003212bc(iVar1,*(undefined4 *)(iVar1 + 0x14));
  fn_00440c64(param_1);
  fn_00689930(param_1,0,0);
  fn_006899f4(param_1,0xa6,0);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xa6);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890abc) goto LAB_00440e58;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00440e58:
  *(undefined1 *)(puVar2 + 9) = 0;
  fn_003f7f24();
  *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 0;
  return;
}


