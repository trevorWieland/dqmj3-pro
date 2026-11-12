#include "0012746c_00127a7c.h"



void fn_00127a7c(int param_1)

{
  if (*(char *)(param_1 + 0x28) == '\0') {
    fn_00141b28(param_1);
    *(undefined1 *)(param_1 + 0x28) = 1;
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  return;
}



int fn_00127a60(int param_1)

{
  return ((param_1 + 7U >> 3) + 3 & 0xfffffffc) + param_1 * 0x24;
}



int * fn_00127984(void)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)fn_00142268();
  *piVar2 = (int)&DAT_0085861c;
  piVar2[2] = 0;
  piVar2[3] = 0;
  fn_001425d8(piVar2 + 4,0,0,8,0,0,0,0,1);
  piVar2[10] = 0;
  piVar2[9] = 0x2206;
  if (piVar2[2] != 0) {
    if (piVar2[4] != 0) {
      piVar2[4] = 0;
    }
    iVar3 = *(int *)(piVar2[3] + 0xc);
    uVar1 = (**(code **)(*piVar2 + 0x7c))();
    fn_001425d8(piVar2 + 4,0,*(undefined4 *)(iVar3 + 0x14),*(undefined2 *)(iVar3 + 10),
                 *(undefined2 *)(iVar3 + 0x10),*(undefined2 *)(iVar3 + 0x12),uVar1,
                 *(undefined4 *)(iVar3 + 4),1);
  }
  return piVar2;
}



int fn_00127904(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1 + *(int *)(param_1 + 4) * 4;
  uVar3 = *(uint *)(iVar1 + 0x14);
  iVar2 = (uVar3 >> 7) * 0x84;
  if ((uVar3 & 0x7f) != 0) {
    iVar2 = iVar2 + ((uVar3 & 0x7f) + 4 & 0xfffffffe);
  }
  uVar3 = *(uint *)(iVar1 + 0x1c);
  iVar1 = (uVar3 >> 7) * 0x84;
  if ((uVar3 & 0x7f) != 0) {
    iVar1 = iVar1 + ((uVar3 & 0x7f) + 4 & 0xfffffffe);
  }
  return (iVar2 + iVar1 + *(int *)(param_1 + *(int *)(param_1 + 8) + 0x1c) * 6) * 4 + 0xc20;
}



void fn_00127888(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
    *(undefined4 *)(param_1 + 4) = *param_2;
    fn_0017821c(param_1 + 8,param_2 + 1,0xd);
    fn_0017821c(param_1 + 0x18,param_2 + 5,0xd);
    *(undefined4 *)(param_1 + 0x28) = param_2[9];
    *(undefined1 *)(param_1 + 0x2c) = *(undefined1 *)(param_2 + 10);
    *(undefined1 *)(param_1 + 0x2d) = 1;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



void fn_00127838(int param_1)

{
  if (*(char *)(param_1 + 0x2c) == '\0') {
    fn_00141b28(param_1 + 4);
    *(undefined1 *)(param_1 + 0x2c) = 1;
    *(undefined1 *)(param_1 + 0x2d) = 0;
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return;
}



undefined4 fn_001277f8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  fn_00170704(param_1 + 4);
  uVar1 = fn_00141980(param_1 + 0x10,param_2,param_3);
  fn_001707b4(param_1 + 4);
  return uVar1;
}



int * fn_001277b8(int *param_1)

{
  if (*param_1 != 0) {
    fn_001418e8(param_1);
    fn_00150b24(*param_1,3);
    fn_0013f624(*param_1);
    *param_1 = 0;
  }
  return param_1;
}



int fn_00127758(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = fn_0013f598(*param_1,param_1[1]);
  if (iVar1 == 0) {
    iVar1 = -1;
  }
  else {
    iVar1 = fn_0014185c(param_1);
    if (iVar1 == 0) {
      fn_0013f4f4(*param_1,0);
      iVar1 = -1;
    }
    else {
      iVar1 = param_1[1] + -1;
    }
  }
  return iVar1;
}



void fn_0012767c(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_2 == 0) {
    fn_001418e8();
    fn_00150b24(*param_1,3);
    fn_0014185c(param_1);
    return;
  }
  iVar1 = fn_00152780();
  while (param_2 < (int)param_1[1]) {
    iVar3 = param_1[3];
    if (iVar1 != 0) {
      *(undefined1 *)(iVar3 + 0x14) = 0;
    }
    if (*(char *)(iVar3 + 0x14) != '\0') {
      iVar2 = iVar3 + 0xc;
      while (iVar2 != *(int *)(iVar3 + 0xc)) {
        iVar2 = *(int *)(iVar2 + 4);
        if (*(code **)(iVar2 + 0x10) != (code *)0x0) {
          (**(code **)(iVar2 + 0x10))
                    (*(undefined4 *)(iVar2 + 8),*(undefined4 *)(iVar2 + 0xc),
                     *(undefined4 *)(iVar2 + 0x14));
        }
      }
    }
    fn_00150c68(iVar3 + 8,*(undefined4 *)(iVar3 + 0xc),iVar3 + 0xc);
    fn_0017d90c(param_1 + 1,iVar3);
  }
  fn_0013f4f4(*param_1,param_2);
  fn_0013f598(*param_1,param_1[1]);
  fn_0014185c(param_1);
  return;
}



void fn_00127640(int *param_1)

{
  if (*param_1 != 0) {
    fn_001418e8(param_1);
    fn_00150b24(*param_1,3);
    fn_0013f624(*param_1);
    *param_1 = 0;
  }
  return;
}



void fn_001275a0(char *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*param_1 != '\0') {
    while (*(int *)(param_1 + 4) != 0) {
      iVar1 = *(int *)(param_1 + 8);
      iVar2 = iVar1 + -0x58;
      fn_0017ea58(iVar2);
      if (*(code **)(iVar1 + -0x4c) != (code *)0x0) {
        (**(code **)(iVar1 + -0x4c))(iVar2,1,*(undefined4 *)(iVar1 + -0x48));
      }
      fn_0018b010(iVar2);
    }
    while (*(int *)(param_1 + 0x10) != 0) {
      iVar1 = *(int *)(param_1 + 0x14);
      fn_00150c1c(param_1 + 0x10);
      fn_00141340(iVar1 + -0x58);
    }
    *param_1 = '\0';
  }
  return;
}



void fn_00127530(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  
  if (*param_1 != '\0') {
    uVar2 = 0;
    do {
      fn_0018b588(param_1,uVar2 & 0xff);
      fn_0015f38c((int)(char)uVar2,*(undefined4 *)(param_1 + uVar2 * 4 + 0x6c),
                   *(undefined4 *)(param_1 + uVar2 * 4 + 0x274));
      uVar3 = uVar2 + 1;
      pcVar1 = param_1 + uVar2 * 4 + 0x6c;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1 = param_1 + uVar2 * 4 + 0x274;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      uVar2 = uVar3;
    } while ((int)uVar3 < 2);
    *param_1 = '\0';
  }
  return;
}



void fn_001274d4(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x10) != '\0') {
    piVar1 = *(int **)(param_1 + 8);
    if (*(int **)(param_1 + 8) != (int *)(param_1 + 8)) {
      do {
        piVar2 = (int *)*piVar1;
        fn_00141734(piVar1 + -0x6c);
        piVar1 = piVar2;
      } while (piVar2 != (int *)(param_1 + 8));
    }
    fn_00141804(param_1,*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
    *(undefined1 *)(param_1 + 0x10) = 0;
  }
  return;
}



void fn_0012746c(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 500) != '\0') {
    *(undefined1 *)(param_1 + 0x1f7) = 1;
    fn_0015f270();
    *(undefined1 *)(param_1 + 500) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x1e0);
  if (*(int **)(param_1 + 0x1e0) != (int *)(param_1 + 0x1e0)) {
    do {
      piVar2 = (int *)*piVar1;
      (**(code **)(piVar1[-1] + 0x10))(piVar1 + -1);
      piVar1 = piVar2;
    } while (piVar2 != (int *)(param_1 + 0x1e0));
  }
  *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
  return;
}


