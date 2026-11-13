#include "00470088_00470bf0ba.h"



undefined4
fn_00470334(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  *(ushort *)(param_2 + 0x3c) = *(ushort *)(param_2 + 0x3c) | 0x80;
  if (*(char *)(param_2 + 0x89) == '\0') {
    *(undefined1 *)(param_2 + 0x89) = 1;
    *(undefined1 *)(param_2 + 0x6c) = *(undefined1 *)(param_2 + 0x25);
    *(undefined1 *)(param_2 + 0x6d) = *(undefined1 *)(param_2 + 0x26);
    *(undefined2 *)(param_2 + 0x6e) = *(undefined2 *)(param_2 + 0x3c);
    *(undefined1 *)(param_2 + 0x70) = *(undefined1 *)(param_2 + 0x65);
    *(undefined1 *)(param_2 + 0x71) = *(undefined1 *)(param_2 + 0x84);
    *(undefined2 *)(param_2 + 0x72) = *(undefined2 *)(param_2 + 0x44);
    iVar1 = fn_004703e4(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  fn_00470774(param_1,param_2,param_3,param_4,param_5,param_7,param_8);
  return 1;
}


