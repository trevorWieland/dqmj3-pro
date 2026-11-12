#include "00189e18_0018a33c.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_0018a33c(undefined4 param_1)

{
  fn_0019e9c0(&DAT_008f0bc0,param_1);
  return;
}



undefined4 fn_0018a260(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint *puVar4;
  
  fn_00193374();
  iVar1 = fn_00189e18();
  if (iVar1 == 0) {
    fn_00193380();
    return 0;
  }
  iVar1 = 4;
  puVar4 = *(uint **)(param_1 + (*(ushort *)(param_1 + 0x131e) & 1) * 0x60 + param_2 * 4 + 0x10b4);
  puVar2 = (undefined2 *)(param_3 + -2);
  puVar3 = (undefined2 *)((int)puVar4 + 2);
  do {
    iVar1 = iVar1 + -1;
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
  } while (iVar1 != 0);
  puVar2 = (undefined2 *)(param_3 + 0xe);
  puVar3 = (undefined2 *)((int)puVar4 + 0x12);
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
  } while (iVar1 != 0);
  puVar3 = (undefined2 *)((int)puVar4 + 0x22);
  puVar2 = (undefined2 *)(param_3 + 0x1e);
  iVar1 = 4;
  do {
    iVar1 = iVar1 + -1;
    puVar3[1] = puVar2[1];
    puVar2 = puVar2 + 2;
    puVar3 = puVar3 + 2;
    *puVar3 = *puVar2;
  } while (iVar1 != 0);
  *puVar4 = *puVar4 | 0xe000000;
  fn_00193380();
  return 1;
}



void fn_0018a240(int param_1)

{
  float in_s0;
  float fVar1;
  
  fVar1 = 0.0;
  if (0.0 <= in_s0) {
    fVar1 = in_s0;
  }
  *(float *)(param_1 + 0x1c) = fVar1;
  fn_001943c0(*(undefined4 *)(param_1 + 0x68));
  return;
}



void fn_0018a1b4(int param_1,uint param_2)

{
  uint in_fpscr;
  float fVar1;
  
  if (16000 < param_2) {
    param_2 = 16000;
  }
  fVar1 = (float)VectorUnsignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fVar1 = fVar1 * 0.008;
  fn_00194408();
  fVar1 = 2.0 - fVar1;
  fVar1 = SQRT(fVar1 * fVar1 - 1.0) - fVar1;
  *(short *)(param_1 + 8) = (short)(int)((fVar1 + 1.0) * 32768.0);
  *(short *)(param_1 + 10) = -(short)(int)(fVar1 * 32768.0);
  fn_00194358(*(undefined4 *)(param_1 + 0x68),param_1 + 8);
  return;
}



void fn_0018a194(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  
  if (param_2 == 0) {
    bVar2 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar2 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar2;
  iVar1 = *(int *)(param_1 + 0x68);
  *(byte *)(iVar1 + 0xf) = bVar2;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 4;
  return;
}



void fn_0018a090(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  *(bool *)(param_1 + param_2 + 6) = param_3[1] != 0;
  iVar1 = fn_00171504();
  uVar2 = *param_3;
  bVar3 = (uVar2 & 1) != 0;
  if (bVar3) {
    uVar2 = param_3[1];
  }
  iVar1 = iVar1 + param_2 * 0x34;
  if (bVar3) {
    *(ushort *)(iVar1 + 0x2a) = uVar2;
  }
  if ((*param_3 & 4) != 0) {
    *(ushort *)(iVar1 + 0x2e) = param_3[3];
    *(ushort *)(iVar1 + 0x44) = param_3[0xe];
    *(ushort *)(iVar1 + 0x46) = param_3[0xf];
    *(ushort *)(iVar1 + 0x48) = param_3[0x10];
    *(ushort *)(iVar1 + 0x4a) = param_3[0x11];
    *(ushort *)(iVar1 + 0x4c) = param_3[0x12];
    *(ushort *)(iVar1 + 0x4e) = param_3[0x13];
    *(ushort *)(iVar1 + 0x50) = param_3[0x14];
    *(ushort *)(iVar1 + 0x52) = param_3[0x15];
    *(ushort *)(iVar1 + 0x54) = param_3[0x16];
    *(ushort *)(iVar1 + 0x56) = param_3[0x17];
    *(ushort *)(iVar1 + 0x58) = param_3[0x18];
    *(ushort *)(iVar1 + 0x5a) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_3 + 6);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_3 + 8);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_3 + 10);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_3 + 0xc);
  }
  fn_0017d328(&DAT_008ef5bc);
  return;
}



void fn_00189ff4(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  ushort uVar2;
  bool bVar3;
  
  *(bool *)(param_1 + param_2 + 4) = param_3[1] != 0;
  iVar1 = fn_00171504();
  uVar2 = *param_3;
  bVar3 = (uVar2 & 1) != 0;
  if (bVar3) {
    uVar2 = param_3[1];
  }
  iVar1 = iVar1 + param_2 * 0x14;
  if (bVar3) {
    *(ushort *)(iVar1 + 2) = uVar2;
  }
  if ((*param_3 & 4) != 0) {
    *(ushort *)(iVar1 + 6) = param_3[3];
    *(ushort *)(iVar1 + 0xc) = param_3[6];
    *(ushort *)(iVar1 + 0xe) = param_3[7];
    *(ushort *)(iVar1 + 0x10) = param_3[8];
    *(ushort *)(iVar1 + 0x12) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    *(undefined4 *)(iVar1 + 8) = *(undefined4 *)(param_3 + 4);
  }
  fn_0017d1ac(&DAT_008ef5bc);
  return;
}



void fn_00189e70(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int extraout_r1;
  undefined8 uVar5;
  int local_38;
  int iStack_34;
  uint local_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [8];
  
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  do {
    uVar5 = 0;
    local_30 = 0;
    iStack_2c = 0;
    if ((char)param_1[2] == '\0') {
      fn_0019ebdc();
    }
    else {
      uVar5 = fn_00193d68(&local_30);
      svc_0x28();
    }
    iVar2 = param_1[10];
    cVar1 = *(char *)((int)param_1 + 0xe);
    uVar3 = 0;
    if ((int)cVar1 != 0) {
      fn_0017cec8(&DAT_008ef56c,0,&local_38,auStack_28);
      fn_0017cec8(&DAT_008ef56c,1,&iStack_34,auStack_24);
      uVar3 = 0;
      if (local_38 != 0 || iStack_34 != 0) {
        uVar3 = 1;
      }
    }
    uVar3 = (int)cVar1 & (uVar3 | iVar2 != 0);
    if (uVar3 != 0) {
      coproc_moveto_Data_Synchronization(0);
      fn_0015dfc0(param_1 + 0x10);
    }
    if (((char)param_1[0xc] == '\0') && ((code *)param_1[10] != (code *)0x0)) {
      (*(code *)param_1[10])(param_1[0xb]);
    }
    if (param_1[8] != 0) {
      fn_00170704(param_1 + 0xd);
      (*(code *)param_1[8])(param_1[9]);
      fn_001707b4(param_1 + 0xd);
    }
    if (uVar3 != 0) {
      fn_0015def0(param_1 + 0x12);
    }
    fn_00170704(param_1 + 0xd);
    fn_00193f20();
    fn_001707b4(param_1 + 0xd);
    uVar3 = (uint)*(byte *)(param_1 + 2);
    if (uVar3 != 0) {
      svc_0x28();
      uVar4 = uVar3 - (uint)uVar5;
      param_1[1] = iStack_2c +
                   (extraout_r1 - ((int)((ulonglong)uVar5 >> 0x20) + (uint)(uVar3 < (uint)uVar5))) +
                   (uint)CARRY4(local_30,uVar4);
      *param_1 = local_30 + uVar4;
    }
  } while (*(char *)((int)param_1 + 0xd) != '\0');
  return;
}



void fn_00189e58(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int extraout_r1;
  undefined8 uVar6;
  int iStack_38;
  int iStack_34;
  uint uStack_30;
  int iStack_2c;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [12];
  
  piVar2 = (int *)fn_001711b4();
  *(undefined1 *)((int)piVar2 + 0xd) = 1;
  do {
    uVar6 = 0;
    uStack_30 = 0;
    iStack_2c = 0;
    if ((char)piVar2[2] == '\0') {
      fn_0019ebdc();
    }
    else {
      uVar6 = fn_00193d68(&uStack_30);
      svc_0x28();
    }
    iVar3 = piVar2[10];
    cVar1 = *(char *)((int)piVar2 + 0xe);
    uVar4 = 0;
    if ((int)cVar1 != 0) {
      fn_0017cec8(&DAT_008ef56c,0,&iStack_38,auStack_28);
      fn_0017cec8(&DAT_008ef56c,1,&iStack_34,auStack_24);
      uVar4 = 0;
      if (iStack_38 != 0 || iStack_34 != 0) {
        uVar4 = 1;
      }
    }
    uVar4 = (int)cVar1 & (uVar4 | iVar3 != 0);
    if (uVar4 != 0) {
      coproc_moveto_Data_Synchronization(0);
      fn_0015dfc0(piVar2 + 0x10);
    }
    if (((char)piVar2[0xc] == '\0') && ((code *)piVar2[10] != (code *)0x0)) {
      (*(code *)piVar2[10])(piVar2[0xb]);
    }
    if (piVar2[8] != 0) {
      fn_00170704(piVar2 + 0xd);
      (*(code *)piVar2[8])(piVar2[9]);
      fn_001707b4(piVar2 + 0xd);
    }
    if (uVar4 != 0) {
      fn_0015def0(piVar2 + 0x12);
    }
    fn_00170704(piVar2 + 0xd);
    fn_00193f20();
    fn_001707b4(piVar2 + 0xd);
    uVar4 = (uint)*(byte *)(piVar2 + 2);
    if (uVar4 != 0) {
      svc_0x28();
      uVar5 = uVar4 - (uint)uVar6;
      piVar2[1] = iStack_2c +
                  (extraout_r1 - ((int)((ulonglong)uVar6 >> 0x20) + (uint)(uVar4 < (uint)uVar6))) +
                  (uint)CARRY4(uStack_30,uVar5);
      *piVar2 = uStack_30 + uVar5;
    }
  } while (*(char *)((int)piVar2 + 0xd) != '\0');
  return;
}



int fn_00189e18(void)

{
  return (int)DAT_008bfbad;
}


