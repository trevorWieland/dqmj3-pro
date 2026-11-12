#include "0068f194_0068f85c.h"



undefined2 fn_0068f85c(int param_1,int param_2)

{
  return *(undefined2 *)(DAT_008928cc + param_1 * 0x50 + param_2 * 8 + -8);
}



void fn_0068f844(void)

{
  DAT_008928cc = 0;
  DAT_008928d0 = 0;
  return;
}



undefined4 fn_0068f818(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 1) || ((short)DAT_008928d0 <= param_1)) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_0068f7f8(int param_1,int param_2)

{
  return (int)*(short *)(DAT_008928cc + param_1 * 0x50 + param_2 * 8 + -4);
}



int fn_0068f7e4(void)

{
  return (int)(short)DAT_008928d0;
}



int fn_0068f7c4(int param_1,int param_2)

{
  return (int)*(short *)(DAT_008928cc + param_1 * 0x50 + param_2 * 8 + -6);
}



bool fn_0068f7a0(int param_1)

{
  return *(short *)(DAT_008928cc + param_1 * 0x50) != 0;
}



uint fn_0068f708(int param_1,uint param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  
  uVar2 = 1;
  iVar3 = DAT_008928cc + param_1 * 0x50;
  uVar4 = 0;
  do {
    uVar1 = *(ushort *)(iVar3 + uVar2 * 8 + -8);
    if (uVar1 <= uVar4) {
      uVar2 = uVar2 - 1 & 0xff;
      goto joined_r0x0068f760;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar4 = uVar1;
  } while (uVar2 < 0xb);
  uVar2 = 10;
joined_r0x0068f760:
  while( true ) {
    if (uVar2 == 0) {
      return 0;
    }
    if (*(ushort *)(iVar3 + uVar2 * 8 + -8) <= param_2) break;
    uVar2 = uVar2 - 1 & 0xff;
  }
  return uVar2;
}



undefined2 fn_0068f6a8(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  
  uVar2 = 1;
  iVar4 = DAT_008928cc + param_1 * 0x50;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(iVar4 + uVar2 * 8 + -8);
    if (uVar1 <= uVar3) {
      uVar2 = uVar2 - 1 & 0xff;
      goto LAB_0068f6f8;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar3 = uVar1;
  } while (uVar2 < 0xb);
  uVar2 = 10;
LAB_0068f6f8:
  return *(undefined2 *)(iVar4 + uVar2 * 8 + -8);
}



uint fn_0068f654(int param_1)

{
  ushort uVar1;
  uint uVar2;
  ushort uVar3;
  
  uVar2 = 1;
  uVar3 = 0;
  do {
    uVar1 = *(ushort *)(DAT_008928cc + param_1 * 0x50 + uVar2 * 8 + -8);
    if (uVar1 <= uVar3) {
      return uVar2 - 1 & 0xff;
    }
    uVar2 = uVar2 + 1 & 0xff;
    uVar3 = uVar1;
  } while (uVar2 < 0xb);
  return 10;
}



void fn_0068f4ac(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_fpscr;
  
  fn_006f7df8(param_1,param_3);
  VectorSignedToFloat(param_3 + 1,(byte)(in_fpscr >> 0x16) & 3);
  return;
}



int * fn_0068f3f4(int *param_1,float *param_2,float *param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  
  pfVar1 = (float *)fn_00145b00(0x14,&DAT_00812c8c);
  if (pfVar1 != (float *)0x0) {
    fVar3 = param_2[2];
    fVar2 = param_3[2];
    *pfVar1 = (*param_2 - *param_3) * 0.033333335;
    pfVar1[1] = 0.0;
    pfVar1[2] = (fVar3 - fVar2) * 0.033333335;
    fVar2 = 30.0;
    fn_001a4a80();
    pfVar1[3] = param_2[1] / (fVar2 * 0.5) + 0.4;
    pfVar1[4] = 0.0;
  }
  *param_1 = (int)pfVar1;
  return param_1;
}



float fn_0068f384(int *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  
  pfVar3 = (float *)*param_1;
  fVar1 = pfVar3[4];
  fVar2 = fVar1;
  if (0x1d < (int)fVar1) {
    fVar2 = 1.4013e-45;
  }
  pfVar3[4] = (float)((int)fVar1 + 1);
  if ((int)fVar1 < 0x1e) {
    fVar2 = 0.0;
    *param_2 = *param_2 + *pfVar3;
    param_2[1] = param_2[1] + pfVar3[1];
    param_2[2] = param_2[2] + pfVar3[2];
    pfVar3[1] = pfVar3[1] + (pfVar3[3] - 0.4);
  }
  return fVar2;
}



undefined4 * fn_0068f36c(undefined4 *param_1)

{
  fn_002feef8(*param_1);
  return param_1;
}



int * fn_0068f328(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00145b00(0x28,&DAT_00812c8c);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = param_2;
    *(undefined1 *)(puVar1 + 1) = 0;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 0;
  }
  *param_1 = (int)puVar1;
  return param_1;
}



void fn_0068f314(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = *param_1;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(iVar1 + 0x1c) = *param_2;
  *(undefined4 *)(iVar1 + 0x20) = uVar2;
  *(undefined4 *)(iVar1 + 0x24) = uVar3;
  return;
}



void fn_0068f2fc(int *param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *(undefined1 *)(iVar1 + 4) = param_2;
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined1 *)(iVar1 + 0xc) = 0;
  return;
}



undefined4 fn_0068f194(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int in_s1;
  int in_s2;
  
  piVar7 = (int *)*param_1;
  cVar1 = (char)piVar7[1];
  if (cVar1 == '\0') {
    cVar1 = (char)piVar7[3];
    if (cVar1 == '\0') {
      iVar2 = fn_0068eb0c(DAT_008977e8);
      iVar5 = *(int *)(iVar2 + 0xc);
      iVar6 = *(int *)(iVar2 + 0x10);
      piVar7[4] = *(int *)(iVar2 + 8);
      piVar7[5] = iVar5;
      piVar7[6] = iVar6;
      iVar2 = fn_0068eb0c(DAT_008977e8);
      fVar4 = *(float *)(iVar2 + 0x24);
      iVar5 = *(int *)(iVar2 + 0x28);
      piVar7[7] = *(int *)(iVar2 + 0x20);
      piVar7[8] = (int)fVar4;
      piVar7[9] = iVar5;
      piVar7[8] = (int)(fVar4 + 1000.0);
LAB_0068f2a0:
      *(undefined1 *)(piVar7 + 3) = 1;
      return 0;
    }
  }
  else {
    if (cVar1 == '\x01') {
      if ((char)piVar7[3] == '\0') {
        iVar2 = *piVar7;
        iVar5 = *(int *)(iVar2 + 0xc);
        iVar6 = *(int *)(iVar2 + 0x10);
        piVar7[4] = *(int *)(iVar2 + 8);
        piVar7[5] = iVar5;
        piVar7[6] = iVar6;
        fn_0014481c(DAT_008977e8);
        iVar2 = fn_00263814();
        iVar5 = *(int *)(iVar2 + 0x24);
        uVar3 = fn_0068eb0c(DAT_008977e8);
        fn_006a83d8(uVar3,iVar2);
        piVar7[7] = iVar5;
        piVar7[8] = in_s1;
        piVar7[9] = in_s2;
        goto LAB_0068f2a0;
      }
      if ((char)piVar7[3] != '\x01') {
        return 0;
      }
      goto LAB_0068f2e4;
    }
    if (cVar1 != '\x02') {
      return 0;
    }
    cVar1 = (char)piVar7[3];
    if (cVar1 == '\0') {
      iVar2 = *piVar7;
      iVar5 = *(int *)(iVar2 + 0xc);
      iVar6 = *(int *)(iVar2 + 0x10);
      piVar7[4] = *(int *)(iVar2 + 8);
      piVar7[5] = iVar5;
      piVar7[6] = iVar6;
      *(undefined1 *)(piVar7 + 3) = 1;
      return 0;
    }
  }
  if (cVar1 != '\x01') {
    return 0;
  }
LAB_0068f2e4:
  uVar3 = fn_0068f0e0(piVar7);
  return uVar3;
}


