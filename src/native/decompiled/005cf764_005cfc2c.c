#include "005cf764_005cfc2c.h"



void fn_005cfa38(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 auStack_118 [240];
  uint local_28;
  uint local_24;
  int local_20;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 4));
  fn_0017821c(auStack_118,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_28,auStack_118,0);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 8));
  fn_0017821c(auStack_118,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_28,auStack_118,1);
  uVar4 = local_28;
  if (local_24 != local_28) {
    do {
      uVar6 = local_24;
      for (iVar2 = *(int *)(param_1 + 0xdc); *(int *)(param_1 + 0xe0) != iVar2; iVar2 = iVar2 + 8) {
        if ((*(short *)(iVar2 + 4) != 0) && (*(short *)(uVar4 + 4) == *(short *)(iVar2 + 4))) {
          if (local_28 != local_24) {
            uVar5 = uVar4 + 8;
            if (uVar5 != local_24) {
              uVar3 = uVar4;
              if (uVar5 < local_24) {
                iVar2 = local_24 - uVar5;
                if (0 < iVar2) {
                  uVar6 = uVar4;
                  uVar3 = uVar4 - 8;
                  if (iVar2 * 0x10000000 < 0) {
                    fn_00166824(uVar4,uVar5);
                    uVar6 = uVar5;
                    uVar3 = uVar4;
                  }
                  for (iVar2 = iVar2 >> 4; iVar2 != 0; iVar2 = iVar2 + -1) {
                    fn_00166824(uVar3 + 8,uVar6 + 8);
                    uVar3 = uVar3 + 0x10;
                    uVar6 = uVar6 + 0x10;
                    fn_00166824();
                  }
                }
              }
              else {
                for (; uVar5 != uVar6; uVar5 = uVar5 + 8) {
                  fn_00166824(uVar3,uVar5);
                  uVar3 = uVar3 + 8;
                }
              }
            }
            local_24 = local_24 - 8;
          }
          goto LAB_005cfbd8;
        }
      }
      uVar4 = uVar4 + 8;
LAB_005cfbd8:
    } while (local_24 != uVar4);
  }
  fn_007959b4(param_2,&local_28);
  uVar4 = local_28;
  if (local_24 < local_28) {
    do {
      uVar4 = uVar4 + 8;
    } while (uVar4 != local_24);
  }
  fn_001008c4(local_28,(int)(local_20 - local_28) >> 3,0);
  return;
}



void fn_005cf764(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_130;
  undefined1 local_12f;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined1 auStack_128 [260];
  uint local_24;
  uint local_20;
  int local_1c;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd9);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00890b20) goto LAB_005cf7b4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005cf7b4:
  fn_0017821c(auStack_128,puVar1 + 3,0x104);
  fn_00604728(puVar1,param_1 + 0xdc);
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_005cfc2c(param_1,&local_24,auStack_128);
  fn_005d0330(param_1,&local_24,auStack_128);
  fn_005cfd88(param_1,&local_24,auStack_128);
  fn_005cf2b8(param_1,&local_24);
  fn_005cf58c(param_1,&local_24);
  uVar6 = *(uint *)(param_1 + 0xc4);
  uVar7 = *(uint *)(param_1 + 0xc0);
  if (uVar7 != uVar6) {
    uVar3 = uVar7;
    if (uVar6 <= uVar7) {
      do {
        uVar3 = uVar3 + 8;
      } while (uVar3 != uVar6);
    }
    *(uint *)(param_1 + 0xc4) = uVar6 - (uVar6 - uVar7 & 0xfffffff8);
  }
  local_130 = 0;
  local_12f = 0;
  local_12e = 0;
  local_12d = 0;
  local_12c = 0;
  iVar4 = *(int *)(param_1 + 0xc4);
  if (iVar4 == *(int *)(param_1 + 200)) {
    fn_007957d0(param_1 + 0xc0);
  }
  else {
    *(int *)(param_1 + 0xc4) = iVar4 + 8;
    if (iVar4 != 0) {
      fn_00166824(iVar4,&local_130);
    }
  }
  uVar6 = 0;
  if ((int)(local_20 - local_24) >> 3 != 0) {
    do {
      uVar7 = (int)(local_20 - local_24) >> 3;
      if (uVar7 <= uVar6) {
        fn_002ff628(9,&DAT_008c7635,&DAT_008c7635,uVar6,uVar7);
      }
      iVar4 = *(int *)(param_1 + 0xc4);
      if (iVar4 == *(int *)(param_1 + 200)) {
        fn_007957d0(param_1 + 0xc0);
      }
      else {
        *(int *)(param_1 + 0xc4) = iVar4 + 8;
        if (iVar4 != 0) {
          fn_00166824(iVar4,local_24 + uVar6 * 8);
        }
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < (uint)((int)(local_20 - local_24) >> 3));
  }
  iVar4 = *(int *)(param_1 + 0xc0);
  *(int *)(param_1 + 0xcc) = *(int *)(param_1 + 0xc4) - iVar4 >> 3;
  if (*(int *)(param_1 + 0xc4) != iVar4) {
    do {
      if (*(short *)(iVar4 + 4) != 0) {
        for (iVar5 = *(int *)(param_1 + 0xdc); *(int *)(param_1 + 0xe0) != iVar5; iVar5 = iVar5 + 8)
        {
          if (*(short *)(iVar5 + 4) == *(short *)(iVar4 + 4)) {
            *(undefined1 *)(iVar4 + 1) = 1;
            break;
          }
        }
      }
      iVar4 = iVar4 + 8;
    } while (*(int *)(param_1 + 0xc4) != iVar4);
  }
  uVar6 = local_24;
  if (local_20 < local_24) {
    do {
      uVar6 = uVar6 + 8;
    } while (uVar6 != local_20);
  }
  fn_001008c4(local_24,(int)(local_1c - local_24) >> 3,0);
  return;
}



void fn_005cfc2c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined1 auStack_110 [240];
  uint local_20;
  uint local_1c;
  int local_18;
  
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  fn_0017821c(auStack_110,param_3 + 0x10,0xf0);
  fn_005d0ccc(param_1,&local_20,auStack_110,0xffffffff);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 4));
  fn_0017821c(auStack_110,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_20,auStack_110,0);
  uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_3 + 8));
  fn_0017821c(auStack_110,uVar1,0xf0);
  fn_005d0ccc(param_1,&local_20,auStack_110,1);
  fn_005cf2b8(param_1,&local_20);
  fn_005cf58c(param_1,&local_20);
  uVar3 = 0;
  if ((int)(local_1c - local_20) >> 3 != 0) {
    do {
      uVar2 = uVar3 + 1;
      iVar4 = local_20 + uVar3 * 8;
      *(ushort *)(iVar4 + 6) = *(ushort *)(iVar4 + 6) >> 1;
      uVar3 = uVar2;
    } while (uVar2 < (uint)((int)(local_1c - local_20) >> 3));
  }
  fn_007959b4(param_2,&local_20);
  uVar3 = local_20;
  if (local_1c < local_20) {
    do {
      uVar3 = uVar3 + 8;
    } while (uVar3 != local_1c);
  }
  fn_001008c4(local_20,(int)(local_18 - local_20) >> 3,0);
  return;
}


