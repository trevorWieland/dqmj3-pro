#include "001c19e8_001c25c0b.h"



void fn_001c25c0(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003ef9f0(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x10));
  return;
}



bool fn_001c2588(void)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = fn_00174858(DAT_008977e4);
  uVar2 = *(uint *)(*(int *)(iVar1 + 0x4c) + 0x10);
  bVar3 = *(char *)(uVar2 + 0x76) != '\x02';
  if (bVar3) {
    uVar2 = (uint)*(byte *)(uVar2 + 0x74);
  }
  return !bVar3 || uVar2 == 2;
}



undefined4 fn_001c2540(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_001667e0(param_1,0x20);
  if (((iVar1 != 0) || (iVar1 = fn_001667e0(param_1,0x40), iVar1 != 0)) ||
     (iVar1 = fn_001667e0(param_1,0x2000), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_001c249c(uint param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = *(undefined4 *)(DAT_00897804 + 8);
  iVar1 = fn_001c2380(DAT_008977e4);
  iVar1 = iVar1 + 4;
  puVar2 = (undefined4 *)fn_002a19c4(iVar1,0);
  puVar3 = (undefined4 *)fn_002a19c4(iVar1,1);
  iVar4 = fn_00174828(DAT_008977e4);
  iVar4 = fn_00145adc(iVar4 + 0xe8);
  if (iVar4 != 0) {
    uVar5 = fn_006b6268(uVar6);
    if ((uVar5 & param_1) == 0) {
      uVar5 = 0;
      do {
        *(undefined4 *)(iVar1 + uVar5 * 4) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar5 < 2);
      return;
    }
    iVar1 = fn_00182988(DAT_008977e4);
    *puVar2 = *(undefined4 *)(iVar1 + 0x3b8);
    iVar1 = fn_00182988(DAT_008977e4);
    *puVar3 = *(undefined4 *)(iVar1 + 0x3bc);
  }
  return;
}


