#include "0029f8c0_002a0778.h"



void fn_002a0778(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00175724(uVar1,param_1);
  if (iVar2 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar1,0x34,1);
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001642a4(uVar1,param_1);
  if (iVar2 == 0x23f) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar1,900,1);
    return;
  }
  if (iVar2 == 0x240) {
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar1,0x385,1);
    return;
  }
  return;
}



void fn_002a05e0(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar3 = fn_001659c0(uVar2,(int)(char)param_1,(int)(char)param_2);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00155560(uVar2,param_1,param_2);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar5 = fn_00174aec(uVar2,param_1,param_2);
  if (iVar4 == 0) {
    return;
  }
  if (iVar5 != 3) {
    if (iVar5 < 4) {
      if (iVar5 == 1) {
        uVar2 = fn_00182994(DAT_008977e4);
        fn_00155194(uVar2,uVar3 & 0xff,iVar4);
        return;
      }
      if (iVar5 == 2) {
        uVar2 = fn_00182994(DAT_008977e4);
        fn_00155240(uVar2,uVar3 & 0xff,iVar4);
        return;
      }
      return;
    }
    if (iVar5 == 4) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00154d74(uVar2,uVar3 & 0xff,iVar4);
      return;
    }
    if (iVar5 != 10) {
      return;
    }
  }
  uVar2 = fn_00182994(DAT_008977e4);
  fn_0016427c(uVar2,uVar3 & 0xff,iVar4);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00164230(uVar2,param_1,param_2);
  if (iVar4 == 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00164208(uVar2,param_1,param_2);
    if (iVar4 == 0) {
      return;
    }
  }
  uVar2 = fn_00182994(DAT_008977e4);
  sVar1 = fn_001645e0(uVar2,uVar3);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_0016427c(uVar2,uVar3 & 0xff,(int)(short)(sVar1 + -1));
  return;
}



undefined4 fn_002a0564(int param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 != 7) {
    if (param_1 < 8) {
      if (param_1 - 2U < 5) {
        return 1;
      }
    }
    else {
      if (param_1 == 10) {
        return 1;
      }
      if (param_1 < 0xb) {
        if (param_1 == 8 || param_1 == 9) {
          return 1;
        }
      }
      else if (param_1 == 0xb || param_1 == 0x52) {
        return 1;
      }
    }
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_00175324(uVar1,(int)param_2);
    if (iVar2 == 0) {
      return 0;
    }
  }
  return 1;
}



void fn_002a0188(char param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar1,(int)param_1,(int)param_2);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001749e8(uVar1,uVar2 & 0xff,1);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001757a4(uVar1,uVar2 & 0xff);
  fn_0017a71c(uVar2,param_4,param_3);
  fn_0017a37c(uVar2);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001752d8(uVar1,uVar2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00174c60(uVar1,uVar2 & 0xff);
  return;
}



bool fn_002a0178(uint param_1)

{
  return 0xc < param_1;
}



void fn_0029fc58(char param_1,char param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  uVar2 = fn_001659c0(uVar1,(int)param_1,(int)param_2);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001749e8(uVar1,uVar2 & 0xff,1);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001757a4(uVar1,uVar2 & 0xff);
  fn_0017a71c(uVar2,param_4,param_3);
  fn_0017a37c(uVar2);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001752d8(uVar1,uVar2 & 0xff);
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00174c60(uVar1,uVar2 & 0xff);
  return;
}



undefined4 fn_0029fc08(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001657c8(uVar1,(int)(char)param_1);
  if (iVar2 - 0x10U < 8) {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_00154f50(uVar1,param_1);
    if (iVar2 != 0) {
      return 1;
    }
  }
  return 0;
}



int fn_0029fb10(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = 0;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001648dc(uVar1,param_2);
  iVar8 = (int)(char)param_2;
  if (iVar2 == 0) {
    iVar6 = 0;
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_0016561c(uVar1,iVar8);
    iVar7 = 0;
    if (0 < iVar2) {
      do {
        uVar1 = fn_00182994(DAT_008977e4);
        uVar3 = fn_001659c0(uVar1,iVar8,(int)(char)iVar7);
        uVar1 = fn_00182994(DAT_008977e4);
        iVar4 = fn_00174a8c(uVar1,uVar3 & 0xff);
        uVar1 = fn_00182994(DAT_008977e4);
        iVar5 = fn_001752ec(uVar1,0x45,uVar3);
        if ((((int)uVar3 < param_1) && (iVar4 == 0)) || (((int)uVar3 < param_1 && (iVar5 == 1)))) {
          iVar6 = iVar6 + 1;
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < iVar2);
    }
  }
  else {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_001659c0(uVar1,iVar8,0);
    if (param_1 != iVar2) {
      iVar6 = -1;
    }
  }
  return iVar6;
}



undefined4 fn_0029fabc(undefined4 param_1)

{
  switch(param_1) {
  case 0:
  case 1:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
    return 0;
  default:
    return 1;
  }
}



undefined4 fn_0029f9f4(undefined4 param_1,int param_2,undefined4 param_3,short param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)(char)param_3,(int)(char)param_1);
  uVar2 = fn_00182994(DAT_008977e4);
  fn_00179990(uVar2,(char *)&DAT_0029faa8,uVar1);
  if (param_2 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar3 = fn_001550fc(uVar2,param_3,param_1,(int)param_4);
    if (0 < iVar3) {
      uVar2 = fn_00182994(DAT_008977e4);
      fn_00182c40(uVar2,uVar1,7,4);
      uVar2 = fn_00182994(DAT_008977e4);
      uVar4 = fn_0016a6d0(uVar2,uVar1,0);
    }
  }
  return uVar4;
}



void fn_0029f9cc(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00164c80(uVar1,param_1,2);
  return;
}



void fn_0029f8c0(int param_1,uint param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  float fVar7;
  ulonglong uVar8;
  
  uVar1 = fn_00182994(DAT_008977e4);
  fn_00149880(uVar1,1);
  uVar4 = 0x10;
  uVar6 = 0x14;
  fVar7 = 0.0;
  if (param_2 == 0) {
    uVar4 = 0x14;
    uVar6 = 0x18;
  }
  else {
    fVar7 = 180.0;
  }
  iVar5 = 0;
  iVar2 = fn_0016c0d0(param_2);
  if (uVar4 < uVar6) {
    uVar8 = (ulonglong)(uint)(int)fVar7;
    do {
      uVar1 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00174a8c(uVar1,uVar4 & 0xff);
      if (iVar3 != 2) {
        iVar3 = iVar5;
        if (param_2 == 0) {
          iVar3 = iVar5 + 4;
        }
        fn_0029e6fc(uVar4,(&PTR_s_move_001_S01S4target_007bb730)[iVar2 * 8 + iVar3],(int)uVar8);
        iVar5 = iVar5 + 1;
      }
      uVar4 = (uint)(char)((char)uVar4 + '\x01');
    } while ((int)uVar4 < (int)uVar6);
  }
  if (param_1 == 0) {
    return;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  fn_001493dc(uVar1,(&PTR_s_camera_000_ALLYS4_007bc130)[iVar2 * 2 + (param_2 ^ 1)],
               (&PTR_s_camtgt_000_ALLYS4_007bc170)[iVar2 * 2 + (param_2 ^ 1)]);
  return;
}


