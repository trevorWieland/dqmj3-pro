#include "005055c4_0050d470bb.h"



void fn_0050d470(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_28;
  undefined4 local_24 [2];
  
  if (*(int *)(DAT_008bf4cc + 0xa4) - 0x100000U < 0x3ff00000) {
    iVar1 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(param_2 + 8));
    if ((iVar1 == 0) && (iVar1 = fn_0050b144(DAT_008bf4cc,param_2 + 0xc), iVar1 == 0)) {
      iVar1 = fn_006d6e30(param_2 + 0xc);
      if (iVar1 != 0) {
        local_24[0] = *(undefined4 *)(param_1 + 0xc);
        local_28 = 0;
        iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),local_24,param_2 + 0xc,1);
        if (iVar1 - 0x100000U < 0x3ff00000) {
          *(undefined1 *)(*(int *)(iVar1 + 0x1c) + 0x14) = 4;
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
          return;
        }
      }
    }
    else {
      if (*(int *)(param_2 + 0x1c) == 0) {
        if (*(char *)(param_2 + 0x20) == '\0') {
          return;
        }
        if (*(char *)(param_2 + 0x20) != *(char *)(iVar1 + 0x51)) {
          return;
        }
      }
      else {
        local_28 = 0;
        iVar2 = fn_006db6b8(DAT_008c06a0,iVar1,&local_28);
        if (iVar2 < 0) {
          return;
        }
        if (*(int *)(param_2 + 0x1c) != local_28) {
          return;
        }
      }
      iVar2 = fn_006d6e30(iVar1 + 4);
      if (iVar2 != 0) {
        local_24[0] = *(undefined4 *)(param_1 + 0xc);
        local_28 = 0;
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),local_24,iVar1 + 4,1);
        if (iVar2 - 0x100000U < 0x3ff00000) {
          *(undefined1 *)(*(int *)(iVar2 + 0x1c) + 0x14) = 4;
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
        }
      }
      if ((*(int *)(DAT_008bf4d4 + 100) != 0) && (*(byte *)(iVar1 + 0x14) < 0xc)) {
        fn_005118f4();
      }
      *(undefined1 *)(iVar1 + 0x20) = 6;
    }
  }
  return;
}



int fn_0050d0fc(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = &DAT_00857074;
  iVar1 = fn_0014f590(param_1 + 1);
  fn_004ed810(iVar1,param_2 + 4);
  *(undefined1 *)(iVar1 + 0x1c) = *(undefined1 *)(param_2 + 0x20);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(param_2 + 0x1c);
  *(undefined1 *)(iVar1 + 0x1d) = *(undefined1 *)(param_2 + 0x21);
  *(undefined1 *)(iVar1 + 0x1e) = *(undefined1 *)(param_2 + 0x22);
  *(undefined1 *)(iVar1 + 0x21) = *(undefined1 *)(param_2 + 0x25);
  *(undefined1 *)(iVar1 + 0x1f) = *(undefined1 *)(param_2 + 0x23);
  *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(param_2 + 0x24);
  *(undefined1 *)(iVar1 + 0x22) = *(undefined1 *)(param_2 + 0x26);
  return iVar1 + -4;
}



void fn_0050c68c(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  
  uVar1 = fn_004ed2e8();
  iVar2 = fn_00656e14(param_2,uVar1);
  if ((iVar2 != 0) && (uVar3 = 0, param_2 != 0)) {
    do {
      puVar4 = (undefined1 *)(iVar2 + uVar3);
      uVar3 = uVar3 + 1;
      if (puVar4 != (undefined1 *)0x0) {
        *puVar4 = 0;
      }
    } while (uVar3 < param_2);
  }
  return;
}


