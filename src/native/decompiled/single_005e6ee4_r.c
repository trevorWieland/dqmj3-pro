#include "single_005e6ee4_r.h"


extern undefined4 _local_1c;

undefined4 * fn_005e6ee4(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *local_20;
  char local_1c;
  undefined3 uStack_1b;
  
  puVar1 = (undefined4 *)(**(code **)(*param_2 + 8))(param_2,8,4);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *puVar1 = &DAT_00858bb0;
  puVar1[1] = 0;
  puVar2 = (undefined4 *)fn_00145b00(8,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 1;
    local_20 = (undefined4 *)0x0;
    puVar3 = (undefined4 *)fn_005ec438(param_1,param_2,0,1);
    _local_1c = CONCAT31(uStack_1b,1);
    local_20 = puVar3;
    if ((undefined4 **)puVar2 != &local_20) {
      local_20 = (undefined4 *)*puVar2;
      _local_1c = CONCAT31(uStack_1b,*(undefined1 *)(puVar2 + 1));
      *puVar2 = puVar3;
      *(undefined1 *)(puVar2 + 1) = 1;
    }
    puVar3 = local_20;
    if ((local_20 != (undefined4 *)0x0) && (local_1c != '\0')) {
      (**(code **)*local_20)(local_20);
      piVar4 = (int *)puVar3[1];
      (**(code **)(*piVar4 + 0xc))(piVar4,puVar3);
    }
  }
  puVar3 = (undefined4 *)puVar1[1];
  if (puVar3 != puVar2) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)*puVar3;
      if ((puVar5 != (undefined4 *)0x0) && (*(char *)(puVar3 + 1) != '\0')) {
        (**(code **)*puVar5)(puVar5);
        (**(code **)(*(int *)puVar5[1] + 0xc))((int *)puVar5[1],puVar5);
      }
      *puVar3 = 0;
      fn_002feef8(puVar3);
    }
    puVar1[1] = puVar2;
  }
  return puVar1;
}


