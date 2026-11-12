#include "006030a0_006047e8b.h"



void fn_006047e8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_007959b4(param_1 + 0x110);
  *(undefined4 *)(param_1 + 0x11c) = param_3;
  *(undefined4 *)(param_1 + 0x120) = param_4;
  *(undefined4 *)(param_1 + 0x124) = param_5;
  return;
}



void fn_006047b8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x13c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0060481c(iVar1,param_1);
  return;
}



void fn_00604774(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined1 *)(param_1 + 8) = 2;
  fn_007959b4(param_1 + 0x110);
  fn_007959b4(param_1 + 300,param_3);
  return;
}



void fn_00604728(int param_1,undefined4 param_2)

{
  fn_007959b4(param_2,param_1 + 0x110);
  return;
}



void fn_006038d4(void)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  fn_00117984();
  uVar1 = fn_0010fa20();
  fn_005e581c();
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0x3f800000;
  fn_00117604(uVar1,2,&local_18);
  return;
}



void fn_00603814(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_50 [12];
  undefined4 local_44;
  undefined4 local_34;
  undefined4 local_24;
  
  if (param_1 != (undefined4 *)0x0) {
    fn_001781f0(auStack_50,param_3);
    fn_001ad184(auStack_50,param_3);
    if (param_4 == 0) {
      if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
        DAT_008f9e2c = 0;
        DAT_008f9e30 = 0;
        DAT_008f9e34 = 0;
      }
      local_44 = DAT_008f9e2c;
      local_34 = DAT_008f9e30;
      local_24 = DAT_008f9e34;
    }
    fn_0016947c(&local_60,auStack_50,param_2);
    *param_1 = local_60;
    param_1[1] = uStack_5c;
    param_1[2] = uStack_58;
  }
  return;
}



void fn_006036a0(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [12];
  undefined4 local_74;
  undefined4 local_64;
  undefined4 local_54;
  int local_34;
  int iStack_30;
  int local_2c;
  int iStack_28;
  
  iVar5 = 0;
  if (0 < param_3) {
    uVar6 = 0;
    local_34 = param_1;
    iStack_30 = param_2;
    local_2c = param_3;
    iStack_28 = param_4;
    do {
      if (param_2 <= param_4 + iVar5) {
        return;
      }
      iVar2 = local_34 + (param_4 + iVar5) * 0x48;
      puVar3 = (undefined4 *)(iVar2 + 8);
      if (puVar3 != (undefined4 *)0x0) {
        fn_001781f0(auStack_88,param_5);
        fn_0016947c(&local_98,auStack_88,puVar3);
        *puVar3 = local_98;
        *(undefined4 *)(iVar2 + 0xc) = local_94;
        *(undefined4 *)(iVar2 + 0x10) = uStack_90;
      }
      puVar3 = (undefined4 *)(iVar2 + 0x38);
      if (puVar3 != (undefined4 *)0x0) {
        fn_001781f0(auStack_80,param_5);
        if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
          DAT_008f9e2c = (undefined4)uVar6;
          DAT_008f9e30 = DAT_008f9e2c;
          DAT_008f9e34 = DAT_008f9e2c;
        }
        local_74 = DAT_008f9e2c;
        local_64 = DAT_008f9e30;
        local_54 = DAT_008f9e34;
        fn_0016947c(&local_98,auStack_80,puVar3);
        *puVar3 = local_98;
        *(undefined4 *)(iVar2 + 0x3c) = local_94;
        *(undefined4 *)(iVar2 + 0x40) = uStack_90;
      }
      uVar4 = 0;
      do {
        iVar1 = iVar2 + uVar4 * 0xc;
        puVar3 = (undefined4 *)(iVar1 + 0x14);
        if (puVar3 != (undefined4 *)0x0) {
          fn_001781f0(auStack_80,param_5);
          fn_0016947c(&local_94,auStack_80,puVar3);
          *puVar3 = local_94;
          *(undefined4 *)(iVar1 + 0x18) = uStack_90;
          *(undefined4 *)(iVar1 + 0x1c) = uStack_8c;
        }
        uVar4 = uVar4 + 1;
      } while (uVar4 < 3);
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_2c);
  }
  return;
}


