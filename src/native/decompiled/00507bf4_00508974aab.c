#include "00507bf4_00508974aab.h"



undefined1 * fn_00507edc(void)

{
  undefined1 *puVar1;
  int *piVar2;
  
  if (DAT_008bf4d8 == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4d9 == '\0') {
      return &DAT_e0a14827;
    }
    piVar2 = (int *)fn_004ed2e8();
    (**(code **)(*piVar2 + 0x14))();
    fn_004ed21c();
    puVar1 = (undefined1 *)0x0;
    DAT_008bf4d9 = '\0';
  }
  return puVar1;
}


