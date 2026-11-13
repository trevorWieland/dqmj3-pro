#include "00376c70_003773f4a.h"



void fn_00376fe4(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_00102908(&local_40,0x20,DAT_008908bc,1,1);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x70) = uVar1;
  fn_00102908(&local_40,0x20,DAT_008908bc,1,0);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x74) = uVar1;
  fn_00102908(&local_40,0x20,DAT_008908bc,1,2);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x78) = uVar1;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  fn_00102908(&local_40,0x20,DAT_008908bc,2,1);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x88) = uVar1;
  fn_00102908(&local_40,0x20,DAT_008908bc,2,0);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x8c) = uVar1;
  fn_00102908(&local_40,0x20,DAT_008908bc,2,2);
  uVar1 = fn_001828f0(param_2,&local_40);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  return;
}



void fn_00376f9c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x94) != '\0') {
    fn_00376dc0(param_1,1);
    fn_00376dc0(param_1,0);
    cVar1 = *(char *)(param_1 + 100);
    bVar2 = cVar1 == '\x06';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x7c);
    }
    if (bVar2 && cVar1 == '\x06') {
      *(undefined1 *)(param_1 + 0x94) = 0;
    }
  }
  return;
}



void fn_00376f6c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x98,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00377188(iVar1,param_1);
  return;
}



void fn_00376f54(int param_1)

{
  *(undefined1 *)(param_1 + 0x94) = 1;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_00376c70(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  byte bVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  byte local_2c;
  
  if (param_2 == 0) {
    param_1 = param_1 + 0x7c;
    local_2c = 0x14;
    bVar3 = 0x1c;
    bVar10 = 0x18;
    bVar9 = 0x20;
  }
  else {
    param_1 = param_1 + 100;
    local_2c = 0x10;
    bVar3 = 0x18;
    bVar10 = 0x14;
    bVar9 = 0x1c;
  }
  iVar8 = 0;
  iVar7 = 0;
  if (local_2c < bVar10) {
    do {
      iVar4 = fn_00174828(DAT_008977e4);
      iVar4 = iVar4 + (char)local_2c * 0x418;
      psVar6 = (short *)(iVar4 + -0x4080);
      iVar5 = 0;
      iVar2 = iVar4;
      if (psVar6 != (short *)0x0) {
        iVar5 = (int)*psVar6;
        iVar2 = iVar5;
      }
      if ((psVar6 != (short *)0x0 && iVar2 != 0) && -1 < iVar5) {
        iVar5 = fn_00176dc0(psVar6);
        iVar7 = iVar7 + iVar5;
        iVar8 = iVar8 + *(short *)(iVar4 + -0x4064);
      }
      local_2c = local_2c + 1;
    } while ((char)local_2c < (char)bVar10);
  }
  bVar1 = bVar3 < bVar9;
  while (bVar1) {
    iVar4 = fn_00174828(DAT_008977e4);
    iVar4 = iVar4 + (char)bVar3 * 0x418;
    psVar6 = (short *)(iVar4 + -0x4080);
    iVar5 = 0;
    iVar2 = iVar4;
    if (psVar6 != (short *)0x0) {
      iVar5 = (int)*psVar6;
      iVar2 = iVar5;
    }
    if ((psVar6 != (short *)0x0 && iVar2 != 0) && -1 < iVar5) {
      iVar5 = fn_00176dc0(psVar6);
      iVar7 = iVar7 + iVar5;
      iVar8 = iVar8 + *(short *)(iVar4 + -0x4064);
    }
    bVar3 = bVar3 + 1;
    bVar1 = (char)bVar3 < (char)bVar9;
  }
  fVar11 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  fVar12 = (float)VectorSignedToFloat(iVar7,(byte)(in_fpscr >> 0x16) & 3);
  *(float *)(param_1 + 4) = fVar11 / fVar12;
  return;
}


