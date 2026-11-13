#include "00601c64_00602fc4ba.h"



void fn_00602aa4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xf0,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00602ad4(iVar1,param_1);
  return;
}



void fn_00602394(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00896fe8) goto LAB_006023d8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_006023d8:
  if (*(char *)(puVar2 + 5) == '\0') {
    return;
  }
  fn_0060228c(param_1);
  return;
}



void fn_0060228c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 auStack_48 [48];
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00896fe8) goto LAB_006022d4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_006022d4:
  *(undefined1 *)(puVar5 + 5) = 0;
  uVar6 = puVar5[4];
  fn_005a5bf8(param_1,0,uVar6);
  fn_005a5a04(param_1,0,uVar6);
  uVar2 = fn_002f7124(uVar6);
  uVar3 = fn_002f6298(uVar6);
  uVar4 = fn_002f5b28(uVar6);
  fn_005a5f50(param_1,uVar4,uVar3,uVar2);
  local_50 = 0;
  fn_005a58ac(param_1,uVar6,&local_50,&uStack_4c);
  uVar2 = fn_00246ec4(local_50,uStack_4c);
  fn_0022f128(auStack_48,0x17,uVar2);
  uVar2 = fn_00178f90(param_1);
  fn_00688cc4(uVar2,(char *)&DAT_0060224c,auStack_48);
  return;
}


