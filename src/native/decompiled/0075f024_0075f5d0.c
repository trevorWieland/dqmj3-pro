#include "0075f024_0075f5d0.h"



undefined4 fn_0075f5d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 in_s0;
  undefined1 auStack_270 [512];
  undefined1 auStack_70 [16];
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  uStack_8 = param_3;
  uStack_4 = param_4;
  iVar1 = fn_00100394(auStack_270,0x200,param_2,&uStack_8);
  if (0x1ff < iVar1) {
    iVar1 = 0x1ff;
  }
  fn_0017821c(auStack_70,param_1,0x48);
  fn_0075f658(auStack_70,auStack_270,iVar1);
  *(undefined4 *)(param_1 + 0x10) = local_60;
  *(undefined4 *)(param_1 + 0x14) = uStack_5c;
  return in_s0;
}



undefined1 * fn_0075f574(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  
  fn_0017821c(auStack_60,param_1,0x48);
  fn_0075f658(auStack_60,param_2,param_3);
  *(undefined4 *)(param_1 + 0x10) = local_50;
  *(undefined4 *)(param_1 + 0x14) = uStack_4c;
  return auStack_60;
}



void fn_0075f490(int param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  undefined8 uVar2;
  int local_30 [2];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  uVar2 = 0;
  *param_2 = 0.0;
  param_2[2] = 0.0;
  param_2[1] = 0.0;
  param_2[3] = 0.0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  local_30[0] = param_3;
  do {
    local_28 = (float)uVar2;
    local_24 = local_28;
    local_20 = local_28;
    local_1c = local_28;
    fn_0075f024(param_1,&local_28,local_30);
    fVar1 = *param_2;
    if (local_28 < *param_2) {
      fVar1 = local_28;
    }
    *param_2 = fVar1;
    if (param_2[1] <= local_24) {
      local_24 = param_2[1];
    }
    param_2[1] = local_24;
    if (local_20 <= param_2[2]) {
      local_20 = param_2[2];
    }
    param_2[2] = local_20;
    if (local_1c <= param_2[3]) {
      local_1c = param_2[3];
    }
    param_2[3] = local_1c;
  } while (0 < (param_3 + param_4) - local_30[0]);
  return;
}



undefined4 fn_0075f024(undefined1 *param_1,float *param_2,uint *param_3,int param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
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
  
  uVar9 = *param_3;
  uVar17 = 0;
  uVar19 = 0;
  local_e0 = *(undefined4 *)(param_1 + 8);
  uStack_dc = *(undefined4 *)(param_1 + 0xc);
  local_e8 = 0.0;
  local_e4 = 0;
  uVar10 = 0;
  uVar11 = 0;
  local_d8 = 0;
  local_d4 = local_d4 & 0xffff0000;
  local_f8 = 0;
  bVar1 = *(int *)(param_1 + 0x30) < 0x7f7fffff;
  local_f4 = param_1;
  local_f0 = uVar9;
  uStack_ec = uVar9 + param_4;
  puStack_34 = param_1;
  pfStack_30 = param_2;
  puStack_2c = param_3;
  local_28 = param_4;
  fn_006e6544(&local_104,*(undefined4 *)(param_1 + 0x24),0);
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
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar14 < fVar18) << 0x1f | (uint)(fVar14 == fVar18) << 0x1e
          | (uint)(fVar18 <= fVar14) << 0x1d;
  uVar13 = uVar6 | (uint)(NAN(fVar14) || NAN(fVar18)) << 0x1c;
  bVar4 = (byte)(uVar6 >> 0x18);
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
  local_104 = uVar9;
  (**(code **)(**(int **)(param_1 + 0x44) + 0x1c))(*(int **)(param_1 + 0x44),&local_f4);
  if (((uint)local_fc & 1) == 0) {
    pcVar8 = local_100;
  }
  else {
    pcVar8 = *(code **)(local_100 + *(int *)(auStack_a8 + ((int)local_fc >> 1) + -0x5c));
  }
  uVar6 = (*pcVar8)();
joined_r0x0075f154:
  if (uVar9 + param_4 < local_104) {
LAB_0075f46c:
    *param_3 = local_104;
    (**(code **)(**(int **)(param_1 + 0x44) + 0x20))(*(int **)(param_1 + 0x44),&local_f4);
    return local_f8;
  }
  fVar15 = (float)uVar19;
  if (uVar6 < 0x20) {
    local_54 = (float)uVar20;
    local_d8 = uVar10 ^ 1;
    *(float *)(param_1 + 0x10) = fVar15;
    local_f0 = local_104;
    local_58 = fVar15;
    local_50 = local_54;
    local_4c = local_54;
    if ((bVar1 && uVar6 != 10) && uVar11 != 0) {
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
                (*(int **)(param_1 + 0x44),&local_118,uVar6,&local_d0);
      fVar14 = local_110 - local_118;
      fVar15 = (float)uVar20;
      uVar2 = uVar13 & 0xfffffff;
      uVar3 = uVar2 | (uint)(fVar14 < fVar15) << 0x1f | (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar3 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar3 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_0075f258;
      fVar14 = *(float *)(param_1 + 0x30);
      fVar15 = local_98 - local_e8;
      uVar2 = uVar2 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
      uVar13 = uVar2 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if ((bool)(bVar4 >> 6 & 1) || bVar4 >> 7 != ((byte)(uVar13 >> 0x1c) & 1)) goto LAB_0075f258;
      local_f8 = 1;
      uVar6 = 10;
      local_d4 = local_d4 & 0xffff0000;
      local_104 = uVar11;
      goto joined_r0x0075f154;
    }
LAB_0075f258:
    iVar7 = (**(code **)(**(int **)(param_1 + 0x44) + 0x10))
                      (*(int **)(param_1 + 0x44),&local_58,uVar6,&local_f4);
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
    if (iVar7 == 4) {
      *param_3 = local_28 + *param_3;
      return 0;
    }
    if (iVar7 == 1) {
      uVar10 = 0;
    }
    else {
      if (iVar7 == 2) {
        uVar10 = 1;
        goto LAB_0075f424;
      }
      if (iVar7 == 3) goto LAB_0075f46c;
    }
  }
  else {
    if (uVar10 != 0) {
      fVar14 = *(float *)(param_1 + 0x34);
    }
    fVar16 = fVar15;
    if (uVar10 != 0) {
      fVar16 = fVar14 + fVar15;
    }
    if (param_1[0x2c] == '\0') {
      uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x3c))(*(int **)(param_1 + 0x24),uVar6);
      fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x16) & 3);
      fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    }
    else {
      fVar16 = *(float *)(param_1 + 0x1c) + fVar16;
    }
    uVar5 = (**(code **)(**(int **)(param_1 + 0x24) + 0x4c))
                      (*(int **)(param_1 + 0x24),local_d4 & 0xffff,uVar6);
    fVar14 = (float)VectorSignedToFloat(uVar5,(byte)(uVar13 >> 0x16) & 3);
    fVar16 = fVar16 + fVar14 * *(float *)(param_1 + 8);
    uVar19 = CONCAT44(fVar16,fVar15);
    if (bVar1 && uVar11 != 0) {
      fVar15 = *(float *)(param_1 + 0x30);
      fVar14 = fVar16 - (float)((ulonglong)uVar20 >> 0x20);
      uVar2 = uVar13 & 0xfffffff | (uint)(fVar14 < fVar15) << 0x1f |
              (uint)(fVar14 == fVar15) << 0x1e;
      uVar13 = uVar2 | (uint)(NAN(fVar14) || NAN(fVar15)) << 0x1c;
      bVar4 = (byte)(uVar2 >> 0x18);
      if (!(bool)(bVar4 >> 6 & 1) && bVar4 >> 7 == ((byte)(uVar13 >> 0x1c) & 1)) {
        uVar6 = 10;
        local_f8 = 1;
        local_d4 = (uint)((unsigned int)(local_d4) >> 16) & 0xffff << 0x10;
        local_104 = uVar11;
        goto joined_r0x0075f154;
      }
    }
    uVar19 = (ulonglong)(uint)fVar16;
    uVar10 = 1;
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
    local_d4 = CONCAT22(((unsigned int)(local_d4) >> 16) & 0xffff,(short)uVar6);
  }
LAB_0075f424:
  if (bVar1) {
    uVar11 = local_104;
  }
  bVar12 = ((uint)local_fc & 1) == 0;
  pcVar8 = local_fc;
  if (bVar12) {
    pcVar8 = local_100;
  }
  if (!bVar12) {
    pcVar8 = *(code **)(local_100 + *(int *)(auStack_a8 + ((int)local_fc >> 1) + -0x5c));
  }
  uVar6 = (*pcVar8)();
  goto joined_r0x0075f154;
}


