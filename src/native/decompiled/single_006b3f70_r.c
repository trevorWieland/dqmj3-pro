#include "single_006b3f70_r.h"


extern undefined4 SUB_00040080;

void fn_006b3f70(int *param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined1 *local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined1 *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_1 == 0) {
    fn_0012bc84(0x208,&local_70);
    uVar1 = local_70;
    local_68 = 0x10000;
    local_64 = &SUB_00040080;
    local_70 = 0;
    local_6c = 0x10080;
    fn_00301a9c(uVar1,&local_70,0x10);
    fn_001467e4(0x10);
    return;
  }
  iVar2 = *(int *)(param_2 + 0x24);
  if (iVar2 == 0x84c1) {
    uVar4 = 0x91;
  }
  else if (iVar2 == 0x84c2) {
    uVar4 = 0x99;
  }
  else {
    uVar4 = 0x81;
  }
  if (param_1[5] < 2) {
    param_3 = 0x2601;
  }
  if (iVar2 == 0x84c0) {
    iVar2 = 5;
  }
  else {
    iVar2 = 0;
  }
  local_5c = fn_0015fa88(param_1[10]);
  local_70 = 0;
  local_6c = (iVar2 + 5) * 0x100000 - 0x100000U | uVar4 | 0x800f0000;
  local_68 = param_1[4] | param_1[3] << 0x10;
  if (param_1[9] == 0xc) {
    iVar2 = 2;
  }
  else {
    iVar2 = 0;
  }
  iVar3 = 0;
  if (param_3 != 0x2601) {
    iVar3 = param_3 + -0x2700;
  }
  if ((param_3 != 0x2601 && iVar3 != 1) && (param_3 != 0x2703)) {
    iVar3 = 0;
  }
  else {
    iVar3 = 1;
  }
  local_5c = local_5c >> 3;
  local_64 = (undefined1 *)
             ((uint)(param_3 == 0x2702 || param_3 == 0x2703) << 0x18 |
              (uint)(byte)(&DAT_007e0a3c)[param_1[6]] << 0xc |
              (uint)(byte)(&DAT_007e0a3c)[param_1[7]] << 8 | iVar2 << 4 | iVar3 << 2 | 2);
  if (param_1[5] < 2) {
    local_60 = 0;
  }
  else {
    local_60 = param_1[5] + -1;
  }
  local_60 = local_60 << 0x10;
  fn_00734b4c(&local_70,0x18,1);
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0x14;
  }
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0xc;
  }
  if (*(int *)(param_2 + 0x24) == 0x84c0) {
    local_40 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    fn_00734b4c(&local_40,0x18,1);
  }
  if (*(int *)(param_2 + 0x24) == 0x84c1) {
    local_50 = 2;
  }
  else if (*(int *)(param_2 + 0x24) == 0x84c2) {
    local_50 = 4;
  }
  else {
    local_50 = 1;
  }
  local_44 = &SUB_00040080;
  uStack_4c = 0x10080;
  uStack_48 = 0x10000;
  local_58 = (uint)(byte)(&DAT_007e1700)[param_1[9]];
  if (*(int *)(param_2 + 0x24) == 0x84c1) {
    local_54 = 0x96;
  }
  else if (*(int *)(param_2 + 0x24) == 0x84c2) {
    local_54 = 0x9e;
  }
  else {
    local_54 = 0x8e;
  }
  local_54 = local_54 | 0xf0000;
  fn_00734b4c(&local_58,0x18,1);
  if ((param_6 != (undefined4 *)0x0) && (*param_6 = 0x20, *(int *)(param_2 + 0x24) == 0x84c0)) {
    *param_6 = 0x38;
  }
  return;
}


