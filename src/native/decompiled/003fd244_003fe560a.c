#include "003fd244_003fe560a.h"



void fn_003fd94c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xbc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fdee8(iVar1,param_1);
  return;
}



void fn_003fd718(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  
  iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
  if ((iVar1 < 1) && (2 < param_2)) {
    param_2 = param_2 + 1;
  }
  if (param_2 == 0) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 7;
  }
  else if (param_2 == 1) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 8;
  }
  else if (param_2 == 2) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 9;
  }
  else {
    if (param_2 != 3) goto LAB_003fd7e8;
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    iVar1 = fn_006f72c8(DAT_008977e0);
    uVar2 = 10;
  }
  *(undefined1 *)(iVar1 + 0x238) = uVar2;
LAB_003fd7e8:
  iVar1 = *(int *)(param_1 + 0xb8);
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  return;
}



void fn_003fd394(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fd47c(iVar1,param_1);
  return;
}



void fn_003fd47c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083675c;
  uVar2 = *(undefined4 *)(param_2 + 8);
  puVar1[0x1b] = 0xffffffff;
  puVar1[0x1a] = uVar2;
  puVar1[0x1c] = 0xffffffff;
  puVar1[0x1d] = 0xffffffff;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  return;
}



void fn_003fd244(int param_1)

{
  if (*(int *)(param_1 + 0x74) != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x70) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x68));
  }
  if (*(int *)(param_1 + 0x6c) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x68));
  }
  return;
}


