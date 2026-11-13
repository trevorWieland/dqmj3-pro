#include "00656cac_00657410b.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_00657410(int param_1)

{
  svc_0x18();
  if (*(int *)(param_1 + 0x10) < 0) {
    fn_0015e294();
    return;
  }
  return;
}



void fn_006573e8(int param_1)

{
  svc_0x24();
  if (*(int *)(param_1 + 0x10) < 0) {
    fn_0015e294();
    return;
  }
  return;
}



bool fn_00657378(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  lVar1 = (ulonglong)param_3 * 3 +
          ((ulonglong)
           (uint)(((int)param_4 >> 0x1f) * -0x452cb512 +
                 (int)((ulonglong)param_4 * 0xbad34aee >> 0x20)) << 0x20 |
          (ulonglong)param_4 * 0xbad34aee & 0xffffffff) +
          CONCAT44(param_4 * 3,(int)((ulonglong)param_3 * 0xbad34aee >> 0x20));
  svc_0x24();
  if (-((int)uVar2 >> 0x1f) != 0) {
    fn_0015e294(uVar2,-((int)uVar2 >> 0x1f),(int)lVar1,(int)((ulonglong)lVar1 >> 0x20));
  }
  return (uVar2 & 0x3ff) != 0x3fe;
}



void fn_00657358(int param_1)

{
  svc_0x19();
  if (*(int *)(param_1 + 0x10) < 0) {
    fn_0015e294();
    return;
  }
  return;
}



void fn_00657320(undefined4 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  DAT_008c3630 = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  return;
}



int fn_006571b4(undefined4 param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                undefined1 param_6,int param_7)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined4 *)fn_00659048();
  puVar1[4] = &DAT_00859700;
  uVar3 = *(undefined4 *)(param_2 + 4);
  *puVar1 = &DAT_008598ac;
  puVar1[5] = uVar3;
  puVar1[6] = param_4;
  puVar1[7] = param_5;
  puVar1[8] = param_3;
  puVar1[10] = puVar1 + 9;
  puVar1[0xb] = 0;
  puVar1[9] = puVar1 + 9;
  puVar1[0xc] = 0xffffffff;
  puVar1[0xd] = 0;
  puVar1[0xe] = 0;
  puVar1[0x10] = puVar1 + 0xf;
  puVar1[0x11] = 0;
  puVar1[0xf] = puVar1 + 0xf;
  puVar1[0x12] = 0xffffffff;
  *(undefined1 *)(puVar1 + 0x13) = param_6;
  iVar2 = fn_00656cac(puVar1 + 0x14);
  *(undefined4 *)(iVar2 + 0x1c) = 4;
  if (param_7 != 0) {
    *(undefined4 *)(iVar2 + 0x1c) = 5;
  }
  iVar5 = 0;
  if ((*(uint *)(iVar2 + 0x1c) & 1) != 0) {
    fn_00656bb8();
    iVar5 = iVar2;
  }
  *(undefined4 *)(iVar2 + -0x20) = 0x34;
  *(undefined4 *)(iVar2 + -8) = 8;
  if (param_3 != 0) {
    iVar4 = 0;
    if ((*(uint *)(param_3 + 0x6c) & 1) != 0) {
      fn_00656bb8();
      iVar4 = param_3 + 0x50;
    }
    fn_00658e20(param_3 + 0x24,*(int *)(param_3 + 0x30) + iVar2 + -0x50);
    *(int *)(param_3 + 0x2c) = *(int *)(param_3 + 0x2c) + 1;
    if (iVar4 != 0) {
      fn_00656ca4(iVar4);
    }
  }
  if (iVar5 != 0) {
    fn_00656ca4(iVar5);
  }
  return iVar2 + -0x50;
}



void fn_00657104(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
    fn_00656bb8();
    iVar3 = param_1 + 0x50;
  }
  fn_00657064(param_1,0);
  iVar1 = *(int *)(param_1 + 0x20);
  if (iVar1 != 0) {
    iVar2 = 0;
    if ((*(uint *)(iVar1 + 0x6c) & 1) != 0) {
      fn_00656bb8();
      iVar2 = iVar1 + 0x50;
    }
    fn_00658e3c(*(int *)(iVar1 + 0x30) + param_1);
    *(int *)(iVar1 + 0x2c) = *(int *)(iVar1 + 0x2c) + -1;
    if (iVar2 != 0) {
      fn_00656ca4(iVar2);
    }
  }
  if (iVar3 == 0) {
    return;
  }
  fn_00656ca4(iVar3);
  return;
}


