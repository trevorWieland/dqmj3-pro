#include "003f46a8_003f4e40b.h"



undefined4 * fn_003f4e40(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003432cc();
  *puVar1 = &DAT_00835020;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  return puVar1;
}



int fn_003f4d60(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  float in_s0;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_20;
  float local_1c;
  float local_18;
  
  fVar6 = 1.0;
  fVar5 = *(float *)(param_1 + 0x14);
  fVar4 = fVar5 + 1.0 / (*(float *)(*(int *)(param_1 + 0x20) + *(short *)(param_1 + 0x18) * 0x1c +
                                   0x18) / in_s0);
  *(float *)(param_1 + 0x14) = fVar4;
  if (0x3f800000 < (int)fVar4) {
    fVar4 = fVar6;
  }
  *(float *)(param_1 + 0x14) = fVar4;
  fn_006cbd68(param_1);
  local_20 = fVar4 - (float)param_2[8];
  local_1c = fVar5 - (float)param_2[9];
  local_18 = fVar6 - (float)param_2[10];
  (**(code **)(*param_2 + 0x3c))(param_2,&local_20);
  if (*(int *)(param_1 + 0x14) == 0x3f800000) {
    iVar1 = (int)*(short *)(param_1 + 0x1a);
    sVar3 = *(short *)(param_1 + 0x18) + 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    iVar2 = iVar1;
    if (iVar1 < sVar3) {
      iVar2 = 1;
    }
    *(short *)(param_1 + 0x18) = sVar3;
    if (iVar1 < sVar3) {
      return iVar2;
    }
  }
  return 0;
}



undefined4 fn_003f4d00(int *param_1)

{
  undefined2 uVar1;
  short sVar2;
  
  fn_0034329c();
  uVar1 = fn_006cbf00(param_1,(int)(short)param_1[4] * param_1[7] + -1);
  *(undefined2 *)((int)param_1 + 0x1a) = uVar1;
  sVar2 = (**(code **)(*param_1 + 0x18))(param_1,(short)param_1[4] + -1);
  *(short *)(param_1 + 6) = sVar2 * (short)param_1[7];
  param_1[5] = 0;
  return 1;
}



void fn_003f49dc(int param_1,int *param_2)

{
  int iVar1;
  float *pfVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float in_s0;
  float fVar10;
  float fVar11;
  float fVar12;
  undefined8 uVar13;
  float fVar14;
  float fVar15;
  float local_5c;
  float local_58;
  float local_54;
  
  iVar8 = 0;
  iVar3 = (int)((longlong)(param_2[1] - *param_2) * -0x6db6db6d +
                ((ulonglong)(uint)(param_2[1] - *param_2) << 0x20) >> 0x20);
  iVar3 = (iVar3 >> 4) - (iVar3 >> 0x1f);
  if (-1 < iVar3) {
    uVar13 = 0x3f80000000000000;
    do {
      uVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
      iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      iVar1 = iVar8;
      if (iVar5 >> 4 != iVar5 >> 0x1f) {
        if (iVar8 < 0) {
          uVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
          do {
            iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
            iVar1 = iVar1 + ((iVar5 >> 4) - (iVar5 >> 0x1f));
          } while (iVar1 < 0);
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        fn_00169f1c(iVar1,(iVar5 >> 4) - (iVar5 >> 0x1f));
        iVar1 = extraout_r1;
      }
      iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      iVar9 = *param_2;
      pfVar7 = (float *)(iVar9 + iVar1 * 0x1c);
      iVar1 = iVar8 + 1;
      if (iVar5 >> 4 != iVar5 >> 0x1f) {
        if (iVar1 < 0) {
          uVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
          do {
            iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
            iVar1 = iVar1 + ((iVar5 >> 4) - (iVar5 >> 0x1f));
          } while (iVar1 < 0);
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        fn_00169f1c(iVar1,(iVar5 >> 4) - (iVar5 >> 0x1f));
        iVar1 = extraout_r1_00;
      }
      pfVar2 = (float *)(iVar9 + iVar1 * 0x1c);
      local_5c = *pfVar2;
      local_58 = pfVar2[1];
      local_54 = pfVar2[2];
      iVar1 = iVar8 + -1;
      uVar4 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
      iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
      if (iVar5 >> 4 != iVar5 >> 0x1f) {
        if (iVar1 < 0) {
          uVar6 = *(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20);
          do {
            iVar5 = (int)((longlong)(int)uVar6 * -0x6db6db6d + ((ulonglong)uVar6 << 0x20) >> 0x20);
            iVar1 = iVar1 + ((iVar5 >> 4) - (iVar5 >> 0x1f));
          } while (iVar1 < 0);
        }
        iVar5 = (int)((longlong)(int)uVar4 * -0x6db6db6d + ((ulonglong)uVar4 << 0x20) >> 0x20);
        fn_00169f1c(iVar1,(iVar5 >> 4) - (iVar5 >> 0x1f));
        iVar1 = extraout_r1_01;
      }
      pfVar2 = (float *)(*param_2 + iVar1 * 0x1c);
      fVar15 = *pfVar2;
      fVar14 = pfVar2[2];
      fn_005f1940(&local_5c,pfVar7);
      pfVar7[6] = in_s0;
      fVar15 = fVar15 - *pfVar7;
      local_5c = local_5c - *pfVar7;
      fVar14 = fVar14 - pfVar7[2];
      fVar12 = (float)uVar13;
      local_54 = local_54 - pfVar7[2];
      in_s0 = (float)((ulonglong)uVar13 >> 0x20);
      fVar10 = in_s0 / SQRT(fVar15 * fVar15 + fVar12 * fVar12 + fVar14 * fVar14);
      fVar11 = in_s0 / SQRT(local_5c * local_5c + fVar12 * fVar12 + local_54 * local_54);
      local_5c = local_5c * fVar11;
      local_58 = fVar12 * fVar11;
      local_54 = local_54 * fVar11;
      fVar11 = local_5c - fVar15 * fVar10;
      fVar15 = local_58 - fVar12 * fVar10;
      fVar14 = local_54 - fVar14 * fVar10;
      if ((fVar11 != fVar12 || (fVar11 != fVar12 || fVar15 != fVar12)) || fVar14 != fVar12) {
        fVar10 = in_s0 / SQRT(fVar11 * fVar11 + fVar15 * fVar15 + fVar14 * fVar14);
        in_s0 = fVar15 * fVar10;
        pfVar7[3] = fVar11 * fVar10;
        pfVar7[4] = in_s0;
        pfVar7[5] = fVar14 * fVar10;
      }
      else {
        in_s0 = in_s0 / SQRT(local_5c * local_5c + local_58 * local_58 + local_54 * local_54);
        local_5c = local_5c * in_s0;
        local_58 = local_58 * in_s0;
        in_s0 = local_54 * in_s0;
        pfVar7[3] = local_5c;
        pfVar7[4] = local_58;
        pfVar7[5] = in_s0;
        local_54 = in_s0;
      }
      iVar8 = iVar8 + 1;
    } while (iVar8 <= iVar3);
  }
  return;
}


