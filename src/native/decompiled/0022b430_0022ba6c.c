#include "0022b430_0022ba6c.h"



void fn_0022ba6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x25c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0022c93c(iVar1,param_1);
  return;
}



void fn_0022b7e8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  byte bVar6;
  
  if (*(int *)(param_1 + 0x84) != param_2) {
    iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x9c) + param_2) * 4 + 0x108);
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe;
    iVar3 = 0;
    iVar1 = param_2 - *(int *)(param_1 + 0x84);
    while( true ) {
      if (iVar1 < 0) {
        iVar5 = -iVar1;
      }
      else {
        iVar5 = iVar1;
      }
      if (iVar5 <= iVar3) break;
      iVar3 = iVar3 + 1;
      iVar5 = *(int *)(param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0x108);
      bVar6 = *(byte *)(iVar5 + 0x44) & 0xfe;
      if (param_2 <= *(int *)(param_1 + 0x84)) {
        bVar6 = bVar6 | 1;
      }
      *(byte *)(iVar5 + 0x44) = bVar6;
      if (iVar1 < 1) {
        iVar5 = *(int *)(param_1 + 0x84) + -1;
      }
      else {
        iVar5 = *(int *)(param_1 + 0x84) + 1;
      }
      *(int *)(param_1 + 0x84) = iVar5;
    }
  }
  iVar3 = *(int *)(param_1 + 0xa8);
  iVar1 = *(int *)(param_1 + (*(int *)(param_1 + 0x84) + *(int *)(param_1 + 0x9c)) * 4 + 0x108);
  uVar2 = *(undefined4 *)(iVar1 + 0x20);
  uVar4 = *(undefined4 *)(iVar1 + 0x24);
  *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(iVar1 + 0x1c);
  *(undefined4 *)(iVar3 + 0x20) = uVar2;
  *(undefined4 *)(iVar3 + 0x24) = uVar4;
  *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
  return;
}



void fn_0022b63c(int param_1,uint param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  
  puVar2 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_0022b690;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0022b690:
  uVar4 = fn_006becc4(*(undefined4 *)(param_1 + 100));
  if ((uVar4 & param_2) != 0) {
    puVar2[0xe] = 0;
    fn_0036c5f4(puVar2,*(undefined4 *)(*(int *)(param_1 + 100) + 0x2c),1,
                 (int)*(char *)(*(int *)(param_1 + 100) + 0x38),1,1,0,0,1);
    fn_006897a8(param_1);
    if (*(char *)(*(int *)(param_1 + 100) + 0x38) == '\0') {
      *(undefined1 *)(param_1 + 0x25a) = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x25a) = 3;
    }
    return;
  }
  if (*(int *)(*(int *)(param_1 + 100) + 0x30) == 0) {
    *(undefined1 *)(*(int *)(param_1 + 100) + 0x1c) = 1;
    fn_006898b8(param_1,0x4b,0);
    uVar1 = 5;
  }
  else {
    if ((*(char *)(*(int *)(param_1 + 100) + 0x3c) != '\0') &&
       (iVar5 = fn_0022b8bc(param_1), iVar5 != 0)) {
      fn_0036c658(puVar2,0);
      fn_0036c13c(puVar2,*(undefined4 *)(*(int *)(param_1 + 100) + 0x40));
      puVar2[0xe] = 0;
      fn_006897a8(param_1);
      *(undefined1 *)(param_1 + 0x25a) = 1;
      return;
    }
    fn_0036c658(puVar2,0);
    fn_0036c13c(puVar2,*(undefined4 *)(*(int *)(param_1 + 100) + 0x30));
    puVar2[0xe] = 0;
    fn_006897a8(param_1);
    uVar1 = 4;
  }
  *(undefined1 *)(param_1 + 0x25a) = uVar1;
  return;
}



undefined4 fn_0022b8bc(int param_1)

{
  uint uVar1;
  uint *puVar2;
  undefined2 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint local_2c [2];
  
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 100) + 0x14);
  uVar1 = fn_00100b58(uVar7);
  puVar8 = &DAT_008f9ce8;
  puVar5 = &DAT_008f9cf4;
  if (uVar1 != 0) {
    puVar2 = local_2c + 1;
    if (0x20 < uVar1) {
      puVar2 = local_2c;
    }
    local_2c[0] = uVar1;
    local_2c[1] = 0x20;
    uVar6 = *puVar2;
    if (0xfffffff1 < uVar6) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar6,0xfffffff1);
    }
    if (uVar6 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar6);
    }
    if (uVar6 != 0) {
      puVar8 = (undefined4 *)fn_00100fc6((uVar6 + 8) * 2,0);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = 0;
      }
      puVar8[2] = uVar1;
      puVar3 = (undefined2 *)((int)puVar8 + uVar1 * 2 + 0xc);
      puVar8[1] = uVar6;
      *puVar8 = 0;
      if (puVar3 != (undefined2 *)0x0) {
        *puVar3 = 0;
      }
    }
    puVar5 = puVar8 + 3;
  }
  fn_00301a9c(puVar5,uVar7,uVar1 << 1);
  if ((uint)puVar5[-1] < (uint)*(byte *)(*(int *)(param_1 + 100) + 0x3d)) {
    if (puVar5 != &DAT_008f9cf4) {
      iVar4 = puVar5[-3];
      if ((iVar4 == -1) || ((puVar5 + -3 != &DAT_008f9ce8 && (puVar5[-3] = iVar4 + -1, iVar4 == 0)))
         ) {
        fn_001008c4(puVar5 + -3,puVar5[-2] + 8,0);
      }
    }
    return 1;
  }
  if (puVar5 != &DAT_008f9cf4) {
    iVar4 = puVar5[-3];
    if ((iVar4 == -1) || ((puVar5 + -3 != &DAT_008f9ce8 && (puVar5[-3] = iVar4 + -1, iVar4 == 0))))
    {
      fn_001008c4(puVar5 + -3,puVar5[-2] + 8,0);
    }
  }
  return 0;
}



void fn_0022b430(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  undefined1 local_18 [12];
  
  iVar2 = *(int *)(param_1 + 0x8c);
  if (iVar2 == 0) {
    iVar6 = *(int *)(param_1 + *(int *)(param_1 + 0x88) * 4 + 0x220);
    *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
    iVar2 = *(int *)(param_1 + 0xb0);
    uVar4 = *(undefined4 *)(iVar6 + 0x20);
    uVar5 = *(undefined4 *)(iVar6 + 0x24);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar6 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = uVar4;
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  else if (iVar2 == 6) {
    iVar6 = *(int *)(param_1 + *(int *)(param_1 + 0x88) * 4 + 0x23c);
    *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe | 1;
    fn_00688ff8(iVar6);
    iVar2 = *(int *)(param_1 + 0xb4);
    *(undefined4 *)(iVar2 + 0x1c) = in_s0;
    *(undefined4 *)(iVar2 + 0x20) = in_s1;
    *(undefined4 *)(iVar2 + 0x24) = in_s2;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    iVar2 = *(int *)(param_1 + 0xb0);
    iVar3 = *(int *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x220);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar5 = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = uVar4;
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  else {
    iVar6 = *(int *)(param_1 + iVar2 * 0x28 + *(int *)(param_1 + 0x88) * 4 + 0x130);
    *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe;
    *(byte *)(*(int *)(param_1 + 0xac) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe | 1;
    fn_00688ff8(iVar6);
    iVar2 = *(int *)(param_1 + 0xac);
    *(undefined4 *)(iVar2 + 0x1c) = in_s0;
    *(undefined4 *)(iVar2 + 0x20) = in_s1;
    *(undefined4 *)(iVar2 + 0x24) = in_s2;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
    iVar2 = *(int *)(param_1 + 0xb0);
    iVar3 = *(int *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x220);
    uVar4 = *(undefined4 *)(iVar3 + 0x20);
    uVar5 = *(undefined4 *)(iVar3 + 0x24);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar3 + 0x1c);
    *(undefined4 *)(iVar2 + 0x20) = uVar4;
    *(undefined4 *)(iVar2 + 0x24) = uVar5;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  }
  fn_00688ff8(iVar6);
  fn_0025e7cc(*(undefined4 *)(param_1 + 0x78),local_18);
  fn_0025e378(*(undefined4 *)(param_1 + 0x78),iVar6 + 0x3c);
  bVar1 = *(int *)(param_1 + 0x8c) < 1;
  if (bVar1) {
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
  }
  else {
    fn_00688ff8(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x90) * 4 + 0x220),extraout_r1);
    fn_0025e7cc(*(undefined4 *)(param_1 + 0x7c),local_18);
    uVar4 = *(undefined4 *)(param_1 + 0x7c);
  }
  fn_0025e31c(uVar4,!bVar1);
  return;
}


