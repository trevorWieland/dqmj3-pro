#include "006d74bc_006d74bc.h"



undefined4 fn_006d74bc(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  bool bVar7;
  uint local_20;
  
  bVar7 = param_2 - 0x100000U < 0x3ff00000;
  uVar1 = 0xe0e14826;
  puVar2 = param_3;
  if (bVar7) {
    puVar2 = param_3 + -0x40000;
  }
  if ((bVar7 && puVar2 < (undefined4 *)0x3ff00000) && (0x485 < param_4)) {
    local_20 = param_4;
    fn_006d7248(param_1,param_2,&local_20);
    iVar3 = param_2 + local_20;
    fn_004ed514(iVar3,*(undefined4 *)(param_1 + 0x10));
    fn_004ed514(iVar3 + 4,*(undefined4 *)(param_1 + 0x14));
    fn_004ed514(iVar3 + 8,*(undefined4 *)(param_1 + 0x18));
    *(undefined1 *)(iVar3 + 0xc) = *(undefined1 *)(param_1 + 0x1c);
    *(undefined1 *)(iVar3 + 0xd) = *(undefined1 *)(param_1 + 0x1d);
    *(undefined1 *)(iVar3 + 0xe) = *(undefined1 *)(param_1 + 0x1e);
    *(undefined1 *)(iVar3 + 0xf) = *(undefined1 *)(param_1 + 0x1f);
    fn_004ed514(iVar3 + 0x10,*(undefined4 *)(param_1 + 0x20));
    fn_004ed514(iVar3 + 0x14,*(undefined4 *)(param_1 + 0x24));
    fn_004ed514(iVar3 + 0x18,*(undefined4 *)(param_1 + 0x28));
    *(undefined1 *)(iVar3 + 0x1c) = *(undefined1 *)(param_1 + 0x2c);
    fn_004ed514(iVar3 + 0x1d,*(undefined4 *)(param_1 + 0x30));
    fn_004ed514(iVar3 + 0x21,*(undefined4 *)(param_1 + 0x34));
    *(undefined1 *)(iVar3 + 0x25) = *(undefined1 *)(param_1 + 0x38);
    *(undefined1 *)(iVar3 + 0x26) = *(undefined1 *)(param_1 + 0x39);
    fn_004ed514(iVar3 + 0x27,*(undefined4 *)(param_1 + 0x3c));
    fn_004ed514(iVar3 + 0x2b,*(undefined4 *)(param_1 + 0x40));
    *(undefined1 *)(iVar3 + 0x2f) = *(undefined1 *)(param_1 + 0x44);
    *(undefined1 *)(iVar3 + 0x30) = *(undefined1 *)(param_1 + 0x45);
    *(undefined1 *)(iVar3 + 0x31) = *(undefined1 *)(param_1 + 0x46);
    *(undefined1 *)(iVar3 + 0x32) = *(undefined1 *)(param_1 + 0x47);
    fn_004ed504(iVar3 + 0x33,*(undefined2 *)(param_1 + 0x48));
    fn_004ed504(iVar3 + 0x35,*(undefined2 *)(param_1 + 0x4a));
    fn_004ed504(iVar3 + 0x37,*(undefined2 *)(param_1 + 0x4c));
    fn_004ed514(iVar3 + 0x39,*(undefined4 *)(param_1 + 0x50));
    fn_004ed514(iVar3 + 0x3d,*(undefined4 *)(param_1 + 0x54));
    fn_004ed514(iVar3 + 0x41,*(undefined4 *)(param_1 + 0x58));
    fn_004ed514(iVar3 + 0x45,*(undefined4 *)(param_1 + 0x5c));
    *(undefined1 *)(iVar3 + 0x49) = *(undefined1 *)(param_1 + 0x60);
    fn_004ed514(iVar3 + 0x4a,*(undefined4 *)(param_1 + 100));
    fn_004ed514(iVar3 + 0x4e,*(undefined4 *)(param_1 + 0x68));
    fn_004ed514(iVar3 + 0x52,*(undefined4 *)(param_1 + 0x6c));
    *(undefined1 *)(iVar3 + 0x56) = *(undefined1 *)(param_1 + 0x70);
    *(undefined1 *)(iVar3 + 0x57) = *(undefined1 *)(param_1 + 0x71);
    fn_004ed504(iVar3 + 0x58,*(undefined2 *)(param_1 + 0x72));
    fn_004ed514(iVar3 + 0x5a,*(undefined4 *)(param_1 + 0x74));
    fn_004ed514(iVar3 + 0x5e,*(undefined4 *)(param_1 + 0x78));
    fn_004ed514(iVar3 + 0x62,*(undefined4 *)(param_1 + 0x7c));
    fn_004ed514(iVar3 + 0x66,*(undefined4 *)(param_1 + 0x80));
    fn_004ed514(iVar3 + 0x6a,*(undefined4 *)(param_1 + 0x84));
    fn_004ed504(iVar3 + 0x6e,*(undefined2 *)(param_1 + 0x88));
    fn_004ed514(iVar3 + 0x70,*(undefined4 *)(param_1 + 0x8c));
    fn_004ed504(iVar3 + 0x74,*(undefined2 *)(param_1 + 0x90));
    fn_004ed514(iVar3 + 0x76,*(undefined4 *)(param_1 + 0x94));
    fn_004ed504(iVar3 + 0x7a,*(undefined2 *)(param_1 + 0x98));
    fn_004ed504(iVar3 + 0x7c,*(undefined2 *)(param_1 + 0x9a));
    fn_004ed504(iVar3 + 0x7e,*(undefined2 *)(param_1 + 0x9c));
    fn_004ed514(iVar3 + 0x80,*(undefined4 *)(param_1 + 0xa0));
    *(undefined1 *)(iVar3 + 0x84) = *(undefined1 *)(param_1 + 0xa4);
    *(undefined1 *)(iVar3 + 0x85) = *(undefined1 *)(param_1 + 0xa5);
    *(undefined1 *)(iVar3 + 0x86) = *(undefined1 *)(param_1 + 0xa6);
    fn_004ed514(iVar3 + 0x87,*(undefined4 *)(param_1 + 0xa8));
    fn_004ed514(iVar3 + 0x8b,*(undefined4 *)(param_1 + 0xac));
    *(undefined1 *)(iVar3 + 0x8f) = *(undefined1 *)(param_1 + 0xb0);
    uVar4 = 0;
    puVar6 = (undefined1 *)(iVar3 + 0x90);
    do {
      puVar5 = puVar6;
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0xb4));
      uVar4 = uVar4 + 1;
      puVar6 = puVar5 + 4;
    } while (uVar4 < 0x17);
    puVar5[4] = *(undefined1 *)(param_1 + 0x110);
    uVar4 = 0;
    puVar6 = puVar5 + 5;
    do {
      puVar5 = puVar6;
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x114));
      uVar4 = uVar4 + 1;
      puVar6 = puVar5 + 4;
    } while (uVar4 < 0xc);
    fn_004ed504(puVar5 + 4,*(undefined2 *)(param_1 + 0x144));
    puVar5[6] = *(undefined1 *)(param_1 + 0x146);
    puVar5[7] = *(undefined1 *)(param_1 + 0x147);
    fn_004ed514(puVar5 + 8,*(undefined4 *)(param_1 + 0x148));
    fn_004ed504(puVar5 + 0xc,*(undefined2 *)(param_1 + 0x14c));
    fn_004ed504(puVar5 + 0xe,*(undefined2 *)(param_1 + 0x14e));
    fn_004ed504(puVar5 + 0x10,*(undefined2 *)(param_1 + 0x150));
    fn_004ed504(puVar5 + 0x12,*(undefined2 *)(param_1 + 0x152));
    fn_004ed504(puVar5 + 0x14,*(undefined2 *)(param_1 + 0x154));
    fn_004ed504(puVar5 + 0x16,*(undefined2 *)(param_1 + 0x156));
    fn_004ed504(puVar5 + 0x18,*(undefined2 *)(param_1 + 0x158));
    fn_004ed504(puVar5 + 0x1a,*(undefined2 *)(param_1 + 0x15a));
    puVar5[0x1c] = *(undefined1 *)(param_1 + 0x15c);
    fn_004ed504(puVar5 + 0x1d,*(undefined2 *)(param_1 + 0x15e));
    fn_004ed504(puVar5 + 0x1f,*(undefined2 *)(param_1 + 0x160));
    fn_004ed504(puVar5 + 0x21,*(undefined2 *)(param_1 + 0x162));
    puVar5[0x23] = *(undefined1 *)(param_1 + 0x164);
    fn_004ed514(puVar5 + 0x24,*(undefined4 *)(param_1 + 0x168));
    puVar5[0x28] = *(undefined1 *)(param_1 + 0x16c);
    puVar5[0x29] = *(undefined1 *)(param_1 + 0x16d);
    puVar5[0x2a] = *(undefined1 *)(param_1 + 0x16e);
    puVar5[0x2b] = *(undefined1 *)(param_1 + 0x16f);
    fn_004ed514(puVar5 + 0x2c,*(undefined4 *)(param_1 + 0x170));
    fn_004ed514(puVar5 + 0x30,*(undefined4 *)(param_1 + 0x174));
    fn_004ed514(puVar5 + 0x34,*(undefined4 *)(param_1 + 0x178));
    puVar5[0x38] = *(undefined1 *)(param_1 + 0x17c);
    puVar5[0x39] = *(undefined1 *)(param_1 + 0x17d);
    fn_004ed514(puVar5 + 0x3a,*(undefined4 *)(param_1 + 0x180));
    fn_004ed514(puVar5 + 0x3e,*(undefined4 *)(param_1 + 0x184));
    iVar3 = 0;
    puVar6 = puVar5 + 0x42;
    do {
      puVar5 = puVar6;
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + iVar3 * 4 + 0x188));
      iVar3 = iVar3 + 1;
      puVar6 = puVar5 + 4;
    } while (iVar3 < 6);
    fn_004ed504(puVar5 + 4,*(undefined2 *)(param_1 + 0x1a0));
    fn_004ed514(puVar5 + 6,*(undefined4 *)(param_1 + 0x1a4));
    puVar5[10] = *(undefined1 *)(param_1 + 0x1a8);
    puVar5[0xb] = *(undefined1 *)(param_1 + 0x1a9);
    puVar5[0xc] = *(undefined1 *)(param_1 + 0x1aa);
    puVar5[0xd] = *(undefined1 *)(param_1 + 0x1ab);
    puVar5 = puVar5 + 0xe;
    iVar3 = 0;
    do {
      *puVar5 = *(undefined1 *)(param_1 + iVar3 + 0x1ac);
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 1;
    } while (iVar3 < 6);
    iVar3 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + iVar3 * 4 + 0x1b4));
      iVar3 = iVar3 + 1;
      puVar5 = puVar5 + 4;
    } while (iVar3 < 6);
    iVar3 = 0;
    do {
      puVar6 = puVar5;
      fn_004ed514(puVar6,*(undefined4 *)(param_1 + iVar3 * 4 + 0x1cc));
      iVar3 = iVar3 + 1;
      puVar5 = puVar6 + 4;
    } while (iVar3 < 6);
    puVar6[4] = *(undefined1 *)(param_1 + 0x1e4);
    puVar6[5] = *(undefined1 *)(param_1 + 0x1e5);
    puVar6[6] = *(undefined1 *)(param_1 + 0x1e6);
    fn_004ed514(puVar6 + 7,*(undefined4 *)(param_1 + 0x1e8));
    puVar6[0xb] = *(undefined1 *)(param_1 + 0x1ec);
    puVar6[0xc] = *(undefined1 *)(param_1 + 0x1ed);
    puVar6[0xd] = *(undefined1 *)(param_1 + 0x1ee);
    puVar6[0xe] = *(undefined1 *)(param_1 + 0x1ef);
    puVar6 = puVar6 + 0xf;
    iVar3 = 0;
    do {
      *puVar6 = *(undefined1 *)(param_1 + iVar3 + 0x1f0);
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 1;
    } while (iVar3 < 6);
    iVar3 = 0;
    do {
      fn_004ed514(puVar6,*(undefined4 *)(param_1 + iVar3 * 4 + 0x1f8));
      iVar3 = iVar3 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar3 < 6);
    iVar3 = 0;
    do {
      puVar5 = puVar6;
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + iVar3 * 4 + 0x210));
      iVar3 = iVar3 + 1;
      puVar6 = puVar5 + 4;
    } while (iVar3 < 6);
    puVar5[4] = *(undefined1 *)(param_1 + 0x228);
    puVar5[5] = *(undefined1 *)(param_1 + 0x229);
    puVar5[6] = *(undefined1 *)(param_1 + 0x22a);
    puVar5[7] = *(undefined1 *)(param_1 + 0x22b);
    puVar5[8] = *(undefined1 *)(param_1 + 0x22c);
    puVar5[9] = *(undefined1 *)(param_1 + 0x22d);
    fn_004ed514(puVar5 + 10,*(undefined4 *)(param_1 + 0x230));
    fn_004ed514(puVar5 + 0xe,*(undefined4 *)(param_1 + 0x234));
    fn_004ed514(puVar5 + 0x12,*(undefined4 *)(param_1 + 0x238));
    puVar5[0x16] = *(undefined1 *)(param_1 + 0x23c);
    puVar5[0x17] = *(undefined1 *)(param_1 + 0x23d);
    fn_004ed514(puVar5 + 0x18,*(undefined4 *)(param_1 + 0x240));
    fn_004ed514(puVar5 + 0x1c,*(undefined4 *)(param_1 + 0x244));
    fn_004ed514(puVar5 + 0x20,*(undefined4 *)(param_1 + 0x248));
    puVar5[0x24] = *(undefined1 *)(param_1 + 0x24c);
    puVar5[0x25] = *(undefined1 *)(param_1 + 0x24d);
    puVar5[0x26] = *(undefined1 *)(param_1 + 0x24e);
    puVar5[0x27] = *(undefined1 *)(param_1 + 0x24f);
    puVar5[0x28] = *(undefined1 *)(param_1 + 0x250);
    puVar5[0x29] = *(undefined1 *)(param_1 + 0x251);
    puVar5[0x2a] = *(undefined1 *)(param_1 + 0x252);
    puVar5[0x2b] = *(undefined1 *)(param_1 + 0x253);
    fn_004ed514(puVar5 + 0x2c,*(undefined4 *)(param_1 + 0x254));
    fn_004ed514(puVar5 + 0x30,*(undefined4 *)(param_1 + 600));
    puVar5[0x34] = *(undefined1 *)(param_1 + 0x25c);
    puVar5[0x35] = *(undefined1 *)(param_1 + 0x25d);
    puVar5[0x36] = *(undefined1 *)(param_1 + 0x25e);
    puVar5[0x37] = *(undefined1 *)(param_1 + 0x25f);
    puVar5[0x38] = *(undefined1 *)(param_1 + 0x260);
    puVar5[0x39] = *(undefined1 *)(param_1 + 0x261);
    fn_004ed504(puVar5 + 0x3a,*(undefined2 *)(param_1 + 0x262));
    fn_004ed504(puVar5 + 0x3c,*(undefined2 *)(param_1 + 0x264));
    fn_004ed514(puVar5 + 0x3e,*(undefined4 *)(param_1 + 0x268));
    fn_004ed514(puVar5 + 0x42,*(undefined4 *)(param_1 + 0x26c));
    fn_004ed504(puVar5 + 0x46,*(undefined2 *)(param_1 + 0x270));
    fn_004ed504(puVar5 + 0x48,*(undefined2 *)(param_1 + 0x272));
    puVar5 = puVar5 + 0x4a;
    uVar4 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x274));
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x2d0));
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x32c));
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x388));
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar4 * 4 + 0x3e4));
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      *puVar5 = *(undefined1 *)(param_1 + uVar4 + 0x440);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      *puVar5 = *(undefined1 *)(param_1 + uVar4 + 0x457);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      *puVar5 = *(undefined1 *)(param_1 + uVar4 + 0x46e);
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 1;
    } while (uVar4 < 0x17);
    uVar4 = 0;
    do {
      puVar6 = puVar5;
      *puVar6 = *(undefined1 *)(param_1 + uVar4 + 0x485);
      uVar4 = uVar4 + 1;
      puVar5 = puVar6 + 1;
    } while (uVar4 < 0x17);
    puVar6[1] = *(undefined1 *)(param_1 + 0x49c);
    puVar6[2] = *(undefined1 *)(param_1 + 0x49d);
    fn_004ed504(puVar6 + 3,*(undefined2 *)(param_1 + 0x49e));
    fn_004ed504(puVar6 + 5,*(undefined2 *)(param_1 + 0x4a0));
    fn_004ed504(puVar6 + 7,*(undefined2 *)(param_1 + 0x4a2));
    iVar3 = 0;
    puVar6 = puVar6 + 9;
    do {
      puVar5 = puVar6;
      *puVar5 = *(undefined1 *)(param_1 + iVar3 + 0x4a4);
      iVar3 = iVar3 + 1;
      puVar6 = puVar5 + 1;
    } while (iVar3 < 8);
    fn_004ed514(puVar5 + 1,*(undefined4 *)(param_1 + 0x4ac));
    *param_3 = puVar5 + (5 - param_2);
    uVar1 = 0;
  }
  return uVar1;
}


