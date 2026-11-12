#include "005d0980_005d0db8.h"



void fn_005d0db8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_0084c018;
  uVar1 = param_1[0x37];
  uVar2 = uVar1;
  if ((uint)param_1[0x38] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[0x38]);
  }
  fn_001008c4(uVar1,(int)(param_1[0x39] - uVar1) >> 3,0);
  fn_005d9cf0(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005d0d84(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_005d9bb0();
  *puVar1 = &DAT_0084c018;
  puVar1[0x37] = 0;
  puVar1[0x38] = 0;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  return puVar1;
}



void fn_005d0ccc(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_24;
  
  iVar2 = 0;
  do {
    local_24 = *(undefined4 *)(param_3 + iVar2 * 4 + 0x56);
    if ((short)local_24 != 0) {
      local_28 = 0;
      local_27 = 0;
      local_26 = 0;
      local_25 = 0;
      if (param_4 == 0) {
        local_26 = 1;
      }
      else if (param_4 == 1) {
        local_25 = 1;
      }
      iVar1 = *(int *)(param_2 + 4);
      if (iVar1 == *(int *)(param_2 + 8)) {
        fn_007957d0(param_2,iVar1,&local_28);
      }
      else {
        *(int *)(param_2 + 4) = iVar1 + 8;
        if (iVar1 != 0) {
          fn_00166824(iVar1,&local_28);
        }
      }
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 7);
  return;
}



void fn_005d0980(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint local_158;
  uint local_154;
  uint local_150;
  undefined1 auStack_14c [260];
  uint local_48 [3];
  uint local_3c [2];
  uint local_34;
  uint local_30;
  int local_2c;
  
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00890b20) goto LAB_005d09d4;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_005d09d4:
  if (param_2 != 0) {
    uVar9 = *(int *)(param_1 + 0xc4) - *(int *)(param_1 + 0xc0) >> 3;
    if (uVar9 <= param_3) {
      fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,param_3,uVar9);
    }
    iVar4 = *(int *)(param_1 + 0xc0);
    uVar8 = puVar2[0x47];
    uVar9 = *(int *)(param_1 + 0xe0) - *(int *)(param_1 + 0xdc) >> 3;
    if (uVar9 <= uVar8) {
      fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar8,uVar9);
    }
    fn_00166824(*(int *)(param_1 + 0xdc) + uVar8 * 8,iVar4 + param_3 * 8);
  }
  fn_0017821c(auStack_14c,puVar2 + 3,0x104);
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  fn_005cfa38(param_1,&local_34,auStack_14c);
  local_158 = 0;
  local_154 = 0;
  local_150 = 0;
  local_48[0] = (int)(local_30 - local_34) >> 3;
  if (0x1fffffff < local_48[0]) {
    fn_002ff628(8,&DAT_008c7636,&DAT_008c7636,local_48[0],0x1fffffff);
  }
  if ((uint)((int)(local_150 - local_158) >> 3) < local_48[0]) {
    uVar9 = (int)(local_154 - local_158) >> 3;
    local_3c[0] = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
    if (local_3c[0] < uVar9 + 0x20) {
      local_3c[0] = uVar9 + 0x20;
    }
    puVar7 = local_3c;
    if (local_3c[0] <= local_48[0]) {
      puVar7 = local_48;
    }
    uVar10 = *puVar7;
    uVar5 = fn_00100fc6(uVar10 << 3,0);
    uVar1 = local_154;
    uVar9 = uVar5;
    for (uVar8 = local_158; uVar8 != uVar1; uVar8 = uVar8 + 8) {
      if (uVar9 != 0) {
        fn_00166824(uVar9,uVar8);
      }
      uVar9 = uVar9 + 8;
    }
    uVar9 = local_158;
    if (local_154 < local_158) {
      do {
        uVar9 = uVar9 + 8;
      } while (uVar9 != local_154);
    }
    fn_001008c4(local_158,(int)(local_150 - local_158) >> 3,0);
    local_154 = (local_154 - local_158 & 0xfffffff8) + uVar5;
    local_150 = uVar5 + uVar10 * 8;
    local_158 = uVar5;
  }
  uVar9 = local_34;
  if (local_30 != local_34) {
    do {
      uVar8 = local_154;
      if (0x31 < *(ushort *)(uVar9 + 6)) {
        if (local_154 == local_150) {
          fn_007957d0(&local_158,local_154,uVar9);
        }
        else {
          bVar11 = local_154 != 0;
          local_154 = local_154 + 8;
          if (bVar11) {
            fn_00166824(uVar8,uVar9);
          }
        }
      }
      uVar9 = uVar9 + 8;
    } while (local_30 != uVar9);
  }
  uVar6 = fn_006e9ba8(param_1,&local_34);
  puVar2[0x4e] = uVar6;
  fn_00604774(puVar2,param_1 + 0xdc,&local_158);
  fn_006899f4(param_1,0xd9,0);
  uVar9 = local_158;
  if (local_154 < local_158) {
    do {
      uVar9 = uVar9 + 8;
    } while (uVar9 != local_154);
  }
  fn_001008c4(local_158,(int)(local_150 - local_158) >> 3,0);
  uVar9 = local_34;
  if (local_30 < local_34) {
    do {
      uVar9 = uVar9 + 8;
    } while (uVar9 != local_30);
  }
  fn_001008c4(local_34,(int)(local_2c - local_34) >> 3,0);
  return;
}


