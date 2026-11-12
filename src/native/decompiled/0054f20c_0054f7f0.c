#include "0054f20c_0054f7f0.h"



undefined4
fn_0054f7f0(int param_1,undefined4 param_2,int param_3,undefined4 param_4,float *param_5,
            float *param_6)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  if (((*(char *)(param_3 + 0xcd) != '\0') &&
      (iVar5 = *(int *)(*(int *)(param_3 + 0xd0) + 4), iVar5 != 0)) &&
     ((*(ushort *)(iVar5 + 0x76) & 3) != 0)) {
    uVar3 = fn_0054df04(param_1,param_2,iVar5);
    uVar3 = fn_005506e0(param_1,uVar3,iVar5);
    uVar3 = fn_005507c4(param_1,uVar3,param_4,param_3,iVar5);
    bVar1 = *(byte *)(param_3 + 0xce);
    uVar4 = 0x813;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x40000813;
    }
    fn_0054e2f0(param_1,uVar4);
    fVar6 = *(float *)(param_3 + 0x3c);
    fVar8 = param_6[1];
    fVar7 = *param_5;
    fVar9 = param_5[1];
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    fVar10 = param_6[2];
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar6 - fVar8;
    *(float *)(iVar5 + 0x3fc) = fVar10;
    *(float *)(iVar5 + 0x400) = fVar7;
    *(float *)(iVar5 + 0x404) = fVar9;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
    uVar3 = fn_00550464(param_1,uVar3,1,0,1,0);
    uVar4 = 0x20923;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x40020923;
    }
    fn_0054e2f0(param_1,uVar4);
    fVar8 = *param_5;
    fVar10 = *(float *)(param_3 + 0x3c);
    fVar6 = param_6[1];
    fVar11 = param_6[3];
    fVar7 = param_5[1];
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    fVar9 = *(float *)(param_3 + 0x40);
    fVar12 = param_6[1];
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar12;
    *(float *)(iVar5 + 0x3fc) = fVar9 - fVar11;
    *(float *)(iVar5 + 0x400) = (fVar8 + fVar10) - fVar6;
    *(float *)(iVar5 + 0x404) = fVar7;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
    uVar3 = fn_00550464(param_1,uVar3,1,0,1,0);
    uVar4 = 0x60b17;
    if ((bVar1 & 1) == 0) {
      uVar4 = 0x40060b17;
    }
    fn_0054e2f0(param_1,uVar4);
    fVar11 = param_5[1];
    fVar13 = *(float *)(param_3 + 0x40);
    fVar7 = *param_5;
    fVar9 = *param_6;
    fVar8 = param_6[3];
    fVar10 = *(float *)(param_3 + 0x3c);
    fVar6 = param_6[3];
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    fVar12 = *param_6;
    uVar4 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    *(undefined4 *)(param_1 + 0x600) = uVar4;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar10 - fVar12;
    *(float *)(iVar5 + 0x3fc) = fVar6;
    *(float *)(iVar5 + 0x400) = fVar7 + fVar9;
    *(float *)(iVar5 + 0x404) = (fVar11 - fVar13) + fVar8;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
    param_2 = fn_00550464(param_1,uVar3,1,0,1,0);
    uVar3 = 0x40a2b;
    if ((bVar1 & 1) == 0) {
      uVar3 = 0x40040a2b;
    }
    fn_0054e2f0(param_1,uVar3);
    fVar6 = param_5[1];
    fVar8 = param_6[2];
    fVar9 = *(float *)(param_3 + 0x40);
    fVar10 = param_6[2];
    fVar7 = *param_5;
    iVar5 = param_1 + (uint)*(byte *)(param_1 + 0x33) * 0x10;
    uVar3 = VectorUnsignedToFloat(*(byte *)(param_1 + 0x33) + 0x20,(byte)(in_fpscr >> 0x16) & 3);
    fVar11 = *param_6;
    *(undefined4 *)(param_1 + 0x600) = uVar3;
    cVar2 = *(char *)(param_1 + 0x33);
    *(float *)(iVar5 + 0x3f8) = fVar11;
    *(float *)(iVar5 + 0x3fc) = fVar9 - fVar10;
    *(float *)(iVar5 + 0x400) = fVar7;
    *(float *)(iVar5 + 0x404) = fVar6 - fVar8;
    *(char *)(param_1 + 0x33) = cVar2 + '\x01';
    fn_00560974(param_1);
  }
  return param_2;
}



uint * fn_0054f4bc(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  bool bVar4;
  uint *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  char cVar9;
  uint *puVar10;
  int iVar11;
  int iVar12;
  
  iVar12 = param_3;
  puVar5 = (uint *)fn_0054de6c(param_1);
  cVar9 = '\0';
  bVar4 = false;
  iVar11 = 0;
  bVar3 = false;
  if ((*(ushort *)(param_3 + 0x76) & 0x1c0) != 0) {
    uVar2 = *(ushort *)(param_3 + 0x74);
    pcVar6 = (char *)((uVar2 >> 8 & 0xc) +
                      (uVar2 & 3) * 0x20 + ((uVar2 & 0xf) >> 2) * 0x14 + (uVar2 >> 1 & 0x18) +
                      (uVar2 >> 6 & 8) + *(int *)(param_3 + 0x78));
    cVar9 = *pcVar6;
    if (cVar9 != '\x01' && cVar9 != '\x02') {
      if (cVar9 == '\x03') {
        cVar9 = '\x04';
      }
      else if (cVar9 == '\x05') {
        cVar9 = '\x03';
      }
      else {
        cVar9 = '\0';
      }
    }
    if (pcVar6[1] == '\x01') {
      bVar4 = true;
    }
    else {
      bVar4 = false;
    }
  }
  if (1 < (*(ushort *)(param_3 + 0x76) & 0x1ff) >> 6) {
    uVar2 = *(ushort *)(param_3 + 0x74);
    iVar7 = (uVar2 >> 8 & 0xc) +
            (uVar2 >> 6 & 8) +
            (uVar2 & 3) * 0x20 + ((uVar2 & 0xf) >> 2) * 0x14 + (uVar2 >> 1 & 0x18) +
            *(int *)(param_3 + 0x78);
    cVar1 = *(char *)(iVar7 + 4);
    if (cVar1 == '\x01') {
      iVar11 = 1;
    }
    else if (cVar1 == '\x02') {
      iVar11 = 2;
    }
    else if (cVar1 == '\x03') {
      iVar11 = 4;
    }
    else if (cVar1 == '\x05') {
      iVar11 = 3;
    }
    else {
      iVar11 = 0;
    }
    if (*(char *)(iVar7 + 5) == '\x01') {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
  }
  if (cVar9 == '\x01') {
    fn_0017821c(puVar5,&DAT_007d8634,0x18,1,param_1,param_2,iVar12);
    fn_0017821c(puVar5 + 6,&DAT_007d8664,0x18);
  }
  else if (cVar9 == '\x02') {
    fn_0017821c(puVar5,&DAT_007d8634,0x18,2,param_1,param_2,iVar12);
    fn_0017821c(puVar5 + 6,&DAT_007d867c,0x18);
  }
  else {
    fn_0017821c(puVar5,&DAT_007d8634,0x18,cVar9,param_1,param_2,iVar12);
    fn_0017821c(puVar5 + 6,&DAT_007d864c,0x18);
  }
  puVar10 = puVar5 + 0xc;
  uVar8 = (*(uint *)(*(int *)(param_3 + 0x78) + 8) & 0xffff) >> 8;
  if (uVar8 == 1 || uVar8 == 0xd) {
    *puVar5 = *puVar5 & 0xfffffff0 | 0xe;
  }
  uVar8 = (*(uint *)(*(int *)(param_3 + 0x78) + 0x28) & 0xffff) >> 8;
  if (uVar8 == 1 || uVar8 == 0xd) {
    puVar5[6] = puVar5[6] & 0xfffffff0 | 0xe;
  }
  uVar8 = puVar5[9];
  if (bVar4) {
    uVar8 = uVar8 | 0x10000;
  }
  else {
    uVar8 = uVar8 | 0x20000;
  }
  puVar5[9] = uVar8;
  if (iVar11 == 1) {
    fn_0017821c(puVar10,&DAT_007d86c4,0x18);
  }
  else if (iVar11 == 2) {
    fn_0017821c(puVar10,&DAT_007d86dc,0x18);
  }
  else {
    fn_0017821c(puVar10,&DAT_007d86ac,0x18);
  }
  uVar8 = (*(uint *)(*(int *)(param_3 + 0x78) + 0x48) & 0xffff) >> 8;
  if (uVar8 == 1 || uVar8 == 0xd) {
    *puVar10 = *puVar10 & 0xfffffff0 | 0xe;
  }
  uVar8 = puVar5[0xf];
  if (bVar3) {
    uVar8 = uVar8 | 0x10000;
  }
  else {
    uVar8 = uVar8 | 0x20000;
  }
  puVar5[0xf] = uVar8;
  puVar5[0x12] = 0x4400;
  puVar5[0x13] = 0x200e0;
  *(undefined1 *)(param_1 + 0x61e) = 4;
  return puVar5 + 0x14;
}



uint * fn_0054f20c(int param_1,undefined4 param_2,int param_3)

{
  ushort uVar1;
  bool bVar2;
  uint *puVar3;
  char *pcVar4;
  uint uVar5;
  char cVar6;
  uint *puVar7;
  
  puVar3 = (uint *)fn_0054de6c();
  cVar6 = '\0';
  bVar2 = false;
  if ((*(ushort *)(param_3 + 0x76) & 0x1c0) != 0) {
    uVar1 = *(ushort *)(param_3 + 0x74);
    pcVar4 = (char *)((uVar1 >> 8 & 0xc) +
                      (uVar1 >> 1 & 0x18) + (uVar1 & 3) * 0x20 + ((uVar1 & 0xf) >> 2) * 0x14 +
                      (uVar1 >> 6 & 8) + *(int *)(param_3 + 0x78));
    cVar6 = *pcVar4;
    if (cVar6 != '\x01' && cVar6 != '\x02') {
      if (cVar6 == '\x03') {
        cVar6 = '\x04';
      }
      else if (cVar6 == '\x05') {
        cVar6 = '\x03';
      }
      else {
        cVar6 = '\0';
      }
    }
    if (pcVar4[1] == '\x01') {
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  if (cVar6 == '\x01') {
    fn_0017821c(puVar3,&DAT_007d8634,0x18);
    fn_0017821c(puVar3 + 6,&DAT_007d8664,0x18);
    puVar7 = puVar3 + 0xe;
    puVar3[0xc] = 0x2200;
    puVar3[0xd] = 0x200e0;
  }
  else if (cVar6 == '\x02') {
    fn_0017821c(puVar3,&DAT_007d8634,0x18);
    fn_0017821c(puVar3 + 6,&DAT_007d867c,0x18);
    puVar7 = puVar3 + 0xe;
    puVar3[0xc] = 0x2200;
    puVar3[0xd] = 0x200e0;
  }
  else if (cVar6 == '\x03') {
    fn_0017821c(puVar3,&DAT_007d8634,0x18);
    fn_0017821c(puVar3 + 6,&DAT_007d8694,0x18);
    fn_0017821c(puVar3 + 0xc,&DAT_007d86f4,0x18);
    puVar7 = puVar3 + 0x14;
    puVar3[0x12] = 0x2500;
    puVar3[0x13] = 0x200e0;
  }
  else if (cVar6 == '\x04') {
    fn_0017821c(puVar3,&DAT_007d8634,0x18);
    fn_0017821c(puVar3 + 6,&DAT_007d8694,0x18);
    fn_0017821c(puVar3 + 0xc,&DAT_007d870c,0x18);
    puVar3[0x12] = 0x2500;
    puVar3[0x13] = 0x200e0;
    puVar7 = puVar3 + 0x14;
  }
  else {
    fn_0017821c(puVar3,&DAT_007d8634,0x18);
    fn_0017821c(puVar3 + 6,&DAT_007d864c,0x18);
    puVar7 = puVar3 + 0xe;
    puVar3[0xc] = 0x2200;
    puVar3[0xd] = 0x200e0;
  }
  uVar5 = (*(uint *)(*(int *)(param_3 + 0x78) + 8) & 0xffff) >> 8;
  if (uVar5 == 1 || uVar5 == 0xd) {
    *puVar3 = *puVar3 & 0xfffffff0 | 0xe;
  }
  uVar5 = (*(uint *)(*(int *)(param_3 + 0x78) + 0x28) & 0xffff) >> 8;
  if (uVar5 == 1 || uVar5 == 0xd) {
    puVar3[6] = puVar3[6] & 0xfffffff0 | 0xe;
  }
  uVar5 = puVar3[9];
  if (bVar2) {
    uVar5 = uVar5 | 0x10000;
  }
  else {
    uVar5 = uVar5 | 0x20000;
  }
  puVar3[9] = uVar5;
  *(undefined1 *)(param_1 + 0x61e) = 3;
  return puVar7;
}


