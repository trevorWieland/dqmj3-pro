#include "004a1a54_004a7028.h"



undefined4 * fn_004a7028(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00855224;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004a7028(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_004a70ec:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004a70d4;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_004a70ec;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004a70d4:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



undefined4 * fn_004a47f8(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00855028;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004a47f8(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_004a48bc:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004a48a4;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_004a48bc;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004a48a4:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



undefined4 * fn_004a334c(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_00854ca4;
  if (param_2 == 0) {
    return puVar1;
  }
  *(short *)(puVar1 + 8) = (short)param_2;
  iVar2 = fn_0015ecdc(0x44);
  if (iVar2 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = fn_004a334c(iVar2,0);
  }
  uVar3 = 0;
  if (DAT_008b637e != '\0') {
    uVar3 = fn_0074cbe4(DAT_008b63d8);
  }
  if (uVar3 == 0) {
    puVar4 = &DAT_008e76a0;
LAB_004a3410:
    iVar5 = puVar4[0xd];
    iVar2 = 0;
    if (iVar5 == 0) goto LAB_004a33f8;
  }
  else {
    if (uVar3 < (uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2)) {
      puVar4 = *(undefined4 **)(*DAT_008e76e4 + uVar3 * 4);
      goto LAB_004a3410;
    }
    fn_0015ebe4(L"D:\\home\\jenkins\\workspace\\Manual-Pack\\5129d543\\.\\OnlineCore/src/Core/InstanceTable.h"
                 ,0x48,0xe0000003,0);
    iVar5 = -1;
  }
  iVar2 = *(int *)(iVar5 + 0xc);
LAB_004a33f8:
  fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar6);
  return puVar1;
}



int fn_004a2a1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined8 uVar5;
  int iStack_18;
  
  iStack_18 = param_4;
  puVar2 = (undefined4 *)fn_004b3044(param_1,2,&iStack_18);
  puVar2[0x14] = 0;
  *puVar2 = &DAT_008548a8;
  puVar2[0xf] = param_2;
  puVar2[0x10] = param_3;
  puVar2[0x15] = 0;
  if (DAT_008bad3d == '\0') {
    fn_004b9d60(param_3);
    uVar5 = fn_0048b514();
    *(undefined8 *)(puVar2 + 0x12) = uVar5;
  }
  *puVar2 = &DAT_00854c68;
  puVar2 = (undefined4 *)fn_004bbf80(puVar2 + 0x16,0);
  *puVar2 = &DAT_008550e4;
  puVar2[6] = 0;
  iVar3 = fn_004b8d6c(puVar2 + 8);
  *(undefined4 *)(iVar3 + -0x10) = 0;
  *(undefined1 *)(iVar3 + -0xc) = 0;
  *(int *)(iVar3 + 0xc) = param_4;
  *(undefined4 *)(iVar3 + -4) = 0;
  piVar4 = (int *)(param_4 + 4);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = *piVar4 + 1;
  return iVar3 + -0x78;
}



void fn_004a2204(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint *puVar4;
  int *piVar5;
  undefined4 uVar6;
  bool bVar7;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 local_30 [6];
  
  iVar1 = fn_00455e10(param_3);
  if (iVar1 == 0) {
    local_48 = 0x8001000d;
    fn_004b8d4c(param_1,&local_48);
    return;
  }
  iVar1 = fn_0015ecdc(0x138);
  uVar6 = 0;
  if (iVar1 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_00479cd8(iVar1,2,&local_48);
    *puVar2 = &DAT_0085439c;
    puVar2[0x1a] = &DAT_008543ec;
    puVar2[0x1b] = 0;
    iVar1 = fn_0013d3e8(puVar2 + 0x1c,&DAT_007d8c58);
    *(undefined1 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    iVar1 = fn_004565fc(iVar1 + 0x10);
    iVar1 = fn_00454f8c(iVar1 + 0x60);
    *(undefined4 *)(iVar1 + 4) = 0;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(undefined4 *)(iVar1 + 0xc) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 0;
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
    iVar1 = fn_0013d3e8(iVar1 + 0x1c,&DAT_007d8c58);
    *(undefined4 *)(iVar1 + 8) = 0;
    iVar1 = fn_00101a1c(iVar1 + 0xc,&LAB_0075552c,0xc,4);
    piVar5 = (int *)(iVar1 + -0x108);
  }
  local_48 = (undefined4)((ulonglong)param_5 >> 0x20);
  local_44 = (undefined4)param_5;
  local_40 = param_6;
  (**(code **)(*piVar5 + 0x34))(&local_3c,piVar5,*(undefined4 *)(param_3 + 0x44),param_4);
  iVar1 = fn_006d3b8c(&local_3c);
  if (iVar1 != 0) {
    iVar1 = fn_001249d0();
    if (iVar1 != 0) {
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
    }
    fn_004bdba4(uVar6,piVar5,0);
    local_30[0] = 0x10001;
    fn_004b8d4c(param_1,local_30);
    return;
  }
  puVar4 = (uint *)(piVar5 + 1);
  do {
    uVar3 = *puVar4 - 1;
    bVar7 = (bool)hasExclusiveAccess(puVar4);
  } while (!bVar7);
  *puVar4 = uVar3;
  bVar7 = uVar3 == 0;
  if (bVar7) {
    uVar3 = (uint)*(byte *)(piVar5 + 2);
  }
  if (bVar7 && uVar3 == 0) {
    *(undefined1 *)(piVar5 + 2) = 1;
    (**(code **)(*piVar5 + 4))(piVar5);
  }
  *param_1 = local_3c;
  param_1[1] = uStack_38;
  param_1[2] = uStack_34;
  return;
}



void fn_004a1a54(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int local_28;
  
  *(undefined1 *)(param_2 + 4) = 0;
  cVar1 = *(char *)(param_1 + 0x3b);
  local_28 = 0;
  if (((cVar1 != '\0') ||
      ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
       (fn_0074a528(param_1,&local_28), *(char *)(param_1 + 4) == '\0')))) &&
     (iVar6 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) {
    iVar3 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar3 + 0x10) - iVar6) < 8) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_2 + 8) = 0;
      *(undefined4 *)(param_2 + 0xc) = 0;
    }
    else {
      puVar4 = (undefined4 *)(*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) + iVar6);
      uVar2 = puVar4[1];
      *(undefined4 *)(param_2 + 8) = *puVar4;
      *(undefined4 *)(param_2 + 0xc) = uVar2;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
    }
    if ((*(char *)(param_1 + 4) == '\0') &&
       (fn_0074a528(param_1,param_2 + 0x10), *(char *)(param_1 + 4) == '\0')) {
      iVar3 = *(int *)(param_1 + 8);
      if ((uint)(*(int *)(iVar3 + 0x10) - *(int *)(param_1 + 0xc)) < 8) {
        *(undefined1 *)(param_1 + 4) = 1;
        *(undefined4 *)(param_2 + 0x18) = 0;
        *(undefined4 *)(param_2 + 0x1c) = 0;
      }
      else {
        puVar4 = (undefined4 *)
                 (*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + *(int *)(param_1 + 0xc));
        uVar2 = puVar4[1];
        *(undefined4 *)(param_2 + 0x18) = *puVar4;
        *(undefined4 *)(param_2 + 0x1c) = uVar2;
        *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 8;
      }
      if (*(char *)(param_1 + 4) == '\0' && cVar1 == '\0') {
        uVar5 = local_28 + iVar6;
        if ((uVar5 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar5;
        }
      }
    }
  }
  return;
}


