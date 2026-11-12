#include "004548bc_00454da8ba.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}


bool fn_00454cbc(int param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  bVar2 = param_2 <= (uint)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18));
  if (bVar2) {
    *(uint *)(iVar1 + 0x10) = param_2;
  }
  return bVar2;
}



undefined4 fn_00454c3c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  local_18 = (undefined1)uVar2;
  local_14 = (undefined1)uVar1;
  local_17 = (undefined1)((uint)uVar2 >> 8);
  local_13 = (undefined1)((uint)uVar1 >> 8);
  local_12 = (undefined1)((uint)uVar1 >> 0x10);
  local_16 = (undefined1)((uint)uVar2 >> 0x10);
  local_11 = (undefined1)((uint)uVar1 >> 0x18);
  local_15 = (undefined1)((uint)uVar2 >> 0x18);
  fn_0015ef58(*(undefined4 *)(param_1 + 8),&local_18,8,0xffffffff);
  return 1;
}



bool fn_00454b8c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc);
  bVar3 = param_3 <= (uint)(*(int *)(iVar1 + 0x10) - iVar2);
  if (!bVar3) {
    *(undefined1 *)(param_1 + 4) = 1;
    param_3 = *(int *)(iVar1 + 0x10) - iVar2;
  }
  if (param_3 != 0) {
    if (*(uint *)(iVar1 + 0x10) < iVar2 + param_3) {
      fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/Buffer.cpp",
                   0xc6,0xe0000019,0);
    }
    else {
      fn_00301a9c(param_2,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar2);
    }
    *(uint *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_3;
  }
  return bVar3;
}



int fn_00454af0(void)

{
  int iVar1;
  
  fn_00170704(&DAT_008ebe50);
  iVar1 = DAT_008c07ec;
  if (DAT_008bfc00 == 0) {
    fn_001707b4(&DAT_008ebe50);
    return -0x375f9408;
  }
  if (DAT_008bfc00 == 1) {
    svc_0x23();
    if (DAT_008c07ec < 0) {
      fn_001707b4(&DAT_008ebe50);
      return iVar1;
    }
    DAT_008c07ec = 0;
  }
  DAT_008bfc00 = DAT_008bfc00 + -1;
  fn_001707b4(&DAT_008ebe50);
  return 0;
}


