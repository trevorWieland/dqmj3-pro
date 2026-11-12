#include "0078b278_0078bb58.h"



uint * fn_0078bb58(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) >> 3,0);
  return param_1;
}



void fn_0078b958(uint *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  
  puVar9 = (undefined4 *)param_1[1];
  if (puVar9 != (undefined4 *)param_1[2]) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      uVar10 = param_2[1];
      *puVar9 = *param_2;
      puVar9[1] = uVar10;
    }
    return;
  }
  uVar4 = (int)((int)puVar9 - *param_1) >> 3;
  if (uVar4 < (uint)((int)((int)param_1[2] - *param_1) >> 3)) {
    param_1[1] = (uint)(puVar9 + 2);
    if (puVar9 != (undefined4 *)0x0) {
      *puVar9 = puVar9[-2];
      puVar9[1] = puVar9[-1];
    }
    puVar6 = puVar9 + -2;
    puVar7 = puVar9;
    if (puVar9 < puVar6) {
      iVar5 = (int)puVar6 - (int)puVar9;
      if (0 < iVar5) {
        if (iVar5 * 0x10000000 < 0) {
          puVar6 = puVar9 + -4;
          puVar7 = puVar9 + -2;
          *puVar7 = *puVar6;
          puVar9[-1] = puVar9[-3];
        }
        for (iVar5 = iVar5 >> 4; iVar5 != 0; iVar5 = iVar5 + -1) {
          uVar10 = puVar6[-1];
          puVar7[-2] = puVar6[-2];
          puVar7[-1] = uVar10;
          uVar10 = puVar6[-3];
          puVar7[-4] = puVar6[-4];
          puVar7[-3] = uVar10;
          puVar6 = puVar6 + -4;
          puVar7 = puVar7 + -4;
        }
      }
    }
    else {
      while (puVar9 != puVar6) {
        uVar10 = puVar6[-1];
        puVar7[-2] = puVar6[-2];
        puVar7[-1] = uVar10;
        puVar7 = puVar7 + -2;
        puVar6 = puVar6 + -2;
      }
    }
    uVar10 = param_2[1];
    *puVar9 = *param_2;
    puVar9[1] = uVar10;
    return;
  }
  uVar11 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
  if (uVar11 < uVar4 + 0x20) {
    uVar11 = uVar4 + 0x20;
  }
  puVar1 = (undefined4 *)fn_00100fc6(uVar11 << 3,0);
  puVar7 = puVar1;
  for (puVar6 = (undefined4 *)*param_1; puVar6 != puVar9; puVar6 = puVar6 + 2) {
    if (puVar7 != (undefined4 *)0x0) {
      uVar10 = puVar6[1];
      *puVar7 = *puVar6;
      puVar7[1] = uVar10;
    }
    puVar7 = puVar7 + 2;
  }
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  if (puVar6 != (undefined4 *)0x0) {
    uVar10 = param_2[1];
    *puVar6 = *param_2;
    puVar6[1] = uVar10;
  }
  puVar7 = (undefined4 *)param_1[1];
  puVar6 = (undefined4 *)(((int)puVar9 - *param_1 & 0xfffffff8) + (int)puVar1);
  for (; puVar9 != puVar7; puVar9 = puVar9 + 2) {
    puVar2 = puVar6 + 2;
    if (puVar2 != (undefined4 *)0x0) {
      uVar10 = puVar9[1];
      *puVar2 = *puVar9;
      puVar6[3] = uVar10;
    }
    puVar6 = puVar2;
  }
  uVar3 = *param_1;
  uVar8 = param_1[1];
  uVar4 = uVar3;
  if (uVar8 < uVar3) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != uVar8);
  }
  fn_001008c4(uVar3,(int)(param_1[2] - uVar3) >> 3,0);
  param_1[2] = (uint)(puVar1 + uVar11 * 2);
  param_1[1] = (uint)(puVar1 + ((int)(uVar8 - uVar3) >> 3) * 2 + 2);
  *param_1 = (uint)puVar1;
  return;
}



int * fn_0078b8ac(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[1];
  for (piVar1 = (int *)*param_1; piVar1 != piVar2; piVar1 = piVar1 + 0x14) {
    if (piVar1[1] != 0) {
      fn_002d7638();
      if ((int *)piVar1[1] != (int *)0x0) {
        (**(code **)(*(int *)piVar1[1] + 4))();
      }
      piVar1[1] = 0;
    }
    if (*piVar1 != 0) {
      fn_005f45d0();
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      *piVar1 = 0;
    }
  }
  fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x50,0);
  return param_1;
}



void fn_0078b278(int *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint local_34;
  uint local_30;
  uint local_2c [2];
  
  if (param_3 == (undefined4 *)0x0) {
    return;
  }
  puVar8 = (undefined4 *)param_1[1];
  local_34 = ((int)puVar8 - *param_1) / 0x50 + (int)param_3;
  if ((uint)((param_1[2] - *param_1) / 0x50) < local_34) {
    uVar1 = (param_1[1] - *param_1) / 0x50;
    local_2c[0] = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
    if (local_2c[0] < uVar1 + 0x20) {
      local_2c[0] = uVar1 + 0x20;
    }
    puVar3 = &local_34;
    if (local_34 < local_2c[0]) {
      puVar3 = local_2c;
    }
    local_30 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(local_30 * 0x50,0);
    puVar12 = puVar4;
    for (puVar8 = (undefined4 *)*param_1; puVar8 != param_2; puVar8 = puVar8 + 0x14) {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar8;
        puVar12[1] = puVar8[1];
        fn_001781f0(puVar12 + 2,puVar8 + 2);
        puVar12[0xe] = puVar8[0xe];
        uVar5 = puVar8[0x10];
        uVar6 = puVar8[0x11];
        puVar12[0xf] = puVar8[0xf];
        puVar12[0x10] = uVar5;
        puVar12[0x11] = uVar6;
        puVar12[0x12] = puVar8[0x12];
        *(undefined1 *)(puVar12 + 0x13) = *(undefined1 *)(puVar8 + 0x13);
      }
      puVar12 = puVar12 + 0x14;
    }
    puVar8 = puVar4 + (((int)param_2 - *param_1) / 0x50) * 0x14;
    for (puVar12 = param_3; puVar12 != (undefined4 *)0x0;
        puVar12 = (undefined4 *)((int)puVar12 + -1)) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *param_4;
        puVar8[1] = param_4[1];
        fn_001781f0(puVar8 + 2,param_4 + 2);
        puVar8[0xe] = param_4[0xe];
        uVar5 = param_4[0x10];
        uVar6 = param_4[0x11];
        puVar8[0xf] = param_4[0xf];
        puVar8[0x10] = uVar5;
        puVar8[0x11] = uVar6;
        puVar8[0x12] = param_4[0x12];
        *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(param_4 + 0x13);
      }
      puVar8 = puVar8 + 0x14;
    }
    puVar13 = (undefined4 *)param_1[1];
    puVar8 = puVar4 + (((int)param_2 - *param_1) / 0x50 + (int)param_3) * 0x14;
    puVar12 = param_3;
    for (; param_2 != puVar13; param_2 = param_2 + 0x14) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *param_2;
        puVar8[1] = param_2[1];
        fn_001781f0(puVar8 + 2,param_2 + 2);
        puVar8[0xe] = param_2[0xe];
        uVar5 = param_2[0x10];
        uVar6 = param_2[0x11];
        puVar8[0xf] = param_2[0xf];
        puVar8[0x10] = uVar5;
        puVar8[0x11] = uVar6;
        puVar8[0x12] = param_2[0x12];
        *(undefined1 *)(puVar8 + 0x13) = *(undefined1 *)(param_2 + 0x13);
        puVar12 = puVar8;
      }
      puVar8 = puVar8 + 0x14;
    }
    piVar7 = (int *)*param_1;
    piVar10 = (int *)param_1[1];
    iVar2 = (int)piVar10 - (int)piVar7;
    bVar14 = piVar7 != piVar10;
    if (bVar14) {
      puVar12 = (undefined4 *)0x0;
    }
    while (bVar14) {
      if (piVar7[1] != 0) {
        fn_002d7638();
        if ((int *)piVar7[1] != (int *)0x0) {
          (**(code **)(*(int *)piVar7[1] + 4))();
        }
        piVar7[1] = (int)puVar12;
      }
      if (*piVar7 != 0) {
        fn_005f45d0();
        if ((int *)*piVar7 != (int *)0x0) {
          (**(code **)(*(int *)*piVar7 + 4))();
        }
        *piVar7 = (int)puVar12;
      }
      piVar7 = piVar7 + 0x14;
      bVar14 = piVar7 != piVar10;
    }
    fn_001008c4(*param_1,(param_1[2] - *param_1) / 0x50,0);
    *param_1 = (int)puVar4;
    param_1[1] = (int)(puVar4 + (iVar2 / 0x50) * 0x14 + (int)param_3 * 0x14);
    param_1[2] = (int)(puVar4 + local_30 * 0x14);
    return;
  }
  puVar12 = param_2 + (int)param_3 * 0x14;
  param_1[1] = (int)(puVar8 + (int)param_3 * 0x14);
  if (puVar12 < puVar8) {
    puVar11 = puVar8 + (int)param_3 * -0x14;
    puVar4 = puVar8;
    for (puVar13 = puVar11; puVar13 != puVar8; puVar13 = puVar13 + 0x14) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *puVar13;
        puVar4[1] = puVar13[1];
        fn_001781f0(puVar4 + 2,puVar13 + 2);
        puVar4[0xe] = puVar13[0xe];
        uVar5 = puVar13[0x10];
        uVar6 = puVar13[0x11];
        puVar4[0xf] = puVar13[0xf];
        puVar4[0x10] = uVar5;
        puVar4[0x11] = uVar6;
        puVar4[0x12] = puVar13[0x12];
        *(undefined1 *)(puVar4 + 0x13) = *(undefined1 *)(puVar13 + 0x13);
      }
      puVar4 = puVar4 + 0x14;
    }
    if (param_2 < puVar11) {
      iVar2 = (int)puVar11 - (int)param_2;
      iVar9 = 1;
      if (1 < iVar2 / 0x50 + 1) {
        do {
          puVar11 = puVar11 + -0x14;
          puVar8 = puVar8 + -0x14;
          fn_0017821c(puVar8,puVar11,0x4d);
          iVar9 = iVar9 + 1;
        } while (iVar9 < iVar2 / 0x50 + 1);
      }
    }
    else {
      while (param_2 != puVar11) {
        puVar11 = puVar11 + -0x14;
        puVar8 = puVar8 + -0x14;
        fn_0017821c(puVar8,puVar11,0x4d);
      }
    }
    if (param_2 < puVar12) {
      iVar2 = (int)puVar12 - (int)param_2;
      iVar9 = 1;
      if (1 < iVar2 / 0x50 + 1) {
        do {
          fn_0017821c(param_2,param_4,0x4d);
          iVar9 = iVar9 + 1;
          param_2 = param_2 + 0x14;
        } while (iVar9 < iVar2 / 0x50 + 1);
        return;
      }
    }
    else {
      for (; param_2 != puVar12; param_2 = param_2 + 0x14) {
        fn_0017821c(param_2,param_4,0x4d);
      }
    }
  }
  else {
    local_34 = (int)puVar8 - (int)param_2;
    iVar2 = (int)local_34 / 0x50;
    puVar4 = puVar8;
    for (iVar9 = (int)param_3 - iVar2; iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        *puVar4 = *param_4;
        puVar4[1] = param_4[1];
        fn_001781f0(puVar4 + 2,param_4 + 2);
        puVar4[0xe] = param_4[0xe];
        uVar5 = param_4[0x10];
        uVar6 = param_4[0x11];
        puVar4[0xf] = param_4[0xf];
        puVar4[0x10] = uVar5;
        puVar4[0x11] = uVar6;
        puVar4[0x12] = param_4[0x12];
        *(undefined1 *)(puVar4 + 0x13) = *(undefined1 *)(param_4 + 0x13);
      }
      puVar4 = puVar4 + 0x14;
    }
    for (puVar4 = param_2; puVar4 != puVar8; puVar4 = puVar4 + 0x14) {
      if (puVar12 != (undefined4 *)0x0) {
        *puVar12 = *puVar4;
        puVar12[1] = puVar4[1];
        fn_001781f0(puVar12 + 2,puVar4 + 2);
        puVar12[0xe] = puVar4[0xe];
        uVar5 = puVar4[0x10];
        uVar6 = puVar4[0x11];
        puVar12[0xf] = puVar4[0xf];
        puVar12[0x10] = uVar5;
        puVar12[0x11] = uVar6;
        puVar12[0x12] = puVar4[0x12];
        *(undefined1 *)(puVar12 + 0x13) = *(undefined1 *)(puVar4 + 0x13);
      }
      puVar12 = puVar12 + 0x14;
    }
    if (param_2 < puVar8) {
      iVar9 = 1;
      if (1 < iVar2 + 1) {
        iVar2 = (int)local_34 / 0x50;
        do {
          fn_0017821c(param_2,param_4,0x4d);
          iVar9 = iVar9 + 1;
          param_2 = param_2 + 0x14;
        } while (iVar9 < iVar2 + 1);
        return;
      }
    }
    else if (param_2 != puVar8) {
      do {
        fn_0017821c(param_2,param_4,0x4d);
        param_2 = param_2 + 0x14;
      } while (param_2 != puVar8);
      return;
    }
  }
  return;
}


