#include "single_0054e7a0_r.h"


extern undefined4 SUB_00040080;

uint * fn_0054e7a0(int param_1,uint *param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  bool bVar12;
  uint local_30 [3];
  
  bVar12 = *(char *)(param_1 + 0x30) == '\0';
  local_30[0] = *(ushort *)(param_3 + 0x76) & 3;
  puVar9 = local_30;
  if (3 < local_30[0]) {
    puVar9 = local_30 + 1;
  }
  local_30[1] = 3;
  uVar11 = *puVar9;
  if ((*(byte *)(param_3 + 0x7c) & 8) == 0) {
    if (uVar11 != 0) {
      puVar9 = *(uint **)(param_3 + 0x78);
    }
    uVar7 = 0;
    uVar4 = 0;
    if (uVar11 != 0) {
      do {
        uVar3 = uVar4 + 1;
        uVar7 = uVar7 | ((puVar9[uVar4 * 8 + 2] & 0x3ffff) >> 0x10) << ((uVar4 & 0x7f) << 1);
        uVar4 = uVar3;
      } while (uVar3 < uVar11);
    }
    *(short *)(param_3 + 0x6a) = (short)(uVar7 << 1);
  }
  bVar2 = false;
  uVar7 = 0;
  uVar4 = 0;
  if (uVar11 != 0) {
    do {
      iVar8 = param_1 + uVar4 * 0x20;
      iVar10 = *(int *)(param_3 + 0x78) + uVar4 * 0x20;
      uVar7 = uVar7 | 1 << (uVar4 & 0xff);
      if ((*(uint *)(iVar8 + 0x634) != *(uint *)(iVar10 + 0xc) >> 3) ||
         (*(int *)(iVar8 + 0x644) != *(int *)(iVar10 + 0x14))) {
        bVar2 = true;
        *(undefined4 *)(iVar8 + 0x62c) = *(undefined4 *)(iVar10 + 0x18);
        *(uint *)(iVar8 + 0x634) = *(uint *)(iVar10 + 0xc) >> 3;
        *(undefined4 *)(iVar8 + 0x63c) = *(undefined4 *)(iVar10 + 0x1c);
        *(undefined4 *)(iVar8 + 0x644) = *(undefined4 *)(iVar10 + 0x14);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar11);
  }
  if (bVar12 || bVar2) {
    puVar5 = (undefined4 *)fn_0054de6c(param_1);
    *puVar5 = 0;
    puVar5[1] = &DAT_00200080;
    puVar5[2] = 0;
    param_2 = puVar5 + 4;
    puVar5[3] = 0;
  }
  puVar9 = param_2;
  if (bVar12) {
    *param_2 = uVar7 << 8;
    param_2[1] = 0x2006f;
    puVar9 = param_2 + 4;
    param_2[2] = uVar7 | 0x11000;
    param_2[3] = 0xb0080;
  }
  puVar6 = puVar9;
  if (bVar12 || bVar2) {
    puVar6 = puVar9 + 2;
    *puVar9 = uVar7 | 0x11000;
    puVar9[1] = (uint)&SUB_00040080;
  }
  if (bVar2) {
    fn_0017821c(puVar6,param_1 + 0x62c,uVar11 * 0x20);
    puVar6 = puVar6 + uVar11 * 8;
  }
  uVar1 = *(ushort *)(param_3 + 0x6a);
  if ((uint)*(ushort *)(param_1 + 0x628) != (uint)uVar1) {
    *puVar6 = uVar1 | 0x7fff0000;
    puVar6[1] = 0xf02b0;
    puVar6 = puVar6 + 2;
    *(ushort *)(param_1 + 0x628) = uVar1;
  }
  return puVar6;
}


