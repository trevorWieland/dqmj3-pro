#include "00610bc4_006112fc.h"



void fn_006112fc(undefined4 *param_1)

{
  *param_1 = &DAT_007cc388;
  if (param_1[4] != -1) {
    fn_00159f34(param_1[1]);
  }
  if (param_1[3] != -1) {
    fn_0016a43c(param_1[1]);
  }
  if (param_1[2] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_00611298(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    fn_001088e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
    iVar1 = fn_00154a6c();
    if (iVar1 != 0) {
      fn_00159f34(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
      uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),
                           *(undefined4 *)(*(int *)(param_1 + 0x18) + 0xc),
                           *(undefined4 *)(param_1 + 0xc));
      *(undefined4 *)(param_1 + 0x10) = uVar2;
      *(undefined1 *)(param_1 + 0x14) = 2;
    }
  }
  return;
}



void fn_00611218(undefined4 *param_1)

{
  *param_1 = &DAT_007cc388;
  if (param_1[4] != -1) {
    fn_00159f34(param_1[1]);
  }
  if (param_1[3] != -1) {
    fn_0016a43c(param_1[1]);
  }
  if (param_1[2] != -1) {
                    /* WARNING: Subroutine does not return */
    fn_001482f4(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_006111dc(int param_1)

{
  if (*(char *)(param_1 + 0x14) == '\0') {
    *(undefined1 *)(param_1 + 0x14) = 1;
  }
  else if (*(char *)(param_1 + 0x14) == '\x01') {
                    /* WARNING: Subroutine does not return */
    fn_0011dda8();
  }
  return;
}



undefined4 fn_00610fb4(float *param_1,int param_2,float *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_40;
  undefined4 local_3c;
  
  fVar6 = *(float *)(param_2 + 0x48);
  fVar3 = 0.0;
  fVar7 = (*(float *)(param_2 + 8) + *(float *)(param_2 + 0x3c)) - (*param_3 + *param_1);
  fVar5 = (*(float *)(param_2 + 0xc) + *(float *)(param_2 + 0x40)) - (param_3[1] + param_1[1]);
  fVar4 = (*(float *)(param_2 + 0x10) + *(float *)(param_2 + 0x44)) - (param_3[2] + param_1[2]);
  iVar1 = fn_0068cafc(DAT_008977e8);
  if ((*(float *)(iVar1 + 0x1b4) + *(float *)(iVar1 + 0x1b8) + fVar6 < fVar5) ||
     (fVar5 < *(float *)(iVar1 + 0x1b8) - fVar6)) {
    return 0;
  }
  fVar5 = *(float *)(iVar1 + 0x1ac) + fVar6 * 2.0;
  fVar4 = fVar7 * fVar7 + fVar3 * fVar3 + fVar4 * fVar4;
  if (fVar4 <= fVar5 * fVar5) {
    fn_00525bd0();
    fVar7 = *(float *)(param_4 + 4) - fVar7 * 0.024543693;
    fn_005df8f8();
    if ((-*(float *)(iVar1 + 0x1b0) <= fVar7) && (fVar7 <= *(float *)(iVar1 + 0x1b0))) {
      return 1;
    }
  }
  local_3c = *(undefined4 *)(iVar1 + 0x1ac);
  local_40 = fVar3;
  fn_005f2d30(&local_40);
  iVar2 = fn_005f1bcc();
  if (iVar2 == 0) {
    local_3c = *(undefined4 *)(iVar1 + 0x1ac);
    local_40 = fVar3;
    fn_005f2d30(&local_40);
    iVar1 = fn_005f1bcc();
    if ((iVar1 == 0) && ((param_1[3] + fVar6) * (param_1[3] + fVar6) <= fVar4)) {
      return 0;
    }
  }
  return 1;
}



int fn_00610f64(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006cb0bc(param_3);
  if (param_1 != 0x97) {
    if (((iVar1 == 0) || (iVar1 = fn_006cb09c(param_3), iVar1 == 0)) ||
       (iVar2 = fn_006a7ab8(param_1), iVar2 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



bool fn_00610f3c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cb040(param_3);
  return iVar1 <= iVar2;
}



int fn_00610eec(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006cb074(param_3);
  if (param_1 != 0x91) {
    if (((iVar1 == 0) || (iVar1 = fn_006cb054(param_3), iVar1 == 0)) ||
       (iVar2 = fn_006a7ab8(param_1), iVar2 < iVar1)) {
      iVar1 = 0;
    }
    else {
      iVar1 = 1;
    }
  }
  return iVar1;
}



bool fn_00610ec4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf88(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610e9c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caa18(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,0,1);
  return iVar1 <= iVar2;
}



bool fn_00610d2c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,0);
  return iVar1 <= iVar2;
}



bool fn_00610d04(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae80(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610cdc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad68(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610cb4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cad7c(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c8c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006caf74(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cac20(param_3);
  return iVar1 <= iVar2;
}



bool fn_00610c34(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006ca964(param_3,0,2);
  return iVar1 <= iVar2;
}



bool fn_00610c0c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = fn_006a7ab8();
  iVar2 = fn_006cae20(param_3);
  return iVar1 <= iVar2;
}



undefined8 fn_00610bc4(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = fn_006caab8(param_3);
  uVar5 = fn_0011c134((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0xe10,0);
  iVar4 = (int)((ulonglong)uVar5 >> 0x20);
  uVar2 = (uint)uVar5;
  uVar3 = fn_006a7ab8(param_1);
  iVar1 = (int)uVar3 >> 0x1f;
  return CONCAT44(uVar2 - uVar3,
                  (uint)((int)(iVar4 - (iVar1 + (uint)(uVar2 < uVar3))) < 0 ==
                        (SBORROW4(iVar4,iVar1) != SBORROW4(iVar4 - iVar1,(uint)(uVar2 < uVar3)))));
}


