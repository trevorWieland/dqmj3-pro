#include "0063adb4_0063b500bbbb.h"



undefined4 fn_0063b500(undefined4 param_1,short *param_2)

{
  char cVar1;
  bool bVar2;
  
  if (0 < *param_2) {
    cVar1 = *(char *)((int)param_2 + 0x67);
    bVar2 = cVar1 == '\0';
    if (bVar2) {
      cVar1 = (char)param_2[0x3b];
    }
    if ((bVar2 && cVar1 == '\0') && ((char)param_2[0x34] == '\0')) {
      return 1;
    }
  }
  return 0;
}


