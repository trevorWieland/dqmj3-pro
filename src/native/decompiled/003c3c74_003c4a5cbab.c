#include "003c3c74_003c4a5cbab.h"



void fn_003c4988(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00830288;
  *(undefined1 *)(puVar1 + 0x19) = 0;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  return;
}



void fn_003c4454(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uStack_20;
  
  uStack_20 = param_4;
  fn_00664a8c(&uStack_20);
  iVar1 = fn_006649e0(&uStack_20);
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      lVar4 = fn_006b8760(*(undefined4 *)(DAT_00897804 + 0x38));
      if (lVar4 != 0) {
        lVar4 = fn_006b8760(*(undefined4 *)(DAT_00897804 + 0x38));
        lVar5 = fn_00453de4(0x1acb);
        if (lVar4 != lVar5) {
          uVar2 = fn_0022f584((char *)&DAT_003c4694,0);
          fn_0068974c(param_1,uVar2,0,1);
          *(undefined4 *)(param_1 + 0x68) = 0;
          *(undefined1 *)(param_1 + 100) = 6;
          goto LAB_003c4650;
        }
        iVar1 = fn_00662bd0();
        iVar1 = fn_006f5d6c(*(undefined4 *)(iVar1 + 8),1);
        if (iVar1 != 0) {
          DAT_00897a2c = fn_00154ac8(0x322);
          iVar3 = fn_00145b00(0x28,&DAT_00812c8c);
          iVar1 = 0;
          if (iVar3 != 0) {
            uVar2 = fn_00689b18(param_1);
            iVar1 = fn_002e3ad8(iVar3,uVar2);
          }
          iVar3 = *(int *)(param_1 + 0x6c);
          if (iVar3 != iVar1) {
            if (iVar3 != 0) {
              fn_002e3bbc(iVar3);
              fn_002feef8();
            }
            *(int *)(param_1 + 0x6c) = iVar1;
          }
          fn_002e3524(*(undefined4 *)(param_1 + 0x6c),1,0);
          *(undefined1 *)(param_1 + 100) = 3;
          *(undefined4 *)(param_1 + 0x68) = 0;
          goto LAB_003c4650;
        }
      }
      iVar1 = fn_00292f20();
      *(undefined1 *)(iVar1 + 0xad2) = 1;
      fn_006899f4(param_1,0xd6,0);
      fn_002cd854(*(undefined4 *)(DAT_00897820 + 0x50));
    }
    else if (iVar1 == 4) {
      iVar1 = fn_00292f20();
      *(undefined1 *)(iVar1 + 0xad2) = 1;
      fn_006899f4(param_1,0xd6,0);
      fn_002cd854(*(undefined4 *)(DAT_00897820 + 0x50));
    }
    else if (iVar1 == 9) {
      uVar2 = fn_0022f584((char *)&DAT_003c466c,0);
      fn_0068974c(param_1,uVar2,0,1);
      *(undefined4 *)(param_1 + 0x68) = 0;
      *(undefined1 *)(param_1 + 100) = 6;
    }
  }
LAB_003c4650:
  fn_00664a14(&uStack_20);
  fn_00664a98(&uStack_20);
  return;
}


