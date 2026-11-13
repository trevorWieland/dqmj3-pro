#include "006a83d8_006a8a84.h"



bool fn_006a8a84(int param_1,float *param_2,float *param_3,int param_4)

{
  float in_s0;
  float in_s1;
  float in_s2;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  if (param_4 == 0) {
    in_s0 = *param_3;
    in_s1 = param_3[1];
    in_s2 = param_3[2];
    fVar2 = *(float *)(param_1 + 8);
    fVar3 = *(float *)(param_1 + 0xc);
    fVar4 = *(float *)(param_1 + 0x10);
  }
  else {
    fn_001ccb7c(param_1 + 8);
    fVar2 = in_s0;
    fVar3 = in_s1;
    fVar4 = in_s2;
    fn_001ccb7c(param_3);
  }
  fVar1 = param_2[3] + *(float *)(param_1 + 0x48);
  in_s0 = ((fVar2 + *param_2) - *(float *)(param_1 + 0x3c)) - in_s0;
  in_s1 = ((fVar3 + param_2[1]) - *(float *)(param_1 + 0x40)) - in_s1;
  in_s2 = ((fVar4 + param_2[2]) - *(float *)(param_1 + 0x44)) - in_s2;
  return in_s0 * in_s0 + in_s1 * in_s1 + in_s2 * in_s2 < fVar1 * fVar1;
}



int fn_006a8a34(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b70fc(uVar1,param_2,0);
  if (iVar2 == -1) {
    iVar2 = 0;
  }
  else {
    iVar3 = iVar3 + iVar2 * 2;
    iVar2 = (int)*(short *)(iVar3 + 0x12) + (int)*(short *)(iVar3 + 0x1a);
  }
  return iVar2;
}



int fn_006a8a10(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == -1) {
    iVar1 = 0;
  }
  else {
    iVar1 = *param_1 + param_2 * 2;
    iVar1 = (int)*(short *)(iVar1 + 0x12) + (int)*(short *)(iVar1 + 0x1a);
  }
  return iVar1;
}



bool fn_006a89dc(int *param_1)

{
  return *(byte *)(*param_1 + 0x23) - 3 < 6;
}



undefined4 fn_006a89a8(int *param_1)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *(char *)(*param_1 + 0x23);
  if ((cVar1 == '\x06' || cVar1 == '\a') || (cVar1 == '\b')) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006a88b8(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_1;
  uVar1 = fn_0014481c(DAT_008977e8);
  uVar2 = fn_006b70fc(uVar1,param_2,param_3);
  iVar8 = 0;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar3 = fn_006b70fc(uVar1,uVar2 & 0xff,param_3);
  if (iVar3 == -1) {
    iVar3 = 0;
  }
  else {
    iVar3 = iVar6 + iVar3 * 2;
    iVar3 = (int)*(short *)(iVar3 + 0x1a) + (int)*(short *)(iVar3 + 0x12);
  }
  iVar7 = 0;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar4 = fn_006b6754(uVar1,param_3);
  if (0 < iVar4) {
    do {
      uVar5 = (uint)(char)iVar7;
      if (uVar2 != uVar5) {
        if (uVar5 == 0xffffffff) {
          iVar4 = 0;
        }
        else {
          iVar4 = iVar6 + uVar5 * 2;
          iVar4 = (int)*(short *)(iVar4 + 0x12) + (int)*(short *)(iVar4 + 0x1a);
        }
        if (iVar3 < iVar4) {
          iVar8 = iVar8 + 1;
        }
      }
      iVar7 = iVar7 + 1;
      uVar1 = fn_0014481c(DAT_008977e8);
      iVar4 = fn_006b6754(uVar1,param_3);
    } while (iVar7 < iVar4);
  }
  return iVar8;
}



int fn_006a8858(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *param_1;
  uVar1 = fn_0014481c(DAT_008977e8);
  iVar2 = fn_006b70fc(uVar1,param_2,param_3);
  return (int)*(short *)(iVar3 + iVar2 * 2 + 0x1a);
}



undefined4 fn_006a873c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int local_38 [5];
  
  uVar5 = 0;
  iVar6 = *param_1;
  do {
    uVar7 = 0;
    local_38[uVar5] = 0;
    if (0 < (int)uVar5) {
      do {
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar2 = fn_006b70fc(uVar1,uVar7 & 0xff,0);
        if (iVar2 == -1) {
          iVar2 = 0;
        }
        else {
          iVar2 = iVar6 + iVar2 * 2;
          iVar2 = (int)*(short *)(iVar2 + 0x1a) + (int)*(short *)(iVar2 + 0x12);
        }
        uVar1 = fn_0014481c(DAT_008977e8);
        iVar3 = fn_006b70fc(uVar1,uVar5 & 0xff,0);
        if (iVar3 == -1) {
          iVar3 = 0;
        }
        else {
          iVar3 = iVar6 + iVar3 * 2;
          iVar3 = (int)*(short *)(iVar3 + 0x12) + (int)*(short *)(iVar3 + 0x1a);
        }
        if (iVar2 < iVar3) {
          iVar4 = local_38[uVar7];
        }
        else {
          iVar4 = local_38[uVar5];
        }
        if (iVar2 < iVar3) {
          local_38[uVar7] = iVar4 + 1;
        }
        else {
          local_38[uVar5] = iVar4 + 1;
        }
        uVar7 = uVar7 + 1;
      } while ((int)uVar7 < (int)uVar5);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  if (local_38[0] != param_2) {
    if (local_38[1] == param_2) {
      return 1;
    }
    if (local_38[2] == param_2) {
      return 2;
    }
    if (local_38[3] == param_2) {
      return 3;
    }
  }
  return 0;
}



bool fn_006a8714(int *param_1)

{
  return *(byte *)(*param_1 + 0x23) - 3 < 3;
}



int fn_006a86b8(int *param_1)

{
  int iVar1;
  
  param_1 = (int *)*param_1;
  if (*(byte *)((int)param_1 + 0x23) - 3 < 6) {
    iVar1 = *param_1;
  }
  else if (param_1[2] < 0) {
    iVar1 = 0x4632;
  }
  else {
    iVar1 = param_1[2] - *param_1;
  }
  iVar1 = (int)((longlong)(int)(iVar1 + 0x1dU) * -0x77777777 + ((ulonglong)(iVar1 + 0x1dU) << 0x20)
               >> 0x20);
  return (iVar1 >> 4) - (iVar1 >> 0x1f);
}



int fn_006a8660(int *param_1)

{
  int iVar1;
  
  param_1 = (int *)*param_1;
  if (*(byte *)((int)param_1 + 0x23) - 3 < 6) {
    iVar1 = *param_1;
  }
  else if (param_1[2] < 0) {
    iVar1 = 0x4632;
  }
  else {
    iVar1 = param_1[2] - *param_1;
  }
  return iVar1;
}



/* WARNING: Removing unreachable block (ram,0x006a856c) */
/* WARNING: Removing unreachable block (ram,0x006a857c) */
/* WARNING: Removing unreachable block (ram,0x006a84a8) */

void fn_006a83d8(undefined4 param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint in_fpscr;
  float in_s0;
  float fVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_84;
  float local_80;
  float local_7c;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  float local_50;
  float fStack_4c;
  float local_48;
  undefined4 local_44;
  undefined1 local_2c [24];
  
  local_84 = *(float *)(param_2 + 500);
  local_80 = *(float *)(param_2 + 0x1f8);
  local_7c = *(float *)(param_2 + 0x1fc);
  iVar1 = fn_006f7de8(param_2);
  if ((0 < iVar1) || (iVar1 = fn_006f8074(param_2), iVar1 != 0)) {
    local_84 = local_84 * 1.2;
    local_80 = local_80 * 1.2;
    local_7c = local_7c * 1.2;
  }
  in_fpscr = in_fpscr & 0xfffffff;
  for (fVar4 = ABS(in_s0 * 40.743664); 0x477fffff < (int)fVar4; fVar4 = fVar4 - 65536.0) {
  }
  uVar5 = VectorFloatToUnsigned(0,3);
  uVar6 = VectorFloatToUnsigned(fVar4,3);
  uVar7 = VectorFloatToUnsigned(0,3);
  uVar2 = uVar5 & 0xff;
  uVar3 = uVar7 & 0xff;
  fVar10 = (float)VectorUnsignedToFloat(uVar5 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  uVar5 = uVar6 & 0xff;
  fVar12 = (float)VectorUnsignedToFloat(uVar6 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar9 = (float)VectorUnsignedToFloat(uVar7 & 0xffff,(byte)(in_fpscr >> 0x16) & 3);
  fVar11 = (float)(&DAT_007d6f20)[uVar2 * 4] + (0.0 - fVar10) * (float)(&DAT_007d6f28)[uVar2 * 4];
  fVar8 = (float)(&DAT_007d6f24)[uVar2 * 4] + (0.0 - fVar10) * (float)(&DAT_007d6f2c)[uVar2 * 4];
  fVar10 = (float)(&DAT_007d6f20)[uVar5 * 4] + (fVar4 - fVar12) * (float)(&DAT_007d6f28)[uVar5 * 4];
  local_48 = (float)(&DAT_007d6f24)[uVar5 * 4] +
             (fVar4 - fVar12) * (float)(&DAT_007d6f2c)[uVar5 * 4];
  fVar4 = (float)(&DAT_007d6f20)[uVar3 * 4] + (0.0 - fVar9) * (float)(&DAT_007d6f28)[uVar3 * 4];
  fVar9 = (float)(&DAT_007d6f24)[uVar3 * 4] + (0.0 - fVar9) * (float)(&DAT_007d6f2c)[uVar3 * 4];
  if (in_s0 * 40.743664 < 0.0) {
    fVar10 = -fVar10;
  }
  local_70 = fVar9 * local_48;
  fStack_4c = fVar11 * local_48;
  local_60 = fVar4 * local_48;
  local_48 = fVar8 * local_48;
  local_50 = -fVar10;
  local_6c = fVar11 * fVar9 * fVar10 - fVar8 * fVar4;
  local_58 = fVar8 * fVar4 * fVar10 - fVar11 * fVar9;
  local_68 = fVar11 * fVar4 + fVar8 * fVar9 * fVar10;
  local_5c = fVar8 * fVar9 + fVar11 * fVar4 * fVar10;
  local_64 = 0;
  local_54 = 0;
  local_44 = 0;
  fn_0016947c(local_2c,&local_70,&local_84);
  return;
}


