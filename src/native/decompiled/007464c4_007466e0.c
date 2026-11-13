#include "007464c4_007466e0.h"



undefined4 * fn_007466e0(undefined4 *param_1)

{
  *param_1 = &DAT_00822208;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_00746624(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &DAT_00822208;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0025fc8c();
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[1] = piVar2;
  }
  iVar1 = fn_00145b00(0x4fc,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_003dcee4(iVar1,param_1[1]);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    param_1[2] = piVar2;
  }
  return param_1;
}



char fn_00746610(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return '\0';
  }
  bVar4 = *(int *)(DAT_00897850 + 0x34) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0x10);
  }
  if (bVar4 && cVar1 != '\0') {
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    iVar2 = fn_001296d0(DAT_00897850);
    if (((iVar2 != 0) || (*(char *)(DAT_00897850 + 0x4e) != '\0')) ||
       (iVar2 = fn_0066e13c(DAT_00897850), iVar2 == 0)) {
      return '\x01';
    }
    if (*(char *)(DAT_00897850 + 0x45) != '\0') {
      *(undefined1 *)(iVar3 + 0x11) = 1;
    }
    cVar1 = '\0';
  }
  return cVar1;
}



void fn_00746608(int param_1)

{
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x10) = 1;
  return;
}



undefined4 * fn_00746594(undefined4 *param_1)

{
  *param_1 = &DAT_008221f0;
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
    param_1[1] = 0;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
    param_1[2] = 0;
  }
  if ((int *)param_1[1] != (int *)0x0) {
    (**(code **)(*(int *)param_1[1] + 4))();
  }
  return param_1;
}



undefined4 * fn_007464d8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &DAT_008221f0;
  param_1[1] = 0;
  param_1[2] = 0;
  iVar1 = fn_00145b00(0x14,&DAT_00812c8c);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_0025fc8c();
  }
  piVar3 = (int *)param_1[1];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    param_1[1] = piVar2;
  }
  iVar1 = fn_00145b00(0x223c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)fn_003b7110(iVar1,param_1[1]);
  }
  piVar3 = (int *)param_1[2];
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    param_1[2] = piVar2;
  }
  return param_1;
}



char fn_007464c4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 == 0) {
    return '\0';
  }
  bVar4 = *(int *)(DAT_00897850 + 0x34) != 0;
  cVar1 = '\0';
  if (bVar4) {
    cVar1 = *(char *)(iVar3 + 0x10);
  }
  if (bVar4 && cVar1 != '\0') {
    *(undefined1 *)(iVar3 + 0x10) = 0;
    *(undefined1 *)(iVar3 + 0x11) = 0;
    iVar2 = fn_001296d0(DAT_00897850);
    if (((iVar2 != 0) || (*(char *)(DAT_00897850 + 0x4e) != '\0')) ||
       (iVar2 = fn_0066e13c(DAT_00897850), iVar2 == 0)) {
      return '\x01';
    }
    if (*(char *)(DAT_00897850 + 0x45) != '\0') {
      *(undefined1 *)(iVar3 + 0x11) = 1;
    }
    cVar1 = '\0';
  }
  return cVar1;
}


