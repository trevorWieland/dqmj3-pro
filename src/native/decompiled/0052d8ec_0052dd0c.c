#include "0052d8ec_0052dd0c.h"

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


void fn_0052dd0c(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  fVar3 = param_2[3];
  fVar4 = param_2[4];
  fVar5 = param_2[5];
  fVar6 = param_2[6];
  fVar7 = param_2[7];
  *(float *)(param_1 + 0x1a0) = *param_2;
  *(float *)(param_1 + 0x1a4) = fVar1;
  *(float *)(param_1 + 0x1a8) = fVar2;
  *(float *)(param_1 + 0x1ac) = fVar3;
  *(float *)(param_1 + 0x1b0) = fVar4;
  *(float *)(param_1 + 0x1b4) = fVar5;
  *(float *)(param_1 + 0x1b8) = fVar6;
  *(float *)(param_1 + 0x1bc) = fVar7;
  fVar1 = param_2[9];
  fVar2 = param_2[10];
  fVar3 = param_2[0xb];
  *(float *)(param_1 + 0x1c0) = param_2[8];
  *(float *)(param_1 + 0x1c4) = fVar1;
  *(float *)(param_1 + 0x1c8) = fVar2;
  *(float *)(param_1 + 0x1cc) = fVar3;
  fVar7 = param_2[1];
  fVar5 = param_2[5];
  fVar6 = param_2[2];
  fVar1 = param_2[6];
  fVar4 = param_2[9];
  fVar3 = param_2[10];
  fVar2 = SQRT(*param_2 * *param_2 + param_2[4] * param_2[4] + param_2[8] * param_2[8]);
  *(float *)(param_1 + 0x200) = fVar2;
  fVar4 = SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar4 * fVar4);
  *(float *)(param_1 + 0x204) = fVar4;
  fVar1 = SQRT(fVar6 * fVar6 + fVar1 * fVar1 + fVar3 * fVar3);
  *(float *)(param_1 + 0x208) = fVar1;
  if (fVar2 <= 0.0) {
    *(undefined4 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  else {
    fVar3 = 1.0 / fVar2;
    *(float *)(param_1 + 0x1d0) = *param_2 * fVar3;
    *(float *)(param_1 + 0x1e0) = param_2[4] * fVar3;
    *(float *)(param_1 + 0x1f0) = param_2[8] * fVar3;
  }
  if (fVar4 <= 0.0) {
    *(undefined4 *)(param_1 + 500) = 0;
    *(undefined4 *)(param_1 + 0x1e4) = 0;
    *(undefined4 *)(param_1 + 0x1d4) = 0;
  }
  else {
    fVar3 = 1.0 / fVar4;
    *(float *)(param_1 + 0x1d4) = param_2[1] * fVar3;
    *(float *)(param_1 + 0x1e4) = param_2[5] * fVar3;
    *(float *)(param_1 + 500) = param_2[9] * fVar3;
  }
  if (fVar1 <= 0.0) {
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    *(undefined4 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    *(float *)(param_1 + 0x1d8) = param_2[2] * fVar1;
    *(float *)(param_1 + 0x1e8) = param_2[6] * fVar1;
    *(float *)(param_1 + 0x1f8) = param_2[10] * fVar1;
  }
  *(float *)(param_1 + 0x1dc) = param_2[3];
  *(float *)(param_1 + 0x1ec) = param_2[7];
  *(float *)(param_1 + 0x1fc) = param_2[0xb];
  *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x20c) * fVar2;
  *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x210) * fVar4;
  return;
}



void fn_0052dcdc(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_005f03cc(param_2);
  *(bool *)(iVar1 + 0x287) = *(char *)(param_1 + 4) == '\0';
  return;
}



void fn_0052dcb8(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_005f03cc(param_2);
  *(undefined1 *)(iVar1 + 0x286) = *(undefined1 *)(param_1 + 4);
  return;
}



uint fn_0052dbd8(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 4) == -0x101) {
    if (param_2 == 0) {
      if (*(short *)(param_1 + 0x10) == 0) {
        return 0;
      }
      uVar2 = (uint)*(ushort *)(param_1 + 6) + param_1;
    }
    else {
      uVar2 = *(int *)(param_2 + 4) + param_2;
    }
    if (uVar2 < (uint)(param_1 + *(int *)(param_1 + 0xc))) {
      return uVar2;
    }
  }
  else {
    if (param_2 == 0) {
      if (*(short *)(param_1 + 0x10) == 0) {
        return 0;
      }
      uVar2 = param_1 + ((uint)(*(ushort *)(param_1 + 6) >> 8) |
                        (*(ushort *)(param_1 + 6) & 0xff) << 8);
    }
    else {
      uVar2 = *(uint *)(param_2 + 4);
      uVar2 = (uVar2 << 0x18 | ((uVar2 & 0xffff) >> 8) << 0x10 | ((uVar2 & 0xffffff) >> 0x10) << 8 |
              uVar2 >> 0x18) + param_2;
    }
    uVar1 = *(uint *)(param_1 + 0xc);
    if (uVar2 < param_1 + (uVar1 << 0x18 | ((uVar1 & 0xffff) >> 8) << 0x10 |
                           ((uVar1 & 0xffffff) >> 0x10) << 8 | uVar1 >> 0x18)) {
      return uVar2;
    }
  }
  return 0;
}



/* WARNING: Removing unreachable block (ram,0x0052dbc4) */

uint fn_0052db94(uint *param_1,int param_2)

{
  uint uVar1;
  
  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_2 + param_1[1] <= uVar1) {
      uVar1 = param_2 + param_1[1];
    }
    param_1[1] = uVar1;
  }
  return param_1[1];
}



/* WARNING: Removing unreachable block (ram,0x0052db80) */

void fn_0052db34(uint *param_1,int param_2,int param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    if ((param_3 == 1) || (param_3 != 2)) goto LAB_0052db58;
    uVar1 = *param_1;
  }
  param_1[1] = uVar1;
LAB_0052db58:
  if (param_2 != 0) {
    uVar1 = *param_1;
    if (param_1[1] + param_2 <= *param_1) {
      uVar1 = param_1[1] + param_2;
    }
    param_1[1] = uVar1;
  }
  return;
}



int fn_0052da7c(void)

{
  int iVar1;
  bool bVar2;
  
  fn_00170704(&DAT_008e3304);
  fn_00170704(&DAT_008e3304);
  bVar2 = DAT_0089a64c != 0;
  fn_001707b4(&DAT_008e3304);
  iVar1 = DAT_008bfbd4;
  if ((bVar2) && (DAT_0089a64c = DAT_0089a64c + -1, DAT_0089a64c == 0)) {
    DAT_008e32f4 = 0xffffffff;
    DAT_008e3300 = 0xffffffff;
    DAT_0089a650 = 0;
    svc_0x23();
    if (DAT_008bfbd4 < 0) {
      fn_001707b4(&DAT_008e3304);
      return iVar1;
    }
  }
  fn_001707b4(&DAT_008e3304);
  return 0;
}



int fn_0052da4c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x40000;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052da0c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x88) = param_1;
  *(undefined4 *)(iVar2 + 0x80) = 0x30002;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d97c(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined1 param_4,
                undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x280244;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = *param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_3[1];
  *(undefined4 *)(iVar2 + 0x90) = param_3[2];
  *(undefined4 *)(iVar2 + 0x94) = param_3[3];
  *(undefined4 *)(iVar2 + 0x98) = param_3[4];
  *(undefined2 *)(iVar2 + 0x9c) = *(undefined2 *)(param_3 + 5);
  *(undefined1 *)(iVar2 + 0xa0) = param_4;
  *(undefined1 *)(iVar2 + 0xa4) = param_5;
  *(undefined4 *)(iVar2 + 0xb4) = param_1;
  *(undefined4 *)(iVar2 + 0xa8) = 0x20;
  *(undefined4 *)(iVar2 + 0xb0) = 0;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052d92c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  bool bVar7;
  
  iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar4 + 0x80) = 0x290000;
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  puVar3 = (undefined4 *)(iVar2 + 0x180);
  uVar5 = *puVar3;
  uVar6 = *(undefined4 *)(iVar2 + 0x184);
  *(undefined4 *)(iVar2 + 0x184) = param_1;
  *puVar3 = 0x4e0002;
  iVar1 = DAT_008bfbd4;
  svc_0x32();
  bVar7 = -1 < DAT_008bfbd4;
  *puVar3 = uVar5;
  *(undefined4 *)(iVar2 + 0x184) = uVar6;
  if (bVar7) {
    iVar1 = *(int *)(iVar4 + 0x84);
  }
  return iVar1;
}



int fn_0052d8ec(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x88) = param_1;
  *(undefined **)(iVar2 + 0x80) = &DAT_00200002;
  *(undefined4 *)(iVar2 + 0x84) = 0;
  svc_0x32();
  iVar1 = DAT_008bfbd4;
  if (-1 < DAT_008bfbd4) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


