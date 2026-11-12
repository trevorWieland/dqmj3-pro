#include "001d36fc_001d42e4bb.h"



void fn_001d42e4(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  
  iVar3 = fn_00174870(param_1,param_2,param_1);
  if (-1 < *(char *)(iVar3 + 0x27)) {
    iVar3 = fn_00174870(param_1);
    cVar2 = *(char *)(iVar3 + 0x27) + '\x14';
    iVar3 = fn_00174828(DAT_008977e4);
    iVar5 = iVar3 + cVar2 * 0x418;
    if (0 < *(short *)(iVar5 + -0x4080)) {
      cVar1 = *(char *)(iVar5 + -0x4019);
      bVar6 = cVar1 == '\0';
      if (bVar6) {
        cVar1 = *(char *)(iVar5 + -0x400a);
      }
      bVar7 = bVar6 && cVar1 == '\0';
      if (bVar6 && cVar1 == '\0') {
        bVar7 = *(char *)(iVar5 + -0x4018) == '\0';
      }
      if (((bVar7) && ((int)cVar2 - 0x10U < 8)) && (iVar4 = fn_001c2ef4(0), iVar4 != 0)) {
        fn_00174398((short *)(iVar5 + -0x4080),1);
        *(char *)(iVar3 + 0x429a) = cVar2;
      }
    }
  }
  return;
}



void fn_001d421c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0012e7ec();
  *puVar1 = &DAT_008517c0;
  return;
}


