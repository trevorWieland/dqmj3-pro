#include "001db0dc_001db924.h"



void fn_001db924(int *param_1)

{
  undefined1 local_10 [16];
  
  (**(code **)(*param_1 + 0x18))(param_1,local_10);
  return;
}



void fn_001db900(int *param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_58 [56];
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  param_1[0xe] = *param_2;
  param_1[0xf] = iVar2;
  param_1[0x10] = iVar3;
  if ((param_1[0x56] != 0) && ((char)param_1[0x57] != '\0')) {
    (**(code **)(*param_1 + 0x118))(param_1,auStack_58);
    (**(code **)(*param_1 + 0x11c))(param_1);
    uVar4 = 0;
    do {
      iVar2 = *(int *)(param_1[0x56] + uVar4 * 8 + 4);
      if (-1 < iVar2) {
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239fc4(uVar1,uVar4 & 0xff,iVar2,auStack_58);
        (**(code **)(*param_1 + 0x120))(param_1);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_00239ffc(uVar1,uVar4 & 0xff,iVar2,param_1 + 8);
        uVar1 = fn_006f7388(DAT_008977e0);
        fn_0023a030(uVar1,uVar4 & 0xff,iVar2,(int)*(char *)((int)param_1 + 0x15d));
      }
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 3);
  }
  return;
}



void fn_001db8a4(int param_1)

{
  undefined4 in_s0;
  
  if (*(int *)(param_1 + 0xe4) != 0) {
    fn_0017fde4();
    fn_0017fc3c();
  }
  if (*(int *)(param_1 + 0xe8) != -1) {
    fn_0023dc64(*(undefined4 *)(DAT_008977e0 + 0x2c));
  }
  *(undefined4 *)(param_1 + 0xf8) = in_s0;
  return;
}



undefined4 fn_001db768(int param_1,int param_2)

{
  float in_s0;
  float fVar1;
  float in_s1;
  float fVar2;
  float in_s2;
  float fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_1 + 0x20);
  fVar3 = *(float *)(param_2 + 0x20);
  if ((in_s2 <= 0.0) ||
     (fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28),
     (fVar3 - fVar4) * (fVar3 - fVar4) + fVar2 * fVar2 <= in_s2 * in_s2)) {
    fVar2 = *(float *)(param_2 + 0x30);
    if (0.0 < in_s1) {
      fVar1 = fVar2 - *(float *)(param_1 + 0x30);
      fn_005df8f8();
      if (in_s1 < ABS(fVar1)) {
        return 0;
      }
    }
    fVar4 = fVar4 - fVar3;
    fn_00525bd0();
    fVar2 = fVar4 * 0.024543693 - fVar2;
    fn_005df8f8();
    if (in_s0 < ABS(fVar2)) {
      return 1;
    }
  }
  return 0;
}



void fn_001db1dc(int *param_1,float *param_2,int param_3,char param_4,float *param_5)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  float *pfVar5;
  float *pfVar6;
  bool bVar7;
  uint in_fpscr;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_128;
  float local_124;
  float local_120;
  float local_118;
  float local_114;
  float local_110;
  undefined4 local_108;
  float *local_104;
  float *local_100;
  float *local_fc;
  int local_f8;
  int local_f4;
  float local_f0;
  char local_ec;
  undefined1 local_eb;
  undefined1 local_ea;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 auStack_d8 [72];
  undefined1 auStack_90 [112];
  
  local_e8 = (float)param_1[8];
  local_e4 = (float)param_1[9];
  local_e0 = (float)param_1[10];
  local_118 = local_e8 + *param_2;
  local_114 = local_e4 + param_2[1];
  fVar9 = local_e0 + param_2[2];
  local_110 = fVar9;
  iVar2 = fn_001da77c(param_1,&local_118);
  fVar13 = 0.0;
  if (iVar2 != 0) {
    pfVar5 = (float *)param_1[0x40];
    fVar15 = pfVar5[3];
    fVar16 = 1.0;
    pfVar6 = *(float **)(iVar2 + 0x100);
    fVar14 = pfVar6[3];
    fVar12 = (*pfVar6 + *(float *)(iVar2 + 0x20)) - (*pfVar5 + local_118);
    fVar11 = (pfVar6[1] + *(float *)(iVar2 + 0x24)) - (pfVar5[1] + local_114);
    fVar9 = (pfVar6[2] + *(float *)(iVar2 + 0x28)) - (pfVar5[2] + local_110);
    fVar8 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9);
    if (fVar8 == 0.0) {
      do {
        in_fpscr = in_fpscr & 0xfffffff;
        iVar2 = fn_00163868(100);
        fVar12 = (float)VectorSignedToFloat(iVar2 + -0x32,(byte)(in_fpscr >> 0x16) & 3);
        iVar2 = fn_00163868(100);
        fVar11 = (float)VectorSignedToFloat(iVar2 + -0x32,(byte)(in_fpscr >> 0x16) & 3);
        iVar2 = fn_00163868(100);
        fVar9 = (float)VectorSignedToFloat(iVar2 + -0x32,(byte)(in_fpscr >> 0x16) & 3);
        fVar10 = SQRT(fVar12 * fVar12 + fVar11 * fVar11 + fVar9 * fVar9);
      } while (fVar10 == fVar13);
      fVar10 = fVar16 / fVar10;
      fVar8 = 0.1;
      fVar12 = fVar12 * fVar10 * 0.1;
      fVar11 = fVar11 * fVar10 * 0.1;
      fVar9 = fVar9 * fVar10 * 0.1;
    }
    fVar16 = fVar16 / fVar8;
    fVar8 = (fVar15 + fVar14) - fVar8;
    fVar9 = fVar9 * fVar16 * fVar8;
    local_e8 = local_e8 - fVar12 * fVar16 * fVar8;
    local_e4 = local_e4 - fVar11 * fVar16 * fVar8;
    local_e0 = local_e0 - fVar9;
  }
  if (param_3 != 0) {
    fVar8 = *param_2;
    bVar1 = fVar8 == fVar13;
    if (bVar1) {
      fVar9 = param_2[2];
    }
    if (!bVar1 || (!bVar1 || fVar9 != fVar13)) {
      fn_00525bd0();
      param_1[0xc] = (int)(fVar8 * 0.024543693);
    }
  }
  local_108 = 0;
  local_104 = (float *)0x0;
  local_100 = (float *)0x0;
  local_fc = (float *)0x0;
  local_f8 = 0;
  local_f4 = 0;
  local_ec = 1;
  local_eb = 1;
  local_ea = 1;
  local_f0 = fVar13;
  local_108 = fn_006f7388(DAT_008977e0);
  local_fc = (float *)param_1[0x40];
  local_f8 = param_1[0x41] - param_1[0x40] >> 4;
  local_f4 = param_1[0x4d];
  local_f0 = (float)param_1[0x43];
  local_eb = 1;
  local_ea = (char)param_1[0x37] == '\0';
  local_104 = &local_e8;
  local_100 = param_2;
  local_ec = param_4;
  fn_00301f50(auStack_d8,0x48);
  fn_00301f50(auStack_90,0x48);
  iVar2 = fn_003415b0();
  if (iVar2 == 0) {
    uVar4 = (**(code **)(*param_1 + 0xf0))(param_1);
    uVar3 = fn_0023a7f4(&local_108,uVar4,&local_e8,auStack_d8,auStack_90);
    if ((uVar3 & 0x10) != 0) {
      local_e8 = (float)param_1[8];
      local_e4 = (float)param_1[9];
      local_e0 = (float)param_1[10];
    }
    (**(code **)(*param_1 + 0x104))(param_1,auStack_d8,auStack_90,uVar3,&local_e8,param_2);
    if (param_5 != (float *)0x0) {
      fVar9 = (float)param_1[9];
      fVar13 = (float)param_1[10];
      *param_5 = local_e8 - (float)param_1[8];
      param_5[1] = local_e4 - fVar9;
      param_5[2] = local_e0 - fVar13;
    }
  }
  else {
    iVar2 = (**(code **)(*param_1 + 0x60))(param_1);
    if (iVar2 == 0) {
      local_e8 = local_118;
      local_e4 = local_114;
      local_e0 = local_110;
      if (param_5 != (float *)0x0) {
        fVar9 = (float)param_1[9];
        fVar13 = (float)param_1[10];
        *param_5 = local_118 - (float)param_1[8];
        param_5[1] = local_114 - fVar9;
        param_5[2] = local_110 - fVar13;
      }
      param_1[0x4c] = 0;
      goto LAB_001db740;
    }
    fVar11 = local_104[2] + local_fc[2];
    fVar16 = local_104[1] + local_fc[1];
    fVar8 = *local_104 + *local_fc;
    local_128 = fVar8 + *local_100;
    local_120 = fVar11 + local_100[2];
    local_124 = fVar16;
    uVar3 = fn_0023ba48(&local_128,auStack_d8,local_108,&local_128,(int)local_ec,local_f4);
    fVar9 = *local_100;
    bVar1 = fVar9 == fVar13;
    if (bVar1) {
      fVar9 = local_100[1];
    }
    bVar7 = false;
    if (bVar1 && (bVar1 && fVar9 == fVar13)) {
      bVar7 = local_100[2] == fVar13;
    }
    if ((bVar7) &&
       ((int)SQRT((local_128 - fVar8) * (local_128 - fVar8) +
                  (local_124 - fVar16) * (local_124 - fVar16) +
                  (local_120 - fVar11) * (local_120 - fVar11)) < 0x3a83126f)) {
      local_128 = fVar8;
      local_124 = fVar16;
      local_120 = fVar11;
    }
    local_e8 = local_128 - *local_fc;
    local_e4 = local_124 - local_fc[1];
    local_e0 = local_120 - local_fc[2];
    if ((uVar3 & 0x10) != 0) {
      local_e8 = (float)param_1[8];
      local_e4 = (float)param_1[9];
      local_e0 = (float)param_1[10];
    }
    (**(code **)(*param_1 + 0x104))(param_1,auStack_d8,auStack_90,uVar3,&local_e8,param_2);
    if (param_5 != (float *)0x0) {
      fVar9 = (float)param_1[9];
      fVar13 = (float)param_1[10];
      *param_5 = local_e8 - (float)param_1[8];
      param_5[1] = local_e4 - fVar9;
      param_5[2] = local_e0 - fVar13;
    }
  }
  param_1[0x4c] = uVar3;
LAB_001db740:
  (**(code **)(*param_1 + 0x10))(param_1,&local_e8);
  return;
}



void fn_001db0dc(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  float in_s0;
  undefined4 local_34;
  float local_30;
  undefined4 local_2c;
  undefined4 local_28;
  float local_24;
  undefined4 local_20;
  
  uVar1 = (**(code **)(*param_1 + 0xf0))(param_1);
  local_34 = *param_2;
  local_2c = param_2[2];
  local_30 = (float)param_2[1] + 30.0;
  uVar2 = fn_006f7388(DAT_008977e0);
  uVar3 = fn_0023b858(uVar2,uVar1,&local_34,&local_34,0);
  if (uVar3 == 0) {
    local_24 = (float)param_2[1];
    local_28 = *param_2;
    local_20 = param_2[2];
  }
  else {
    if ((uVar3 & 8) != 0) {
      local_30 = local_30 - (float)param_1[0x43];
    }
    local_28 = local_34;
    local_20 = local_2c;
    local_24 = local_30;
  }
  local_24 = local_24 + in_s0;
  param_1[0x4c] = uVar3;
  (**(code **)(*param_1 + 0x10))(param_1,&local_28);
  return;
}


