#include "0044ae28_004539f4.h"



void fn_004539f4(int param_1)

{
  if ((param_1 == 0) || (DAT_008bfb40 == (int *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00453a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*DAT_008bfb40 + 4))();
  return;
}



void fn_00453318(undefined4 param_1)

{
  if (DAT_008c0720 != 0) {
    fn_00453218();
    return;
  }
  if (DAT_008c071c != 0) {
    fn_00452d1c(param_1);
  }
  return;
}



void fn_00452900(undefined4 param_1)

{
  if (DAT_008c0720 == 0) {
    if (DAT_008c071c != 0) {
      fn_00452b64(param_1);
      return;
    }
  }
  else {
    fn_00453054();
  }
  return;
}



void fn_004528c4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0013db70();
  if (iVar1 < 0) {
    return;
  }
  uVar2 = fn_002febd8((char *)&DAT_007e3498);
  fn_0014fe94(&DAT_008c071c,(char *)&DAT_007e3498,uVar2,0);
  return;
}



void fn_0045270c(undefined4 param_1)

{
  if (DAT_008c0720 == 0) {
    if (DAT_008c071c != 0) {
      fn_004529e0(param_1);
      return;
    }
  }
  else {
    fn_00452ed0();
  }
  return;
}



void fn_0045216c(int *param_1)

{
  int iVar1;
  undefined1 auStack_14 [8];
  
  (**(code **)(*param_1 + 8))(param_1,param_1[1],10,8,auStack_14);
  iVar1 = (**(code **)(*param_1 + 0x30))(param_1,param_1 + 4,0x18c,param_1[1],1,0x14);
  if (-1 < iVar1) {
    (**(code **)(*param_1 + 0x34))(param_1,param_1 + 4,0x18c,auStack_14,param_1[1],1,0x12);
  }
  return;
}



void fn_0044d7dc(uint *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  *param_1 = uVar2 & 0xfffffffe;
  piVar1 = (int *)(uVar2 & 0xfffffffe);
  if (piVar1 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0044d804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0x14))();
  return;
}



void fn_0044c928(void)

{
  int iVar1;
  undefined4 local_14;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  iVar1 = fn_0074a064();
  if (iVar1 != 0) {
    local_14 = DAT_0089a670;
    fn_0044e334(&local_14,auStack_c,*(undefined4 *)(iVar1 + 8),*(undefined4 *)(iVar1 + 0xc),0,
                 auStack_10,1,auStack_c,1);
  }
  return;
}



void fn_0044c558(void)

{
  fn_0044c644();
  return;
}



void fn_0044bf2c(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_0044c440(param_1,0x24);
  return;
}



void fn_0044b27c(int *param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  uint local_400 [241];
  undefined1 local_3b;
  int local_28;
  
  if (1 < param_2) {
    if (param_2 == 2) {
                    /* WARNING: Could not recover jumptable at 0x0044b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x110))(param_1);
      return;
    }
    return;
  }
  fn_0068ab44(param_1,0x100094b);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xd6);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00897044) goto LAB_0044b300;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0044b300:
  *(char *)(puVar1 + 4) = (char)param_2;
  local_28 = fn_002f6fa8();
  uVar3 = fn_002f8914();
  iVar4 = fn_002f7e84();
  iVar8 = local_28;
  iVar5 = *(int *)(local_28 + 0x18);
  iVar4 = *(int *)(iVar4 + 0x3c8);
  if (iVar5 != iVar4) {
    uVar6 = fn_002f8914();
    uVar7 = fn_002f7e70();
    fn_006c3acc(uVar7,uVar6,local_400);
    local_3b = 0;
    fn_0036a810(uVar7,uVar6,local_400);
    fn_002f7314(0);
  }
  local_400[0] = param_2;
  if ((((*(uint *)(iVar8 + 0x18) < 2) || (iVar5 - iVar4 != 1)) ||
      (iVar8 = fn_002f8144(), iVar8 == 0)) ||
     ((piVar9 = (int *)fn_006cd9b0(local_28,uVar3), *piVar9 == 0 ||
      (piVar9 = (int *)fn_006cd9d8(local_28,uVar3), *piVar9 == 0)))) {
    iVar8 = fn_002f6fa8();
    uVar3 = fn_002f8914();
    iVar4 = fn_002f7e84();
    iVar5 = fn_002f8144();
    if (((iVar5 == 0) ||
        ((iVar4 = fn_002f84f4(iVar8 + 0xc,iVar4 + 0x3d0), iVar4 != 0 ||
         (piVar9 = (int *)fn_006cd6d0(iVar8,uVar3), *piVar9 == 0)))) ||
       (piVar9 = (int *)fn_006cd638(iVar8,uVar3), *piVar9 == 0)) {
      fn_002f64f4(param_1,0xd6,1);
      fn_002f7714(param_2 & 0xff,0);
    }
    else {
      fn_002f64f4(param_1,0xe9,1);
    }
  }
  else {
    fn_002f7314(1);
    fn_002f64f4(param_1,0xea,1);
  }
  fn_00689930(param_1,0,0);
  return;
}



void fn_0044b1b0(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (*(int *)(&DAT_0089705c + param_2 * 4) == 0) {
    return;
  }
  uVar1 = fn_0022f750((&DAT_007ca090)[param_2]);
  if (param_2 == 1) {
    fn_002f6fa8();
    uVar2 = fn_006cda08();
  }
  else {
    uVar2 = fn_0022eed8(*(undefined4 *)(&DAT_0089705c + param_2 * 4));
  }
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar1,uVar2);
  fn_00689bd0(param_1,0x49,0);
  return;
}



undefined4 fn_0044ae28(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  wchar16 *pwStack_50;
  char *pcStack_4c;
  int local_48;
  undefined4 local_44;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_1e;
  
  fn_002c330c(&pwStack_50);
  pwStack_50 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_4c = (char *)&DAT_0044b050;
  local_48 = 2;
  local_44 = fn_002f70cc(param_1);
  uVar1 = fn_0022f750((char *)&DAT_0044b064);
  fn_00147974(&local_34,uVar1);
  local_24 = 0;
  local_23 = 1;
  uVar1 = fn_0022f750((char *)&DAT_00864ca0);
  fn_00147974(&local_28,uVar1);
  local_1e = 1;
  fn_002c29a0(param_1,&pwStack_50);
  iVar3 = 0;
  if (0 < local_48) {
    do {
      uVar1 = fn_0022f750((&DAT_007ca090)[iVar3]);
      fn_0031b78c(param_1,iVar3,0,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_48);
  }
  fn_00689930(param_1,0xec,0);
  fn_0015a41c(0x1000003);
  *(undefined **)(param_1 + 0xc4) = &DAT_0044b188;
  *(undefined4 *)(param_1 + 200) = 0;
  *(undefined **)(param_1 + 0xbc) = &DAT_0044b188;
  *(undefined4 *)(param_1 + 0xc0) = 0;
  *(undefined4 *)(param_1 + 0xd0) = 0;
  *(undefined **)(param_1 + 0xb4) = &DAT_0044b188;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  if (local_28 != &DAT_008f9cf4) {
    piVar2 = local_28 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar2 = local_2c + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar2 = local_30 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar2 = local_34 + -3;
    iVar3 = *piVar2;
    if ((iVar3 == -1) || ((piVar2 != &DAT_008f9ce8 && (*piVar2 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}


