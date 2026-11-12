#include "0051e230_0051e854.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_0051e854(void)

{
  int iVar1;
  
  if (DAT_0089a7c0 == '\0') {
    fn_00113d34(0);
    fn_001237bc();
    iVar1 = fn_0051e8b0(1);
    if (-1 < iVar1) {
      DAT_0089a7c0 = 1;
      return 0;
    }
    fn_0013c674();
  }
  else {
    iVar1 = -0x27df1407;
  }
  return iVar1;
}



undefined4 fn_0051e7dc(void)

{
  fn_00170704(&DAT_008ec34c);
  if (DAT_008ec358 < 1) {
    fn_001707b4(&DAT_008ec34c);
    return 0xd8a0bbf8;
  }
  DAT_008ec358 = DAT_008ec358 + -1;
  if ((DAT_008ec358 < 1) && (DAT_008ec35c != 0)) {
    svc_0x23();
    DAT_008ec35c = 0;
  }
  fn_001707b4(&DAT_008ec34c);
  return 0;
}



int fn_0051e7ac(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if (DAT_008ec358 < 1) {
    return -0x275f4408;
  }
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined **)(iVar2 + 0x80) = &DAT_00110042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 4 | 0xc;
  svc_0x32();
  iVar1 = DAT_008ec360;
  if (-1 < DAT_008ec360) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0051e634(void)

{
  int iVar1;
  int iVar2;
  
  fn_00170704(&DAT_008ec34c);
  if (0 < DAT_008ec358) {
    DAT_008ec358 = DAT_008ec358 + 1;
    fn_001707b4(&DAT_008ec34c);
    return 0;
  }
  iVar1 = fn_0013db70();
  if (iVar1 < 0) {
    fn_00146594();
  }
  iVar1 = fn_0051e5e4(&DAT_008ec35c,(char *)&DAT_007e4340);
  if (-1 < iVar1) {
    DAT_008ec360 = DAT_008ec35c;
    iVar2 = fn_0051e744(&DAT_008ec360);
    if (iVar2 < 0) {
      if (DAT_008ec35c != 0) {
        svc_0x23();
        DAT_008ec35c = 0;
      }
      fn_001707b4(&DAT_008ec34c);
      return iVar2;
    }
    DAT_008ec358 = 1;
  }
  fn_001707b4(&DAT_008ec34c);
  return iVar1;
}



int fn_0051e744(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x10002;
  *(undefined4 *)(iVar2 + 0x84) = 0x20;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0051e5e4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = 0;
  uVar1 = fn_002febd8(param_2);
  iVar2 = fn_0014fe94(&local_10,param_2,uVar1,0);
  if (-1 < iVar2) {
    *param_1 = local_10;
  }
  return iVar2;
}



undefined4 * fn_0051e568(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  param_1[0x19] = 0;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0xffffffff;
  fn_0013c500(param_1 + 0x1c);
  *(undefined2 *)(param_1 + 1) = 1;
  *(ushort *)(param_1 + 0x1b) = *(ushort *)(param_1 + 0x1b) | 0x8000;
  return param_1;
}



void fn_0051e548(int param_1,undefined1 param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 5) = param_2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(undefined1 *)(iVar1 + 0xe) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 0x20;
  return;
}



void fn_0051e464(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  if (param_2 < 0) {
    iVar1 = 0;
  }
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = *(int *)(param_1 + 0x68);
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(iVar1 + 0x20) = param_2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 2;
  return;
}



int * fn_0051e41c(int *param_1)

{
  param_1[4] = -1;
  if (param_1[1] != 0) {
    svc_0x23();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  return param_1;
}



void fn_0051e3dc(undefined4 *param_1,undefined4 param_2)

{
  *param_1 = param_2;
  param_1[0x15] = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0x16] = 0;
  param_1[0x12] = 0;
  param_1[0xe] = 0;
  param_1[0x17] = 0;
  param_1[0x13] = 0;
  param_1[0xf] = 0;
  param_1[0x18] = 0;
  param_1[0x14] = 0;
  param_1[0x10] = 0;
  return;
}



void fn_0051e2b4(byte *param_1,ushort *param_2,int param_3,ushort *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  byte *pbVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  int iVar11;
  ushort uVar12;
  ushort *puVar13;
  ushort unaff_r7;
  ushort uVar14;
  ushort local_68 [26];
  byte *pbStack_34;
  ushort *local_30;
  int iStack_2c;
  ushort *local_28;
  
  local_28 = param_4;
  iStack_2c = param_3;
  local_30 = param_2;
  pbStack_34 = param_1;
  uVar3 = param_4[1];
  uVar12 = param_4[2];
  while (0 < param_5) {
    bVar1 = *param_1;
    unaff_r7 = (ushort)bVar1;
    puVar10 = local_68;
    psVar7 = (short *)(param_3 + (uint)(bVar1 >> 4) * 4);
    iVar8 = 7;
    sVar4 = *psVar7;
    sVar5 = psVar7[1];
    pbVar6 = param_1;
    do {
      pbVar6 = pbVar6 + 1;
      iVar8 = iVar8 + -1;
      bVar2 = *pbVar6;
      *puVar10 = (ushort)(bVar2 >> 4);
      puVar10[1] = bVar2 & 0xf;
      puVar10 = puVar10 + 2;
    } while (iVar8 != 0);
    param_1 = param_1 + 8;
    if (param_5 < 0xe) {
      iVar8 = 0;
      if (param_5 < 1) break;
    }
    else {
      iVar8 = param_5 + -0xe;
      param_5 = 0xe;
    }
    iVar9 = param_5;
    puVar10 = local_30;
    puVar13 = local_68;
    uVar14 = uVar12;
    do {
      uVar12 = uVar3;
      iVar11 = (int)(short)uVar14 * (int)sVar5 + (int)(short)uVar12 * (int)sVar4 +
               ((int)((uint)*puVar13 << 0x1c) >> (0x11 - (bVar1 & 0xf) & 0xff)) + 0x400 >> 0xb;
      if (iVar11 < -0x8000) {
        iVar11 = -0x8000;
      }
      else if (0x7fff < iVar11) {
        iVar11 = 0x7fff;
      }
      iVar9 = iVar9 + -1;
      uVar3 = (ushort)iVar11;
      *puVar10 = uVar3;
      puVar10 = puVar10 + 1;
      puVar13 = puVar13 + 1;
      uVar14 = uVar12;
    } while (iVar9 != 0);
    local_30 = local_30 + param_5;
    param_5 = iVar8;
  }
  *local_28 = unaff_r7;
  local_28[1] = uVar3;
  local_28[2] = uVar12;
  return;
}



int fn_0051e26c(void)

{
  if (DAT_008c0338 != 0) {
    svc_0x23();
    if (DAT_008c0338 < 0) {
      return DAT_008c0338;
    }
    DAT_008c0338 = 0;
  }
  return 0;
}



int fn_0051e230(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xc0000;
  svc_0x32();
  iVar1 = DAT_008c0338;
  if (-1 < DAT_008c0338) {
    *param_1 = *(undefined4 *)(iVar2 + 0x88);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


