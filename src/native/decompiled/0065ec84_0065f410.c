#include "0065ec84_0065f410.h"



undefined4 fn_0065f410(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  
  piVar2 = (int *)(param_1 + 4);
  piVar5 = (int *)(param_2 + 4);
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      iVar3 = 0;
      local_40 = (float)piVar2[iVar4 * 6 + 1];
      fStack_3c = (float)piVar2[iVar4 * 6 + 2];
      fStack_38 = (float)piVar2[iVar4 * 6 + 3];
      local_34 = (float)piVar2[iVar4 * 6 + 4];
      local_30 = (float)piVar2[iVar4 * 6 + 5];
      fStack_2c = (float)piVar2[iVar4 * 6 + 6];
      if (0 < *piVar5) {
        do {
          local_28 = (float)piVar5[iVar3 * 4 + 1];
          local_24 = (float)piVar5[iVar3 * 4 + 2];
          local_20 = (float)piVar5[iVar3 * 4 + 3];
          iVar1 = fn_005f1b48(&local_40,&local_34,&local_28);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = ((local_40 + local_34) * 0.5 + local_28) * 0.5;
              param_3[1] = ((fStack_3c + local_30) * 0.5 + local_24) * 0.5;
              param_3[2] = ((fStack_38 + fStack_2c) * 0.5 + local_20) * 0.5;
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



undefined4 fn_0065f0a4(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 uVar14;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  
  piVar4 = (int *)(param_1 + 4);
  piVar2 = (int *)(param_2 + 4);
  iVar5 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    uVar14 = 0x3f000000;
    do {
      iVar3 = 0;
      local_b8 = (float)piVar4[iVar5 * 6 + 2];
      local_b4 = (float)piVar4[iVar5 * 6 + 3];
      local_b0 = (float)piVar4[iVar5 * 6 + 4];
      local_ac = (float)piVar4[iVar5 * 6 + 5];
      local_a8 = (float)piVar4[iVar5 * 6 + 6];
      local_a4 = (float)piVar4[iVar5 * 6 + 7];
      fVar13 = *(float *)(param_1 + 8);
      if (0 < *piVar2) {
        do {
          local_6c = (float)piVar2[iVar3 * 6 + 2];
          local_68 = (float)piVar2[iVar3 * 6 + 3];
          local_64 = (float)piVar2[iVar3 * 6 + 4];
          local_9c = (float)piVar2[iVar3 * 6 + 5];
          local_98 = (float)piVar2[iVar3 * 6 + 6];
          local_94 = (float)piVar2[iVar3 * 6 + 7];
          fVar12 = *(float *)(param_2 + 8);
          fVar6 = (local_a8 - local_b4) * (local_94 - local_64) -
                  (local_a4 - local_b0) * (local_98 - local_68);
          fVar8 = (local_a4 - local_b0) * (local_9c - local_6c) -
                  (local_ac - local_b8) * (local_94 - local_64);
          fVar7 = (local_ac - local_b8) * (local_98 - local_68) -
                  (local_a8 - local_b4) * (local_9c - local_6c);
          fVar11 = SQRT(fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7);
          fVar10 = fVar6 * (local_6c - local_b8) + fVar8 * (local_68 - local_b4) +
                   fVar7 * (local_64 - local_b0);
          fVar9 = fVar10 / (fVar11 * fVar11);
          local_4c = local_6c - fVar6 * fVar9;
          local_48 = local_68 - fVar8 * fVar9;
          local_58 = local_98 - fVar8 * fVar9;
          local_44 = local_64 - fVar7 * fVar9;
          local_5c = local_9c - fVar6 * fVar9;
          local_54 = local_94 - fVar7 * fVar9;
          iVar1 = fn_005f19e0(&local_b8,&local_ac,&local_4c,&local_5c);
          if (iVar1 == 0) {
            iVar1 = fn_005f1c78(&local_6c,&local_b8,&local_ac);
            if (iVar1 != 0) {
              if (param_3 != (float *)0x0) {
                fVar13 = (float)uVar14;
                *param_3 = ((local_b8 + local_ac) * fVar13 + local_6c) * fVar13;
                param_3[1] = ((local_b4 + local_a8) * fVar13 + local_68) * fVar13;
                param_3[2] = ((local_b0 + local_a4) * fVar13 + local_64) * fVar13;
              }
              return 1;
            }
            iVar1 = fn_005f1c78(&local_9c,&local_b8,&local_ac);
            if (iVar1 != 0) {
              if (param_3 == (float *)0x0) {
                return 1;
              }
              fVar13 = (float)uVar14;
              *param_3 = ((local_b8 + local_ac) * fVar13 + local_9c) * fVar13;
              param_3[1] = ((local_b4 + local_a8) * fVar13 + local_98) * fVar13;
              param_3[2] = ((local_b0 + local_a4) * fVar13 + local_94) * fVar13;
              return 1;
            }
          }
          else if (ABS(fVar10) / fVar11 <= fVar13 + fVar12) {
            if (param_3 == (float *)0x0) {
              return 1;
            }
            fVar13 = (float)uVar14;
            *param_3 = ((local_b8 + local_ac) * fVar13 + (local_6c + local_9c) * fVar13) * fVar13;
            param_3[1] = ((local_b4 + local_a8) * fVar13 + (local_68 + local_98) * fVar13) * fVar13;
            param_3[2] = ((local_b0 + local_a4) * fVar13 + (local_64 + local_94) * fVar13) * fVar13;
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



undefined4 fn_0065eec0(int param_1,int param_2,float *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  ulonglong uVar11;
  float local_6c;
  float local_68;
  float local_64;
  float local_58;
  float local_54;
  float local_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  
  piVar5 = (int *)(param_1 + 4);
  piVar4 = (int *)(param_2 + 4);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      local_6c = (float)piVar5[iVar3 * 6 + 2];
      local_68 = (float)piVar5[iVar3 * 6 + 3];
      local_64 = (float)piVar5[iVar3 * 6 + 4];
      iVar2 = 0;
      local_58 = (float)piVar5[iVar3 * 6 + 5];
      local_54 = (float)piVar5[iVar3 * 6 + 6];
      local_50 = (float)piVar5[iVar3 * 6 + 7];
      if (0 < *piVar4) {
        do {
          local_4c = piVar4[iVar2 * 6 + 1];
          iStack_48 = piVar4[iVar2 * 6 + 2];
          iStack_44 = piVar4[iVar2 * 6 + 3];
          local_40 = piVar4[iVar2 * 6 + 4];
          iStack_3c = piVar4[iVar2 * 6 + 5];
          iStack_38 = piVar4[iVar2 * 6 + 6];
          iVar1 = fn_005f12ec(&local_4c,&local_40,&local_6c,&local_58);
          if (iVar1 != 0) {
            if (param_3 != (float *)0x0) {
              *param_3 = local_6c;
              param_3[1] = local_68;
              param_3[2] = local_64;
              iVar3 = fn_005f1974(&local_4c,&local_40,param_3);
              if (iVar3 == 0) {
                fVar6 = local_58 - local_6c;
                fVar10 = local_54 - local_68;
                fVar7 = local_50 - local_64;
                iVar3 = 1;
                fVar8 = SQRT(fVar6 * fVar6 + fVar10 * fVar10 + fVar7 * fVar7);
                fVar9 = 1.0 / fVar8;
                fVar8 = fVar8 * 0.0625;
                fVar6 = fVar6 * fVar9 * fVar8;
                fVar10 = fVar10 * fVar9 * fVar8;
                uVar11 = (ulonglong)(uint)(fVar7 * fVar9 * fVar8);
                while( true ) {
                  *param_3 = *param_3 + fVar6;
                  param_3[1] = param_3[1] + fVar10;
                  param_3[2] = param_3[2] + (float)uVar11;
                  iVar2 = fn_005f1974(&local_4c,&local_40,param_3);
                  if (iVar2 != 0) break;
                  iVar3 = iVar3 + 1;
                  if (0xf < iVar3) {
                    *param_3 = local_58;
                    param_3[1] = local_54;
                    param_3[2] = local_50;
                    return 1;
                  }
                }
              }
            }
            return 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < *piVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar5);
  }
  return 0;
}



undefined4 fn_0065ed64(int param_1,int param_2,float *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  float local_40;
  float fStack_3c;
  float fStack_38;
  float local_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  
  piVar6 = (int *)(param_1 + 4);
  piVar8 = (int *)(param_2 + 4);
  iVar7 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    do {
      local_40 = (float)piVar6[iVar7 * 6 + 1];
      fStack_3c = (float)piVar6[iVar7 * 6 + 2];
      fStack_38 = (float)piVar6[iVar7 * 6 + 3];
      local_34 = (float)piVar6[iVar7 * 6 + 4];
      local_30 = (float)piVar6[iVar7 * 6 + 5];
      fStack_2c = (float)piVar6[iVar7 * 6 + 6];
      iVar5 = 0;
      if (0 < *piVar8) {
        do {
          local_28 = (float)piVar8[iVar5 * 6 + 1];
          fStack_24 = (float)piVar8[iVar5 * 6 + 2];
          local_20 = (float)piVar8[iVar5 * 6 + 3];
          fVar1 = (float)piVar8[iVar5 * 6 + 4];
          fVar3 = (float)piVar8[iVar5 * 6 + 5];
          fVar4 = (float)piVar8[iVar5 * 6 + 6];
          iVar2 = fn_005f2e74(&local_40,&local_34,&local_28);
          if (iVar2 != 0) {
            if (param_3 != (float *)0x0) {
              param_3[2] = ((fStack_38 + fStack_2c) * 0.5 + (local_20 + fVar4) * 0.5) * 0.5;
              *param_3 = ((local_40 + local_34) * 0.5 + (local_28 + fVar1) * 0.5) * 0.5;
              param_3[1] = ((fStack_3c + local_30) * 0.5 + (fStack_24 + fVar3) * 0.5) * 0.5;
            }
            return 1;
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < *piVar8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < *piVar6);
  }
  return 0;
}



bool fn_0065ed20(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_003199d8(*param_1);
  iVar2 = fn_003199d8(*param_2);
  return iVar1 < iVar2;
}



bool fn_0065ec84(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar1 = fn_002f6fa8();
  uVar2 = fn_002f8914();
  iVar3 = fn_006cd9d8(uVar1,uVar2);
  return *(short *)(iVar3 + 0x44) != 3;
}


