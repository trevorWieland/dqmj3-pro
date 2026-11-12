#include "0065f538_0065fb48.h"



undefined4 fn_0065fa08(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  
  piVar4 = (int *)(param_1 + 4);
  piVar2 = (int *)(param_2 + 4);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      local_3c = (float)piVar4[iVar5 * 4 + 1];
      local_38 = (float)piVar4[iVar5 * 4 + 2];
      local_34 = (float)piVar4[iVar5 * 4 + 3];
      iVar3 = 0;
      if (0 < *piVar2) {
        do {
          local_4c = (float)piVar2[iVar3 * 6 + 2];
          local_48 = (float)piVar2[iVar3 * 6 + 3];
          local_44 = (float)piVar2[iVar3 * 6 + 4];
          local_58 = (float)piVar2[iVar3 * 6 + 5];
          local_54 = (float)piVar2[iVar3 * 6 + 6];
          local_50 = (float)piVar2[iVar3 * 6 + 7];
          iVar1 = fn_005f1c78(&local_3c,&local_4c,&local_58);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = (local_3c + (local_4c + local_58) * 0.5) * 0.5;
              param_3[1] = (local_38 + (local_48 + local_54) * 0.5) * 0.5;
              param_3[2] = (local_34 + (local_44 + local_50) * 0.5) * 0.5;
            }
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar2);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < *piVar4);
  }
  return 0;
}



undefined4 fn_0065f8cc(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  
  piVar2 = (int *)(param_1 + 4);
  piVar5 = (int *)(param_2 + 4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar3 = 0;
      local_40 = (float)piVar2[iVar4 * 6 + 2];
      local_3c = (float)piVar2[iVar4 * 6 + 3];
      local_38 = (float)piVar2[iVar4 * 6 + 4];
      local_34 = (float)piVar2[iVar4 * 6 + 5];
      local_30 = (float)piVar2[iVar4 * 6 + 6];
      local_2c = (float)piVar2[iVar4 * 6 + 7];
      if (0 < *piVar5) {
        do {
          local_28 = (float)piVar5[iVar3 * 4 + 1];
          local_24 = (float)piVar5[iVar3 * 4 + 2];
          local_20 = (float)piVar5[iVar3 * 4 + 3];
          iVar1 = fn_005f1c78(&local_28,&local_40,&local_34);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = ((local_40 + local_34) * 0.5 + local_28) * 0.5;
              param_3[1] = ((local_3c + local_30) * 0.5 + local_24) * 0.5;
              param_3[2] = ((local_38 + local_2c) * 0.5 + local_20) * 0.5;
            }
            return 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < *piVar5);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar2);
  }
  return 0;
}



undefined4 fn_0065f7c8(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar4 = (int *)(param_1 + 4);
  piVar3 = (int *)(param_2 + 4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      local_60 = (float)piVar4[iVar2 * 4 + 1];
      local_5c = (float)piVar4[iVar2 * 4 + 2];
      local_58 = (float)piVar4[iVar2 * 4 + 3];
      iVar1 = 0;
      if (0 < *piVar3) {
        fVar5 = (float)piVar4[iVar2 * 4 + 4] * (float)piVar4[iVar2 * 4 + 4];
        do {
          local_54 = piVar3[iVar1 * 0xf + 1];
          iStack_50 = piVar3[iVar1 * 0xf + 2];
          iStack_4c = piVar3[iVar1 * 0xf + 3];
          iStack_48 = piVar3[iVar1 * 0xf + 4];
          iStack_44 = piVar3[iVar1 * 0xf + 5];
          iStack_40 = piVar3[iVar1 * 0xf + 6];
          iStack_3c = piVar3[iVar1 * 0xf + 7];
          iStack_38 = piVar3[iVar1 * 0xf + 8];
          local_34 = piVar3[iVar1 * 0xf + 9];
          iStack_30 = piVar3[iVar1 * 0xf + 10];
          iStack_2c = piVar3[iVar1 * 0xf + 0xb];
          iStack_28 = piVar3[iVar1 * 0xf + 0xc];
          iStack_24 = piVar3[iVar1 * 0xf + 0xd];
          iStack_20 = piVar3[iVar1 * 0xf + 0xe];
          iStack_1c = piVar3[iVar1 * 0xf + 0xf];
          fn_0065fb48(&local_74,&local_60);
          if ((local_74 - local_60) * (local_74 - local_60) +
              (local_70 - local_5c) * (local_70 - local_5c) +
              (local_6c - local_58) * (local_6c - local_58) <= fVar5) {
            if (param_3 != (float *)0x0) {
              *param_3 = local_74;
              param_3[1] = local_70;
              param_3[2] = local_6c;
            }
            return 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar4);
  }
  return 0;
}



undefined4 fn_0065f63c(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  ulonglong uVar14;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_40;
  float local_3c;
  float local_38;
  
  piVar3 = (int *)(param_2 + 4);
  piVar5 = (int *)(param_1 + 4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar2 = 0;
      local_60 = (float)piVar5[iVar4 * 4 + 1];
      local_5c = (float)piVar5[iVar4 * 4 + 2];
      local_58 = (float)piVar5[iVar4 * 4 + 3];
      uVar14 = (ulonglong)(uint)piVar5[iVar4 * 4 + 4];
      if (0 < *piVar3) {
        do {
          local_40 = (float)piVar3[iVar2 * 6 + 1];
          local_3c = (float)piVar3[iVar2 * 6 + 2];
          local_38 = (float)piVar3[iVar2 * 6 + 3];
          local_54 = (float)piVar3[iVar2 * 6 + 4];
          local_50 = (float)piVar3[iVar2 * 6 + 5];
          local_4c = (float)piVar3[iVar2 * 6 + 6];
          iVar1 = fn_005f1b48(&local_40,&local_54,&local_60);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              fVar7 = (local_40 + local_54) * 0.5;
              fVar11 = (local_3c + local_50) * 0.5;
              fVar12 = (local_38 + local_4c) * 0.5;
              fVar9 = fVar7 - local_60;
              fVar6 = fVar11 - local_5c;
              fVar8 = fVar12 - local_58;
              fVar10 = SQRT(fVar9 * fVar9 + fVar6 * fVar6 + fVar8 * fVar8);
              fVar13 = (float)uVar14;
              if (fVar13 < fVar10) {
                fVar10 = 1.0 / fVar10;
                param_3[2] = local_58 + fVar8 * fVar10 * fVar13;
                *param_3 = local_60 + fVar9 * fVar10 * fVar13;
                param_3[1] = local_5c + fVar6 * fVar10 * fVar13;
              }
              else {
                *param_3 = fVar7;
                param_3[1] = fVar11;
                param_3[2] = fVar12;
              }
            }
            return 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar3);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *piVar5);
  }
  return 0;
}



undefined4 fn_0065f538(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  float fVar5;
  float local_74;
  float local_70;
  float local_6c;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  piVar4 = (int *)(param_1 + 4);
  piVar3 = (int *)(param_2 + 4);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar1 = 0;
      local_54 = piVar4[iVar2 * 0xf + 1];
      iStack_50 = piVar4[iVar2 * 0xf + 2];
      iStack_4c = piVar4[iVar2 * 0xf + 3];
      iStack_48 = piVar4[iVar2 * 0xf + 4];
      iStack_44 = piVar4[iVar2 * 0xf + 5];
      iStack_40 = piVar4[iVar2 * 0xf + 6];
      iStack_3c = piVar4[iVar2 * 0xf + 7];
      iStack_38 = piVar4[iVar2 * 0xf + 8];
      local_34 = piVar4[iVar2 * 0xf + 9];
      iStack_30 = piVar4[iVar2 * 0xf + 10];
      iStack_2c = piVar4[iVar2 * 0xf + 0xb];
      iStack_28 = piVar4[iVar2 * 0xf + 0xc];
      iStack_24 = piVar4[iVar2 * 0xf + 0xd];
      iStack_20 = piVar4[iVar2 * 0xf + 0xe];
      iStack_1c = piVar4[iVar2 * 0xf + 0xf];
      if (0 < *piVar3) {
        do {
          local_60 = (float)piVar3[iVar1 * 4 + 1];
          local_5c = (float)piVar3[iVar1 * 4 + 2];
          local_58 = (float)piVar3[iVar1 * 4 + 3];
          fVar5 = (float)piVar3[iVar1 * 4 + 4];
          fn_0065fb48(&local_74,&local_60);
          if ((local_74 - local_60) * (local_74 - local_60) +
              (local_70 - local_5c) * (local_70 - local_5c) +
              (local_6c - local_58) * (local_6c - local_58) <= fVar5 * fVar5) {
            if (param_3 != (float *)0x0) {
              *param_3 = local_74;
              param_3[1] = local_70;
              param_3[2] = local_6c;
            }
            return 1;
          }
          iVar1 = iVar1 + 1;
        } while (iVar1 < *piVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar4);
  }
  return 0;
}



void fn_0065fb48(float *param_1,float *param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_c [3];
  
  fVar5 = *param_3;
  fVar7 = param_3[1];
  fVar3 = param_3[2];
  local_c[0] = param_3[0xc];
  local_c[1] = param_3[0xd];
  local_c[2] = param_3[0xe];
  fVar8 = param_2[2];
  fVar10 = *param_2;
  fVar11 = param_2[1];
  param_1[2] = fVar3;
  iVar2 = 0;
  *param_1 = fVar5;
  param_1[1] = fVar7;
  do {
    iVar1 = iVar2 * 3;
    fVar6 = param_3[iVar2 * 3 + 4];
    fVar9 = param_3[iVar2 * 3 + 5];
    fVar12 = local_c[iVar2];
    iVar2 = iVar2 + 1;
    fVar4 = (fVar10 - fVar5) * param_3[iVar1 + 3] + (fVar11 - fVar7) * fVar6 +
            (fVar8 - fVar3) * fVar9;
    if (fVar12 < fVar4) {
      fVar4 = fVar12;
    }
    if (fVar4 < -fVar12) {
      fVar4 = -fVar12;
    }
    *param_1 = *param_1 + param_3[iVar1 + 3] * fVar4;
    param_1[1] = param_1[1] + fVar6 * fVar4;
    param_1[2] = param_1[2] + fVar9 * fVar4;
  } while (iVar2 < 3);
  return;
}


