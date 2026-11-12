#include "00554378_00555758.h"



void fn_00555758(int *param_1,int param_2)

{
  int iVar1;
  
  *param_1 = param_2;
  iVar1 = fn_00557f44(param_2);
  if (iVar1 != 0) {
    fn_00116114(*param_1);
  }
  *(int **)(*param_1 + 8) = param_1;
  return;
}



int fn_00555744(int param_1,int param_2)

{
  return *(int *)(*(int *)(param_1 + 8) + 0xc + param_2 * 4) + *(int *)(param_1 + 8);
}



void fn_00555718(undefined1 *param_1)

{
  if (*(int *)(param_1 + 4) != 0) {
    fn_0019fb94();
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    param_1[1] = 0;
  }
  return;
}



void fn_00555670(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  uVar1 = (uint)*(byte *)(param_1 + 1);
  if (*(byte *)(param_1 + 1) < param_3) {
    uVar1 = param_3;
  }
  *(char *)(param_1 + 1) = (char)uVar1;
  iVar2 = 0;
  if ((int)param_3 < 1) {
    return;
  }
  do {
    puVar5 = (undefined4 *)(param_2 + iVar2 * 0x20);
    uVar3 = puVar5[1];
    puVar4 = (undefined4 *)(*(int *)(param_1 + 4) + iVar2 * 0x20);
    *puVar4 = *puVar5;
    puVar4[1] = uVar3;
    uVar3 = puVar5[3];
    puVar4 = (undefined4 *)(iVar2 * 0x20 + 8 + *(int *)(param_1 + 4));
    *puVar4 = puVar5[2];
    puVar4[1] = uVar3;
    uVar3 = puVar5[5];
    puVar4 = (undefined4 *)(iVar2 * 0x20 + 0x10 + *(int *)(param_1 + 4));
    *puVar4 = puVar5[4];
    puVar4[1] = uVar3;
    uVar3 = puVar5[7];
    puVar4 = (undefined4 *)(iVar2 * 0x20 + 0x18 + *(int *)(param_1 + 4));
    iVar2 = iVar2 + 1;
    *puVar4 = puVar5[6];
    puVar4[1] = uVar3;
  } while (iVar2 < (int)param_3);
  return;
}



undefined4 * fn_0055563c(undefined4 *param_1)

{
  *param_1 = &DAT_00857ed8;
  if (param_1[0x1e] != 0) {
    fn_0019fb94();
    param_1[0x1e] = 0;
  }
  return param_1;
}



void fn_00554824(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_006e1e4c();
                    /* WARNING: Could not recover jumptable at 0x00554854. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x50))(param_1,uVar1);
  return;
}



void fn_00554744(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float in_s0;
  float fVar5;
  
  uVar2 = fn_00176970();
  fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(-fVar5 == in_s0) << 0x1e;
  uVar4 = uVar1 | (uint)(in_s0 <= -fVar5) << 0x1d;
  if (!(bool)((byte)(uVar4 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) {
    uVar2 = fn_00176970(param_1);
    fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x16) & 3);
    uVar1 = uVar4 & 0xfffffff | (uint)(fVar5 < in_s0) << 0x1f;
    uVar4 = uVar1 | (uint)(NAN(fVar5) || NAN(in_s0)) << 0x1c;
    if ((byte)(uVar1 >> 0x1f) == ((byte)(uVar4 >> 0x1c) & 1)) goto LAB_005547bc;
  }
  iVar3 = fn_006e1e60(param_1);
  if ((iVar3 == 0) || (param_2 != 0)) {
    fn_006e1e60(param_1);
    return;
  }
LAB_005547bc:
  *(char *)(param_1 + 0x28) = (char)param_2;
  *(float *)(param_1 + 0x24) = in_s0;
  uVar1 = uVar4 & 0xfffffff | (uint)(in_s0 == 0.0) << 0x1e;
  uVar4 = uVar1 | (uint)(in_s0 <= 0.0) << 0x1d;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff8;
  if (!(bool)((byte)(uVar4 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  else {
    uVar2 = fn_00176970(param_1);
    uVar2 = VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x10) = uVar2;
  }
  return;
}



void fn_005546b0(int param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float in_s0;
  float fVar5;
  
  uVar2 = fn_00176970();
  fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = in_fpscr & 0xfffffff | (uint)(-fVar5 == in_s0) << 0x1e;
  uVar4 = uVar1 | (uint)(in_s0 <= -fVar5) << 0x1d;
  if (!(bool)((byte)(uVar4 >> 0x1d) & 1) || SUB41(uVar1 >> 0x1e,0)) {
    uVar2 = fn_00176970(param_1);
    fVar5 = (float)VectorUnsignedToFloat(uVar2,(byte)(uVar4 >> 0x16) & 3);
    if (in_s0 <= fVar5) goto LAB_00554728;
  }
  iVar3 = fn_006e1e60(param_1);
  if ((iVar3 == 0) || (param_2 != 0)) {
    fn_006e1e60(param_1);
    return;
  }
LAB_00554728:
  *(char *)(param_1 + 0x28) = (char)param_2;
  *(float *)(param_1 + 0x24) = in_s0;
  *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) & 0xfffffff8;
  return;
}



void fn_0055453c(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  uint in_fpscr;
  uint uVar5;
  uint uVar6;
  float in_s0;
  float fVar7;
  float fVar8;
  float fVar9;
  
  fVar9 = 0.0;
  uVar3 = *(uint *)(param_1 + 0x2c) & 0xfffffff8;
  *(uint *)(param_1 + 0x2c) = uVar3;
  fVar7 = *(float *)(param_1 + 0x24);
  if (fVar7 == 0.0) {
    return;
  }
  uVar6 = in_fpscr & 0xfffffff | (uint)(fVar7 < 0.0) << 0x1f | (uint)(fVar7 == 0.0) << 0x1e;
  uVar5 = uVar6 | (uint)NAN(fVar7) << 0x1c;
  bVar2 = (byte)(uVar6 >> 0x18);
  fVar8 = *(float *)(param_1 + 0x10) + fVar7 * in_s0;
  if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar5 >> 0x1c) & 1)) {
    uVar6 = in_fpscr & 0xfffffff | (uint)(fVar8 == 0.0) << 0x1e;
    uVar5 = uVar6 | (uint)(0.0 <= fVar8) << 0x1d;
    if ((bool)((byte)(uVar5 >> 0x1d) & 1) && !SUB41(uVar6 >> 0x1e,0)) goto LAB_00554670;
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 == '\0') {
      *(undefined4 *)(param_1 + 0x24) = 0;
      goto LAB_005545d0;
    }
    if (cVar1 == '\x01') {
      uVar4 = fn_00176970(param_1);
      uVar3 = *(uint *)(param_1 + 0x2c);
      fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar5 >> 0x16) & 3);
      fVar8 = fVar7 + fVar8;
    }
    else {
      if (cVar1 != '\x02') goto LAB_00554670;
      fVar8 = -fVar8;
      *(float *)(param_1 + 0x24) = -fVar7;
    }
    uVar3 = uVar3 | 4;
  }
  else {
    uVar4 = fn_00176970(param_1);
    fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar5 >> 0x16) & 3);
    uVar3 = uVar5 & 0xfffffff | (uint)(fVar7 == fVar8) << 0x1e;
    uVar6 = uVar3 | (uint)(fVar8 <= fVar7) << 0x1d;
    if ((bool)((byte)(uVar6 >> 0x1d) & 1) && !SUB41(uVar3 >> 0x1e,0)) goto LAB_00554670;
    cVar1 = *(char *)(param_1 + 0x28);
    if (cVar1 == '\0') {
      uVar4 = fn_00176970(param_1);
      *(float *)(param_1 + 0x24) = fVar9;
      uVar3 = *(uint *)(param_1 + 0x2c);
      fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x16) & 3);
LAB_005545d0:
      uVar3 = uVar3 | 1;
      fVar8 = fVar9;
    }
    else if (cVar1 == '\x01') {
      uVar4 = fn_00176970(param_1);
      uVar3 = *(uint *)(param_1 + 0x2c) | 2;
      fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x16) & 3);
      fVar8 = fVar8 - fVar7;
    }
    else {
      if (cVar1 != '\x02') goto LAB_00554670;
      uVar4 = fn_00176970(param_1);
      fVar9 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x16) & 3);
      uVar4 = fn_00176970(param_1);
      fVar7 = (float)VectorUnsignedToFloat(uVar4,(byte)(uVar6 >> 0x16) & 3);
      *(float *)(param_1 + 0x24) = -*(float *)(param_1 + 0x24);
      uVar3 = *(uint *)(param_1 + 0x2c) | 2;
      fVar8 = fVar9 - (fVar8 - fVar7);
    }
  }
  *(uint *)(param_1 + 0x2c) = uVar3;
LAB_00554670:
  *(float *)(param_1 + 0x10) = fVar8;
  return;
}



void fn_00554448(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[0x3d];
  *param_1 = &PTR_FUN_00857d6c;
  if ((puVar1 != (undefined4 *)0x0) && ((*(byte *)(puVar1 + 0x1f) & 1) == 0)) {
    (**(code **)*puVar1)(puVar1);
    fn_0019fb94(puVar1);
    param_1[0x3d] = 0;
  }
  if (param_1[0x3e] != 0) {
    if (*(int *)(param_1[0x3e] + 0xc) != 0) {
      fn_0019fb94();
    }
    fn_0019fb94(param_1[0x3e]);
    param_1[0x3e] = 0;
  }
  if (param_1[0x29] != 0) {
    fn_0019fb94();
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x33) = 0;
    *(undefined2 *)((int)param_1 + 0xce) = 0;
  }
  if (param_1[0x3f] != 0) {
    if (*(int *)(param_1[0x3f] + 8) != 0) {
      fn_0019fb94();
      *(undefined4 *)(param_1[0x3f] + 8) = 0;
      if (param_1[0x3f] == 0) goto LAB_00554510;
    }
    fn_0019fb94(param_1[0x3f]);
    param_1[0x3f] = 0;
  }
LAB_00554510:
  fn_0054d158(param_1);
  return;
}



int fn_00554378(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)fn_0018a6d4();
  *puVar1 = &PTR_FUN_00857d6c;
  iVar2 = fn_00101a1c(puVar1 + 0x2b,fn_0017d8f8,4,2);
  *(undefined4 *)(iVar2 + 0xc) = 0;
  *(undefined4 *)(iVar2 + 0x10) = 0;
  *(undefined4 *)(iVar2 + 0x3c) = 0xffffffff;
  *(undefined4 *)(iVar2 + 0x40) = 0xffffffff;
  fn_00553bf8(iVar2 + -0xac);
  iVar3 = fn_00194ee4(0x84,4);
  if (iVar3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = fn_00555604();
  }
  *(int *)(iVar2 + 0x48) = iVar3;
  if (iVar3 != 0) {
    fn_005548fc(iVar3,0,0,0,0,0,0,0,0,0);
  }
  return iVar2 + -0xac;
}



int fn_00555604(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00857ed8;
  iVar1 = fn_00101a1c(param_1 + 0x1b,fn_0017d8f8,4,2);
  fn_005549f0(iVar1 + -0x6c);
  return iVar1 + -0x6c;
}


