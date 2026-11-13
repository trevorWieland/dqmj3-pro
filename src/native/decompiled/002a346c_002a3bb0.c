#include "002a346c_002a3bb0.h"



void fn_002a3bb0(undefined4 param_1,undefined4 param_2)

{
  switch(param_2) {
  case 0:
    fn_0031f8fc(param_1,1,0,0,0xffffffff);
    break;
  case 1:
    fn_0031f8fc(param_1,1,0,3,0xffffffff);
    return;
  case 2:
    fn_0031f8fc(param_1,1,0,0,0);
    return;
  case 3:
    fn_0031f8fc(param_1,1,0,1,0);
    return;
  case 4:
    fn_0031f8fc(param_1,1,0,1,0xffffffff);
    return;
  case 5:
    fn_0031f8fc(param_1,1,4,0,0xffffffff);
    return;
  }
  return;
}



int fn_002a37d8(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  
  *param_1 = &DAT_0081e7d0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  piVar1 = (int *)fn_0015ece0(0xc);
  iVar2 = fn_0015ece0(0x78);
  piVar1[2] = iVar2;
  *piVar1 = param_1[1];
  piVar1[1] = 1;
  param_1[1] = piVar1;
  iVar2 = piVar1[2];
  param_1[3] = iVar2;
  param_1[4] = iVar2 + 0x78;
  param_1[5] = iVar2;
  param_1[3] = iVar2 + 0x78;
  *(int *)iVar2 = iVar2;
  iVar2 = param_1[5];
  *(int *)(iVar2 + 4) = iVar2;
  iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_006733ac(iVar2,0xb,DAT_00899280,DAT_00899284,0xb);
  }
  param_1[7] = uVar3;
  uVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    uVar3 = fn_006733ac((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00899288,DAT_0089928c,1);
  }
  param_1[8] = uVar3;
  uVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    uVar3 = fn_006733ac((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00899288,DAT_0089928c,1);
  }
  param_1[9] = uVar3;
  uVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    uVar3 = fn_006733ac((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00899288,DAT_0089928c,1);
  }
  param_1[10] = uVar3;
  uVar4 = fn_00145b00(0x20,&DAT_00812c8c);
  uVar3 = 0;
  if ((int)uVar4 != 0) {
    uVar3 = fn_006733ac((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),DAT_00899288,DAT_0089928c,1);
  }
  param_1[0xb] = uVar3;
  iVar2 = fn_00124930(param_1 + 0xc);
  iVar2 = fn_00101a1c(iVar2 + 0x70,&LAB_002a35b4,0x3c4,10);
  *(undefined4 *)(iVar2 + 0x25a8) = 0;
  iVar2 = fn_00101a1c(iVar2 + 0x25ac,&LAB_002a343c,0x24,10);
  *(undefined4 *)(iVar2 + 0x168) = 0;
  *(undefined4 *)(iVar2 + 0x16c) = 0;
  *(undefined4 *)(iVar2 + 0x170) = 0;
  return iVar2 + -0x264c;
}



void fn_002a3688(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_3d8 [964];
  
  iVar1 = param_1 + 0xa0;
  iVar2 = 0;
  do {
    if (*(int *)(iVar1 + iVar2 * 0x3c4) == param_2) {
      puVar3 = (undefined4 *)(iVar1 + iVar2 * 0x3c4);
LAB_002a36f4:
      if (puVar3 != (undefined4 *)0x0) {
        fn_00101a1c(auStack_3d8,&LAB_0020c1dc,0x20,0x1e);
        *puVar3 = 0;
        fn_0017821c(puVar3 + 1,auStack_3d8,0x3c0);
      }
      break;
    }
    if (*(int *)(iVar1 + iVar2 * 0x3c4 + 0x3c4) == param_2) {
      puVar3 = (undefined4 *)(iVar1 + iVar2 * 0x3c4 + 0x3c4);
      goto LAB_002a36f4;
    }
    iVar2 = iVar2 + 2;
  } while (iVar2 < 10);
  param_1 = param_1 + 0x264c;
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0x24) == param_2) {
      puVar3 = (undefined4 *)(param_1 + iVar1 * 0x24);
LAB_002a3784:
      if (puVar3 != (undefined4 *)0x0) {
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3[3] = 0;
        puVar3[4] = 0;
        puVar3[5] = 0;
        puVar3[6] = 0;
        puVar3[7] = 0;
        puVar3[8] = 0;
      }
      return;
    }
    if (*(int *)(param_1 + iVar1 * 0x24 + 0x24) == param_2) {
      puVar3 = (undefined4 *)(param_1 + iVar1 * 0x24 + 0x24);
      goto LAB_002a3784;
    }
    iVar1 = iVar1 + 2;
    if (9 < iVar1) {
      return;
    }
  } while( true );
}



void fn_002a35dc(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_3e0;
  undefined1 auStack_3dc [964];
  
  uVar2 = 0;
  do {
    local_3e0 = 0;
    fn_00101a1c(auStack_3dc,&LAB_0020c1dc,0x20,0x1e);
    fn_0017821c(param_1 + uVar2 * 0x3c4 + 0xa0,&local_3e0,0x3c4);
    uVar2 = uVar2 + 1;
  } while (uVar2 < 10);
  iVar3 = 0;
  do {
    iVar1 = iVar3 + 1;
    iVar3 = param_1 + iVar3 * 0x24;
    *(undefined4 *)(iVar3 + 0x264c) = 0;
    *(undefined4 *)(iVar3 + 0x2650) = 0;
    *(undefined4 *)(iVar3 + 0x2654) = 0;
    *(undefined4 *)(iVar3 + 0x2658) = 0;
    *(undefined4 *)(iVar3 + 0x265c) = 0;
    *(undefined4 *)(iVar3 + 0x2660) = 0;
    *(undefined4 *)(iVar3 + 0x2664) = 0;
    *(undefined4 *)(iVar3 + 0x2668) = 0;
    *(undefined4 *)(iVar3 + 0x266c) = 0;
    iVar3 = iVar1;
  } while (iVar1 < 10);
  return;
}



void fn_002a3540(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  piVar3 = (int *)**(int **)(param_2 + 0x10);
  if (piVar3 != *(int **)(param_2 + 0x10)) {
    do {
      piVar2 = *(int **)(param_1 + 0x14);
      piVar1 = (int *)*piVar2;
      if (piVar1 != piVar2) {
        do {
          if (piVar1[4] == piVar3[4]) {
            fn_004a2190(piVar1 + 2);
            break;
          }
          piVar1 = (int *)*piVar1;
        } while (piVar1 != piVar2);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(param_2 + 0x10));
  }
  return;
}



void fn_002a346c(int param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  
  iVar9 = param_1 + 0x264c;
  iVar3 = 0;
  do {
    if (*(int *)(iVar9 + iVar3 * 0x24) == param_2) {
      iVar9 = iVar9 + iVar3 * 0x24;
LAB_002a34c8:
      if (iVar9 != 0) {
        uVar2 = param_3[1];
        uVar4 = param_3[2];
        uVar5 = param_3[3];
        uVar6 = param_3[4];
        uVar7 = param_3[5];
        uVar8 = param_3[6];
        uVar10 = param_3[7];
        *(undefined4 *)(iVar9 + 4) = *param_3;
        *(undefined4 *)(iVar9 + 8) = uVar2;
        *(undefined4 *)(iVar9 + 0xc) = uVar4;
        *(undefined4 *)(iVar9 + 0x10) = uVar5;
        *(undefined4 *)(iVar9 + 0x14) = uVar6;
        *(undefined4 *)(iVar9 + 0x18) = uVar7;
        *(undefined4 *)(iVar9 + 0x1c) = uVar8;
        *(undefined4 *)(iVar9 + 0x20) = uVar10;
        return;
      }
      break;
    }
    if (*(int *)(iVar9 + iVar3 * 0x24 + 0x24) == param_2) {
      iVar9 = iVar9 + iVar3 * 0x24 + 0x24;
      goto LAB_002a34c8;
    }
    iVar3 = iVar3 + 2;
  } while (iVar3 < 10);
  *(int *)(param_1 + *(int *)(param_1 + 0x27b4) * 0x24 + 0x264c) = param_2;
  uVar2 = param_3[1];
  uVar4 = param_3[2];
  uVar5 = param_3[3];
  uVar6 = param_3[4];
  uVar7 = param_3[5];
  uVar8 = param_3[6];
  uVar10 = param_3[7];
  iVar9 = param_1 + *(int *)(param_1 + 0x27b4) * 0x24;
  *(undefined4 *)(iVar9 + 0x2650) = *param_3;
  *(undefined4 *)(iVar9 + 0x2654) = uVar2;
  *(undefined4 *)(iVar9 + 0x2658) = uVar4;
  *(undefined4 *)(iVar9 + 0x265c) = uVar5;
  *(undefined4 *)(iVar9 + 0x2660) = uVar6;
  *(undefined4 *)(iVar9 + 0x2664) = uVar7;
  *(undefined4 *)(iVar9 + 0x2668) = uVar8;
  *(undefined4 *)(iVar9 + 0x266c) = uVar10;
  uVar1 = *(int *)(param_1 + 0x27b4) + 1;
  *(uint *)(param_1 + 0x27b4) = uVar1;
  if (9 < uVar1) {
    *(undefined4 *)(param_1 + 0x27b4) = 0;
  }
  return;
}


