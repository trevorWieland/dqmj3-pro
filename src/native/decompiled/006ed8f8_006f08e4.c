#include "006ed8f8_006f08e4.h"



int fn_006f08e4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_0069180c(param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(char *)(param_1 + param_2 + -1);
  }
  return iVar2;
}



undefined4 fn_006f07dc(int param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x02') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}



undefined4 fn_006f0790(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\x02') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return 0;
}



void fn_006f0720(int param_1,undefined4 param_2)

{
  char cVar1;
  
  if ((*(char *)(param_1 + 0x58) == '\0') ||
     (cVar1 = *(char *)(param_1 + 0x179), cVar1 != '\0' && cVar1 != '\x02')) {
    return;
  }
  fn_0017fe34(cVar1);
  fn_006a9c40(param_2,param_1,0);
  return;
}



undefined4 fn_006ef104(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0xffffffff;
  if (*(int *)(param_1 + 0xc) == 0) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      uVar1 = 1;
    }
    return uVar1;
  }
  uVar1 = 0;
  if (*(int *)(param_1 + 0x1c) != 0) {
    uVar1 = 2;
  }
  return uVar1;
}



undefined4 fn_006ef0e8(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 2;
  }
  else if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_006ee030(int *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  
  pfVar1 = (float *)*param_1;
  return SQRT((*param_2 - *pfVar1) * (*param_2 - *pfVar1) +
              (param_2[1] - pfVar1[1]) * (param_2[1] - pfVar1[1])) <
         SQRT((*param_3 - *pfVar1) * (*param_3 - *pfVar1) +
              (param_3[1] - pfVar1[1]) * (param_3[1] - pfVar1[1]));
}



undefined1 fn_006edf18(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 0;
  iVar1 = fn_00742348(*(undefined4 *)(*(int *)(param_1 + 4) + 4));
  if (((iVar1 != 0) && (uVar2 = iVar1 == 1, !(bool)uVar2)) && (iVar1 == 2)) {
    uVar2 = 2;
  }
  return uVar2;
}



undefined8 fn_006eded4(int param_1,uint param_2)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  uint *puVar5;
  
  puVar5 = *(uint **)(param_1 + 4);
  uVar4 = *puVar5;
  if (param_2 < uVar4) {
    fn_00169f1c(puVar5[4] + (uVar4 - param_2) + -1,uVar4);
    puVar2 = (undefined4 *)(puVar5[1] + extraout_r1 * 8);
    uVar1 = *puVar2;
    uVar3 = puVar2[1];
  }
  else {
    uVar1 = 0xffffffff;
    uVar3 = uVar1;
  }
  return CONCAT44(uVar3,uVar1);
}



void fn_006edd7c(void)

{
  return;
}



void fn_006edd70(void)

{
  return;
}



int fn_006edaac(int param_1,float *param_2)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_10 [4];
  
  if (*(char *)(param_1 + 0x1c) == '\0') {
    if (*(int *)(param_1 + 0x24) == 0) {
      return 0;
    }
    pfVar5 = local_10;
    pfVar4 = local_10;
    fVar7 = *(float *)(param_1 + 0x20) * 0.5;
    fVar8 = (fVar7 - *(float *)(param_1 + 0x3c)) + param_2[2];
    local_10[2] = (fVar7 - *(float *)(param_1 + 0x34)) + *param_2;
    local_10[1] = *(float *)(param_1 + 0x20) - 1.0;
    local_10[0] = 0.0;
    if (0.0 < local_10[1]) {
      if (0.0 <= local_10[2]) {
        pfVar4 = local_10 + 2;
      }
      if (local_10[1] < *pfVar4) {
        pfVar4 = local_10 + 1;
      }
      local_10[0] = fVar8;
      local_10[1] = 0.0;
      local_10[2] = *(float *)(param_1 + 0x20) - 1.0;
      if (0.0 < local_10[2]) {
        if (fVar8 < 0.0) {
          pfVar5 = local_10 + 1;
        }
        fVar7 = *pfVar5;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < local_10[2]) << 0x1f |
                (uint)(fVar7 == local_10[2]) << 0x1e;
        bVar2 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar7) || NAN(local_10[2]))) {
          pfVar5 = local_10 + 2;
        }
        fVar7 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x24),(byte)(uVar1 >> 0x16) & 3);
        fVar7 = *(float *)(param_1 + 0x20) / fVar7;
        return *(int *)(param_1 + 0x24) * (int)(*pfVar5 / fVar7) + (int)(*pfVar4 / fVar7);
      }
    }
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  if (*(char *)(param_1 + 0x1c) != '\x01') {
    return -1;
  }
  if (*(int *)(param_1 + 0x24) == 0) {
    return 0;
  }
  fVar7 = *(float *)(param_1 + 0x20) * 0.5;
  pfVar5 = local_10;
  pfVar6 = local_10;
  pfVar4 = local_10;
  fVar9 = (fVar7 - *(float *)(param_1 + 0x38)) + param_2[1];
  fVar8 = (fVar7 - *(float *)(param_1 + 0x3c)) + param_2[2];
  local_10[2] = (fVar7 - *(float *)(param_1 + 0x34)) + *param_2;
  local_10[1] = *(float *)(param_1 + 0x20) - 1.0;
  local_10[0] = 0.0;
  if (0.0 < local_10[1]) {
    if (0.0 <= local_10[2]) {
      pfVar4 = local_10 + 2;
    }
    if (local_10[1] < *pfVar4) {
      pfVar4 = local_10 + 1;
    }
    local_10[0] = fVar9;
    local_10[1] = 0.0;
    local_10[2] = *(float *)(param_1 + 0x20) - 1.0;
    if (0.0 < local_10[2]) {
      if (fVar9 < 0.0) {
        pfVar5 = local_10 + 1;
      }
      if (local_10[2] < *pfVar5) {
        pfVar5 = local_10 + 2;
      }
      local_10[0] = fVar8;
      local_10[2] = *(float *)(param_1 + 0x20) - 1.0;
      if (0.0 < local_10[2]) {
        if (fVar8 < 0.0) {
          pfVar6 = local_10 + 1;
        }
        fVar7 = *pfVar6;
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar7 < local_10[2]) << 0x1f |
                (uint)(fVar7 == local_10[2]) << 0x1e;
        bVar2 = (byte)(uVar1 >> 0x18);
        iVar3 = *(int *)(param_1 + 0x24);
        if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar7) || NAN(local_10[2]))) {
          pfVar6 = local_10 + 2;
        }
        fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(uVar1 >> 0x16) & 3);
        fVar7 = *(float *)(param_1 + 0x20) / fVar7;
        return iVar3 * (int)(*pfVar5 / fVar7) + iVar3 * iVar3 * (int)(*pfVar6 / fVar7) +
               (int)(*pfVar4 / fVar7);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



int fn_006ed8f8(int param_1,int param_2,int param_3,int *param_4,float *param_5,float *param_6)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int *local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int *piStack_28;
  
  bVar1 = *param_6 - *param_5 != 0.0;
  if ((bVar1 || (bVar1 || param_6[1] - param_5[1] != 0.0)) || (param_6[2] - param_5[2] != 0.0)) {
    iVar2 = 0;
    iVar6 = 0;
    iStack_34 = param_1;
    local_30 = param_2;
    local_2c = param_3;
    piStack_28 = param_4;
    if (0 < *param_4) {
      do {
        iVar3 = *(int *)(param_1 + 4);
        uVar7 = (uint)*(ushort *)(param_4[1] + iVar6 * 2);
        iVar5 = *(int *)(param_1 + 0xc);
        piVar8 = (int *)(iVar3 + uVar7 * 0x1c + 0xc);
        local_38 = (int *)(iVar5 + *(int *)(iVar3 + uVar7 * 0x1c) * 0xc);
        piVar9 = (int *)(iVar5 + *(int *)(iVar3 + uVar7 * 0x1c + 4) * 0xc);
        piVar10 = (int *)(iVar5 + *(int *)(iVar3 + uVar7 * 0x1c + 8) * 0xc);
        iVar3 = fn_005f1dd0(&local_44,param_5,param_6,local_38,piVar9,piVar10,piVar8);
        if (iVar3 != 0) {
          if (local_30 == 0) {
            return 1;
          }
          if (iVar2 < local_2c) {
            piVar4 = (int *)(local_30 + iVar2 * 0x48);
            *piVar4 = iVar6;
            piVar4[1] = (int)*(short *)(*(int *)(param_1 + 4) + uVar7 * 0x1c + 0x18);
            piVar4[2] = local_44;
            piVar4[3] = iStack_40;
            piVar4[4] = iStack_3c;
            iVar3 = local_38[1];
            iVar5 = local_38[2];
            piVar4[5] = *local_38;
            piVar4[6] = iVar3;
            piVar4[7] = iVar5;
            iVar3 = piVar9[1];
            iVar5 = piVar9[2];
            piVar4[8] = *piVar9;
            piVar4[9] = iVar3;
            piVar4[10] = iVar5;
            iVar3 = piVar10[1];
            iVar5 = piVar10[2];
            piVar4[0xb] = *piVar10;
            piVar4[0xc] = iVar3;
            piVar4[0xd] = iVar5;
            iVar3 = piVar8[1];
            iVar5 = piVar8[2];
            piVar4[0xe] = *piVar8;
            piVar4[0xf] = iVar3;
            piVar4[0x10] = iVar5;
            piVar4[0x11] = *(int *)(param_1 + 0x2c);
          }
          iVar2 = iVar2 + 1;
          if (local_2c <= iVar2) break;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < *param_4);
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


