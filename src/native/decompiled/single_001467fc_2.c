#include "single_001467fc_2.h"



void fn_001467fc(void)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 *puVar4;
  bool bVar5;
  
  iVar1 = DAT_008e3104;
  uVar3 = (int)DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  bVar5 = (uVar3 & 8) != 0;
  puVar2 = DAT_008bf790;
  if (bVar5) {
    puVar2 = (undefined4 *)(uVar3 + 0x18);
  }
  *(uint *)(DAT_008e3104 + 0xc) = uVar3;
  if (bVar5) {
    *(undefined4 **)(iVar1 + 0xc) = puVar2;
  }
  else {
    *(uint *)(iVar1 + 0xc) = uVar3 + 0x20;
    if (puVar2 < DAT_008bf794) {
      DAT_008bf790 = puVar2 + 2;
      puVar2[1] = 0x8025e;
      *puVar2 = 0;
    }
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = 1;
    DAT_008bf790[1] = 0xf0111;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = 1;
    DAT_008bf790[1] = 0xf0110;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  if (DAT_008bf790 < DAT_008bf794) {
    *DAT_008bf790 = 0x12345678;
    DAT_008bf790[1] = 0xf0010;
    DAT_008bf790 = DAT_008bf790 + 2;
  }
  puVar4 = (undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x20) * 0x1c);
  *puVar4 = 1;
  *(int *)(puVar4 + 4) = *(int *)(iVar1 + 4) + *(int *)(iVar1 + 0x14);
  *(int *)(puVar4 + 8) = *(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x14);
  if (*(int *)(iVar1 + 0x34) != 0) {
    fn_00146df8(iVar1,puVar4);
  }
  uVar3 = *(uint *)(puVar4 + 0xc);
  *(uint *)(puVar4 + 0xc) = uVar3 & 0xfffffffd;
  if (*(char *)(iVar1 + 0x3d) != '\0') {
    *(uint *)(puVar4 + 0xc) = uVar3 & 0xfffffffd | 1;
  }
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(iVar1 + 0xc);
  fn_00150284();
  *(int *)(iVar1 + 0x20) = *(int *)(iVar1 + 0x20) + 1;
  if (((DAT_008e3108 == iVar1) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}


