#include "00657430_00657ce8a.h"

static void svc_0x23(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x23 }
#endif
}

static void svc_0xc(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xc }
#endif
}


void fn_006575fc(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  bool bVar3;
  
  *(undefined4 *)(param_1 + 0x80) = param_2;
  if (*(int *)(param_1 + 0x74) != 0 && *(int *)(param_1 + 0x74) != 4) {
    iVar1 = fn_006cf94c(DAT_008c06e0 + 0x24);
    if (iVar1 == param_1) {
      fn_0044fbfc(param_2);
      svc_0xc();
      bVar3 = true;
    }
    else {
      piVar2 = *(int **)(param_1 + 0x78);
      fn_0044fbfc(param_2);
      svc_0xc();
      bVar3 = *piVar2 < 0;
    }
    if (bVar3) {
      fn_0015e294();
      return;
    }
  }
  return;
}



uint fn_006575c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = param_1[1];
  uVar2 = param_1[3];
  uVar3 = param_1[2];
  uVar1 = *param_1 ^ *param_1 << 0xb;
  uVar1 = uVar1 ^ uVar1 >> 8 ^ uVar2 ^ uVar2 >> 0x13;
  param_1[3] = uVar1;
  param_1[2] = uVar2;
  param_1[1] = uVar3;
  *param_1 = uVar4;
  return uVar1;
}



void fn_0065754c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  undefined1 auStack_10 [8];
  
  puVar1 = (uint *)fn_00658e6c(auStack_10);
  uVar2 = (*puVar1 ^ *puVar1 >> 0x1e) * 0x6c078965 + 1;
  *param_1 = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
  param_1[1] = uVar2;
  uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
  param_1[2] = uVar2;
  param_1[3] = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
  return;
}



undefined4 * fn_006574c4(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 in_r3;
  undefined4 local_10;
  
  local_10 = in_r3;
  puVar1 = (undefined4 *)fn_00659048();
  *puVar1 = &DAT_0085991c;
  puVar1[4] = 0;
  local_10 = 0;
  iVar2 = fn_0010fe88(&local_10);
  if (-1 < iVar2) {
    iVar2 = 0;
    puVar1[4] = local_10;
  }
  if (iVar2 < 0) {
    fn_0015e294();
  }
  return puVar1;
}



undefined4 * fn_00657488(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085990c;
  if (param_1[4] != 0) {
    svc_0x23();
    param_1[4] = 0;
  }
  *param_1 = &DAT_00859a08;
  iVar1 = param_1[1];
  if (iVar1 != DAT_008c3634) {
    if (iVar1 != 0) {
      fn_00656f08(iVar1,param_1);
    }
    param_1[1] = DAT_008c3634;
  }
  return param_1;
}



undefined4 *
fn_00657430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  puVar1 = (undefined4 *)fn_00659048();
  *puVar1 = &DAT_0085990c;
  puVar1[4] = 0;
  local_10 = 0;
  iVar2 = fn_00158ef8(&local_10,param_2);
  if (-1 < iVar2) {
    iVar2 = 0;
    puVar1[4] = local_10;
  }
  if (iVar2 < 0) {
    fn_0015e294();
  }
  return puVar1;
}


