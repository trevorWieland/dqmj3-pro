#include "004a5ffc_004a679c.h"



void fn_004a679c(undefined4 *param_1)

{
  *param_1 = &DAT_00855760;
  return;
}



undefined4 fn_004a66c4(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int local_20;
  undefined1 auStack_1c [8];
  int iStack_14;
  uint local_10;
  
  iStack_14 = param_1;
  local_10 = param_2;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar4 = *(int *)(param_1 + 0x70);
  iVar2 = iVar4;
  iVar1 = *(int *)(iVar4 + 4);
  while (iVar1 != 0) {
    if ((uint)*(ushort *)(iVar1 + 0x10) < (local_10 & 0xffff)) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 == iVar4) || ((local_10 & 0xffff) < (uint)*(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar4;
  }
  if (iVar2 != iVar4) {
    local_20 = iVar2;
    fn_0077da78(auStack_1c,param_1 + 0x60,&local_20);
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



undefined4 fn_004a65f8(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint local_1c;
  undefined4 uStack_18;
  
  local_1c = param_2;
  uStack_18 = param_3;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar1 = *(int *)(param_1 + 0x70);
  iVar2 = iVar1;
  if (*(int *)(iVar1 + 4) != 0) {
    iVar4 = *(int *)(iVar1 + 4);
    do {
      if ((uint)*(ushort *)(iVar4 + 0x10) < (local_1c & 0xffff)) {
        iVar5 = *(int *)(iVar4 + 0xc);
      }
      else {
        iVar5 = *(int *)(iVar4 + 8);
        iVar2 = iVar4;
      }
      iVar4 = iVar5;
    } while (iVar5 != 0);
  }
  if ((iVar2 == iVar1) || ((local_1c & 0xffff) < (uint)*(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar1;
  }
  if (iVar2 == iVar1) {
    puVar6 = (undefined4 *)fn_007861a0(param_1 + 0x60,&local_1c);
    *puVar6 = param_3;
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 1;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 0;
}



void fn_004a65b8(undefined4 param_1,undefined4 param_2,int param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 local_48;
  undefined1 *local_44;
  undefined4 local_40;
  uint uStack_3c;
  uint uStack_38;
  undefined4 local_34;
  uint local_30;
  uint local_2c;
  undefined1 auStack_28 [24];
  
  iVar5 = fn_0045c8f4();
  piVar6 = (int *)fn_0047ee5c(*(undefined4 *)(iVar5 + 0xc),param_2,0);
  if (piVar6 == (int *)0x0) {
    return;
  }
  if (((char)piVar6[0xd] == '\0') || (param_4 != (int *)0x0)) {
    piVar6[0xc] = (int)param_4;
    *(undefined1 *)(piVar6 + 0xd) = 0;
    if (param_4 == (int *)0x0) {
      piVar6[0xe] = 0;
      piVar6[0xf] = 0;
    }
    else {
      piVar6[0xe] = param_4[0x1f];
      piVar6[0xf] = param_4[0x1e];
    }
  }
  if ((param_4 != (int *)0x0) &&
     ((param_4[0x1f] - 0x6eU < 10 ||
      (uVar1 = (**(code **)(*param_4 + 0x7c))(), (uVar1 & 0x8000000) == 0)))) {
    *(undefined1 *)(param_3 + 0x3b) = 1;
  }
  fn_004b8d6c(&local_40);
  local_30 = CONCAT31(((unsigned int)(local_30) >> 8) & 0xffffff,0xff);
  fn_0074a4c8(param_3,&local_30);
  if ((local_30 & 0xff) == 0) {
    iVar5 = *(int *)(param_3 + 8);
    if ((uint)(*(int *)(iVar5 + 0x10) - *(int *)(param_3 + 0xc)) < 4) {
      *(undefined1 *)(param_3 + 4) = 1;
      local_2c = 0;
    }
    else {
      puVar3 = (uint *)(*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0xc) + *(int *)(param_3 + 0xc));
      local_2c = *puVar3 & 0xffffff | (uint)*(byte *)((int)puVar3 + 3) << 0x18;
      *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + 4;
    }
    fn_004b8d4c(auStack_28,&local_2c);
    fn_004b8d90(&local_40,auStack_28);
  }
  else if ((local_30 & 0xff) == 1) {
    local_44 = (undefined1 *)0x10001;
    uVar2 = fn_004b8d4c(&local_2c,&local_44);
    fn_004b8d90(&local_40,uVar2);
  }
  else {
    local_44 = &DAT_80010001;
    uVar2 = fn_004b8d4c(&local_2c,&local_44);
    fn_004b8d90(&local_40,uVar2);
  }
  fn_0074a528(param_3,&local_48);
  iVar5 = fn_001249d0();
  iVar5 = fn_0048a058(*(undefined4 *)(iVar5 + 0x10),local_48);
  if (iVar5 != 0) {
    if (*(char *)(param_3 + 4) == '\0') {
      iVar4 = fn_006d3b8c(&local_40);
      if (iVar4 == 0) {
        local_34 = local_40;
        local_30 = uStack_3c;
        local_2c = uStack_38;
        fn_00456044(iVar5,&local_34);
        return;
      }
      (**(code **)(*piVar6 + 0x50))(piVar6,param_3,iVar5);
      if (*(char *)(param_3 + 4) == '\0') {
        local_44 = (undefined1 *)0x10001;
        uVar2 = fn_004b8d4c(&local_34,&local_44);
        fn_00455e8c(iVar5,2,uVar2,1);
        return;
      }
    }
    local_44 = (undefined1 *)0x8001000f;
    uVar2 = fn_004b8d4c(&local_34,&local_44);
    fn_00456044(iVar5,uVar2);
  }
  return;
}



void fn_004a6238(int *param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 local_284 [2];
  undefined1 auStack_280 [64];
  char local_240 [4];
  undefined1 *local_23c;
  undefined4 local_238;
  undefined1 auStack_234 [456];
  char local_6c [4];
  undefined1 auStack_68 [4];
  char local_64;
  
  fn_004b72ec(auStack_68,param_4);
  fn_004baa80(auStack_68,local_6c,local_284);
  iVar1 = fn_00489cd8(param_1 + 1,local_284[0]);
  fn_0047af54(iVar1 + 4,*(undefined4 *)(param_4 + 0x10));
  iVar1 = 0;
  if (local_6c[0] == '\x01') {
    fn_004a5ed0(param_2);
    fn_0047e9ec(param_1 + 0xb,param_2);
    fn_004b73b0(auStack_280);
    local_240[0] = '\0';
    fn_00491860();
    (**(code **)(*param_1 + 0xc))(param_1,local_284[0],auStack_68,auStack_280,local_240,param_3);
    fn_004918b8(param_3);
    if ((*(char *)(param_2 + 0x14) == '\0') && (local_240[0] != '\0')) {
      iVar2 = fn_004b72d8(auStack_280);
      local_23c = auStack_234;
      local_238 = 1;
      uVar3 = 0;
      uVar6 = 0;
      iVar4 = fn_001249d0();
      if (iVar4 != 0) {
        iVar1 = *(int *)(iVar4 + 0xc);
      }
      piVar5 = (int *)(iVar1 + 0x50);
      (**(code **)(*piVar5 + 8))();
      (**(code **)(*param_3 + 0x78))(local_23c,param_3,iVar2,local_238,0,uVar3,uVar6);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      iVar1 = fn_00489cd8(param_1 + 1,local_284[0]);
      fn_0047af54(iVar1 + 0x28,*(undefined4 *)(iVar2 + 0x10));
    }
    fn_004b7520(auStack_280);
    fn_0047e958(param_1 + 0xb,param_2);
  }
  else {
    iVar2 = fn_001249d0();
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0xc);
    }
    (**(code **)(*(int *)(iVar1 + 0x50) + 8))();
    (**(code **)(*param_1 + 0x10))(param_1,local_284[0],auStack_68,param_3);
    (**(code **)(*(int *)(iVar1 + 0x50) + 0xc))((int *)(iVar1 + 0x50));
  }
  if (local_64 != '\0') {
    fn_0045f27c(auStack_280);
    uVar3 = fn_0045f3dc(auStack_280,
                         L"ClientProtocolRequestBroker: Error processing message. pBuffer=");
    uVar3 = fn_0045f338(uVar3,param_4);
    uVar3 = fn_0045f3dc(uVar3,L" Protocol ID=");
    uVar3 = fn_0045f058(uVar3,local_284[0]);
    uVar3 = fn_0045f3dc(uVar3,L" CntSize=");
    uVar3 = fn_0045f0f8(uVar3,*(undefined4 *)(param_4 + 0x10));
    uVar3 = fn_0045f3dc(uVar3,L" Size=");
    fn_0045f0f8(uVar3,*(int *)(param_4 + 0x14) - *(int *)(param_4 + 0x18));
    if (param_3 == (int *)0x0) {
      fn_0045f3dc(auStack_280,L"  <EndPoint is NULL>");
    }
    else {
      uVar3 = fn_0045f3dc(auStack_280,L"  EndPoint: CID=");
      uVar3 = fn_0045f0f8(uVar3,param_3[0x1e]);
      uVar3 = fn_0045f3dc(uVar3,L" PID=");
      uVar3 = fn_0045f0f8(uVar3,param_3[0x1f]);
      uVar3 = fn_0045f3dc(uVar3,L" URL=");
      fn_0045f3b0(uVar3,param_3 + 2);
    }
    fn_0045f2ec(auStack_280);
  }
  fn_004b7520(auStack_68);
  return;
}



void fn_004a60bc(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,char *param_5,
                 undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  char *local_90;
  undefined4 *local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [64];
  undefined4 local_40 [3];
  int *piStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  piStack_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  local_28 = param_4;
  uVar1 = fn_0045c8f4();
  iVar2 = fn_0045ca4c(uVar1,param_2);
  if ((iVar2 == 0) &&
     (iVar2 = (**(code **)(*param_1 + 0x2c))(param_1,param_2), iVar2 == 0 && param_2 == 1)) {
    *param_5 = '\0';
  }
  else {
    local_84 = fn_004bab70(param_3);
    fn_004b73b0(auStack_80);
    *param_5 = '\0';
    if (iVar2 == 0) {
      *param_5 = '\x01';
      iVar2 = fn_006d1a94(param_1 + 0xb);
      local_40[0] = 0x80010002;
      uVar1 = fn_004b8d4c(&local_90,local_40);
      fn_004b8d90(iVar2 + 0x20,uVar1);
    }
    else {
      (**(code **)(param_1[0x20] + 8))();
      local_40[0] = 0;
      iVar3 = fn_006d1a94(param_1 + 0xb);
      local_8c = local_40;
      local_90 = param_5;
      local_88 = param_6;
      fn_004718b0(iVar2,*(undefined4 *)(iVar3 + 0x10),param_3,auStack_80);
      (**(code **)(param_1[0x20] + 0xc))(param_1 + 0x20);
    }
    if (*param_5 != '\0') {
      fn_004ba7d4(local_28,0,param_2);
      uVar1 = fn_006d1a94(param_1 + 0xb);
      fn_004ba860(local_28,uVar1,local_84,auStack_80);
    }
    fn_004b7520(auStack_80);
  }
  return;
}



undefined4 fn_004a5ffc(int param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar4 = *(int *)(param_1 + 0x70);
  iVar2 = iVar4;
  iVar1 = *(int *)(iVar4 + 4);
  while (iVar1 != 0) {
    if (*(ushort *)(iVar1 + 0x10) < param_2) {
      iVar1 = *(int *)(iVar1 + 0xc);
    }
    else {
      iVar2 = iVar1;
      iVar1 = *(int *)(iVar1 + 8);
    }
  }
  if ((iVar2 == iVar4) || (param_2 < *(ushort *)(iVar2 + 0x10))) {
    iVar2 = iVar4;
  }
  else {
  }
  if (iVar2 == iVar4) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x14);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return uVar5;
}


