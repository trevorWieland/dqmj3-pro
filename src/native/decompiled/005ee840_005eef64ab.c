#include "005ee840_005eef64ab.h"



void fn_005eec08(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  piVar2 = (int *)fn_005e762c(param_2);
  piVar3 = *(int **)(iVar1 + 0x10);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))();
    }
    *(int **)(iVar1 + 0x10) = piVar2;
  }
  return;
}



void fn_005eeb94(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  bool bVar2;
  
  *param_1 = &DAT_00858da8;
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    bVar2 = *(char *)(iVar1 + 0x20) != '\0';
    if (bVar2) {
      param_4 = *(int *)(iVar1 + 0x24);
    }
    if (bVar2 && param_4 != 0) {
      fn_00117528(*(undefined4 *)(iVar1 + 0x1c),0);
      *(undefined4 *)(iVar1 + 0x24) = 0;
    }
    if (*(int *)(iVar1 + 8) != 0) {
      fn_00143a58();
      *(undefined4 *)(iVar1 + 8) = 0;
    }
    fn_002feef8(iVar1);
  }
  fn_002feef8(param_1);
  return;
}



undefined4 *
fn_005eea1c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,char param_8,undefined4 param_9
            ,undefined1 param_10)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  
  *param_1 = &DAT_00858da8;
  param_1[1] = 0;
  iVar4 = param_4;
  puVar1 = (undefined4 *)fn_00145b00(0x2c,&DAT_00812c8c);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = 0;
    puVar1[5] = param_4;
    puVar1[1] = 0;
    puVar1[4] = param_3;
    puVar1[2] = 0;
    puVar1[3] = param_2;
    puVar1[6] = param_5;
    puVar1[7] = param_7;
    *(char *)(puVar1 + 8) = param_8;
    puVar1[9] = param_9;
    *(undefined1 *)(puVar1 + 10) = param_10;
    if (param_8 != '\0') {
      uVar2 = fn_001539a0(puVar1[5],puVar1[3],puVar1[4]);
      uVar2 = fn_00142c80(puVar1[7],param_6,0,uVar2);
      puVar1[9] = uVar2;
    }
    puVar3 = (undefined4 *)fn_00143ac8(0x30,0x10);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = 0;
    }
    puVar1[2] = puVar3;
    iVar4 = puVar1[9];
    fn_005ee918(puVar3,puVar1[3],puVar1[4],iVar4,puVar1[6],*(undefined1 *)(puVar1 + 10));
    *puVar1 = puVar1[2];
    puVar1[1] = 0xc;
  }
  puVar3 = (undefined4 *)param_1[1];
  if (puVar3 != puVar1) {
    if (puVar3 != (undefined4 *)0x0) {
      if (*(char *)(puVar3 + 8) != '\0') {
        iVar4 = puVar3[9];
      }
      if (*(char *)(puVar3 + 8) != '\0' && iVar4 != 0) {
        fn_00117528(puVar3[7],0);
        puVar3[9] = 0;
      }
      if (puVar3[2] != 0) {
        fn_00143a58();
        puVar3[2] = 0;
      }
      fn_002feef8(puVar3);
    }
    param_1[1] = puVar1;
  }
  return param_1;
}


