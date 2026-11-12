#include "00329d80_0032af4cbb.h"



void fn_0032af4c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((*(char *)(param_1 + 0xb8) == '\0') &&
     (iVar1 = fn_00292f20(), *(char *)(iVar1 + 0xad2) == '\0')) {
    if (*(char *)(*(int *)(param_1 + 0xb0) + 0x15) == '\0') {
      fn_002c3d68(param_1);
      fn_0068ab44(param_1,0x100094c);
      fn_006899f4(param_1,0,1);
      fn_00689d04(param_1,0);
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    uVar2 = fn_00689b18();
    fn_00294160(uVar2,0);
    *(undefined4 *)(param_1 + 0xbc) = 0;
    *(undefined1 *)(param_1 + 0xb8) = 6;
  }
  return;
}



void fn_0032ae50(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_aa0 [4];
  undefined1 auStack_a9c [2700];
  
  fn_00301f50(auStack_aa0,0xa88);
  fn_00290734(auStack_a9c);
  fn_002929f4(auStack_aa0);
  iVar1 = fn_00292f20();
  fn_0017821c(iVar1 + 0x48,auStack_aa0,0xa88);
  fn_002927ec(1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  uVar2 = fn_0022f584((char *)&DAT_0032af24);
  fn_0068974c(param_1,uVar2,0,1);
  iVar1 = fn_00154ac8(0x3c);
  if (iVar1 != 0) {
    iVar1 = fn_00154ac8(0x32f);
    if (iVar1 == 0) {
      fn_00144834(0x32f,1);
      *(undefined4 *)(param_1 + 0xbc) = 0;
      *(undefined1 *)(param_1 + 0xb8) = 2;
      return;
    }
  }
  *(undefined4 *)(param_1 + 0xbc) = 0;
  *(undefined1 *)(param_1 + 0xb8) = 1;
  return;
}


