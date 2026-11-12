#include "00359758_0035a17ca.h"



void fn_00359f90(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0035a0cc();
  *puVar1 = &DAT_00826a90;
  return;
}



void fn_00359f54(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0x50495342;
  uStack_c = 0;
  fn_00359fdc(param_1,&local_10,4,L"rom:/data/Parameter/BattleScriptItemParam.tp");
  return;
}



void fn_00359f2c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0035a0cc();
  *puVar1 = &DAT_00826a7c;
  return;
}



void fn_00359ef0(undefined4 param_1)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0x50465342;
  uStack_c = 0;
  fn_00359fdc(param_1,&local_10,4,L"patch:/data/Parameter/BattleScriptFeatParam.tp");
  return;
}



void fn_00359758(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 local_228 [2];
  undefined2 local_226 [2];
  undefined1 local_222 [2];
  undefined2 local_220 [2];
  undefined1 local_21c [2];
  undefined2 local_21a [3];
  undefined4 local_214 [2];
  char local_20c [496];
  
  uVar2 = fn_00182988(DAT_008977e4);
  param_2 = param_2 + 0x185ec0;
  fn_00101a1c(local_228,&LAB_002d3f0c,0x20,0x10);
  iVar5 = 0;
  do {
    iVar1 = iVar5 * 0x20;
    iVar6 = iVar5 + 1;
    local_228[iVar1] = 0;
    local_228[iVar1 + 1] = 0;
    local_226[iVar5 * 0x10] = 0;
    local_226[iVar5 * 0x10 + 1] = 0;
    local_222[iVar1] = 0;
    local_222[iVar1 + 1] = 0;
    local_220[iVar5 * 0x10] = 0;
    local_220[iVar5 * 0x10 + 1] = 0;
    local_21c[iVar1] = 0;
    local_21c[iVar1 + 1] = 0;
    local_21a[iVar5 * 0x10] = 0;
    local_21a[iVar5 * 0x10 + 1] = 0;
    local_214[iVar5 * 8] = 0;
    local_214[iVar5 * 8 + 1] = 0;
    local_20c[iVar1] = '\0';
    local_20c[iVar1 + 1] = '\0';
    local_20c[iVar1 + 2] = '\0';
    iVar5 = iVar6;
  } while (iVar6 < 0x10);
  uVar7 = 0;
  do {
    local_20c[0x1e4] = (char)uVar7 + '\x10';
    local_20c[0x1e8] = *(char *)(param_2 + uVar7 + 1);
    pcVar4 = local_20c + 0x1e8;
    if (0x11 < (int)local_20c[0x1e8] - 0x10U) {
      pcVar4 = local_20c + 0x1e4;
    }
    uVar3 = fn_0026a548(uVar2,pcVar4);
    fn_0017821c(local_228 + (char)uVar7 * 0x20,uVar3,0x1f);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    local_20c[0x1e4] = (char)uVar7 + '\x18';
    local_20c[0x1e8] = *(char *)(param_2 + uVar7 + 5);
    pcVar4 = local_20c + 0x1e8;
    if (0x11 < (int)local_20c[0x1e8] - 0x10U) {
      pcVar4 = local_20c + 0x1e4;
    }
    uVar3 = fn_0026a548(uVar2,pcVar4);
    fn_0017821c(local_228 + (char)((char)uVar7 + '\b') * 0x20,uVar3,0x1f);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    local_20c[0x1e8] = (char)uVar7 + '\x14';
    local_20c[0x1e4] = *(char *)(param_2 + uVar7 + 10);
    pcVar4 = local_20c + 0x1e4;
    if (0x11 < (int)local_20c[0x1e4] - 0x10U) {
      pcVar4 = local_20c + 0x1e8;
    }
    uVar3 = fn_0026a548(uVar2,pcVar4);
    fn_0017821c(local_228 + (char)((char)uVar7 + '\x04') * 0x20,uVar3,0x1f);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    local_20c[0x1e4] = (char)uVar7 + '\x1c';
    local_20c[0x1e8] = *(char *)(param_2 + uVar7 + 0xe);
    pcVar4 = local_20c + 0x1e8;
    if (0x11 < (int)local_20c[0x1e8] - 0x10U) {
      pcVar4 = local_20c + 0x1e4;
    }
    uVar3 = fn_0026a548(uVar2,pcVar4);
    fn_0017821c(local_228 + (char)((char)uVar7 + '\f') * 0x20,uVar3,0x1f);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  do {
    local_20c[0x1e4] = (char)uVar7 + '\x10';
    uVar3 = fn_0026a548(uVar2,local_20c + 0x1e4);
    fn_0017821c(uVar3,local_228 + uVar7 * 0x20,0x1f);
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x10);
  return;
}


