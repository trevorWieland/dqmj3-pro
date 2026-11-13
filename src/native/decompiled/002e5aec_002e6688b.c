#include "002e5aec_002e6688b.h"



void fn_002e6688(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_00820c9c;
  uVar2 = param_1[0x3d];
  uVar3 = param_1[0x3e];
  if (uVar2 != uVar3) {
    uVar1 = uVar2;
    if (uVar3 <= uVar2) {
      do {
        uVar1 = uVar1 + 0x10;
      } while (uVar1 != uVar3);
    }
    param_1[0x3e] = uVar3 - (uVar3 - uVar2 & 0xfffffff0);
  }
  uVar3 = uVar2;
  if ((uint)param_1[0x3e] < uVar2) {
    do {
      uVar3 = uVar3 + 0x10;
    } while (uVar3 != param_1[0x3e]);
  }
  fn_001008c4(uVar2,(int)(param_1[0x3f] - uVar2) >> 4,0);
  fn_00397a78(param_1);
  return;
}



void fn_002e6640(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &PTR_FUN_00820c9c;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  *(undefined1 *)(puVar1 + 0x3c) = 0;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  return;
}



undefined1 * fn_002e628c(undefined4 param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  short local_20 [2];
  short local_1c [2];
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  *(undefined4 *)(param_3 + 0xe0) = *param_2;
  *(undefined4 *)(param_3 + 0xe4) = uVar1;
  *(undefined4 *)(param_3 + 0xe8) = uVar2;
  *(undefined4 *)(param_3 + 0xec) = uVar3;
  fn_0020bbc4(auStack_18,param_3);
  local_20[0] = fn_006bf5bc(auStack_14);
  local_1c[0] = fn_006c0028(auStack_14);
  psVar4 = local_20;
  if (local_1c[0] < local_20[0]) {
    psVar4 = local_1c;
  }
  *(short *)(param_3 + 0x22) = *psVar4;
  local_1c[0] = fn_006bf5c8(auStack_14);
  local_20[0] = fn_006c0114(auStack_14);
  psVar4 = local_1c;
  if (local_20[0] < local_1c[0]) {
    psVar4 = local_20;
  }
  *(short *)(param_3 + 0x24) = *psVar4;
  return auStack_18;
}



void fn_002e6124(int param_1)

{
  uint uVar1;
  
  uVar1 = *(int *)(param_1 + 0xec) + 1;
  *(uint *)(param_1 + 0xec) = uVar1;
  if (3 < uVar1) {
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  fn_002e6334(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_002e5f94(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c [2];
  
  if (*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 4 == 0) {
    return;
  }
  fn_002c3e78(param_1);
  iVar1 = fn_006ba284(param_1);
  iVar4 = 0;
  do {
    uVar3 = iVar1 * 9 + iVar4;
    if ((uint)(*(int *)(param_1 + 0xf8) - *(int *)(param_1 + 0xf4) >> 4) <= uVar3) break;
    piVar6 = (int *)(*(int *)(param_1 + 0xf4) + uVar3 * 0x10);
    iVar2 = fn_0028afe0(*(undefined4 *)(DAT_00897804 + 0xc),*piVar6);
    if (iVar2 == 0) {
      local_30 = &DAT_002e5ac8;
      uVar5 = 0xffffffff;
    }
    else {
      local_30 = (undefined *)fn_0022f584((char *)&DAT_002e5acc,0);
      iVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14));
      if (*(int *)(iVar2 + 0xe0) == *piVar6) {
        uVar5 = _DAT_00894274;
      }
      else {
        uVar5 = _DAT_0089427c;
      }
    }
    fn_0031b78c(param_1,iVar4,7,local_30);
    local_2c[0] = uVar5;
    fn_002c37b4(param_1,iVar4,7,local_2c);
    local_38 = &DAT_008f9cf4;
    local_34 = &DAT_008f9cf4;
    fn_002318cc(piVar6,&local_38,&local_34);
    fn_0031b78c(param_1,iVar4,1,local_38);
    fn_0031b78c(param_1,iVar4,4,local_34);
    fn_001588d4(&local_34);
    fn_001588d4(&local_38);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
                    /* WARNING: Subroutine does not return */
  fn_006ba250(param_1);
}


