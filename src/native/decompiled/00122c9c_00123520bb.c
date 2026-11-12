#include "00122c9c_00123520bb.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


int fn_00123520(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x8620040;
  *(undefined4 *)(iVar2 + 0x84) = param_2;
  iVar1 = *param_1;
  svc_0x32();
  if (-1 < iVar1) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



undefined1 * fn_001233c4(int param_1,undefined4 param_2,undefined1 param_3,undefined1 param_4)

{
  uint uVar1;
  char cVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  char local_20 [12];
  
  iVar4 = 0;
  do {
    cVar2 = *(char *)(param_1 + iVar4);
    if (cVar2 == '\0' || cVar2 == ':') {
      uVar6 = 0;
      local_20[iVar4] = ':';
      uVar7 = 0;
      iVar4 = 0;
      goto LAB_0012345c;
    }
    local_20[iVar4] = cVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  fn_00146594();
  uVar6 = 0;
  uVar7 = 0;
  iVar4 = 0;
  do {
    uVar5 = (uint)(char)(&DAT_007d6f10)[iVar4];
    if (uVar5 == 0x3a) goto LAB_00123490;
    uVar1 = uVar6 >> 0x18;
    iVar4 = iVar4 + 1;
    uVar6 = uVar5 | uVar6 << 8;
    uVar7 = uVar1 | uVar7 << 8 | (int)uVar5 >> 0x1f;
  } while (iVar4 < 8);
LAB_00123488:
  uVar6 = 0;
  uVar7 = 0;
LAB_00123490:
  if (uVar6 == 0 && uVar7 == 0) {
    puVar3 = &DAT_e0e046bc;
  }
  else {
    iVar4 = 0;
    while( true ) {
      if ((&DAT_008e3478)[iVar4 * 4] == 0) {
        (&DAT_008e3470)[iVar4 * 4] = uVar6;
        (&DAT_008e3474)[iVar4 * 4] = uVar7;
        (&DAT_008e3478)[iVar4 * 4] = param_2;
        *(undefined1 *)(iVar4 * 0x10 + 0x8e347c) = param_3;
        (&DAT_008e347d)[iVar4 * 0x10] = param_4;
        return (undefined1 *)0x0;
      }
      if ((&DAT_008e3470)[iVar4 * 4] == uVar6 && (&DAT_008e3474)[iVar4 * 4] == uVar7) break;
      iVar4 = iVar4 + 1;
      if (0x1f < iVar4) {
        return &DAT_d8604659;
      }
    }
    puVar3 = (undefined1 *)0xc82044b4;
  }
  return puVar3;
  while( true ) {
    uVar1 = uVar6 >> 0x18;
    iVar4 = iVar4 + 1;
    uVar6 = uVar5 | uVar6 << 8;
    uVar7 = uVar1 | uVar7 << 8 | (int)uVar5 >> 0x1f;
    if (7 < iVar4) break;
LAB_0012345c:
    uVar5 = (uint)local_20[iVar4];
    if (uVar5 == 0x3a) goto LAB_00123490;
  }
  goto LAB_00123488;
}



undefined4 fn_00123398(undefined4 param_1)

{
  undefined4 local_8 [2];
  
  local_8[0] = param_1;
  DAT_0089a670 = param_1;
  fn_0013b334(local_8,0xb0501c8);
  return 0;
}


