#include "001d19e4_001d235cab.h"



void fn_001d1f2c(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined1 auStack_50 [32];
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 *local_28 [2];
  
  local_30[0] = 0x20;
  uVar1 = fn_00182988(DAT_008977e4);
  iVar2 = fn_0026a558(uVar1,local_30);
  fn_00230ce8(&local_2c);
  fn_00101a50(iVar2 + 0x1e,0xc,&DAT_008c5f54,local_2c);
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  fn_00301a9c(auStack_50,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_50);
  fn_0033819c(iVar2,auStack_50);
  iVar4 = fn_006b64bc(*(undefined4 *)(DAT_00897804 + 8));
  if (iVar4 != 0) {
    iVar4 = fn_00174828(DAT_008977e4);
    *(undefined2 *)(iVar4 + 0x4280) = 0x1b;
    uVar1 = fn_006b621c(*(undefined4 *)(DAT_00897804 + 8));
    fn_0017821c(iVar2 + 0x38,uVar1,0x60);
    *(undefined1 *)(iVar2 + 0x98) = 1;
  }
  local_30[0] = 0x21;
  uVar1 = fn_00182988(DAT_008977e4);
  iVar2 = fn_0026a558(uVar1,local_30);
  fn_0033819c(iVar2,param_2 + 0x46);
  if (*(char *)(param_2 + 0x7e4) == '\0') {
    fn_00101a50(iVar2 + 0x1e,0xc,&DAT_008c5f54,param_2 + 0x2e);
    return;
  }
  fn_0022eb78(local_28,param_2 + 0x7e8);
  fn_00101a50(iVar2 + 0x1e,0xc,&DAT_008c5f54,local_28[0]);
  if (local_28[0] != &DAT_008f9cf4) {
    piVar3 = local_28[0] + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_28[0] + -3,local_28[0][-2] + 8,0);
    }
  }
  return;
}



void fn_001d1e60(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  
  iVar2 = fn_00174828(DAT_008977e4);
  puVar3 = (undefined1 *)(iVar2 + 0xe8);
  iVar2 = fn_00174870(param_1);
  uVar4 = *(undefined4 *)(iVar2 + 0x1c);
  *(undefined4 *)(puVar3 + 8) = *(undefined4 *)(iVar2 + 0x18);
  *(undefined4 *)(puVar3 + 0xc) = uVar4;
  *puVar3 = *(undefined1 *)(iVar2 + 0x20);
  puVar3[0x10] = *(undefined1 *)(iVar2 + 0x28);
  puVar3[0x11] = *(undefined1 *)(iVar2 + 0x29);
  puVar3[0x14] = *(undefined1 *)(iVar2 + 0x2b);
  puVar3[0x15] = *(undefined1 *)(iVar2 + 0x2c);
  puVar3[0x16] = *(undefined1 *)(iVar2 + 0x2d);
  iVar2 = fn_00174828(DAT_008977e4);
  cVar1 = *(char *)(iVar2 + 0xe8);
  bVar5 = (cVar1 == '\x04' || cVar1 == '\x05') || cVar1 == '\b';
  if (bVar5) {
    iVar2 = fn_00182988(DAT_008977e4);
  }
  else {
    iVar2 = fn_00182988(DAT_008977e4);
  }
  *(bool *)(iVar2 + 0x39c) = bVar5;
  iVar2 = fn_00174828(DAT_008977e4);
  *(bool *)(iVar2 + 0xfb) = *(char *)(param_2 + 0x848) == '\0';
  return;
}


