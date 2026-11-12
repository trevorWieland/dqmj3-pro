#include "004a7224_004b1cb0.h"



undefined4 * fn_004b1cb0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00855684;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004b1cb0(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_004b1d74:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004b1d5c;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_004b1d74;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004b1d5c:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



void fn_004ae7a0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined *local_110;
  code *local_10c;
  undefined4 local_108;
  undefined *local_104;
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [104];
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 uStack_24;
  
  iVar2 = fn_006d19d4(*(undefined4 *)(param_1 + 400));
  if (*(int *)(iVar2 + 0x1c) == 2) {
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 400) + 0x78) + 0x10) = 1;
    local_10c = fn_004adfd8;
    local_108 = 0;
    local_104 = &DAT_004ae9d0;
    local_110 = &DAT_00853500;
    fn_00479c98(param_1,&local_110);
    return;
  }
  fn_0013d40c(auStack_30);
  fn_0013ce04(auStack_100);
  uVar3 = fn_00455c50(auStack_98,&DAT_004ae9d0);
  iVar2 = fn_006d0c14(param_1 + 0x208,uVar3);
  fn_0013ce98(auStack_98);
  if (iVar2 == 0) {
    local_108 = 2;
    local_104 = (undefined *)0x2;
    local_110 = (undefined *)0xa;
    local_10c = (code *)0x1;
    fn_004b6230(auStack_30,L"prudps:/address=%s;port=%d;stream=%d;sid=%d;PID=%d;CID=1;type=%d",
                 *(undefined4 *)(param_1 + 0x74),*(ushort *)(param_1 + 0x78) + 1);
    fn_00455cd8(auStack_100,auStack_30);
  }
  else {
    fn_00455cf0(auStack_100,param_1 + 0x208);
  }
  uVar3 = *(undefined4 *)(param_1 + 0x30c);
  *(undefined4 *)(param_1 + 0x30c) = 0;
  if (DAT_008b68a8 != (int *)0x0) {
    (**(code **)(*DAT_008b68a8 + 4))();
  }
  DAT_008b68a8 = (int *)uVar3;
  fn_00456400(param_1 + 0x80);
  local_28 = *(undefined4 *)(param_1 + 800);
  uStack_24 = *(undefined4 *)(param_1 + 0x324);
  local_110 = (undefined *)fn_004b4164(&local_28);
  local_10c = (code *)(param_1 + 0x310);
  iVar4 = *(int *)(*(int *)(param_1 + 400) + 0x78);
  iVar2 = 0;
  if (iVar4 != 0) {
    iVar2 = *(int *)(iVar4 + 0x24);
  }
  iVar2 = fn_004817e4(*(undefined4 *)(iVar2 + 0x18),param_1 + 0x80,auStack_100,param_1 + 0x318);
  if (iVar2 == 0) {
    local_104 = (undefined *)0x8001000d;
    uVar3 = fn_004b8d4c(&local_110,&local_104);
    fn_004adbfc(param_1,uVar3);
  }
  else {
    piVar6 = (int *)(*(int *)(param_1 + 0x310) + 4);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = *piVar6 + 1;
    fn_004b2f0c(param_1);
    puVar5 = (undefined4 *)fn_0015ecdc(0x10);
    if (puVar5 != (undefined4 *)0x0) {
      puVar5[1] = fn_004ae698;
      *puVar5 = &DAT_00853500;
      puVar5[2] = 0;
      puVar5[3] = &DAT_004ae9d0;
    }
    fn_00479b1c(param_1,param_1 + 0x80,puVar5);
  }
  fn_0013ce98(auStack_100);
  fn_00170f54(auStack_30);
  return;
}



void fn_004aaa4c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  param_1[1] = param_2;
  *param_1 = &DAT_008554e0;
  param_1[2] = param_3;
  param_1[3] = param_4;
  param_1[4] = param_5;
  param_1[5] = param_6;
  param_1[6] = param_7;
  param_1[7] = param_8;
  param_1[8] = param_9;
  param_1[9] = param_10;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  *(undefined1 *)(param_1 + 0x11) = 0;
  return;
}



void fn_004a9df4(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c [4];
  
  if (DAT_008b6385 == '\0') {
    iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x20);
    uVar3 = *(undefined4 *)(iVar2 + 0x24);
    *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(param_1 + 0xd4) = uVar3;
    iVar2 = fn_004871b4(param_1 + 0x78,**(undefined4 **)(param_1 + 0xf4),
                         *(undefined4 *)(param_1 + 0xf0),param_1 + 0xd8);
    if (iVar2 == 0) {
      local_1c[0] = &DAT_80010001;
      uVar3 = fn_004b8d4c(&local_28,local_1c);
      fn_004a9a5c(param_1,3,uVar3);
      return;
    }
  }
  else {
    fn_004871fc(&local_28,**(undefined4 **)(param_1 + 0xf4),*(undefined4 *)(param_1 + 0xf0));
    fn_0015ed58(param_1 + 0xd8,&local_28);
    fn_0014f2b0(&local_28);
  }
  if (*(char *)(param_1 + 0x88) != '\x01') {
    local_24 = fn_004a9aac;
    uStack_20 = 0;
    local_1c[0] = &DAT_004a9f3c;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  fn_004b2f0c(param_1);
  puVar1 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[1] = fn_004a9aac;
    *puVar1 = &DAT_00853500;
    puVar1[2] = 0;
    puVar1[3] = &DAT_004a9f3c;
  }
  fn_00479b1c(param_1,param_1 + 0x78,puVar1);
  return;
}



void fn_004a917c(int param_1)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  char *local_50;
  code *local_4c;
  undefined4 local_48;
  undefined *local_44;
  undefined1 auStack_40 [12];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar2 == 0) {
    local_44 = (undefined *)0x80010004;
    uVar5 = fn_004b8d4c(&local_50,&local_44);
    fn_004a8c20(param_1,uVar5);
    return;
  }
  if (*(char *)(param_1 + 0xa0) != '\x02') {
    local_30 = *(undefined4 *)(param_1 + 200);
    uStack_2c = *(undefined4 *)(param_1 + 0xcc);
    uStack_28 = *(undefined4 *)(param_1 + 0xd0);
    if (*(char *)(param_1 + 0x160) == '\0') {
      fn_004a8c20(param_1,&local_30);
      return;
    }
    local_4c = fn_004a8d14;
    local_48 = 0;
    local_44 = &DAT_004a9390;
    local_50 = &DAT_00853500;
    fn_00479c98(param_1,&local_50);
    return;
  }
  uVar8 = *(uint *)(param_1 + 0x11c);
  iVar2 = *(int *)(param_1 + 0x120);
  local_4c = (code *)((uint)local_4c & 0xffffff00);
  puVar6 = *(undefined1 **)(param_1 + 0x154);
  if (puVar6 == *(undefined1 **)(param_1 + 0x158)) {
    fn_0079b730((undefined4 *)(param_1 + 0x150),puVar6,&local_4c);
  }
  else {
    *(undefined1 **)(param_1 + 0x154) = puVar6 + 1;
    if (puVar6 != (undefined1 *)0x0) {
      *puVar6 = 0;
    }
  }
  local_50 = (char *)0x0;
  uVar9 = fn_00102d92(*(undefined4 *)(param_1 + 0x150),&local_50,10);
  uVar7 = (uint)((ulonglong)uVar9 >> 0x20);
  if ((((*local_50 != ',') || (iVar3 = fn_00102c18(local_50 + 1,&local_50,10), iVar2 == 0)) ||
      (*local_50 != ',' || iVar3 != iVar2)) ||
     (((uVar4 = fn_00102c18(local_50 + 1,&local_50,10), uVar4 == 0 || (uVar8 != uVar4)) &&
      (1 < uVar8)))) {
    *(undefined1 *)(param_1 + 0x168) = 1;
    local_44 = (undefined *)0x10001;
    uVar5 = fn_004b8d4c(&local_50,&local_44);
    fn_004a8c20(param_1,uVar5);
    return;
  }
  *(uint *)(param_1 + 0x11c) = uVar4;
  uVar1 = *(undefined8 *)(param_1 + 0x110);
  if (*(uint *)(param_1 + 0x114) <= uVar7 &&
      (uint)((uint)uVar9 <= *(uint *)(param_1 + 0x110)) <= *(uint *)(param_1 + 0x114) - uVar7) {
    uVar1 = uVar9;
  }
  *(undefined8 *)(param_1 + 0x110) = uVar1;
  local_34 = 0x10001;
  uVar5 = fn_004b8d4c(auStack_40,&local_34);
  fn_004a8c20(param_1,uVar5);
  return;
}



undefined4 fn_004a7224(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    piVar2 = (int *)(param_1 + 0x1ec);
    (**(code **)(*(int *)(param_1 + 0x1ec) + 8))();
    piVar3 = (int *)fn_0048892c(param_1 + 0x1a0);
    iVar4 = 0;
    if (piVar3 != (int *)0x0) {
      iVar4 = *piVar3;
    }
    if (piVar3 == (int *)0x0 || iVar4 == 0) {
      iVar4 = *(int *)(param_1 + 0x224);
      if ((iVar4 != 0) &&
         (fn_0015dfc0(*(undefined4 *)(iVar4 + 4)), *(char *)(iVar4 + 0x34) != '\0')) {
        fn_0013c428(*(undefined4 *)(iVar4 + 4));
      }
      (**(code **)(*piVar2 + 0xc))(piVar2);
      return 0xffffffff;
    }
    fn_004b5540(iVar4,param_2);
    iVar4 = *(int *)(param_3 + 8);
    iVar5 = *(int *)(param_3 + 0xc);
    iVar6 = *(int *)(param_3 + 0x10);
    iVar7 = *(int *)(param_3 + 0x14);
    iVar8 = *(int *)(param_3 + 0x18);
    iVar9 = *(int *)(param_3 + 0x1c);
    piVar3[2] = *(int *)(param_3 + 4);
    piVar3[3] = iVar4;
    piVar3[4] = iVar5;
    piVar3[5] = iVar6;
    piVar3[6] = iVar7;
    piVar3[7] = iVar8;
    piVar3[8] = iVar9;
    iVar4 = *(int *)(param_1 + 0x224);
    if ((iVar4 != 0) && (fn_0015dfc0(*(undefined4 *)(iVar4 + 4)), *(char *)(iVar4 + 0x34) != '\0'))
    {
      fn_0013c428(*(undefined4 *)(iVar4 + 4));
    }
    (**(code **)(*piVar2 + 0xc))(piVar2);
    uVar1 = 0;
  }
  return uVar1;
}


