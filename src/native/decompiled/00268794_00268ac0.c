#include "00268794_00268ac0.h"



int fn_00268ac0(void)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = fn_006b6494(*(undefined4 *)(DAT_00897804 + 8));
  if (iVar1 < 0x32) {
    iVar1 = 1;
  }
  else if (iVar1 - 0x32U < 10) {
    iVar1 = 0x33;
  }
  else if (iVar1 - 0x3cU < 10) {
    iVar1 = 0x3d;
  }
  else if (iVar1 - 0x46U < 10) {
    iVar1 = 0x47;
  }
  else if (iVar1 - 0x50U < 10) {
    iVar1 = 0x51;
  }
  else {
    bVar2 = 9 < iVar1 - 0x5aU;
    if (!bVar2) {
      iVar1 = 0x5b;
    }
    iVar1 = iVar1 + (uint)bVar2;
  }
  return iVar1;
}



undefined4 fn_00268a04(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int local_4;
  
  piVar3 = &local_4;
  uVar4 = param_1 / 10 - param_2 / 10;
  local_4 = 0;
  if (0 < (int)uVar4) {
    iVar1 = (param_2 / 10 + 1) * 10000;
    iVar2 = iVar1;
    if ((uVar4 & 1) != 0) {
      iVar2 = iVar1 + 10000;
      local_4 = iVar1;
    }
    iVar5 = 0;
    for (iVar1 = (int)uVar4 >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      local_4 = local_4 + iVar2;
      iVar5 = iVar5 + iVar2 + 10000;
      iVar2 = iVar2 + 20000;
    }
    local_4 = local_4 + iVar5;
    if (9999999 < local_4) {
      piVar3 = &DAT_007d47c4;
    }
  }
  return *piVar3;
}



undefined4 * fn_00268794(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  uint local_20;
  uint local_1c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar1 = fn_00145b00(0x200,&DAT_00812c8c);
  piVar3 = (int *)0x0;
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)fn_005f62c0();
    puVar2[8] = &DAT_00859420;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = 0;
    puVar2[0xd] = 0;
    *puVar2 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar2 + 0x10);
    piVar3 = (int *)(iVar1 + -0x40);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskSILStorage_008c6dc7);
    *piVar3 = (int)&DAT_00859cd8;
    *(undefined4 *)(iVar1 + 0x58) = 0;
    *(undefined4 *)(iVar1 + 0x5c) = 0;
    *(undefined4 *)(iVar1 + 0x60) = 0;
    *(undefined4 *)(iVar1 + 100) = 0;
    *(undefined4 *)(iVar1 + 0x68) = 0;
    *(undefined4 *)(iVar1 + 0x6c) = 0;
    *(undefined4 *)(iVar1 + 0x70) = 0;
    *(undefined4 *)(iVar1 + 0x74) = 0;
    *(undefined4 *)(iVar1 + 0x78) = 0;
    *(undefined4 *)(iVar1 + 0x7c) = 0;
    *(undefined4 *)(iVar1 + 0x80) = 0;
    *(undefined4 *)(iVar1 + 0x84) = 0;
    *(undefined4 *)(iVar1 + 0x88) = 0;
    *(undefined4 *)(iVar1 + 0x8c) = 0;
    *(undefined4 *)(iVar1 + 0x90) = 0;
    *(undefined4 *)(iVar1 + 0x94) = 0;
    *(undefined4 *)(iVar1 + 0x98) = 0;
    *(undefined4 *)(iVar1 + 0x9c) = 0;
    *(undefined4 *)(iVar1 + 0xa0) = 0;
    *(undefined4 *)(iVar1 + 0xa4) = 0;
    fn_00671928(piVar3);
  }
  piVar7 = (int *)*param_1;
  if (piVar7 != piVar3) {
    if (piVar7 != (int *)0x0) {
      (**(code **)(*piVar7 + 4))(piVar7);
    }
    *param_1 = piVar3;
  }
  local_20 = 0x20;
  puVar11 = param_1 + 1;
  if ((uint)((int)(param_1[3] - param_1[1]) / 0x28) < 0x20) {
    uVar12 = (int)(param_1[2] - param_1[1]) / 0x28;
    uVar8 = uVar12 + (uVar12 >> 1) + (uVar12 >> 3);
    local_1c = uVar12 + 0x20;
    if (uVar12 + 0x20 <= uVar8) {
      local_1c = uVar8;
    }
    puVar9 = &local_1c;
    if (local_1c < 0x21) {
      puVar9 = &local_20;
    }
    uVar12 = *puVar9;
    puVar4 = (undefined4 *)fn_00100fc6(uVar12 * 0x28,0);
    puVar10 = (undefined4 *)param_1[2];
    puVar5 = puVar4;
    for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar10; puVar2 = puVar2 + 10) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar13 = puVar2[1];
        uVar14 = puVar2[2];
        uVar15 = puVar2[3];
        uVar16 = puVar2[4];
        uVar17 = puVar2[5];
        uVar18 = puVar2[6];
        uVar19 = puVar2[7];
        *puVar5 = *puVar2;
        puVar5[1] = uVar13;
        puVar5[2] = uVar14;
        puVar5[3] = uVar15;
        puVar5[4] = uVar16;
        puVar5[5] = uVar17;
        puVar5[6] = uVar18;
        puVar5[7] = uVar19;
        uVar13 = puVar2[9];
        puVar5[8] = puVar2[8];
        puVar5[9] = uVar13;
      }
      puVar5 = puVar5 + 10;
    }
    uVar6 = *puVar11;
    uVar8 = uVar6;
    if ((uint)param_1[2] < uVar6) {
      do {
        uVar8 = uVar8 + 0x28;
      } while (uVar8 != param_1[2]);
    }
    fn_001008c4(uVar6,(int)(param_1[3] - uVar6) / 0x28,0);
    uVar8 = *puVar11;
    *puVar11 = (uint)puVar4;
    param_1[2] = puVar4 + ((int)(param_1[2] - uVar8) / 0x28) * 10;
    param_1[3] = puVar4 + uVar12 * 10;
  }
  return param_1;
}


