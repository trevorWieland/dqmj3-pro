#include "00113e58_0011443c.h"



void fn_0011443c(undefined4 param_1,float *param_2,int param_3,short *param_4)

{
  short *psVar1;
  float *pfVar2;
  float *pfVar3;
  short *psVar4;
  uint in_fpscr;
  float fVar5;
  
  if (param_3 < 1) {
    return;
  }
  pfVar2 = param_2 + 1;
  pfVar3 = param_2 + 2;
  psVar1 = param_4 + 2;
  psVar4 = param_4 + 1;
  do {
    param_3 = param_3 + -1;
    fVar5 = (float)VectorSignedToFloat((int)*param_4,(byte)(in_fpscr >> 0x16) & 3);
    *param_2 = fVar5 * 0.001953125;
    param_2 = param_2 + 3;
    fVar5 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x16) & 3);
    *pfVar2 = fVar5 * 0.001953125;
    pfVar2 = pfVar2 + 3;
    fVar5 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x16) & 3);
    *pfVar3 = fVar5 * 0.001953125;
    pfVar3 = pfVar3 + 3;
    psVar1 = psVar1 + 3;
    param_4 = param_4 + 3;
    psVar4 = psVar4 + 3;
  } while (param_3 != 0);
  return;
}



bool fn_00114378(int *param_1,short *param_2)

{
  short sVar1;
  int local_20 [5];
  
  local_20[2] = 0xffffffff;
  local_20[3] = 0xffffffff;
  local_20[1] = 0xffffffff;
  fn_0013f380(*(undefined4 *)(*param_1 + 4),param_2,1,local_20,local_20 + 2,local_20 + 1);
  if (0 < local_20[0]) {
    sVar1 = fn_0013cc98((int)*param_2,(int)(short)param_1[2],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    *param_2 = sVar1;
    *(short *)(param_1 + 2) = sVar1;
    sVar1 = fn_0013cc98((int)param_2[1],(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    param_2[1] = sVar1;
    *(short *)((int)param_1 + 10) = sVar1;
    sVar1 = fn_0013cc98((int)param_2[2],(int)(short)param_1[3],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    param_2[2] = sVar1;
    *(short *)(param_1 + 3) = sVar1;
    fn_001244e8(param_1,param_2);
  }
  return 0 < local_20[0];
}



undefined4 fn_001142e0(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (DAT_008bfbfc == '\0') {
    uVar2 = fn_0013db70(0);
    if ((uVar2 & 0x3ff) != 0x3f9 && (int)uVar2 < 0) {
      fn_00146594();
    }
    uVar1 = fn_002febd8((char *)&DAT_0087118e);
    iVar3 = fn_0014fe94(&DAT_008c0784,(char *)&DAT_0087118e,uVar1,0);
    if (iVar3 < 0) {
      fn_00146594();
    }
    iVar3 = fn_0013ccec(&local_28,&local_24,&local_20,&local_1c,&local_18,&local_14);
    if (iVar3 < 0) {
      fn_00146594();
    }
    fn_0014dffc(&DAT_008ebdd4,local_28,0x2b0,1);
    DAT_008ebdc8 = DAT_008ebddc + 0x158;
    DAT_008ebdac = DAT_008ebddc;
    DAT_008ebdb4 = DAT_008ebddc + 0xa8;
    DAT_008ebdbc = DAT_008ebddc + 0x108;
    DAT_008ebdd0 = DAT_008ebddc + 0x238;
    DAT_008ebda8 = local_24;
    DAT_008ebdb0 = local_20;
    DAT_008ebdb8 = local_1c;
    DAT_008ebdc4 = local_18;
    DAT_008ebdcc = local_14;
    DAT_008bfbfc = '\x01';
    uVar1 = 0;
  }
  else {
    uVar1 = 0xe0a04ff9;
  }
  return uVar1;
}



undefined4 * fn_001142a8(undefined4 *param_1)

{
  undefined4 local_18;
  undefined4 uStack_14;
  
  fn_00123d00(&local_18);
  *param_1 = local_18;
  param_1[1] = uStack_14;
  return param_1;
}



void fn_00114248(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  longlong local_20;
  undefined4 local_18;
  undefined4 uStack_14;
  
  local_20 = fn_0010b58c();
  local_20 = local_20 * 1000000;
  local_18 = DAT_0089a638;
  uStack_14 = DAT_0089a63c;
  puVar1 = (undefined4 *)fn_0010b444(&local_18,&local_20);
  uVar2 = puVar1[1];
  *param_1 = *puVar1;
  param_1[1] = uVar2;
  return;
}



int fn_00114150(int param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = param_1 - 2000;
  if (param_2 < 3) {
    param_2 = param_2 + 9;
    uVar1 = param_1 - 0x7d1;
  }
  else {
    param_2 = param_2 + -3;
  }
  iVar3 = 1;
  if (-1 < (int)uVar1) goto LAB_001141bc;
  if ((int)uVar1 % 400 != 0) {
    iVar3 = 0;
    if ((int)uVar1 % 100 == 0) goto LAB_001141bc;
    if ((uVar1 & 3) != 0) {
      iVar3 = 0;
      goto LAB_001141bc;
    }
  }
  iVar3 = 1;
LAB_001141bc:
  iVar4 = ((int)uVar1 / 100) * 0x23ab1;
  iVar2 = ((int)uVar1 % 100) * 0x5b5;
  return ((int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2) +
         ((int)(iVar2 + ((uint)(iVar2 >> 0x1f) >> 0x1e)) >> 2) + (param_2 * 0x99 + 2) / 5 + param_3
         + iVar3 + 0x3a;
}



void fn_00114128(int param_1,undefined4 param_2,undefined4 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = fn_00123c6c(param_1 + 0x18,param_2,param_3,param_4);
  if (iVar1 == 0) {
    fn_00146594();
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  return;
}



void fn_00114050(void)

{
  int iVar1;
  
  if (DAT_008bfbae != '\0') {
    iVar1 = 0;
    do {
      if ((code *)(&DAT_008ebd5c)[iVar1] != (code *)0x0) {
        (*(code *)(&DAT_008ebd5c)[iVar1])();
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < 8);
    DAT_008bfbae = '\0';
  }
  return;
}



undefined4 fn_00113fa4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  if (DAT_008bfbb8 != 0) {
    fn_00146594();
  }
  iVar1 = 0;
  do {
    if ((&DAT_008ebd1c)[iVar1] != 0) {
      fn_00146594();
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  uVar2 = 0;
  if (DAT_008bfbad != '\0') {
    while (iVar1 = fn_0013c568(&DAT_008bfbbc), iVar1 == 0) {
      fn_0012d6a4(1000000,0);
    }
    uVar2 = fn_0013c808(DAT_008bfbb4);
    DAT_008bfbad = '\0';
    fn_0013c51c(&DAT_008bfbbc);
  }
  DAT_008bfbaf = 1;
  return uVar2;
}



/* WARNING: Removing unreachable block (ram,0x00113f88) */

void fn_00113f40(void)

{
  int iVar1;
  
  iVar1 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 **)(iVar1 + 0x5c) = (undefined4 *)(iVar1 + 0x60);
  *(undefined1 **)(iVar1 + 100) = &LAB_003005f8;
  *(undefined **)(iVar1 + 0x68) = &DAT_00113fa0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x70) = 0;
  *(undefined4 *)(iVar1 + 0x74) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  return;
}



int fn_00113ed4(void)

{
  int iVar1;
  undefined4 in_r3;
  undefined4 local_10;
  
  if (((DAT_0089a798 & 1) == 0) &&
     (local_10 = in_r3, iVar1 = fn_00303afc(&DAT_0089a798), iVar1 != 0)) {
    iVar1 = fn_0012574c(&local_10,0x4000048);
    if (iVar1 < 0) {
      fn_00146594();
    }
    DAT_0089a794 = (char)local_10 != '\0';
  }
  return (int)DAT_0089a794;
}



void fn_00113e88(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)coproc_movefrom_User_R_Thread_and_Process_ID();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0xf] = 0;
  return;
}



undefined4 fn_00113e58(int *param_1)

{
  bool bVar1;
  
  do {
    if (*param_1 < 1) {
      ClearExclusiveLocal();
      return 0;
    }
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = -*param_1;
  return 1;
}


