#include "00480104_00480c5cbb.h"

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


void fn_00480c2c(void)

{
  int iVar1;
  
  iVar1 = fn_00480c5c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00480c4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



int fn_00480c5c(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_28;
  undefined *local_24;
  undefined4 uStack_20;
  
  *param_1 = &PTR_FUN_008537d4;
  piVar1 = param_1 + 0x417;
  (**(code **)(*piVar1 + 8))();
  *(undefined1 *)((int)param_1 + 0x1085) = 1;
  if (*(char *)((int)param_1 + 0x10cd) == '\0') {
    uVar2 = fn_005248c4(param_1 + 0xe);
    fn_0048029c(&local_28,uVar2);
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  else {
    local_28 = 0x10001;
    local_24 = &DAT_007dba44;
    uStack_20 = 0x71;
    (**(code **)(*piVar1 + 0xc))(piVar1);
  }
  if (param_1[0x12] != 0) {
    svc_0x24();
    if ((int)param_1[0x12] < 0) {
      fn_0015e294();
    }
    *(undefined1 *)(param_1 + 0x13) = 1;
  }
  iVar4 = param_1[0x42d];
  if (iVar4 != 0) {
    if (*(int *)(iVar4 + 4) != 0) {
      pcVar3 = *(code **)(*(int *)(iVar4 + 4) + -8);
      if (pcVar3 == (code *)0x0) {
        fn_0030233c();
      }
      else {
        (*pcVar3)();
      }
    }
    if (*(code **)(iVar4 + -8) == (code *)0x0) {
      fn_0030233c(iVar4 + -8);
    }
    else {
      (**(code **)(iVar4 + -8))();
    }
  }
  if (*(char *)(param_1 + 0x433) != '\0') {
    fn_00488564(DAT_008b64a4,param_1[0x432]);
  }
  if (*(char *)((int)param_1 + 0x10cd) == '\0') {
    fn_00524920(param_1 + 0xe);
  }
  if (param_1[0x42e] != 0) {
    pcVar3 = *(code **)(param_1[0x42e] + -8);
    if (pcVar3 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar3)();
    }
  }
  param_1[0x417] = &PTR_LAB_008533fc;
  param_1[0x418] = &DAT_0085319c;
  piVar1 = param_1 + 0x12;
  fn_0015e304(piVar1);
  if (*piVar1 != 0) {
    svc_0x23();
    *piVar1 = 0;
  }
  iVar4 = fn_005249e8(param_1 + 0xe);
  return iVar4 + -0x38;
}



void fn_00480b24(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  *param_1 = &DAT_008530bc;
  *(undefined1 *)(param_1 + 1) = 2;
  param_1[2] = 0x10;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined1 *)((int)param_1 + 0xd) = 1;
  *(undefined1 *)((int)param_1 + 0xe) = 1;
  fn_00158f6c((int)param_1 + 0xf,0x29);
  *param_1 = &PTR_FUN_008537d4;
  iVar1 = fn_005249cc(param_1 + 0xe);
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined1 *)(iVar1 + 0x14) = 1;
  *(undefined4 *)(iVar1 + 0x1018) = 0x10001;
  *(undefined **)(iVar1 + 0x101c) = &DAT_007dba44;
  *(undefined4 *)(iVar1 + 0x1020) = 0x71;
  puVar2 = (undefined4 *)fn_004745d8(iVar1 + 0x1024,0x20000000);
  *puVar2 = &PTR_LAB_00854110;
  *(undefined1 *)(puVar2 + 10) = 0;
  *(undefined1 *)((int)puVar2 + 0x29) = 0;
  *(undefined1 *)((int)puVar2 + 0x2a) = 0;
  *(undefined1 *)((int)puVar2 + 0x2b) = 0;
  *(undefined1 *)(puVar2 + 0xb) = 0;
  puVar2[0xc] = 0;
  puVar2[0xd] = 0;
  puVar2[0xe] = 0x3a0044;
  puVar2[0xf] = 0x68005c;
  puVar2[0x10] = 0x6d006f;
  puVar2[0x11] = 0x5c0065;
  puVar2[0x12] = 0x65006a;
  puVar2[0x13] = 0x6b006e;
  puVar2[0x14] = 0x6e0069;
  puVar2[0x15] = 0x4000;
  puVar2[0x16] = 0;
  puVar2[0x17] = 0;
  puVar2[0x18] = 0;
  puVar2[0x19] = 0;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = 0;
  *(undefined1 *)(puVar2 + 0x1c) = 0;
  *(undefined1 *)((int)puVar2 + 0x71) = 0;
  *(undefined1 *)((int)puVar2 + 0x72) = 0;
  return;
}


