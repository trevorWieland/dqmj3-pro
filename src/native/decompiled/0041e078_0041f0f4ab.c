#include "0041e078_0041f0f4ab.h"



void fn_0041e4f4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 0xac) - *(int *)(param_1 + 0xa8) >> 5;
  iVar2 = iVar3 + -1;
  if (iVar3 != 0 && -2 < iVar2) {
    do {
      iVar3 = iVar2 + -1;
      bVar4 = iVar2 != 0;
      puVar1 = (undefined4 *)(*(int *)(param_1 + 0xa8) + iVar2 * 0x20);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
      puVar1[5] = 0;
      puVar1[6] = 0;
      puVar1[7] = 0;
      iVar2 = iVar3;
    } while (bVar4 && -2 < iVar3);
  }
  fn_0039be60(param_1);
  fn_0022ccb4(param_1);
  fn_0039bcdc(param_1);
  return;
}



void fn_0041e40c(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  if ((*(char *)(param_1 + 0x68) == '\x01') && (iVar1 = fn_006f6a6c(), iVar1 == 1)) {
    fn_0068ab44(param_1,0x100094c);
    fn_00689bd0(param_1,0,0);
    fn_006899f4(param_1,0xd4,1);
    *(undefined1 *)(param_1 + 0x68) = 2;
  }
  return;
}



void fn_0041e1ec(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  puVar1[0x39] = 0;
  *puVar1 = &DAT_0083a0cc;
  puVar1[0x3a] = 0;
  return;
}


