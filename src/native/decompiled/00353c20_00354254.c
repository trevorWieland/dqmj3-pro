#include "00353c20_00354254.h"



void fn_00354254(undefined4 *param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = '\x10';
  *param_1 = &DAT_008268f8;
  do {
    if ((int *)param_1[cVar2 + -0xf] != (int *)0x0) {
      (**(code **)(*(int *)param_1[cVar2 + -0xf] + 0x14))(param_1[(char)(cVar2 + -0x10) + 1]);
      piVar1 = (int *)param_1[(char)(cVar2 + -0x10) + 1];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      param_1[(char)(cVar2 + -0x10) + 1] = 0;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  fn_002feef8(param_1);
  return;
}



void fn_003541f0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = '\x10';
  *param_1 = &DAT_008268f8;
  do {
    iVar2 = (int)cVar1;
    cVar1 = cVar1 + '\x01';
    param_1[iVar2 + -0xf] = 0;
  } while (cVar1 < '\x18');
  cVar1 = '\x10';
  do {
    iVar2 = (int)cVar1;
    cVar1 = cVar1 + '\x01';
    if (*(char *)((int)param_1 + iVar2 + 0x14) != '\0') {
      *(undefined1 *)((int)param_1 + iVar2 + 0x14) = 0;
    }
  } while (cVar1 < '\x14');
  return;
}



void fn_003541a0(int param_1)

{
  int *piVar1;
  char cVar2;
  
  cVar2 = '\x10';
  do {
    piVar1 = *(int **)(param_1 + cVar2 * 4 + -0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x18))(*(undefined4 *)(param_1 + (char)(cVar2 + -0x10) * 4 + 4));
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  return;
}



void fn_0035413c(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  
  cVar3 = '\x10';
  do {
    bVar4 = *(int *)(param_1 + cVar3 * 4 + -0x3c) != 0;
    cVar1 = '\0';
    if (bVar4) {
      cVar1 = *(char *)((int)cVar3 + param_1 + 0x14);
    }
    if (bVar4 && cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + (char)(cVar3 + -0x10) * 4 + 4);
      *(bool *)(iVar2 + 0x65) = *(char *)(iVar2 + 0x65) == '\0';
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 < '\x14');
  return;
}



void fn_003540b4(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  cVar3 = '\x10';
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + cVar3 * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      bVar5 = bVar4 && cVar1 == '\0';
      if (bVar4 && cVar1 == '\0') {
        bVar5 = *(char *)(iVar2 + -0x4018) == '\0';
      }
      if (bVar5) {
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar3 + -0x10) * 4 + 4) + 0x9d) = 0;
      }
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 < '\x14');
  return;
}



void fn_0035402c(int param_1)

{
  char cVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  
  cVar3 = '\x10';
  do {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + cVar3 * 0x418;
    if (0 < *(short *)(iVar2 + -0x4080)) {
      cVar1 = *(char *)(iVar2 + -0x4019);
      bVar4 = cVar1 == '\0';
      if (bVar4) {
        cVar1 = *(char *)(iVar2 + -0x400a);
      }
      bVar5 = bVar4 && cVar1 == '\0';
      if (bVar4 && cVar1 == '\0') {
        bVar5 = *(char *)(iVar2 + -0x4018) == '\0';
      }
      if (bVar5) {
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar3 + -0x10) * 4 + 4) + 0x9b) = 0;
      }
    }
    cVar3 = cVar3 + '\x01';
  } while (cVar3 < '\x14');
  return;
}



void fn_00353e04(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  short *psVar6;
  
  cVar5 = '\x10';
  do {
    iVar3 = fn_00174828(DAT_008977e4);
    iVar3 = iVar3 + cVar5 * 0x418;
    psVar6 = (short *)(iVar3 + -0x4080);
    if ((0 < *psVar6) && (*(int *)(param_1 + cVar5 * 4 + -0x3c) != 0)) {
      iVar4 = *(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4);
      if ((*(char *)(iVar3 + -0x4019) != '\0') == (bool)*(char *)(iVar4 + 0x55)) {
        *(bool *)(iVar4 + 0x55) = *(char *)(iVar3 + -0x4019) == '\0';
      }
      iVar4 = *(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4);
      if (*(short *)(iVar3 + -0x4064) != *(short *)(iVar4 + 0x8c)) {
        *(short *)(iVar4 + 0x8c) = *(short *)(iVar3 + -0x4064);
      }
      iVar4 = *(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4);
      if (*(short *)(iVar3 + -0x4062) != *(short *)(iVar4 + 0x90)) {
        *(short *)(iVar4 + 0x90) = *(short *)(iVar3 + -0x4062);
      }
      cVar1 = *(char *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x97);
      iVar4 = fn_00166804(psVar6);
      if (iVar4 != cVar1) {
        uVar2 = fn_00166804(psVar6);
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x97) = uVar2;
      }
      if (*(char *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x9b) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x9b) = 0;
      }
      cVar1 = *(char *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x99);
      iVar4 = fn_001667f0(psVar6);
      if (iVar4 != cVar1) {
        uVar2 = fn_001667f0(psVar6);
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x99) = uVar2;
      }
      if (*(char *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x9d) != '\0') {
        *(undefined1 *)(*(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4) + 0x9d) = 0;
      }
      iVar4 = *(int *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4);
      if (*(char *)(iVar4 + 0x93) != '\0') {
        *(undefined1 *)(iVar4 + 0x93) = 0;
      }
      fn_00309aa4(*(undefined4 *)(param_1 + (char)(cVar5 + -0x10) * 4 + 4),iVar3 + -0x4025,0x61);
    }
    cVar5 = cVar5 + '\x01';
  } while (cVar5 < '\x18');
  return;
}



void fn_00353db0(int param_1,char param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  param_1 = param_1 + (char)(param_2 + -0x10) * 4;
  if (param_3 == 0) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 0;
  }
  else if (param_3 == 1) {
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 2;
  }
  else {
    if (param_3 != 2) {
      return;
    }
    iVar1 = *(int *)(param_1 + 4);
    uVar2 = 1;
  }
  *(undefined1 *)(iVar1 + 0x9d) = uVar2;
  return;
}



void fn_00353cf8(int param_1)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\x10';
  do {
    if (*(int *)(param_1 + cVar2 * 4 + -0x3c) != 0) {
      fn_003095fc(*(undefined4 *)(param_1 + (char)(cVar2 + -0x10) * 4 + 4));
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  cVar2 = '\x10';
  do {
    piVar1 = *(int **)(param_1 + cVar2 * 4 + -0x3c);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(*(undefined4 *)(param_1 + (char)(cVar2 + -0x10) * 4 + 4));
      piVar3 = (int *)(param_1 + (char)(cVar2 + -0x10) * 4 + 4);
      piVar1 = (int *)*piVar3;
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 4))();
      }
      *piVar3 = 0;
    }
    cVar2 = cVar2 + '\x01';
  } while (cVar2 < '\x18');
  return;
}



void fn_00353c6c(int param_1,int param_2,int param_3)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  
  if (param_2 == 0) {
    bVar2 = 0x10;
    bVar3 = 0x14;
  }
  else {
    bVar2 = 0x14;
    bVar3 = 0x18;
  }
  if (bVar2 < bVar3) {
    do {
      if (*(int *)(param_1 + (char)bVar2 * 4 + -0x3c) != 0) {
        iVar1 = *(int *)(param_1 + (char)(bVar2 - 0x10) * 4 + 4);
        if (param_3 == 0) {
          *(undefined1 *)(iVar1 + 0x93) = 1;
        }
        else if (*(char *)(iVar1 + 0x55) != '\0') {
          *(undefined1 *)(iVar1 + 0x93) = 1;
        }
      }
      bVar2 = bVar2 + 1;
    } while ((char)bVar2 < (char)bVar3);
  }
  return;
}



void fn_00353c20(int param_1)

{
  char cVar1;
  
  cVar1 = '\x10';
  do {
    if (*(int *)(param_1 + cVar1 * 4 + -0x3c) != 0) {
      *(undefined1 *)(*(int *)(param_1 + (char)(cVar1 + -0x10) * 4 + 4) + 0x57) = 0;
    }
    cVar1 = cVar1 + '\x01';
  } while (cVar1 < '\x18');
  return;
}


