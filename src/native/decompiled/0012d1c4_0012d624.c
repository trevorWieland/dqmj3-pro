#include "0012d1c4_0012d624.h"

static void svc_0x1e(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x1e }
#endif
}

static void svc_0x3c(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x3c }
#endif
}


undefined4
fn_0012d624(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  svc_0x1e();
  *param_1 = param_2;
  return param_5;
}



void fn_0012d61c(void)

{
  svc_0x3c();
  return;
}



void fn_0012d5e0(uint *param_1)

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
        uVar1 = uVar1 + 4;
      } while (uVar1 != uVar3);
    }
    param_1[1] = uVar3 - (uVar3 - uVar2 & 0xfffffffc);
  }
  return;
}



void fn_0012d1c4(uint *param_1,undefined4 *param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint local_30;
  uint local_2c [2];
  
  if (param_3 == 0) {
    return;
  }
  puVar5 = (undefined4 *)param_1[1];
  local_30 = (int)((int)puVar5 - *param_1) / 0x34 + param_3;
  if ((uint)((int)(param_1[2] - *param_1) / 0x34) < local_30) {
    uVar9 = (int)(param_1[1] - *param_1) / 0x34;
    local_2c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_2c[0] < uVar9 + 0x20) {
      local_2c[0] = uVar9 + 0x20;
    }
    puVar3 = local_2c;
    if (local_2c[0] <= local_30) {
      puVar3 = &local_30;
    }
    uVar9 = *puVar3;
    puVar4 = (undefined4 *)fn_00100fc6(uVar9 * 0x34,0);
    puVar7 = puVar4;
    for (puVar5 = (undefined4 *)*param_1; puVar5 != param_2; puVar5 = puVar5 + 0xd) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar10 = puVar5[1];
        uVar11 = puVar5[2];
        uVar12 = puVar5[3];
        uVar13 = puVar5[4];
        uVar14 = puVar5[5];
        uVar15 = puVar5[6];
        uVar16 = puVar5[7];
        *puVar7 = *puVar5;
        puVar7[1] = uVar10;
        puVar7[2] = uVar11;
        puVar7[3] = uVar12;
        puVar7[4] = uVar13;
        puVar7[5] = uVar14;
        puVar7[6] = uVar15;
        puVar7[7] = uVar16;
        uVar10 = puVar5[9];
        uVar11 = puVar5[10];
        uVar12 = puVar5[0xb];
        uVar13 = puVar5[0xc];
        puVar7[8] = puVar5[8];
        puVar7[9] = uVar10;
        puVar7[10] = uVar11;
        puVar7[0xb] = uVar12;
        puVar7[0xc] = uVar13;
      }
      puVar7 = puVar7 + 0xd;
    }
    puVar5 = puVar4 + ((int)((int)param_2 - *param_1) / 0x34) * 0xd;
    for (iVar6 = param_3; iVar6 != 0; iVar6 = iVar6 + -1) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar10 = param_4[1];
        uVar11 = param_4[2];
        uVar12 = param_4[3];
        uVar13 = param_4[4];
        uVar14 = param_4[5];
        uVar15 = param_4[6];
        uVar16 = param_4[7];
        *puVar5 = *param_4;
        puVar5[1] = uVar10;
        puVar5[2] = uVar11;
        puVar5[3] = uVar12;
        puVar5[4] = uVar13;
        puVar5[5] = uVar14;
        puVar5[6] = uVar15;
        puVar5[7] = uVar16;
        uVar10 = param_4[9];
        uVar11 = param_4[10];
        uVar12 = param_4[0xb];
        uVar13 = param_4[0xc];
        puVar5[8] = param_4[8];
        puVar5[9] = uVar10;
        puVar5[10] = uVar11;
        puVar5[0xb] = uVar12;
        puVar5[0xc] = uVar13;
      }
      puVar5 = puVar5 + 0xd;
    }
    puVar7 = (undefined4 *)param_1[1];
    puVar5 = puVar4 + ((int)((int)param_2 - *param_1) / 0x34 + param_3) * 0xd;
    for (; param_2 != puVar7; param_2 = param_2 + 0xd) {
      if (puVar5 != (undefined4 *)0x0) {
        uVar10 = param_2[1];
        uVar11 = param_2[2];
        uVar12 = param_2[3];
        uVar13 = param_2[4];
        uVar14 = param_2[5];
        uVar15 = param_2[6];
        uVar16 = param_2[7];
        *puVar5 = *param_2;
        puVar5[1] = uVar10;
        puVar5[2] = uVar11;
        puVar5[3] = uVar12;
        puVar5[4] = uVar13;
        puVar5[5] = uVar14;
        puVar5[6] = uVar15;
        puVar5[7] = uVar16;
        uVar10 = param_2[9];
        uVar11 = param_2[10];
        uVar12 = param_2[0xb];
        uVar13 = param_2[0xc];
        puVar5[8] = param_2[8];
        puVar5[9] = uVar10;
        puVar5[10] = uVar11;
        puVar5[0xb] = uVar12;
        puVar5[0xc] = uVar13;
      }
      puVar5 = puVar5 + 0xd;
    }
    uVar8 = *param_1;
    iVar6 = param_1[1] - uVar8;
    for (; uVar8 != param_1[1]; uVar8 = uVar8 + 0x34) {
    }
    fn_001008c4(*param_1,(int)(param_1[2] - *param_1) / 0x34,0);
    *param_1 = (uint)puVar4;
    param_1[1] = (uint)(puVar4 + (iVar6 / 0x34) * 0xd + param_3 * 0xd);
    param_1[2] = (uint)(puVar4 + uVar9 * 0xd);
    return;
  }
  puVar7 = param_2 + param_3 * 0xd;
  param_1[1] = (uint)(puVar5 + param_3 * 0xd);
  if (puVar5 <= puVar7) {
    puVar4 = puVar5;
    for (param_3 = param_3 - ((int)puVar5 - (int)param_2) / 0x34; puVar1 = param_2, param_3 != 0;
        param_3 = param_3 + -1) {
      if (puVar4 != (undefined4 *)0x0) {
        uVar10 = param_4[1];
        uVar11 = param_4[2];
        uVar12 = param_4[3];
        uVar13 = param_4[4];
        uVar14 = param_4[5];
        uVar15 = param_4[6];
        uVar16 = param_4[7];
        *puVar4 = *param_4;
        puVar4[1] = uVar10;
        puVar4[2] = uVar11;
        puVar4[3] = uVar12;
        puVar4[4] = uVar13;
        puVar4[5] = uVar14;
        puVar4[6] = uVar15;
        puVar4[7] = uVar16;
        uVar10 = param_4[9];
        uVar11 = param_4[10];
        uVar12 = param_4[0xb];
        uVar13 = param_4[0xc];
        puVar4[8] = param_4[8];
        puVar4[9] = uVar10;
        puVar4[10] = uVar11;
        puVar4[0xb] = uVar12;
        puVar4[0xc] = uVar13;
      }
      puVar4 = puVar4 + 0xd;
    }
    for (; puVar1 != puVar5; puVar1 = puVar1 + 0xd) {
      if (puVar7 != (undefined4 *)0x0) {
        uVar10 = puVar1[1];
        uVar11 = puVar1[2];
        uVar12 = puVar1[3];
        uVar13 = puVar1[4];
        uVar14 = puVar1[5];
        uVar15 = puVar1[6];
        uVar16 = puVar1[7];
        *puVar7 = *puVar1;
        puVar7[1] = uVar10;
        puVar7[2] = uVar11;
        puVar7[3] = uVar12;
        puVar7[4] = uVar13;
        puVar7[5] = uVar14;
        puVar7[6] = uVar15;
        puVar7[7] = uVar16;
        uVar10 = puVar1[9];
        uVar11 = puVar1[10];
        uVar12 = puVar1[0xb];
        uVar13 = puVar1[0xc];
        puVar7[8] = puVar1[8];
        puVar7[9] = uVar10;
        puVar7[10] = uVar11;
        puVar7[0xb] = uVar12;
        puVar7[0xc] = uVar13;
      }
      puVar7 = puVar7 + 0xd;
    }
    fn_00147d98(param_2,puVar5,param_4);
    return;
  }
  puVar2 = puVar5 + param_3 * -0xd;
  puVar1 = puVar5;
  for (puVar4 = puVar2; puVar4 != puVar5; puVar4 = puVar4 + 0xd) {
    if (puVar1 != (undefined4 *)0x0) {
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      uVar13 = puVar4[4];
      uVar14 = puVar4[5];
      uVar15 = puVar4[6];
      uVar16 = puVar4[7];
      *puVar1 = *puVar4;
      puVar1[1] = uVar10;
      puVar1[2] = uVar11;
      puVar1[3] = uVar12;
      puVar1[4] = uVar13;
      puVar1[5] = uVar14;
      puVar1[6] = uVar15;
      puVar1[7] = uVar16;
      uVar10 = puVar4[9];
      uVar11 = puVar4[10];
      uVar12 = puVar4[0xb];
      uVar13 = puVar4[0xc];
      puVar1[8] = puVar4[8];
      puVar1[9] = uVar10;
      puVar1[10] = uVar11;
      puVar1[0xb] = uVar12;
      puVar1[0xc] = uVar13;
    }
    puVar1 = puVar1 + 0xd;
  }
  if (param_2 < puVar2) {
    if (0 < (int)puVar2 - (int)param_2) {
      uVar9 = ((int)puVar2 - (int)param_2) / 0x34;
      if ((uVar9 & 1) != 0) {
        uVar10 = puVar2[-0xc];
        uVar11 = puVar2[-0xb];
        uVar12 = puVar2[-10];
        uVar13 = puVar2[-9];
        uVar14 = puVar2[-8];
        uVar15 = puVar2[-7];
        uVar16 = puVar2[-6];
        puVar4 = puVar2 + -5;
        puVar5[-0xd] = puVar2[-0xd];
        puVar5[-0xc] = uVar10;
        puVar5[-0xb] = uVar11;
        puVar5[-10] = uVar12;
        puVar5[-9] = uVar13;
        puVar5[-8] = uVar14;
        puVar5[-7] = uVar15;
        puVar5[-6] = uVar16;
        uVar10 = puVar2[-4];
        uVar11 = puVar2[-3];
        uVar12 = puVar2[-2];
        uVar13 = puVar2[-1];
        puVar2 = puVar2 + -0xd;
        puVar5[-5] = *puVar4;
        puVar5[-4] = uVar10;
        puVar5[-3] = uVar11;
        puVar5[-2] = uVar12;
        puVar5[-1] = uVar13;
        puVar5 = puVar5 + -0xd;
      }
      for (iVar6 = (int)uVar9 >> 1; iVar6 != 0; iVar6 = iVar6 + -1) {
        uVar10 = puVar2[-0xc];
        uVar11 = puVar2[-0xb];
        uVar12 = puVar2[-10];
        uVar13 = puVar2[-9];
        uVar14 = puVar2[-8];
        uVar15 = puVar2[-7];
        uVar16 = puVar2[-6];
        puVar5[-0xd] = puVar2[-0xd];
        puVar5[-0xc] = uVar10;
        puVar5[-0xb] = uVar11;
        puVar5[-10] = uVar12;
        puVar5[-9] = uVar13;
        puVar5[-8] = uVar14;
        puVar5[-7] = uVar15;
        puVar5[-6] = uVar16;
        uVar10 = puVar2[-4];
        uVar11 = puVar2[-3];
        uVar12 = puVar2[-2];
        uVar13 = puVar2[-1];
        puVar5[-5] = puVar2[-5];
        puVar5[-4] = uVar10;
        puVar5[-3] = uVar11;
        puVar5[-2] = uVar12;
        puVar5[-1] = uVar13;
        uVar10 = puVar2[-0x19];
        uVar11 = puVar2[-0x18];
        uVar12 = puVar2[-0x17];
        uVar13 = puVar2[-0x16];
        uVar14 = puVar2[-0x15];
        uVar15 = puVar2[-0x14];
        uVar16 = puVar2[-0x13];
        puVar4 = puVar2 + -0x12;
        puVar5[-0x1a] = puVar2[-0x1a];
        puVar5[-0x19] = uVar10;
        puVar5[-0x18] = uVar11;
        puVar5[-0x17] = uVar12;
        puVar5[-0x16] = uVar13;
        puVar5[-0x15] = uVar14;
        puVar5[-0x14] = uVar15;
        puVar5[-0x13] = uVar16;
        uVar10 = puVar2[-0x11];
        uVar11 = puVar2[-0x10];
        uVar12 = puVar2[-0xf];
        uVar13 = puVar2[-0xe];
        puVar2 = puVar2 + -0x1a;
        puVar5[-0x12] = *puVar4;
        puVar5[-0x11] = uVar10;
        puVar5[-0x10] = uVar11;
        puVar5[-0xf] = uVar12;
        puVar5[-0xe] = uVar13;
        puVar5 = puVar5 + -0x1a;
      }
    }
  }
  else {
    for (; param_2 != puVar2; puVar2 = puVar2 + -0xd) {
      uVar10 = puVar2[-0xc];
      uVar11 = puVar2[-0xb];
      uVar12 = puVar2[-10];
      uVar13 = puVar2[-9];
      uVar14 = puVar2[-8];
      uVar15 = puVar2[-7];
      uVar16 = puVar2[-6];
      puVar5[-0xd] = puVar2[-0xd];
      puVar5[-0xc] = uVar10;
      puVar5[-0xb] = uVar11;
      puVar5[-10] = uVar12;
      puVar5[-9] = uVar13;
      puVar5[-8] = uVar14;
      puVar5[-7] = uVar15;
      puVar5[-6] = uVar16;
      uVar10 = puVar2[-4];
      uVar11 = puVar2[-3];
      uVar12 = puVar2[-2];
      uVar13 = puVar2[-1];
      puVar5[-5] = puVar2[-5];
      puVar5[-4] = uVar10;
      puVar5[-3] = uVar11;
      puVar5[-2] = uVar12;
      puVar5[-1] = uVar13;
      puVar5 = puVar5 + -0xd;
    }
  }
  fn_00147d98(param_2,puVar7,param_4);
  return;
}


