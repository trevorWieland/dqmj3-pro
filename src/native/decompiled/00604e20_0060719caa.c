#include "00604e20_0060719caa.h"



void fn_006055dc(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  if (param_3 != 0) {
    uVar1 = fn_0022f584(param_3,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
  }
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 * fn_00604e20(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_30;
  uint local_2c [4];
  
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0043f144(iVar1,param_1);
  *puVar2 = &DAT_0084f3e4;
  uVar3 = fn_00100b58(&DAT_006050dc);
  if (uVar3 == 0) {
    puVar4 = &DAT_008f9cf4;
  }
  else {
    puVar8 = local_2c + 1;
    if (0x20 < uVar3) {
      puVar8 = local_2c;
    }
    local_2c[0] = uVar3;
    local_2c[1] = 0x20;
    uVar14 = *puVar8;
    if (0xfffffff1 < uVar14) {
      local_30 = 0xfffffff1;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar14);
    }
    if (uVar14 < uVar3) {
      local_30 = uVar14;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3);
    }
    if (uVar14 == 0) {
      puVar4 = &DAT_008f9ce8;
    }
    else {
      puVar4 = (undefined4 *)fn_00100fc6((uVar14 + 8) * 2,0);
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4[2] = 0;
      }
      puVar4[2] = uVar3;
      puVar9 = (undefined2 *)((int)puVar4 + uVar3 * 2 + 0xc);
      *puVar4 = 0;
      puVar4[1] = uVar14;
      if (puVar9 != (undefined2 *)0x0) {
        *puVar9 = 0;
      }
    }
    puVar4 = puVar4 + 3;
  }
  puVar2[4] = puVar4;
  fn_00301a9c(puVar4,&DAT_006050dc,uVar3 << 1);
  puVar8 = puVar2 + 5;
  *puVar8 = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  *(undefined1 *)(puVar2 + 9) = 0;
  local_30 = 0x14;
  uVar3 = (int)(puVar2[6] - *puVar8) >> 2;
  local_2c[0] = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
  if (local_2c[0] < uVar3 + 0x20) {
    local_2c[0] = uVar3 + 0x20;
  }
  puVar5 = local_2c;
  if (local_2c[0] < 0x15) {
    puVar5 = &local_30;
  }
  uVar3 = *puVar5;
  puVar6 = (undefined4 *)fn_00100fc6(uVar3 << 2,0);
  puVar10 = puVar6;
  for (puVar4 = (undefined4 *)*puVar8; puVar4 != (undefined4 *)0x0; puVar4 = puVar4 + 1) {
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = *puVar4;
    }
    puVar10 = puVar10 + 1;
  }
  iVar1 = 0x14;
  puVar4 = (undefined4 *)((-*puVar8 & 0xfffffffc) + (int)puVar6);
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0;
    }
    iVar1 = iVar1 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar1 != 0);
  puVar12 = (undefined4 *)puVar2[6];
  puVar4 = (undefined4 *)0x0;
  puVar10 = puVar6 + ((int)-*puVar8 >> 2) + 0x14;
  if (puVar12 != (undefined4 *)0x0) {
    do {
      if (puVar10 != (undefined4 *)0x0) {
        *puVar10 = *puVar4;
      }
      puVar4 = puVar4 + 1;
      puVar10 = puVar10 + 1;
    } while (puVar4 != puVar12);
  }
  uVar11 = puVar2[6];
  uVar13 = *puVar8;
  uVar14 = uVar13;
  if (uVar11 <= uVar13) {
    for (; uVar14 != uVar11; uVar14 = uVar14 + 4) {
    }
  }
  fn_001008c4(uVar13,(int)(puVar2[7] - uVar13) >> 2,0);
  puVar2[7] = puVar6 + uVar3;
  puVar2[6] = puVar6 + ((int)(uVar11 - uVar13) >> 2) + 0x14;
  *puVar8 = (uint)puVar6;
  puVar2[8] = 0;
  iVar1 = 0;
  do {
    iVar7 = iVar1 + 1;
    *(undefined4 *)(*puVar8 + iVar1 * 4) = 0;
    iVar1 = iVar7;
  } while (iVar7 < 0x14);
  return puVar2;
}


