#include "0078df50_0078e4e8.h"



void fn_0078e4e8(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 0x20;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 - (uVar3 - uVar2 & 0xffffffe0);
  }
  return;
}



uint * fn_0078e228(uint *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_20;
  uint local_1c [2];
  
  if (param_2 == param_1) {
    return param_1;
  }
  puVar1 = (undefined4 *)param_2[1];
  puVar5 = (undefined4 *)*param_2;
  puVar2 = (undefined4 *)*param_1;
  uVar9 = (int)puVar1 - (int)puVar5;
  local_20 = (int)uVar9 >> 5;
  if ((uint)((int)(param_1[2] - (int)puVar2) >> 5) < local_20) {
    uVar9 = (int)(param_1[1] - (int)puVar2) >> 5;
    uVar3 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    local_1c[0] = uVar9 + 0x20;
    if (uVar9 + 0x20 <= uVar3) {
      local_1c[0] = uVar3;
    }
    puVar4 = local_1c;
    if (local_1c[0] <= local_20) {
      puVar4 = &local_20;
    }
    uVar9 = *puVar4;
    puVar1 = (undefined4 *)fn_00100fc6(uVar9 << 5,0);
    puVar6 = (undefined4 *)param_2[1];
    puVar5 = puVar1;
    for (puVar2 = (undefined4 *)*param_2; puVar2 != puVar6; puVar2 = puVar2 + 8) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar10 = puVar2[1];
        uVar11 = puVar2[2];
        uVar12 = puVar2[3];
        uVar13 = puVar2[4];
        uVar14 = puVar2[5];
        uVar15 = puVar2[6];
        uVar16 = puVar2[7];
        *puVar5 = *puVar2;
        puVar5[1] = uVar10;
        puVar5[2] = uVar11;
        puVar5[3] = uVar12;
        puVar5[4] = uVar13;
        puVar5[5] = uVar14;
        puVar5[6] = uVar15;
        puVar5[7] = uVar16;
      }
      puVar5 = puVar5 + 8;
    }
    uVar7 = *param_1;
    for (uVar3 = uVar7; uVar3 != param_1[1]; uVar3 = uVar3 + 0x20) {
    }
    fn_001008c4(uVar7,(int)(param_1[2] - uVar7) >> 5,0);
    *param_1 = (uint)puVar1;
    param_1[1] = (param_2[1] - *param_2 & 0xffffffe0) + (int)puVar1;
    param_1[2] = (uint)(puVar1 + uVar9 * 8);
  }
  else {
    uVar3 = (int)(param_1[1] - (int)puVar2) >> 5;
    if (uVar3 < local_20) {
      puVar1 = puVar5 + uVar3 * 8;
      if (puVar5 < puVar1) {
        iVar8 = (int)puVar1 - (int)puVar5;
        if (0 < iVar8) {
          puVar1 = puVar5 + -8;
          puVar6 = puVar2 + -8;
          if (iVar8 * 0x4000000 < 0) {
            uVar10 = puVar5[1];
            uVar11 = puVar5[2];
            uVar12 = puVar5[3];
            uVar13 = puVar5[4];
            uVar14 = puVar5[5];
            uVar15 = puVar5[6];
            uVar16 = puVar5[7];
            *puVar2 = *puVar5;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            puVar2[4] = uVar13;
            puVar2[5] = uVar14;
            puVar2[6] = uVar15;
            puVar2[7] = uVar16;
            puVar1 = puVar5;
            puVar6 = puVar2;
          }
          for (iVar8 = iVar8 >> 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar10 = puVar1[9];
            uVar11 = puVar1[10];
            uVar12 = puVar1[0xb];
            uVar13 = puVar1[0xc];
            uVar14 = puVar1[0xd];
            uVar15 = puVar1[0xe];
            uVar16 = puVar1[0xf];
            puVar6[8] = puVar1[8];
            puVar6[9] = uVar10;
            puVar6[10] = uVar11;
            puVar6[0xb] = uVar12;
            puVar6[0xc] = uVar13;
            puVar6[0xd] = uVar14;
            puVar6[0xe] = uVar15;
            puVar6[0xf] = uVar16;
            uVar10 = puVar1[0x11];
            uVar11 = puVar1[0x12];
            uVar12 = puVar1[0x13];
            uVar13 = puVar1[0x14];
            uVar14 = puVar1[0x15];
            uVar15 = puVar1[0x16];
            uVar16 = puVar1[0x17];
            puVar6[0x10] = puVar1[0x10];
            puVar6[0x11] = uVar10;
            puVar6[0x12] = uVar11;
            puVar6[0x13] = uVar12;
            puVar6[0x14] = uVar13;
            puVar6[0x15] = uVar14;
            puVar6[0x16] = uVar15;
            puVar6[0x17] = uVar16;
            puVar1 = puVar1 + 0x10;
            puVar6 = puVar6 + 0x10;
          }
        }
      }
      else {
        for (; puVar5 != puVar1; puVar5 = puVar5 + 8) {
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          uVar13 = puVar5[4];
          uVar14 = puVar5[5];
          uVar15 = puVar5[6];
          uVar16 = puVar5[7];
          *puVar2 = *puVar5;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          puVar2[4] = uVar13;
          puVar2[5] = uVar14;
          puVar2[6] = uVar15;
          puVar2[7] = uVar16;
          puVar2 = puVar2 + 8;
        }
      }
      param_1[1] = (param_2[1] - *param_2 & 0xffffffe0) + *param_1;
      puVar1 = (undefined4 *)param_2[1];
      puVar2 = (undefined4 *)(*param_1 + uVar3 * 0x20);
      for (puVar5 = (undefined4 *)(*param_2 + uVar3 * 0x20); puVar5 != puVar1; puVar5 = puVar5 + 8)
      {
        if (puVar2 != (undefined4 *)0x0) {
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          uVar13 = puVar5[4];
          uVar14 = puVar5[5];
          uVar15 = puVar5[6];
          uVar16 = puVar5[7];
          *puVar2 = *puVar5;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          puVar2[4] = uVar13;
          puVar2[5] = uVar14;
          puVar2[6] = uVar15;
          puVar2[7] = uVar16;
        }
        puVar2 = puVar2 + 8;
      }
    }
    else {
      if (puVar5 < puVar1) {
        if (0 < (int)uVar9) {
          puVar1 = puVar2 + -8;
          puVar6 = puVar5 + -8;
          if ((int)(uVar9 * 0x4000000) < 0) {
            uVar10 = puVar5[1];
            uVar11 = puVar5[2];
            uVar12 = puVar5[3];
            uVar13 = puVar5[4];
            uVar14 = puVar5[5];
            uVar15 = puVar5[6];
            uVar16 = puVar5[7];
            *puVar2 = *puVar5;
            puVar2[1] = uVar10;
            puVar2[2] = uVar11;
            puVar2[3] = uVar12;
            puVar2[4] = uVar13;
            puVar2[5] = uVar14;
            puVar2[6] = uVar15;
            puVar2[7] = uVar16;
            puVar1 = puVar2;
            puVar6 = puVar5;
          }
          for (iVar8 = (int)uVar9 >> 6; iVar8 != 0; iVar8 = iVar8 + -1) {
            uVar10 = puVar6[9];
            uVar11 = puVar6[10];
            uVar12 = puVar6[0xb];
            uVar13 = puVar6[0xc];
            uVar14 = puVar6[0xd];
            uVar15 = puVar6[0xe];
            uVar16 = puVar6[0xf];
            puVar1[8] = puVar6[8];
            puVar1[9] = uVar10;
            puVar1[10] = uVar11;
            puVar1[0xb] = uVar12;
            puVar1[0xc] = uVar13;
            puVar1[0xd] = uVar14;
            puVar1[0xe] = uVar15;
            puVar1[0xf] = uVar16;
            uVar10 = puVar6[0x11];
            uVar11 = puVar6[0x12];
            uVar12 = puVar6[0x13];
            uVar13 = puVar6[0x14];
            uVar14 = puVar6[0x15];
            uVar15 = puVar6[0x16];
            uVar16 = puVar6[0x17];
            puVar1[0x10] = puVar6[0x10];
            puVar1[0x11] = uVar10;
            puVar1[0x12] = uVar11;
            puVar1[0x13] = uVar12;
            puVar1[0x14] = uVar13;
            puVar1[0x15] = uVar14;
            puVar1[0x16] = uVar15;
            puVar1[0x17] = uVar16;
            puVar1 = puVar1 + 0x10;
            puVar6 = puVar6 + 0x10;
          }
          puVar2 = (undefined4 *)((int)puVar2 + (uVar9 & 0xffffffe0));
        }
      }
      else {
        for (; puVar5 != puVar1; puVar5 = puVar5 + 8) {
          uVar10 = puVar5[1];
          uVar11 = puVar5[2];
          uVar12 = puVar5[3];
          uVar13 = puVar5[4];
          uVar14 = puVar5[5];
          uVar15 = puVar5[6];
          uVar16 = puVar5[7];
          *puVar2 = *puVar5;
          puVar2[1] = uVar10;
          puVar2[2] = uVar11;
          puVar2[3] = uVar12;
          puVar2[4] = uVar13;
          puVar2[5] = uVar14;
          puVar2[6] = uVar15;
          puVar2[7] = uVar16;
          puVar2 = puVar2 + 8;
        }
      }
      for (; puVar2 != (undefined4 *)param_1[1]; puVar2 = puVar2 + 8) {
      }
      uVar9 = (param_2[1] - *param_2 & 0xffffffe0) + *param_1;
      param_1[1] = uVar9;
      param_1[2] = uVar9;
    }
  }
  return param_1;
}



void fn_0078dfac(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = param_1[1];
  uVar3 = (int)(uVar6 - *param_1) / 0x20c;
  if ((uint)((int)(param_1[2] - *param_1) / 0x20c) <= uVar3) {
    uVar6 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
    if (uVar6 < uVar3 + 0x20) {
      uVar6 = uVar3 + 0x20;
    }
    uVar1 = fn_00100fc6(uVar6 * 0x20c,0);
    uVar4 = uVar1;
    for (uVar3 = *param_1; uVar3 != param_2; uVar3 = uVar3 + 0x20c) {
      if (uVar4 != 0) {
        fn_0017821c(uVar4,uVar3,0x20c);
      }
      uVar4 = uVar4 + 0x20c;
    }
    iVar5 = uVar1 + ((int)(param_2 - *param_1) / 0x20c) * 0x20c;
    if (iVar5 != 0) {
      fn_0017821c(iVar5,param_3);
    }
    uVar3 = param_1[1];
    iVar5 = uVar1 + ((int)(param_2 - *param_1) / 0x20c) * 0x20c;
    for (; param_2 != uVar3; param_2 = param_2 + 0x20c) {
      iVar5 = iVar5 + 0x20c;
      if (iVar5 != 0) {
        fn_0017821c(iVar5,param_2,0x20c);
      }
    }
    uVar4 = *param_1;
    uVar2 = param_1[1];
    uVar3 = uVar4;
    if (uVar2 < uVar4) {
      do {
        uVar3 = uVar3 + 0x20c;
      } while (uVar3 != uVar2);
    }
    fn_001008c4(uVar4,(int)(param_1[2] - uVar4) / 0x20c,0);
    *param_1 = uVar1;
    param_1[1] = uVar1 + ((int)(uVar2 - uVar4) / 0x20c) * 0x20c + 0x20c;
    param_1[2] = uVar1 + uVar6 * 0x20c;
    return;
  }
  param_1[1] = uVar6 + 0x20c;
  if (uVar6 != 0) {
    fn_0017821c(uVar6,uVar6 - 0x20c,0x20c);
  }
  uVar3 = uVar6 - 0x20c;
  if (param_2 < uVar3) {
    if (0 < (int)(uVar3 - param_2)) {
      uVar4 = (int)(uVar3 - param_2) / 0x20c;
      if ((uVar4 & 1) != 0) {
        uVar3 = uVar6 - 0x418;
        uVar6 = uVar6 - 0x20c;
        fn_0017821c(uVar6,uVar3,0x20c);
      }
      for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
        fn_0017821c(uVar6 - 0x20c,uVar3 - 0x20c,0x20c);
        uVar3 = uVar3 - 0x418;
        uVar6 = uVar6 - 0x418;
        fn_0017821c(uVar6,uVar3);
      }
    }
  }
  else {
    while (param_2 != uVar3) {
      uVar3 = uVar3 - 0x20c;
      uVar6 = uVar6 - 0x20c;
      fn_0017821c(uVar6,uVar3,0x20c);
    }
  }
  fn_0017821c(param_2,param_3,0x20c);
  return;
}



uint * fn_0078df50(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = uVar2;
  if (param_1[1] <= uVar2) {
    for (; uVar1 != param_1[1]; uVar1 = uVar1 + 0xc) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[2] - uVar2) / 0xc,0);
  return param_1;
}


