#include "001a24d0_001a2990.h"



uint fn_001a2990(uint param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  undefined4 in_cr13;
  undefined4 in_cr15;
  ulonglong uVar10;
  
  uVar10 = CONCAT44(param_2,param_1);
  uVar6 = 0xff000000;
  bVar1 = (byte)(param_2 >> 0x18);
  bVar9 = (~(param_2 << 1) & 0xff000000) == 0;
  if (!bVar9) {
    bVar1 = (byte)(param_1 >> 0x18);
  }
  bVar8 = (bool)(bVar1 >> 7);
  if (bVar9 || (~(param_1 << 1) & 0xff000000) == 0) {
    uVar10 = fn_0019d5b0();
    if (!bVar8) {
      coprocessor_function(0xf,0xf,7,in_cr15,in_cr15,in_cr13);
    }
LAB_001a2a98:
    uVar5 = (uint)uVar10;
    if ((uVar6 & (uint)(uVar10 >> 0x27)) == 0) {
      return 0x7fc00000;
    }
    if ((uVar10 & 0x7fffffff) != 0) {
      uVar5 = 0;
    }
    return uVar5;
  }
  uVar6 = 0xff0000;
  uVar5 = param_2 >> 7 & 0xff0000;
  if ((param_1 & 0x80000000) != 0) {
    uVar5 = uVar5 | 5;
  }
  uVar4 = param_1 >> 7 & 0xff0000;
  if (uVar4 == 0 || (uVar5 & 0xff0000) == 0) goto LAB_001a2a98;
  uVar6 = param_1 << 8 | 0x80000000;
  uVar3 = param_2 << 8 | 0x80000000;
  uVar5 = uVar5 - 0x10000;
  for (; (int)uVar5 < (int)uVar4; uVar4 = uVar4 - 0x10000) {
    uVar5 = uVar5 & 0xfffffffd;
    uVar2 = uVar6;
    if (0x7fffffff < uVar6) {
      uVar2 = uVar6 - uVar3;
      uVar5 = uVar5 | 2;
      if ((int)uVar6 < (int)uVar3) {
        uVar2 = -uVar2;
        uVar5 = uVar5 ^ 1;
      }
    }
    uVar6 = uVar2 << 1;
  }
  if ((((int)uVar5 >> 0x10 <= (int)uVar4 >> 0x10) && (uVar3 <= uVar6)) &&
     ((uVar6 != uVar3 || ((uVar5 & 2) != 0)))) {
    uVar6 = -(uVar6 + param_2 * -0x200);
    uVar5 = uVar5 ^ 1;
  }
  uVar3 = uVar6 << 1;
  uVar2 = uVar4;
  if (SUB41(uVar6 >> 0x1f,0)) {
LAB_001a2a74:
    if (0 < (int)uVar2) goto LAB_001a2a7c;
  }
  else if ((int)uVar3 < 0) {
    uVar2 = uVar4 - 0x10000;
    uVar3 = uVar6 << 2;
    if (uVar2 != 0 && 0xffff < (int)uVar4) goto LAB_001a2a74;
  }
  else {
    if (uVar3 == 0) {
      return (uVar5 & 4) << 0x1d;
    }
    iVar7 = LZCOUNT(uVar3);
    uVar3 = uVar3 << iVar7 + 1;
    uVar2 = uVar4 + (iVar7 + 1) * -0x10000;
  }
  if ((int)uVar2 < 1) {
    return 0;
  }
LAB_001a2a7c:
  return uVar2 << 7 | uVar3 >> 9 | uVar5 << 0x1f;
}



undefined1 * fn_001a293c(int *param_1,undefined1 *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  
  if ((uint)param_1[2] <= (uint)param_1[1]) {
    iVar3 = param_1[1] << 1;
    if (iVar3 == 0) {
      iVar3 = 4;
    }
    iVar1 = fn_0018388c(*param_1,param_1[2],iVar3);
    *param_1 = iVar1;
    param_1[2] = iVar3;
  }
  puVar2 = (undefined1 *)(*param_1 + param_1[1]);
  param_1[1] = param_1[1] + 1;
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = *param_2;
  }
  return puVar2;
}



undefined4 fn_001a24d0(undefined1 *param_1,float *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  code *pcVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  uint in_fpscr;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  float local_118;
  float local_114;
  float local_110;
  float local_10c;
  uint local_104;
  code *local_100;
  code *local_fc;
  undefined4 local_f8;
  undefined1 *local_f4;
  uint local_f0;
  uint uStack_ec;
  float local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  uint local_d8;
  undefined4 local_d4;
  undefined1 *local_d0;
  uint uStack_cc;
  uint uStack_c8;
  float fStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined1 auStack_a8 [16];
  float local_98;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  undefined1 *puStack_34;
  float *pfStack_30;
  uint *puStack_2c;
  int local_28;
  
  uVar8 = *param_3;
  uVar17 = 0;
  uVar19 = 0;
  local_e0 = *(undefined4 *)(param_1 + 8);
  uStack_dc = *(undefined4 *)(param_1 + 0xc);
  uVar10 = uVar8 + param_4 * 2;
  uVar9 = 0;
  local_e8 = 0.0;
  local_e4 = 0;
  uVar11 = 0;
  local_d8 = 0;
  local_d4 = local_d4 & 0xffff0000;
  local_f8 = 0;
  bVar1 = *(int *)(param_1 + 0x30) < 0x7f7fffff;
  local_f4 = param_1;
  local_f0 = uVar8;
  uStack_ec = uVar10;
  puStack_34 = param_1;
  pfStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  fn_001a49fc(&local_104,*(undefined4 *)(param_1 + 0x24),0);
  uVar5 = 0;
  if (*(int **)(param_1 + 0x24) != (int *)0x0) {
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x28))();
  }
  fVar14 = *(float *)(param_1 + 0x38);
  fVar16 = *(float *)(param_1 + 0xc);
  fVar18 = (float)uVar19;
  uVar20 = CONCAT44(uVar17,fVar18);
  fVar15 = (float)VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  *param_2 = fVar18;
  param_2[2] = fVar18;
  fVar14 = (fVar14 + fVar15 * fVar16) - fVar14;
  uVar3 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar18) << 0x1f | (uint)(fVar14 == fVar18) << 0x1e
          | (uint)(fVar18 <= fVar14) << 0x1d;
  uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar18)) << 0x1c;
  bVar4 = (byte)(uVar3 >> 0x18);
  if ((bool)(bVar4 >> 5 & 1)) {
    fVar15 = fVar18;
  }
  else {
    fVar15 = fVar14;
  }
  if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) {
    fVar14 = fVar18;
  }
  param_2[1] = fVar15;
  param_2[3] = fVar14;
  local_104 = uVar8;
  (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))(*(int **)(param_1 + 0x44),&local_f4);
  if (((uint)local_fc & 1) == 0) {
    pcVar7 = local_100;
  }
  else {
    pcVar7 = *(code **)(local_100 + *(int *)(auStack_a8 + ((int)local_fc >> 1) + -0x5c));
  }
  uVar8 = (*pcVar7)();
joined_r0x001a2600:
  if (uVar10 < local_104) {
LAB_001a2918:
    *param_3 = local_104;
    (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(*(int **)(param_1 + 0x44),&local_f4);
    return local_f8;
  }
  fVar15 = (float)uVar19;
  if (uVar8 < 0x20) {
    local_54 = (float)uVar20;
    local_d8 = uVar9 ^ 1;
    *(float *)(param_1 + 0x10) = fVar15;
    local_f0 = local_104;
    local_58 = fVar15;
    local_50 = local_54;
    local_4c = local_54;
    if ((bVar1 && uVar8 != 10) && uVar11 != 0) {
      local_d0 = local_f4;
      uStack_cc = local_104;
      uStack_c8 = uStack_ec;
      fStack_c4 = local_e8;
      uStack_c0 = local_e4;
      uStack_bc = local_e0;
      uStack_b8 = uStack_dc;
      uStack_b4 = local_d8;
      local_b0 = local_d4;
      fn_0017821c(auStack_a8,param_1,0x48);
      local_118 = (float)uVar20;
      local_d0 = auStack_a8;
      local_114 = local_118;
      local_110 = local_118;
      local_10c = local_118;
      (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                (*(int **)(param_1 + 0x44),&local_118,uVar8,&local_d0);
      fVar14 = local_110 - local_118;
      fVar15 = (float)uVar20;
      uVar3 = uVar13 & 0xfffffff;
      uVar2 = uVar3 | (uint)(fVar14 < fVar15) << 0x1f | (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar2 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_001a2704;
      fVar14 = *(float *)(param_1 + 0x30);
      fVar15 = local_98 - local_e8;
      uVar3 = uVar3 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
      uVar13 = uVar3 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
      bVar4 = (byte)(uVar3 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_001a2704;
      local_f8 = 1;
      uVar8 = 10;
      local_d4 = local_d4 & 0xffff0000;
      local_104 = uVar11;
      goto joined_r0x001a2600;
    }
LAB_001a2704:
    iVar6 = (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                      (*(int **)(param_1 + 0x44),&local_58,uVar8,&local_f4);
    local_104 = local_f0;
    uVar13 = uVar13 & 0xfffffff;
    fVar14 = *param_2;
    if (local_58 < *param_2) {
      fVar14 = local_58;
    }
    *param_2 = fVar14;
    fVar14 = local_54;
    if (param_2[1] <= local_54) {
      fVar14 = param_2[1];
    }
    param_2[1] = fVar14;
    fVar14 = local_50;
    if (local_50 <= param_2[2]) {
      fVar14 = param_2[2];
    }
    param_2[2] = fVar14;
    fVar14 = local_4c;
    if (local_4c <= param_2[3]) {
      fVar14 = param_2[3];
    }
    param_2[3] = fVar14;
    uVar19 = (ulonglong)*(uint *)(param_1 + 0x10);
    if (iVar6 == 4) {
      *param_3 = *param_3 + local_28 * 2;
      return 0;
    }
    if (iVar6 == 1) {
      uVar9 = 0;
    }
    else {
      if (iVar6 == 2) {
        uVar9 = 1;
        goto LAB_001a28d0;
      }
      if (iVar6 == 3) goto LAB_001a2918;
    }
  }
  else {
    if (uVar9 != 0) {
      fVar14 = *(float *)(param_1 + 0x34);
    }
    fVar16 = fVar15;
    if (uVar9 != 0) {
      fVar16 = fVar14 + fVar15;
    }
    if (param_1[0x2c] == '\0') {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(*(int **)(param_1 + 0x24),uVar8);
      fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x16) & 3);
      fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x1c) + fVar16;
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                      (*(int **)(param_1 + 0x24),local_d4 & 0xffff,uVar8);
    fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x16) & 3);
    fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    uVar19 = CONCAT44(fVar16,fVar15);
    if (bVar1 && uVar11 != 0) {
      fVar15 = *(float *)(param_1 + 0x30);
      fVar14 = fVar16 - (float)((ulonglong)uVar20 >> 0x20);
      uVar3 = uVar13 & 0xfffffff | (uint)(fVar14 < fVar15) << 0x1f |
              (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar3 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar13 >> 0x1c) & 1)) {
        uVar8 = 10;
        local_f8 = 1;
        local_d4 = (uint)((unsigned int)(local_d4) >> 16) & 0xffff << 0x10;
        local_104 = uVar11;
        goto joined_r0x001a2600;
      }
    }
    uVar19 = (ulonglong)(uint)fVar16;
    uVar9 = 1;
    uVar13 = uVar13 & 0xfffffff;
    fVar14 = *param_2;
    if (fVar16 < *param_2) {
      fVar14 = fVar16;
    }
    *param_2 = fVar14;
    fVar15 = param_2[2];
    if (param_2[2] < fVar16) {
      fVar15 = fVar16;
    }
    param_2[2] = fVar15;
    local_d4 = CONCAT22(((unsigned int)(local_d4) >> 16) & 0xffff,(short)uVar8);
  }
LAB_001a28d0:
  if (bVar1) {
    uVar11 = local_104;
  }
  bVar12 = ((uint)local_fc & 1) == 0;
  pcVar7 = local_fc;
  if (bVar12) {
    pcVar7 = local_100;
  }
  if (!bVar12) {
    pcVar7 = *(code **)(local_100 + *(int *)(auStack_a8 + ((int)local_fc >> 1) + -0x5c));
  }
  uVar8 = (*pcVar7)();
  goto joined_r0x001a2600;
}


