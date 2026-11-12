#include "0019ebdc_0019f23cb.h"

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


void fn_0019f23c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(param_1 + 0x34) = *param_2;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar6;
  *(undefined4 *)(param_1 + 0x4c) = uVar7;
  *(undefined4 *)(param_1 + 0x50) = uVar8;
  uVar2 = param_2[9];
  uVar3 = param_2[10];
  uVar4 = param_2[0xb];
  *(undefined4 *)(param_1 + 0x54) = param_2[8];
  *(undefined4 *)(param_1 + 0x58) = uVar2;
  *(undefined4 *)(param_1 + 0x5c) = uVar3;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  iVar1 = *(int *)(param_1 + 0x68);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = param_2[6];
  uVar8 = param_2[7];
  *(undefined4 *)(iVar1 + 0x38) = *param_2;
  *(undefined4 *)(iVar1 + 0x3c) = uVar2;
  *(undefined4 *)(iVar1 + 0x40) = uVar3;
  *(undefined4 *)(iVar1 + 0x44) = uVar4;
  *(undefined4 *)(iVar1 + 0x48) = uVar5;
  *(undefined4 *)(iVar1 + 0x4c) = uVar6;
  *(undefined4 *)(iVar1 + 0x50) = uVar7;
  *(undefined4 *)(iVar1 + 0x54) = uVar8;
  uVar2 = param_2[8];
  uVar3 = param_2[9];
  uVar4 = param_2[10];
  *(undefined4 *)(iVar1 + 100) = param_2[0xb];
  *(undefined4 *)(iVar1 + 0x58) = uVar2;
  *(undefined4 *)(iVar1 + 0x5c) = uVar3;
  *(undefined4 *)(iVar1 + 0x60) = uVar4;
  *(ushort *)(iVar1 + 0x6c) = *(ushort *)(iVar1 + 0x6c) | 1;
  return;
}



void fn_0019f1fc(int param_1)

{
  if (*(char *)(param_1 + 0x104) != '\0') {
    *(undefined1 *)(param_1 + 0x104) = 0;
    *(undefined4 *)(param_1 + 0x3c) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined4 *)(param_1 + 0x60) = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 100) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  return;
}



void fn_0019f1b0(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x56) != '\0') {
    *(undefined1 *)(param_1 + 0x56) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar2 != 0) {
      iVar3 = 0;
      do {
        iVar1 = iVar3 * 4;
        uVar2 = uVar2 - 1;
        iVar3 = iVar3 + 1;
        *(undefined4 *)(param_1 + iVar1 + 0x1c) = 0;
      } while (uVar2 != 0);
    }
  }
  return;
}



void fn_0019f158(int *param_1)

{
  if ((char)param_1[0x4c7] != '\0') {
    svc_0x24();
    if (*param_1 < 0) {
      fn_0015e294();
    }
    svc_0x19();
    if (*param_1 < 0) {
      fn_0015e294();
    }
    *(char *)((int)param_1 + 0x131d) = *(char *)((int)param_1 + 0x131d) + '\x01';
  }
  return;
}



bool fn_0019f0e8(uint *param_1)

{
  uint uVar1;
  bool bVar2;
  
  bVar2 = false;
  if ((char)param_1[0x4c7] != '\0') {
    uVar1 = *param_1;
    svc_0x24();
    if ((int)uVar1 < 0) {
      fn_0015e294();
    }
    bVar2 = (uVar1 & 0x3ff) != 0x3fe;
    if (bVar2) {
      svc_0x19();
      if ((int)*param_1 < 0) {
        fn_0015e294();
      }
      *(char *)((int)param_1 + 0x131d) = *(char *)((int)param_1 + 0x131d) + '\x01';
    }
  }
  return bVar2;
}


