#include "00148f38_00149534.h"



void fn_00149534(int param_1)

{
  int iVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  iVar1 = *(int *)(param_1 + 0xa0);
  *(undefined4 *)(iVar1 + 0xc) = in_s0;
  *(undefined4 *)(iVar1 + 0x10) = in_s1;
  *(undefined4 *)(iVar1 + 0x14) = in_s2;
  return;
}



undefined4 fn_0014951c(int *param_1)

{
  (**(code **)(*param_1 + 0x44))();
  return 1;
}



undefined4 fn_001493dc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *local_28;
  int local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  int local_18;
  undefined4 local_14;
  
  local_28 = (undefined4 *)0x0;
  local_24 = 0;
  local_20 = 0;
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_2,&local_28);
  fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4),
               param_3,&local_1c);
  iVar1 = local_24 - (int)local_28 >> 0x1f;
  if ((local_24 - (int)local_28) / 0xc + iVar1 != iVar1) {
    iVar1 = local_18 - (int)local_1c >> 0x1f;
    if ((((local_18 - (int)local_1c) / 0xc + iVar1 != iVar1) &&
        (iVar1 = fn_00145b00(0x38,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_0015cc44(iVar1,&local_28,&local_1c,0), iVar1 != 0)) {
      uVar3 = local_28[1];
      uVar4 = local_28[2];
      puVar2 = *(undefined4 **)(param_1 + 0xa0);
      *puVar2 = *local_28;
      puVar2[1] = uVar3;
      puVar2[2] = uVar4;
      iVar1 = *(int *)(param_1 + 0xa0);
      uVar3 = local_1c[1];
      uVar4 = local_1c[2];
      *(undefined4 *)(iVar1 + 0xc) = *local_1c;
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      *(undefined4 *)(iVar1 + 0x14) = uVar4;
      uVar3 = fn_0015a130(param_1);
      fn_00168b28(&local_1c);
      fn_00168b28(&local_28);
      return uVar3;
    }
  }
  fn_00168b28(&local_1c);
  fn_00168b28(&local_28);
  return 0xffffffff;
}



void fn_001493b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_c;
  undefined4 uStack_8;
  
  local_c = param_2;
  uStack_8 = param_3;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    fn_00159864(&local_c,param_3);
  }
  return;
}



int fn_0014939c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_00165b70(*(undefined4 *)(param_1 + 0x84));
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = (int)*(char *)(iVar1 + 1);
  }
  return iVar2;
}



void fn_00149390(int param_1)

{
  undefined4 *puVar1;
  undefined4 in_s0;
  undefined4 in_s1;
  undefined4 in_s2;
  
  puVar1 = *(undefined4 **)(param_1 + 0xa0);
  *puVar1 = in_s0;
  puVar1[1] = in_s1;
  puVar1[2] = in_s2;
  return;
}



undefined4 fn_001492a4(undefined4 param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0 && param_3 != (int *)0x0) {
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    iVar1 = fn_00145b00(0x44,&DAT_00812c8c);
    if ((iVar1 != 0) && (iVar1 = fn_0015cac0(iVar1,param_2,param_3,&local_2c), iVar1 != 0)) {
      if ((param_3[1] - *param_3) / 0xc == 0) {
        fn_002ff628(9,&DAT_008c7604,&DAT_008c7604,0,0);
      }
      fn_0015aabc(param_1,param_2);
      uVar2 = fn_0015a130(param_1,iVar1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



void fn_0014924c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = fn_00164a34();
  if (((iVar1 == 0) || (iVar1 = fn_00164a68(param_1,param_3), iVar1 == 0)) ||
     (iVar1 = fn_00164a34(param_1,param_2), iVar1 == 0)) {
    return;
  }
  fn_0015aabc(param_1,param_2);
  return;
}



void fn_001491a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  bool bVar4;
  undefined4 local_14;
  
  local_14 = param_2;
  iVar1 = fn_00164a34(param_1,param_2,param_3,param_4,param_1);
  if (iVar1 != 0) {
    uVar2 = (uint)(char)local_14;
    bVar4 = 1 < uVar2 - 0x20;
    if (bVar4) {
      uVar2 = uVar2 - 0x22;
    }
    if ((!bVar4 || uVar2 < 2) && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) {
      if ((int)(char)local_14 - 0x20U < 2) {
        iVar1 = fn_00175dcc();
      }
      else {
        iVar1 = fn_00175d88(iVar1,&local_14);
      }
      uVar2 = (int)(char)local_14 - 0x20;
      if (uVar2 < 2) {
        pcVar3 = (char *)(param_1 + 0xc0);
      }
      else {
        pcVar3 = (char *)(param_1 + 0xc1);
      }
      if (iVar1 != 0) {
        uVar2 = (uint)*pcVar3;
      }
      if (iVar1 != 0 && uVar2 != 0) {
        fn_0015aa68(iVar1,uVar2 & 0xff);
        *pcVar3 = '\0';
      }
    }
  }
  return;
}



undefined4
fn_00148f38(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
            undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
            undefined4 param_13)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  uStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_00164a34(param_1);
  if ((iVar1 != 0) &&
     (((char)param_3 == '\0' || (iVar1 = fn_00164a34(local_34,param_3), iVar1 != 0)))) {
    local_a8 = param_2;
    if ((int)(char)param_2 - 0x20U < 2) {
      iVar1 = fn_0017484c(DAT_008977e4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      iVar1 = fn_00175dcc(iVar1,&local_a8);
    }
    else {
      iVar1 = fn_0017484c(DAT_008977e4);
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      iVar1 = fn_00175d88(iVar1,&local_a8);
    }
    if (iVar1 != 0) {
      iVar7 = (int)(char)param_4;
      if (iVar7 == 0) {
        uVar6 = 0;
      }
      else {
        local_a8 = param_4;
        if (iVar7 - 0x20U < 2) {
          iVar2 = fn_0017484c(DAT_008977e4);
          if (iVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_00175dcc(iVar2,&local_a8);
          }
        }
        else {
          iVar2 = fn_0017484c(DAT_008977e4);
          if (iVar2 == 0) {
            uVar6 = 0;
          }
          else {
            uVar6 = fn_00175d88(iVar2,&local_a8);
          }
        }
      }
      if ((char)param_3 == '\0') {
        iVar7 = fn_00145b00(0x78,&DAT_00812c8c);
        uVar5 = 0;
        if (iVar7 != 0) {
          local_a8 = (undefined4)param_7;
          local_a4 = (undefined4)((ulonglong)param_7 >> 0x20);
          local_a0 = (undefined4)param_8;
          uStack_9c = (undefined4)((ulonglong)param_8 >> 0x20);
          uStack_98 = (undefined4)param_9;
          uStack_94 = (undefined4)((ulonglong)param_9 >> 0x20);
          uStack_90 = (undefined4)param_10;
          uStack_8c = (undefined4)((ulonglong)param_10 >> 0x20);
          uStack_88 = (undefined4)param_11;
          uStack_84 = (undefined4)((ulonglong)param_11 >> 0x20);
          uStack_80 = (undefined4)param_12;
          uStack_7c = (undefined4)((ulonglong)param_12 >> 0x20);
          uStack_78 = param_13;
          uVar5 = fn_0015b114(iVar7,iVar1,uVar6,param_6);
        }
      }
      else {
        local_a8 = param_3;
        iVar2 = fn_00164a34(local_34,param_3);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar2 = fn_0017484c(DAT_008977e4);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar2 = fn_00165bb4(iVar2,&local_a8);
        if (iVar2 == 0) {
          return 0xffffffff;
        }
        iVar3 = iVar2;
        if (iVar7 != 0) {
          iVar3 = (int)(char)param_5;
        }
        uVar4 = 0;
        if (iVar7 != 0 && iVar3 != 0) {
          local_a8 = param_5;
          iVar7 = fn_00164a34(local_34,param_5);
          if ((iVar7 != 0) && (iVar7 = fn_0017484c(DAT_008977e4), iVar7 != 0)) {
            uVar4 = fn_00165bb4(iVar7,&local_a8);
          }
        }
        iVar7 = fn_00145b00(0x80,&DAT_00812c8c);
        uVar5 = 0;
        if (iVar7 != 0) {
          local_a4 = param_6;
          local_a0 = (undefined4)param_7;
          uStack_9c = (undefined4)((ulonglong)param_7 >> 0x20);
          uStack_98 = (undefined4)param_8;
          uStack_94 = (undefined4)((ulonglong)param_8 >> 0x20);
          uStack_90 = (undefined4)param_9;
          uStack_8c = (undefined4)((ulonglong)param_9 >> 0x20);
          uStack_88 = (undefined4)param_10;
          uStack_84 = (undefined4)((ulonglong)param_10 >> 0x20);
          uStack_80 = (undefined4)param_11;
          uStack_7c = (undefined4)((ulonglong)param_11 >> 0x20);
          uStack_78 = (undefined4)param_12;
          uStack_74 = (undefined4)((ulonglong)param_12 >> 0x20);
          local_a8 = uVar4;
          uStack_70 = param_13;
          uVar5 = fn_0015c154(iVar7,iVar1,iVar2,uVar6);
        }
      }
      uVar6 = fn_0015a130(local_34,uVar5);
      return uVar6;
    }
  }
  return 0xffffffff;
}


