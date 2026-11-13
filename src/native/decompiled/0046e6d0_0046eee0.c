#include "0046e6d0_0046eee0.h"



void fn_0046eee0(void)

{
  int iVar1;
  
  iVar1 = fn_0046ef10();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0046ef00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 *
fn_0046edfc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined1 auStack_20 [12];
  
  puVar2 = (undefined4 *)fn_00479cd8(param_1,0,auStack_20);
  *puVar2 = &PTR_FUN_00853120;
  puVar2[0x1a] = 0;
  puVar2[0x1b] = &DAT_80010001;
  puVar2[0x1c] = &DAT_007dba44;
  puVar2[0x1d] = 0x71;
  puVar2[0x1e] = 0;
  puVar2 = (undefined4 *)fn_004745d8(puVar2 + 0x1f,1);
  *puVar2 = &PTR_LAB_00854110;
  puVar2[10] = param_2;
  puVar2[0xb] = param_3;
  puVar2[0xc] = param_4;
  puVar2[0xd] = param_5;
  iVar3 = fn_004b7748();
  if (iVar3 == 0) {
    iVar3 = fn_0015ece0(0x3e4);
    if (iVar3 != 0) {
      fn_004b7d34();
    }
  }
  else {
    iVar3 = fn_004b7748();
    piVar4 = (int *)(iVar3 + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = *piVar4 + 1;
  }
  return puVar2 + -0x1f;
}



void fn_0046e85c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_1 + 0x68) = param_2;
  pcVar4 = fn_0046e9e0;
  uVar5 = 0;
  fn_0013d0fc(&local_20);
  *(undefined4 *)(param_1 + 0x40) = local_20;
  *(undefined4 *)(param_1 + 0x44) = uStack_1c;
  *(code **)(param_1 + 0x50) = pcVar4;
  *(undefined4 *)(param_1 + 0x54) = uVar5;
  *(undefined **)(param_1 + 0x58) = &DAT_007db524;
                    /* WARNING: Could not recover jumptable at 0x0046e8d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_0046e9e0(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_30 = 0x80010004;
    puStack_2c = &DAT_007dba44;
    uStack_28 = 0x71;
    fn_0046e97c(param_1,&local_30);
    return;
  }
  if (DAT_008b637e == '\0') {
LAB_0046ea94:
    pcVar3 = &DAT_008e9308;
  }
  else {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 == 0) goto LAB_0046ea94;
    pcVar3 = (char *)(*piVar2 + DAT_008e9304);
  }
  if (*pcVar3 != '\0') {
    fn_004b301c(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = 0x32;
    return;
  }
  puVar4 = (undefined4 *)fn_0015ece0(0x34);
  if (puVar4 == (undefined4 *)0x0) {
    *(undefined4 *)(param_1 + 0x78) = 0;
  }
  else {
    local_38 = &DAT_00855a94;
    fn_0015e6f0(&local_34,L"DNS Check Thread");
    uVar6 = *(undefined4 *)(param_1 + 0xa4);
    *puVar4 = &DAT_008536ec;
    puVar4[1] = &DAT_00855a94;
    fn_0015e6f0(puVar4 + 2,local_34);
    puVar4[4] = 0;
    puVar4[5] = uVar6;
    puVar4[6] = 0;
    *(undefined1 *)(puVar4 + 7) = 0;
    *(undefined1 *)((int)puVar4 + 0x1e) = 0;
    puVar4[8] = 0x80000000;
    puVar5 = (undefined4 *)fn_0015ece0(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      *(undefined1 *)(puVar5 + 3) = 0;
    }
    puVar4[3] = puVar5;
    *puVar4 = &DAT_00852b64;
    puVar4[0xb] = 0;
    puVar4[9] = 0;
    puVar4[10] = 0;
    *(undefined4 **)(param_1 + 0x78) = puVar4;
    fn_00170f54(&local_38);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x78) + 0x20) = *(undefined4 *)(param_1 + 0xa8);
  if (DAT_008b637e != '\0') {
    piVar2 = (int *)fn_001775e8(DAT_008b63d8);
    if (*piVar2 != 0) {
      *(undefined1 *)(DAT_008e9304 + *piVar2) = 1;
      goto LAB_0046eb88;
    }
  }
  DAT_008e9308 = 1;
LAB_0046eb88:
  iVar1 = *(int *)(param_1 + 0x78);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(int *)(iVar1 + 0x2c) = param_1;
  *(code **)(iVar1 + 0x24) = fn_0046e8e4;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  fn_0047e764(iVar1,0);
  pcVar7 = fn_0046eccc;
  uVar6 = 0;
  fn_0013d0fc(&local_30);
  *(undefined4 *)(param_1 + 0x40) = local_30;
  *(undefined **)(param_1 + 0x44) = puStack_2c;
  *(code **)(param_1 + 0x50) = pcVar7;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(wchar16 **)(param_1 + 0x58) = L"";
  return;
}



void fn_0046eccc(int param_1)

{
  int *piVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined1 *local_24;
  undefined *puStack_20;
  undefined4 uStack_1c;
  
  piVar1 = (int *)(param_1 + 0x7c);
  (**(code **)(*piVar1 + 8))();
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar2 != 0) {
    if (*(undefined1 **)(param_1 + 0x6c) == &DAT_80010001) {
      fn_004b301c(param_1,1);
      *(undefined4 *)(param_1 + 0x24) = 10;
    }
    else {
      fn_0046e97c(param_1,param_1 + 0x6c);
    }
                    /* WARNING: Could not recover jumptable at 0x0046ede4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  local_24 = &DAT_80010001;
  puStack_20 = &DAT_007dba44;
  uStack_1c = 0x71;
  if (*(undefined1 **)(param_1 + 0x6c) == &DAT_80010001) {
    pcVar3 = fn_0046ec3c;
    uVar4 = 0;
    fn_0013d0fc(&local_30);
    *(undefined4 *)(param_1 + 0x40) = local_30;
    *(undefined4 *)(param_1 + 0x44) = uStack_2c;
    *(code **)(param_1 + 0x50) = pcVar3;
    *(undefined4 *)(param_1 + 0x54) = uVar4;
    *(undefined **)(param_1 + 0x58) = &DAT_0046edf4;
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return;
  }
  local_24 = (undefined1 *)0x80010004;
  fn_0046e97c(param_1,&local_24);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0046ec3c(int param_1)

{
  int *piVar1;
  undefined4 local_20;
  undefined *puStack_1c;
  undefined4 uStack_18;
  
  piVar1 = (int *)(param_1 + 0x7c);
  (**(code **)(*piVar1 + 8))();
  if (*(undefined1 **)(param_1 + 0x6c) == &DAT_80010001) {
    fn_004b301c(param_1,1);
    *(undefined4 *)(param_1 + 0x24) = 10;
  }
  else {
    local_20 = 0x80010004;
    puStack_1c = &DAT_007dba44;
    uStack_18 = 0x71;
    fn_0046e97c(param_1,&local_20);
  }
                    /* WARNING: Could not recover jumptable at 0x0046ecbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0046e97c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_18 = *param_2;
    iStack_14 = param_2[1];
    iStack_10 = param_2[2];
    if (local_18 < 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 2;
    }
    fn_00455e8c(iVar1,uVar2,&local_18,1);
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_0046e8e4(int param_1)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = fn_004b7748();
  iVar2 = (int)((ulonglong)uVar5 >> 0x20);
  iVar1 = (int)uVar5;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0x90);
  }
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  if ((*(uint *)(param_1 + 0xb0) & 1) == 0) {
    pcVar3 = *(code **)(param_1 + 0xac);
  }
  else {
    pcVar3 = *(code **)(*(int *)(iVar2 + ((int)*(uint *)(param_1 + 0xb0) >> 1)) +
                       *(int *)(param_1 + 0xac));
  }
  iVar1 = (*pcVar3)();
  (**(code **)(*(int *)(param_1 + 0x7c) + 8))();
  if (iVar1 == 0) {
    uVar4 = 0x80050014;
  }
  else {
    uVar4 = 0x10001;
  }
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined **)(param_1 + 0x70) = &DAT_007dba44;
  *(undefined4 *)(param_1 + 0x74) = 0x71;
                    /* WARNING: Could not recover jumptable at 0x0046e96c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(int *)(param_1 + 0x7c) + 0xc))((int *)(param_1 + 0x7c));
  return;
}



undefined4 * fn_0046e6d0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [12];
  
  uVar1 = fn_0013d3e8(auStack_18,L"<unknown>");
  puVar2 = (undefined4 *)fn_0047a4a4(param_1,uVar1);
  fn_00170f54(auStack_18);
  *(undefined2 *)(puVar2 + 8) = 0;
  puVar2[10] = 0;
  puVar2[0xb] = param_2;
  puVar2[0xc] = 0;
  puVar2[9] = 0;
  *(undefined1 *)(puVar2 + 0xd) = 0;
  puVar2[0xe] = 0;
  *puVar2 = &DAT_00853000;
  puVar2[0xf] = 0;
  puVar2[0x10] = 0;
  return puVar2;
}


