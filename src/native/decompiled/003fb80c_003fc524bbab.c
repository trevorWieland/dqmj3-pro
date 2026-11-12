#include "003fb80c_003fc524bbab.h"



undefined4 * fn_003fc300(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  
  puVar1 = (undefined4 *)fn_0039c504();
  piVar4 = puVar1 + 0x2a;
  *puVar1 = &DAT_00836144;
  *piVar4 = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar2 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar3 = 0xd;
  *piVar4 = (int)puVar2;
  do {
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = 0;
    }
    iVar3 = iVar3 + -1;
    puVar2 = puVar2 + 1;
  } while (iVar3 != 0);
  puVar1[0x2b] = *piVar4 + 0x34;
  puVar1[0x2c] = *piVar4 + 0x80;
  return puVar1;
}


