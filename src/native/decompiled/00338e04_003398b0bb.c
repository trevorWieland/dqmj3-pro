#include "00338e04_003398b0bb.h"



void fn_003398b0(undefined2 *param_1,undefined2 *param_2,undefined1 *param_3)

{
  *param_1 = *param_2;
  param_1[1] = *(undefined2 *)((int)param_2 + 3);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((int)param_1 + 5) = *(undefined1 *)((int)param_2 + 5);
  *(undefined1 *)(param_1 + 3) = *param_3;
  *(undefined1 *)((int)param_1 + 7) = param_3[1];
  return;
}



void fn_00339888(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00746390();
  *puVar1 = &DAT_00824d8c;
  return;
}



void fn_00339850(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  puVar1[0x19] = 0;
  *puVar1 = &DAT_00824c7c;
  *(undefined1 *)(puVar1 + 0x24) = 0;
  *(undefined1 *)((int)puVar1 + 0x91) = 0;
  return;
}



void fn_003396e8(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint local_20;
  
  local_20 = param_4;
  iVar1 = fn_001828f0(param_2,DAT_008908cc);
  param_1[0x1a] = iVar1;
  iVar1 = fn_001828f0(param_2,DAT_008908d0);
  param_1[0x1b] = iVar1;
  iVar1 = fn_001828f0(param_2,DAT_008908d4);
  param_1[0x1c] = iVar1;
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar7 = *(undefined4 *)(iVar1 + 8);
  uVar2 = fn_001924e0(uVar7,1);
  uVar4 = 0;
  do {
    iVar3 = fn_00145b00(0x50,&DAT_00812c8c);
    iVar1 = 0;
    if (iVar3 != 0) {
      local_20 = uVar4 & 0xff;
      iVar1 = fn_005f7160(iVar3,param_2,uVar7,uVar2);
    }
    uVar5 = uVar4 + 1;
    param_1[uVar4 + 0x25] = iVar1;
    uVar4 = uVar5;
  } while ((int)uVar5 < 2);
  iVar1 = 0;
  do {
    iVar3 = fn_0017dd54(param_2,(&DAT_008908f4)[iVar1],0);
    iVar6 = iVar1 + 1;
    param_1[iVar1 + 0x1d] = iVar3;
    iVar1 = iVar6;
  } while (iVar6 < 7);
  uVar2 = fn_001827b0(param_2,DAT_008908d8);
  local_20 = (local_20 & ~((unsigned int)0xff << 0)) | ((unsigned int)(0x20) & 0xff);
  uVar7 = fn_00182988(DAT_008977e4);
  iVar1 = fn_0026a558(uVar7,&local_20);
  fn_00190d50(uVar2,iVar1 + 0x1e);
  uVar2 = fn_001827b0(param_2,DAT_008908dc);
  local_20 = CONCAT31(((unsigned int)(local_20) >> 8) & 0xffffff,0x21);
  uVar7 = fn_00182988(DAT_008977e4);
  iVar1 = fn_0026a558(uVar7,&local_20);
  fn_00190d50(uVar2,iVar1 + 0x1e);
  return;
}


