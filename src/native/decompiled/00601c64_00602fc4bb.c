#include "00601c64_00602fc4bb.h"



void fn_00602e20(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x11c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602fc4(iVar1,param_1);
  return;
}



void fn_00602fc4(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d370(param_1,param_2,(char *)&DAT_0060300c,0xe0,1);
  *puVar1 = &DAT_0084f090;
  puVar1[0x41] = 0;
  puVar1[0x42] = 0;
  puVar1[0x43] = &DAT_0085a9f4;
  puVar1[0x44] = 0;
  puVar1[0x46] = 0xffffffff;
  puVar1[0x45] = 0;
  return;
}



void fn_00602cd8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00893b10) goto LAB_00602d1c;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00602d1c:
  *(undefined4 **)(param_1 + 0x104) = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00899218) goto LAB_00602d60;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00602d60:
  *(undefined4 **)(param_1 + 0x108) = puVar2;
  fn_0043cd80(param_1);
  return;
}



void fn_00602ad4(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d4f1c();
  *puVar1 = &DAT_0084ef48;
  return;
}


