#include "0045acb8_0045b64c.h"



undefined4 * fn_0045b64c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  param_1[1] = 0;
  param_1[1] = 1;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = &DAT_00855a18;
  param_1[4] = 0;
  param_1[5] = param_2;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 4;
  uVar1 = fn_00170e68(param_1);
  param_1[3] = uVar1;
  *(undefined1 *)((int)param_1 + 0x1d) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  *param_1 = &DAT_00852bcc;
  return param_1;
}



void fn_0045b5e4(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 auStack_2d8 [536];
  undefined1 auStack_c0 [16];
  uint local_b0;
  uint uStack_ac;
  undefined1 auStack_a0 [128];
  int iStack_20;
  undefined4 uStack_1c;
  
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  if (param_3 == 0 || param_4 == 0) {
    return;
  }
  iStack_20 = iVar1;
  uStack_1c = param_2;
  fn_004b8b9c(auStack_c0,0);
  fn_004b8a68(auStack_c0,param_3,param_4);
  fn_0045f27c(auStack_2d8);
  fn_00455d08(auStack_2d8);
  fn_004b96d8(auStack_2d8);
  uVar3 = 0;
  bVar4 = uStack_ac != local_b0;
  uVar2 = local_b0;
  if (bVar4) {
    uVar2 = uStack_ac - local_b0;
  }
  if ((bVar4 || local_b0 <= uStack_ac) && (bVar4 && uVar2 != 0)) {
    do {
      fn_0045efb8(auStack_2d8,*(undefined1 *)(local_b0 + uVar3));
      uVar3 = uVar3 + 1;
      if (uStack_ac == local_b0) {
        uVar2 = 0;
      }
      else {
        uVar2 = uStack_ac - local_b0;
      }
    } while (uVar3 < uVar2);
  }
  fn_006d1124(auStack_2d8);
  fn_0048cc04(auStack_a0,0);
  fn_004abb10(iVar1 + 0x10,auStack_a0,&uStack_1c,auStack_c0);
  fn_0048cc74(auStack_a0);
  fn_0045f2ec(auStack_2d8);
  fn_004b8c5c(auStack_c0);
  return;
}



void fn_0045b5a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return;
  }
  uVar2 = fn_006d1a3c(*(undefined4 *)(param_1 + 4));
  fn_00494ebc(uVar2,param_2,param_3,param_4);
  return;
}



void fn_0045b4d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined1 auStack_24 [12];
  undefined4 local_18 [2];
  
  iVar2 = *(int *)(*(int *)(param_1 + 0x68) + 0x11c);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + 0x22);
  }
  if (iVar2 != 0 && cVar1 != '\x05') {
    fn_004b2e68(param_1,100);
    return;
  }
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar2 != 0) {
    local_18[0] = 0x10001;
    puVar3 = (undefined4 *)fn_004b8d4c(auStack_24,local_18);
    local_30 = *puVar3;
    uStack_2c = puVar3[1];
    local_28 = puVar3[2];
    fn_00455e8c(iVar2,2,&local_30,1);
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0045b454(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0xe0));
  if (iVar2 == 0) {
    fn_004b2f04(param_1);
    return;
  }
  cVar1 = *(char *)(param_1 + 0x78);
  if ((cVar1 == '\x02' || cVar1 == '\x03') || cVar1 == '\x04') {
    local_18 = *(undefined4 *)(param_1 + 0xa0);
    uStack_14 = *(undefined4 *)(param_1 + 0xa4);
    uStack_10 = *(undefined4 *)(param_1 + 0xa8);
    fn_004b9e68(param_1,&local_18);
    return;
  }
  fn_004b2e68(param_1,0xfa);
  return;
}



void fn_0045b1c8(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x10];
  *param_1 = &DAT_00852ab0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  iVar1 = fn_0014f480(param_1 + 0x1c);
  iVar1 = fn_0014f480(iVar1 + -0x2c);
  *(undefined **)(iVar1 + -0x44) = &DAT_00853740;
  *(undefined4 *)(iVar1 + -0x40) = 0;
  if (*(code **)(iVar1 + -0x4c) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0045b228. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -0x4c))();
  return;
}



int fn_0045af48(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_0085448c;
  iVar1 = fn_0014f2b0(param_1 + 3);
  return iVar1 + -0xc;
}



undefined4 fn_0045aeb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined *local_84 [22];
  undefined4 local_2c;
  undefined1 local_1c;
  
  local_84[0] = &DAT_0085748c;
  local_1c = 0;
  fn_00160094(local_84);
  fn_0045adb4(param_1,param_2,param_3,param_4,local_84);
  return local_2c;
}



undefined4 fn_0045ad28(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined *local_8c [22];
  undefined1 auStack_34 [16];
  undefined1 local_24;
  int local_20;
  undefined4 local_1c [2];
  
  local_8c[0] = &DAT_0085748c;
  local_24 = 0;
  fn_00160094(local_8c);
  local_20 = *(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18);
  local_1c[0] = *(undefined4 *)(param_2 + 0x10);
  fn_0045adb4(param_1,&local_20,local_1c,1,local_8c);
  fn_0015ef58(param_3,auStack_34,0x10,0xffffffff);
  return 1;
}



undefined4
fn_0045acb8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 *param_5)

{
  undefined *local_84 [22];
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 local_1c;
  
  local_84[0] = &DAT_0085748c;
  local_1c = 0;
  fn_00160094(local_84);
  fn_0045adb4(param_1,param_2,param_3,param_4,local_84);
  *param_5 = local_2c;
  param_5[1] = uStack_28;
  param_5[2] = uStack_24;
  param_5[3] = uStack_20;
  param_5[4] = 0x10;
  return 1;
}



void fn_0045adb4(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined *local_88 [22];
  undefined1 auStack_30 [16];
  char local_20;
  
  local_88[0] = &DAT_0085748c;
  local_20 = '\0';
  fn_00160094(local_88);
  iVar1 = 0x40;
  if (local_20 == '\0') {
    fn_001600c4(local_88,param_1 + 0x2c);
  }
  iVar2 = 0;
  if (0 < param_4) {
    do {
      bVar3 = *(int *)(param_2 + iVar2 * 4) != 0;
      if (bVar3) {
        iVar1 = *(int *)(param_3 + iVar2 * 4);
      }
      if ((bVar3 && iVar1 != 0) && (local_20 == '\0')) {
        fn_001600c4(local_88);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_4);
  }
  if (local_20 == '\0') {
    fn_00160190(local_88,auStack_30);
    local_20 = '\x01';
  }
  if (*(char *)(param_5 + 0x68) == '\0') {
    fn_001600c4(param_5,param_1 + 0x6d,0x40);
  }
  if (*(char *)(param_5 + 0x68) == '\0') {
    fn_001600c4(param_5,auStack_30,0x10);
  }
  if (*(char *)(param_5 + 0x68) == '\0') {
    fn_00160190(param_5,param_5 + 0x58);
    *(undefined1 *)(param_5 + 0x68) = 1;
  }
  return;
}


