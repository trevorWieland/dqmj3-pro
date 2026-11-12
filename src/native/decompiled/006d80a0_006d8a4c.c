#include "006d80a0_006d8a4c.h"



undefined4 fn_006d8a4c(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = 0;
  if (*param_2 != 0) {
    iVar1 = param_2[1];
  }
  if (*param_2 != 0 && iVar1 != 0) {
    for (piVar2 = *(int **)(param_1 + 8); piVar2 != (int *)(param_1 + 4); piVar2 = (int *)piVar2[1])
    {
      if (piVar2 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}



undefined4 fn_006d8a04(int *param_1)

{
  undefined4 uVar1;
  
  if (((*param_1 == 0x6498ab32) && ((char)param_1[1] == '\x01' || (char)param_1[1] == '\x02')) &&
     (param_1[0x16e] - 0xcU < 0x5ab)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_006d89ec(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00656680(*(undefined4 *)(param_1 + 0x5c0));
  if (iVar1 < 2) {
    iVar1 = 1;
  }
  return iVar1;
}



undefined4 fn_006d897c(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    fn_004edc70(iVar1);
    return 0;
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
    fn_004edc70(iVar1);
    return 1;
  }
}



undefined4 fn_006d88c8(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    fn_004edc70(iVar1);
    return 0;
  case 1:
  case 4:
    fn_004edc70(iVar1);
    return 1;
  case 2:
  case 5:
    fn_004edc70(iVar1);
    return 3;
  case 3:
  case 6:
    fn_004edc70(iVar1);
    return 4;
  case 7:
    fn_004edc70(iVar1);
    return 2;
  case 8:
    fn_004edc70(iVar1);
    return 5;
  }
}



undefined4 fn_006d8868(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    fn_004edc70(iVar1);
    return 0;
  case 1:
  case 2:
  case 3:
    fn_004edc70(iVar1);
    return 1;
  }
}



undefined4 fn_006d87fc(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008bf49c + 0x3c;
  fn_004edc34(iVar1);
  switch(*(undefined1 *)(param_1 + 4)) {
  default:
    fn_004edc70(iVar1);
    return 0;
  case 4:
  case 5:
  case 6:
    fn_004edc70(iVar1);
    return 1;
  }
}



undefined4 fn_006d80a0(int param_1,int param_2,undefined4 *param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  undefined4 extraout_r1_03;
  undefined4 extraout_r1_04;
  undefined4 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  uint local_20;
  
  bVar7 = param_2 - 0x100000U < 0x3ff00000;
  uVar1 = 0xe0e14826;
  puVar2 = param_3;
  if (bVar7) {
    puVar2 = param_3 + -0x40000;
  }
  if ((bVar7 && puVar2 < (undefined4 *)0x3ff00000) && (0x3d0 < param_4)) {
    local_20 = param_4;
    fn_006d7248(param_1,param_2,&local_20);
    iVar3 = param_2 + local_20;
    fn_004ed514(iVar3,*(undefined4 *)(param_1 + 0x10));
    fn_004ed514(iVar3 + 4,*(undefined4 *)(param_1 + 0x14));
    fn_004ed514(iVar3 + 8,*(undefined4 *)(param_1 + 0x18));
    fn_004ed514(iVar3 + 0xc,*(undefined4 *)(param_1 + 0x1c));
    puVar4 = (undefined1 *)(iVar3 + 0x10);
    uVar6 = 0;
    do {
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x20));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x60));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    uVar1 = extraout_r1;
    do {
      iVar3 = param_1 + uVar6 * 8;
      fn_004ed534(puVar4,uVar1,*(undefined4 *)(iVar3 + 0xa0),*(undefined4 *)(iVar3 + 0xa4));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 8;
      uVar1 = extraout_r1_00;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x120));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x160));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    uVar1 = extraout_r1_01;
    do {
      iVar3 = param_1 + uVar6 * 8;
      fn_004ed534(puVar4,uVar1,*(undefined4 *)(iVar3 + 0x1a0),*(undefined4 *)(iVar3 + 0x1a4));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 8;
      uVar1 = extraout_r1_02;
    } while (uVar6 < 0x10);
    uVar6 = 0;
    do {
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x220));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (uVar6 < 0x17);
    uVar6 = 0;
    do {
      *puVar4 = *(undefined1 *)(param_1 + uVar6 + 0x27c);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 < 0x17);
    uVar6 = 0;
    do {
      fn_004ed504(puVar4,*(undefined2 *)(param_1 + uVar6 * 2 + 0x294));
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 2;
    } while (uVar6 < 0x17);
    uVar6 = 0;
    do {
      puVar5 = puVar4;
      fn_004ed504(puVar5,*(undefined2 *)(param_1 + uVar6 * 2 + 0x2c2));
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 2;
    } while (uVar6 < 0x17);
    puVar5[2] = *(undefined1 *)(param_1 + 0x2f0);
    puVar5[3] = *(undefined1 *)(param_1 + 0x2f1);
    fn_004ed504(puVar5 + 4,*(undefined2 *)(param_1 + 0x2f2));
    fn_004ed514(puVar5 + 6,*(undefined4 *)(param_1 + 0x2f4));
    fn_004ed504(puVar5 + 10,*(undefined2 *)(param_1 + 0x2f8));
    fn_004ed514(puVar5 + 0xc,*(undefined4 *)(param_1 + 0x2fc));
    fn_004ed514(puVar5 + 0x10,*(undefined4 *)(param_1 + 0x300));
    fn_004ed514(puVar5 + 0x14,*(undefined4 *)(param_1 + 0x304));
    puVar5 = puVar5 + 0x18;
    uVar6 = 0;
    do {
      fn_004ed514(puVar5,*(undefined4 *)(param_1 + uVar6 * 4 + 0x308));
      uVar6 = uVar6 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar6 < 4);
    uVar6 = 0;
    do {
      puVar4 = puVar5;
      fn_004ed514(puVar4,*(undefined4 *)(param_1 + uVar6 * 4 + 0x318));
      uVar6 = uVar6 + 1;
      puVar5 = puVar4 + 4;
    } while (uVar6 < 4);
    fn_004ed514(puVar4 + 4,*(undefined4 *)(param_1 + 0x328));
    fn_004ed514(puVar4 + 8,*(undefined4 *)(param_1 + 0x32c));
    puVar4[0xc] = *(undefined1 *)(param_1 + 0x330);
    fn_004ed514(puVar4 + 0xd,*(undefined4 *)(param_1 + 0x334));
    puVar4[0x11] = *(undefined1 *)(param_1 + 0x338);
    puVar4[0x12] = *(undefined1 *)(param_1 + 0x339);
    fn_004ed514(puVar4 + 0x13,*(undefined4 *)(param_1 + 0x33c));
    fn_004ed514(puVar4 + 0x17,*(undefined4 *)(param_1 + 0x340));
    fn_004ed504(puVar4 + 0x1b,*(undefined2 *)(param_1 + 0x344));
    fn_004ed504(puVar4 + 0x1d,*(undefined2 *)(param_1 + 0x346));
    fn_004ed514(puVar4 + 0x1f,*(undefined4 *)(param_1 + 0x348));
    puVar4[0x23] = *(undefined1 *)(param_1 + 0x34c);
    puVar4[0x24] = *(undefined1 *)(param_1 + 0x34d);
    puVar4[0x25] = *(undefined1 *)(param_1 + 0x34e);
    puVar4[0x26] = *(undefined1 *)(param_1 + 0x34f);
    puVar4[0x27] = *(undefined1 *)(param_1 + 0x350);
    puVar4[0x28] = *(undefined1 *)(param_1 + 0x351);
    fn_004ed514(puVar4 + 0x29,*(undefined4 *)(param_1 + 0x354));
    puVar4[0x2d] = *(undefined1 *)(param_1 + 0x358);
    fn_004ed514(puVar4 + 0x2e,*(undefined4 *)(param_1 + 0x35c));
    puVar4[0x32] = *(undefined1 *)(param_1 + 0x360);
    puVar4[0x33] = *(undefined1 *)(param_1 + 0x361);
    fn_004ed514(puVar4 + 0x34,*(undefined4 *)(param_1 + 0x364));
    fn_004ed514(puVar4 + 0x38,*(undefined4 *)(param_1 + 0x368));
    puVar4 = puVar4 + 0x3c;
    uVar6 = 0;
    do {
      *puVar4 = *(undefined1 *)(param_1 + uVar6 + 0x36c);
      uVar6 = uVar6 + 1;
      puVar4 = puVar4 + 1;
    } while (uVar6 < 4);
    uVar6 = 0;
    do {
      puVar5 = puVar4;
      *puVar5 = *(undefined1 *)(param_1 + uVar6 + 0x370);
      uVar6 = uVar6 + 1;
      puVar4 = puVar5 + 1;
    } while (uVar6 < 5);
    fn_004ed514(puVar5 + 1,*(undefined4 *)(param_1 + 0x378));
    fn_004ed504(puVar5 + 5,*(undefined2 *)(param_1 + 0x37c));
    puVar5[7] = *(undefined1 *)(param_1 + 0x37e);
    fn_004ed514(puVar5 + 8,*(undefined4 *)(param_1 + 0x380));
    fn_004ed514(puVar5 + 0xc,*(undefined4 *)(param_1 + 900));
    fn_004ed504(puVar5 + 0x10,*(undefined2 *)(param_1 + 0x388));
    puVar5[0x12] = *(undefined1 *)(param_1 + 0x38a);
    fn_004ed504(puVar5 + 0x13,*(undefined2 *)(param_1 + 0x38c));
    fn_004ed504(puVar5 + 0x15,*(undefined2 *)(param_1 + 0x38e));
    fn_004ed514(puVar5 + 0x17,*(undefined4 *)(param_1 + 0x390));
    fn_004ed504(puVar5 + 0x1b,*(undefined2 *)(param_1 + 0x394));
    fn_004ed504(puVar5 + 0x1d,*(undefined2 *)(param_1 + 0x396));
    puVar5[0x1f] = *(undefined1 *)(param_1 + 0x398);
    fn_004ed514(puVar5 + 0x20,*(undefined4 *)(param_1 + 0x39c));
    fn_004ed514(puVar5 + 0x24,*(undefined4 *)(param_1 + 0x3a0));
    fn_004ed514(puVar5 + 0x28,*(undefined4 *)(param_1 + 0x3a4));
    fn_004ed514(puVar5 + 0x2c,*(undefined4 *)(param_1 + 0x3a8));
    fn_004ed534(puVar5 + 0x30,extraout_r1_03,*(undefined4 *)(param_1 + 0x3b0),
                 *(undefined4 *)(param_1 + 0x3b4));
    fn_004ed534(puVar5 + 0x38,extraout_r1_04,*(undefined4 *)(param_1 + 0x3b8),
                 *(undefined4 *)(param_1 + 0x3bc));
    puVar5[0x40] = *(undefined1 *)(param_1 + 0x3c0);
    puVar5[0x41] = *(undefined1 *)(param_1 + 0x3c1);
    puVar5[0x42] = *(undefined1 *)(param_1 + 0x3c2);
    puVar5[0x43] = *(undefined1 *)(param_1 + 0x3c3);
    fn_004ed514(puVar5 + 0x44,*(undefined4 *)(param_1 + 0x3c4));
    puVar5[0x48] = *(undefined1 *)(param_1 + 0x3c8);
    puVar5[0x49] = *(undefined1 *)(param_1 + 0x3c9);
    puVar5[0x4a] = *(undefined1 *)(param_1 + 0x3ca);
    puVar5[0x4b] = *(undefined1 *)(param_1 + 0x3cb);
    puVar5[0x4c] = *(undefined1 *)(param_1 + 0x3cc);
    puVar5[0x4d] = *(undefined1 *)(param_1 + 0x3cd);
    fn_004ed514(puVar5 + 0x4e,*(undefined4 *)(param_1 + 0x3d0));
    puVar5[0x52] = *(undefined1 *)(param_1 + 0x3d4);
    puVar5[0x53] = *(undefined1 *)(param_1 + 0x3d5);
    puVar5[0x54] = *(undefined1 *)(param_1 + 0x3d6);
    puVar5[0x55] = *(undefined1 *)(param_1 + 0x3d7);
    puVar5[0x56] = *(undefined1 *)(param_1 + 0x3d8);
    puVar5[0x57] = *(undefined1 *)(param_1 + 0x3d9);
    fn_004ed504(puVar5 + 0x58,*(undefined2 *)(param_1 + 0x3da));
    fn_004ed504(puVar5 + 0x5a,*(undefined2 *)(param_1 + 0x3dc));
    iVar3 = 0;
    puVar4 = puVar5 + 0x5c;
    do {
      puVar5 = puVar4;
      *puVar5 = *(undefined1 *)(param_1 + iVar3 + 0x3de);
      iVar3 = iVar3 + 1;
      puVar4 = puVar5 + 1;
    } while (iVar3 < 0xc);
    fn_004ed514(puVar5 + 1,*(undefined4 *)(param_1 + 0x3ec));
    *param_3 = puVar5 + (5 - param_2);
    uVar1 = 0;
  }
  return uVar1;
}


