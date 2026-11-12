#include "00395dc0_00396678aa.h"



void fn_00395fb4(int param_1)

{
  fn_005c21b0();
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x18) = 0;
  fn_006899f4(param_1,0,0,0);
  fn_00689d04(param_1,0);
  fn_00689878(param_1,0);
  return;
}



undefined4 fn_00395ef4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xbc) = 2;
  *(undefined1 *)(param_1 + 0xc0) = 1;
  fn_005c1df0(param_1);
  fn_005c1d48(param_1,0);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      uVar1 = fn_00411bf0(param_1,iVar2);
      fn_0031b78c(param_1,iVar2,0,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xbc));
  }
  fn_005c1bd0(param_1);
  fn_00689efc(param_1,0x90,0);
  return 1;
}



void fn_00395dc0(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0028e264();
  puVar1[2] = 0;
  *puVar1 = &DAT_0082b864;
  puVar1[3] = 0;
  puVar1[4] = 0;
  *(undefined1 *)(puVar1 + 0x1e) = 0;
  *(undefined1 *)((int)puVar1 + 0x79) = 0;
  *(undefined1 *)((int)puVar1 + 0x7a) = 0;
  *(undefined1 *)((int)puVar1 + 0x7b) = 0;
  puVar1[0x20] = 0x36;
  puVar1[0x22] = 1;
  puVar1[0x21] = &DAT_008f9cf4;
  return;
}


