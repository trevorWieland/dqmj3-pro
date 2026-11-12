#include "single_0014e3f4_1.h"



undefined4 * fn_0014e3f4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  
  puVar2 = DAT_008bfb4c;
  do {
    if (DAT_008bfb4c != (undefined4 *)0x0) {
      ClearExclusiveLocal();
      goto LAB_0014e428;
    }
    bVar1 = (bool)hasExclusiveAccess(0x8bfb4c);
  } while (!bVar1);
  DAT_008bfb4c = (undefined4 *)0x1;
LAB_0014e428:
  if (puVar2 == (undefined4 *)0x0) {
    DAT_008ebd10 = 0;
    fn_0013c500(&DAT_008ebd10);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x8bfb4c);
    } while (!bVar1);
    DAT_008bfb4c = &DAT_008ebd10;
  }
  else {
    while (DAT_008bfb4c < (undefined4 *)0x2) {
      fn_0012d6a4(1000000,0);
    }
  }
  return DAT_008bfb4c;
}


