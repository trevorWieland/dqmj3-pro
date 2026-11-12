#include "00221a90_00223510.h"



void fn_00223510(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_18 [12];
  
  if ((char)param_1[0x65] != -1) {
    (**(code **)(*param_1 + 0x54))(param_1,0);
  }
  if ((int *)param_1[0x60] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x60] + 4))();
    param_1[0x60] = 0;
  }
  uVar1 = fn_006f7a9c(DAT_008977e0);
  iVar2 = fn_00278bc8(uVar1,param_1 + 0x66);
  if (iVar2 != 0) {
    uVar1 = fn_006f7a9c(DAT_008977e0);
    fn_00278b7c(uVar1,param_1 + 0x66);
    piVar3 = (int *)fn_001c6d34(auStack_18);
    iVar2 = piVar3[1];
    iVar4 = piVar3[2];
    param_1[0x66] = *piVar3;
    param_1[0x67] = iVar2;
    param_1[0x68] = iVar4;
  }
  param_1[100] = 0;
  return;
}



void fn_002234bc(int param_1)

{
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_005fe8a4(*(int *)(param_1 + 0xe4),param_1 + 0x20,param_1 + 0x2c,param_1 + 0x38);
  }
  if (*(int *)(param_1 + 0xe8) == -1) {
    return;
  }
  fn_0023e574(*(undefined4 *)(DAT_008977e0 + 0x2c));
  return;
}



void fn_00222020(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined8 uVar12;
  undefined4 uVar14;
  undefined8 uVar13;
  float fVar15;
  float fVar16;
  undefined1 auStack_180 [68];
  undefined4 local_13c;
  float local_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float local_120;
  float fStack_11c;
  float local_118;
  undefined4 local_114;
  undefined4 local_110;
  float local_10c;
  undefined4 local_108;
  float local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  undefined1 auStack_e8 [4];
  undefined4 local_e4;
  undefined1 auStack_a0 [8];
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  
  iVar3 = fn_006f7a20(DAT_008977e0);
  if (iVar3 != 0) {
    return;
  }
  cVar1 = (char)param_1[0x7c];
  fVar11 = 9.0;
  fVar9 = 3.0;
  if (cVar1 == '\x01' || cVar1 == '\x03') {
    fVar11 = 4.5;
  }
  if (param_2 != 0) {
    fVar11 = fVar11 * 3.0;
  }
  uVar14 = 0x3f000000;
  iVar3 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  iVar4 = param_1[0x8a];
  if (iVar3 != 1) {
    fVar11 = fVar11 * fVar9;
  }
  fVar10 = 0.0;
  fVar15 = 40.743664;
  uVar12 = *(undefined8 *)(iVar4 + 0x20);
  uVar13 = CONCAT44(uVar14,*(undefined4 *)(iVar4 + 0x28));
  fVar9 = fVar10;
  if (cVar1 == '\0') {
    fVar5 = *(float *)(iVar4 + 0x30) * 40.743664;
    fn_00525abc();
    fVar10 = *(float *)(param_1[0x8a] + 0x30) * fVar15;
    fn_00194408();
LAB_00222168:
  }
  else {
    if (cVar1 == '\x01') {
      fVar5 = *(float *)(iVar4 + 0x30) * 40.743664;
      fn_00194408();
      fVar15 = *(float *)(param_1[0x8a] + 0x30) * fVar15;
      fn_00525abc();
    }
    else {
      if (cVar1 != '\x02') {
        fVar5 = fVar10;
        if (cVar1 != '\x03') goto LAB_0022216c;
        fVar5 = *(float *)(iVar4 + 0x30) * 40.743664;
        fn_00194408();
        fVar5 = -fVar5;
        fVar10 = *(float *)(param_1[0x8a] + 0x30) * fVar15;
        fn_00525abc();
        goto LAB_00222168;
      }
      fVar5 = *(float *)(iVar4 + 0x30) * 40.743664;
      fn_00525abc();
      fVar5 = -fVar5;
      fVar15 = *(float *)(param_1[0x8a] + 0x30) * fVar15;
      fn_00194408();
    }
    fVar10 = -fVar15;
  }
LAB_0022216c:
  local_134 = (float)((ulonglong)uVar12 >> 0x20);
  fVar15 = fVar9;
  if (param_2 == 0) {
    local_138 = (float)uVar12 - fVar5 * fVar11;
    fStack_130 = (float)uVar13 - fVar10 * fVar11;
    local_134 = local_134 - fVar9 * fVar11;
    fn_001db0dc(param_1,&local_138);
  }
  else {
    fVar6 = (float)uVar12 - fVar5 * fVar11;
    local_134 = local_134 - fVar9 * fVar11;
    fStack_130 = (float)uVar13 - fVar10 * fVar11;
    local_138 = fVar6;
    (**(code **)(*param_1 + 0x10))(param_1,&local_138);
    param_1[0x4c] = *(int *)(param_1[0x8a] + 0x130);
    fVar9 = fVar6;
  }
  iVar3 = fn_006a99b0(param_1);
  if (iVar3 != 0) {
    fn_006b26ac(param_1);
    local_138 = (float)param_1[8];
    fStack_130 = (float)param_1[10];
    local_134 = (float)param_1[9] - fVar9;
    (**(code **)(*param_1 + 0x10))(param_1,&local_138);
  }
  param_1[0xc] = *(int *)(param_1[0x8a] + 0x30);
  uVar2 = fn_006aa6e0();
  *(undefined1 *)((int)param_1 + 0x23f) = uVar2;
  fn_0078b030(param_1 + 0x7f);
  iVar3 = 10;
  if (param_2 != 0) {
    iVar3 = 0x1e;
  }
  if (cVar1 == '\x01' || cVar1 == '\x03') {
    fVar9 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
    iVar3 = (int)(fVar9 * (float)((ulonglong)uVar13 >> 0x20));
  }
  iVar4 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (iVar4 != 1) {
    iVar3 = iVar3 * 3;
  }
  if (-1 < iVar3) {
    fVar6 = 1.0;
    fVar9 = (float)uVar13;
    uVar14 = 0x3dcccccd;
    fVar16 = 0.024543693;
    iVar4 = iVar3;
    do {
      fVar8 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x16) & 3);
      fVar8 = fVar6 / fVar8;
      fVar7 = (float)VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
      local_12c = (float)uVar12 - fVar5 * fVar11 * fVar8 * fVar7;
      fStack_128 = (float)((ulonglong)uVar12 >> 0x20) - fVar15 * fVar11 * fVar8 * fVar7;
      local_124 = fVar9 - fVar10 * fVar11 * fVar8 * fVar7;
      fVar8 = fVar5;
      local_120 = fVar5;
      fStack_11c = fVar15;
      local_118 = fVar10;
      local_114 = uVar14;
      local_110 = uVar14;
      fn_00525bd0();
      fVar7 = fVar5 * fVar16;
      local_108 = *(undefined4 *)(param_1[0x8a] + 0x130);
      fVar5 = fVar8;
      local_10c = fVar7;
      fn_006aaa40(param_1[0x8a]);
      local_104 = fVar7;
      fn_0017821c(auStack_e8,param_1[0x8a] + 0x26c,0x48);
      local_100 = local_e4;
      fn_0017821c(auStack_a0,param_1[0x8a] + 0x26c,0x48);
      local_fc = local_98;
      uStack_f8 = uStack_94;
      uStack_f4 = uStack_90;
      fn_0017821c(auStack_180,param_1[0x8a] + 0x26c,0x48);
      local_f0 = local_13c;
      local_ec = fn_006aba74(param_1[0x8a]);
      local_eb = fn_006aa6e0(param_1[0x8a]);
      local_ea = *(undefined1 *)(param_1[0x8a] + 0x400);
      fn_00224ae8(param_1,&local_12c);
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x83) = 0;
  *(undefined1 *)((int)param_1 + 0x20d) = 0;
  *(undefined1 *)((int)param_1 + 0x20e) = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  return;
}



void fn_00221a90(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float in_s0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  float local_d0;
  float local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  float local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined1 local_a8;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined1 auStack_a0 [72];
  undefined1 auStack_58 [4];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_14;
  
  iVar1 = fn_006b51c0(*(undefined4 *)(DAT_00897804 + 0x1c));
  if (((((iVar1 == 0) && (iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c)), iVar1 == 1))
       && (iVar1 = fn_006a99b0(param_1), iVar1 != 0)) &&
      ((iVar1 = fn_006aba74(*(undefined4 *)(param_1 + 0x228)), iVar1 != 0 &&
       ((iVar1 = fn_006aa6e0(*(undefined4 *)(param_1 + 0x228)), iVar1 != 0 ||
        (0 < *(int *)(*(int *)(param_1 + 0x228) + 0x228))))))) ||
     (*(char *)(param_1 + 0x20c) == '\x0e')) {
    fn_0078b030(param_1 + 0x1fc);
    return;
  }
  if ((*(char *)(*(int *)(param_1 + 0x228) + 0x22d) != '\x02') &&
     (iVar1 = fn_006f7a20(DAT_008977e0), iVar1 == 0)) {
    iVar3 = *(int *)(param_1 + 0x200);
    iVar2 = iVar3 - *(int *)(param_1 + 0x1fc);
    iVar1 = iVar2 >> 0x1f;
    if (iVar2 / 0x44 + iVar1 != iVar1) {
      iVar1 = *(int *)(param_1 + 0x228);
      in_s0 = *(float *)(iVar1 + 0x20);
      if (((in_s0 == *(float *)(iVar3 + -0x44)) &&
          (in_s0 = *(float *)(iVar1 + 0x24), in_s0 == *(float *)(iVar3 + -0x40))) &&
         (in_s0 = *(float *)(iVar1 + 0x28), in_s0 == *(float *)(iVar3 + -0x3c))) {
        return;
      }
    }
    iVar1 = *(int *)(param_1 + 0x228);
    local_e8 = *(undefined4 *)(iVar1 + 0x20);
    uStack_e4 = *(undefined4 *)(iVar1 + 0x24);
    uStack_e0 = *(undefined4 *)(iVar1 + 0x28);
    iVar1 = *(int *)(param_1 + 0x228);
    local_dc = *(undefined4 *)(iVar1 + 0x44);
    uStack_d8 = *(undefined4 *)(iVar1 + 0x48);
    uStack_d4 = *(undefined4 *)(iVar1 + 0x4c);
    fn_006f7a48(DAT_008977e0);
    fn_006a7cb0();
    local_d0 = in_s0;
    fn_006f7a48(DAT_008977e0);
    fn_006a7cbc();
    local_c8 = *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x30);
    local_c4 = *(undefined4 *)(*(int *)(param_1 + 0x228) + 0x130);
    local_cc = in_s0;
    fn_006aaa40(*(undefined4 *)(param_1 + 0x228));
    local_c0 = in_s0;
    fn_0017821c(auStack_a0,*(int *)(param_1 + 0x228) + 0x26c,0x48);
    fn_0017821c(auStack_58,auStack_a0,0x48);
    local_bc = local_54;
    fn_0017821c(auStack_a0,*(int *)(param_1 + 0x228) + 0x26c,0x48);
    fn_0017821c(auStack_58,auStack_a0,0x48);
    local_b8 = local_50;
    uStack_b4 = uStack_4c;
    uStack_b0 = uStack_48;
    fn_0017821c(auStack_a0,*(int *)(param_1 + 0x228) + 0x26c,0x48);
    fn_0017821c(auStack_58,auStack_a0,0x48);
    local_ac = local_14;
    local_a8 = fn_006aba74(*(undefined4 *)(param_1 + 0x228));
    local_a7 = fn_006aa6e0(*(undefined4 *)(param_1 + 0x228));
    local_a6 = *(undefined1 *)(*(int *)(param_1 + 0x228) + 0x400);
    fn_00224ae8(param_1,&local_e8);
  }
  return;
}


