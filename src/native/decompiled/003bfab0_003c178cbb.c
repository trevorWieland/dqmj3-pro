#include "003bfab0_003c178cbb.h"



undefined4 fn_003c178c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00895b30) goto LAB_003c17d0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003c17d0:
  *(undefined1 *)(puVar2 + 2) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  return 1;
}



void fn_003c174c(undefined4 *param_1)

{
  *param_1 = &DAT_0082fd78;
  if (param_1[0x7f] != 0) {
    fn_002feef8(param_1[0x7f]);
  }
  fn_0039850c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_003c1708(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003984a8();
  *puVar1 = &DAT_0082fd78;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x7d] = 0;
  *(undefined1 *)(puVar1 + 0x7e) = 0;
  puVar1[0x7f] = 0;
  fn_00301f50(puVar1 + 0x41,0xf0);
  return puVar1;
}



void fn_003c16cc(int param_1)

{
  fn_0039848c();
  if ((*(char *)(param_1 + 0x1f8) == '\0') || (*(char *)(param_1 + 0x1f8) != '\x01')) {
    return;
  }
  fn_006899f4(param_1,0xa0,0);
  return;
}


