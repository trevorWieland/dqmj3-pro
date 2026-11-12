#include "0060b818_0060c160bbb.h"



undefined4 fn_0060c160(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  
  iVar2 = fn_001c232c(DAT_008977e4);
  cVar1 = *(char *)(iVar2 + 8);
  uVar6 = 0;
  uVar3 = 0x10;
  if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      uVar6 = cVar1 == '\x03';
      if ((bool)uVar6) {
        uVar3 = 0xe;
        goto LAB_0060c1ac;
      }
      if (cVar1 != '\x06') goto LAB_0060c1b0;
    }
    uVar6 = 2;
  }
LAB_0060c1ac:
  *(undefined4 *)(param_1 + 0x68) = uVar3;
LAB_0060c1b0:
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x7e);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00894a9c) goto LAB_0060c1f4;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_0060c1f4:
  *(undefined1 *)(puVar4 + 2) = uVar6;
  fn_00689efc(param_1,0x7e,0);
  return 1;
}



void fn_0060c134(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d4f1c();
  *puVar1 = &DAT_00850014;
  return;
}


