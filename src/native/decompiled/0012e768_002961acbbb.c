#include "0012e768_002961acbbb.h"



char fn_002961ac(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  
  (**(code **)(*(int *)param_1[3] + 0x18))();
  fn_0023e6c8(param_1[1]);
  (**(code **)(*(int *)*param_1 + 0x10))();
  (**(code **)(*DAT_00897808 + 8))(DAT_00897808,1);
  (**(code **)(*DAT_0089780c + 8))(DAT_0089780c,1);
  cVar1 = *(char *)(param_1 + 10);
  bVar2 = cVar1 == '\0';
  if (bVar2) {
    cVar1 = *(char *)((int)param_1 + 0x29);
  }
  bVar3 = bVar2 && cVar1 == '\0';
  if (bVar2 && cVar1 == '\0') {
    cVar1 = *(char *)((int)param_1 + 0x2a);
    bVar3 = cVar1 == '\0';
  }
  if (!bVar3) {
    cVar1 = '\x01';
  }
  return cVar1;
}


