#include "0030d8a8_0030dea8.h"



bool fn_0030dea8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + param_2 * 0x2ec + 0x138);
  return iVar1 != 0 && iVar1 != 8;
}



bool fn_0030de78(void)

{
  int iVar1;
  
  iVar1 = fn_0066eb80(DAT_00898840,5);
  return *(int *)(iVar1 + 0x70) == -0x134;
}



undefined4 fn_0030de48(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + param_2 * 0x2ec + 0x138);
  if ((iVar1 == 1 || iVar1 == 3) || (iVar1 == 4)) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void fn_0030de00(undefined4 *param_1)

{
  *param_1 = &DAT_00822244;
  fn_002b183c(*(undefined4 *)(param_1[1] + 0x20));
  if (param_1[0x12] != 0) {
    fn_002feef8(param_1[0x12]);
  }
  fn_001f8010(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0030dd94(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_001f7e18();
  *puVar1 = &DAT_00822244;
  puVar1[0x12] = 0;
  puVar1[0x13] = 0;
  fn_0028e434(puVar1[4],&DAT_007c7f84);
  fn_0028e434(puVar1[5],&DAT_007c831c);
  fn_0028e434(puVar1[3],&DAT_007c88e4);
  fn_0028e434(puVar1[6],&DAT_007c8934);
  return puVar1;
}



void fn_0030dcec(int param_1)

{
  int iVar1;
  int iVar2;
  
  fn_001f7a98();
  if ((*(int *)(param_1 + 0x48) != 0) && (iVar1 = fn_002f9da0(), iVar1 != 0)) {
    iVar2 = fn_006ad87c(param_1,1);
    iVar1 = 0;
    if (iVar2 != 0) {
      iVar1 = *(int *)(param_1 + 0x48);
    }
    if (iVar2 != 0 && iVar1 != 0) {
      fn_002feef8(iVar1);
      *(undefined4 *)(param_1 + 0x48) = 0;
      fn_001f749c(param_1,0,0);
      fn_001f748c(param_1,*(undefined4 *)(param_1 + 0x4c),1);
      fn_001f7438(param_1,0,0);
      fn_001f73a0(param_1,0);
      *(undefined4 *)(param_1 + 0x4c) = 0;
    }
  }
  return;
}



undefined4 * fn_0030d8a8(void)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint local_30;
  uint local_2c [2];
  
  puVar1 = (undefined4 *)fn_001f7350();
  *puVar1 = &DAT_00822230;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  puVar1[0x10] = 0;
  *(undefined1 *)(puVar1 + 0x2b4) = 0;
  *(undefined1 *)((int)puVar1 + 0xad1) = 0;
  *(undefined1 *)((int)puVar1 + 0xad2) = 0;
  *(undefined1 *)((int)puVar1 + 0xad3) = 0;
  local_30 = 0x1e;
  puVar6 = puVar1 + 0xb;
  if ((uint)((int)(puVar1[0xd] - puVar1[0xb]) / 0xa88) < 0x1e) {
    uVar11 = (int)(puVar1[0xc] - puVar1[0xb]) / 0xa88;
    local_2c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_2c[0] < uVar11 + 0x20) {
      local_2c[0] = uVar11 + 0x20;
    }
    puVar2 = local_2c;
    if (local_2c[0] < 0x1f) {
      puVar2 = &local_30;
    }
    uVar14 = *puVar2;
    uVar3 = fn_00100fc6(uVar14 * 0xa88,0);
    uVar16 = puVar1[0xc];
    uVar7 = uVar3;
    for (uVar11 = *puVar6; uVar11 != uVar16; uVar11 = uVar11 + 0xa88) {
      if (uVar7 != 0) {
        fn_0017821c(uVar7,uVar11,0xa88);
      }
      uVar7 = uVar7 + 0xa88;
    }
    uVar7 = *puVar6;
    uVar11 = uVar7;
    if ((uint)puVar1[0xc] < uVar7) {
      do {
        uVar11 = uVar11 + 0xa88;
      } while (uVar11 != puVar1[0xc]);
    }
    fn_001008c4(uVar7,(int)(puVar1[0xd] - uVar7) / 0xa88,0);
    uVar11 = *puVar6;
    *puVar6 = uVar3;
    puVar1[0xc] = uVar3 + ((int)(puVar1[0xc] - uVar11) / 0xa88) * 0xa88;
    puVar1[0xd] = uVar3 + uVar14 * 0xa88;
  }
  local_30 = 0x1e;
  piVar10 = puVar1 + 0xe;
  if ((uint)((int)(puVar1[0x10] - puVar1[0xe]) >> 2) < 0x1e) {
    uVar11 = (int)(puVar1[0xf] - puVar1[0xe]) >> 2;
    local_2c[0] = uVar11 + (uVar11 >> 1) + (uVar11 >> 3);
    if (local_2c[0] < uVar11 + 0x20) {
      local_2c[0] = uVar11 + 0x20;
    }
    puVar6 = local_2c;
    if (local_2c[0] < 0x1f) {
      puVar6 = &local_30;
    }
    uVar11 = *puVar6;
    iVar4 = fn_00100fc6(uVar11 << 2,0);
    iVar15 = puVar1[0xf];
    iVar8 = iVar4;
    for (iVar12 = *piVar10; iVar12 != iVar15; iVar12 = iVar12 + 4) {
      if (iVar8 != 0) {
        fn_00785420(iVar8,iVar12);
      }
      iVar8 = iVar8 + 4;
    }
    piVar13 = (int *)puVar1[0xf];
    for (piVar9 = (int *)*piVar10; piVar9 != piVar13; piVar9 = piVar9 + 1) {
      if ((undefined4 *)*piVar9 != &DAT_008f9cf4) {
        piVar5 = (undefined4 *)*piVar9 + -3;
        iVar12 = *piVar5;
        if ((iVar12 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar12 + -1, iVar12 == 0)))) {
          fn_001008c4(*piVar9 + -0xc,*(int *)(*piVar9 + -8) + 8,0);
        }
      }
    }
    fn_001008c4(*piVar10,puVar1[0x10] - *piVar10 >> 2,0);
    iVar12 = *piVar10;
    *piVar10 = iVar4;
    puVar1[0xf] = (puVar1[0xf] - iVar12 & 0xfffffffcU) + iVar4;
    puVar1[0x10] = iVar4 + uVar11 * 4;
  }
  fn_00301f50(puVar1 + 0x12,0xa88);
  return puVar1;
}


