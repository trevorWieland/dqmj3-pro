#include "0046c3cc_0046ca3c.h"



undefined4
fn_0046ca3c(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 *param_5)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined *local_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  undefined *local_34;
  undefined1 auStack_30 [16];
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar6 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x24);
  *(undefined4 *)(param_2 + 0x58) = *(undefined4 *)(*(int *)(param_1 + 0x20) + 0x20);
  *(undefined4 *)(param_2 + 0x5c) = uVar5;
  iVar2 = fn_0015ecdc(0x128);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    uVar7 = *(undefined4 *)(param_2 + 0x44);
    puVar4 = (undefined4 *)fn_00479cd8(iVar2,2,auStack_30);
    *puVar4 = &DAT_008553c4;
    iVar2 = fn_0048cc04(puVar4 + 0x20,0);
    puVar4 = (undefined4 *)fn_0014f1e0(iVar2 + 0x78);
    *puVar4 = &DAT_00855a18;
    uVar5 = fn_0014f470();
    fn_0014f440(puVar4,uVar5,0);
    iVar2 = fn_004b8d6c(puVar4 + 8);
    *(undefined4 *)(iVar2 + -0xb0) = uVar7;
    *(undefined4 **)(iVar2 + -0xa0) = param_5;
    *(undefined4 *)(iVar2 + -0xa4) = param_4;
    *(int *)(iVar2 + -0xac) = param_1;
    *(undefined4 *)(iVar2 + -0xa8) = param_3;
    iVar2 = iVar2 + -0x118;
    *param_5 = 0;
    pcStack_3c = fn_004a952c;
    uStack_38 = 0;
    local_34 = &DAT_007dde00;
    local_40 = &DAT_00853500;
    fn_00479c98(iVar2,&local_40);
  }
  iVar1 = fn_001249d0();
  if (iVar1 != 0) {
    uVar6 = *(undefined4 *)(iVar1 + 0xc);
  }
  fn_004bdba4(uVar6,iVar2,0);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_0046c8f4(int param_1,uint param_2,undefined4 param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  char *local_3c;
  char *local_38;
  uint local_30;
  undefined4 uStack_2c;
  int iStack_24;
  uint local_20;
  undefined4 uStack_1c;
  
  uStack_2c = 0;
  bVar4 = true;
  pcVar3 = *(char **)(param_1 + 0x14);
  pcVar1 = pcVar3;
  pcVar2 = *(char **)(pcVar3 + 4);
  while (pcVar2 != (char *)0x0) {
    bVar4 = param_2 < *(uint *)(pcVar2 + 0x10);
    pcVar1 = pcVar2;
    if (bVar4) {
      pcVar2 = *(char **)(pcVar2 + 8);
    }
    else {
      pcVar2 = *(char **)(pcVar2 + 0xc);
    }
  }
  if (*(char *)(param_1 + 0x1c) == '\0') {
    local_38 = pcVar1;
    if (bVar4) {
      if (pcVar1 == *(char **)(pcVar3 + 8)) goto LAB_0046ca04;
      if ((*pcVar1 == '\0') && (*(char **)(*(int *)(pcVar1 + 4) + 4) == pcVar1)) {
        local_38 = *(char **)(pcVar1 + 0xc);
      }
      else {
        local_38 = *(char **)(pcVar1 + 8);
        if (local_38 == (char *)0x0) {
          local_38 = *(char **)(pcVar1 + 4);
          pcVar2 = local_38;
          if (pcVar1 == *(char **)(local_38 + 8)) {
            do {
              local_38 = *(char **)(pcVar2 + 4);
              bVar4 = pcVar2 == *(char **)(local_38 + 8);
              pcVar2 = local_38;
            } while (bVar4);
          }
        }
        else {
          for (pcVar1 = *(char **)(local_38 + 0xc); pcVar1 != (char *)0x0;
              pcVar1 = *(char **)(pcVar1 + 0xc)) {
            local_38 = pcVar1;
          }
        }
      }
    }
    if (param_2 <= *(uint *)(local_38 + 0x10)) goto LAB_0046ca2c;
  }
LAB_0046ca04:
  local_30 = param_2;
  iStack_24 = param_1;
  local_20 = param_2;
  uStack_1c = param_3;
  fn_007796e4(&local_3c);
  local_38 = local_3c;
LAB_0046ca2c:
  *(undefined4 *)(local_38 + 0x14) = param_3;
  return;
}



undefined4 * fn_0046c860(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  undefined8 uVar7;
  
  *param_1 = &DAT_00852fbc;
  iVar1 = fn_0046c77c();
  puVar5 = *(undefined4 **)(iVar1 + 4);
  uVar7 = fn_0046c77c();
  puVar3 = (undefined4 *)((ulonglong)uVar7 >> 0x20);
  while( true ) {
    bVar6 = puVar5 != *(undefined4 **)((int)uVar7 + 0xc);
    if (bVar6) {
      puVar3 = puVar5;
    }
    if (!bVar6 || puVar5 == param_1) break;
    puVar5 = (undefined4 *)puVar3[1];
  }
  iVar1 = fn_0046c77c();
  iVar2 = puVar5[2];
  iVar4 = puVar5[1];
  if (iVar2 != 0) {
    *(int *)(iVar2 + 4) = iVar4;
  }
  puVar5[2] = 0;
  if (iVar4 != 0) {
    *(int *)(iVar4 + 8) = iVar2;
  }
  puVar5[1] = 0;
  if (*(undefined4 **)(iVar1 + 4) == puVar5) {
    *(int *)(iVar1 + 4) = iVar4;
  }
  if (*(undefined4 **)(iVar1 + 8) == puVar5) {
    *(int *)(iVar1 + 8) = iVar2;
  }
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + -1;
  return param_1;
}



undefined4 * fn_0046c7f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  *param_1 = &DAT_00852fbc;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = param_2;
  param_1[4] = param_3;
  *(undefined1 *)(param_1 + 5) = 0;
  iVar1 = fn_0046c77c();
  if (*(int *)(iVar1 + 4) == *(int *)(iVar1 + 0xc)) {
    *(undefined4 **)(iVar1 + 4) = param_1;
    *(undefined4 **)(iVar1 + 8) = param_1;
  }
  else {
    *(undefined4 **)(*(int *)(iVar1 + 8) + 4) = param_1;
    param_1[2] = *(undefined4 *)(iVar1 + 8);
    *(undefined4 **)(iVar1 + 8) = param_1;
  }
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return param_1;
}



undefined4 * fn_0046c77c(void)

{
  int iVar1;
  
  if (((DAT_008b64ec & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008b64ec), iVar1 != 0)) {
    DAT_008e6a50 = &DAT_00855ac4;
    DAT_008e6a54 = 0;
    DAT_008e6a58 = 0;
    DAT_008e6a5c = 0;
    DAT_008e6a60 = 0;
  }
  return &DAT_008e6a50;
}



void fn_0046c690(undefined4 *param_1)

{
  undefined1 auStack_18 [12];
  
  *param_1 = &PTR_FUN_00852f9c;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    (**(code **)(*(int *)param_1[3] + 0x18))();
    (**(code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8],*(undefined2 *)((int)param_1 + 0x26))
    ;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 0x50))(auStack_18);
    if ((int *)param_1[3] != (int *)0x0) {
      (**(code **)(*(int *)param_1[3] + 4))();
    }
    param_1[3] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(code **)(*(int *)param_1[5] + 4))();
  }
  fn_004b78a0();
  fn_0047f3e8(param_1);
  return;
}



undefined4 * fn_0046c3cc(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [12];
  
  puVar2 = (undefined4 *)fn_0014f1e0();
  *puVar2 = &PTR_FUN_00852f9c;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 9) = param_2;
  puVar2[8] = param_3;
  fn_004b7ce4();
  if (DAT_008bad4c == 0) {
    uVar4 = fn_0013d3e8(auStack_30,&DAT_008e9410);
    bVar1 = *(byte *)(puVar2 + 9);
    if ((DAT_008b637e == '\0') || (iVar3 = fn_0074cbe4(DAT_008b63d8), iVar3 == 0)) {
      iVar3 = (uint)bVar1 * 0x1b0 + 0x8e77c8;
    }
    else {
      iVar3 = *(int *)(&DAT_008e77c0 + (uint)bVar1 * 0x1b0) + iVar3 * 0xd0;
    }
    fn_00471c5c(iVar3,uVar4);
    fn_00170f54(auStack_30);
  }
  else {
    fn_0013d40c(auStack_30);
    fn_004b6230(auStack_30,L"%s%d",&DAT_008e9410,DAT_008bad4c);
    bVar1 = *(byte *)(puVar2 + 9);
    if ((DAT_008b637e == '\0') || (iVar3 = fn_0074cbe4(DAT_008b63d8), iVar3 == 0)) {
      iVar3 = (uint)bVar1 * 0x1b0 + 0x8e77c8;
    }
    else {
      iVar3 = *(int *)(&DAT_008e77c0 + (uint)bVar1 * 0x1b0) + iVar3 * 0xd0;
    }
    fn_00471c5c(iVar3,auStack_30);
    fn_00170f54(auStack_30);
  }
  iVar3 = fn_0015ecdc(0x120);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_004594b8(iVar3,*(undefined1 *)(puVar2 + 9),puVar2[8]);
  }
  puVar2[3] = uVar4;
  bVar1 = *(byte *)(puVar2 + 9);
  if ((DAT_008b637e == '\0') || (iVar3 = fn_0074cbe4(DAT_008b63d8), iVar3 == 0)) {
    iVar3 = (uint)bVar1 * 0x1b0 + 0x8e77c8;
  }
  else {
    iVar3 = *(int *)(&DAT_008e77c0 + (uint)bVar1 * 0x1b0) + iVar3 * 0xd0;
  }
  fn_00471c14(auStack_3c,iVar3,30000);
  bVar1 = *(byte *)(puVar2 + 9);
  if ((DAT_008b637e == '\0') || (iVar3 = fn_0074cbe4(DAT_008b63d8), iVar3 == 0)) {
    iVar3 = (uint)bVar1 * 0x1b0 + 0x8e77c8;
  }
  else {
    iVar3 = *(int *)(&DAT_008e77c0 + (uint)bVar1 * 0x1b0) + iVar3 * 0xd0;
  }
  fn_00471c38(auStack_3c,iVar3,5000);
  if (0.0 < DAT_008bad50) {
    (**(code **)(*(int *)(puVar2[8] + 0x78) + 8))();
    *(float *)(puVar2[8] + 0x90) = DAT_008bad50;
  }
  iVar3 = fn_0015ecdc(0x78);
  uVar4 = 0;
  if (iVar3 != 0) {
    uVar4 = fn_00481940(iVar3,puVar2,2,1,0);
  }
  puVar2[6] = uVar4;
  fn_004815e4(uVar4,puVar2[3],1);
  *(undefined1 *)(puVar2 + 7) = 0;
  puVar2[4] = 0;
  *(undefined2 *)((int)puVar2 + 0x26) = 0;
  return puVar2;
}


