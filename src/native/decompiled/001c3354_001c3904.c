#include "001c3354_001c3904.h"



void fn_001c3904(float *param_1,float *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_50;
  float local_4c;
  float local_48;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  param_3[2] = param_1[2];
  *param_3 = fVar3;
  param_3[1] = fVar4;
  fVar4 = fVar4 + *param_4;
  param_3[1] = fVar4;
  fVar3 = fVar3 - *param_3;
  fVar4 = fVar4 - param_3[1];
  fVar6 = 0.0 - param_3[2];
  fVar7 = 1.0 / SQRT(fVar3 * fVar3 + fVar4 * fVar4 + fVar6 * fVar6);
  local_4c = param_4[1];
  local_50 = fVar3 * fVar7 * local_4c;
  local_48 = fVar6 * fVar7 * local_4c;
  local_4c = fVar4 * fVar7 * local_4c;
  uVar1 = in_fpscr & 0xfffffff;
  fVar4 = ABS(param_4[3] * 0.7111111);
  fVar6 = ABS(param_4[4] * 0.7111111);
  for (fVar3 = ABS(param_4[2] * 0.7111111); 0x477fffff < (int)fVar3; fVar3 = fVar3 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar8 = VectorFloatToUnsigned(fVar3,3);
  uVar9 = VectorFloatToUnsigned(fVar4,3);
  uVar10 = VectorFloatToUnsigned(fVar6,3);
  uVar2 = uVar8 & 0xff;
  fVar7 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  uVar8 = uVar9 & 0xff;
  uVar5 = uVar10 & 0xff;
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar13 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar11 = (float)(&DAT_007d6f20)[uVar2 * 4] + (fVar3 - fVar7) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar12 = (float)(&DAT_007d6f24)[uVar2 * 4] + (fVar3 - fVar7) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar7 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f28)[uVar5 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar3 = (float)(&DAT_007d6f20)[uVar8 * 4] + (fVar4 - fVar13) * (float)(&DAT_007d6f28)[uVar8 * 4];
  local_18 = (float)(&DAT_007d6f24)[uVar8 * 4] +
             (fVar4 - fVar13) * (float)(&DAT_007d6f2c)[uVar8 * 4];
  if (param_4[2] * 0.7111111 < 0.0) {
    fVar11 = -fVar11;
  }
  if (param_4[3] * 0.7111111 < 0.0) {
    fVar3 = -fVar3;
  }
  if (param_4[4] * 0.7111111 < 0.0) {
    fVar7 = -fVar7;
  }
  local_40 = fVar6 * local_18;
  local_30 = fVar7 * local_18;
  local_1c = fVar11 * local_18;
  local_18 = fVar12 * local_18;
  local_20 = -fVar3;
  local_3c = fVar11 * fVar6 * fVar3 - fVar12 * fVar7;
  local_28 = fVar12 * fVar7 * fVar3 - fVar11 * fVar6;
  local_38 = fVar11 * fVar7 + fVar12 * fVar6 * fVar3;
  local_2c = fVar12 * fVar6 + fVar11 * fVar7 * fVar3;
  local_34 = 0;
  local_24 = 0;
  local_14 = 0;
  fn_0016947c(&local_50,&local_40);
  fVar3 = *param_3;
  fVar4 = param_3[1];
  param_2[2] = param_3[2] + local_48;
  *param_2 = fVar3 + local_50;
  param_2[1] = fVar4 + local_4c;
  return;
}



void fn_001c38e0(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_00339254(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x20));
  return;
}



void fn_001c38bc(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_0033928c(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x20));
  return;
}



void fn_001c374c(void)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_30 [4];
  
  bVar1 = true;
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar3 = 0;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  do {
    iVar2 = fn_006b8538(uVar5,iVar3);
    if (iVar2 == -0x1194d800) {
      bVar1 = false;
      break;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  uVar4 = 0;
  iVar3 = 0;
  do {
    if (bVar1) {
      iVar2 = fn_00144df4();
    }
    else {
      iVar2 = fn_006b8538(uVar5,iVar3);
    }
    if (iVar2 != 0) {
      if (iVar2 == -0x1194d800) {
        iVar2 = fn_00182988(DAT_008977e4);
        local_30[uVar4] = *(int *)(iVar2 + 0x3b8);
        uVar4 = uVar4 + 1 & 0xff;
        iVar2 = fn_00182988(DAT_008977e4);
        iVar2 = *(int *)(iVar2 + 0x3bc);
      }
      local_30[uVar4] = iVar2;
      uVar4 = uVar4 + 1 & 0xff;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  if (bVar1) {
    fn_0028a66c();
  }
  else {
    fn_0028acf4(uVar5);
  }
  iVar3 = 0;
  do {
    iVar2 = fn_0028b3a0(uVar5,local_30[iVar3]);
    if (iVar2 != 0) {
      if (bVar1) {
        fn_0028b7ac();
      }
      else {
        fn_0028a588(uVar5,local_30[iVar3]);
      }
    }
    iVar3 = (int)(char)((char)iVar3 + '\x01');
  } while (iVar3 < 4);
  return;
}



void fn_001c35e4(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  undefined1 auStack_130 [20];
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  undefined1 local_113;
  undefined1 local_112;
  undefined1 auStack_110 [224];
  undefined4 local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  
  fn_00301f50(auStack_130,0x100);
  uVar1 = param_1 - 0x10;
  bVar8 = 3 < uVar1;
  if (bVar8) {
    uVar1 = param_1 - 0x18;
  }
  if ((bVar8 && 3 < uVar1) && (param_1 != 0x20 && param_1 != 0x22)) {
    iVar7 = 0;
  }
  else {
    iVar7 = 1;
  }
  local_30 = fn_00182988(DAT_008977e4);
  local_114 = 0;
  local_113 = 0;
  local_11c = 0;
  local_118 = 0;
  local_112 = 0;
  fn_00101a1c(auStack_110,&LAB_002d3f0c,0x20,7);
  uVar1 = 0x10;
  uVar6 = 0x14;
  if (iVar7 == 0) {
    uVar1 = 0x14;
    uVar6 = 0x18;
  }
  iVar4 = 0;
  uVar5 = uVar1;
  if (uVar1 < uVar6) {
    do {
      if (uVar5 == param_1) {
        local_28[0] = (undefined1)param_1;
        uVar3 = fn_0026a548(local_30,local_28);
        uVar2 = fn_0026a574(local_30,iVar7);
        fn_0017821c(uVar2,uVar3,0x1f);
      }
      else {
        local_2c[0] = (undefined1)uVar5;
        uVar3 = fn_0026a548(local_30,local_2c);
        fn_0017821c(auStack_130 + iVar4 * 0x20,uVar3,0x1f);
        iVar4 = iVar4 + 1;
      }
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar6);
  }
  uVar5 = uVar1;
  if (uVar1 < uVar6) {
    do {
      local_28[0] = (undefined1)uVar5;
      uVar3 = fn_0026a548(local_30,local_28);
      fn_0017821c(uVar3,auStack_130 + (uVar5 - uVar1) * 0x20,0x1f);
      uVar5 = uVar5 + 1;
    } while ((int)uVar5 < (int)uVar6);
  }
  return;
}



void fn_001c3550(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39d) == '\0') {
    return;
  }
  iVar1 = fn_00174834(DAT_008977e4);
  iVar2 = fn_00174834(DAT_008977e4);
  iVar3 = fn_00182988(DAT_008977e4);
  fn_002d30dc(iVar3 + 0x244,iVar2 + 0x180388);
  iVar2 = fn_00174858(DAT_008977e4);
  fn_005a6f2c(*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x1c),0,*(undefined4 *)(iVar1 + 0x180398));
  iVar2 = fn_00174858(DAT_008977e4);
  fn_005a6f2c(*(undefined4 *)(*(int *)(iVar2 + 0x4c) + 0x1c),1,*(undefined4 *)(iVar1 + 0x18039c));
  return;
}



undefined4 fn_001c34d4(int param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  bVar2 = 0x10;
  bVar3 = 0x14;
  if (param_1 == 0) {
    bVar2 = 0x18;
    bVar3 = 0x20;
  }
  if (bVar2 < bVar3) {
    do {
      iVar1 = fn_00174828(DAT_008977e4);
      iVar1 = iVar1 + (char)bVar2 * 0x418;
      if ((iVar1 != 0x4080) && (*(char *)(iVar1 + -0x3c6c) != '\0')) {
        return 1;
      }
      bVar2 = bVar2 + 1;
    } while ((char)bVar2 < (char)bVar3);
  }
  return 0;
}



void fn_001c3354(char *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_38 [8];
  
  if (*param_1 != '\0') {
    uVar3 = *(undefined4 *)(DAT_00897804 + 0xc);
    local_38[0] = 0;
    local_38[1] = 0;
    local_38[2] = 0;
    iVar2 = 0;
    local_38[3] = 0;
    local_38[4] = 0;
    local_38[5] = 0;
    local_38[6] = 0;
    local_38[7] = 0;
    do {
      if ((int)param_1[iVar2 + 1] - 0x10U < 4) {
        iVar1 = fn_0028b0a0(uVar3);
      }
      else {
        iVar1 = fn_0028b348(uVar3,param_1[iVar2 + 1] + -0x18);
      }
      local_38[iVar2] = iVar1;
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 4);
    iVar2 = 0;
    do {
      if ((int)param_1[iVar2 + 5] - 0x10U < 4) {
        iVar1 = fn_0028b0a0(uVar3);
      }
      else {
        iVar1 = fn_0028b348(uVar3,param_1[iVar2 + 5] + -0x18);
      }
      local_38[iVar2 + 4] = iVar1;
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 4);
    fn_0028a66c(uVar3);
    fn_0028acf4(uVar3);
    iVar2 = 0;
    do {
      if (((undefined4 *)local_38[iVar2] != (undefined4 *)0x0) &&
         (iVar1 = fn_0028b3a0(uVar3,*(undefined4 *)local_38[iVar2]), iVar1 != 0)) {
        fn_0028b7ac(uVar3,*(undefined4 *)local_38[iVar2]);
      }
      if (((undefined4 *)local_38[iVar2 + 4] != (undefined4 *)0x0) &&
         (iVar1 = fn_0028b3a0(uVar3,*(undefined4 *)local_38[iVar2 + 4]), iVar1 != 0)) {
        fn_0028a588(uVar3,*(undefined4 *)local_38[iVar2 + 4]);
      }
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 < 4);
  }
  return;
}


