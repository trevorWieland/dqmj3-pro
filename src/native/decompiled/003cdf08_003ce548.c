#include "003cdf08_003ce548.h"



undefined4 fn_003ce548(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = fn_0011c1b4(L"rom:/data/ExtSaveData/break.icn",0,0,0,0,0,0,0,5);
  *(undefined4 *)(param_1 + 0x90) = uVar1;
  while (iVar2 = fn_00145aac(uVar1), iVar2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x90);
  }
  fn_003cf0e8(param_1,DAT_00898b8c,0,1,0x1000950,0x1000950);
  fn_0026d2e8(*(undefined4 *)(param_1 + 0x70),1);
  uVar1 = fn_006ba838(*(undefined4 *)(param_1 + 0x98));
  iVar2 = fn_0026d960(*(undefined4 *)(param_1 + 0x70),uVar1);
  uVar1 = fn_006ba860(*(undefined4 *)(param_1 + 0x98));
  iVar3 = fn_0026d960(*(undefined4 *)(param_1 + 0x70),uVar1);
  uVar1 = DAT_00898b90;
  if (iVar2 == -8 && iVar3 == -8) {
    *(undefined1 *)(param_1 + 0x79) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094b;
    uVar1 = fn_0022f584(uVar1,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar1);
  }
  else {
    *(undefined1 *)(param_1 + 0x79) = 2;
  }
  fn_0026d6bc(*(undefined4 *)(param_1 + 0x70));
  fn_00234cac();
  return 1;
}



void fn_003ce0ec(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_30 [28];
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x78) = 6;
  fn_001c4578(auStack_30);
  iVar4 = fn_006a7b90(auStack_30,&DAT_007ce538);
  iVar5 = fn_0044c9fc(iVar4);
  uVar6 = DAT_00898be0;
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x79) = 0x12;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    fn_001c4648(auStack_30);
    return;
  }
  iVar5 = fn_0044ca30();
  uVar3 = DAT_00898be8;
  uVar2 = DAT_00898be4;
  uVar1 = DAT_00898bdc;
  uVar6 = DAT_00898bc8;
  if (iVar5 == 0) {
    *(undefined1 *)(param_1 + 0x79) = 0x12;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
    uVar6 = fn_0022f584(uVar3,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    fn_001c4648(auStack_30);
    return;
  }
  if (iVar4 == -5) {
switchD_003ce210_caseD_fffffffc:
    *(undefined1 *)(param_1 + 0x79) = 0x12;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
    uVar6 = fn_0022f584(uVar1,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    goto switchD_003ce210_default;
  }
  if (iVar4 < -4) {
    if (iVar4 != -0xb) {
      if (iVar4 < -10) {
        if (iVar4 == -0x80) goto switchD_003ce210_caseD_fffffffc;
        if (iVar4 != -100 && iVar4 != -0xc) goto switchD_003ce210_default;
      }
      else if (iVar4 != -7 && iVar4 != -6) goto switchD_003ce210_default;
    }
switchD_003ce210_caseD_0:
    *(undefined1 *)(param_1 + 0x79) = 7;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
    uVar6 = fn_0022f584(uVar6,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  else {
    switch(iVar4) {
    case 0:
      goto switchD_003ce210_caseD_0;
    case -4:
    case -2:
      goto switchD_003ce210_caseD_fffffffc;
    case -3:
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar6 = fn_0022f584(uVar3,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
      break;
    case -1:
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar6 = fn_0022f584(uVar2,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar6);
    }
  }
switchD_003ce210_default:
  fn_001c4648(auStack_30);
  return;
}



void fn_003cdf08(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_18;
  undefined4 uStack_14;
  
  *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  fn_005f3aac(8);
  local_18 = 0x141000;
  uStack_14 = 0;
  uVar4 = fn_001c43dc(*(undefined4 *)(param_1 + 0x6c),L"rom:/data/ExtSaveData/break.icn",
                       &DAT_007ce538,&DAT_007ce548,&DAT_007ce544,&local_18,
                       *(undefined4 *)(param_1 + 0x90));
  uVar3 = DAT_00898bf8;
  uVar2 = DAT_00898bf4;
  uVar1 = DAT_00898bf0;
  uVar5 = DAT_00898bb8;
  switch(uVar4) {
  default:
    if (*(char *)(param_1 + 0x78) == '\x03' || *(char *)(param_1 + 0x78) == '\x04') {
      return;
    }
    break;
  case 2:
    *(undefined1 *)(param_1 + 0x79) = 0xe;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x1000950;
    uVar5 = fn_0022f584(uVar5,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar5);
    *(undefined1 *)(param_1 + 0x78) = 6;
    *(undefined1 *)(param_1 + 0x84) = 1;
    break;
  case 3:
  case 5:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar5 = fn_0022f584(uVar2,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar5);
    }
    else if (*(char *)(param_1 + 0x78) == '\x04') {
      *(undefined1 *)(param_1 + 0x79) = 0x12;
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
      uVar5 = fn_0022f584(uVar3,0);
      fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar5);
    }
    *(undefined1 *)(param_1 + 0x78) = 6;
    break;
  case 4:
    *(undefined1 *)(param_1 + 0x79) = 0x12;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0x100094d;
    uVar5 = fn_0022f584(uVar1,0);
    fn_0036c140(*(undefined4 *)(param_1 + 0x5c),uVar5);
    *(undefined1 *)(param_1 + 0x78) = 6;
  }
  fn_001076bc(8);
  return;
}


