#include "00189804_00189dcc.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00189dcc(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xd0042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 0xe | 2;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00189d74(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x180182;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined4 *)(iVar2 + 0x90) = param_5;
  *(undefined4 *)(iVar2 + 0x94) = param_6;
  *(undefined1 *)(iVar2 + 0x98) = param_7;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(undefined4 *)(iVar2 + 0x9c) = 0;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00189d3c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x190040;
  *(undefined4 *)(iVar2 + 0x84) = param_1;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00189d00(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xa0000;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    *param_1 = *(undefined4 *)(iVar2 + 0x8c);
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00189cb8(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0xe0042;
  *(int *)(iVar2 + 0x84) = param_2;
  *(undefined4 *)(iVar2 + 0x8c) = param_1;
  *(uint *)(iVar2 + 0x88) = param_2 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008c3cfc;
  if (-1 < DAT_008c3cfc) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00189c10(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_008c07e8 == '\0') {
    if (param_1 < 0x40) {
      param_1 = param_1 + 4;
    }
    else {
      param_1 = param_1 + 5;
    }
    if (param_1 < 8) {
      param_1 = 8;
    }
    if (param_2 < 0x40) {
      param_2 = param_2 + 4;
    }
    else {
      param_2 = param_2 + 5;
    }
    if (param_2 < 8) {
      param_2 = 8;
    }
    iVar1 = fn_0017c1a4(DAT_008c0794,0x1000,param_2,8,param_1,8,(undefined1)DAT_008eeffc);
    if ((-1 < iVar1) && (iVar1 = fn_0017c428(), iVar1 < 0)) {
      fn_00170688();
    }
  }
  else {
    iVar1 = -0x375ef3f5;
  }
  return iVar1;
}



void fn_00189bcc(int *param_1)

{
  int iVar1;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_00193338(&local_10);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x189bec);
  }
  if (*param_1 != 0) {
    svc_0x23();
    *param_1 = 0;
  }
  *param_1 = local_10;
  return;
}



undefined4
fn_00189b34(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined4 *param_5)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 local_1c [2];
  byte local_1a;
  byte local_19;
  
  local_1c[0] = 0xa5;
  fn_00193220(param_1,param_2,local_1c,4,0);
  if ((local_1a & 0x40) == 0) {
    uVar2 = local_1a & 0x3f;
  }
  else {
    uVar2 = (uint)local_19 | (local_1a & 0x3f) << 8;
  }
  if (param_4 < uVar2) {
    uVar1 = 0xc8610c0f;
  }
  else {
    uVar1 = fn_00193220(param_1,param_2,param_3);
    *param_5 = uVar1;
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 fn_00189b14(int param_1,int param_2,int param_3)

{
  undefined4 extraout_r1;
  
  fn_00169f1c(param_3 + param_2,*(undefined4 *)(param_1 + 4));
  return extraout_r1;
}



void fn_00189ad0(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  
  if (param_6 == 0) {
    param_1[2] = (int)(param_1 + 3);
    iVar1 = param_2;
  }
  else {
    param_1[2] = param_2;
    iVar1 = param_2 + 0x10;
  }
  *param_1 = iVar1;
  param_1[1] = param_4;
  iVar1 = iVar1 + param_4 * 8;
  param_1[7] = iVar1;
  param_1[8] = param_3 - (iVar1 - param_2);
  param_1[10] = param_5;
  return;
}



undefined4 fn_00189a70(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  
  piVar3 = *(int **)(param_1 + 8);
  if (piVar3[2] < 1) {
    return 0;
  }
  iVar2 = *piVar3;
  iVar4 = piVar3[1];
  if (iVar2 < iVar4) {
    bVar5 = SBORROW4(iVar2,param_2);
    iVar1 = iVar2 - param_2;
    if (iVar2 <= param_2) {
      bVar5 = SBORROW4(param_2,iVar4);
      iVar1 = param_2 - iVar4;
    }
    if (iVar1 < 0 == bVar5) {
      return 0;
    }
  }
  else {
    bVar5 = param_2 == 0;
    if (-1 < param_2) {
      bVar5 = iVar4 == param_2;
    }
    if (bVar5 || (-1 >= param_2 || iVar4 < param_2)) {
      bVar5 = SBORROW4(iVar2,param_2);
      iVar4 = iVar2 - param_2;
      if (iVar2 <= param_2) {
        bVar5 = SBORROW4(param_2,*(int *)(param_1 + 4));
        iVar4 = param_2 - *(int *)(param_1 + 4);
      }
      if (iVar4 < 0 == bVar5) {
        return 0;
      }
    }
  }
  return 1;
}



undefined1 fn_00189a5c(void)

{
  return *(undefined1 *)(DAT_008c3c44 + 8);
}



void fn_00189804(longlong *param_1,int param_2,longlong *param_3,int param_4,undefined4 param_5,
                 int param_6)

{
  int iVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  float fVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  undefined8 uVar16;
  longlong lVar17;
  
  svc_0x28();
  uVar12 = (int)param_1 - (int)param_3;
  uVar8 = param_2 - (param_4 + (uint)(param_1 < param_3));
  fVar15 = 0.5;
  uVar4 = (undefined4)((ulonglong)uVar12 * 0xbad34aee >> 0x20);
  uVar16 = 0x3f800000;
  while( true ) {
    fVar14 = (float)VectorSignedToFloat(param_6 * 1000,(byte)(in_fpscr >> 0x16) & 3);
    uVar2 = (ulonglong)uVar12 * 3 +
            ((ulonglong)
             (uint)(((int)uVar8 >> 0x1f) * -0x452cb512 +
                   (int)((ulonglong)uVar8 * 0xbad34aee >> 0x20)) << 0x20 |
            (ulonglong)uVar8 * 0xbad34aee & 0xffffffff) + CONCAT44(uVar8 * 3,uVar4);
    uVar9 = (uint)(uVar2 >> 0x20);
    iVar1 = (int)uVar9 >> 0x1f;
    lVar3 = (ulonglong)uVar9 * 0xe353f7cf +
            CONCAT44(iVar1 * -0x1cac0831,(int)((uVar2 & 0xffffffff) * 0xe353f7cf >> 0x20));
    lVar17 = (uVar2 & 0xffffffff) * 0x20c49ba5;
    uVar11 = (uint)((ulonglong)lVar3 >> 0x20);
    uVar13 = (uint)((ulonglong)uVar9 * 0x20c49ba5);
    uVar5 = (int)((ulonglong)lVar17 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar17);
    uVar6 = uVar5 + uVar11;
    fVar14 = fVar14 * fVar15;
    iVar10 = ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar5,uVar11) +
             iVar1 * 0x20c49ba5 + (int)((ulonglong)uVar9 * 0x20c49ba5 >> 0x20) +
             (uint)CARRY4(uVar6,uVar13);
    uVar5 = uVar6 + uVar13 >> 7 | iVar10 * 0x2000000;
    fVar7 = (float)fn_00191dd4(uVar5 + -iVar1,(iVar10 >> 7) + (uint)CARRY4(uVar5,-iVar1));
    in_fpscr = in_fpscr & 0xfffffff;
    if (fVar7 < fVar14) break;
    fVar15 = fVar15 + (float)uVar16;
  }
  uVar2 = (ulonglong)uVar12 * 3 +
          ((ulonglong)
           (uint)(((int)uVar8 >> 0x1f) * -0x452cb512 + (int)((ulonglong)uVar8 * 0xbad34aee >> 0x20))
           << 0x20 | (ulonglong)uVar8 * 0xbad34aee & 0xffffffff) + CONCAT44(uVar8 * 3,uVar4);
  uVar5 = (uint)(uVar2 >> 0x20);
  iVar1 = (int)uVar5 >> 0x1f;
  lVar3 = (ulonglong)uVar5 * 0xe353f7cf +
          CONCAT44(iVar1 * -0x1cac0831,(int)((uVar2 & 0xffffffff) * 0xe353f7cf >> 0x20));
  lVar17 = (uVar2 & 0xffffffff) * 0x20c49ba5;
  uVar6 = (uint)((ulonglong)lVar3 >> 0x20);
  uVar9 = (uint)((ulonglong)uVar5 * 0x20c49ba5);
  uVar8 = (int)((ulonglong)lVar17 >> 0x20) + (uint)CARRY4((uint)lVar3,(uint)lVar17);
  uVar12 = uVar8 + uVar6;
  iVar10 = iVar1 * 0x20c49ba5 + (int)((ulonglong)uVar5 * 0x20c49ba5 >> 0x20) +
           ((int)uVar6 >> 0x1f) + (uint)CARRY4(uVar8,uVar6) + (uint)CARRY4(uVar12,uVar9);
  uVar8 = uVar12 + uVar9 >> 7 | iVar10 * 0x2000000;
  fVar15 = (float)fn_00191dd4(uVar8 + -iVar1,(iVar10 >> 7) + (uint)CARRY4(uVar8,-iVar1));
  lVar17 = fn_00191e2c(fVar14 - fVar15);
  *param_1 = lVar17 * 1000;
  return;
}


