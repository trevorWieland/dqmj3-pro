#include "single_00741410_2.h"



uint fn_00741410(void)

{
  char cVar1;
  uint uVar2;
  
  if (DAT_00899eac == (undefined4 *)0x0 && DAT_00899ea8 == (undefined4 *)0x0) {
    return 1;
  }
  cVar1 = *(char *)(DAT_00899eac + 4);
  if (cVar1 == '\x03') {
    DAT_00899eb0 = DAT_00899ea8[1];
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = (uint)(cVar1 == '\x02');
    if (cVar1 != '\x02') {
      return uVar2;
    }
  }
  (**(code **)*DAT_00899ea8)();
  fn_007407d4(DAT_00899ea8);
  (**(code **)*DAT_00899eac)();
  fn_007407d4(DAT_00899eac);
  DAT_00899eac = (undefined4 *)0x0;
  DAT_00899ea8 = (undefined4 *)0x0;
  return uVar2;
}


