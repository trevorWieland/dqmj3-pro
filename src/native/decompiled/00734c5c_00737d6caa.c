#include "00734c5c_00737d6caa.h"



void fn_00734d18(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 *puVar2;
  
  iVar1 = DAT_008e3104;
  puVar2 = (undefined1 *)(*(int *)(DAT_008e3104 + 0x18) + *(int *)(DAT_008e3104 + 0x20) * 0x1c);
  *puVar2 = 0;
  *(undefined4 *)(puVar2 + 4) = param_1;
  *(undefined4 *)(puVar2 + 8) = param_2;
  *(undefined4 *)(puVar2 + 0xc) = param_3;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}



void fn_00734c5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  
  iVar1 = DAT_008e3104;
  iVar2 = DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  *(int *)(DAT_008e3104 + 0xc) = iVar2;
  if (*(int *)(iVar1 + 0x14) != iVar2) {
    fn_001467fc();
  }
  if (*(int *)(iVar1 + 0x14) != *(int *)(iVar1 + 0xc)) {
    return;
  }
  puVar3 = (undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x20) * 0x1c);
  *puVar3 = 1;
  *(undefined4 *)(puVar3 + 4) = param_1;
  *(undefined4 *)(puVar3 + 8) = param_2;
  *(uint *)(puVar3 + 0xc) = *(uint *)(puVar3 + 0xc) | 6;
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}


