#include "0031ec6c_0031eee8.h"



/* WARNING: Removing unreachable block (ram,0x0031f05c) */

void fn_0031eee8(int param_1,uint param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uStack_18;
  
  iVar3 = *(int *)(param_1 + 0x74);
  *(char *)(iVar3 + 0x7f) = (char)param_2;
  if (*(char *)(iVar3 + 0x7e) == *(char *)(iVar3 + 0x7f)) {
    return;
  }
  iVar5 = (int)*(char *)(iVar3 + 0x7d);
  if ((int)*(char *)(iVar3 + 0x7c) == (int)*(char *)(iVar3 + 0x7d)) {
    iVar5 = (int)*(char *)(iVar3 + 0x7c);
  }
  iVar4 = *(int *)(iVar3 + 100);
  if (iVar4 != 0) {
    *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
  }
  cVar1 = *(char *)(iVar3 + 0x7f);
  switch(iVar5) {
  case 1:
    if (cVar1 == '\x01') {
      uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
      uVar2 = param_2;
      if (uStack_18 == 0) {
        fn_002ff628(9,&DAT_008c7663);
        uVar2 = uStack_18;
      }
      uStack_18 = uVar2;
      piVar7 = *(int **)(iVar3 + 0x40);
      goto LAB_0031f2a0;
    }
    if (cVar1 == '\x02') {
      uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
      uVar2 = param_2;
      if (uStack_18 < 2) {
        fn_002ff628(9,&DAT_008c7663);
        uVar2 = uStack_18;
      }
      uStack_18 = uVar2;
      iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 4);
    }
    else {
      if (cVar1 == '\x03') {
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 3) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(iVar3 + 0x40);
        goto LAB_0031f2ec;
      }
      if (cVar1 == '\x04') {
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 4) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 0xc);
      }
      else if (cVar1 == '\x05') {
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 5) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 0x10);
      }
      else if (cVar1 == '\x06') {
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 6) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 0x14);
      }
      else if (cVar1 == '\t') {
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 7) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 0x18);
      }
      else {
        if (cVar1 != '\n') goto switchD_0031ef5c_caseD_ffffffff;
        uStack_18 = *(int *)(iVar3 + 0x44) - *(int *)(iVar3 + 0x40) >> 2;
        uVar2 = param_2;
        if (uStack_18 < 0xd) {
          fn_002ff628(9,&DAT_008c7663);
          uVar2 = uStack_18;
        }
        uStack_18 = uVar2;
        iVar5 = *(int *)(*(int *)(iVar3 + 0x40) + 0x30);
      }
    }
    break;
  case 2:
    if (cVar1 != '\a') goto switchD_0031ef5c_caseD_ffffffff;
    uStack_18 = *(int *)(iVar3 + 0x50) - *(int *)(iVar3 + 0x4c) >> 2;
    uVar2 = param_2;
    if (uStack_18 == 0) {
      fn_002ff628(9,&DAT_008c7663);
      uVar2 = uStack_18;
    }
    uStack_18 = uVar2;
    piVar7 = *(int **)(iVar3 + 0x4c);
LAB_0031f2a0:
    iVar5 = *piVar7;
    break;
  case 3:
    if (cVar1 != '\b') goto switchD_0031ef5c_caseD_ffffffff;
    uStack_18 = *(int *)(iVar3 + 0x5c) - *(int *)(iVar3 + 0x58) >> 2;
    uVar2 = param_2;
    if (uStack_18 < 3) {
      fn_002ff628(9,&DAT_008c7663);
      uVar2 = uStack_18;
    }
    uStack_18 = uVar2;
    iVar5 = *(int *)(iVar3 + 0x58);
LAB_0031f2ec:
    iVar5 = *(int *)(iVar5 + 8);
    break;
  case -1:
  case 0:
switchD_0031ef5c_caseD_ffffffff:
    *(undefined4 *)(iVar3 + 100) = 0;
    return;
  default:
    iVar5 = *(int *)(iVar3 + 100);
    uStack_18 = param_2;
    goto LAB_0031f038;
  }
  *(int *)(iVar3 + 100) = iVar5;
LAB_0031f038:
  if (iVar5 == 0) {
    return;
  }
  *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
  piVar7 = *(int **)(iVar3 + 100);
  uVar6 = fn_001603f8(&uStack_18,0xffffffff);
  (**(code **)(*piVar7 + 0x10))(piVar7,0,uVar6);
  piVar7 = *(int **)(iVar3 + 100);
  uVar6 = fn_001603f8(&uStack_18,0xffffffff);
  (**(code **)(*piVar7 + 0x10))(piVar7,1,uVar6);
  piVar7 = *(int **)(iVar3 + 100);
  uVar6 = fn_001603f8(&uStack_18,0xffffffff);
  (**(code **)(*piVar7 + 0x10))(piVar7,2,uVar6);
  piVar7 = *(int **)(iVar3 + 100);
  uVar6 = fn_001603f8(&uStack_18,0xffffffff);
  (**(code **)(*piVar7 + 0x10))(piVar7,3,uVar6);
  return;
}



void fn_0031ee10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  if ((param_2 != 0) || (*(char *)(param_1 + 0x84) != *(char *)(param_1 + 0x85))) {
    iVar1 = (int)*(char *)(param_1 + 0x7d);
    if ((int)*(char *)(param_1 + 0x7c) == (int)*(char *)(param_1 + 0x7d)) {
      iVar1 = (int)*(char *)(param_1 + 0x7c);
    }
    iVar2 = *(int *)(param_1 + 0x70);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    *(undefined4 *)(param_1 + 0x70) = 0;
    switch(iVar1) {
    case 3:
      if (*(int *)(param_1 + 0x5c) - *(int *)(param_1 + 0x58) >> 2 == 0) {
        fn_002ff628(9,&DAT_008c7663,&DAT_008c7663,0,0);
      }
      iVar1 = **(int **)(param_1 + 0x58);
      *(int *)(param_1 + 0x70) = iVar1;
      break;
    case -1:
    case 0:
    case 1:
    case 2:
      goto switchD_0031ee68_caseD_ffffffff;
    default:
      iVar1 = 0;
    }
    if (iVar1 != 0) {
      *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
    }
  }
switchD_0031ee68_caseD_ffffffff:
  return;
}



void fn_0031ec6c(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint local_20;
  uint local_1c [4];
  
  if (param_2 != 0) goto LAB_0031ed04;
  uVar3 = *(uint *)(*(int *)(param_1 + 0x74) + -4);
  if (uVar3 == *(uint *)(*(int *)(param_1 + 0x78) + -4)) {
    local_20 = uVar3;
    local_1c[0] = *(uint *)(*(int *)(param_1 + 0x78) + -4);
    puVar4 = &local_20;
    if (local_1c[0] < uVar3) {
      puVar4 = local_1c;
    }
    iVar2 = fn_001006de(*(int *)(param_1 + 0x74),*(int *)(param_1 + 0x78),*puVar4);
    if ((iVar2 != 0) ||
       (*(int *)(*(int *)(param_1 + 0x74) + -4) != *(int *)(*(int *)(param_1 + 0x78) + -4)))
    goto LAB_0031ecf8;
    bVar5 = true;
  }
  else {
LAB_0031ecf8:
    bVar5 = false;
  }
  if (bVar5) {
    return;
  }
LAB_0031ed04:
  cVar1 = *(char *)(param_1 + 0x86);
  bVar5 = cVar1 == '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + 0x87);
  }
  if (bVar5 && cVar1 == '\0') {
    if (0xf < *(uint *)(*(int *)(param_1 + 0x78) + -4)) {
      fn_00688ea0(*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x1c));
      *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0x24) + 0x44) =
           *(byte *)(*(int *)(param_1 + 0x24) + 0x44) & 0xfe | 1;
      return;
    }
    fn_00688ea0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x1c));
  }
  else {
    if (*(int *)(*(int *)(param_1 + 0x78) + -4) != 0) {
      fn_00190d50(*(undefined4 *)(param_1 + 0x1c));
    }
    if (*(char *)(param_1 + 0x87) == '\0') {
      return;
    }
  }
  *(byte *)(*(int *)(param_1 + 0x24) + 0x44) = *(byte *)(*(int *)(param_1 + 0x24) + 0x44) & 0xfe;
  *(byte *)(*(int *)(param_1 + 0x20) + 0x44) = *(byte *)(*(int *)(param_1 + 0x20) + 0x44) & 0xfe | 1
  ;
  return;
}


