#include "0015f850_0015fdc4bbba.h"

static void svc_0x18(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x18 }
#endif
}

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0x24(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x24 }
#endif
}


void fn_0015fcd8(int param_1)

{
  *(undefined1 *)(param_1 + 0x77) = 1;
  svc_0x18();
  if (*(int *)(param_1 + 0x2c) < 0) {
    fn_0015e294();
  }
  svc_0x24();
  if (*(int *)(param_1 + 0x6c) < 0) {
    fn_0015e294();
  }
  *(undefined1 *)(param_1 + 0x70) = 1;
  fn_0015e304(param_1 + 0x6c);
  if (*(int *)(param_1 + 0x6c) != 0) {
    svc_0x23();
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  fn_00170704(param_1);
  fn_001502a4();
  fn_0017189c();
  fn_00171800(param_1 + 0x58);
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  fn_0015e144(param_1 + 0x38);
  if (*(int *)(param_1 + 0x2c) != 0) {
    svc_0x23();
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  fn_001707b4(param_1);
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}


