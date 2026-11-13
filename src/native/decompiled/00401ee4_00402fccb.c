#include "00401ee4_00402fccb.h"



void fn_00402fcc(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (*(char *)(param_1 + 0x14) == '\0') {
    uVar3 = fn_00182994(DAT_008977e4);
    iVar2 = fn_00174a74(uVar3,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    if (*(int *)(param_1 + 0xc) < iVar2) {
      if (-1 < *(int *)(param_1 + 0x18)) {
        uVar3 = fn_00182994(DAT_008977e4);
        fn_001483c0(uVar3,*(undefined4 *)(param_1 + 0x18));
        *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
      }
      uVar3 = fn_002a1070(*(undefined4 *)(param_1 + 8),1,1,*(undefined4 *)(param_1 + 4),
                           *(undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 0x18) = uVar3;
      fn_0029fcf4(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4),
                   *(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
      if (*(int *)(param_1 + 0x18) == -1) {
        uVar3 = fn_00182994(DAT_008977e4);
        uVar1 = fn_001659c0(uVar3,(int)*(char *)(param_1 + 4),(int)*(char *)(param_1 + 8));
        uVar3 = fn_00182994(DAT_008977e4);
        fn_0016a6d0(uVar3,uVar1,0);
      }
      *(undefined4 *)(param_1 + 0x1c) = 10;
      *(undefined1 *)(param_1 + 0x14) = 1;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      *(undefined1 *)(param_1 + 0x15) = 0;
      return;
    }
    uVar1 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x14) != '\x01') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x1c) + -1;
    *(int *)(param_1 + 0x1c) = iVar2;
    if (0 < iVar2) {
      return;
    }
    uVar1 = *(undefined1 *)(param_1 + 0x15);
  }
  *(undefined1 *)(param_1 + 0x14) = uVar1;
  return;
}



void fn_00402bf0(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint in_fpscr;
  float in_s0;
  int iVar7;
  
  uVar2 = fn_00182994(DAT_008977e4);
  uVar1 = fn_001659c0(uVar2,(int)*(char *)(param_1 + 4),0);
  uVar2 = fn_00182994(DAT_008977e4);
  uVar3 = fn_001754ac(uVar2,uVar1);
  uVar2 = fn_0016c0d0();
  uVar4 = fn_0029f004(uVar3 ^ 1,uVar2);
  uVar5 = fn_00182994(DAT_008977e4);
  uVar4 = fn_00149844(uVar5,(char *)&DAT_00402cac,uVar4);
  fn_0029f030(uVar2);
  iVar7 = (int)in_s0;
  piVar6 = (int *)fn_00182994(DAT_008977e4);
  VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar6 + 0x54))(piVar6,uVar4);
  *(undefined4 *)(param_1 + 0xc) = 0xf;
  *(undefined1 *)(param_1 + 9) = 3;
  *(undefined1 *)(param_1 + 10) = 2;
  return;
}



void fn_004029fc(int param_1)

{
  undefined1 uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float in_s0;
  
  switch(*(undefined1 *)(param_1 + 9)) {
  case 0:
    *(undefined4 *)(param_1 + 0xc) = 0x28;
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 10) = 1;
    break;
  case 1:
    uVar6 = fn_00182994(DAT_008977e4);
    uVar1 = fn_001659c0(uVar6,(int)*(char *)(param_1 + 4),0);
    uVar6 = fn_00182994(DAT_008977e4);
    uVar2 = fn_001754ac(uVar6,uVar1);
    uVar6 = fn_0016c0d0();
    uVar3 = fn_0029f004(uVar2 ^ 1,uVar6);
    uVar4 = fn_00182994(DAT_008977e4);
    uVar3 = fn_00149844(uVar4,(char *)&DAT_00402cac,uVar3);
    fn_0029f030(uVar6);
    iVar9 = (int)in_s0;
    piVar5 = (int *)fn_00182994(DAT_008977e4);
    VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x16) & 3);
    (**(code **)(*piVar5 + 0x54))(piVar5,uVar3);
    *(undefined4 *)(param_1 + 0xc) = 0xf;
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 10) = 2;
    return;
  case 2:
    uVar6 = fn_00182994(DAT_008977e4);
    iVar9 = fn_0016561c(uVar6,(int)*(char *)(param_1 + 4));
    iVar10 = 0;
    if (0 < iVar9) {
      do {
        fn_002a17e8(*(undefined4 *)(param_1 + 4),iVar10);
        fn_0029ffa8(*(undefined4 *)(param_1 + 4),iVar10,0);
        fn_002a05e0(*(undefined4 *)(param_1 + 4),iVar10);
        uVar6 = fn_00182994(DAT_008977e4);
        iVar7 = fn_00174c34(uVar6,0xc,*(undefined4 *)(param_1 + 4),iVar10);
        uVar6 = fn_00182994(DAT_008977e4);
        iVar8 = fn_001754f0(uVar6,*(undefined4 *)(param_1 + 4),iVar10);
        if ((iVar8 != 0) && (iVar7 == 0)) {
          fn_002a0188(*(undefined4 *)(param_1 + 4),iVar10,1,(int)*(char *)(param_1 + 8));
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < iVar9);
    }
    *(undefined4 *)(param_1 + 0xc) = 0x19;
    *(undefined1 *)(param_1 + 9) = 3;
    *(undefined1 *)(param_1 + 10) = 4;
    return;
  case 3:
    iVar9 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar9;
    if (iVar9 < 1) {
      *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_1 + 10);
    }
    return;
  }
  return;
}



void fn_004021fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00174c80(uVar1,(int)*(char *)(param_1 + 4),0);
  if ((iVar2 != 0) && (iVar2 = fn_003035b0(iVar2,(char *)&DAT_004022b0), iVar2 == 0)) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00175044(uVar1,(int)*(char *)(param_1 + 4),0);
  if (((iVar2 != 0) && (iVar2 = fn_003035b0(iVar2,(char *)&DAT_004022cc), iVar2 == 0)) &&
     (0 < *(int *)(param_1 + 0x20))) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x18);
  }
  if (*(int *)(param_1 + 0x10) < 1) {
    *(undefined1 *)(param_1 + 0xe) = 10;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 8;
    *(undefined1 *)(param_1 + 0xf) = 10;
  }
  return;
}



void fn_00402128(undefined4 *param_1)

{
  *param_1 = &DAT_0083770c;
  if (param_1[3] != 0) {
    fn_002e3bbc();
    fn_002feef8();
  }
  fn_002feef8(param_1);
  return;
}



void fn_00402028(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (**(code **)(*param_1 + 0xc))(param_1);
  if (iVar3 != 0) {
    return;
  }
  cVar1 = (char)param_1[2];
  if (cVar1 == '\0') {
    iVar4 = fn_00145b00(0x28,&DAT_00812c8c);
    iVar3 = 0;
    if (iVar4 != 0) {
      iVar3 = fn_002e3ad8(iVar4,*(undefined4 *)(DAT_008977e0 + 0x28));
    }
    iVar4 = param_1[3];
    if (iVar4 != iVar3) {
      if (iVar4 != 0) {
        fn_002e3bbc(iVar4);
        fn_002feef8();
      }
      param_1[3] = iVar3;
    }
    fn_002e3524(param_1[3],param_1[1],0);
    uVar2 = 1;
  }
  else {
    if (cVar1 == '\x01') {
      iVar3 = fn_002e3564(param_1[3]);
      if (iVar3 != 0) {
        *(undefined1 *)(param_1 + 2) = 2;
      }
      return;
    }
    if (cVar1 != '\x02') {
      return;
    }
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 2) = uVar2;
  return;
}


