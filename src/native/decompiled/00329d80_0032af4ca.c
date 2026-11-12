#include "00329d80_0032af4ca.h"



void fn_00329ea4(int param_1)

{
  fn_002c4100();
  *(undefined4 *)(param_1 + 0xb4) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  return;
}



void fn_00329e64(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0039f9e8();
  puVar1[0x56] = 0;
  *puVar1 = &DAT_00824068;
  puVar1[0x57] = 0;
  puVar1[0x58] = 0;
  *(undefined1 *)(puVar1 + 0x59) = 0;
  puVar1[0x5a] = 0;
  return;
}



void fn_00329d80(int param_1)

{
  char cVar1;
  int iVar2;
  
  fn_002c4304();
  cVar1 = *(char *)(param_1 + 0x164);
  if (cVar1 == '\0') {
    return;
  }
  if (cVar1 == '\x01') {
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 != 1) {
      return;
    }
  }
  else {
    if (cVar1 != '\x02') {
      return;
    }
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 0) {
      return;
    }
    if (iVar2 != 2) {
      if (iVar2 != 3) {
        return;
      }
      if (*(int *)(param_1 + 0x168) == 0xd4) {
        (**(code **)(**(int **)(param_1 + 0x158) + 0xc))();
        fn_0030d5c4(*(undefined4 *)(param_1 + 0x160));
      }
      else if (*(int *)(param_1 + 0x168) == 0xd9) {
        (**(code **)(**(int **)(param_1 + 0x158) + 0xc))();
      }
      fn_006899f4(param_1,*(undefined4 *)(param_1 + 0x168),1);
      fn_00689d04(param_1,0);
      *(undefined1 *)(param_1 + 0x164) = 3;
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x164) = 0;
  return;
}


