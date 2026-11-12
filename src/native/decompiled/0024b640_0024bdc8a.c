#include "0024b640_0024bdc8a.h"



undefined1 * fn_0024baa4(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  
  fn_00692e98(auStack_18);
  iVar2 = 0;
  iVar1 = fn_006b6740(param_1);
  if (0 < iVar1) {
    do {
      iVar1 = fn_006b7068(param_1,iVar2);
      if (*(char *)(iVar1 + 0x5c) != '\0') {
        local_1c = fn_006b7068(param_1,iVar2);
        fn_00249188(&local_1c,1,auStack_18);
      }
      iVar2 = iVar2 + 1;
      iVar1 = fn_006b6740(param_1);
    } while (iVar2 < iVar1);
  }
  return auStack_18;
}



void fn_0024b9bc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 local_28 [12];
  
  iVar1 = fn_006b6e94(param_2);
  if (iVar1 < 10) {
    iVar3 = 0;
    iVar1 = fn_00371254();
    if (0 < iVar1) {
      do {
        iVar1 = fn_003711a8(iVar3);
        if (*(byte *)(iVar1 + 2) == param_5) break;
        iVar3 = (int)(short)((short)iVar3 + 1);
        iVar1 = fn_00371254();
      } while (iVar3 < iVar1);
    }
    fn_006f6ad8(param_3);
    iVar1 = fn_0024aa90(param_1,param_2,iVar3,local_28);
    iVar3 = fn_00145b00(0x34,&DAT_00812c8c);
    uVar2 = 0;
    if (iVar3 != 0) {
      uVar2 = fn_006f7de8(param_4);
      uVar2 = fn_002d03d0(iVar3,param_4,uVar2);
    }
    fn_002d0cb4(iVar1,uVar2);
    *(undefined1 *)(iVar1 + 0x60) = 1;
    *(undefined1 *)(iVar1 + 0x58) = 0;
  }
  return;
}



undefined1 *
fn_0024b7e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined *puStack_7c;
  undefined4 *local_78;
  undefined4 local_74;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 local_2c;
  undefined2 local_2a;
  undefined1 auStack_28 [8];
  
  fn_00692e98(auStack_28,param_3);
  fn_00183718(&local_90,auStack_28,(char *)&DAT_0024b99c);
  local_48 = local_90;
  uStack_44 = local_8c;
  uStack_40 = local_88;
  uStack_3c = local_84;
  uStack_38 = uStack_80;
  uStack_34 = puStack_7c;
  uStack_30 = local_78;
  uVar1 = fn_00264324(param_1,1);
  uVar2 = fn_00264fd4(param_1,1);
  DAT_00896f48 = uVar2;
  iVar3 = fn_002649b0(param_1,param_4);
  local_88 = fn_002650cc(param_1,param_4);
  if (iVar3 == -1) {
    iVar3 = fn_0026455c(param_1,param_4,0);
  }
  if (local_88 == -1) {
    local_88 = fn_00264d74(param_1,param_4,0);
  }
  local_50 = 0;
  local_78 = &local_50;
  local_4c = 0;
  local_74 = 0;
  uStack_80 = 1;
  puStack_7c = &DAT_0024b9a8;
  local_84 = 1;
  local_8c = 0xffffffff;
  local_90 = iVar3;
  piVar4 = (int *)fn_00261d7c(param_2,uVar1,uVar2,param_4);
  iVar3 = fn_0068ede0(&local_48,1,&local_5c,&local_68);
  if (iVar3 != 0) {
    local_88 = local_5c;
    local_84 = uStack_58;
    uStack_80 = uStack_54;
    (**(code **)(*piVar4 + 0x1c))(piVar4);
    local_88 = local_68;
    local_84 = uStack_64;
    uStack_80 = uStack_60;
    (**(code **)(*piVar4 + 0x24))(piVar4);
  }
  fn_002f4058(piVar4);
  fn_006a06a0(piVar4,param_4);
  local_2c = (undefined2)param_4;
  local_2a = local_2c;
  fn_0068c744(DAT_008977e8,&local_2c,2);
  return auStack_28;
}



void fn_0024b640(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  uint local_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  char acStack_d0 [68];
  undefined1 auStack_8c [88];
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  fn_00183718(&local_100,param_3,(char *)&DAT_0024b7cc);
  local_108 = local_ec;
  uStack_104 = uStack_e8;
  uVar3 = 0;
  uStack_118 = uStack_fc;
  uStack_114 = uStack_f8;
  uStack_110 = uStack_f4;
  uStack_10c = uStack_f0;
  if (local_100 != 0) {
    do {
      fn_001028d4(&uStack_f0,(char *)&DAT_0024b7d8,param_4,param_5);
      uVar1 = fn_002febd8(&uStack_f0);
      fn_00176ec8(auStack_8c,&uStack_118,uVar3);
      fn_0017821c(acStack_d0,auStack_8c,0x44);
      iVar2 = fn_00147e6c(acStack_d0,&uStack_f0,uVar1);
      if (iVar2 == 0) {
        fn_00176ec8(auStack_8c,&uStack_118,uVar3);
        fn_0017821c(acStack_d0,auStack_8c,0x44);
        fn_00176ec8(auStack_8c,&uStack_118,uVar3);
        fn_0017821c(acStack_d0,auStack_8c,0x44);
        iVar2 = fn_002febd8(&uStack_f0);
        iVar2 = fn_0024aa90(local_34,uStack_30,acStack_d0[iVar2] + -0x30);
        *(char *)(iVar2 + 100) = (char)uVar3;
        if (uVar3 != 0xffffffff) {
          if ((uint)(DAT_008cd574 - DAT_008cd570) <= uVar3) {
            fn_002ff628(9,&DAT_008c766f,&DAT_008c766f,uVar3,DAT_008cd574 - DAT_008cd570);
          }
          *(undefined1 *)(DAT_008cd570 + uVar3) = 1;
        }
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 < local_100);
  }
  return;
}


