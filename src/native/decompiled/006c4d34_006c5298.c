#include "006c4d34_006c5298.h"



undefined4 fn_006c5298(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = fn_006c52ec();
  uVar3 = 0;
  uVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 8) >> 2;
  if (uVar1 != 0) {
    do {
      if (**(ushort **)(*(int *)(param_1 + 8) + uVar3 * 4) == uVar2) {
        return *(undefined4 *)(*(int *)(param_1 + 8) + uVar3 * 4);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < uVar1);
  }
  return 0;
}



int fn_006c5138(int param_1)

{
  return (*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x18;
}



uint fn_006c5124(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x18);
  uVar2 = uVar1;
  if (-1 < (int)uVar1) {
    uVar2 = 1;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = 0;
  }
  return uVar2;
}



int fn_006c5114(int param_1,int param_2)

{
  return *(int *)(param_1 + 0xc) + param_2 * 0x18;
}



undefined4 fn_006c5058(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(undefined4 **)(param_1 + 4) != (undefined4 *)0x0) {
    uVar1 = **(undefined4 **)(param_1 + 4);
  }
  return uVar1;
}



int fn_006c5048(int param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar1 = (int)*(char *)(*(int *)(param_1 + 4) + 8);
  }
  return iVar1;
}



undefined4 fn_006c5038(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 4);
  }
  return uVar1;
}



undefined4 fn_006c5004(int *param_1,int param_2)

{
  float *pfVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  
  iVar3 = fn_006b0074();
  if (iVar3 != 0) {
    return 0;
  }
  fVar4 = 0.0;
  if (param_2 == 0) {
    fn_006f7a84(DAT_008977e0);
    fVar5 = fVar4;
    iVar3 = fn_006f7a84(DAT_008977e0);
    pfVar1 = *(float **)(iVar3 + 0x100);
    fVar4 = *pfVar1;
    fVar6 = pfVar1[1];
    fVar7 = pfVar1[2];
  }
  else {
    fn_006f751c();
    iVar3 = fn_00341920();
    fVar6 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x80),(byte)(in_fpscr >> 0x16) & 3);
    fVar7 = fVar4;
    fVar5 = fVar4;
  }
  iVar3 = fn_006f7a84(DAT_008977e0);
  fStack_34 = *(float *)(iVar3 + 0x20) + fVar4;
  fStack_30 = *(float *)(iVar3 + 0x24) + fVar6;
  fStack_2c = *(float *)(iVar3 + 0x28) + fVar7;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = fVar5;
    DAT_008f9e30 = fVar5;
    DAT_008f9e34 = fVar5;
  }
  fStack_40 = DAT_008f9e2c;
  fStack_3c = DAT_008f9e30;
  fStack_38 = DAT_008f9e34;
  iVar3 = fn_006a99b0(param_1);
  if (iVar3 != 0) {
    fStack_3c = (float)param_1[0x43] * 0.5;
  }
  iVar3 = fn_002aad7c(param_1);
  if (iVar3 == 4) {
    fn_002cd59c();
    (**(code **)(*param_1 + 0x1cc))(param_1);
  }
  uVar2 = fn_006b0514(param_1,&fStack_34,&fStack_40);
  return uVar2;
}



bool fn_006c4f9c(void)

{
  int iVar1;
  
  iVar1 = fn_006ba4ec();
  return iVar1 < 2;
}



int fn_006c4f58(int param_1)

{
  int iVar1;
  
  iVar1 = fn_006b5dc8(*(undefined4 *)(param_1 + 0x30));
  if (iVar1 == 0) {
    iVar1 = 2;
  }
  else {
    iVar1 = (*(int *)(*(int *)(param_1 + 0x30) + 0x14) - *(int *)(*(int *)(param_1 + 0x30) + 0x10))
            / 0x104 + 2;
  }
  return iVar1;
}



void fn_006c4f18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x4c,&DAT_00812c8c,param_3,param_4,param_4);
  if (iVar1 != 0) {
    fn_0031e264(iVar1,param_3,param_5,0,param_4);
  }
  return;
}



char fn_006c4eb4(int param_1,int param_2)

{
  char cVar1;
  
  cVar1 = *(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + 0x18) != 0;
  if (*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + 0x1a) != 0) {
    cVar1 = cVar1 + '\x01';
  }
  return cVar1;
}



int fn_006c4e9c(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + param_3 * 2 + 0x18);
}



int fn_006c4df4(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  
  uVar7 = 5;
  if (param_3 == 0) {
    uVar7 = 4;
  }
  cVar3 = '\0';
  psVar2 = (short *)(param_2 * 0x40 + 0xc + *(int *)(param_1 + 0x10));
  if (((uVar7 & 1) == 0) && (psVar2 = psVar2 + 1, *psVar2 != 0)) {
    cVar3 = '\x01';
  }
  sVar1 = psVar2[1];
  cVar5 = '\0';
  cVar6 = '\0';
  for (iVar4 = (int)(uVar7 - 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (sVar1 != 0) {
      cVar3 = cVar3 + '\x01';
    }
    sVar1 = psVar2[3];
    if (psVar2[2] != 0) {
      cVar6 = cVar5 + '\x01';
      cVar5 = cVar6;
    }
    psVar2 = psVar2 + 2;
  }
  iVar4 = (int)(char)(cVar3 + cVar6);
  if ((-1 < (int)(uVar7 - 1)) &&
     (*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + (uVar7 - 1) * 2 + 0xe) != 0)) {
    iVar4 = (int)(char)(cVar3 + cVar6 + '\x01');
  }
  return iVar4;
}



int fn_006c4ddc(int param_1,int param_2,int param_3)

{
  return (int)*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + param_3 * 2 + 0xe);
}



int fn_006c4d34(int param_1,int param_2,int param_3)

{
  short sVar1;
  short *psVar2;
  char cVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  uint uVar7;
  
  uVar7 = 5;
  if (param_3 == 0) {
    uVar7 = 4;
  }
  cVar3 = '\0';
  psVar2 = (short *)(param_2 * 0x40 + 2 + *(int *)(param_1 + 0x10));
  if (((uVar7 & 1) == 0) && (psVar2 = psVar2 + 1, *psVar2 != 0)) {
    cVar3 = '\x01';
  }
  sVar1 = psVar2[1];
  cVar5 = '\0';
  cVar6 = '\0';
  for (iVar4 = (int)(uVar7 - 1) >> 1; iVar4 != 0; iVar4 = iVar4 + -1) {
    if (sVar1 != 0) {
      cVar3 = cVar3 + '\x01';
    }
    sVar1 = psVar2[3];
    if (psVar2[2] != 0) {
      cVar6 = cVar5 + '\x01';
      cVar5 = cVar6;
    }
    psVar2 = psVar2 + 2;
  }
  iVar4 = (int)(char)(cVar3 + cVar6);
  if ((-1 < (int)(uVar7 - 1)) &&
     (*(short *)(*(int *)(param_1 + 0x10) + param_2 * 0x40 + (uVar7 - 1) * 2 + 4) != 0)) {
    iVar4 = (int)(char)(cVar3 + cVar6 + '\x01');
  }
  return iVar4;
}


