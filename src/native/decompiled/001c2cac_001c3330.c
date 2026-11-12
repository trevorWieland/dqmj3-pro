#include "001c2cac_001c3330.h"



void fn_001c3330(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003d1e58(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x18));
  return;
}



void fn_001c2f8c(float *param_1,float *param_2,float *param_3,float *param_4,undefined4 param_5)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  uint uVar4;
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
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  undefined4 local_3c;
  float local_38;
  float local_34;
  float local_30;
  undefined4 local_2c;
  float local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  
  local_58 = *param_1;
  local_54 = param_1[1];
  fVar2 = param_1[2];
  *param_3 = local_58;
  param_3[1] = local_54;
  param_3[2] = fVar2;
  local_58 = local_58 - *param_3;
  local_54 = local_54 - param_3[1];
  local_50 = 0.0 - param_3[2];
  switch(param_5) {
  case 0:
  case 1:
  case 2:
    fVar7 = 1.0 / SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
    fVar2 = *param_4;
    local_58 = local_58 * fVar7 * fVar2;
    local_54 = local_54 * fVar7 * fVar2;
    local_50 = local_50 * fVar7 * fVar2;
    break;
  case 3:
    fVar7 = 1.0 / SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
    fVar2 = param_4[1];
    local_58 = local_58 * fVar7 * fVar2;
    local_54 = local_54 * fVar7 * fVar2;
    local_50 = local_50 * fVar7 * fVar2;
    break;
  case 4:
    fVar7 = 1.0 / SQRT(local_58 * local_58 + local_54 * local_54 + local_50 * local_50);
    fVar2 = param_4[2];
    local_58 = local_58 * fVar7 * fVar2;
    local_54 = local_54 * fVar7 * fVar2;
    local_50 = local_50 * fVar7 * fVar2;
  }
  uVar1 = in_fpscr & 0xfffffff;
  fVar7 = ABS(param_4[4] * 0.7111111);
  fVar6 = ABS(param_4[5] * 0.7111111);
  for (fVar2 = ABS(param_4[3] * 0.7111111); 0x477fffff < (int)fVar2; fVar2 = fVar2 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar7; fVar7 = fVar7 - 65536.0) {
  }
  for (; 0x477fffff < (int)fVar6; fVar6 = fVar6 - 65536.0) {
  }
  uVar8 = VectorFloatToUnsigned(fVar2,3);
  uVar9 = VectorFloatToUnsigned(fVar7,3);
  uVar10 = VectorFloatToUnsigned(fVar6,3);
  uVar4 = uVar9 & 0xff;
  uVar3 = uVar8 & 0xff;
  uVar5 = uVar10 & 0xff;
  fVar13 = (float)VectorUnsignedToFloat(uVar8 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar12 = (float)VectorUnsignedToFloat(uVar9 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar14 = (float)VectorUnsignedToFloat(uVar10 & 0xffff,(byte)(uVar1 >> 0x16) & 3);
  fVar11 = (float)(&DAT_007d6f20)[uVar3 * 4] + (fVar2 - fVar13) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar13 = (float)(&DAT_007d6f24)[uVar3 * 4] + (fVar2 - fVar13) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  local_20 = (float)(&DAT_007d6f24)[uVar4 * 4] +
             (fVar7 - fVar12) * (float)(&DAT_007d6f2c)[uVar4 * 4];
  fVar2 = (float)(&DAT_007d6f20)[uVar4 * 4] + (fVar7 - fVar12) * (float)(&DAT_007d6f28)[uVar4 * 4];
  if (param_4[3] * 0.7111111 < 0.0) {
    fVar11 = -fVar11;
  }
  fVar7 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f28)[uVar5 * 4];
  fVar6 = (float)(&DAT_007d6f24)[uVar5 * 4] + (fVar6 - fVar14) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  if (param_4[4] * 0.7111111 < 0.0) {
    fVar2 = -fVar2;
  }
  if (param_4[5] * 0.7111111 < 0.0) {
    fVar7 = -fVar7;
  }
  local_48 = fVar6 * local_20;
  local_38 = fVar7 * local_20;
  local_24 = fVar11 * local_20;
  local_20 = fVar13 * local_20;
  local_28 = -fVar2;
  local_44 = fVar11 * fVar6 * fVar2 - fVar13 * fVar7;
  local_30 = fVar13 * fVar7 * fVar2 - fVar11 * fVar6;
  local_40 = fVar11 * fVar7 + fVar13 * fVar6 * fVar2;
  local_34 = fVar13 * fVar6 + fVar11 * fVar7 * fVar2;
  local_3c = 0;
  local_2c = 0;
  local_1c = 0;
  fn_0016947c(&local_58,&local_48);
  fVar2 = param_3[2];
  local_54 = param_3[1] + local_54;
  *param_2 = *param_3 + local_58;
  param_2[1] = local_54;
  param_2[2] = fVar2 + local_50;
  if (local_54 <= param_4[6]) {
    local_54 = param_4[6];
  }
  param_2[1] = local_54;
  return;
}



void fn_001c2f50(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00182988(DAT_008977e4);
  if (*(char *)(iVar1 + 0x39d) == '\0') {
    return;
  }
  iVar1 = fn_00174858(DAT_008977e4);
  iVar1 = *(int *)(*(int *)(iVar1 + 0x4c) + 0x1c);
  iVar2 = 0;
  do {
    fn_005a6f64(*(undefined4 *)(iVar1 + iVar2 * 4 + 0x70));
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



byte fn_001c2ef4(int param_1)

{
  short sVar1;
  byte bVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar3 = fn_00174828(DAT_008977e4);
  if (param_1 == 0) {
    iVar5 = 0x23;
  }
  else {
    iVar5 = 0x22;
  }
  psVar4 = (short *)(iVar3 + iVar5 * 8 + 0x4180);
  bVar2 = 0;
  if (psVar4 != (short *)0x0) {
    sVar1 = *psVar4;
    bVar2 = fn_00154ac8(0x33f);
    bVar2 = bVar2 & (sVar1 == 2 || sVar1 == 0x20);
  }
  return bVar2;
}



bool fn_001c2ee0(void)

{
  int iVar1;
  
  iVar1 = fn_00145adc();
  return iVar1 != 0;
}



void fn_001c2eb8(void)

{
  int iVar1;
  
  iVar1 = fn_00174858(DAT_008977e4);
  fn_003d1e30(*(undefined4 *)(*(int *)(iVar1 + 0x4c) + 0x18));
  return;
}



void fn_001c2e10(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  short *psVar7;
  undefined4 local_20;
  
  local_20 = in_r3;
  iVar2 = fn_00174828(DAT_008977e4);
  uVar3 = fn_0017484c(DAT_008977e4);
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,0x10);
  do {
    psVar7 = (short *)(iVar2 + (char)local_20 * 0x418 + -0x4080);
    iVar4 = fn_001a46f4((int)*psVar7);
    if (iVar4 != 0) {
      uVar5 = fn_00313a0c(uVar3,&local_20);
      uVar6 = fn_00182988(DAT_008977e4);
      uVar6 = fn_0026a548(uVar6,&local_20);
      fn_00238768(uVar5,psVar7,uVar6);
    }
    cVar1 = (char)local_20 + '\x01';
    local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,cVar1);
  } while (cVar1 != '\x18');
  return;
}



void fn_001c2e0c(void)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r3;
  short *psVar7;
  undefined4 uStack_20;
  
  uStack_20 = in_r3;
  iVar2 = fn_00174828(DAT_008977e4);
  uVar3 = fn_0017484c(DAT_008977e4);
  uStack_20 = CONCAT31(((unsigned int)(uStack_20) >> 8) & 0xffffff,0x10);
  do {
    psVar7 = (short *)(iVar2 + (char)uStack_20 * 0x418 + -0x4080);
    iVar4 = fn_001a46f4((int)*psVar7);
    if (iVar4 != 0) {
      uVar5 = fn_00313a0c(uVar3,&uStack_20);
      uVar6 = fn_00182988(DAT_008977e4);
      uVar6 = fn_0026a548(uVar6,&uStack_20);
      fn_00238768(uVar5,psVar7,uVar6);
    }
    cVar1 = (char)uStack_20 + '\x01';
    uStack_20 = CONCAT31(((unsigned int)(uStack_20) >> 8) & 0xffffff,cVar1);
  } while (cVar1 != '\x18');
  return;
}



void fn_001c2cac(byte *param_1)

{
  int iVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  if (*param_1 != 0) {
    do {
      pbVar4 = param_1 + iVar6 * 0x266c + 4;
      if (*pbVar4 == 0xd) {
        fn_00144834(0x213,1);
        if (param_1[iVar6 * 0x266c + 8] != 0) {
          fn_0026a930();
        }
      }
      else if (*pbVar4 == 0xf) {
        fn_00144834(0x212,1);
      }
      iVar5 = 0;
      if ('\0' < (char)param_1[iVar6 * 0x266c + 0x1c]) {
        do {
          if (pbVar4[iVar5 * 0xc4 + 0x1c] == 0xc) {
            iVar1 = (int)(char)pbVar4[iVar5 * 0xc4 + 0x20];
            uVar3 = iVar1 - 0x10;
            bVar7 = 3 < uVar3;
            if (bVar7) {
              uVar3 = iVar1 - 0x18;
            }
            if ((!bVar7 || uVar3 < 4) || (iVar1 == 0x20 || iVar1 == 0x22)) {
              fn_0026ad34();
            }
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (char)param_1[iVar6 * 0x266c + 0x1c]);
      }
      iVar5 = 0;
      if ('\0' < (char)param_1[iVar6 * 0x266c + 0x1d]) {
        do {
          pbVar2 = pbVar4 + iVar5 * 0xc4 + 0xf6c;
          if (*pbVar2 == 4) {
            if (*(short *)(pbVar4 + iVar5 * 0xc4 + 0xf6e) == 8) {
              pbVar2 = (byte *)(uint)pbVar4[iVar5 * 0xc4 + 0xf70];
            }
            if (*(short *)(pbVar4 + iVar5 * 0xc4 + 0xf6e) == 8 && pbVar2 == &DAT_00000020) {
              fn_0026abc8();
            }
          }
          else if (*pbVar2 == 0x12) {
            fn_00144834(0x211,1);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < (char)param_1[iVar6 * 0x266c + 0x1d]);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)(uint)*param_1);
  }
  return;
}


