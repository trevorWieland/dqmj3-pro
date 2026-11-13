#include "0044f020_0044f64c.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


uint * fn_0044f64c(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0;
  do {
    uVar1 = DAT_008c0330 >> (uVar3 & 0xff);
    uVar2 = (uint)uVar1;
    if ((uVar1 & 1) == 0) break;
    uVar3 = uVar3 + 1;
    if (0xf < (int)uVar3) {
      uVar3 = 0xffffffff;
      goto LAB_0044f6a0;
    }
  } while (uVar3 < 0x10);
  if (uVar3 < 0x10) {
    uVar2 = (uint)DAT_008c0330 | 1 << (uVar3 & 0xff);
    DAT_008c0330 = (ushort)uVar2;
  }
LAB_0044f6a0:
  if ((int)uVar3 < 0) {
    uVar2 = 0xd8601838;
  }
  *param_1 = uVar3;
  if ((int)uVar3 < 0) {
    fn_0015e294(uVar2);
  }
  (&DAT_008ec070)[*param_1] = 0;
  return param_1;
}



void fn_0044f63c(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar1 + *param_1 * 4) = param_2;
  return;
}



int fn_0044f610(int param_1)

{
  fn_0015e144();
  if (*(int *)(param_1 + 0x14) != 0) {
    svc_0x23();
    *(int *)(param_1 + 0x14) = 0;
  }
  return param_1;
}



void fn_0044f5d8(undefined4 *param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  fn_001ad620(&local_10,0xffff8001,0);
  *param_1 = local_10;
  param_1[1] = uStack_c;
  return;
}



void fn_0044f450(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  int *piVar4;
  undefined4 in_lr;
  
  iVar2 = *param_1;
  if (iVar2 == -2) {
    fn_00147e54(DAT_008c0334,param_1,0,0xffffffff,0,0);
  }
  else {
    if (iVar2 == -1) {
      fn_00147e54(DAT_008c0334,param_1,0,1,0,0);
      return;
    }
    if (iVar2 == 0) {
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -1;
      return;
    }
    if (iVar2 == 1) {
      piVar4 = param_1 + 1;
      fn_0014ddec(piVar4);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = -2;
      fn_00147e54(DAT_008c0334,param_1,0,0xffffffff,0,0);
      do {
        iVar3 = *piVar4;
        iVar2 = -iVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar2;
      if (iVar3 != -1 && 0 < iVar2) {
        fn_00147e54(DAT_008c0334,piVar4,0,1,0,0,unaff_r4,in_lr);
      }
      return;
    }
  }
  return;
}



int * fn_0044f2c8(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  if (param_2 == 0) {
    param_3 = param_3 << 8;
  }
  else {
    param_3 = 0x300;
  }
  *param_1 = param_3;
  param_1[1] = 0x2025e;
  param_1[2] = 0;
  iVar2 = 5;
  param_1[3] = 0x900251;
  piVar1 = param_1 + 3;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = 0x1d00200;
  iVar2 = 0xf;
  piVar1 = param_1 + 0xf;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  if (param_2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = 2;
  }
  param_1[0x2e] = iVar2;
  param_1[0x2f] = 0x10229;
  param_1[0x30] = 0;
  param_1[0x31] = 0x1d00200;
  iVar2 = 0xf;
  piVar1 = param_1 + 0x31;
  do {
    iVar2 = iVar2 + -1;
    piVar1[1] = -0x152f0153;
    piVar1 = piVar1 + 2;
    *piVar1 = -0x152f0153;
  } while (iVar2 != 0);
  param_1[0x50] = param_2;
  param_1[0x51] = 0x10244;
  return param_1 + 0x52;
}



void fn_0044f020(int param_1,float *param_2)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  float in_s0;
  float fVar8;
  float fVar9;
  float fVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  
  *(undefined4 *)(param_1 + 8) = 0;
  fVar13 = 0.0;
  *(undefined4 *)(param_1 + 0xc) = 0xf00e6;
  fVar10 = *param_2;
  fVar12 = 8191.0;
  fVar8 = param_2[1] - fVar10;
  fVar9 = fVar8;
  if (fVar8 != 0.0) {
    fVar9 = (float)((int)fVar8 << 1);
  }
  if (fVar8 != 0.0 && (uint)fVar9 >> 0x18 != 0xff) {
    fVar9 = (fVar8 + 2.0) * 2048.0;
    fVar8 = fVar13;
    if (0.0 <= fVar9) {
      bVar7 = SBORROW4((int)fVar9,0x46000000);
      iVar4 = (int)fVar9 + -0x46000000;
      if ((int)fVar9 < 0x46000000) {
        bVar7 = SBORROW4((int)fVar9,0x45800000);
        iVar4 = (int)fVar9 + -0x45800000;
      }
      else {
        fVar9 = fVar12;
      }
      fVar8 = fVar9;
      if (iVar4 < 0 == bVar7) {
        uVar5 = VectorFloatToUnsigned(fVar9 - 4096.0,3);
        goto LAB_0044f0c8;
      }
    }
    uVar5 = VectorFloatToUnsigned(fVar8 + 4096.0,3);
  }
  else {
    uVar5 = 0;
  }
LAB_0044f0c8:
  iVar4 = 0x7ff;
  if ((fVar10 <= 0.0) || ((uint)ABS(fVar10) >> 0x17 == 0xff)) {
    iVar6 = 0;
  }
  else {
    iVar6 = iVar4;
    if ((int)(fVar10 * 2048.0) < 0x45000000) {
      iVar6 = VectorFloatToUnsigned(fVar10 * 2048.0,3);
    }
  }
  *(uint *)(param_1 + 0x10) = uVar5 | iVar6 << 0xd;
  iVar6 = 1;
  *(undefined4 *)(param_1 + 0x14) = 0x7ff00e8;
  puVar2 = (uint *)(param_1 + 0x18);
  do {
    puVar3 = puVar2;
    fVar9 = param_2[iVar6];
    if ((fVar9 <= 0.0) || ((uint)ABS(fVar9) >> 0x17 == 0xff)) {
      iVar11 = 0;
    }
    else {
      iVar11 = iVar4;
      if ((int)(fVar9 * 2048.0) < 0x45000000) {
        iVar11 = VectorFloatToUnsigned(fVar9 * 2048.0,3);
      }
    }
    fVar9 = (param_2 + iVar6)[1] - fVar9;
    fVar8 = fVar9;
    if (fVar9 != 0.0) {
      fVar8 = (float)((int)fVar9 << 1);
    }
    if (fVar9 != 0.0 && (uint)fVar8 >> 0x18 != 0xff) {
      fVar9 = (fVar9 + 2.0) * 2048.0;
      fVar8 = fVar13;
      if (0.0 <= fVar9) {
        bVar7 = SBORROW4((int)fVar9,0x46000000);
        iVar1 = (int)fVar9 + -0x46000000;
        if ((int)fVar9 < 0x46000000) {
          bVar7 = SBORROW4((int)fVar9,0x45800000);
          iVar1 = (int)fVar9 + -0x45800000;
        }
        else {
          fVar9 = fVar12;
        }
        fVar8 = fVar9;
        if (iVar1 < 0 == bVar7) {
          uVar5 = VectorFloatToUnsigned(fVar9 - 4096.0,3);
          goto LAB_0044f1d8;
        }
      }
      uVar5 = VectorFloatToUnsigned(fVar8 + 4096.0,3);
    }
    else {
      uVar5 = 0;
    }
LAB_0044f1d8:
    iVar6 = iVar6 + 1;
    *puVar3 = uVar5 | iVar11 << 0xd;
    puVar2 = puVar3 + 1;
  } while (iVar6 < 0x7f);
  fVar9 = in_s0;
  if (in_s0 != 0.0) {
    fVar9 = (float)((int)in_s0 << 1);
  }
  if (in_s0 != 0.0 && (uint)fVar9 >> 0x18 != 0xff) {
    fVar9 = (in_s0 + 2.0) * 2048.0;
    if (0.0 <= fVar9) {
      bVar7 = SBORROW4((int)fVar9,0x46000000);
      iVar11 = (int)fVar9 + -0x46000000;
      if ((int)fVar9 < 0x46000000) {
        bVar7 = SBORROW4((int)fVar9,0x45800000);
        iVar11 = (int)fVar9 + -0x45800000;
        fVar13 = fVar9;
      }
      else {
        fVar13 = fVar12;
      }
      if (iVar11 < 0 == bVar7) {
        uVar5 = VectorFloatToUnsigned(fVar13 - 4096.0,3);
        goto LAB_0044f254;
      }
    }
    uVar5 = VectorFloatToUnsigned(fVar13 + 4096.0,3);
  }
  else {
    uVar5 = 0;
  }
LAB_0044f254:
  fVar9 = param_2[iVar6];
  if ((fVar9 <= 0.0) || ((uint)ABS(fVar9) >> 0x17 == 0xff)) {
    iVar4 = 0;
  }
  else if ((int)(fVar9 * 2048.0) < 0x45000000) {
    iVar4 = VectorFloatToUnsigned(fVar9 * 2048.0,3);
  }
  puVar3[1] = uVar5 | iVar4 << 0xd;
  puVar3[2] = 0;
  return;
}


