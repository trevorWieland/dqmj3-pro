#include "00185098_001854acba.h"



undefined4 fn_00185320(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_30 [16];
  
  uVar8 = 1;
  iVar2 = fn_00191228();
  iVar7 = 0;
  if (0 < iVar2) {
    do {
      fn_001a0b50(auStack_30,param_1,iVar7);
      uVar3 = fn_0019f67c(auStack_30,param_1);
      if ((uVar3 & 0x10) != 0) {
        iVar6 = *(int *)(DAT_008977cc + 4);
        iVar4 = *(int *)(DAT_008977cc + 8) - iVar6;
        iVar1 = iVar4 >> 0x1f;
        if (iVar4 / 0x34 + iVar1 == iVar1) {
          iVar6 = 0;
        }
        uVar3 = fn_0019f67c(auStack_30,iVar6);
      }
      if ((uVar3 & 8) != 0) {
        uVar5 = fn_001a2394(DAT_008977d4);
        uVar3 = fn_001968e4(auStack_30,uVar5);
      }
      if ((int)uVar3 < 0) {
        uVar8 = 0;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar2);
  }
  return uVar8;
}



undefined4 fn_001852ac(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uStack_18;
  
  uVar4 = 1;
  uStack_18 = param_4;
  iVar1 = fn_00191218();
  iVar3 = 0;
  if (0 < iVar1) {
    do {
      fn_001a0b34(&uStack_18,param_1,iVar3);
      iVar2 = fn_0019bc24(&uStack_18);
      if ((iVar2 != 0) && (iVar2 = fn_0019f9ac(&uStack_18,param_1), iVar2 < 0)) {
        uVar4 = 0;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar1);
  }
  return uVar4;
}


