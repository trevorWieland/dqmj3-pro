#include "0050a73c_0050b0d4aa.h"



longlong fn_0050a9ac(int param_1,undefined4 param_2)

{
  undefined4 local_10;
  uint uStack_c;
  
  if (*(char *)(param_1 + 0x358) != '\0') {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,&DAT_e0a14827);
  }
  fn_004edc34(param_1 + 0x340);
  fn_00513f50(param_1);
  fn_004edc70(param_1 + 0x340);
  if (DAT_008bf4d4 - 0x100000U < 0x3ff00000) {
    local_10 = *(undefined4 *)(DAT_008bf4d4 + 8);
    uStack_c = *(uint *)(DAT_008bf4d4 + 0xc);
  }
  else {
    local_10 = 0;
    uStack_c = 0;
    fn_004f01f4(&local_10);
  }
  *(undefined1 *)(param_1 + 0x358) = 1;
  *(undefined4 *)(param_1 + 0x350) = local_10;
  *(uint *)(param_1 + 0x354) = uStack_c;
  return (ulonglong)uStack_c << 0x20;
}



void fn_0050a998(int param_1)

{
  if (*(char *)(param_1 + 0x358) != '\0') {
    *(undefined1 *)(param_1 + 0x358) = 0;
  }
  return;
}



undefined1 * fn_0050a73c(int param_1,int param_2,int param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int local_48;
  int local_44;
  int *local_28;
  
  if (*(char *)(param_1 + 0x358) == '\0') {
    puVar1 = &DAT_e0a14827;
  }
  else {
    iVar2 = fn_006d8a04(param_2);
    if (iVar2 != 0) {
      fn_004edc34(param_1 + 0x340);
      uVar5 = 0;
      if (param_3 == 0) {
        iVar2 = 1;
      }
      else {
        iVar2 = fn_006d89ec(param_2);
      }
      local_28 = (int *)(param_2 + 0x5b8);
      do {
        if (*(int *)(param_2 + 0x5b8) - 0xcU <= uVar5) {
LAB_0050a8d8:
          *(int *)(param_1 + 0x328) = *(int *)(param_1 + 0x328) + iVar2;
          *(int *)(param_1 + 0x330) = *(int *)(param_1 + 0x330) + iVar2;
          *(int *)(param_1 + 0x32c) =
               iVar2 * (*(int *)(param_2 + 0x5b8) + *(int *)(param_1 + 0x35c)) +
               *(int *)(param_1 + 0x32c);
          uVar4 = *(uint *)(param_1 + 0x338);
          uVar5 = (*(int *)(param_1 + 0x35c) + *local_28) * iVar2;
          *(uint *)(param_1 + 0x338) = uVar5 + uVar4;
          *(uint *)(param_1 + 0x33c) = *(int *)(param_1 + 0x33c) + (uint)CARRY4(uVar5,uVar4);
          fn_004edc70(param_1 + 0x340);
          return (undefined1 *)0x0;
        }
        fn_00516db8(&local_48);
        fn_00516cec(&local_48,param_2,uVar5);
        if (local_44 == 0) {
          fn_00516dd8(&local_48);
          goto LAB_0050a8d8;
        }
        uVar4 = *(uint *)(local_44 + 0xc);
        uVar4 = ((uVar4 >> 0x10) << 0x18 | (uVar4 >> 0x18) << 0x10) >> 0x10 |
                ((uVar4 & 0xff) << 8 | uVar4 >> 8 & 0xff) << 0x10;
        iVar6 = (local_48 + 0x13U & 0xfffffffc) + 4;
        iVar3 = fn_006dae98(param_1,uVar4);
        if ((iVar3 != -1) || (iVar3 = fn_00513e58(param_1,uVar4), iVar3 != -1)) {
          iVar3 = param_1 + iVar3 * 0x18;
          uVar4 = *(uint *)(iVar3 + 0x10);
          *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + iVar2;
          *(int *)(iVar3 + 8) = iVar2 * iVar6 + *(int *)(iVar3 + 8);
          *(int *)(iVar3 + 4) = *(int *)(iVar3 + 4) + iVar2;
          *(uint *)(iVar3 + 0x10) = iVar2 * iVar6 + uVar4;
          *(uint *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + (uint)CARRY4(iVar2 * iVar6,uVar4);
        }
        uVar5 = uVar5 + iVar6;
        fn_00516dd8(&local_48);
      } while( true );
    }
    puVar1 = (undefined1 *)0xe0e14826;
  }
  return puVar1;
}


