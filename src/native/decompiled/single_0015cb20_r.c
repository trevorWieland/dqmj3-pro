#include "single_0015cb20_r.h"


extern undefined4 _local_10;

void fn_0015cb20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  char local_10;
  undefined3 uStack_f;
  
  uStack_f = (undefined3)((uint)param_4 >> 8);
  _local_10 = CONCAT31(uStack_f,0x10);
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + local_10 * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar3 = cVar1 == '\0';
      if (bVar3) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      bVar4 = bVar3 && cVar1 == '\0';
      if (bVar3 && cVar1 == '\0') {
        bVar4 = *(char *)(iVar2 + -0x4018) == '\0';
      }
      if (bVar4) {
        fn_0017f464(*(undefined4 *)(param_1 + 0x74),&local_10);
      }
    }
    cVar1 = local_10 + '\x01';
    _local_10 = CONCAT31(uStack_f,cVar1);
  } while (cVar1 < '\x14');
  return;
}


