#include "single_004fa260_r.h"


extern undefined4 PrefetchAbort;

undefined1 * fn_004fa260(int *param_1,uint param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 local_20 [4];
  undefined1 auStack_1c [16];
  
  puVar1 = (undefined1 *)0x0;
  do {
    if (*(byte *)((int)param_1 + (int)puVar1 * 2 + 0x40) == param_2) {
      *(undefined1 *)((int)param_1 + (int)puVar1 * 2 + 0x40) = 0xfd;
      fn_0014f590(local_20);
      iVar2 = fn_006d9ef0(DAT_008bf4cc,local_20,param_2);
      if (-1 < iVar2) {
        (**(code **)(*param_1 + 0x1c))(param_1,local_20);
      }
      return auStack_1c;
    }
    puVar1 = puVar1 + 1;
  } while (puVar1 < &PrefetchAbort);
  return puVar1;
}


