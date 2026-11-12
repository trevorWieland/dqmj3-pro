#include "004cac58_004cb840bbb.h"



void fn_004cb840(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_004caec4();
  *puVar1 = &DAT_008560c8;
  puVar1[0x158] = &DAT_008560f0;
  return;
}



undefined1 * fn_004cb750(int param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  char cVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int local_24 [2];
  
  local_24[0] = 0;
  if ((param_5 == 0) ||
     (puVar2 = (undefined1 *)fn_004d46b0(*(undefined4 *)(param_1 + 0x55c),param_5),
     -1 < (int)puVar2)) {
    puVar2 = (undefined1 *)
             fn_004d45ec(*(undefined4 *)(param_1 + 0x55c),param_2,param_3,param_4,local_24);
    if ((param_5 == 0) ||
       (puVar3 = (undefined1 *)fn_004d46b0(*(undefined4 *)(param_1 + 0x55c),0), -1 < (int)puVar3))
    {
      if (-1 < (int)puVar2) {
        if ((local_24[0] == 0) || (local_24[0] != param_3)) {
          return &DAT_e0a14827;
        }
        return (undefined1 *)0x0;
      }
      cVar1 = *(char *)(param_1 + 0x558);
    }
    else {
      cVar1 = *(char *)(param_1 + 0x558);
      puVar2 = puVar3;
    }
  }
  else {
    cVar1 = *(char *)(param_1 + 0x558);
  }
  if (cVar1 == '\0') {
    return (undefined1 *)0x0;
  }
  return puVar2;
}


