#include "005b3c1c_005b4d04aa.h"



undefined4 fn_005b3cfc(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [2];
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  uVar5 = 0;
  iVar4 = 0;
  if ((int)uVar1 < 0x1e) {
    iVar3 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
    if (((iVar3 >> 2) - (iVar3 >> 0x1f)) * -7 + uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      fn_001638a0();
    }
    iVar3 = 0;
    uVar1 = *(int *)(param_1 + 0xe8) * *(int *)(param_1 + 0xe0);
    if (uVar1 < *(uint *)(param_1 + 0xe4)) {
      iVar4 = *(uint *)(param_1 + 0xe4) - uVar1;
    }
    *(int *)(param_1 + 0xdc) = *(int *)(param_1 + 0xdc) - *(int *)(param_1 + 0xe8);
    if ((*(int *)(param_1 + 0xe0) != 0) && (iVar2 = fn_00300f74(3000), iVar2 != 0)) {
      iVar3 = fn_00169f1c(*(int *)(param_1 + 0xf0) * 100);
    }
    fn_00344ef0(*(undefined4 *)(param_1 + 0xb4),0,*(int *)(param_1 + 0xd4) + iVar3);
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0018a618(&local_38,0x18,0x17,&DAT_005b3cf4,*(undefined4 *)(param_1 + 0xdc));
    fn_005d27ac(param_1 + 0xc0,1,1,&local_38);
    *(int *)(param_1 + 0xe0) = *(int *)(param_1 + 0xe0) + 1;
    fn_005b4558(param_1,*(undefined4 *)(param_1 + 0xf4),iVar4);
  }
  else {
    if (*(char *)(param_1 + 0xf9) != '\0') {
      fn_00229654(*(undefined4 *)(DAT_00897804 + 0x28));
    }
    fn_005b4558(param_1,*(undefined4 *)(param_1 + 0xf4),0);
    uVar5 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    *(undefined4 *)(param_1 + 0xdc) = uVar5;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 0;
    fn_0018a618(&local_38,0x18,0x17,&DAT_005b3cf4,*(undefined4 *)(param_1 + 0xdc));
    fn_005d27ac(param_1 + 0xc0,1,1,&local_38);
    fn_00344ef0(*(undefined4 *)(param_1 + 0xb4),0,
                 *(int *)(param_1 + 0xf0) + *(int *)(param_1 + 0xd4));
    local_3c = 0x78000000;
    local_20[0] = 0;
    fn_0068869c(DAT_0089780c,&local_3c,local_20,1);
    iVar4 = *(int *)(param_1 + 0x74);
    *(undefined1 *)(iVar4 + 0x81) = 1;
    fn_0031f3f4(iVar4,0);
    uVar5 = 1;
  }
  return uVar5;
}



void fn_005b3c1c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xf8) == '\0') {
    return;
  }
  iVar3 = *(int *)(param_1 + 0xd0);
  iVar4 = *(int *)(iVar3 + 0x70);
  if (iVar4 <= *(int *)(iVar3 + 0x3c)) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar1 = *(int *)(iVar3 + 0x3c) + 10;
  if (iVar4 < iVar1) {
    iVar1 = iVar4;
  }
  *(int *)(iVar3 + 0x3c) = iVar1;
  uVar2 = fn_003453a8();
  fn_005b4558(param_1,0,uVar2);
  fn_0068ab44(param_1,0x1000957);
  return;
}



void fn_005b4558(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  if (param_3 != 0) {
    fn_00101a50(&local_28,0xc,&DAT_005b3cf4,param_3);
  }
  fn_0031b78c(param_1,param_2,4,&local_28);
  return;
}


