#include "0051cfb4_00537704ba.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


void fn_00529c18(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  bool bVar3;
  
  fn_00528a4c(&DAT_008ec0d0);
  fn_00170704(&DAT_008ec0e0);
  puVar2 = DAT_008ec0d4;
  if (DAT_008ec0d4 != (undefined4 *)0x0) {
    do {
      if (puVar2[2] != 0) {
        svc_0x23();
        puVar2[2] = 0;
      }
      puVar1 = (undefined4 *)0x0;
      if (DAT_008ec0d4 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)*DAT_008ec0d4;
      }
      bVar3 = puVar1 != puVar2;
      if (bVar3) {
        puVar2 = (undefined4 *)puVar2[1];
      }
    } while (bVar3 && puVar2 != (undefined4 *)0x0);
  }
  while (DAT_008ec0f4 != 0) {
    fn_001707b4(&DAT_008ec0e0);
    fn_0012d6a4(100000000,0);
    fn_00170704(&DAT_008ec0e0);
  }
  DAT_008ec111 = 0;
  fn_001707b4(&DAT_008ec0e0);
  fn_00528a4c(&DAT_008ec0d0);
  (**(code **)(*DAT_008ec118 + 4))(DAT_008ec118,DAT_008ec114);
  DAT_008ec114 = 0;
  DAT_008ec118 = (int *)0x0;
  return;
}


