#include "0011a24c_0011b40c.h"

static void svc_0x28(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x28 }
#endif
}


void fn_0011b40c(void)

{
  int iVar1;
  
  iVar1 = DAT_008e3108;
  if (DAT_008e3108 == 0) {
    return;
  }
  fn_00150284();
  if (DAT_008e3079 == '\0') {
    DAT_008e307a = DAT_008e3079;
  }
  else {
    *(undefined1 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0x24) * 0x1c + -0x1a) = 1;
    DAT_008e3080 = 1;
  }
  fn_00150294();
  return;
}



void fn_0011b3c4(int param_1)

{
  if (DAT_008e31cc == param_1) {
    return;
  }
  if (param_1 != 0x700) {
    if (param_1 == 0x701) {
      DAT_008e3070 = 800;
      DAT_008e31cc = param_1;
      return;
    }
    if (param_1 != 0x702) {
      return;
    }
  }
  DAT_008e31cc = param_1;
  DAT_008e3070 = 400;
  return;
}



void fn_0011b3ac(undefined4 param_1)

{
  if (DAT_008e3104 != 0) {
    *(undefined4 *)(DAT_008e3104 + 0x38) = param_1;
  }
  return;
}



void fn_0011b34c(void)

{
  if (DAT_008e3104 == 0) {
    return;
  }
  if (DAT_008e3079 != '\0') {
    return;
  }
  DAT_008e3108 = DAT_008e3104;
  DAT_008e307a = 1;
  if (*(int *)(DAT_008e3104 + 0x20) <= *(int *)(DAT_008e3104 + 0x28)) {
    return;
  }
  DAT_008e3079 = 1;
  if (*(int *)(DAT_008e3104 + 0x2c) == 0x300) {
    fn_00150284();
    fn_0016720c();
    fn_00150294();
    return;
  }
  return;
}



int fn_0011a618(int param_1)

{
  int iVar1;
  
  if (param_1 != 0x400) {
    if (param_1 == 0x401) {
      return DAT_008e31c0;
    }
    if (param_1 != 0x402) {
      return 0;
    }
    if (DAT_008e31bc != DAT_008e31c0) {
      iVar1 = DAT_008e31bc;
      if (DAT_008e31bc == 0x7ffffffe) {
        iVar1 = DAT_008e31c0;
      }
      if (DAT_008e31bc == 0x7ffffffe && iVar1 == 0) {
        return 0x7ffffffe;
      }
      iVar1 = DAT_008e31c0;
      if (DAT_008e31c0 == 0x7ffffffe) {
        iVar1 = DAT_008e31bc;
      }
      if (DAT_008e31c0 == 0x7ffffffe && iVar1 == 0) {
        return 0x7ffffffe;
      }
      if (DAT_008e31c0 <= DAT_008e31bc) {
        return DAT_008e31c0;
      }
    }
  }
  return DAT_008e31bc;
}



undefined8 fn_0011a534(uint param_1,uint param_2)

{
  int iVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  svc_0x28();
  uVar3 = (ulonglong)param_1 * 3 +
          ((ulonglong)
           (uint)(((int)param_2 >> 0x1f) * -0x452cb512 +
                 (int)((ulonglong)param_2 * 0xbad34aee >> 0x20)) << 0x20 |
          (ulonglong)param_2 * 0xbad34aee & 0xffffffff) +
          CONCAT44(param_2 * 3,(int)((ulonglong)param_1 * 0xbad34aee >> 0x20));
  uVar5 = (uint)(uVar3 >> 0x20);
  iVar1 = (int)uVar5 >> 0x1f;
  lVar4 = (ulonglong)uVar5 * 0xe353f7cf +
          CONCAT44(iVar1 * -0x1cac0831,(int)((uVar3 & 0xffffffff) * 0xe353f7cf >> 0x20));
  uVar9 = (uint)((ulonglong)lVar4 >> 0x20);
  uVar10 = (uint)((ulonglong)uVar5 * 0x20c49ba5);
  lVar2 = (uVar3 & 0xffffffff) * 0x20c49ba5;
  uVar6 = (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,(uint)lVar4);
  uVar7 = uVar6 + uVar9;
  iVar8 = iVar1 * 0x20c49ba5 + (int)((ulonglong)uVar5 * 0x20c49ba5 >> 0x20) +
          ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar6,uVar9) + (uint)CARRY4(uVar10,uVar7);
  uVar5 = uVar10 + uVar7 >> 7 | iVar8 * 0x2000000;
  return CONCAT44((iVar8 >> 7) + (uint)CARRY4(uVar5,-iVar1),uVar5 + -iVar1);
}



void fn_0011a428(int param_1)

{
  short sVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int local_28;
  int local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  uVar6 = 1;
  cVar2 = *(char *)(param_1 + 0x7f);
  uVar7 = 1;
  uVar5 = 1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      uVar5 = 2;
    }
    else if (cVar2 == '\x02') {
      uVar5 = 2;
      uVar6 = 2;
    }
  }
  cVar2 = *(char *)(param_1 + 0x7e);
  uVar3 = 1;
  if (cVar2 != '\0') {
    if (cVar2 == '\x01') {
      uVar3 = 2;
    }
    else if (cVar2 == '\x02') {
      uVar3 = 2;
      uVar7 = uVar3;
    }
  }
  sVar1 = (short)uVar6;
  if (uVar6 <= uVar7) {
    sVar1 = (short)uVar7;
  }
  if (uVar3 < uVar5) {
    uVar3 = uVar5;
  }
  uVar4 = fn_00118290();
  local_20 = 0x88f08058;
  local_1c = 0x20000;
  local_18 = 0x30000;
  local_28 = uVar3 * 0x100;
  local_24 = sVar1 * 400;
  fn_00128114(&local_28,uVar4);
  return;
}



int fn_0011a41c(int param_1)

{
  return *(int *)(param_1 + 4) + 0x7c;
}



undefined4 fn_0011a3c4(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                       86400000,0);
  fn_0010b2b4(0,local_8,0,iVar1 + -0xb2407);
  return local_8[0];
}



undefined4 fn_0011a36c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                       86400000,0);
  fn_0010b2b4(local_8,0,0,iVar1 + -0xb2407);
  return local_8[0];
}



undefined4 fn_0011a314(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_8 [2];
  
  local_8[0] = param_4;
  iVar1 = fn_0011c134(*param_1 + 0x7cfc8400,param_1[1] + 0x395f + (uint)(0x83037bff < *param_1),
                       86400000,0);
  fn_0010b2b4(0,0,local_8,iVar1 + -0xb2407);
  return local_8[0];
}



void fn_0011a300(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



void fn_0011a24c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  uVar4 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008c62fc), iVar3 != 0)) {
    DAT_008f9e2c = uVar4;
    DAT_008f9e30 = uVar4;
    DAT_008f9e34 = uVar4;
  }
  uVar2 = DAT_008f9e34;
  uVar1 = DAT_008f9e30;
  param_1[2] = DAT_008f9e2c;
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = uVar4;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0xff;
  param_1[0xb] = 0xbf800000;
  param_1[0xc] = 0;
  param_1[0xd] = 0xffffffff;
  return;
}


