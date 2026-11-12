#include "00170308_001708e4.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


int fn_001708e4(void)

{
  int iVar1;
  
  iVar1 = DAT_008c33b8;
  if (DAT_008c33b8 != 0) {
    iVar1 = DAT_008c33b8 + 0x80;
  }
  return iVar1;
}



undefined4 fn_001708cc(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_008c33b8 != 0) {
    uVar1 = *(undefined4 *)(DAT_008c33b8 + 8);
  }
  return uVar1;
}



int fn_00170880(uint param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  
  uVar1 = fn_0017ca70();
  bVar3 = param_1 <= uVar1;
  if (uVar1 <= param_1) {
    bVar3 = param_1 + param_2 <= param_1;
  }
  if ((bVar3) || (iVar2 = fn_0017ca60(), iVar2 + uVar1 < param_1 + param_2)) {
    return 0;
  }
  return DAT_008c33a0 + param_1;
}



bool fn_00170868(void)

{
  return DAT_008c33ac != 0;
}



void fn_001707d4(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  undefined4 local_14;
  
  if (*(int *)(param_1 + 8) == 0) {
    if ((param_2 & 0xfff) == 0) {
      if ((param_3 & 0xfff) == 0) {
        local_14 = 0;
        iVar1 = fn_0012d624(&local_14);
        if (-1 < iVar1) {
          *(undefined4 *)(param_1 + 0x14) = local_14;
          *(uint *)(param_1 + 8) = param_2;
          *(uint *)(param_1 + 0xc) = param_3;
        }
      }
      else {
        iVar1 = -0x1f1fe40e;
      }
    }
    else {
      iVar1 = -0x1f1fe40f;
    }
  }
  else {
    iVar1 = 0x8a01bf9;
  }
  if (iVar1 < 0) {
    fn_0015e294();
    return;
  }
  return;
}



void fn_0017073c(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 unaff_r4;
  int *piVar6;
  undefined4 in_lr;
  
  piVar6 = (int *)(param_1 + 4);
  fn_00170704(piVar6);
  if (*(int *)(param_1 + 0x10) != 0) {
    fn_00170704(param_1 + 4);
    fn_00141838(param_1 + 0x10);
    fn_001707b4(param_1 + 4);
    uVar2 = fn_00141104();
    uVar3 = fn_001271e8(uVar2,1);
    fn_00127334(uVar2,uVar3);
    fn_00127640(param_1 + 0x10);
    fn_001707b4(piVar6);
    return;
  }
  iVar4 = *(int *)(param_1 + 0xc) + -1;
  *(int *)(param_1 + 0xc) = iVar4;
  if (iVar4 != 0) {
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  do {
    iVar5 = *piVar6;
    iVar4 = -iVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar1);
  *piVar6 = iVar4;
  if (iVar5 != -1 && 0 < iVar4) {
    fn_00147e54(DAT_008c0334,piVar6,0,1,0,0,unaff_r4,in_lr);
  }
  return;
}



void fn_00170704(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar1 != *(int *)(param_1 + 4)) {
    fn_0014ddec(param_1);
    uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(undefined4 *)(param_1 + 4) = uVar2;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  return;
}



void fn_00170688(void)

{
  int iVar1;
  
  if (DAT_008c3c38 != '\0') {
    iVar1 = fn_0014dd28(DAT_008c3c38);
    if (iVar1 < 0) {
      fn_0015e590(iVar1,0x1706ac);
    }
    fn_0015e228(&DAT_008f32b0);
    svc_0x23();
    if (DAT_008c3cfc < 0) {
      fn_0015e590(DAT_008c3cfc,0x1706cc);
    }
    iVar1 = fn_00171598();
    if (iVar1 < 0) {
      fn_0015e590(iVar1,0x1706dc);
    }
    DAT_008c3c38 = '\0';
  }
  return;
}



uint fn_00170584(short *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  short local_20;
  short local_1e [3];
  
  iVar2 = 0;
  param_2 = param_2 & 0xf0ffffff;
  iVar3 = 0;
  fn_00160314(&local_20,local_1e,(int)*param_1,(int)param_1[1],0x28,0x91);
  iVar4 = (int)local_20;
  if (iVar4 != 0) {
    iVar3 = fn_00300f74((int)local_1e[0] << 8,iVar4);
  }
  iVar5 = (int)local_1e[0];
  if (iVar5 != 0) {
    iVar2 = fn_00300f74(iVar4 << 8,iVar5);
  }
  if (iVar4 < 0) {
    iVar1 = -DAT_008c07a8;
    bVar7 = SBORROW4(iVar1,iVar3);
    iVar4 = iVar1 + -iVar3;
    bVar6 = -iVar3 == DAT_008c07a8;
    if (bVar6 || iVar1 < iVar3) {
      bVar7 = SBORROW4(iVar3,DAT_008c07a8);
      iVar4 = iVar3 - DAT_008c07a8;
      bVar6 = iVar3 == DAT_008c07a8;
    }
    if (bVar6 || iVar4 < 0 != bVar7) {
      param_2 = param_2 | 0x2000000;
    }
  }
  else if (((0 < iVar4) && (-iVar3 == DAT_008c07a8 || -DAT_008c07a8 < iVar3)) &&
          (iVar3 <= DAT_008c07a8)) {
    param_2 = param_2 | 0x1000000;
  }
  if (iVar5 < 0) {
    iVar4 = -DAT_008c07a8;
    bVar7 = SBORROW4(iVar4,iVar2);
    iVar3 = iVar4 + -iVar2;
    bVar6 = -iVar2 == DAT_008c07a8;
    if (bVar6 || iVar4 < iVar2) {
      bVar7 = SBORROW4(iVar2,DAT_008c07a8);
      iVar3 = iVar2 - DAT_008c07a8;
      bVar6 = iVar2 == DAT_008c07a8;
    }
    if (bVar6 || iVar3 < 0 != bVar7) {
      param_2 = param_2 | 0x8000000;
    }
  }
  else if (((0 < iVar5) && (-iVar2 == DAT_008c07a8 || -DAT_008c07a8 < iVar2)) &&
          (iVar2 <= DAT_008c07a8)) {
    param_2 = param_2 | 0x4000000;
  }
  return param_2;
}



uint fn_001704b0(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 0xf9610c02;
  cVar1 = *(char *)(DAT_008c3c44 + 8);
  if (cVar1 != '\x04') {
    uVar3 = 0;
  }
  if (-1 < (int)uVar3) {
    if (*(char *)(DAT_008c3c44 + 0xe) == '\0') {
      uVar3 = 0xc8a10c01;
    }
    else {
      uVar3 = 0;
    }
    if (-1 < (int)uVar3) {
      uVar2 = 0xc8a10c0d;
      if (cVar1 == '\x01') {
        uVar3 = uVar2;
      }
      else {
        uVar3 = 0;
      }
      if (-1 < (int)uVar3) {
        uVar3 = 0;
        if (DAT_008c3c40 < 1) {
          if (cVar1 == '\x02') {
            uVar2 = 0;
          }
          if ((int)uVar2 < 0) {
            return uVar2;
          }
        }
        else {
          uVar3 = fn_00189d3c();
          if ((int)uVar3 < 0) {
            if (((int)uVar3 < 0) && (uVar3 >> 0x1b != 0x19 && uVar3 != 0xf9610c02)) {
              fn_0015e590(uVar3,0x170554);
            }
          }
          else {
            DAT_008c3c40 = 0;
          }
        }
      }
    }
  }
  return uVar3;
}



void fn_00170308(ushort *param_1,ushort *param_2)

{
  ushort uVar1;
  short sVar2;
  ushort uVar3;
  uint in_fpscr;
  float fVar4;
  
  uVar1 = DAT_008c3c34;
  uVar3 = *param_2;
  *param_1 = uVar3;
  sVar2 = uVar3 - uVar1;
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  if (sVar2 < 6) {
    *param_1 = DAT_008c3c34;
  }
  else {
    DAT_008c3c34 = uVar3;
  }
  uVar1 = DAT_008c3c36;
  uVar3 = param_2[1];
  param_1[1] = uVar3;
  sVar2 = uVar3 - uVar1;
  if (sVar2 < 0) {
    sVar2 = -sVar2;
  }
  if (sVar2 < 6) {
    param_1[1] = DAT_008c3c36;
  }
  else {
    DAT_008c3c36 = uVar3;
  }
  if (DAT_008c3c32 != '\0') {
    uVar3 = *param_2;
    if ((short)*param_2 < (short)DAT_008f325c) {
      uVar3 = DAT_008f325c;
    }
    if ((short)DAT_008f325e <= (short)param_2[1]) {
      DAT_008f325e = param_2[1];
    }
    if ((short)*param_2 < (short)DAT_008f3260) {
      DAT_008f3260 = *param_2;
    }
    if ((short)param_2[1] < (short)DAT_008f3262) {
      DAT_008f3262 = param_2[1];
    }
    DAT_008f325c = uVar3;
  }
  fVar4 = (float)VectorSignedToFloat((int)(short)*param_1 - (int)(short)DAT_008f326c,
                                     (byte)(in_fpscr >> 0x16) & 3);
  uVar3 = (ushort)(int)(fVar4 * DAT_008f3264);
  *param_1 = uVar3;
  uVar1 = uVar3;
  if ((short)uVar3 < 0) {
    uVar1 = -uVar3;
  }
  fVar4 = (float)VectorSignedToFloat((int)(short)param_1[1] - (int)((unsigned int)(DAT_008f326c) >> 16) & 0xffff,
                                     (byte)(in_fpscr >> 0x16) & 3);
  uVar1 = (ushort)(2 < (uVar1 & 7)) + ((short)uVar1 >> 3);
  if ((short)uVar3 < 0) {
    uVar1 = -uVar1;
  }
  uVar3 = (ushort)(int)(fVar4 * DAT_008f3268);
  param_1[1] = uVar3;
  *param_1 = uVar1;
  uVar1 = uVar3;
  if ((short)uVar3 < 0) {
    uVar1 = -uVar3;
  }
  uVar1 = (ushort)(2 < (uVar1 & 7)) + ((short)uVar1 >> 3);
  if ((short)uVar3 < 0) {
    uVar1 = -uVar1;
  }
  param_1[1] = uVar1;
  return;
}


