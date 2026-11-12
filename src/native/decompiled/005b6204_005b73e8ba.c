#include "005b6204_005b73e8ba.h"



void fn_005b732c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_005b73b4(iVar1,param_1);
  return;
}



void fn_005b725c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00415e9c();
  *puVar1 = &DAT_00848738;
  puVar1[0x4d] = 0;
  puVar1[0x4e] = &DAT_008593c0;
  *(undefined1 *)(puVar1 + 0x4f) = 0;
  *(undefined1 *)((int)puVar1 + 0x13d) = 0;
  *(undefined1 *)((int)puVar1 + 0x13e) = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  puVar1[0x52] = 0;
  puVar1[0x53] = 0;
  *(undefined1 *)(puVar1 + 0x54) = 1;
  return;
}



void fn_005b6ea4(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  fn_002c11d0(param_1,1,0);
  iVar1 = fn_002e3d2c();
  if (iVar1 != 0) {
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x100),1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  if (param_3 == 0) {
    uVar2 = *(uint *)(param_1 + 0x134);
    bVar3 = *(char *)(uVar2 + 0x25) != '\0';
    if (bVar3) {
      uVar2 = (uint)*(byte *)(uVar2 + 0x24);
    }
    if ((bVar3 && uVar2 != 1) && (*(char *)(param_1 + 0x13c) == '\0')) {
      *(undefined1 *)(param_1 + 0x13e) = 1;
      *(undefined4 *)(param_1 + 0x148) = param_2;
      *(undefined4 *)(param_1 + 0x14c) = 0;
      return;
    }
  }
  fn_004156a0(param_1,param_2,param_3);
  return;
}


