#include "00632cb0_00633384a.h"



void fn_0063306c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short param_5,undefined2 param_6,int param_7)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char local_26b8 [4];
  short local_26b4 [2];
  undefined1 local_26b0 [4];
  undefined2 local_26ac;
  short local_26aa [3];
  undefined1 local_26a4 [2];
  undefined2 local_26a2;
  char local_26a0 [9832];
  undefined4 local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  local_26b8[0] = (char)param_3;
  local_26b8[1] = (char)param_4;
  local_26b4[0] = param_5;
  local_26b4[1] = param_6;
  local_38 = param_1;
  local_34 = param_2;
  uStack_30 = param_3;
  uStack_2c = param_4;
  fn_0062b720(param_1,param_7 + 0x180388,local_26b0);
  local_26b0[0] = 0xf;
  uVar5 = 0;
  local_26ac = (undefined2)local_34;
  do {
    iVar3 = param_7 + 0x180388 + local_26b8[uVar5] * 0x418;
    fn_0017455c(iVar3 + -0x4080,-(int)local_26b4[uVar5]);
    iVar1 = uVar5 * 0xc4;
    local_26aa[uVar5] = local_26b4[uVar5];
    local_26a4[iVar1] = 4;
    *(undefined2 *)(local_26a4 + iVar1 + 2) = 4;
    cVar2 = local_26b8[uVar5];
    local_26a0[iVar1] = cVar2;
    local_26a0[iVar1 + 1] = cVar2;
    iVar4 = fn_00692050(local_34);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar3 + -0x4024) = 0;
      *(undefined1 *)(iVar3 + -0x3fc3) = 0;
      fn_00619734(local_26a0 + iVar1 + 0x44,1);
    }
    iVar4 = fn_00163a00(local_34);
    if (iVar4 == 4) {
      *(undefined1 *)(iVar3 + -0x4008) = 0;
      *(undefined1 *)(iVar3 + -0x3fa7) = 0;
      fn_00619734(local_26a0 + iVar1 + 0x44,0x1d,1);
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 2);
  fn_0062a720(local_38,param_7,local_26b0);
  return;
}



undefined4 fn_00632cb0(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  char *pcVar5;
  char cVar6;
  undefined1 *puVar7;
  undefined1 **ppuVar8;
  undefined1 *local_5228;
  undefined1 *local_5224;
  undefined1 auStack_5220 [18];
  char local_520e;
  char local_520d;
  undefined1 local_51ec [24];
  undefined1 auStack_51d4 [20828];
  int local_78;
  char local_74;
  undefined1 auStack_70 [72];
  
  ppuVar8 = &local_5228;
  fn_00656538(auStack_5220);
  local_5228 = param_4;
  local_5224 = auStack_5220;
  fn_0062d9f8(param_1,auStack_5220,0,param_3);
  fn_006228c8(auStack_51d4);
  fn_00630d4c(param_1,auStack_5220,param_4,auStack_51d4);
  fn_006311bc(param_1,auStack_5220,param_4,auStack_51d4);
  uVar1 = fn_00656538(auStack_70,auStack_5220);
  puVar7 = param_4 + 0x180388;
  uVar1 = fn_00626c2c(param_1,puVar7,uVar1);
  fn_0017455c(uVar1,-local_78);
  fn_00621a88(param_1,auStack_5220,param_4,auStack_51d4);
  fn_0062ee60(param_1,auStack_5220,param_4,auStack_51d4);
  fn_00626660(param_1,auStack_51d4,param_4);
  fn_00627194(param_1,auStack_5220,param_4,auStack_51d4);
  fn_00632020(param_1,auStack_5220,param_4,auStack_51d4);
  if (*(char *)(param_1 + 0x18) == '\0') {
    fn_00634508(param_1,auStack_5220,param_4,auStack_51d4);
  }
  fn_00628e98(param_1,auStack_5220,param_4,auStack_51d4);
  local_5228 = auStack_51d4;
  fn_006276cc(param_1,0,puVar7,param_4);
  iVar2 = fn_0062285c(param_1,param_4);
  if (iVar2 == 0) {
    if (((int)local_520e == local_520d + -1) || (*(char *)(param_1 + 0x1b) != '\0')) {
      fn_0062f9a4(param_1,auStack_5220,param_4,auStack_51d4);
    }
    iVar2 = fn_0062285c(param_1,param_4);
    if (((iVar2 == 0) && (*(char *)(param_1 + 0x18) == '\0')) && (local_74 == '\0')) {
      fn_0062fe14(param_1,auStack_5220,param_4,auStack_51d4);
      fn_00630874(param_1,auStack_5220,param_4,auStack_51d4);
      fn_00631cfc(param_1,auStack_5220,param_4,auStack_51d4);
      fn_006305dc(param_1,auStack_5220,param_4,auStack_51d4);
      fn_0062d760(param_1,auStack_5220,param_4,auStack_51d4);
      fn_0062e7e4(param_1,auStack_5220,param_4,auStack_51d4);
      fn_00626660(param_1,auStack_51d4,param_4);
      iVar2 = fn_0062285c(param_1,param_4);
      if (iVar2 == 0) {
        fn_006267fc(param_1,puVar7,param_4,auStack_51d4);
      }
    }
  }
  local_5228 = auStack_51d4;
  fn_006276cc(param_1,1,puVar7,param_4);
  uVar1 = fn_0062285c(param_1,param_4);
  fn_00622928(param_1,auStack_5220,auStack_51d4,param_4);
  if (local_74 == '\0') {
    iVar2 = fn_0062a40c(param_1,auStack_5220);
    uVar3 = fn_00691860();
    uVar4 = fn_0069187c(iVar2);
    fn_00620924(param_1 + 4,uVar3,uVar4);
    if (iVar2 == 0xb2) {
      pcVar5 = param_4 + 0x180392;
      cVar6 = *pcVar5 + '\x01';
      *pcVar5 = cVar6;
      local_5228 = (undefined1 *)CONCAT31(((unsigned int)(local_5228) >> 8) & 0xffffff,cVar6);
      if (cVar6 < '\0') {
        ppuVar8 = &local_5224;
      }
      local_5224 = (undefined1 *)((uint)local_5224 & 0xffffff00);
      local_51ec[0] = 99;
      if ('c' < *(char *)ppuVar8) {
        ppuVar8 = (undefined1 **)local_51ec;
      }
      *pcVar5 = *(char *)ppuVar8;
    }
  }
  return uVar1;
}


