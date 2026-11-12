#include "003151b0_003158a0aa.h"



void fn_003152c8(int param_1,uint param_2)

{
  int iVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  
  bVar2 = fn_00163868(10);
  iVar1 = (uint)bVar2 * 5;
  *(byte *)(param_1 + 0x3e) = bVar2 | 0x80;
  if ((char)(&DAT_007c339c)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007c339c)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x38) = uVar3;
  if ((char)(&DAT_007c339d)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007c339d)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x39) = uVar3;
  if ((char)(&DAT_007c339e)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007c339e)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x3f) = uVar3;
  if ((char)(&DAT_007c339f)[iVar1] < 0) {
    uVar4 = fn_00163868();
  }
  else {
    uVar4 = param_2 >> (((int)(char)(&DAT_007c339f)[iVar1] & 0x1fU) << 3);
  }
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffc03 | (uVar4 & 0xff) << 2;
  if ((char)(&DAT_007c33a0)[iVar1] < 0) {
    uVar3 = fn_00163868();
  }
  else {
    uVar3 = (undefined1)(param_2 >> (((int)(char)(&DAT_007c33a0)[iVar1] & 0x1fU) << 3));
  }
  *(undefined1 *)(param_1 + 0x43) = uVar3;
  return;
}



/* WARNING: Removing unreachable block (ram,0x00315248) */

undefined4 fn_003151b0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 unaff_r11;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar9 = *param_1;
  iVar3 = fn_006bd32c(*(undefined4 *)(DAT_00892460 + 0x14));
  if (0 < iVar3) {
    unaff_r11 = 0x6aa6e2c2;
  }
  iVar8 = 0;
  if (0 < iVar3) {
    do {
      puVar4 = (uint *)fn_002faa38(*(undefined4 *)(DAT_00892460 + 0x14),iVar8);
      uVar5 = *puVar4;
      if ((uVar5 != 0) && (puVar4[1] == uVar9)) {
        uVar1 = puVar4[2];
        uVar2 = puVar4[3];
        local_34 = puVar4[1];
        local_30 = (uint)*(byte *)((int)puVar4 + 9);
        local_2c = (int)*(short *)((int)puVar4 + 10);
        local_38 = uVar5;
        uVar6 = fn_005f5c50(unaff_r11,&local_38,0x10);
        if (((((uint)(byte)uVar1 << ((uVar5 & 1) << 3) & 0xffff) +
              ((uint)(byte)uVar2 << ((~uVar5 & 1) << 3)) & 0xffff) != uVar6 >> 0x10) ||
           (((2 < *(byte *)((int)puVar4 + 9) || (*(short *)((int)puVar4 + 10) < 0)) ||
            (iVar7 = fn_0020ad98(), iVar7 < *(short *)((int)puVar4 + 10))))) {
          return 1;
        }
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 < iVar3);
  }
  return 0;
}


