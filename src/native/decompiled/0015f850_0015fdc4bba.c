#include "0015f850_0015fdc4bba.h"

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


void fn_0015fb38(int param_1)

{
  char cVar1;
  bool bVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  code *pcVar5;
  uint uVar6;
  uint *puVar7;
  uint in_r12;
  
  while( true ) {
    svc_0x24();
    if (*(int *)(param_1 + 0x2c) < 0) {
      fn_0015e294();
    }
    svc_0x19();
    if (*(int *)(param_1 + 0x2c) < 0) {
      fn_0015e294();
    }
    if (*(char *)(param_1 + 0x77) != '\0') break;
    while( true ) {
      pbVar3 = *(byte **)(param_1 + 0x34);
      if (pbVar3 == (byte *)0x0) {
        puVar4 = &DAT_d8a02bf8;
      }
      else if (pbVar3[1] == 0) {
        puVar4 = &DAT_00002bef;
      }
      else {
        in_r12 = (uint)pbVar3[*pbVar3 + 0xc];
        do {
          puVar7 = *(uint **)(param_1 + 0x34);
          uVar6 = *puVar7;
          bVar2 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar2);
        *puVar7 = ((uVar6 & 0xff) + 1) % 0x34 | uVar6 & 0xffff0000 |
                  (((uVar6 & 0xff00) >> 8) - 1) * 0x100 & 0xff00;
        puVar4 = (undefined1 *)0x0;
        if (*(char *)(*(int *)(param_1 + 0x34) + 2) == '\x01') {
          puVar4 = &DAT_d8a02a02;
        }
      }
      if (puVar4 == &DAT_00002bef) break;
      uVar6 = in_r12 & 0xff;
      fn_00170704(param_1);
      pcVar5 = *(code **)(param_1 + uVar6 * 4 + 0x10);
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)();
      }
      cVar1 = *(char *)(param_1 + 0x76);
      *(undefined1 *)(param_1 + 0x76) = 2;
      if (cVar1 == '\x01') {
        fn_0015dfc0(param_1 + 100);
      }
      fn_001707b4(param_1);
    }
  }
  return;
}


