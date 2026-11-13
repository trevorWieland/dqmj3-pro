#include "004bd9a4_004bd9a4.h"



void fn_004bd9a4(void)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 local_28;
  undefined4 uStack_24;
  
  if (DAT_008b638b == '\0') {
    iVar3 = fn_001249d0();
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = *(int *)(iVar3 + 0xc);
    }
    if ((iVar3 != 0 && iVar4 != 0) &&
       (*(int *)(*(int *)(iVar4 + 0xc) + 0x34) - *(int *)(*(int *)(iVar4 + 0xc) + 0x30) >> 2 == 0))
    {
      local_28 = 0;
      uStack_24 = 0;
      fn_004bc730(iVar4,&local_28);
    }
    return;
  }
  if (DAT_008b637e == '\0') {
    uVar7 = 0;
  }
  else {
    puVar2 = (undefined4 *)fn_001775e8(DAT_008b63d8);
    uVar7 = *puVar2;
  }
  (**(code **)(DAT_008e778c + 8))();
  if (DAT_008e76e4 == (int *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = (DAT_008e76e4[1] - *DAT_008e76e4 >> 2) - 1;
  }
  (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
  uVar5 = 0;
  do {
    (**(code **)(DAT_008e778c + 8))();
    if ((uVar5 == 0) ||
       ((uVar5 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) &&
        (*(int *)(*DAT_008e76e4 + uVar5 * 4) != 0)))) {
      bVar1 = true;
    }
    else {
      bVar1 = false;
    }
    (**(code **)(DAT_008e778c + 0xc))(&DAT_008e778c);
    if (bVar1) {
      fn_00477090(uVar5);
      iVar3 = fn_001249d0();
      iVar4 = 0;
      if (iVar3 != 0) {
        iVar4 = *(int *)(iVar3 + 0xc);
      }
      if ((iVar3 != 0 && iVar4 != 0) &&
         (*(int *)(*(int *)(iVar4 + 0xc) + 0x34) - *(int *)(*(int *)(iVar4 + 0xc) + 0x30) >> 2 == 0)
         ) {
        local_28 = 0;
        uStack_24 = 0;
        fn_004bc730(iVar4,&local_28);
      }
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 <= uVar6);
  fn_00477090(uVar7);
  return;
}


