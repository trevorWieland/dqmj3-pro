#include "002f6180_002f6824bbba.h"



undefined4 fn_002f6784(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((*(char *)(param_1 + 0xc) == '\x03') &&
       (iVar1 = fn_0028ec90(*(undefined4 *)(*(int *)(DAT_008977ec + 0x24) + 0x14)), iVar1 != 0)) &&
      (*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc))) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


