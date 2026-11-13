#include "00449940_004747a4.h"



void fn_004747a4(void)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  
  (**(code **)(DAT_008e932c + 8))();
  piVar1 = DAT_008b63dc;
  if (DAT_008b63dc != (int *)0x0) {
    iVar2 = DAT_008b63dc[1];
    puVar4 = (uint *)(DAT_008b63dc + 1);
    do {
      uVar3 = *puVar4 - 1;
      bVar5 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar5);
    *puVar4 = uVar3;
    bVar5 = uVar3 == 0;
    if (bVar5) {
      uVar3 = (uint)*(byte *)(piVar1 + 2);
    }
    if (bVar5 && uVar3 == 0) {
      *(undefined1 *)(piVar1 + 2) = 1;
      (**(code **)(*piVar1 + 4))();
    }
    if (iVar2 == 1) {
      DAT_008b63dc = (int *)0x0;
      if (DAT_008b64a4 != (int *)0x0) {
        (**(code **)(*DAT_008b64a4 + 4))();
      }
      DAT_008b64a4 = (int *)0x0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00474858. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e932c + 0xc))(&DAT_008e932c);
  return;
}



undefined4 fn_0046d8e8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 local_58;
  undefined4 uStack_54;
  char acStack_50 [8];
  char local_48 [16];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  
  pcVar4 = (char *)&local_58;
  iVar1 = *(int *)(param_1 + 8);
  iVar6 = *(int *)(param_1 + 0xc);
  uVar5 = 0;
  if (*(int *)(iVar1 + 0x10) == iVar6) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    uVar5 = *(undefined1 *)(*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + iVar6);
    *(int *)(param_1 + 0xc) = iVar6 + 1;
  }
  switch(uVar5) {
  case 0:
    uVar3 = fn_004b87b0(&local_58);
    fn_004b8820(param_2,uVar3);
    break;
  case 1:
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar1 + 0x10) - iVar6) < 8) {
      uVar7 = 0;
      uVar3 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar6);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      *(int *)(param_1 + 0xc) = iVar6 + 8;
    }
    uVar3 = fn_004b87bc(acStack_50,iVar6,uVar7,uVar3);
    fn_004b8820(param_2,uVar3);
    pcVar4 = acStack_50;
    break;
  case 2:
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar1 + 0x10) - iVar6) < 8) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar6);
      local_58 = *puVar2;
      uStack_54 = puVar2[1];
      *(int *)(param_1 + 0xc) = iVar6 + 8;
    }
    uVar3 = fn_004b87a0(local_48);
    fn_004b8820(param_2,uVar3);
    pcVar4 = local_48;
    break;
  case 3:
    fn_00454da8(param_1,local_48);
    uVar3 = fn_004b8790(&local_58,(int)local_48[0]);
    fn_004b8820(param_2,uVar3);
    pcVar4 = (char *)&local_58;
    break;
  case 4:
    fn_0013d40c(&local_58);
    iVar1 = fn_0045f7f0(param_1,&local_58);
    if (iVar1 == 0) {
      fn_00170f54(&local_58);
      return 0;
    }
    uVar3 = fn_004b8734(acStack_50,&local_58);
    fn_004b8820(param_2,uVar3);
    fn_004b87dc(acStack_50);
    fn_00170f54(&local_58);
    return 1;
  case 5:
    fn_00124be8(auStack_30);
    iVar1 = *(int *)(param_1 + 8);
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar1 + 0x10) - iVar6) < 8) {
      local_38 = 0;
      uStack_34 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar6);
      local_38 = *puVar2;
      uStack_34 = puVar2[1];
      *(int *)(param_1 + 0xc) = iVar6 + 8;
    }
    fn_0014f510(auStack_30);
    uVar3 = fn_004b8754(acStack_50,auStack_30);
    fn_004b8820(param_2,uVar3);
    pcVar4 = acStack_50;
    break;
  case 6:
    iVar6 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar1 + 0x10) - iVar6) < 8) {
      uVar7 = 0;
      uVar3 = 0;
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      puVar2 = (undefined4 *)(*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc) + iVar6);
      uVar7 = *puVar2;
      uVar3 = puVar2[1];
      *(int *)(param_1 + 0xc) = iVar6 + 8;
    }
    uVar3 = fn_004b87cc(acStack_50,iVar6,uVar7,uVar3);
    fn_004b8820(param_2,uVar3);
    pcVar4 = acStack_50;
    break;
  default:
    goto switchD_0046d93c_default;
  }
  fn_004b87dc(pcVar4);
switchD_0046d93c_default:
  return 1;
}



void fn_00453ac8(undefined4 param_1,undefined4 param_2)

{
  if (DAT_008bfb40 == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00453aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)*DAT_008bfb40)(DAT_008bfb40,param_1,param_2);
  return;
}



int fn_0044fb14(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = (**(code **)(*DAT_0089a7a0 + 8))(DAT_0089a7a0,param_5);
  iVar2 = fn_0014e2f4(param_1,param_2,param_3,param_4,uVar1,param_6,param_7,1);
  if (iVar2 < 0) {
    (**(code **)(*DAT_0089a7a0 + 0xc))(DAT_0089a7a0,uVar1,1);
  }
  else {
    iVar2 = 0;
    *(undefined1 *)(param_1 + 5) = 1;
  }
  return iVar2;
}



undefined4 fn_00449940(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined *puVar9;
  wchar16 *pwStack_80;
  char *pcStack_7c;
  int iStack_78;
  undefined4 local_74;
  undefined1 auStack_64 [12];
  undefined1 auStack_58 [4];
  undefined1 local_54;
  undefined1 local_53;
  undefined4 local_4c;
  undefined1 auStack_44 [4];
  undefined1 auStack_40 [32];
  
  uVar1 = fn_001759e8(*(undefined4 *)(DAT_00897804 + 8),0);
  if (uVar1 < 4) {
    puVar8 = &DAT_007c7930;
    iVar7 = 1;
  }
  else {
    puVar8 = &DAT_007c7940;
    iVar7 = 2;
  }
  fn_00397774(&pwStack_80);
  pwStack_80 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_7c = (char *)&DAT_00449ae0;
  puVar9 = (undefined *)0x1;
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  iStack_78 = iVar7;
  if (puVar5 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar2 == &DAT_00895be8) goto LAB_004499c8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_004499c8:
  local_74 = puVar5[3];
  uVar3 = fn_0022f750((char *)&DAT_00449af8);
  fn_00147974(auStack_64,uVar3);
  local_54 = 0;
  local_4c = 1;
  uVar3 = fn_0022f750((char *)&DAT_00449b04);
  fn_00147974(auStack_40,uVar3);
  local_53 = 1;
  uVar3 = fn_0022f750((char *)&DAT_00449b14);
  fn_00147974(auStack_58,uVar3);
  uVar3 = fn_00397618(param_1,&pwStack_80);
  fn_00689efc(param_1,0x90,0);
  if (iVar7 != 0) {
    puVar9 = &DAT_007c7938;
  }
  iVar6 = 0;
  if (iVar7 != 0) {
    do {
      uVar4 = fn_0022f750(*(undefined4 *)(puVar9 + puVar8[iVar6] * 4));
      fn_0031b78c(param_1,iVar6,0,uVar4);
      iVar6 = iVar6 + 1;
    } while (iVar6 < iVar7);
  }
  fn_00100414(auStack_44,&LAB_0059e0e0,8,4);
  iVar7 = fn_001588d4(auStack_58);
  iVar7 = fn_001588d4(iVar7 + -4);
  iVar7 = fn_001588d4(iVar7 + -4);
  fn_001588d4(iVar7 + -4);
  return uVar3;
}


