#include "00327ab4_003288d8.h"



void fn_003288d8(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898214,(char *)&DAT_0032895c,0);
  *(undefined4 *)(*param_1 + 0x58) = 0;
  fn_0036c5f4(*param_1,uVar1,1,0,1,1,0,0,1);
  *(undefined1 *)(*param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)(*param_1 + 0x51) = 1;
  return;
}



void fn_00328874(int *param_1,undefined4 param_2)

{
  *(undefined4 *)(*param_1 + 0x58) = 0;
  fn_0036c5f4(*param_1,param_2,1,0,1,1,0,0,1);
  *(undefined1 *)(*param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[2] = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)(*param_1 + 0x51) = 1;
  return;
}



void fn_00328800(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  fn_0036c5f4(*param_1,param_2,1,param_3,param_4,1,0,0,1);
  if (param_5 == 0) {
    *(undefined1 *)(*param_1 + 0x30) = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    param_1[2] = param_6;
    *(undefined1 *)((int)param_1 + 0xd) = 1;
  }
  else {
    *(undefined1 *)(*param_1 + 0x30) = 1;
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  return;
}



void fn_00328118(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_00823c4c;
  uVar1 = param_1[8];
  uVar2 = uVar1;
  if ((uint)param_1[9] < uVar1) {
    do {
      uVar2 = uVar2 + 4;
    } while (uVar2 != param_1[9]);
  }
  fn_001008c4(uVar1,(int)(param_1[10] - uVar1) >> 2,0);
  fn_006896f4(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_00327fb4(undefined4 param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  puVar3 = (undefined4 *)fn_0068af70();
  *puVar3 = &DAT_00823c4c;
  *(undefined1 *)(puVar3 + 4) = 0;
  uVar5 = *(undefined4 *)(param_2 + 8);
  puVar3[6] = 0xffffffff;
  puVar3[5] = uVar5;
  puVar3[7] = 0xffffffff;
  puVar3[8] = 0;
  puVar3[9] = 0;
  puVar3[10] = 0;
  puVar4 = (undefined4 *)fn_00100fc6(0x80,0);
  iVar6 = 2;
  puVar3[8] = puVar4;
  do {
    if (puVar4 != (undefined4 *)0x0) {
      *puVar4 = 0xffffffff;
    }
    iVar6 = iVar6 + -1;
    puVar4 = puVar4 + 1;
  } while (iVar6 != 0);
  iVar6 = puVar3[8];
  uVar5 = 0;
  puVar3[9] = iVar6 + 8;
  puVar3[10] = iVar6 + 0x80;
  puVar3[0xb] = 0;
  puVar3[0xc] = 0;
  *(undefined1 *)(puVar3 + 0xd) = 1;
  *(undefined1 *)((int)puVar3 + 0x35) = 1;
  puVar3[0xe] = 0;
  puVar3[0xf] = 0;
  puVar3[0x10] = 0;
  puVar3[0x11] = 0;
  puVar3[0x12] = 0;
  puVar3[0x13] = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar6 = fn_00303afc(&DAT_008c62fc), iVar6 != 0)) {
    DAT_008f9e2c = uVar5;
    DAT_008f9e30 = uVar5;
    DAT_008f9e34 = uVar5;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  puVar3[0x14] = DAT_008f9e2c;
  puVar3[0x15] = uVar1;
  puVar3[0x16] = uVar2;
  puVar3[0x17] = 0x43200000;
  puVar3[0x18] = uVar5;
  puVar3[0x19] = uVar5;
  puVar3[0x1a] = 0;
  puVar3[0x1b] = 0;
  puVar3[0x1c] = 0;
  puVar3[0x1d] = 0;
  puVar3[0x1e] = 0;
  *(undefined1 *)(puVar3 + 0x1f) = param_3;
  return puVar3;
}



void fn_00327f98(int param_1,undefined4 *param_2)

{
  undefined4 local_8 [2];
  
  local_8[0] = *param_2;
  fn_00688d44(*(undefined4 *)(param_1 + 0x44),local_8);
  return;
}



void fn_00327f54(int param_1)

{
  int *piVar1;
  int iVar2;
  
  fn_0068af5c();
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar2 * 4) != -1) {
      piVar1 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar1 + 0x60))();
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  return;
}



void fn_00327da0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  bool bVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  iVar3 = *(int *)(param_1 + 0x30);
  bVar6 = iVar1 != iVar3;
  if (bVar6) {
    iVar3 = *(int *)(param_1 + 0x40);
  }
  if (bVar6 && iVar3 != 0) {
    iVar1 = *(int *)(iVar3 + 0xc);
  }
  if ((bVar6 && iVar3 != 0) && iVar1 != 0) {
    fn_00151954();
    fn_0018a69c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  }
  if (*(byte *)(param_1 + 0x34) != *(byte *)(param_1 + 0x35)) {
    *(byte *)(*(int *)(param_1 + 0x40) + 0x44) =
         *(byte *)(param_1 + 0x35) | *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe;
  }
  fn_00327970(param_1,0);
  if (0 < *(int *)(param_1 + 0x68)) {
    fVar8 = *(float *)(param_1 + 0x58);
    fVar7 = *(float *)(param_1 + 100);
    fVar12 = *(float *)(param_1 + 0x60);
    fVar11 = *(float *)(param_1 + 0x54);
    iVar3 = *(int *)(param_1 + 0x40);
    fVar9 = (float)VectorSignedToFloat(*(int *)(param_1 + 0x68),(byte)(in_fpscr >> 0x16) & 3);
    fVar9 = fVar9 * 0.1;
    fVar10 = *(float *)(param_1 + 0x60);
    fVar13 = *(float *)(param_1 + 100);
    *(float *)(iVar3 + 0x1c) =
         *(float *)(param_1 + 0x5c) +
         (*(float *)(param_1 + 0x50) - *(float *)(param_1 + 0x5c)) * fVar9;
    *(float *)(iVar3 + 0x20) = fVar10 + (fVar11 - fVar12) * fVar9;
    *(float *)(iVar3 + 0x24) = fVar13 + (fVar8 - fVar7) * fVar9;
    *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    iVar3 = *(int *)(param_1 + 0x68) + -1;
    *(int *)(param_1 + 0x68) = iVar3;
    if (iVar3 == 0) {
      iVar3 = *(int *)(param_1 + 0x40);
      uVar4 = *(undefined4 *)(param_1 + 0x60);
      uVar5 = *(undefined4 *)(param_1 + 100);
      *(undefined4 *)(iVar3 + 0x1c) = *(undefined4 *)(param_1 + 0x5c);
      *(undefined4 *)(iVar3 + 0x20) = uVar4;
      *(undefined4 *)(iVar3 + 0x24) = uVar5;
      *(byte *)(iVar3 + 0x44) = *(byte *)(iVar3 + 0x44) & 0xef | 0x10;
    }
  }
  iVar3 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar3 * 4) != -1) {
      piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(*piVar2 + 0xc))(piVar2);
      (**(code **)(*piVar2 + 0x14))(piVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3c);
  }
  return;
}



void fn_00327d0c(int param_1)

{
  int iVar1;
  
  fn_0068af3c();
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  fn_00151954(*(undefined4 *)(*(int *)(iVar1 + 0x10) + 0xc));
  iVar1 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = 0xffffffff;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 2);
  if (*(int *)(param_1 + 0x1c) != -1) {
    fn_0016a43c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  }
  if (*(int *)(param_1 + 0x18) != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(*(undefined4 *)(param_1 + 0x14));
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  return;
}



void fn_00327ab4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),DAT_008960f0,&DAT_00327cfc,1,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = fn_001c8abc(*(undefined4 *)(param_1 + 0x14),uVar1,DAT_008960f4);
  iVar5 = 0;
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  do {
    uVar1 = fn_001853ec(*(undefined4 *)(param_1 + 0x14),(&DAT_00896110)[iVar5],
                         *(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar5 * 4) = uVar1;
    piVar2 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x14),uVar1);
    (**(code **)(*piVar2 + 0x50))(piVar2,1);
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  iVar5 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar5 + 0x10);
  fn_0018a69c(*(undefined4 *)(param_1 + 0x30));
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x40) + 0x2c))
                            (*(int **)(param_1 + 0x40),DAT_008960f8,1);
  if (piVar2 != (int *)0x0) {
    puVar3 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
    do {
      if (puVar3 == &DAT_0089a930) goto LAB_00327bc4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  piVar2 = (int *)0x0;
LAB_00327bc4:
  *(int **)(param_1 + 0x44) = piVar2;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(*(int **)(param_1 + 0x40),DAT_008960fc,1)
  ;
  *(undefined4 *)(param_1 + 0x48) = uVar1;
  uVar1 = (**(code **)(**(int **)(param_1 + 0x40) + 0x2c))(*(int **)(param_1 + 0x40),DAT_00896100,1)
  ;
  *(undefined4 *)(param_1 + 0x4c) = uVar1;
  if (*(char *)(param_1 + 0x7c) == '\0') {
    iVar5 = fn_00689210(*(undefined4 *)(param_1 + 0x40),DAT_00896108);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  else {
    iVar5 = fn_00689210(*(undefined4 *)(param_1 + 0x40),DAT_00896104);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
  }
  iVar5 = *(int *)(param_1 + 0x40);
  uVar1 = *(undefined4 *)(param_1 + 0x60);
  uVar4 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(iVar5 + 0x1c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(iVar5 + 0x20) = uVar1;
  *(undefined4 *)(iVar5 + 0x24) = uVar4;
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xef | 0x10;
  if ((*(int *)(param_1 + 0x40) != 0) && (*(int *)(*(int *)(param_1 + 0x40) + 0xc) != 0)) {
    fn_00151954();
    fn_0018a69c(*(undefined4 *)(param_1 + 0x30),*(undefined4 *)(param_1 + 0x40));
  }
  *(byte *)(*(int *)(param_1 + 0x40) + 0x44) =
       *(byte *)(param_1 + 0x35) | *(byte *)(*(int *)(param_1 + 0x40) + 0x44) & 0xfe;
  fn_00327970(param_1,1);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x30);
  }
  if (*(char *)(param_1 + 0x34) != *(char *)(param_1 + 0x35)) {
    *(char *)(param_1 + 0x34) = *(char *)(param_1 + 0x35);
  }
  if (*(int *)(param_1 + 0x38) != *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x38) = *(int *)(param_1 + 0x3c);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  fn_0068aeac(param_1,param_2);
  return;
}


