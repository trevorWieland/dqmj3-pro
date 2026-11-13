#include "001503ac_0015097c.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_0015097c(uint *param_1,int param_2,int param_3,int *param_4,uint *param_5,uint *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  
  *param_4 = 0;
  if (0 < param_3) {
    if (7 < param_3) {
      param_3 = 7;
    }
    do {
      uVar6 = param_1[4];
      uVar10 = *param_1;
      uVar11 = param_1[1];
      uVar1 = param_1[2];
      uVar4 = param_1[3];
      uVar7 = uVar6;
      if ((int)uVar6 < 1) {
        if (uVar6 != 0) {
          return;
        }
        if (uVar4 == uVar11 && uVar1 == uVar10) {
          if ((int)uVar11 < 0) {
            return;
          }
          uVar7 = 7;
        }
      }
      uVar2 = *param_5;
      uVar5 = param_5[1];
      if ((int)(uVar5 - (uVar11 + (uVar2 < uVar10))) < 0 ==
          (SBORROW4(uVar5,uVar11) != SBORROW4(uVar5 - uVar11,(uint)(uVar2 < uVar10)))) {
        iVar12 = uVar7 - *param_6;
      }
      else if ((int)uVar4 < 0) {
        iVar12 = uVar7 + 1;
      }
      else if ((int)(uVar5 - (uVar4 + (uVar2 < uVar1))) < 0 ==
               (SBORROW4(uVar5,uVar4) != SBORROW4(uVar5 - uVar4,(uint)(uVar2 < uVar1)))) {
        iVar12 = (uVar7 - *param_6) + 8;
      }
      else {
        iVar12 = param_3;
      }
      iVar8 = 0;
      if (param_3 < iVar12) {
        iVar12 = param_3;
      }
      if (0 < iVar12) {
        do {
          puVar9 = (uint *)(param_2 + iVar8 * 0x10);
          iVar3 = (int)((uVar7 - iVar8) + 8) % 8;
          *puVar9 = param_1[iVar3 * 4 + 10];
          iVar8 = iVar8 + 1;
          puVar9[1] = param_1[iVar3 * 4 + 0xb];
          puVar9[2] = param_1[iVar3 * 4 + 0xc];
          *(short *)(puVar9 + 3) = (short)param_1[iVar3 * 4 + 0xd];
          *(undefined2 *)((int)puVar9 + 0xe) = *(undefined2 *)((int)param_1 + iVar3 * 0x10 + 0x36);
        } while (iVar8 < iVar12);
      }
    } while (((param_1[4] != uVar6) || (*param_1 != uVar10 || param_1[1] != uVar11)) ||
            (uVar4 != param_1[3] || uVar1 != param_1[2]));
    *param_4 = iVar12;
    param_5[1] = uVar11;
    *param_5 = uVar10;
    *param_6 = uVar7;
  }
  return;
}



void fn_001508a4(int param_1)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  
  puVar3 = (uint *)(param_1 + 0x10);
  puVar2 = (uint *)(param_1 + 0xc);
  puVar1 = (uint *)(param_1 + 8);
  uVar4 = *puVar2;
  if ((((~uVar4 & 0xc) == 0) || (((uVar4 & 4) != 0 && ((*puVar1 & 8) == 0)))) ||
     (((uVar4 & 8) != 0 && ((*puVar1 & 4) == 0)))) {
    uVar4 = uVar4 | 8;
  }
  else {
    uVar4 = uVar4 & 0xfffffff7;
  }
  *puVar2 = uVar4;
  uVar4 = *puVar3;
  if ((((~uVar4 & 0xc) == 0) || (((uVar4 & 4) != 0 && ((*puVar1 & 8) == 0)))) ||
     (((uVar4 & 8) != 0 && ((*puVar1 & 4) == 0)))) {
    uVar4 = uVar4 | 8;
  }
  else {
    uVar4 = uVar4 & 0xfffffff7;
  }
  *puVar3 = uVar4;
  if ((*puVar1 & 4) != 0) {
    *puVar1 = *puVar1 & 0xfffffffb | 8;
  }
  *puVar2 = *puVar2 & 0xfffffffb;
  *puVar3 = *puVar3 & 0xfffffffb;
  return;
}



void fn_001506d8(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,undefined4 param_5
                 ,int param_6)

{
  uint uVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar4 = (float)VectorSignedToFloat(param_4 * param_4 + param_3 * param_3,
                                     (byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff;
  if (fVar4 != 0.0) {
    if (param_4 * param_4 < param_3 * param_3) {
      if (param_3 < 0) {
        fVar2 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
        fVar5 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
        fVar2 = (fVar2 * -36.0) / fVar5;
        fVar5 = -36.0;
      }
      else {
        fVar2 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
        fVar5 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
        fVar2 = (fVar2 * 36.0) / fVar5;
        fVar5 = 36.0;
      }
    }
    else if (param_4 < 0) {
      fVar2 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
      fVar5 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
      fVar5 = (fVar2 * -36.0) / fVar5;
      fVar2 = -36.0;
    }
    else {
      fVar2 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
      fVar5 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
      fVar5 = (fVar2 * 36.0) / fVar5;
      fVar2 = 36.0;
    }
    fVar2 = fVar5 * fVar5 + fVar2 * fVar2;
    if (1600.0 <= fVar2) {
      fVar2 = 1600.0;
    }
    if (fVar2 <= fVar4) {
      fVar6 = (float)VectorSignedToFloat(param_6,(byte)(uVar1 >> 0x16) & 3);
      fVar8 = (float)VectorSignedToFloat(param_6 * param_6,(byte)(uVar1 >> 0x16) & 3);
      uVar1 = uVar1 | (uint)(fVar4 < fVar8) << 0x1f;
      fVar3 = SQRT(fVar4);
      fVar7 = fVar3 - SQRT(fVar2);
      fVar5 = (float)VectorSignedToFloat(param_6 + -0x28,(byte)(uVar1 >> 0x16) & 3);
      if (SUB41(uVar1 >> 0x1f,0) == (NAN(fVar4) || NAN(fVar8))) {
        fVar4 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
        fVar2 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
        *param_1 = (short)(int)((fVar4 * fVar5) / fVar3);
        *param_2 = (short)(int)((fVar2 * fVar5) / fVar3);
        return;
      }
      fVar4 = (float)VectorSignedToFloat(param_3,(byte)(uVar1 >> 0x16) & 3);
      fVar3 = (fVar6 - SQRT(fVar2)) * fVar3;
      fVar2 = (float)VectorSignedToFloat(param_4,(byte)(uVar1 >> 0x16) & 3);
      *param_1 = (short)(int)((fVar4 * fVar5 * fVar7) / fVar3);
      *param_2 = (short)(int)((fVar2 * fVar5 * fVar7) / fVar3);
      return;
    }
  }
  *param_1 = 0;
  *param_2 = 0;
  return;
}



int fn_001505d4(undefined2 *param_1,undefined2 *param_2,int param_3,int param_4,int param_5,
                int param_6)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_3 < 0) {
    if (-param_5 == param_3 || -param_3 < param_5) {
LAB_0015060c:
      param_3 = 0;
    }
    else {
      param_3 = param_3 + param_5;
    }
  }
  else {
    if (param_3 <= param_5) goto LAB_0015060c;
    param_3 = param_3 - param_5;
  }
  if (param_4 < 0) {
    if (-param_5 != param_4 && param_5 <= -param_4) {
      param_4 = param_4 + param_5;
      goto LAB_0015063c;
    }
  }
  else if (param_5 < param_4) {
    param_4 = param_4 - param_5;
    goto LAB_0015063c;
  }
  param_4 = 0;
LAB_0015063c:
  param_6 = param_6 - param_5;
  iVar2 = param_4 * param_4 + param_3 * param_3;
  if (param_6 * param_6 <= iVar2) {
    iVar2 = iVar2 * 0x4000;
    if (iVar2 < 1) {
      iVar4 = 0;
    }
    else {
      iVar3 = 1;
      iVar4 = iVar2;
      if (1 < iVar2) {
        do {
          iVar3 = iVar3 * 2;
          iVar4 = iVar4 >> 1;
        } while (iVar3 < iVar4);
      }
      do {
        iVar4 = iVar3;
        iVar3 = fn_00300f74(iVar2,iVar4);
        iVar3 = iVar3 + iVar4 >> 1;
      } while (iVar3 < iVar4);
    }
    sVar1 = fn_00300f74(param_3 * param_6 * 0x80,iVar4);
    param_3 = (int)sVar1;
    sVar1 = fn_00300f74(param_4 * param_6 * 0x80,iVar4);
    param_4 = (int)sVar1;
  }
  *param_1 = (short)param_3;
  *param_2 = (short)param_4;
  return (int)(short)param_6;
}



int fn_0015059c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x4f0080;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00150550(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00400042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 0xe | 2;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



void fn_001503ac(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint local_54;
  uint local_4c;
  int local_44;
  uint local_3c;
  int local_2c;
  
  if (param_3 == 0) {
    local_4c = 400;
  }
  else {
    local_4c = 0x140;
  }
  piVar2 = (int *)(param_2 + param_3 * 0x10);
  if (param_4 == 0) {
    iVar5 = *piVar2;
  }
  else {
    iVar5 = piVar2[1];
  }
  iVar1 = piVar2[2];
  if (iVar1 == 0) {
    iVar3 = 0x18;
  }
  else {
    iVar3 = 0;
    switch(iVar1) {
    case 1:
      iVar3 = 3;
      break;
    case 2:
    case 3:
    case 4:
      iVar3 = 2;
    }
    iVar3 = iVar3 << 3;
  }
  local_54 = (uint)piVar2[3] >> 2;
  local_44 = iVar3 << 2;
  switch(iVar1) {
  case 0:
  case 1:
    local_68 = local_54 * 4 + 3;
    pcVar6 = (code *)&UNK_0015ffb4;
    local_60 = 3;
    break;
  case 2:
  case 3:
  case 4:
    local_68 = local_54 * 4 + 2;
    pcVar6 = fn_0015ff44;
    local_60 = 2;
    break;
  default:
    goto switchD_0015044c_default;
  }
  uStack_5c = 0;
  local_64 = local_54 << 2;
  local_6c = 0;
  if ((param_1 != 0) && (local_3c = 0, local_4c != 0)) {
    local_2c = local_54 * 8;
    do {
      uVar4 = 0;
      iVar1 = iVar5;
      do {
        (*pcVar6)(param_1,iVar1,local_54,&local_6c);
        uVar4 = uVar4 + 8;
        iVar1 = iVar1 + iVar3;
        param_1 = param_1 + iVar3 * 8;
      } while (uVar4 < 0xf0);
      iVar5 = iVar5 + local_2c * 4;
      param_1 = param_1 + local_44 * 4;
      local_3c = local_3c + 8;
    } while (local_3c < local_4c);
  }
switchD_0015044c_default:
  return;
}


