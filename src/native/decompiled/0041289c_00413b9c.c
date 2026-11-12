#include "0041289c_00413b9c.h"



void fn_00413b9c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894494) goto LAB_00413be0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00413be0:
  *(undefined4 **)(param_1 + 0x100) = puVar2;
  fn_00581bb0(param_1);
  return;
}



void fn_00413b2c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584(param_2,0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,param_3,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



undefined4 * fn_004139f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)fn_00397f10();
  puVar4 = (undefined4 *)0x0;
  *puVar1 = &DAT_00838d10;
  puVar1[0x34] = 0;
  puVar1[0x35] = 0;
  puVar1[0x36] = 0;
  *(undefined1 *)(puVar1 + 0x37) = 0;
  *(undefined1 *)((int)puVar1 + 0xdd) = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar2 = (undefined4 *)fn_001f7510(puVar1,0x48);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008942d0) goto LAB_00413a68;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00413a68:
  puVar1[0x34] = puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(puVar1,0x3e);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894020) {
        puVar4 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar1[0x35] = puVar4;
  return puVar1;
}



void fn_00413544(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(DAT_00897804 + 0x28);
  iVar1 = fn_006ba284(param_1);
  uVar2 = fn_006b2a74(uVar2,*(undefined4 *)(*(int *)(param_1 + 0xe0) + (param_2 + iVar1 * 8) * 4));
  fn_003dd770(*(undefined4 *)(param_1 + 0xd4),uVar2);
                    /* WARNING: Subroutine does not return */
  fn_002c3de4(param_1,param_2);
}



void fn_004134d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00689930(param_1,0,0);
  fn_006899f4(param_1,0x6c,0);
  fn_0068ab44(param_1,0x100094c);
  *(undefined1 *)(param_1 + 0xdd) = 0;
  local_10 = 0x8c000000;
  fn_00163988(DAT_00897810,&local_10,1);
  fn_005b2fc0(*(undefined4 *)(param_1 + 0xd8));
  return;
}



void fn_004134b0(void)

{
                    /* WARNING: Subroutine does not return */
  fn_006ba250();
}



void fn_00412d9c(void)

{
  fn_00397db0();
  fn_001218d4(DAT_00897800,DAT_00898794);
  fn_001218d4(DAT_00897800,DAT_0089878c);
  return;
}



void fn_00412d0c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00838b84;
  uVar2 = param_1[0x38];
  uVar3 = param_1[0x39];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 2;
      } while (uVar1 != uVar3);
    }
    param_1[0x39] = uVar3 - (uVar3 - uVar2 & 0xfffffffe);
  }
  uVar3 = uVar2;
  if ((uint)param_1[0x39] < uVar2) {
    do {
      uVar3 = uVar3 + 2;
    } while (uVar3 != param_1[0x39]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x3a] - uVar2) >> 1,0);
  *param_1 = &PTR_LAB_008424d4;
  if ((int *)param_1[0x33] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x33] + 4))();
  }
  fn_00411d6c(param_1);
  return;
}



undefined4 * fn_00412cc8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00581838();
  *puVar1 = &PTR_FUN_00838b84;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  return puVar1;
}



void fn_00412bbc(int param_1,int param_2)

{
  uint uVar1;
  ushort uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  
  iVar3 = fn_006ba284();
  uVar6 = param_2 + iVar3 * 8;
  uVar1 = *(int *)(param_1 + 0xe4) - *(int *)(param_1 + 0xe0) >> 1;
  if (uVar1 <= uVar6) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar6,uVar1);
  }
  uVar2 = *(ushort *)(*(int *)(param_1 + 0xe0) + uVar6 * 2);
  iVar3 = fn_006e9308(param_1,(int)(short)uVar2);
  if (iVar3 == 0) {
    fn_00689efc(param_1,0x90,0);
    return;
  }
  puVar4 = (undefined4 *)fn_001f74d8(param_1,0x41);
  if (puVar4 != (undefined4 *)0x0) {
    puVar5 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar5 == &DAT_00893a00) goto LAB_00412c74;
      puVar5 = (undefined4 *)*puVar5;
    } while (puVar5 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_00412c74:
  puVar4[0x158] = 0;
  puVar4[0x159] = 0;
  puVar4[0x156] = 1;
  puVar4[0x157] = (uint)uVar2;
  fn_00689efc(param_1,0x41,0);
  return;
}



void fn_00412b00(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    if (param_1[0x34] < 1) {
      iVar2 = param_1[0x34] + 1;
    }
    else {
      iVar2 = 0;
    }
    param_1[0x34] = iVar2;
  }
  uVar1 = (**(code **)(*param_1 + 0x168))(param_1);
  fn_0022e4c4(param_1 + 0x38,uVar1);
  (**(code **)(*param_1 + 0x15c))(param_1);
  (**(code **)(*param_1 + 0x164))(param_1);
  if (param_3 == 0) {
    fn_0068ab44(param_1,0x1000950);
    return;
  }
  return;
}



void fn_00412a4c(int *param_1,int param_2)

{
  undefined1 uVar1;
  short sVar2;
  int iVar3;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uVar1 = *(undefined1 *)(param_1[0x2c] + 0x28);
  sVar2 = (**(code **)(*param_1 + 0x17c))(param_1);
  iVar3 = fn_001d5844((int)sVar2,uVar1);
  if (param_2 == 0) {
    iVar3 = *(int *)(param_1[0x33] + 0x3c) * iVar3;
  }
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (0 < iVar3) {
    fn_00101a50(&local_28,0xc,&DAT_00412af8);
  }
  fn_0031b78c(param_1,param_1[0x35] % 8,4,&local_28);
  return;
}



void fn_0041289c(int *param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint local_28;
  
  iVar1 = fn_006ba284();
  uVar5 = param_2 + iVar1 * 8;
  uVar3 = param_1[0x39] - param_1[0x38] >> 1;
  local_28 = param_4;
  if (uVar3 <= uVar5) {
    fn_002ff628(9,&DAT_008c7674,&DAT_008c7674,uVar5);
    local_28 = uVar3;
  }
  iVar6 = (int)*(short *)(param_1[0x38] + uVar5 * 2);
  iVar1 = fn_005c1ab0(param_1,iVar6);
  iVar2 = fn_00660fe0(iVar6);
  uVar3 = fn_001d5844(iVar6,*(undefined1 *)(param_1[0x2c] + 0x28));
  if (iVar2 == iVar1) {
    *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
    uVar4 = fn_0022f584((char *)&DAT_00412a18,0);
    (**(code **)(*param_1 + 0x13c))(param_1,uVar4,0,3);
  }
  else {
    uVar5 = fn_002b0af8(*(undefined4 *)(DAT_00897804 + 100));
    if (uVar5 < uVar3) {
      *(undefined4 *)(param_1[0x17] + 0x38) = 0x100094d;
      uVar4 = fn_0022f584((char *)&DAT_00412a30,0);
      (**(code **)(*param_1 + 0x13c))(param_1,uVar4,0,3);
    }
    else {
      iVar1 = fn_006e9308(param_1,iVar6);
      if (iVar1 == 0) {
        fn_005c2070(param_1,param_2);
      }
      else {
        *(int *)(param_1[0x2c] + 8) = iVar6;
      }
      fn_0068ab44(param_1,0x100094b);
    }
  }
  fn_00289d5c(*(undefined4 *)(DAT_00897804 + 0x24),(int)(short)param_1[0x3b]);
  fn_002c32c4(param_1,param_2,0,local_28);
  return;
}


