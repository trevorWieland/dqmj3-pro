#include "0011c034_0011c200.h"

static void svc_0x25(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x25 }
#endif
}

static void svc_0x2d(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x2d }
#endif
}


undefined4 *
fn_0011c200(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1[1] = &DAT_008f9d04;
  param_1[2] = &DAT_008f9cf4;
  param_1[4] = 0;
  param_1[5] = param_1 + 5;
  param_1[6] = param_1 + 5;
  param_1[7] = 0;
  param_1[8] = param_1 + 8;
  param_1[0xb] = 0;
  param_1[9] = param_1 + 8;
  *param_1 = param_2;
  param_1[0xc] = 0;
  fn_001008cc(param_1 + 1,param_3);
  fn_00147974(param_1 + 2,param_4);
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_0013f86c();
  }
  param_1[3] = uVar2;
  param_1[10] = 0xffffffff;
  return param_1;
}



int fn_0011c134(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  
  uVar2 = param_2 >> 1;
  uVar1 = param_4 >> 1;
  if ((int)uVar2 < 0) {
    bVar4 = param_1 != 0;
    param_1 = -param_1;
    param_2 = -(param_2 + (uint)bVar4);
  }
  if ((int)param_4 < 0) {
    bVar4 = param_3 != 0;
    param_3 = -param_3;
    param_4 = -(param_4 + bVar4);
  }
  iVar3 = fn_00169c20(param_1,param_2,param_3,param_4);
  if (((uVar2 ^ uVar1) & 0x40000000) != 0) {
    iVar3 = -iVar3;
  }
  return iVar3;
}



undefined8 fn_0011c10c(uint param_1,int param_2,uint param_3)

{
  if ((int)(param_3 - 0x20) < 0) {
    return CONCAT44(param_2 >> (param_3 & 0xff),
                    param_1 >> (param_3 & 0xff) | param_2 << (0x20 - param_3 & 0xff));
  }
  return CONCAT44(param_2 >> 0x1f,param_2 >> (param_3 - 0x20 & 0xff));
}



undefined4
fn_0011c0e8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  svc_0x25();
  *param_1 = param_2;
  return param_5;
}



void fn_0011c0d0(undefined4 *param_1,undefined4 param_2)

{
  svc_0x2d();
  *param_1 = param_2;
  return;
}



undefined4 fn_0011c09c(void)

{
  return 0x3000000;
}



undefined4 fn_0011c088(void)

{
  fn_00113e88();
  fn_00113f40();
  return 0x3000000;
}



void fn_0011c034(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_1;
  uVar4 = param_1[1];
  if (uVar3 != uVar4) {
    uVar1 = uVar3;
    if (uVar4 <= uVar3) {
      do {
        uVar1 = uVar1 + 0x38;
      } while (uVar1 != uVar4);
    }
    iVar2 = (int)((longlong)(int)(uVar4 - uVar3) * -0x6db6db6d +
                  ((ulonglong)(uVar4 - uVar3) << 0x20) >> 0x20);
    param_1[1] = uVar4 + ((iVar2 >> 5) - (iVar2 >> 0x1f)) * -0x38;
  }
  return;
}


