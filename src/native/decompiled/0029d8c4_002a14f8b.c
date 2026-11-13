#include "0029d8c4_002a14f8b.h"



void fn_002a14f8(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint param_7)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar2,1);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174a8c(uVar2,param_1 & 0xff);
  if (((iVar3 != 2) && (fn_0029e6fc(param_1,param_2,param_5), param_1 == param_7)) &&
     (param_6 != 0)) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_001493dc(uVar2,param_3,param_4);
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174bac(uVar2,param_7 & 0xff);
  if (iVar3 == 3) {
    uVar2 = fn_00182994(DAT_008977e4);
    uVar4 = fn_00154dd8(uVar2,0);
    if (uVar4 == param_7) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar1 = fn_00154dd8(uVar2,1);
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001749e8(uVar2,uVar1,0);
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    uVar4 = fn_00154dd8(uVar2,1);
    if (uVar4 == param_7) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar1 = fn_00154dd8(uVar2,0);
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001749e8(uVar2,uVar1,0);
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    uVar4 = fn_00155084(uVar2,0);
    if (uVar4 == param_7) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar1 = fn_00155084(uVar2,1);
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001749e8(uVar2,uVar1,0);
      return;
    }
    uVar2 = fn_00182994(DAT_008977e4);
    uVar4 = fn_00155084(uVar2,1);
    if (uVar4 == param_7) {
      uVar2 = fn_00182994(DAT_008977e4);
      uVar1 = fn_00155084(uVar2,0);
      uVar2 = fn_00182994(DAT_008977e4);
      fn_001749e8(uVar2,uVar1,0);
      return;
    }
  }
  return;
}



undefined4
fn_0029eca0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  
  uVar6 = 0;
  uVar7 = CONCAT44(param_8,param_6);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00163a1c(uVar2,param_4);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00174aec(uVar3,param_4,param_1);
  uVar3 = fn_00182994(DAT_008977e4);
  iVar5 = fn_001550fc(uVar3,param_4,param_1,(int)(short)param_5);
  switch(uVar2) {
  case 0:
    if (iVar4 != 3) goto switchD_0029ed24_default;
    uVar2 = fn_00182994(DAT_008977e4);
    uVar1 = fn_001659c0(uVar2,(int)(char)param_4,(int)(char)param_1);
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00155ffc(uVar2,param_4,param_1);
    goto joined_r0x0029ee14;
  case 1:
    if (iVar4 == 0) goto switchD_0029ed24_default;
    break;
  case 2:
    if (iVar4 == 0 || iVar4 == 3) goto switchD_0029ed24_default;
    if (iVar4 != 4) {
      if (iVar4 != 9) {
        uVar6 = fn_002a1070(param_1,param_2,param_3,param_4,param_5,(int)uVar7);
      }
      goto switchD_0029ed24_default;
    }
    break;
  case 3:
    if (iVar4 != 3 && iVar4 != 4) goto switchD_0029ed24_default;
    break;
  case 4:
    if (iVar4 == 0) goto switchD_0029ed24_default;
    if (0 < iVar5) break;
    uVar2 = fn_00182994(DAT_008977e4);
    uVar1 = fn_001659c0(uVar2,(int)(char)param_4,(int)(char)param_1);
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00155ffc(uVar2,param_4,param_1);
joined_r0x0029ee14:
    if (iVar4 != 0) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_0015ad60(uVar2,uVar1);
    }
    goto LAB_0029ee18;
  default:
    goto switchD_0029ed24_default;
  }
  uVar6 = fn_002a1070(param_1,param_2,param_3,param_4,param_5,(int)uVar7);
LAB_0029ee18:
  fn_0029fcf4(param_1,param_4,param_5,param_5);
switchD_0029ed24_default:
  fn_002a0224(param_4,param_1,param_5,param_7,(int)((ulonglong)uVar7 >> 0x20));
  return uVar6;
}



void fn_0029e29c(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 local_30;
  
  iVar3 = param_2;
  uVar1 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar1,(int)(char)param_4,(int)(char)param_1);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar8 = (int)(short)param_5;
  iVar3 = fn_00155a74(uVar1,param_4,param_1,iVar8,param_1,iVar3);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00174a74(uVar1,param_4,param_1);
  uVar1 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00154c7c(uVar1,param_4,param_1,iVar8);
  if (iVar5 == 0) {
    if (iVar3 == 0) {
      fn_0029f9f4(param_1,param_3,param_4,param_5);
    }
    else if (param_2 != 0) {
      piVar6 = (int *)fn_00182994(DAT_008977e4);
      (**(code **)(*piVar6 + 0x14))(piVar6,(char *)&DAT_0029e4b0);
    }
  }
  else {
    fn_0029eb2c(uVar2,param_2,param_3,param_4);
  }
  if (param_5 != iVar4 + -1) {
    return;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001749e8(uVar1,uVar2 & 0xff,1);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001757a4(uVar1,uVar2 & 0xff);
  uVar1 = fn_0029fb10(uVar2,param_4);
  uVar7 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001550fc(uVar7,param_4,uVar1,iVar8);
  if (iVar3 == 0) {
    local_30 = 0;
  }
  else {
    local_30 = param_3;
    if (param_6 == 0) {
      uVar1 = fn_00182994(DAT_008977e4);
      fn_00179990(uVar1,(char *)&DAT_0029e470,uVar2 & 0xff);
    }
  }
  fn_0017a71c(uVar2,local_30,param_2);
  fn_0017a37c(uVar2);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001752d8(uVar1,uVar2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00174c60(uVar1,uVar2 & 0xff);
  return;
}


