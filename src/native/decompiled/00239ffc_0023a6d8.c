#include "00239ffc_0023a6d8.h"



void fn_0023a6d8(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 2;
  *param_1 = &PTR_FUN_0081d144;
  do {
    iVar1 = (int)(param_1[iVar2 * 3 + 2] - param_1[iVar2 * 3 + 1]) / 0x50;
    while (iVar1 = iVar1 + -1, -1 < iVar1) {
      fn_0023a264(param_1[iVar2 * 3 + 1] + iVar1 * 0x50);
    }
    iVar2 = iVar2 + -1;
  } while (-1 < iVar2);
  fn_00100414(param_1 + 1,fn_0078b8ac,0xc,3);
  fn_002feef8(param_1);
  return;
}



int fn_0023a524(undefined4 *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int *local_78;
  int *local_74;
  int *local_28;
  
  *param_1 = &PTR_FUN_0081d144;
  iVar3 = fn_00101a1c(param_1 + 1,&LAB_001ad770,0xc,3);
  iVar8 = 0;
  do {
    iVar4 = iVar3 + -4 + iVar8 * 0xc;
    uVar5 = fn_0023a3b4(&local_78);
    piVar6 = *(int **)(iVar4 + 8);
    piVar7 = *(int **)(iVar4 + 4);
    uVar1 = ((int)piVar6 - (int)piVar7) / 0x50;
    if (uVar1 < 0x8a) {
      fn_0078b278((undefined4 *)(iVar4 + 4),piVar6,0x8a - uVar1,uVar5);
    }
    else if ((0x8a < uVar1) && (local_28 = piVar6, piVar2 = piVar7 + 0xac8, piVar7 != piVar6)) {
      for (; piVar2 != piVar6; piVar2 = piVar2 + 0x14) {
        if (piVar2[1] != 0) {
          fn_002d7638();
          if ((int *)piVar2[1] != (int *)0x0) {
            (**(code **)(*(int *)piVar2[1] + 4))();
          }
          piVar2[1] = 0;
        }
        if (*piVar2 != 0) {
          fn_005f45d0();
          if ((int *)*piVar2 != (int *)0x0) {
            (**(code **)(*(int *)*piVar2 + 4))();
          }
          *piVar2 = 0;
        }
      }
      *(int *)(iVar4 + 8) =
           *(int *)(iVar4 + 8) + (((int)local_28 - (int)(piVar7 + 0xac8)) / 0x50) * -0x50;
    }
    if (local_74 != (int *)0x0) {
      fn_002d7638();
      if (local_74 != (int *)0x0) {
        (**(code **)(*local_74 + 4))();
      }
      local_74 = (int *)0x0;
    }
    if (local_78 != (int *)0x0) {
      fn_005f45d0();
      if (local_78 != (int *)0x0) {
        (**(code **)(*local_78 + 4))();
      }
      local_78 = (int *)0x0;
    }
    iVar8 = iVar8 + 1;
  } while (iVar8 < 3);
  return iVar3 + -4;
}



undefined4 * fn_0023a3b4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  *param_1 = 0;
  param_1[1] = 0;
  uVar5 = 0x3f800000;
  uVar4 = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c6300), iVar3 != 0)) {
    DAT_008f9e38 = uVar5;
    DAT_008f9e3c = uVar4;
    DAT_008f9e40 = uVar4;
    DAT_008f9e44 = uVar4;
    DAT_008f9e48 = uVar4;
    DAT_008f9e4c = uVar5;
    DAT_008f9e50 = uVar4;
    DAT_008f9e54 = uVar4;
    DAT_008f9e58 = uVar4;
    DAT_008f9e5c = uVar4;
    DAT_008f9e60 = uVar5;
    DAT_008f9e64 = uVar4;
  }
  fn_001781f0(param_1 + 2,&DAT_008f9e38);
  param_1[0xe] = uVar5;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[0xf] = DAT_008f9e2c;
  param_1[0x10] = uVar1;
  param_1[0x11] = uVar2;
  param_1[0x12] = uVar4;
  *(undefined1 *)(param_1 + 0x13) = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c6300), iVar3 != 0)) {
    DAT_008f9e38 = uVar5;
    DAT_008f9e3c = uVar4;
    DAT_008f9e40 = uVar4;
    DAT_008f9e44 = uVar4;
    DAT_008f9e48 = uVar4;
    DAT_008f9e4c = uVar5;
    DAT_008f9e50 = uVar4;
    DAT_008f9e54 = uVar4;
    DAT_008f9e58 = uVar4;
    DAT_008f9e5c = uVar4;
    DAT_008f9e60 = uVar5;
    DAT_008f9e64 = uVar4;
  }
  fn_001781f0(param_1 + 2,&DAT_008f9e38);
  return param_1;
}



void fn_0023a264(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0x3f800000;
  iVar3 = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c6300), iVar2 != 0)) {
    DAT_008f9e38 = iVar4;
    DAT_008f9e3c = iVar3;
    DAT_008f9e40 = iVar3;
    DAT_008f9e44 = iVar3;
    DAT_008f9e48 = iVar3;
    DAT_008f9e4c = iVar4;
    DAT_008f9e50 = iVar3;
    DAT_008f9e54 = iVar3;
    DAT_008f9e58 = iVar3;
    DAT_008f9e5c = iVar3;
    DAT_008f9e60 = iVar4;
    DAT_008f9e64 = iVar3;
  }
  fn_001781f0(param_1 + 2,&DAT_008f9e38);
  if (param_1[1] != 0) {
    fn_002d7638();
    if ((int *)param_1[1] != (int *)0x0) {
      (**(code **)(*(int *)param_1[1] + 4))();
    }
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    fn_005f45d0();
    if ((int *)*param_1 != (int *)0x0) {
      (**(code **)(*(int *)*param_1 + 4))();
    }
    *param_1 = 0;
  }
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar2 = fn_00303afc(&DAT_008c62fc), iVar2 != 0)) {
    DAT_008f9e2c = iVar3;
    DAT_008f9e30 = iVar3;
    DAT_008f9e34 = iVar3;
  }
  iVar1 = DAT_008f9e34;
  iVar2 = DAT_008f9e30;
  param_1[0xf] = DAT_008f9e2c;
  param_1[0x10] = iVar2;
  param_1[0x11] = iVar1;
  param_1[0x12] = iVar3;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xe] = iVar4;
  return;
}



void fn_0023a24c(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  piVar2 = (int *)(*(int *)(param_1 + param_2 * 0xc + 4) + param_3 * 0x50);
  iVar5 = 0x3f800000;
  iVar4 = 0;
  if ((((byte)DAT_008c6300 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c6300), iVar3 != 0)) {
    DAT_008f9e38 = iVar5;
    DAT_008f9e3c = iVar4;
    DAT_008f9e40 = iVar4;
    DAT_008f9e44 = iVar4;
    DAT_008f9e48 = iVar4;
    DAT_008f9e4c = iVar5;
    DAT_008f9e50 = iVar4;
    DAT_008f9e54 = iVar4;
    DAT_008f9e58 = iVar4;
    DAT_008f9e5c = iVar4;
    DAT_008f9e60 = iVar5;
    DAT_008f9e64 = iVar4;
  }
  fn_001781f0(piVar2 + 2,&DAT_008f9e38);
  if (piVar2[1] != 0) {
    fn_002d7638();
    if ((int *)piVar2[1] != (int *)0x0) {
      (**(code **)(*(int *)piVar2[1] + 4))();
    }
    piVar2[1] = 0;
  }
  if (*piVar2 != 0) {
    fn_005f45d0();
    if ((int *)*piVar2 != (int *)0x0) {
      (**(code **)(*(int *)*piVar2 + 4))();
    }
    *piVar2 = 0;
  }
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = iVar4;
    DAT_008f9e30 = iVar4;
    DAT_008f9e34 = iVar4;
  }
  iVar1 = DAT_008f9e34;
  iVar3 = DAT_008f9e30;
  piVar2[0xf] = DAT_008f9e2c;
  piVar2[0x10] = iVar3;
  piVar2[0x11] = iVar1;
  piVar2[0x12] = iVar4;
  *(undefined1 *)(piVar2 + 0x13) = 0;
  piVar2[0xe] = iVar5;
  return;
}



int fn_0023a174(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 0;
  do {
    if (*(int *)(*(int *)(param_1 + param_2 * 0xc + 4) + iVar4 * 0x50) == 0) {
      if (iVar4 < 0) {
        return iVar4;
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + param_2 * 0xc + 4) + iVar4 * 0x50);
      iVar1 = fn_00145b00(8,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = fn_005f4c7c();
      }
      *puVar5 = uVar2;
      fn_005f46b4(uVar2,param_3,param_4);
      iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = fn_002d7a04();
      }
      puVar5[1] = uVar2;
      uVar2 = fn_006ed004(*puVar5);
      uVar3 = fn_006ed010(*puVar5);
      fn_002d7688(puVar5[1],uVar3,uVar2);
      return iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 10);
  return -1;
}



int fn_0023a04c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar4 = 10;
  do {
    if (*(int *)(*(int *)(param_1 + param_2 * 0xc + 4) + iVar4 * 0x50) == 0) {
      if (iVar4 < 0) {
        return iVar4;
      }
      puVar5 = (undefined4 *)(*(int *)(param_1 + param_2 * 0xc + 4) + iVar4 * 0x50);
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      iVar1 = fn_00145b00(8,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = fn_005f4c7c();
      }
      *puVar5 = uVar2;
      fn_005f46b4(uVar2,param_3,&DAT_008f9e2c);
      iVar1 = fn_00145b00(0x10,&DAT_00812c8c);
      uVar2 = 0;
      if (iVar1 != 0) {
        uVar2 = fn_002d7a04();
      }
      puVar5[1] = uVar2;
      uVar2 = fn_006ed004(*puVar5);
      uVar3 = fn_006ed010(*puVar5);
      fn_002d7688(puVar5[1],uVar3,uVar2);
      return iVar4;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 0x8a);
  return -1;
}



void fn_0023a030(int param_1,int param_2,int param_3,undefined1 param_4)

{
  *(undefined1 *)(*(int *)(param_1 + param_2 * 0xc + 4) + param_3 * 0x50 + 0x4c) = param_4;
  return;
}



void fn_00239ffc(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  float in_s0;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  param_1 = param_1 + param_2 * 0xc;
  iVar1 = *(int *)(param_1 + 4) + param_3 * 0x50;
  *(undefined4 *)(iVar1 + 0x3c) = *param_4;
  *(undefined4 *)(iVar1 + 0x40) = uVar2;
  *(undefined4 *)(iVar1 + 0x44) = uVar3;
  *(float *)(*(int *)(param_1 + 4) + param_3 * 0x50 + 0x48) = in_s0 * in_s0;
  return;
}


