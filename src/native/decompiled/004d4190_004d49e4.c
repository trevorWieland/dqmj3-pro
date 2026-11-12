#include "004d4190_004d49e4.h"



undefined1 * fn_004d49e4(void)

{
  undefined1 *puVar1;
  int *piVar2;
  
  if (DAT_008bf4ec == '\0') {
    puVar1 = &DAT_e0a1482b;
  }
  else {
    if (DAT_008bf4ed == '\0') {
      return &DAT_e0a14827;
    }
    piVar2 = (int *)fn_004ed2d0(6);
    (**(code **)(*piVar2 + 0x14))();
    DAT_008bf4ed = '\0';
    fn_004ed21c();
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined4 fn_004d49d0(undefined4 param_1)

{
  return param_1;
}



undefined1 *
fn_004d47c0(int *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5,
            int *param_6)

{
  int iVar1;
  int iVar2;
  undefined4 local_4c [9];
  int local_28;
  
  iVar2 = *param_1;
  if (iVar2 < 0) {
    return (undefined1 *)0xe0e14826;
  }
  fn_004c9eac(local_4c);
  if (param_3 < 0x2001) {
    iVar1 = fn_0052906c();
  }
  else {
    iVar1 = fn_0052b914(&local_28,iVar2,param_2,param_3,4,local_4c[0],8);
  }
  if (iVar1 < 0) {
    local_28 = fn_00529b0c();
  }
  else {
  }
  if (-1 < local_28) {
    if (param_4 != 0) {
      fn_004c9e40(local_4c,param_4);
    }
    if (param_6 != (int *)0x0) {
      *param_6 = local_28;
    }
    return (undefined1 *)0x0;
  }
  if ((local_28 == -6) || (local_28 != -8)) {
    if ((local_28 == -0xf || local_28 == -0x26) || (local_28 == -0x38 || local_28 == -0x4c)) {
      return (undefined1 *)0xd8a14825;
    }
    if (local_28 == -8 || local_28 == -0x1c) {
      return (undefined1 *)0xe0e14826;
    }
    if ((local_28 == -0x3f || local_28 == -0x23) || local_28 == -5) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_28 == -0x27) {
      return &DAT_e0a14827;
    }
    if ((local_28 != -6 && local_28 != -10) && (local_28 != -0x31 && local_28 != -0x1b)) {
      return &DAT_e0a14827;
    }
  }
  else if (*param_1 == iVar2) {
    return (undefined1 *)0xe0e14826;
  }
  return (undefined1 *)0xd1614828;
}



undefined1 * fn_004d46b0(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  undefined4 local_c;
  
  if (*param_1 < 0) {
    return (undefined1 *)0xe0e14826;
  }
  local_10 = 0;
  local_c = param_2;
  iVar1 = fn_00528038(&local_10,*param_1,0,8,&local_c,4);
  if (iVar1 < 0) {
    local_10 = fn_00529b0c();
  }
  if (local_10 < 0) {
    if ((local_10 == -0xf || local_10 == -0x26) || (local_10 == -0x38 || local_10 == -0x4c)) {
      return (undefined1 *)0xd8a14825;
    }
    if (local_10 == -8 || local_10 == -0x1c) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -0x44 || local_10 == -5) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -0x45 || local_10 == -0x3f) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -4 || local_10 == -0x33) {
      return (undefined1 *)0xe0e14826;
    }
    puVar2 = &DAT_e0a14827;
    if ((local_10 != -0x31 && local_10 != -0x2a) && (local_10 != -0x21 && local_10 != -0x27)) {
      if (local_10 == -3) {
        puVar2 = (undefined1 *)0xd8a148c2;
      }
      else if (local_10 == -10) {
        puVar2 = (undefined1 *)0xd861482c;
      }
    }
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



undefined4
fn_004d45ec(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,int *param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_44 [9];
  int local_20;
  
  fn_004c9eac(local_44);
  fn_004c9e80(local_44,param_4);
  if (*param_1 < 0) {
    uVar1 = 0xe0e14826;
  }
  else {
    if (param_3 < 0x2001) {
      iVar2 = fn_00528598();
    }
    else {
      iVar2 = fn_0052b3b8(&local_20,*param_1,param_2,param_3,0,local_44[0],8);
    }
    if (iVar2 < 0) {
      local_20 = fn_00529b0c();
    }
    if (-1 < local_20) {
      if (param_5 != (int *)0x0) {
        *param_5 = local_20;
      }
      return 0;
    }
    uVar1 = fn_004d4010();
  }
  return uVar1;
}



undefined1 * fn_004d44f4(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  if (*param_1 < 0) {
    return (undefined1 *)0xe0e14826;
  }
  local_10 = 0;
  iVar1 = fn_0052aeb0(&local_10);
  if (iVar1 < 0) {
    local_10 = fn_00529b0c();
  }
  *param_1 = -1;
  param_1[1] = param_1[1] + -1;
  if (local_10 < 0) {
    if ((local_10 == -0xf || local_10 == -0x26) || (local_10 == -0x38 || local_10 == -0x4c)) {
      return (undefined1 *)0xd8a14825;
    }
    if (local_10 == -8 || local_10 == -0x1c) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -0x44 || local_10 == -5) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -0x45 || local_10 == -0x3f) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_10 == -4 || local_10 == -0x33) {
      return (undefined1 *)0xe0e14826;
    }
    puVar2 = &DAT_e0a14827;
    if ((local_10 != -0x31 && local_10 != -0x2a) && (local_10 != -0x21 && local_10 != -0x27)) {
      if (local_10 == -3) {
        puVar2 = (undefined1 *)0xd8a148c2;
      }
      else if (local_10 == -10) {
        puVar2 = (undefined1 *)0xd861482c;
      }
    }
  }
  else {
    puVar2 = (undefined1 *)0x0;
  }
  return puVar2;
}



undefined1 * fn_004d43ec(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  int local_10;
  
  local_10 = 0;
  iVar1 = fn_0052b858(&local_10,2,2,0);
  if (iVar1 < 0) {
    local_10 = fn_00529b0c();
  }
  if (-1 < local_10) {
    param_1[1] = param_1[1] + 1;
    *param_1 = local_10;
    return (undefined1 *)0x0;
  }
  if ((local_10 == -0xf || local_10 == -0x26) || (local_10 == -0x38 || local_10 == -0x4c)) {
    return (undefined1 *)0xd8a14825;
  }
  if ((((local_10 == -8 || local_10 == -0x1c) || (local_10 == -0x44 || local_10 == -5)) ||
      (local_10 == -0x45 || local_10 == -0x3f)) || (local_10 == -4 || local_10 == -0x33)) {
    return (undefined1 *)0xe0e14826;
  }
  puVar2 = &DAT_e0a14827;
  if ((local_10 != -0x31 && local_10 != -0x2a) && (local_10 != -0x21 && local_10 != -0x27)) {
    if (local_10 == -3) {
      puVar2 = (undefined1 *)0xd8a148c2;
    }
    else if (local_10 == -10) {
      puVar2 = (undefined1 *)0xd861482c;
    }
  }
  return puVar2;
}



undefined4 fn_004d43a4(undefined4 param_1,undefined2 param_2)

{
  undefined4 uVar1;
  undefined4 local_18;
  undefined2 local_14;
  
  fn_0015f180(&local_18);
  local_18 = 0;
  local_14 = param_2;
  uVar1 = fn_004d4278(param_1,&local_18);
  return uVar1;
}



undefined1 * fn_004d4278(int *param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 local_40 [9];
  int local_1c;
  
  iVar2 = *param_1;
  if (iVar2 < 0) {
    return (undefined1 *)0xe0e14826;
  }
  fn_004ed464(param_1 + 2);
  fn_004c9eac(local_40);
  fn_004c9e80(local_40,param_2);
  local_1c = 0;
  iVar2 = fn_0052a30c(&local_1c,iVar2,local_40[0],8);
  if (iVar2 < 0) {
    local_1c = fn_00529b0c();
  }
  if (local_1c < 0) {
    if ((local_1c == -0xf || local_1c == -0x26) || (local_1c == -0x38 || local_1c == -0x4c)) {
      return (undefined1 *)0xd8a14825;
    }
    if (local_1c == -8 || local_1c == -0x1c) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_1c == -0x44 || local_1c == -5) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_1c == -0x45 || local_1c == -0x3f) {
      return (undefined1 *)0xe0e14826;
    }
    if (local_1c == -4 || local_1c == -0x33) {
      return (undefined1 *)0xe0e14826;
    }
    puVar1 = &DAT_e0a14827;
    if ((local_1c != -0x31 && local_1c != -0x2a) && (local_1c != -0x21 && local_1c != -0x27)) {
      if (local_1c == -3) {
        puVar1 = (undefined1 *)0xd8a148c2;
      }
      else if (local_1c == -10) {
        puVar1 = (undefined1 *)0xd861482c;
      }
    }
  }
  else {
    puVar1 = (undefined1 *)0x0;
  }
  return puVar1;
}



undefined4
fn_004d4190(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            int *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  int local_3c;
  int local_38 [6];
  undefined1 auStack_20 [12];
  
  uVar4 = *param_1;
  uVar2 = 0xe0e14826;
  uVar1 = uVar4;
  if (-1 < (int)uVar4) {
    uVar1 = param_5;
  }
  if ((uVar1 != 0 && (-1 < (int)uVar4 && -1 < (int)param_5)) && (param_5 < 0xd)) {
    local_3c = param_5 << 3;
    local_40 = 8;
    local_48 = 0;
    uStack_44 = param_4;
    iVar3 = fn_00529654(local_38,uVar4,param_2,param_3);
    if (iVar3 < 0) {
      local_38[0] = fn_00529b0c();
    }
    else {
    }
    if (-1 < local_38[0]) {
      if (param_6 != (int *)0x0) {
        *param_6 = local_38[0];
      }
      return 0;
    }
    fn_0015f180(auStack_20);
    fn_004c9eac(&local_48);
    fn_004c9de4(&local_48,param_4);
    fn_004c9e40(&local_48,auStack_20);
    uVar2 = fn_004d4010(local_38[0]);
  }
  return uVar2;
}


