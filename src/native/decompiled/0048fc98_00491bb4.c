#include "0048fc98_00491bb4.h"



undefined4
fn_00491bb4(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined1 auStack_68 [68];
  
  fn_004b73b0(auStack_68);
  iVar1 = fn_004bc44c();
  piVar2 = (int *)(iVar1 + 0x50);
  (**(code **)(*piVar2 + 8))();
  fn_004ba7c4(auStack_68,*(undefined2 *)(param_1 + 0x20),1);
  iVar1 = fn_004bab34(auStack_68,param_2);
  if (iVar1 == 0) {
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return 0;
  }
  fn_004ba7ac(auStack_68,0xb);
  fn_0015ef4c(auStack_68,param_3,4);
  fn_004966f4(auStack_68,param_4);
  fn_0015ef4c(auStack_68,param_5,4);
  if (param_2 != 0) {
    fn_0048ca64(param_2,param_6);
  }
  DAT_008e6894 = fn_00492328;
  if ((*(char *)(param_1 + 0x34) == '\0') || (iVar1 = fn_006d3ef4(param_1,0x10), iVar1 == 0)) {
    uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
    (**(code **)(*piVar2 + 0xc))(piVar2);
    fn_004b7520(auStack_68);
    return uVar3;
  }
  (**(code **)(*piVar2 + 0xc))(piVar2);
  uVar3 = fn_0046e0a4(param_1,param_2,auStack_68);
  fn_004b7520(auStack_68);
  return uVar3;
}



undefined4 fn_00491a34(uint *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    puVar4 = param_1 + 0x270;
    if (0x26f < param_1[0x270]) {
      if (param_1[0x270] == 0x271) {
        *param_1 = 0x1105;
        param_1[0x270] = 1;
        do {
          param_1[param_1[0x270]] = param_1[param_1[0x270] - 1] * 0x10dcd;
          uVar2 = *puVar4;
          *puVar4 = uVar2 + 1;
        } while (uVar2 + 1 < 0x270);
      }
      iVar3 = 0;
      iVar5 = 0xe3;
      do {
        iVar5 = iVar5 + -1;
        param_1[iVar3] =
             param_1[iVar3 + 0x18d] ^ param_1[(param_1[iVar3 + 1] & 1) + 0x271] ^
             (param_1[iVar3] & 0x80000000 | param_1[iVar3 + 1] & 0x7fffffff) >> 1;
        iVar3 = iVar3 + 1;
      } while (iVar5 != 0);
      uVar2 = 0xe3;
      do {
        param_1[uVar2] =
             param_1[uVar2 - 0xe3] ^ param_1[(param_1[uVar2 + 1] & 1) + 0x271] ^
             (param_1[uVar2] & 0x80000000 | param_1[uVar2 + 1] & 0x7fffffff) >> 1;
        uVar2 = uVar2 + 1;
      } while (uVar2 < 0x26f);
      param_1[0x26f] =
           param_1[0x18c] ^ param_1[(*param_1 & 1) + 0x271] ^
           (*param_1 & 0x7fffffff | param_1[0x26f] & 0x80000000) >> 1;
      param_1[0x270] = 0;
    }
    uVar2 = param_1[0x270];
    *puVar4 = uVar2 + 1;
    uVar2 = param_1[uVar2] ^ param_1[uVar2] >> 0xb;
    uVar2 = uVar2 ^ (uVar2 & 0x13a58ad) << 7;
    uVar2 = uVar2 ^ (uVar2 & 0x1df8c) << 0xf;
    fn_00169f1c(uVar2 ^ uVar2 >> 0x12);
    uVar1 = extraout_r1;
  }
  return uVar1;
}



undefined4 *
fn_00491934(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4,
            undefined8 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_004b579c();
  puVar1[0x4a] = 0;
  puVar1[0x4b] = 0;
  puVar1[0x50] = 0;
  puVar1[0x51] = 0;
  *puVar1 = &DAT_00854254;
  if ((param_4 & 0x40) == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)fn_00455040(0x28,0);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = &DAT_00855b94;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      puVar2[5] = 0;
      puVar2[6] = 0;
      puVar2[7] = 0;
      puVar2[1] = 0;
      uVar3 = fn_001249d0();
      puVar2[8] = uVar3;
    }
  }
  fn_004bbfa4(puVar1,param_2,param_3,param_4,(int)param_5,(int)((ulonglong)param_5 >> 0x20),puVar2)
  ;
  return puVar1;
}



void fn_00491860(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  if (DAT_008bad48 != (int *)0x0) {
    (**(code **)(*DAT_008bad48 + 0xc))();
  }
                    /* WARNING: Could not recover jumptable at 0x004918b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_00491804(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00854204;
  if (param_1[0x3e] != 0) {
    fn_0014f1bc(param_1[0x3e] + -4);
  }
  iVar1 = fn_0014f480(param_1 + 0x62);
  iVar1 = fn_0048cc74(iVar1 + -0x78);
  iVar1 = fn_00170f54(iVar1 + -0x20);
  iVar1 = fn_0014f2b0(iVar1 + -0x18);
  iVar1 = fn_00456728(iVar1 + -0x60);
  fn_00479d5c(iVar1 + -0x78);
  fn_00455018();
  return;
}



void fn_00491328(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  int local_18;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x6c) + 0x20);
  uVar3 = *(undefined4 *)(iVar2 + 0x24);
  *(undefined4 *)(param_1 + 0x168) = *(undefined4 *)(iVar2 + 0x20);
  *(undefined4 *)(param_1 + 0x16c) = uVar3;
  local_24 = (code *)(param_1 + 0x188);
  if (*(int *)(param_1 + 0x108) == 0) {
    uStack_20 = *(undefined4 *)(param_1 + 0x104);
    local_28 = *(undefined **)(param_1 + 0xfc);
    local_1c = *(undefined **)(param_1 + 0x100);
    iVar2 = fn_004a87f8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x10),
                         param_1 + 0x110,*(undefined4 *)(param_1 + 0x1a8),param_1 + 0xf0);
  }
  else {
    uStack_20 = *(undefined4 *)(param_1 + 0x104);
    local_1c = *(undefined **)(param_1 + 0x100);
    local_28 = *(undefined **)(param_1 + 0xfc);
    local_18 = *(int *)(param_1 + 0x108);
    iVar2 = fn_004a768c(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x10),
                         param_1 + 0x110,*(undefined4 *)(param_1 + 0x1a8),param_1 + 0xf0);
  }
  if (iVar2 == 0) {
    local_1c = (undefined *)0x8001000d;
    uVar3 = fn_004b8d4c(&local_28,&local_1c);
    fn_00491160(param_1,3,uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x120) != '\x01') {
    local_24 = fn_004914ac;
    uStack_20 = 0;
    local_1c = &DAT_004914a8;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  fn_004b2f0c(param_1);
  puVar1 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_00853500;
    puVar1[1] = fn_004914ac;
    puVar1[2] = 0;
    puVar1[3] = &DAT_004914a8;
  }
  fn_00479b1c(param_1,param_1 + 0x110,puVar1);
  return;
}



void fn_004914ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  undefined1 local_20 [4];
  undefined1 auStack_1c [12];
  undefined4 local_10 [2];
  
  if (*(char *)(param_1 + 0x120) != '\x02') {
    local_30 = *(undefined **)(param_1 + 0x148);
    local_2c = *(code **)(param_1 + 0x14c);
    uStack_28 = *(undefined4 *)(param_1 + 0x150);
    fn_00491160(param_1,3,&local_30);
    return;
  }
  local_20[0] = 1;
  iVar1 = fn_006d3b54(*(undefined4 *)(param_1 + 0x1a8),local_20);
  if (iVar1 == 0) {
    local_30 = *(undefined **)(param_1 + 0x148);
    local_2c = *(code **)(param_1 + 0x14c);
    uStack_28 = *(undefined4 *)(param_1 + 0x150);
    fn_00491160(param_1,*(undefined1 *)(param_1 + 0x120),&local_30);
    return;
  }
  local_10[0] = 0x8001000b;
  uVar2 = fn_004b8d4c(auStack_1c,local_10);
  fn_004b8d90(*(undefined4 *)(param_1 + 0x1a8),uVar2);
  local_2c = fn_00491590;
  uStack_28 = 0;
  local_24 = &DAT_00491588;
  local_30 = &DAT_00853500;
  fn_00479c98(param_1,&local_30);
  return;
}



void fn_004911b0(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 auStack_48 [8];
  undefined1 auStack_28 [12];
  undefined1 auStack_1c [16];
  
  if ((*(char *)(param_1 + 0x88) != '\x02') && (DAT_008b6385 == '\0')) {
    local_50 = *(undefined4 *)(param_1 + 0xb0);
    local_4c = *(undefined4 *)(param_1 + 0xb4);
    auStack_48[0] = *(undefined4 *)(param_1 + 0xb8);
    fn_00491160(param_1,*(undefined1 *)(param_1 + 0x88),&local_50);
    return;
  }
  fn_0015ed28(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),param_1 + 0xd8);
  puVar1 = (undefined4 *)fn_0014f1e0(auStack_48);
  *puVar1 = &DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  iVar3 = fn_00486fa8(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x6c) + 0x20) + 0x14),
                       param_1 + 0x188,auStack_48);
  if (iVar3 == 0) {
    local_50 = 0x80030065;
    uVar2 = fn_004b8d4c(auStack_1c,&local_50);
    fn_004b8d90(*(undefined4 *)(param_1 + 0x1a8),uVar2);
    local_50 = 0x8003006a;
    uVar2 = fn_004b8d4c(auStack_1c,&local_50);
    fn_00491160(param_1,2,uVar2);
    fn_0014f480(auStack_48);
    return;
  }
  local_4c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_4c);
  fn_004b8d90(*(undefined4 *)(param_1 + 0x1a8),uVar2);
  local_4c = 0x10001;
  uVar2 = fn_004b8d4c(auStack_28,&local_4c);
  fn_00491160(param_1,*(undefined1 *)(param_1 + 0x120),uVar2);
  fn_0014f480(auStack_48);
  return;
}



void fn_00491160(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  fn_004b2f04();
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_20 = *param_3;
    uStack_1c = param_3[1];
    uStack_18 = param_3[2];
    fn_00455e8c(iVar1,param_2,&local_20,1);
  }
  return;
}



undefined4 * fn_0048fc98(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 auStack_c8 [184];
  
  *param_1 = &DAT_008550d4;
  *(undefined1 *)(param_1 + 1) = 0;
  puVar1 = (undefined4 *)fn_0049630c(auStack_c8);
  puVar1[2] = 0;
  *puVar1 = &DAT_00853870;
  puVar1[3] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  iVar2 = fn_0015ece0(0x1700);
  param_1[3] = iVar2;
  param_1[4] = iVar2;
  param_1[5] = iVar2 + 0x1700;
  fn_004963f0(auStack_c8);
  *param_1 = &DAT_008540f0;
  return param_1;
}


