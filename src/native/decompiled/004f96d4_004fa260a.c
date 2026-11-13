#include "004f96d4_004fa260a.h"



ulonglong fn_004f9c30(int param_1,uint param_2,undefined1 param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (0xb < param_2) {
    if (DAT_008c0630 != 0) {
      param_2 = 8;
    }
    return CONCAT44(param_2,0xe0e14826);
  }
  uVar4 = 0xc;
  uVar2 = 0;
  do {
    bVar1 = *(byte *)(param_1 + uVar2 * 2 + 0x40);
    uVar3 = (uint)bVar1;
    if (uVar3 == param_2) {
      return (ulonglong)CONCAT14(bVar1,0xc8a14831);
    }
    if ((0xb < uVar3) && (uVar4 == 0xc)) {
      uVar4 = uVar2;
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0xc);
  if ((uVar4 < 0xc) &&
     (uVar5 = fn_004f5a9c(*(undefined4 *)(DAT_008bf4e0 + 0x4c),param_2),
     uVar3 = (uint)((ulonglong)uVar5 >> 0x20), (int)uVar5 != 0)) {
    param_1 = param_1 + uVar4 * 2;
    *(char *)(param_1 + 0x40) = (char)param_2;
    *(undefined1 *)(param_1 + 0x41) = param_3;
    return (ulonglong)uVar3 << 0x20;
  }
  return CONCAT44(uVar3,0xd861482c);
}



uint fn_004f9b84(int param_1)

{
  byte bVar1;
  uint unaff_r5;
  bool bVar2;
  
  bVar1 = *(byte *)(DAT_008bf4e0 + 99);
  bVar2 = bVar1 == 0xb;
  if (bVar1 < 0xc) {
    bVar2 = bVar1 == *(byte *)(DAT_008bf4e0 + 0x62);
  }
  if (bVar2) {
    if (*(char *)(DAT_008bf4e0 + 0x69) == '\0') {
      fn_00503e50(DAT_008bf4e0,param_1 + 0xb4);
    }
    else {
      fn_00505e04();
    }
  }
  else {
    fn_0050697c(DAT_008bf4e0,param_1 + 0xb4);
  }
  *(code **)(param_1 + 0x24) = fn_004f9190;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(char **)(param_1 + 0x2c) = "AutoMatchmakeJob::WaitLeaveMesh";
  return unaff_r5 & 0xff00 | 5;
}



int fn_004f97fc(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  
  if ((((param_2 - 0x100000U < 0x3ff00000 && param_3 - 0x100000U < 0x3ff00000) &&
        param_4 - 0x100000U < 0x3ff00000) && (param_5 != 0)) && (param_1[0x10] == 0)) {
    iVar1 = fn_006d96e0(DAT_008bf4e8);
    if (iVar1 == 5) {
      iVar1 = -0x275eb7db;
    }
    else {
      iVar1 = (**(code **)(*param_1 + 0x28))(param_1,param_3,param_4,param_5);
      if (-1 < iVar1) {
        param_1[0x10] = param_2;
        fn_004ed050(param_2);
        *(undefined1 *)(param_1 + 0x15) = 0;
        *(undefined1 *)((int)param_1 + 0x5a) = 0;
        (**(code **)(*param_1 + 8))(param_1,1);
        DAT_008edaef = 0xff;
        DAT_008edb13 = 0xff;
        DAT_008edb14 = 0xff;
        DAT_008edb15 = 0xff;
        DAT_008edb16 = 0xff;
        DAT_008edb17 = 0xff;
        DAT_008edb34 = 0xffff;
        DAT_008edb36 = 0xffff;
        iVar1 = *(int *)(DAT_008bf49c + 0x34);
        param_1[0x38] = *(int *)(DAT_008bf49c + 0x30);
        param_1[0x39] = iVar1;
        return 0;
      }
    }
  }
  else {
    iVar1 = -0x1f1eb7da;
  }
  return iVar1;
}



uint fn_004f96d4(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint unaff_r5;
  
  iVar1 = fn_006d96e0(DAT_008bf4e8);
  if (iVar1 == 5) {
    fn_004ed098(param_1[0x10],0xd8a14825);
    param_1[0x10] = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  uVar3 = (uint)*(byte *)(DAT_008bf4e8 + 0xb5);
  if (*(int *)(DAT_008bf4e8 + (uint)(uVar3 == 0) * 4 + 0xc4) != 0) {
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
  }
  piVar2 = *(int **)(DAT_008bf4e8 + uVar3 * 4 + 0xb8);
  iVar1 = (**(code **)(*piVar2 + 0x54))(piVar2,param_1 + 0x18);
  if (iVar1 != 0) {
    if ((char)param_1[0x2d] == '\x03') {
                    /* WARNING: Could not recover jumptable at 0x004f979c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar3 = (**(code **)(*param_1 + 0x38))(param_1,param_1[0x2e]);
      return uVar3;
    }
    if ((char)param_1[0x2d] == '\x02') {
      param_1[0x17] = param_1[0x1e];
      param_1[0xb] = (int)"AutoMatchmakeJob::JoinMesh";
      param_1[9] = (int)fn_004f9a90;
      param_1[10] = 0;
      return param_4 & 0xff00;
    }
  }
  return unaff_r5 & 0xff00 | 5;
}



uint fn_004f9a90(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint unaff_r5;
  
  iVar1 = fn_006d96e0(DAT_008bf4e8);
  if (iVar1 == 5) {
    fn_004ed098(param_1[0x10],0xd8a14825);
    param_1[0x10] = 0;
    return unaff_r5 & 0xff00 | 1;
  }
  iVar1 = fn_005047d0(DAT_008bf4e0,param_1 + 0x18);
  if (iVar1 < 0) {
    DAT_008edb24 = fn_005075d8(DAT_008bf4e8);
                    /* WARNING: Could not recover jumptable at 0x004f9af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(*param_1 + 0x38))(param_1,iVar1);
    return uVar2;
  }
  *(undefined1 *)(DAT_008bf4e0 + 0xa4) = 1;
  param_1[9] = (int)fn_004f9024;
  param_1[10] = 0;
  param_1[0xb] = (int)"AutoMatchmakeJob::WaitJoinMesh";
  *(undefined1 *)(param_1 + 0x11) = 2;
  return unaff_r5 & 0xff00 | 5;
}


