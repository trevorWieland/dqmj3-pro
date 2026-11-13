#include "002fa328_002fa6f4.h"



undefined4 fn_002fa6f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  short *psVar2;
  byte bVar3;
  undefined4 uVar4;
  byte bVar5;
  
  uVar4 = 0;
  iVar1 = fn_00661070();
  if (iVar1 == 0) {
    bVar5 = 0x14;
    bVar3 = 0x10;
  }
  else {
    bVar5 = 0x18;
    bVar3 = 0x14;
  }
  if (bVar3 < bVar5) {
    do {
      iVar1 = fn_00174828(DAT_008977e4);
      psVar2 = (short *)(iVar1 + (char)bVar3 * 0x418 + -0x4080);
      if ((0 < *psVar2) && (iVar1 = fn_002fa7e0(param_1,psVar2,param_2), iVar1 != 0)) {
        uVar4 = 1;
        break;
      }
      bVar3 = bVar3 + 1;
    } while ((char)bVar3 < (char)bVar5);
  }
  if ((param_3 != 0) && (iVar1 = fn_00660ec0((int)(short)param_2), iVar1 == 0x16)) {
    uVar4 = 0;
  }
  return uVar4;
}



void fn_002fa6bc(undefined4 *param_1)

{
  *param_1 = &DAT_00821604;
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_002fa680(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00821604;
  param_1[1] = 0;
  iVar1 = fn_00145b00(8,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00692eac();
  }
  param_1[2] = uVar2;
  return param_1;
}



void fn_002fa62c(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_001287b4();
  iVar2 = fn_0011c184(L"rom:/data/Battle/CommonPos/BattleAll.bin",uVar1,0x80,5);
  *(int *)(param_1 + 4) = iVar2;
  if ((iVar2 != 0) && (iVar2 = fn_00145ac0(), iVar2 != 0)) {
    iVar2 = *(int *)(param_1 + 8);
    uVar1 = fn_00145ac0(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(iVar2 + 4) = uVar1;
  }
  return;
}



undefined4 * fn_002fa528(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[1] = 0xffffffff;
  *param_1 = &DAT_008215f4;
  puVar1 = (undefined4 *)fn_0013d4ec();
  param_1[2] = *puVar1;
  param_1[3] = &DAT_008f9cf4;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[0x1e6] = 0;
  param_1[0x1e7] = 0;
  *(undefined1 *)(param_1 + 0x420) = 0;
  *(undefined1 *)((int)param_1 + 0x1081) = 0;
  *(undefined1 *)((int)param_1 + 0x1082) = 0;
  fn_00301f50(param_1 + 6,0x3c0);
  fn_00301f50(param_1 + 0xf6,0x3c0);
  param_1[0x1e6] = 0;
  fn_00301f50(param_1 + 0x1ea,0x8d8);
  return param_1;
}



void fn_002fa49c(int param_1)

{
  int iVar1;
  
  fn_0028a66c(*(undefined4 *)(DAT_00897804 + 0xc));
  fn_0028acf4(*(undefined4 *)(DAT_00897804 + 0xc));
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0xf0 + 0x18) != 0) {
      fn_0028b7ac(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  iVar1 = 0;
  do {
    if (*(int *)(param_1 + iVar1 * 0xf0 + 0x3d8) != 0) {
      fn_0028a588(*(undefined4 *)(DAT_00897804 + 0xc));
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}



void fn_002fa490(int param_1)

{
  fn_00301f50(param_1 + 0x3d8,0x3c0);
  return;
}



void fn_002fa47c(int param_1)

{
  fn_00301f50(param_1 + 0x7a8,0x8d8);
  return;
}



void fn_002fa440(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = fn_0066e5b4(DAT_00898840,*(undefined4 *)(param_1 + 8));
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x10) = 2;
    puVar2 = (undefined4 *)fn_0013d4ec();
    *(undefined4 *)(param_1 + 8) = *puVar2;
  }
  return;
}



void fn_002fa42c(int param_1,undefined4 param_2)

{
  fn_0017821c(param_1 + 0x7a8,param_2,0x8d8);
  return;
}



void fn_002fa418(undefined4 param_1,int param_2,int param_3)

{
  fn_0017821c(param_1,param_2 + param_3 * 0xf0 + 0x3d8,0xf0);
  return;
}



void fn_002fa40c(int param_1)

{
  fn_00301f50(param_1 + 0x18,0x3c0);
  return;
}



void fn_002fa3c8(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x3d8 + uVar1 * 0xf0) == 0) {
      if (uVar1 < 4) {
        fn_0017821c(param_1 + 0x3d8 + uVar1 * 0xf0,param_2,0xf0);
        return;
      }
      return;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}



void fn_002fa3b4(undefined4 param_1,int param_2,int param_3)

{
  fn_0017821c(param_1,param_2 + param_3 * 0xf0 + 0x18,0xf0);
  return;
}



void fn_002fa370(int param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  do {
    if (*(int *)(param_1 + 0x18 + uVar1 * 0xf0) == 0) {
      if (uVar1 < 4) {
        fn_0017821c(param_1 + 0x18 + uVar1 * 0xf0,param_2,0xf0);
        return;
      }
      return;
    }
    uVar1 = uVar1 + 1 & 0xff;
  } while (uVar1 < 4);
  return;
}



int fn_002fa328(int param_1)

{
  *(undefined1 *)(param_1 + 0xf0) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x111) = 0;
  *(undefined1 *)(param_1 + 0x112) = 0;
  fn_00301f50(param_1,0xf0);
  *(undefined4 *)(param_1 + 0xf4) = 0;
  *(undefined4 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x100) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x108) = 0;
  return param_1;
}


