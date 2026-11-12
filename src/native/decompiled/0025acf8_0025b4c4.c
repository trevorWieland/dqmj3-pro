#include "0025acf8_0025b4c4.h"



void fn_0025b4c4(int param_1,int param_2)

{
  int *piVar1;
  int local_8 [2];
  
  local_8[0] = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x28) + param_2;
  local_8[1] = 999;
  piVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    piVar1 = local_8;
  }
  *(short *)(*(int *)(param_1 + 4) + 0x28) = (short)*piVar1;
  return;
}



void fn_0025b480(int param_1)

{
  undefined4 *puVar1;
  float in_s0;
  undefined4 local_10;
  undefined4 local_c [3];
  
  local_10 = 0x497423f0;
  puVar1 = &local_10;
  if (in_s0 <= 999999.0) {
    puVar1 = local_c;
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x254) = *puVar1;
  return;
}



void fn_0025b440(int param_1,int param_2)

{
  int *piVar1;
  int local_8 [2];
  
  local_8[0] = (uint)*(ushort *)(*(int *)(param_1 + 4) + 0x2c) + param_2;
  local_8[1] = 999;
  piVar1 = local_8 + 1;
  if (local_8[0] < 1000) {
    piVar1 = local_8;
  }
  *(short *)(*(int *)(param_1 + 4) + 0x2c) = (short)*piVar1;
  return;
}



void fn_0025b3bc(int param_1,short param_2)

{
  short *psVar1;
  short local_c [6];
  
  psVar1 = local_c;
  local_c[0] = param_2 + *(short *)(*(int *)(param_1 + 4) + 0x274);
  *(short *)(*(int *)(param_1 + 4) + 0x274) = local_c[0];
  if (local_c[0] < 0) {
    psVar1 = local_c + 2;
  }
  local_c[2] = 0;
  local_c[4] = 999;
  if (999 < *psVar1) {
    psVar1 = local_c + 4;
  }
  *(short *)(*(int *)(param_1 + 4) + 0x274) = *psVar1;
  return;
}



int fn_0025b304(int param_1)

{
  int *piVar1;
  int *piVar2;
  int local_10 [2];
  int local_8 [2];
  
  piVar1 = local_10;
  local_10[0] = 9999999;
  local_8[0] = *(int *)(*(int *)(param_1 + 4) + 0xcc) << 1;
  local_8[1] = 0;
  if (local_8[0] < 0) {
    piVar2 = local_8 + 1;
  }
  else {
    piVar2 = local_8;
  }
  if (*piVar2 < 10000000) {
    if (local_8[0] < 0) {
      piVar1 = local_8 + 1;
    }
    else {
      piVar1 = local_8;
    }
  }
  return *piVar1;
}



void fn_0025b21c(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 auStack_38 [2];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  local_28 = 0;
  uStack_24 = 0;
  fn_00114248(&local_50);
  local_28 = local_50;
  uStack_24 = local_4c;
  uVar1 = fn_0011a314(&local_28);
  uVar2 = fn_0011a3c4(&local_28);
  uVar3 = fn_0011a36c(&local_28);
  iVar4 = fn_00114150(uVar3,uVar2,uVar1);
  fn_0010b2b4(&local_40,&uStack_3c,auStack_38,iVar4 + param_3);
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  fn_00123d00(&local_30,local_40,uStack_3c,auStack_38[0]);
  local_20 = local_30;
  uStack_1c = uStack_2c;
  uVar5 = fn_00691514(&local_20);
  *(undefined8 *)(*(int *)(param_1 + 4) + param_2 * 8 + 0x280) = uVar5;
  return;
}



void fn_0025b20c(int param_1,undefined4 param_2)

{
  fn_0017821c(*(int *)(param_1 + 4) + 100,param_2,0x60);
  return;
}



void fn_0025b13c(undefined4 *param_1)

{
  *param_1 = &DAT_0081d830;
  if ((int *)param_1[0x37] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x37] + 4))();
  }
  fn_00100414(param_1 + 1,&LAB_0025b128,0x38,2);
  fn_002feef8(param_1);
  return;
}



void fn_0025af84(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auStack_38 [12];
  undefined1 auStack_2c [12];
  
  if (*(int *)(param_1 + 0xe0) < 1) {
    fn_00117984();
    fn_0010fa20();
    uVar1 = fn_00117668();
    uVar2 = fn_00118290();
    iVar6 = 0;
    do {
      while( true ) {
        uVar8 = (&DAT_007ce624)[iVar6];
        iVar7 = param_1 + iVar6 * 0x38;
        uVar3 = fn_001287b4();
        uVar3 = fn_0011c184(uVar8,uVar3,0x80,5);
        *(undefined4 *)(iVar7 + 4) = uVar3;
        uVar3 = fn_00145ac0();
        fn_00173a34(iVar7 + 8,uVar3);
        fn_00185320(iVar7 + 8);
        if (iVar6 != 0) break;
        uVar3 = *(undefined4 *)(iVar7 + 0xc);
        uVar8 = *(undefined4 *)(iVar7 + 0x10);
        uVar9 = *(undefined4 *)(iVar7 + 0x14);
        uVar10 = *(undefined4 *)(iVar7 + 0x18);
        uVar11 = *(undefined4 *)(iVar7 + 0x1c);
        uVar12 = *(undefined4 *)(iVar7 + 0x20);
        uVar13 = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(param_1 + 0x78) = uVar3;
        *(undefined4 *)(param_1 + 0x7c) = uVar8;
        *(undefined4 *)(param_1 + 0x80) = uVar9;
        *(undefined4 *)(param_1 + 0x84) = uVar10;
        *(undefined4 *)(param_1 + 0x88) = uVar11;
        *(undefined4 *)(param_1 + 0x8c) = uVar12;
        *(undefined4 *)(param_1 + 0x90) = uVar13;
        uVar3 = *(undefined4 *)(iVar7 + 0x2c);
        uVar8 = *(undefined4 *)(iVar7 + 0x30);
        uVar9 = *(undefined4 *)(iVar7 + 0x34);
        uVar10 = *(undefined4 *)(iVar7 + 0x38);
        *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(iVar7 + 0x28);
        *(undefined4 *)(param_1 + 0x98) = uVar3;
        *(undefined4 *)(param_1 + 0x9c) = uVar8;
        *(undefined4 *)(param_1 + 0xa0) = uVar9;
        iVar6 = 1;
        *(undefined4 *)(param_1 + 0xa4) = uVar10;
      }
      if (iVar6 == 1) {
        uVar3 = *(undefined4 *)(iVar7 + 0xc);
        uVar8 = *(undefined4 *)(iVar7 + 0x10);
        uVar9 = *(undefined4 *)(iVar7 + 0x14);
        uVar10 = *(undefined4 *)(iVar7 + 0x18);
        uVar11 = *(undefined4 *)(iVar7 + 0x1c);
        uVar12 = *(undefined4 *)(iVar7 + 0x20);
        uVar13 = *(undefined4 *)(iVar7 + 0x24);
        *(undefined4 *)(param_1 + 0xa8) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(param_1 + 0xac) = uVar3;
        *(undefined4 *)(param_1 + 0xb0) = uVar8;
        *(undefined4 *)(param_1 + 0xb4) = uVar9;
        *(undefined4 *)(param_1 + 0xb8) = uVar10;
        *(undefined4 *)(param_1 + 0xbc) = uVar11;
        *(undefined4 *)(param_1 + 0xc0) = uVar12;
        *(undefined4 *)(param_1 + 0xc4) = uVar13;
        uVar3 = *(undefined4 *)(iVar7 + 0x2c);
        uVar8 = *(undefined4 *)(iVar7 + 0x30);
        uVar9 = *(undefined4 *)(iVar7 + 0x34);
        uVar10 = *(undefined4 *)(iVar7 + 0x38);
        *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar7 + 0x28);
        *(undefined4 *)(param_1 + 0xcc) = uVar3;
        *(undefined4 *)(param_1 + 0xd0) = uVar8;
        *(undefined4 *)(param_1 + 0xd4) = uVar9;
        *(undefined4 *)(param_1 + 0xd8) = uVar10;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
    piVar4 = (int *)fn_005e9d6c(uVar2);
    piVar5 = *(int **)(param_1 + 0xdc);
    if (piVar5 != piVar4) {
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 4))(piVar5);
      }
      *(int **)(param_1 + 0xdc) = piVar4;
    }
    fn_001a0b50(auStack_2c,param_1 + 0xa8,0);
    fn_001a0b50(auStack_38,param_1 + 0x74,0);
    fn_005e9800(*(undefined4 *)(param_1 + 0xdc),auStack_38,auStack_2c,uVar2);
    fn_005e9894(*(undefined4 *)(param_1 + 0xdc),uVar1,0x80,0x100,1,uVar2);
    fn_005eec08(*(undefined4 *)(param_1 + 0xdc),uVar2);
    *(undefined4 *)(param_1 + 0xe0) = 1;
  }
  else {
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
  }
  return;
}



void fn_0025adc8(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  fn_00304084();
  return;
}



void fn_0025adb4(int param_1)

{
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  fn_00304018();
  return;
}



undefined4 fn_0025ad34(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar2 = fn_00145b00(0x20,&DAT_00812c8c);
    piVar3 = (int *)0x0;
    if (iVar2 != 0) {
      piVar3 = (int *)fn_00304540();
    }
    piVar4 = *(int **)(param_1 + 0x28);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))(piVar4);
      }
      *(int **)(param_1 + 0x28) = piVar3;
    }
    fn_003042bc(*(undefined4 *)(param_1 + 0x28));
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_0025acf8(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    fn_0030417c();
    if (*(int **)(param_1 + 0x28) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x28) + 4))();
      *(undefined4 *)(param_1 + 0x28) = 0;
    }
  }
  return;
}


