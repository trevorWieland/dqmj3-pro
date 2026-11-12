#include "0031077c_0031707c.h"



void fn_0031707c(int param_1,uint param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  if ((uint)((iVar4 >> 4) - (iVar4 >> 0x1f)) <= param_2) {
    iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
    param_4 = (iVar4 >> 4) - (iVar4 >> 0x1f);
    fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,param_4);
  }
  uVar1 = fn_0022f750(*(undefined4 *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c));
  uVar3 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  if ((uint)((iVar4 >> 4) - (iVar4 >> 0x1f)) <= param_2) {
    iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
    param_4 = (iVar4 >> 4) - (iVar4 >> 0x1f);
    fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,param_2,param_4);
  }
  uVar2 = fn_0022eefc((int)*(short *)(*(int *)(param_1 + 0xb0) + param_2 * 0x1c + 4),0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2,*(undefined4 *)(param_1 + 0x58),param_4);
  fn_00689bd0(param_1,0x49,0);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_00316f6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_28;
  
  local_28 = param_4;
  fn_002c3e78();
  uVar4 = 0;
  if (*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2 != 0) {
    do {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x78) + uVar4 * 4);
      uVar1 = *(int *)(param_1 + 0xb4) - *(int *)(param_1 + 0xb0);
      iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
      if ((uint)((iVar2 >> 4) - (iVar2 >> 0x1f)) <= uVar4) {
        iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
        local_28 = (iVar2 >> 4) - (iVar2 >> 0x1f);
        fn_002ff628(9,&DAT_008c7628,&DAT_008c7628,uVar4);
      }
      uVar3 = fn_0022f750(*(undefined4 *)(*(int *)(param_1 + 0xb0) + uVar4 * 0x1c));
      fn_0031b78c(param_1,uVar4,0,uVar3);
      iVar2 = fn_00316190(param_1,uVar4);
      if (iVar2 == 0) {
        local_28 = _DAT_00890ea0;
        fn_0031b554(uVar5,&local_28);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (uint)(*(int *)(param_1 + 0x7c) - *(int *)(param_1 + 0x78) >> 2));
  }
  return;
}



void fn_00315964(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_008228e8;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  return;
}



void fn_00314450(undefined4 *param_1)

{
  short sVar1;
  int iVar2;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  undefined2 local_14;
  undefined2 local_12;
  undefined2 local_10;
  undefined2 local_e;
  undefined2 local_c;
  undefined2 local_a;
  
  local_70 = *param_1;
  iVar2 = 0;
  sVar1 = *(short *)(param_1 + 1);
  while (sVar1 != 0) {
    iVar2 = iVar2 + 1;
    sVar1 = *(short *)((int)(param_1 + 1) + iVar2 * 2);
  }
  local_6c = fn_005f5c50(0xe5d78b83,param_1 + 1,iVar2 << 1);
  local_68 = (int)*(short *)(param_1 + 7);
  local_64 = (uint)*(byte *)((int)param_1 + 0x2e);
  local_60 = (int)*(short *)((int)param_1 + 0x1e);
  local_5c = (int)*(short *)(param_1 + 8);
  local_58 = (int)*(short *)((int)param_1 + 0x26);
  local_54 = (int)*(short *)(param_1 + 10);
  local_50 = (int)*(short *)((int)param_1 + 0x2a);
  local_4c = (int)*(short *)(param_1 + 0xb);
  local_48 = (int)*(short *)(param_1 + 0x20);
  local_44 = (int)*(short *)((int)param_1 + 0x82);
  local_40 = (int)*(short *)(param_1 + 0x21);
  local_3c = (int)*(short *)((int)param_1 + 0x86);
  local_38 = (int)*(short *)(param_1 + 0x22);
  local_34 = (int)*(short *)((int)param_1 + 0x8a);
  local_30 = fn_005f5c50(0xfe0aa09e,param_1 + 0x11,0x12);
  local_14 = *(undefined2 *)((int)param_1 + 0x56);
  local_12 = *(undefined2 *)((int)param_1 + 0x5a);
  local_10 = *(undefined2 *)((int)param_1 + 0x5e);
  local_e = *(undefined2 *)((int)param_1 + 0x62);
  local_c = *(undefined2 *)((int)param_1 + 0x66);
  local_a = *(undefined2 *)((int)param_1 + 0x6a);
  local_2c = fn_005f5c50(0x73446a93,&local_14,0xc);
  local_28 = param_1[0xc];
  local_24 = fn_005f5c50(0x27b55baa,param_1 + 0x23,0x40);
  local_20 = *(byte *)(param_1 + 0x10) & 1;
  local_1c = (uint)*(byte *)((int)param_1 + 0x3d);
  local_18 = (uint)*(byte *)(param_1 + 0xf);
  fn_005f5c50(0xf7a92c7d,&local_70,0x5c);
  return;
}



void fn_00313928(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00110518();
  puVar1[0x20] = 0xffffffff;
  *puVar1 = &DAT_008228c8;
  puVar1[0x21] = 0xffffffff;
  puVar1[0x22] = 0xffffffff;
  puVar1[0x23] = 0xffffffff;
  puVar1[0x24] = 0xffffffff;
  puVar1[0x25] = 0xffffffff;
  puVar1[0x26] = 0xffffffff;
  puVar1[0x27] = 0xffffffff;
  puVar1[0x28] = 0xffffffff;
  puVar1[0x29] = 0xffffffff;
  puVar1[0x2a] = 0xffffffff;
  puVar1[0x2b] = 0xffffffff;
  puVar1[0x2c] = 0xffffffff;
  return;
}



bool fn_00313870(int param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = fn_001c8258(param_1,(&PTR_s_battle_subwindows_bflyt_007ba1bc)[param_3],
                       (&PTR_u_rom__data_Layout_battle_battle_l_007ba188)[param_2],&DAT_003138d0,1,1
                      );
  if (iVar1 != -1) {
    *(int *)(param_1 + param_2 * 4 + 0x80) = iVar1;
  }
  return iVar1 != -1;
}



bool fn_00313864(int param_1)

{
  int iVar1;
  
  iVar1 = fn_001c8258(param_1,"scoutgage.bflyt",
                       L"rom:/data/Layout/battle/battle_upper/scoutgage.arc",&DAT_003138d0,1,1);
  if (iVar1 != -1) {
    *(int *)(param_1 + 0x90) = iVar1;
  }
  return iVar1 != -1;
}



void fn_00312944(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 100) + 8) != '\x01') {
    iVar1 = fn_00154a6c(*(undefined4 *)(param_1 + 0x7c));
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x74));
      iVar1 = *(int *)(param_1 + 0x78) + 1;
      *(int *)(param_1 + 0x78) = iVar1;
      *(undefined4 *)(param_1 + 0x74) = 0xffffffff;
      if (iVar1 == 2) {
        *(undefined1 *)(*(int *)(param_1 + 100) + 8) = 1;
      }
      uVar2 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                           *(undefined4 *)(&DAT_00890fb8 + *(int *)(param_1 + 0x78) * 4),
                           *(undefined4 *)(param_1 + 0x70));
      *(undefined4 *)(param_1 + 0x74) = uVar2;
      uVar2 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar2);
      *(undefined4 *)(param_1 + 0x7c) = uVar2;
    }
  }
  return;
}



undefined4 fn_00312834(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890f78) goto LAB_00312884;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00312884:
  *(undefined4 **)(param_1 + 100) = puVar1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00890fa4,&DAT_00312908,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_00890fa8,&LAB_00312910,0,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(&DAT_00890fb8 + *(int *)(param_1 + 0x78) * 4),uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar3);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return 1;
}



undefined4 fn_003123f4(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xd9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890f78) goto LAB_00312444;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00312444:
  *(undefined4 **)(param_1 + 100) = puVar1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00890f84,&DAT_003124d0,1,1);
  *(undefined4 *)(param_1 + 0x6c) = uVar3;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_00890f88,&LAB_003124d8,1,1,0);
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  uVar3 = fn_001c804c(*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(&DAT_00890f98 + *(int *)(param_1 + 0x78) * 4),uVar3);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  uVar3 = fn_001088e0(*(undefined4 *)(param_1 + 0x68),uVar3);
  *(undefined4 *)(param_1 + 0x7c) = uVar3;
  return 1;
}



void fn_00311970(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0016b7d8(param_1,param_3,param_4);
  puVar1[10] = param_2;
  *(undefined1 *)(puVar1 + 0xb) = param_5;
  *puVar1 = &DAT_00822500;
  return;
}



void fn_0031157c(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



void fn_0031077c(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((*(int *)(param_1 + 0xb4) != 0) || (*(int *)(&DAT_007c7a6c + param_2 * 8) == 0)) {
    return;
  }
  puVar1 = (undefined4 *)fn_001f7510(param_1,0x49);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008942dc) goto LAB_003107e8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003107e8:
  uVar3 = fn_0022eefc((int)*(short *)(&DAT_007c7a6c + param_2 * 8),0);
  uVar4 = fn_0022f750((&DAT_007c7a68)[param_2 * 2]);
  fn_00321118(puVar1,uVar4,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}


