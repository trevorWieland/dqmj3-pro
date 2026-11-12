#include "00319a94_0031a88c.h"



void fn_0031a88c(undefined4 *param_1)

{
  *param_1 = &DAT_00822e10;
  fn_002d16e4(param_1);
  if ((int *)param_1[0x19] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x19] + 4))();
  }
  fn_002d1760(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_0031a79c(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_48 [52];
  
  *param_1 = &DAT_00822e00;
  if ((int)param_1[1] < 2) {
    if ((int *)param_1[2] != (int *)0x0) {
      (**(code **)(*(int *)param_1[2] + 4))();
      param_1[2] = 0;
    }
    fn_001433d8(param_1 + 4);
    puVar1 = (undefined4 *)fn_001283fc(auStack_48);
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    uVar5 = puVar1[4];
    uVar6 = puVar1[5];
    uVar7 = puVar1[6];
    uVar8 = puVar1[7];
    param_1[4] = *puVar1;
    param_1[5] = uVar2;
    param_1[6] = uVar3;
    param_1[7] = uVar4;
    param_1[8] = uVar5;
    param_1[9] = uVar6;
    param_1[10] = uVar7;
    param_1[0xb] = uVar8;
    uVar2 = puVar1[9];
    uVar3 = puVar1[10];
    uVar4 = puVar1[0xb];
    uVar5 = puVar1[0xc];
    param_1[0xc] = puVar1[8];
    param_1[0xd] = uVar2;
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar4;
    param_1[0x10] = uVar5;
    if (param_1[3] != 0) {
      fn_0012d73c();
      param_1[3] = 0;
    }
    param_1[1] = 0;
  }
  else {
    param_1[1] = param_1[1] + -1;
  }
  if ((int *)param_1[2] != (int *)0x0) {
    (**(code **)(*(int *)param_1[2] + 4))();
  }
  return param_1;
}



void fn_0031a6b0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  undefined1 auStack_20 [16];
  
  if (*(int *)(param_1 + 4) < 1) {
    *(undefined4 *)(param_1 + 4) = 1;
    uVar1 = fn_001287b4();
    uVar1 = fn_0011c184(L"rom:/data/G3dModel/ColorTone.bch",uVar1,0x80,5);
    *(undefined4 *)(param_1 + 0xc) = uVar1;
    uVar1 = fn_00145ac0();
    fn_00173a34(param_1 + 0x10,uVar1);
    fn_00185320(param_1 + 0x10);
    fn_00117984();
    fn_0010fa20();
    uVar1 = fn_00117668();
    uVar2 = fn_00118290();
    fn_001a0b50(auStack_20,param_1 + 0x10,0);
    piVar3 = (int *)fn_005f022c(auStack_20,uVar1,uVar2);
    piVar4 = *(int **)(param_1 + 8);
    if (piVar4 != piVar3) {
      if (piVar4 != (int *)0x0) {
        (**(code **)(*piVar4 + 4))();
      }
      *(int **)(param_1 + 8) = piVar3;
    }
  }
  else {
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  return;
}



undefined4 * fn_0031a690(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = &DAT_00822df0;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = 0;
  return param_1;
}



void fn_0031a468(int param_1)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = *(int *)(param_1 + 0xc) * 8;
  pcVar2 = *(code **)(&DAT_008922c8 + iVar1);
  if ((*(uint *)(&DAT_008922cc + iVar1) & 1) != 0) {
    pcVar2 = *(code **)(pcVar2 + *(int *)(param_1 + ((int)*(uint *)(&DAT_008922cc + iVar1) >> 1)));
  }
  (*pcVar2)();
  *(uint *)(param_1 + 0xc) = (*(int *)(param_1 + 0xc) + 1U) % 0x12;
  return;
}



void fn_0031a3d4(undefined4 param_1)

{
  fn_0031a55c(param_1,0xe6,0xe7,fn_00610ad4);
  fn_0031a55c(param_1,0xe8,0xe8,&LAB_0061092c);
  return;
}



void fn_0031a2e4(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  
  fn_001f60a8(*(undefined4 *)(param_1 + 4));
  iVar1 = fn_00154ac8(0x302);
  if (iVar1 == 0) {
    fn_00112e70(*(undefined4 *)(DAT_00897804 + 8),param_2);
  }
  uVar2 = fn_006a7ae8(param_2);
  if (2 < uVar2) {
    return;
  }
  if (uVar2 == 0) {
    fn_0031a55c(param_1,0x55,0x57,fn_00610d2c);
  }
  else if (uVar2 == 1) {
    fn_0031a55c(param_1,0x58,0x5a,fn_00610d5c);
  }
  else if (uVar2 == 2) {
    fn_0031a55c(param_1,0x5b,0x5d,fn_00610c34);
  }
  fn_0031a55c(param_1,0x5e,0x60,fn_00610b34);
  return;
}



void fn_0031a244(undefined4 param_1)

{
  fn_0031a55c(param_1,0xcb,0xd0,&DAT_00610d8c);
  fn_0031a55c(param_1,199,0xca,&LAB_0061092c);
  fn_0031a55c(param_1,0xe9,0xe9,&LAB_0061092c);
  fn_0031a55c(param_1,0xee,0xee,&LAB_0061092c);
  fn_0031a55c(param_1,0xd7,0xd7,&LAB_0061092c);
  fn_0031a55c(param_1,0xd2,0xd2,&LAB_0061092c);
  fn_0031a55c(param_1,0xe3,0xe5,fn_00610a80);
  return;
}



void fn_00319d5c(undefined4 *param_1)

{
  *param_1 = &DAT_00822db0;
  fn_002feef8(param_1[2]);
  if (param_1[1] != 0) {
    fn_002b07ac();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



undefined4 * fn_00319ce0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_0069c2c8();
  *puVar1 = &DAT_00822db0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = param_2;
  *(undefined1 *)(puVar1 + 4) = 0;
  *(undefined1 *)((int)puVar1 + 0x11) = 0;
  *(undefined1 *)((int)puVar1 + 0x12) = 0;
  puVar2 = (undefined4 *)fn_00145b00(4,&DAT_00812c8c);
  if (puVar2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    *puVar2 = &DAT_0082a7e0;
  }
  if ((undefined4 *)puVar1[2] != puVar2) {
    fn_002feef8();
    puVar1[2] = puVar2;
  }
  return puVar1;
}



undefined4 fn_00319c80(int param_1)

{
  if (*(char *)(param_1 + 0x12) != '\0') {
    *(undefined1 *)(param_1 + 0x12) = 0;
    if (*(char *)(param_1 + 0x10) != '\0') {
      *(undefined1 *)(param_1 + 0x10) = 0;
      fn_002b0748(*(undefined4 *)(param_1 + 4));
      if (*(int *)(param_1 + 4) != 0) {
        fn_002b07ac();
        fn_002feef8();
        *(undefined4 *)(param_1 + 4) = 0;
      }
    }
    fn_00319a94(param_1);
  }
  return 1;
}



void fn_00319a94(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    *(undefined1 *)(param_1 + 0x10) = 1;
    iVar1 = fn_003415b0();
    iVar3 = 0;
    uVar5 = 0x3f800000;
    uVar4 = 0x43480000;
    piVar2 = (int *)(param_1 + 4);
    if (iVar1 == 0) {
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0x3f000000;
      local_60 = 0;
      local_5c = 0;
      local_58 = 0x3f800000;
      local_6c = 0;
      local_68 = 0;
      local_64 = 0;
      local_78 = 0;
      local_74 = 0x43480000;
      local_70 = 0;
      fn_002b0814(&local_7c,&local_78,&local_6c,&local_60,&local_50,*(undefined4 *)(param_1 + 0xc))
      ;
      iVar3 = local_7c;
      local_7c = 0;
      iVar1 = local_7c;
      if (*piVar2 != iVar3) {
        if (*piVar2 != 0) {
          fn_002b07ac();
          fn_002feef8();
        }
        *piVar2 = iVar3;
        iVar1 = local_7c;
      }
    }
    else {
      local_40 = 0;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0x3f000000;
      fn_00340eb4();
      fn_00340eb4();
      fn_00340eb4();
      fn_00340eb4();
      local_68 = iVar3;
      local_64 = uVar4;
      local_60 = iVar3;
      local_5c = iVar3;
      local_58 = iVar3;
      local_54 = iVar3;
      local_50 = iVar3;
      local_4c = iVar3;
      local_48 = uVar5;
      fn_002b0814(&local_6c,&local_68,&local_5c,&local_50,&local_40,*(undefined4 *)(param_1 + 0xc))
      ;
      iVar3 = local_6c;
      local_6c = 0;
      iVar1 = local_6c;
      if (*piVar2 != iVar3) {
        if (*piVar2 != 0) {
          fn_002b07ac();
          fn_002feef8();
        }
        *piVar2 = iVar3;
        iVar1 = local_6c;
      }
    }
    if (iVar1 != 0) {
      fn_002b07ac();
      fn_002feef8();
    }
    *(undefined4 *)(**(int **)(param_1 + 4) + 0xc) = *(undefined4 *)(param_1 + 8);
  }
  return;
}


