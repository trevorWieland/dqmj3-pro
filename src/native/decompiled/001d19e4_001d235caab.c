#include "001d19e4_001d235caab.h"



void fn_001d1b20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined2 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined1 auStack_8a0 [2128];
  undefined1 auStack_50 [40];
  
  iVar1 = *(int *)(DAT_00897804 + 8);
  iVar2 = fn_006b64bc();
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(iVar1 + 4) + 100;
  }
  if (*(short *)(param_1 + 0x1afa) == 0x1b) {
    iVar8 = param_1 + 0x22b0;
  }
  else {
    iVar8 = 0;
  }
  fn_0012e864(auStack_8a0);
  fn_00301a9c(auStack_50,&DAT_007ba154,0x1e);
  fn_0029432c(*(undefined4 *)(iVar1 + 4),auStack_50);
  iVar3 = fn_00174828(DAT_008977e4);
  iVar4 = fn_00174870(param_1);
  *(undefined1 *)(iVar3 + 0xb) = *(undefined1 *)(iVar4 + 0x10);
  iVar3 = fn_00174828(DAT_008977e4);
  puVar6 = (undefined1 *)(iVar3 + 0xe8);
  iVar3 = fn_00174870(param_1);
  uVar7 = *(undefined4 *)(iVar3 + 0x1c);
  *(undefined4 *)(puVar6 + 8) = *(undefined4 *)(iVar3 + 0x18);
  *(undefined4 *)(puVar6 + 0xc) = uVar7;
  *puVar6 = *(undefined1 *)(iVar3 + 0x20);
  puVar6[0x10] = *(undefined1 *)(iVar3 + 0x28);
  puVar6[0x11] = *(undefined1 *)(iVar3 + 0x29);
  puVar6[0x14] = *(undefined1 *)(iVar3 + 0x2b);
  puVar6[0x15] = *(undefined1 *)(iVar3 + 0x2c);
  puVar6[0x16] = *(undefined1 *)(iVar3 + 0x2d);
  fn_00120cb8(DAT_008977e4);
  if (*(char *)(param_1 + 0x23a0) != '\0') {
    uVar7 = fn_00182988(DAT_008977e4);
    fn_0026a4d8(uVar7,param_1 + 0x23a4);
    iVar3 = fn_00174828(DAT_008977e4);
    *(uint *)(iVar3 + 0xf0) = *(uint *)(iVar3 + 0xf0) | 0x10;
  }
  iVar3 = param_1 + 0x2310;
  uVar7 = fn_006b64b0(iVar1);
  iVar1 = fn_00174828(DAT_008977e4);
  if (iVar2 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = 0x1b;
  }
  *(undefined2 *)(iVar1 + 0x4280) = uVar5;
  *(undefined4 *)(iVar1 + 0xdc) = uVar7;
  *(undefined4 *)(iVar1 + 0xe0) = uVar7;
  fn_001d19e4(param_1,iVar3,auStack_50,iVar2,1);
  uVar5 = *(undefined2 *)(param_1 + 0x1afa);
  iVar1 = param_1 + 0x2358;
  iVar2 = fn_00174828(DAT_008977e4);
  *(undefined2 *)(iVar2 + 0x4288) = uVar5;
  *(undefined1 *)(iVar2 + 0x428c) = 1;
  fn_001d19e4(param_1,iVar1,param_1 + 0x2288,iVar8,0);
  uVar5 = *(undefined2 *)(param_1 + 0x1afc);
  iVar1 = fn_00174828(DAT_008977e4);
  *(undefined2 *)(iVar1 + 0x4290) = uVar5;
  uVar5 = *(undefined2 *)(param_1 + 0x22a6);
  iVar1 = fn_00174828(DAT_008977e4);
  *(undefined2 *)(iVar1 + 0x4298) = uVar5;
  fn_001d49d4(param_1,param_1 + 0x1b08,4,&LAB_00655784,&LAB_0063b020,0);
  fn_001d49d4(param_1,param_1 + 0x1ec8,4,&LAB_00619530,&LAB_0063b020,0);
  if (-1 < *(char *)(param_1 + 0x1afe)) {
    fn_001d48f0(param_1,(int)(char)(*(char *)(param_1 + 0x1afe) + '\x10'),1,1);
  }
  if (-1 < *(char *)(param_1 + 0x22a8)) {
    fn_001d48f0(param_1,(int)(char)(*(char *)(param_1 + 0x22a8) + '\x14'),0,1);
  }
  if (-1 < *(char *)(param_1 + 0x1aff)) {
    fn_001d48f0(param_1,(int)(char)(*(char *)(param_1 + 0x1aff) + '\x10'),1,0);
  }
  if (-1 < *(char *)(param_1 + 0x22ac)) {
    fn_001d48f0(param_1,(int)(char)(*(char *)(param_1 + 0x22ac) + '\x14'),0,0);
  }
  fn_001d2128(param_1,auStack_8a0);
  return;
}


