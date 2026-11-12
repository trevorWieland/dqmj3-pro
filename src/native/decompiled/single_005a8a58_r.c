#include "single_005a8a58_r.h"


extern undefined4 UndefinedInstruction;

void fn_005a8a58(int param_1,char *param_2,char *param_3,int param_4,int param_5)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  int extraout_r1;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  undefined4 *local_34 [4];
  
  iVar2 = (int)*param_3;
  uVar4 = iVar2 - 0x10;
  pcVar7 = param_3;
  if (uVar4 >= 4) {
    pcVar7 = (char *)(iVar2 + -0x18);
  }
  if ((uVar4 < 4 || pcVar7 < &UndefinedInstruction) || (iVar2 == 0x20 || iVar2 == 0x22)) {
    cVar1 = (char)uVar4;
  }
  else {
    cVar1 = *(char *)(param_1 + 0x24) + *param_3 + -0x14;
  }
  uVar4 = (uint)cVar1;
  fn_0018cb08(param_1,(int)(char)(*param_2 + -0x10));
  puVar3 = (undefined4 *)fn_00145b00(0x68,&DAT_00812c8c);
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[0x13] = 0;
    puVar3[0x14] = 0;
    puVar3[0x15] = 0;
    puVar3[0x18] = uVar5;
    puVar3[0x19] = param_1;
    fn_005a8448(puVar3);
  }
  *(undefined4 **)(param_1 + *param_2 * 4 + -0x30) = puVar3;
  uVar8 = (uint)(char)(*param_2 + -0x10);
  uVar9 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
  if (uVar9 <= uVar8) {
    fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar8,uVar9);
  }
  *(undefined4 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10) + 0x40) =
       *(undefined4 *)(*(int *)(param_1 + 4) + uVar8 * 4);
  iVar2 = *(int *)(param_1 + 4);
  uVar9 = *(int *)(param_1 + 8) - iVar2 >> 2;
  if (uVar9 <= uVar4) {
    fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar4,uVar9);
    iVar2 = extraout_r1;
  }
  if (param_5 != 0) {
    iVar2 = 2;
  }
  if (param_5 == 0) {
    iVar2 = 1;
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar4 * 4);
  fn_007997c0(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10),iVar2);
  local_34[0] = (undefined4 *)fn_00145b00(0x38,&DAT_00812c8c);
  if (local_34[0] != (undefined4 *)0x0) {
    uVar6 = *(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10);
    local_34[0][10] = 0;
    *(undefined1 *)(local_34[0] + 0xb) = 0;
    local_34[0][0xc] = uVar6;
    *(undefined1 *)(local_34[0] + 0xd) = 0xff;
    *(undefined1 *)((int)local_34[0] + 0x36) = 0;
    *(undefined1 *)((int)local_34[0] + 0x37) = 0;
    *local_34[0] = fn_005a74bc;
    local_34[0][1] = 0;
    local_34[0][2] = fn_005a76f4;
    local_34[0][3] = 0;
    local_34[0][4] = fn_005a777c;
    local_34[0][5] = 0;
    local_34[0][6] = fn_005a7750;
    local_34[0][7] = 0;
    local_34[0][8] = fn_005a77bc;
    local_34[0][9] = 0;
  }
  local_34[0][10] = uVar5;
  fn_007998d8(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10),local_34);
  if (param_5 == 0) {
    iVar2 = (int)*param_3;
    uVar4 = iVar2 - 0x10;
    bVar10 = 3 < uVar4;
    if (bVar10) {
      uVar4 = iVar2 - 0x18;
    }
    if ((bVar10 && 3 < uVar4) && (iVar2 != 0x20 && iVar2 != 0x22)) {
      *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10) + 0x3c) = 1;
    }
    else {
      *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10) + 0x3c) = 0;
    }
  }
  else {
    uVar9 = (uint)(char)(*param_2 + -0x10);
    uVar4 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 2;
    if (uVar4 <= uVar9) {
      fn_002ff628(9,&DAT_008c7659,&DAT_008c7659,uVar9,uVar4);
    }
    uVar5 = *(undefined4 *)(*(int *)(param_1 + 4) + uVar9 * 4);
    local_34[0] = (undefined4 *)fn_00145b00(0x38,&DAT_00812c8c);
    if (local_34[0] != (undefined4 *)0x0) {
      uVar6 = *(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10);
      local_34[0][10] = 0;
      *(undefined1 *)(local_34[0] + 0xb) = 0;
      local_34[0][0xc] = uVar6;
      *(undefined1 *)(local_34[0] + 0xd) = 0xff;
      *(undefined1 *)((int)local_34[0] + 0x36) = 0;
      *(undefined1 *)((int)local_34[0] + 0x37) = 0;
      *local_34[0] = fn_005a74bc;
      local_34[0][1] = 0;
      local_34[0][2] = fn_005a76f4;
      local_34[0][3] = 0;
      local_34[0][4] = fn_005a777c;
      local_34[0][5] = 0;
      local_34[0][6] = fn_005a7750;
      local_34[0][7] = 0;
      local_34[0][8] = fn_005a77bc;
      local_34[0][9] = 0;
    }
    local_34[0][10] = uVar5;
    fn_007998d8(*(undefined4 *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10),local_34);
    *(undefined1 *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10) + 0x3c) = 2;
  }
  *(char *)(*(int *)(param_1 + (char)(*param_2 + -0x10) * 4 + 0x10) + 0x58) = (char)param_4;
  *(undefined1 *)(param_1 + 0x28) = 0;
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (param_4 != 0) {
    *(char *)(param_1 + 0x2a) = *(char *)(param_1 + 0x2a) + '\x01';
  }
  return;
}


