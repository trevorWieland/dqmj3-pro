#include "single_0012b994_2.h"



void fn_0012b994(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar2 = DAT_008e3104;
  puVar1 = DAT_008bf790;
  uVar5 = (int)DAT_008bf790 - *(int *)(DAT_008e3104 + 4);
  *(uint *)(DAT_008e3104 + 0xc) = uVar5;
  if (*(uint *)(iVar2 + 0x14) == uVar5) {
    return;
  }
  if ((uVar5 & 8) == 0) {
    *(uint *)(iVar2 + 0xc) = uVar5 + 0x20;
    if (puVar1 < DAT_008bf794) {
      DAT_008bf790 = puVar1 + 2;
      *puVar1 = 0;
      puVar1[1] = 0x8025e;
    }
  }
  else {
    *(uint *)(iVar2 + 0xc) = uVar5 + 0x18;
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
  puVar3 = (undefined1 *)(*(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x20) * 0x1c);
  *puVar3 = 1;
  iVar6 = *(int *)(iVar2 + 0x14) + *(int *)(iVar2 + 4);
  *(int *)(puVar3 + 4) = iVar6;
  iVar7 = *(int *)(iVar2 + 0xc) - *(int *)(iVar2 + 0x14);
  *(int *)(puVar3 + 8) = iVar7;
  iVar4 = *(int *)(iVar2 + 0x34);
  if (iVar4 != 0) {
    *(uint *)(iVar4 + 8) = ((iVar6 + iVar7) - iVar4) - 0x18U >> 3;
    *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(iVar2 + 0x30);
    *(undefined4 *)(iVar2 + 0x34) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
  }
  uVar5 = *(uint *)(puVar3 + 0xc);
  *(uint *)(puVar3 + 0xc) = uVar5 & 0xfffffffd | 4;
  if (*(char *)(iVar2 + 0x3d) != '\0') {
    *(uint *)(puVar3 + 0xc) = uVar5 & 0xfffffffd | 5;
  }
  *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar2 + 0xc);
  fn_00150284();
  *(int *)(iVar2 + 0x20) = *(int *)(iVar2 + 0x20) + 1;
  if (((DAT_008e3108 == iVar2) && (DAT_008e307a != '\0')) && (DAT_008e3079 == '\0')) {
    DAT_008e3079 = '\x01';
    fn_0016720c();
  }
  fn_00150294();
  return;
}


