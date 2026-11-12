#include "0029ffa8_002a0308.h"



undefined4 fn_002a0308(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = 0;
  iVar6 = 0;
  iVar7 = 0;
  fn_00182994(DAT_008977e4);
  iVar1 = fn_0016561c();
  if (param_3 == 0) {
    iVar5 = 0;
    if (iVar1 < 1) goto LAB_002a0458;
    do {
      uVar2 = fn_00182994(DAT_008977e4);
      iVar3 = fn_00154e64(uVar2,param_1,iVar5);
      if (iVar3 == 0) {
        uVar2 = fn_00182994(DAT_008977e4);
        iVar3 = fn_00164208(uVar2,param_1,iVar5);
        if (iVar3 == 0) {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar3 = fn_00164230(uVar2,param_1,iVar5);
          if (iVar3 != 0) {
            iVar7 = 1;
          }
        }
        else {
          iVar6 = 1;
        }
      }
      else {
        iVar4 = 1;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  else {
    uVar2 = fn_00182994(DAT_008977e4);
    iVar4 = fn_00154e64(uVar2,param_1,param_2);
    uVar2 = fn_00182994(DAT_008977e4);
    iVar6 = fn_00164208(uVar2,param_1,param_2);
    uVar2 = fn_00182994(DAT_008977e4);
    iVar7 = fn_00164230(uVar2,param_1,param_2);
  }
  if (iVar4 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar2,0x1f,1);
  }
  if (iVar6 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar2,0x33,1);
  }
  if (iVar7 != 0) {
    uVar2 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar2,0x32,1);
  }
LAB_002a0458:
  if ((iVar4 != 0 || iVar6 != 0) || iVar7 != 0) {
    if (param_3 == 0) {
      iVar4 = 0;
      if (0 < iVar1) {
        do {
          uVar2 = fn_00182994(DAT_008977e4);
          iVar6 = fn_00154e64(uVar2,param_1,iVar4);
          if (iVar6 != 0) {
            uVar2 = fn_00182994(DAT_008977e4);
            uVar2 = fn_001659c0(uVar2,(int)(char)param_1,(int)(char)iVar4);
            fn_0016c1f4(uVar2,(char *)&DAT_002a054c);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < iVar1);
      }
    }
    else {
      uVar2 = fn_00182994(DAT_008977e4);
      iVar4 = fn_00154e64(uVar2,param_1,param_2);
      if (iVar4 != 0) {
        uVar2 = fn_00182994(DAT_008977e4);
        uVar2 = fn_001659c0(uVar2,(int)(char)param_1,(int)(char)param_2);
        fn_0016c1f4(uVar2,(char *)&DAT_002a054c);
      }
    }
    fn_00182994(DAT_008977e4);
    iVar4 = fn_00165248();
    if (iVar4 < 2) {
      return 0x1e;
    }
  }
  return 0;
}



void fn_002a0224(undefined4 param_1,undefined4 param_2,short param_3,char *param_4,char *param_5)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00154e38(uVar1,param_1,param_2);
  if ((iVar2 != 0) && (*param_4 == '\0')) {
    *param_4 = '\x01';
    uVar1 = fn_00182994(DAT_008977e4);
    fn_00164c80(uVar1,0x39,1);
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00154c7c(uVar1,param_1,param_2,(int)param_3);
  if (iVar2 != 0) {
    uVar1 = fn_00182994(DAT_008977e4);
    iVar2 = fn_00155348(uVar1,param_1,param_2);
    if ((iVar2 != 0) && (*param_5 == '\0')) {
      *param_5 = '\x01';
      uVar1 = fn_00182994(DAT_008977e4);
      fn_00164c80(uVar1,0x3a,1);
      return;
    }
  }
  return;
}



void fn_0029ffa8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  float in_s0;
  float in_s1;
  
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_0017591c(uVar2,param_1,param_2);
  if (iVar3 != 0) {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00155ac8(uVar2,param_1,param_2);
  if (iVar3 != 0) {
    return;
  }
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)(char)param_1,(int)(char)param_2);
  uVar2 = fn_00182994(DAT_008977e4);
  iVar3 = fn_001754ac(uVar2,uVar1);
  uVar8 = 7;
  uVar2 = fn_00182994(DAT_008977e4);
  iVar4 = fn_00174aec(uVar2,param_1,param_2);
  if (iVar4 == 3) {
joined_r0x002a0070:
    if (iVar3 == 0) {
      uVar8 = 0;
    }
    else {
      uVar8 = 1;
    }
  }
  else {
    if (iVar4 < 4) {
      if (iVar4 == 1) goto joined_r0x002a0070;
      if (iVar4 != 2) goto LAB_002a0094;
    }
    else if (iVar4 != 4) {
      if (iVar4 != 10) goto LAB_002a0094;
      goto joined_r0x002a0070;
    }
    uVar8 = 2;
  }
LAB_002a0094:
  uVar2 = fn_00182994(DAT_008977e4);
  uVar2 = fn_00155560(uVar2,param_1,param_2);
  uVar5 = fn_00182994(DAT_008977e4);
  iVar3 = fn_00174a74(uVar5,param_1,param_2);
  iVar4 = 0;
  if (0 < iVar3) {
    do {
      uVar5 = fn_00182994(DAT_008977e4);
      iVar6 = fn_00155a74(uVar5,param_1,param_2,(int)(short)iVar4);
      if (iVar6 == 0) {
        uVar5 = 0;
        goto LAB_002a0100;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar3);
  }
  uVar5 = 1;
LAB_002a0100:
  uVar7 = fn_00182994(DAT_008977e4);
  uVar7 = fn_00174bac(uVar7,uVar1);
  fn_0017a7fc(uVar7,param_3);
  uVar7 = fn_00182994(DAT_008977e4);
  fn_001755cc(uVar7,uVar1,uVar8,uVar2,uVar5,(int)in_s0,(int)in_s1);
  return;
}


