#include "006b8574_006b8ac0.h"



undefined4 fn_006b8ac0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_001748ec(*(undefined4 *)(param_1 + 4));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_00174828(DAT_008977e4);
    iVar2 = iVar2 + iVar1 * 0x418 + -0x4080;
  }
  iVar1 = fn_00174828(DAT_008977e4);
  if ((*(char *)(iVar1 + *(char *)(*(int *)(param_1 + 0x78) + 0x35) * 0x418 + -0x4027) == '\x02') ||
     ((iVar2 != 0 && (*(char *)(iVar2 + 0x59) == '\x02')))) {
    return 1;
  }
  return 0;
}



int fn_006b8a1c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)((longlong)(int)*(uint *)(param_1 + 4) * -0x77777777 +
                ((ulonglong)*(uint *)(param_1 + 4) << 0x20) >> 0x20);
  iVar2 = (int)((longlong)(int)*(uint *)(param_1 + 8) * -0x77777777 +
                ((ulonglong)*(uint *)(param_1 + 8) << 0x20) >> 0x20);
  return ((iVar2 >> 5) - (iVar2 >> 0x1f)) - ((iVar1 >> 5) - (iVar1 >> 0x1f));
}



undefined4 fn_006b89f8(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 8) < 1) || (*(int *)(param_1 + 4) < *(int *)(param_1 + 8))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  return uVar1;
}



int fn_006b89d4(int param_1,uint param_2)

{
  if ((-1 < (int)param_2) && (param_2 < 2)) {
    param_1 = param_1 + param_2 * 4;
  }
  return param_1;
}



bool fn_006b8970(int param_1)

{
  return *(int *)(*(int *)(param_1 + 4) + -4) == *(int *)(param_1 + 0xc);
}



int fn_006b8954(int param_1)

{
  int iVar1;
  
  if (*(int *)(*(int *)(param_1 + 4) + -4) == *(int *)(param_1 + 0xc)) {
    iVar1 = 0;
  }
  else {
    iVar1 = (int)*(char *)(param_1 + 0x1e);
  }
  return iVar1;
}



void fn_006b87e0(int param_1,undefined4 param_2)

{
  undefined1 auStack_18 [16];
  
  fn_001028d4(auStack_18,(char *)&DAT_006b8818,param_2);
  fn_0025f9d8(DAT_00897800,*(undefined4 *)(param_1 + 0xc),auStack_18);
  return;
}



int fn_006b87ac(int param_1,int param_2)

{
  if ((param_2 < 0) || (0x1d < param_2)) {
    return 0;
  }
  return *(int *)(param_1 + 4) + 0x10 + param_2 * 0xa88;
}



int fn_006b876c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + 4) + 0x10 + iVar2 * 0xa88) == 0) {
      return iVar1;
    }
    iVar2 = iVar2 + 1;
    iVar1 = iVar1 + 1;
  } while (iVar2 < 0x1e);
  return iVar1;
}



undefined8 fn_006b8760(int param_1)

{
  return **(undefined8 **)(param_1 + 4);
}



bool fn_006b8748(int param_1)

{
  return *(char *)(*(int *)(param_1 + 4) + 0x13c00) != '\0';
}



int fn_006b873c(int param_1)

{
  return *(int *)(param_1 + 4) + 0x38;
}



int fn_006b8730(int param_1)

{
  return *(int *)(param_1 + 4) + 0x5c;
}



int fn_006b8724(int param_1)

{
  return *(int *)(param_1 + 4) + 0x1c;
}



int fn_006b8718(int param_1)

{
  return *(int *)(param_1 + 4) + 0x2c;
}



int fn_006b870c(int param_1)

{
  return *(int *)(param_1 + 4) + 0xc;
}



int fn_006b8700(int param_1)

{
  return *(int *)(param_1 + 4) + 0x14;
}



int fn_006b86f4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x54;
}



int fn_006b86e8(int param_1)

{
  return *(int *)(param_1 + 4) + 0xc;
}



int fn_006b86d0(int param_1)

{
  return *(int *)(param_1 + 4) + 0x44;
}



int fn_006b86c4(int param_1)

{
  return *(int *)(param_1 + 4) + 0x24;
}



int fn_006b8668(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = fn_006b83e4();
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(param_1 + 4) + 0x28) == *(int *)(*(int *)(param_1 + 4) + iVar2 * 4 + 4))
      {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = fn_006b83e4(param_1);
    } while (iVar2 < iVar1);
  }
  return -1;
}



undefined4 fn_006b860c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  while ((*(short *)(*(int *)(param_1 + 4) + iVar1 * 0xf0 + 0x48) != param_2 &&
         (*(short *)(*(int *)(param_1 + 4) + iVar1 * 0xf0 + 0x138) != param_2))) {
    iVar1 = iVar1 + 2;
    if (499 < iVar1) {
      return 0;
    }
  }
  return 1;
}



undefined4 fn_006b85d0(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (((param_2 < 0) || (499 < param_2)) ||
     (puVar1 = (undefined4 *)(*(int *)(param_1 + 4) + 0x2c + param_2 * 0xf0),
     puVar1 == (undefined4 *)0x0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *puVar1;
  }
  return uVar2;
}



int fn_006b8574(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = fn_006b83e4();
  if (0 < iVar1) {
    do {
      if (*(int *)(*(int *)(param_1 + 4) + 0x24) == *(int *)(*(int *)(param_1 + 4) + iVar2 * 4 + 4))
      {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      iVar1 = fn_006b83e4(param_1);
    } while (iVar2 < iVar1);
  }
  return -1;
}


