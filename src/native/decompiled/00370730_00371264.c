#include "00370730_00371264.h"



void fn_00371264(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  uint uVar11;
  undefined4 in_s0;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar17 = *param_2;
  uVar16 = param_2[1];
  puVar10 = (uint *)(iVar1 + 0x44);
  puVar9 = *(undefined4 **)(iVar1 + 0x48);
  uVar15 = param_2[2];
  if (puVar9 != *(undefined4 **)(iVar1 + 0x4c)) {
    *(undefined4 **)(iVar1 + 0x48) = puVar9 + 4;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = uVar17;
      puVar9[1] = uVar16;
      puVar9[2] = uVar15;
      puVar9[3] = in_s0;
    }
    return;
  }
  uVar5 = (int)((int)puVar9 - *puVar10) >> 4;
  if (uVar5 < (uint)((int)((int)*(undefined4 **)(iVar1 + 0x4c) - *puVar10) >> 4)) {
    *(undefined4 **)(iVar1 + 0x48) = puVar9 + 4;
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-4];
      puVar9[1] = puVar9[-3];
      puVar9[2] = puVar9[-2];
      puVar9[3] = puVar9[-1];
    }
    puVar6 = puVar9 + -4;
    puVar8 = puVar9;
    if (puVar9 < puVar6) {
      iVar1 = (int)puVar6 - (int)puVar9;
      if (0 < iVar1) {
        if (iVar1 * 0x8000000 < 0) {
          puVar6 = puVar9 + -8;
          puVar8 = puVar9 + -4;
          *puVar8 = *puVar6;
          puVar9[-3] = puVar9[-7];
          puVar9[-2] = puVar9[-6];
          puVar9[-1] = puVar9[-5];
        }
        for (iVar1 = iVar1 >> 5; iVar1 != 0; iVar1 = iVar1 + -1) {
          uVar12 = puVar6[-3];
          uVar13 = puVar6[-2];
          uVar14 = puVar6[-1];
          puVar8[-4] = puVar6[-4];
          puVar8[-3] = uVar12;
          puVar8[-2] = uVar13;
          puVar8[-1] = uVar14;
          uVar12 = puVar6[-7];
          uVar13 = puVar6[-6];
          uVar14 = puVar6[-5];
          puVar8[-8] = puVar6[-8];
          puVar8[-7] = uVar12;
          puVar8[-6] = uVar13;
          puVar8[-5] = uVar14;
          puVar6 = puVar6 + -8;
          puVar8 = puVar8 + -8;
        }
      }
    }
    else {
      while (puVar9 != puVar6) {
        uVar12 = puVar6[-3];
        uVar13 = puVar6[-2];
        uVar14 = puVar6[-1];
        puVar8[-4] = puVar6[-4];
        puVar8[-3] = uVar12;
        puVar8[-2] = uVar13;
        puVar8[-1] = uVar14;
        puVar8 = puVar8 + -4;
        puVar6 = puVar6 + -4;
      }
    }
    *puVar9 = uVar17;
    puVar9[1] = uVar16;
    puVar9[2] = uVar15;
    puVar9[3] = in_s0;
    return;
  }
  uVar11 = uVar5 + (uVar5 >> 1) + (uVar5 >> 3);
  if (uVar11 < uVar5 + 0x20) {
    uVar11 = uVar5 + 0x20;
  }
  puVar2 = (undefined4 *)fn_00100fc6(uVar11 << 4,0);
  puVar8 = puVar2;
  for (puVar6 = (undefined4 *)*puVar10; puVar6 != puVar9; puVar6 = puVar6 + 4) {
    if (puVar8 != (undefined4 *)0x0) {
      uVar12 = puVar6[1];
      uVar13 = puVar6[2];
      uVar14 = puVar6[3];
      *puVar8 = *puVar6;
      puVar8[1] = uVar12;
      puVar8[2] = uVar13;
      puVar8[3] = uVar14;
    }
    puVar8 = puVar8 + 4;
  }
  puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffff0) + (int)puVar2);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = uVar17;
    puVar6[1] = uVar16;
    puVar6[2] = uVar15;
    puVar6[3] = in_s0;
  }
  puVar8 = *(undefined4 **)(iVar1 + 0x48);
  puVar6 = (undefined4 *)(((int)puVar9 - *puVar10 & 0xfffffff0) + (int)puVar2);
  for (; puVar9 != puVar8; puVar9 = puVar9 + 4) {
    puVar3 = puVar6 + 4;
    if (puVar3 != (undefined4 *)0x0) {
      uVar15 = puVar9[1];
      uVar16 = puVar9[2];
      uVar17 = puVar9[3];
      *puVar3 = *puVar9;
      puVar6[5] = uVar15;
      puVar6[6] = uVar16;
      puVar6[7] = uVar17;
    }
    puVar6 = puVar3;
  }
  uVar4 = *puVar10;
  uVar7 = *(uint *)(iVar1 + 0x48);
  uVar5 = uVar4;
  if (uVar7 < uVar4) {
    do {
      uVar5 = uVar5 + 0x10;
    } while (uVar5 != uVar7);
  }
  fn_001008c4(uVar4,(int)(*(int *)(iVar1 + 0x4c) - uVar4) >> 4,0);
  *(undefined4 **)(iVar1 + 0x4c) = puVar2 + uVar11 * 4;
  *(undefined4 **)(iVar1 + 0x48) = puVar2 + ((int)(uVar7 - uVar4) >> 4) * 4 + 4;
  *puVar10 = (uint)puVar2;
  return;
}



undefined4 fn_00371254(void)

{
  return DAT_00896cd0;
}



undefined4 fn_003711d0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = fn_00118290();
  DAT_00896ccc = fn_0011c184(L"rom:/data/Parameter/RaceGatherTargetParam.tp",uVar1,4,5);
  uVar3 = fn_0012a26c();
  DAT_00896cd0 = fn_0011c134((uint)uVar3 - 4,
                              (int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 4),0xc,0);
  uVar1 = fn_00145ac0(DAT_00896ccc);
  iVar2 = fn_00147e6c(uVar1,&DAT_0037124c,4);
  if ((iVar2 == 0) && (0 < DAT_00896cd0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



int fn_003711a8(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00145ac0(DAT_00896ccc);
  return iVar1 + 4 + param_1 * 0xc;
}



int fn_003710cc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00828324;
  param_1[1] = &DAT_008592c0;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  param_1[6] = 0;
  iVar1 = fn_00522550(param_1 + 8);
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + 0x38) = 0;
  *(undefined4 *)(iVar1 + 0x3c) = 0;
  *(undefined1 *)(iVar1 + 0x40) = 0;
  *(undefined1 *)(iVar1 + 0x41) = 0;
  fn_00158f6c(iVar1 + 0x42,0x4c);
  return iVar1 + -0x20;
}



void fn_00370a5c(undefined4 *param_1)

{
  *param_1 = &DAT_00828314;
  return;
}



undefined4 * fn_00370730(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008282e4;
  if (param_1[0x1b] != 0) {
    fn_002feef8(param_1[0x1b]);
  }
  if ((int *)param_1[0x12] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x12] + 4))();
  }
  uVar2 = param_1[0xf];
  uVar1 = uVar2;
  if ((uint)param_1[0x10] <= uVar2) {
    for (; uVar1 != param_1[0x10]; uVar1 = uVar1 + 0xf4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0x11] - uVar2) / 0xf4,0);
  uVar2 = param_1[0xc];
  uVar1 = uVar2;
  if ((uint)param_1[0xd] <= uVar2) {
    for (; uVar1 != param_1[0xd]; uVar1 = uVar1 + 0xf4) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[0xe] - uVar2) / 0xf4,0);
  if ((int *)param_1[0xb] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xb] + 4))();
  }
  if ((int *)param_1[10] != (int *)0x0) {
    (**(code **)(*(int *)param_1[10] + 8))();
  }
  if ((int *)param_1[9] != (int *)0x0) {
    (**(code **)(*(int *)param_1[9] + 4))();
  }
  if ((int *)param_1[8] != (int *)0x0) {
    (**(code **)(*(int *)param_1[8] + 4))();
  }
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  return param_1;
}


