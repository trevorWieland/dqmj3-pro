#include "002de89c_002df2b8b.h"



void fn_002df2b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  do {
    iVar4 = param_1 + iVar3 * 4;
    piVar1 = *(int **)(iVar4 + 0x140);
    if ((piVar1 != (int *)0x0) &&
       (((char)piVar1[0x16] != '\0' || (iVar2 = (**(code **)(*piVar1 + 0xec))(), iVar2 != 0)))) {
      (**(code **)(**(int **)(iVar4 + 0x140) + 0xac))();
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x10);
  return;
}



void fn_002df134(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = fn_003b1974(param_1[0x62]);
  uVar2 = fn_006c3984(param_1[0x62],param_2);
  iVar4 = 0;
  do {
    piVar3 = (int *)param_1[iVar4 + 0x50];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1dc))(piVar3,0,uVar1,uVar2);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  iVar5 = param_1[0x3c];
  iVar4 = fn_003b1830(param_1[0x62],param_2,iVar5);
  uVar1 = fn_006c3970(param_1[0x62],param_2,iVar5);
  if (1 < (uint)param_1[0x47]) {
    iVar5 = -1;
    if (iVar4 == 2) {
      iVar5 = 2;
    }
    else if (iVar4 == 3) {
      iVar5 = 3;
    }
    else if (iVar4 == 0xf) {
      iVar5 = 5;
    }
    if (iVar5 != -1) {
      (**(code **)(*param_1 + 0x6c))(param_1,0);
      iVar4 = 0x15;
      goto LAB_002df21c;
    }
  }
  (**(code **)(*param_1 + 0x6c))(param_1,0,1);
LAB_002df21c:
  iVar5 = 0;
  do {
    piVar3 = (int *)param_1[iVar5 + 0x50];
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 0x1dc))(piVar3,1,iVar4,uVar1);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 0x10);
  (**(code **)(*param_1 + 0x6c))(param_1,1,6);
  iVar4 = 0;
  do {
    iVar5 = param_1[iVar4 + 0x50];
    if ((iVar5 != 0) && (*(char *)(iVar5 + 4) == '\0')) {
      *(undefined4 *)(iVar5 + 0xc) = 0;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x10);
  return;
}



int * fn_002defe0(int param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x100) != 0x10) {
    iVar4 = 0;
    do {
      if (*(int *)(param_1 + iVar4 * 4 + 0x140) == 0) {
        if (iVar4 == -1) {
          return (int *)0x0;
        }
        if ((**(int **)(DAT_008977e0 + 0x40) == 0) || (iVar1 = fn_006f6fe8(), iVar1 == 0)) {
          iVar1 = fn_00145b00(0x3a8,&DAT_00812c8c);
          if (iVar1 == 0) {
            piVar2 = (int *)0x0;
          }
          else {
            piVar2 = (int *)fn_00218664();
          }
        }
        else {
          iVar1 = fn_00145b00(0x3a8,&DAT_00812c8c);
          piVar2 = (int *)0x0;
          if (iVar1 != 0) {
            piVar2 = (int *)fn_00391ccc();
          }
        }
        *(int **)(param_1 + iVar4 * 4 + 0x140) = piVar2;
        *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
        piVar2[0x5c] = param_1;
        *(char *)(piVar2 + 0x5b) = *(char *)(param_1 + 0x100) + -1;
        iVar4 = fn_002ff310(1);
        piVar2[0x4f] = iVar4;
        (**(code **)(*piVar2 + 0x1c8))(piVar2);
        *(undefined1 *)((int)piVar2 + 0x16d) = param_3;
        (**(code **)(*piVar2 + 0x124))(piVar2,param_2);
        piVar3 = *(int **)(param_1 + 0x184);
        if (piVar3 != (int *)0x0) {
          (**(code **)(*piVar3 + 0xc))(piVar3,piVar2);
        }
        return piVar2;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x10);
  }
  return (int *)0x0;
}



void fn_002defa8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003632b0();
  *puVar1 = &DAT_008206b4;
  *(undefined1 *)((int)puVar1 + 0xfd) = 0;
  puVar1[0x40] = 0;
  *(undefined1 *)(puVar1 + 0x41) = 0;
  return;
}



void fn_002dedb8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  fn_003979ec();
  cVar1 = *(char *)(param_1 + 0xfc);
  if (cVar1 != '\0') {
    if (cVar1 == '\x01') {
      iVar3 = fn_00660e0c((int)*(short *)(param_1 + 0xf8));
      if (iVar3 != 0) {
        iVar2 = fn_00661040((int)*(short *)(param_1 + 0xf8));
        iVar3 = 1;
        if (iVar2 != 1) {
          iVar3 = *(int *)(param_1 + 0xf8);
        }
        if ((iVar2 != 1 && iVar3 != 0x40) && iVar3 != 0x45) {
          *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x18) = 0;
          fn_006899f4(param_1,0xd8,0,0);
          return;
        }
      }
      fn_006899f4(param_1,0xd7,0);
      return;
    }
    if (cVar1 == '\x02') {
      iVar3 = *(int *)(*(int *)(param_1 + 0xf0) + 8);
      if (iVar3 == 0) {
        fn_006899f4(param_1,0,0);
        fn_00689d04(param_1,0);
        fn_00689878(param_1,0);
      }
      else {
        fn_006899f4(param_1,iVar3,0,1);
      }
      (**(code **)(**(int **)(param_1 + 0xf0) + 0xc))();
      *(undefined1 *)(param_1 + 0xfc) = 4;
    }
  }
  return;
}



void fn_002ded14(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_10;
  
  local_10 = param_4;
  fn_0036313c();
  (**(code **)(**(int **)(param_1 + 0x9c) + 0x30))(*(int **)(param_1 + 0x9c),0,&local_10);
  iVar1 = fn_006ba284(param_1);
  if (iVar1 != *(int *)(param_1 + 0x100)) {
    uVar2 = fn_006ba284(param_1);
    iVar4 = local_10 + *(int *)(param_1 + 0x100) * 10;
    iVar1 = *(int *)(param_1 + 0xf4);
    if ((iVar4 < (short)(*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4) >> 1)) &&
       (*(char *)(param_1 + 0x104) != '\0')) {
      uVar3 = fn_002b1390(iVar1,(int)(short)iVar4);
      *(undefined4 *)(param_1 + 0x100) = uVar2;
      fn_002ddadc(*(undefined4 *)(param_1 + 0xf4),uVar3);
    }
  }
  fn_002de434(param_1);
  return;
}


