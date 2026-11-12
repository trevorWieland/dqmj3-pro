#include "single_00407f48_r.h"


extern undefined4 UndefinedInstruction;

undefined1 * fn_00407f48(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [32];
  
  iVar1 = fn_006ba6b0(*(undefined4 *)(param_1 + 0x88),1);
  if (iVar1 == 0) {
    iVar1 = fn_006ba680(*(undefined4 *)(param_1 + 0x88),1);
    if (iVar1 != 0) {
      uVar2 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x84));
      fn_00408d04(param_1,uVar2,0);
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xa6) = 4;
      return &UndefinedInstruction;
    }
    iVar1 = fn_006ba4bc(*(undefined4 *)(param_1 + 0x88),1);
    puVar4 = (undefined1 *)0x0;
    if (iVar1 != 0) {
      uVar2 = fn_006c1574(*(undefined4 *)(param_1 + 0x88));
      uVar3 = fn_0016a82c();
      uVar2 = fn_0022ee7c(uVar2);
      fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar3,uVar2);
      puVar4 = (undefined1 *)fn_00689bd0(param_1,0x49,0);
      return puVar4;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0xb4);
    iVar1 = fn_006ba4ec(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 < 2) {
      iVar1 = fn_006ba4ec();
    }
    else {
      iVar1 = 0;
    }
    uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                         *(undefined4 *)(*(int *)(iVar5 + 4) + iVar1 * 4));
    fn_0020bbc4(auStack_40,uVar2);
    iVar1 = fn_006c02d4(auStack_3c,auStack_38,7);
    iVar5 = fn_0020cb7c(uVar2);
    if (iVar1 < iVar5) {
      fn_004082f4(param_1);
    }
    else {
      uVar2 = fn_0022f584((char *)&DAT_00408518,0);
      fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar2,1,0,1,1,0,0,1);
      fn_00689bd0(param_1,0x48,0);
      fn_00689828(param_1,0);
      *(undefined1 *)(param_1 + 0x98) = 8;
      *(undefined1 *)(param_1 + 0xb0) = *(undefined1 *)(param_1 + 0xa4);
      *(undefined1 *)(param_1 + 0xa6) = 0;
    }
    puVar4 = auStack_40;
  }
  return puVar4;
}


