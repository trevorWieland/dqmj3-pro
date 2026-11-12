#include "0048daa0_0048e250b.h"

static void svc_0x19(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x19 }
#endif
}


void fn_0048e250(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_28;
  code *pcStack_24;
  undefined4 uStack_20;
  undefined *local_1c [2];
  
  fn_001237bc();
  iVar1 = fn_00453e70();
  fn_0013c674();
  if (*(char *)(param_1 + 0x84) != '\0' && iVar1 != 0) {
    local_1c[0] = (undefined *)0x80650013;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  iVar1 = fn_0052c888();
  if (iVar1 != 0) {
    pcStack_24 = fn_0048e548;
    uStack_20 = 0;
    local_28 = &DAT_00853500;
    local_1c[0] = &DAT_0048e3c0;
    fn_00479c98(param_1,&local_28);
    return;
  }
  local_28 = (undefined *)0x0;
  if (*(int *)(param_1 + 0x88) == 0) {
    iVar1 = fn_00158ef8(&local_28,0);
    if (-1 < iVar1) {
      iVar1 = 0;
      *(undefined **)(param_1 + 0x88) = local_28;
    }
  }
  else {
    iVar1 = -0x1f5fe7c5;
  }
  if (iVar1 < 0) {
    fn_0015e294();
  }
  svc_0x19();
  if (*(int *)(param_1 + 0x88) < 0) {
    fn_0015e294();
  }
  iVar1 = fn_0052d284(param_1 + 0x88);
  if (iVar1 < 0) {
    local_1c[0] = (undefined *)0x8001000c;
    uVar2 = fn_004b8d4c(&local_28,local_1c);
    fn_0048ec8c(param_1,uVar2);
    return;
  }
  pcStack_24 = fn_0048e3cc;
  uStack_20 = 0;
  local_28 = &DAT_00853500;
  local_1c[0] = &DAT_0048e3c0;
  fn_00479c98(param_1,&local_28);
  return;
}



undefined4 fn_0048e1f0(int param_1,undefined4 param_2,uint param_3)

{
  undefined4 uVar1;
  
  if (param_3 < 0xf) {
    param_1 = param_1 + param_3 * 4;
    if (*(int *)(param_1 + 4) != 0) {
      fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
                   ,0x44,0xe000000f,0);
      return 0;
    }
    *(undefined4 *)(param_1 + 4) = param_2;
    uVar1 = 1;
  }
  else {
    fn_0015ebe4(L"D:/home/jenkins/workspace/Manual-Pack/5129d543/OnlineCore/src/Core/InstantiationContext.cpp"
                 ,0x3e,0xe0000003,0);
    uVar1 = 0;
  }
  return uVar1;
}



undefined4 * fn_0048e064(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined *puVar3;
  
  puVar1 = (undefined4 *)fn_0015ece0(0x10);
  if (puVar1 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  *(undefined1 *)(puVar1 + 1) = 0;
  puVar1[2] = 0xffffffff;
  *puVar1 = &PTR_FUN_00853bd8;
  if (DAT_008b637e != '\0') {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 != 0) {
      puVar3 = (undefined *)(DAT_008e6a9c + *piVar2 * 0xac);
      goto LAB_0048e0cc;
    }
  }
  puVar3 = &DAT_008e6aa0;
LAB_0048e0cc:
  puVar1[3] = puVar3;
  return puVar1;
}



void fn_0048df6c(int param_1,uint param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  uint uVar5;
  undefined *puVar6;
  
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar1 != 0) {
      puVar6 = (undefined *)(DAT_008e6a9c + *piVar1 * 0xac);
      goto LAB_0048dfb4;
    }
  }
  puVar6 = &DAT_008e6aa0;
LAB_0048dfb4:
  if (param_2 < *(uint *)(puVar6 + 0x2c)) {
    *param_3 = 0;
    return;
  }
  (**(code **)(*(int *)(puVar6 + 4) + 8))();
  uVar2 = *(uint *)(puVar6 + 0x2c);
  uVar5 = 0;
  uVar3 = 0;
  if (uVar2 != 0) {
    do {
      fn_00169f1c(uVar5,uVar2);
      uVar3 = *(uint *)(puVar6 + extraout_r1 * 8 + 0x34);
      iVar4 = param_1 + uVar5 * 0x20;
      uVar5 = uVar5 + 1;
      *(uint *)(iVar4 + 8) =
           uVar3 & 0xff000000 | (uVar3 >> 0x10 & 0xff) << 0x10 | (uVar3 >> 8 & 0xff) << 8 |
           uVar3 & 0xff;
      *(undefined2 *)(iVar4 + 6) = *(undefined2 *)(puVar6 + extraout_r1 * 8 + 0x32);
      uVar2 = *(uint *)(puVar6 + 0x2c);
      uVar3 = uVar2;
    } while (uVar5 < uVar2);
  }
  *param_3 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x0048e04c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(puVar6 + 4) + 0xc))(puVar6 + 4);
  return;
}


