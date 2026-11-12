#include "0012ab74_0012b574.h"



void fn_0012b574(void)

{
  int iVar1;
  
  iVar1 = DAT_008e3104;
  if ((DAT_008e3104 != 0) &&
     ((*(int *)(DAT_008e3104 + 4) != 0 || (*(int *)(DAT_008e3104 + 0x18) != 0)))) {
    fn_00301f50(*(undefined4 *)(DAT_008e3104 + 0x18),*(int *)(DAT_008e3104 + 0x20) * 0x1c);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    DAT_008bf790 = *(int *)(iVar1 + 4);
    DAT_008bf794 = DAT_008bf790 + *(int *)(iVar1 + 8);
  }
  return;
}



void fn_0012b560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_0011b5fc();
  fn_0011b40c();
  iVar1 = DAT_008e3104;
  if ((DAT_008e3104 != 0) &&
     ((*(int *)(DAT_008e3104 + 4) != 0 || (*(int *)(DAT_008e3104 + 0x18) != 0)))) {
    fn_00301f50(*(undefined4 *)(DAT_008e3104 + 0x18),*(int *)(DAT_008e3104 + 0x20) * 0x1c,param_3,
                 param_4,unaff_r4,in_lr);
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x28) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x24) = 0;
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x30) = 0;
    DAT_008bf790 = *(int *)(iVar1 + 4);
    DAT_008bf794 = DAT_008bf790 + *(int *)(iVar1 + 8);
  }
  return;
}



undefined4 fn_0012b234(int param_1)

{
  DAT_0089a51c = param_1;
  fn_00146398();
  fn_00145c50(DAT_0089a51c + 4);
  fn_00157988(DAT_0089a51c + 8);
  fn_00145f58(DAT_0089a51c + 0xc);
  return 0;
}



undefined4 fn_0012b00c(int *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar6 = 0xffffffff;
  DAT_008bfad8 = param_1;
  fn_00301f50(param_1,0x8ac);
  iVar2 = fn_00146f18(0);
  *DAT_008bfad8 = iVar2;
  iVar2 = fn_00146e50(0);
  DAT_008bfad8[1] = iVar2;
  if (DAT_0089a520 == (code *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = (undefined4 *)(*DAT_0089a520)(0x10000,0x100,0,0x9c);
    if (puVar3 != (undefined4 *)0x0) {
      fn_00301f50(puVar3,0x9c);
      *puVar3 = 0;
    }
  }
  piVar1 = DAT_008bfad8;
  DAT_008bfad8[2] = (int)puVar3;
  iVar2 = *piVar1;
  if (iVar2 != 0) {
    if (piVar1[1] != 0 && puVar3 != (undefined4 *)0x0) {
      uVar6 = 0;
      goto LAB_0012b0b0;
    }
    fn_00156f48(iVar2 + 0x34);
    fn_00158318(*(undefined4 *)(iVar2 + 0x2c),iVar2 + 0x34);
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,iVar2);
    }
  }
  iVar2 = DAT_008bfad8[1];
  if (iVar2 != 0) {
    iVar4 = 0;
    do {
      iVar5 = iVar2 + iVar4 * 0x44;
      fn_00156f48(iVar5 + 0x34);
      fn_00158318(*(undefined4 *)(iVar2 + 0x2c),iVar5 + 0x34);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 6);
    if (DAT_0089a524 != (code *)0x0) {
      (*DAT_0089a524)(0x10000,0x100,0,iVar2);
    }
  }
  if (DAT_008bfad8[2] != 0) {
    if (DAT_0089a524 == (code *)0x0) goto LAB_0012b0b0;
    (*DAT_0089a524)(0x10000,0x100,0);
  }
  if (DAT_0089a524 != (code *)0x0) {
    (*DAT_0089a524)(0x10000,0x100,0,DAT_008bfad8);
  }
LAB_0012b0b0:
  DAT_008bfadc = 1;
  fn_00301f50(DAT_008bfad8[2],0x9c);
  return uVar6;
}



undefined4 fn_0012ab74(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  DAT_008bfab0 = param_1;
  fn_00301f50(param_1,0x868);
  iVar1 = DAT_008bfab0;
  *(undefined1 *)(DAT_008bfab0 + 0x18) = 0;
  *(undefined1 *)(iVar1 + 0x19) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 4;
  *(undefined4 *)(iVar1 + 0x14) = 4;
  *(undefined1 *)(iVar1 + 0x1a) = 1;
  *(undefined1 *)(iVar1 + 0x1b) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined1 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined1 *)(iVar1 + 0x3c) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0x901;
  *(undefined4 *)(iVar1 + 0x38) = 0x405;
  uVar11 = 0;
  uVar12 = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x40) = 0;
  *(undefined4 *)(iVar1 + 0x44) = 0;
  *(undefined1 *)(iVar1 + 0x54) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x50) = 0x3f800000;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined1 *)(iVar1 + 0x104) = 0;
  *(undefined1 *)(iVar1 + 0x107) = 0;
  *(undefined4 *)(iVar1 + 0xf8) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  *(undefined1 *)(iVar1 + 0x105) = 0;
  *(undefined1 *)(iVar1 + 0x108) = 0;
  *(undefined4 *)(iVar1 + 0xfc) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined1 *)(iVar1 + 0x106) = 0;
  *(undefined1 *)(iVar1 + 0x109) = 0;
  *(undefined4 *)(iVar1 + 0x100) = 0;
  fn_00301f50(iVar1 + 0x74,0x80);
  iVar1 = DAT_008bfab0;
  iVar2 = 0;
  iVar3 = 0x10;
  *(undefined4 *)(DAT_008bfab0 + 0xf4) = 0;
  do {
    iVar4 = iVar1 + iVar2 * 0x10;
    iVar3 = iVar3 + -1;
    *(undefined4 *)(iVar4 + 0x2a0) = uVar11;
    *(undefined4 *)(iVar4 + 0x2a4) = uVar12;
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar4 + 0x29c) = uVar11;
    *(undefined4 *)(iVar4 + 0x298) = uVar11;
    iVar4 = 0;
  } while (iVar3 != 0);
  do {
    iVar2 = iVar1 + iVar4 * 0x10;
    uVar7 = *(uint *)(iVar2 + 0x298);
    uVar5 = 0;
    if ((uVar7 & 0x7fffffff) != 0) {
      uVar5 = ((uVar7 & 0x7fffffff) >> 0x17) - 0x40;
    }
    bVar6 = -1 < (int)uVar5;
    if (bVar6) {
      uVar5 = (uVar7 & 0x7fffff) >> 7 | uVar5 << 0x10 | (uVar7 >> 0x1f) << 0x17;
    }
    uVar8 = *(uint *)(iVar2 + 0x29c);
    if (!bVar6) {
      uVar5 = (uVar7 >> 0x1f) << 0x17;
    }
    uVar7 = 0;
    if ((uVar8 & 0x7fffffff) != 0) {
      uVar7 = ((uVar8 & 0x7fffffff) >> 0x17) - 0x40;
    }
    bVar6 = -1 < (int)uVar7;
    if (bVar6) {
      uVar7 = (uVar8 & 0x7fffff) >> 7 | uVar7 << 0x10 | (uVar8 >> 0x1f) << 0x17;
    }
    uVar9 = *(uint *)(iVar2 + 0x2a0);
    if (!bVar6) {
      uVar7 = (uVar8 >> 0x1f) << 0x17;
    }
    uVar8 = 0;
    if ((uVar9 & 0x7fffffff) != 0) {
      uVar8 = ((uVar9 & 0x7fffffff) >> 0x17) - 0x40;
    }
    bVar6 = -1 < (int)uVar8;
    if (bVar6) {
      uVar8 = (uVar9 & 0x7fffff) >> 7 | uVar8 << 0x10 | (uVar9 >> 0x1f) << 0x17;
    }
    uVar10 = *(uint *)(iVar2 + 0x2a4);
    if (!bVar6) {
      uVar8 = (uVar9 >> 0x1f) << 0x17;
    }
    uVar9 = 0;
    if ((uVar10 & 0x7fffffff) != 0) {
      uVar9 = ((uVar10 & 0x7fffffff) >> 0x17) - 0x40;
    }
    bVar6 = -1 < (int)uVar9;
    if (bVar6) {
      uVar9 = (uVar10 & 0x7fffff) >> 7 | uVar9 << 0x10;
    }
    if (bVar6) {
      uVar9 = uVar9 | (uVar10 >> 0x1f) << 0x17;
    }
    else {
      uVar9 = (uVar10 >> 0x1f) << 0x17;
    }
    iVar2 = iVar1 + iVar4 * 0xc;
    iVar4 = iVar4 + 1;
    *(uint *)(iVar2 + 0x398) = uVar8 >> 0x10 | uVar9 << 8;
    *(uint *)(iVar2 + 0x39c) = (uVar7 & 0xffffff) >> 8 | uVar8 << 0x10;
    *(uint *)(iVar2 + 0x3a0) = uVar5 | uVar7 << 0x18;
  } while (iVar4 < 0x10);
  iVar2 = 0;
  iVar3 = 0x10;
  do {
    iVar3 = iVar3 + -1;
    iVar4 = iVar1 + iVar2 * 0x18;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar4 + 0x46d) = 0;
    *(undefined4 *)(iVar4 + 0x468) = 0;
    *(undefined4 *)(iVar4 + 0x45c) = 4;
    *(undefined4 *)(iVar4 + 0x460) = 0x1406;
  } while (iVar3 != 0);
  *(undefined4 *)(iVar1 + 0x5d8) = 0;
  *(undefined4 *)(iVar1 + 0x5dc) = 0;
  *(undefined4 *)(iVar1 + 0x5e0) = 0;
  *(undefined1 *)(iVar1 + 0x648) = 0;
  *(undefined4 *)(iVar1 + 0x5e4) = 0;
  *(undefined4 *)(iVar1 + 0x5e8) = 0;
  *(undefined4 *)(iVar1 + 0x5ec) = 0;
  *(undefined4 *)(iVar1 + 0x5f0) = 0;
  *(undefined1 *)(iVar1 + 0x649) = 0;
  *(undefined4 *)(iVar1 + 0x5f4) = 0x207;
  *(undefined4 *)(iVar1 + 0x5f8) = uVar11;
  *(undefined1 *)(iVar1 + 0x64a) = 0;
  *(undefined4 *)(iVar1 + 0x5fc) = 0x207;
  *(undefined4 *)(iVar1 + 0x600) = 0;
  *(undefined4 *)(iVar1 + 0x608) = 0x1e00;
  *(undefined4 *)(iVar1 + 0x604) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x60c) = 0x1e00;
  *(undefined4 *)(iVar1 + 0x610) = 0x1e00;
  *(undefined1 *)(iVar1 + 0x64b) = 0;
  *(undefined4 *)(iVar1 + 0x614) = 0x201;
  *(undefined1 *)(iVar1 + 0x64f) = 0;
  *(undefined4 *)(iVar1 + 0x650) = 0x201;
  *(undefined1 *)(iVar1 + 0x64c) = 0;
  *(undefined4 *)(iVar1 + 0x618) = 1;
  *(undefined4 *)(iVar1 + 0x61c) = 1;
  *(undefined4 *)(iVar1 + 0x620) = 0;
  *(undefined4 *)(iVar1 + 0x624) = 0;
  *(undefined1 *)(iVar1 + 0x64d) = 0;
  *(undefined4 *)(iVar1 + 0x628) = 0x8006;
  *(undefined4 *)(iVar1 + 0x62c) = 0x8006;
  *(undefined4 *)(iVar1 + 0x640) = 0x1503;
  *(undefined4 *)(iVar1 + 0x644) = 0x6030;
  *(undefined4 *)(iVar1 + 0x63c) = uVar11;
  *(undefined4 *)(iVar1 + 0x638) = uVar11;
  *(undefined4 *)(iVar1 + 0x634) = uVar11;
  *(undefined4 *)(iVar1 + 0x630) = uVar11;
  *(undefined1 *)(iVar1 + 0x658) = 1;
  *(undefined4 *)(iVar1 + 0x65c) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x678) = 0;
  *(undefined4 *)(iVar1 + 0x670) = uVar12;
  *(undefined4 *)(iVar1 + 0x67c) = 0xffffff;
  *(undefined4 *)(iVar1 + 0x680) = 0xffff;
  *(undefined4 *)(iVar1 + 0x674) = 0xffffff;
  *(undefined1 *)(iVar1 + 0x657) = 1;
  *(undefined1 *)(iVar1 + 0x656) = 1;
  *(undefined1 *)(iVar1 + 0x655) = 1;
  *(undefined1 *)(iVar1 + 0x654) = 1;
  *(undefined4 *)(iVar1 + 0x66c) = uVar11;
  *(undefined4 *)(iVar1 + 0x668) = uVar11;
  *(undefined4 *)(iVar1 + 0x664) = uVar11;
  *(undefined4 *)(iVar1 + 0x660) = uVar11;
  *(undefined4 *)(iVar1 + 0x684) = 0;
  *(undefined1 *)(iVar1 + 0x690) = 0;
  *(undefined1 *)(iVar1 + 0x691) = 0;
  *(undefined1 *)(iVar1 + 0x692) = 0;
  *(undefined1 *)(iVar1 + 0x693) = 0;
  *(undefined4 *)(iVar1 + 0x698) = 0;
  *(undefined4 *)(iVar1 + 0x69c) = 0;
  *(undefined4 *)(iVar1 + 0x68c) = 3;
  *(undefined4 *)(iVar1 + 0x688) = 0;
  *(undefined4 *)(iVar1 + 0x6a0) = 0;
  *(undefined4 *)(iVar1 + 0x6e8) = 0;
  *(undefined4 *)(iVar1 + 0x6e4) = 0;
  *(undefined4 *)(iVar1 + 0x72c) = 0;
  *(undefined4 *)(iVar1 + 0x730) = 0;
  *(undefined4 *)(iVar1 + 0x734) = 0;
  *(undefined4 *)(iVar1 + 0x738) = 0;
  *(undefined4 *)(iVar1 + 0x73c) = 0;
  *(undefined4 *)(iVar1 + 0x740) = 0;
  *(undefined4 *)(iVar1 + 0x744) = 0;
  *(undefined4 *)(iVar1 + 0x748) = 0;
  *(undefined4 *)(iVar1 + 0x74c) = 0;
  *(undefined4 *)(iVar1 + 0x750) = 0;
  *(undefined4 *)(iVar1 + 0x754) = 0;
  *(undefined4 *)(iVar1 + 0x758) = 0;
  *(undefined4 *)(iVar1 + 0x75c) = 0;
  *(undefined4 *)(iVar1 + 0x760) = 0;
  *(undefined4 *)(iVar1 + 0x764) = 0;
  *(undefined4 *)(iVar1 + 0x768) = 0;
  *(undefined4 *)(iVar1 + 0x6a4) = 0;
  *(undefined4 *)(iVar1 + 0x6a8) = 0;
  *(undefined4 *)(iVar1 + 0x6ac) = 0;
  *(undefined4 *)(iVar1 + 0x6b0) = 0;
  *(undefined4 *)(iVar1 + 0x6b4) = 0;
  *(undefined4 *)(iVar1 + 0x6b8) = 0;
  *(undefined4 *)(iVar1 + 0x6bc) = 0;
  *(undefined4 *)(iVar1 + 0x6c0) = 0;
  *(undefined4 *)(iVar1 + 0x6c4) = 0;
  *(undefined4 *)(iVar1 + 0x6c8) = 0;
  *(undefined4 *)(iVar1 + 0x6cc) = 0;
  *(undefined4 *)(iVar1 + 0x6d0) = 0;
  *(undefined4 *)(iVar1 + 0x6d4) = 0;
  *(undefined4 *)(iVar1 + 0x6d8) = 0;
  *(undefined4 *)(iVar1 + 0x6dc) = 0;
  *(undefined4 *)(iVar1 + 0x6e0) = 0;
  *(undefined4 *)(iVar1 + 0x6ec) = 0;
  *(undefined4 *)(iVar1 + 0x6f0) = 0;
  *(undefined4 *)(iVar1 + 0x6f4) = 0;
  *(undefined4 *)(iVar1 + 0x6f8) = 0;
  *(undefined4 *)(iVar1 + 0x6fc) = 0;
  *(undefined4 *)(iVar1 + 0x700) = 0;
  *(undefined4 *)(iVar1 + 0x704) = 0;
  *(undefined4 *)(iVar1 + 0x708) = 0;
  *(undefined4 *)(iVar1 + 0x70c) = 0;
  *(undefined4 *)(iVar1 + 0x710) = 0;
  *(undefined4 *)(iVar1 + 0x714) = 0;
  *(undefined4 *)(iVar1 + 0x718) = 0;
  *(undefined4 *)(iVar1 + 0x71c) = 0;
  *(undefined4 *)(iVar1 + 0x720) = 0;
  *(undefined4 *)(iVar1 + 0x724) = 0;
  *(undefined4 *)(iVar1 + 0x728) = 0;
  *(undefined4 *)(iVar1 + 0x770) = 0;
  *(undefined1 *)(iVar1 + 0x81c) = 0;
  *(undefined4 *)(iVar1 + 0x820) = 0;
  *(undefined4 *)(iVar1 + 0x824) = 0;
  fn_00158f40(iVar1 + 0x828,0x40,0xff);
  return 0;
}


