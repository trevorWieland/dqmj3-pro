#include "00362de4_00363360.h"



void fn_00363360(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_008273e4;
  if ((int *)param_1[0x3d] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3d] + 4))();
  }
  param_1[0x3d] = 0;
  fn_00397a78(param_1);
  return;
}



undefined4 * fn_003632b0(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_FUN_008273e4;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  *(undefined1 *)(puVar1 + 0x3f) = 0;
  iVar2 = fn_00145b00(0x14,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_002ddb0c();
  }
  puVar1[0x3d] = uVar3;
  fn_002b0d18(uVar3,0,1);
  return puVar1;
}



bool fn_003631a0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  bVar3 = false;
  iVar1 = fn_00660e44((int)(short)param_1[0x3e]);
  if (iVar1 == 0) {
    fn_002297bc(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_1[0x3e],1);
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_1[0x3e]);
    bVar3 = iVar1 == 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    uVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_1[0x3e]);
    fn_0018a618(&local_38,0x10,0xf,&DAT_0036311c,uVar2);
    (**(code **)(*param_1 + 0x13c))(param_1,0,1,&local_38);
    fn_0068ab44(param_1,0x100094b);
  }
  else {
    fn_0068ab44(param_1,0x100094d);
  }
  return bVar3;
}



void fn_0036313c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int extraout_r1;
  undefined4 uVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  uint auStack_24 [2];
  
  (**(code **)(*(int *)param_1[0x27] + 0x30))((int *)param_1[0x27],0,auStack_24);
  uVar6 = 0;
  iVar4 = param_1[0x1f] - param_1[0x1e] >> 2;
  iVar7 = *(int *)(param_1[0x27] + 0xe4);
  if (0 < iVar4) {
    do {
      uVar1 = param_1[0x1f] - param_1[0x1e] >> 2;
      if (uVar1 <= uVar6) {
        fn_002ff628(9,&DAT_008c7653,&DAT_008c7653,uVar6,uVar1);
      }
      piVar2 = *(int **)(param_1[0x1e] + uVar6 * 4);
      if (param_1[0x2b] ==
          (param_1[0x1f] - param_1[0x1e] >> 2) * *(int *)(param_1[0x27] + 0xcc) + uVar6) {
        fn_002b20a4(param_1[0x25]);
      }
      else {
        if (uVar6 == auStack_24[0]) {
          uVar5 = 2;
        }
        else {
          uVar5 = 1;
        }
        fn_0031b3c4(piVar2,uVar5);
      }
      iVar3 = iVar4 * *(int *)(param_1[0x27] + 0xcc) + uVar6;
      if ((param_1[0x2b] == iVar3) || ((0 < iVar7 && (iVar7 <= iVar3)))) {
        if (piVar2[0xd] != 0) {
          fn_0031b474(piVar2,0);
        }
        (**(code **)(*piVar2 + 0x20))(piVar2,0);
      }
      uVar6 = uVar6 + 1;
    } while ((int)uVar6 < iVar4);
  }
  iVar4 = param_1[0x2b];
  if (*(int *)(param_1[0x27] + 0xcc) == *(int *)(param_1[0x27] + 200) + -1) {
    if (iVar4 != -1) {
      fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
      (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],1);
      iVar4 = (**(code **)(*(int *)param_1[0x25] + 0x1c))();
      if (iVar4 != 0) {
        *(float *)(iVar4 + 0x20) =
             *(float *)(*(int *)(param_1[0x21] + extraout_r1 * 4) + 0x20) + 9.0;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xef | 0x10;
      }
      fn_001c9d80(param_1[0x27],extraout_r1);
      fn_001c9d44(param_1[0x27],extraout_r1,*(undefined4 *)(param_1[0x25] + 0x1c),0);
    }
  }
  else if (iVar4 != -1) {
    fn_00169f1c(iVar4,param_1[0x1f] - param_1[0x1e] >> 2);
    (**(code **)(*(int *)param_1[0x25] + 0x20))((int *)param_1[0x25],0);
    fn_001c9d80(param_1[0x27],extraout_r1_00);
    fn_001c9d44(param_1[0x27],extraout_r1_00,
                 *(undefined4 *)(*(int *)(param_1[0x1e] + extraout_r1_00 * 4) + 0x14),0);
  }
  (**(code **)(*param_1 + 0x134))(param_1);
  return;
}



void fn_0036312c(void)

{
  return;
}



void fn_00363128(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_0036308c(int *param_1,int param_2)

{
  int iVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_1[0x3e]);
  fn_0018a618(&local_30,0x10,0xf,&DAT_0036311c,iVar1 + param_2);
  (**(code **)(*param_1 + 0x13c))(param_1,0,1,&local_30);
  return;
}



void fn_0036307c(void)

{
  fn_0022f750((char *)&DAT_00363084);
  return;
}



void fn_0036302c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)*(short *)(param_1 + 0xf8));
  if (iVar2 == 0) {
    fn_00689824(param_1,0);
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  *(undefined1 *)(param_1 + 0xfc) = uVar1;
  return;
}



void fn_00362f9c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *local_10;
  
  local_10 = param_4;
  fn_0023097c(&local_10,(int)(short)param_1[0x3e],0);
  (**(code **)(*param_1 + 0x13c))(param_1,0,0,local_10);
  if (local_10 != &DAT_008f9cf4) {
    piVar1 = local_10 + -3;
    iVar2 = *piVar1;
    if ((iVar2 == -1) || ((piVar1 != &DAT_008f9ce8 && (*piVar1 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_00362e84(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951d8) goto LAB_00362ecc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00362ecc:
  *(undefined4 **)(param_1 + 0xe4) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2d);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008951dc) goto LAB_00362f10;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00362f10:
  *(undefined4 **)(param_1 + 0xe8) = puVar1;
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00891d0c) goto LAB_00362f5c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00362f5c:
  *(undefined4 **)(param_1 + 0xf0) = puVar1;
  *(undefined4 *)(param_1 + 0xf8) = puVar1[7];
  uVar3 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
  *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x20) = uVar3;
  return 1;
}



void fn_00362e24(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  bool bVar4;
  
  uVar1 = fn_006f6ab4();
  uVar2 = fn_006f6a5c(param_1);
  if ((uVar1 & 0x100000) == 0 || (uVar1 & 0x200000) == 0) {
    if ((uVar2 & 0x100000) == 0) {
      bVar4 = (uVar2 & 0x200000) != 0;
      if (bVar4) {
        uVar2 = *(uint *)(param_1 + 0xec);
      }
      if (!bVar4 || uVar2 == 0) {
        return;
      }
      uVar3 = 2;
    }
    else {
      uVar2 = *(uint *)(param_1 + 0xec);
      if (uVar2 == 0) {
        return;
      }
      uVar3 = 1;
    }
    *(undefined1 *)(uVar2 + 0x18) = uVar3;
  }
  return;
}



void fn_00362de4(int param_1)

{
  fn_0036c648(*(undefined4 *)(param_1 + 0x5c));
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 10) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 8) = 0;
  fn_00689bd0(param_1,0x48,0,0);
  return;
}


