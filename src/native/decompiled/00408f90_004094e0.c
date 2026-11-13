#include "00408f90_004094e0.h"



undefined4 fn_004094e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  wchar16 *pwStack_4c;
  char *pcStack_48;
  int iStack_44;
  int local_40;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  
  fn_0057a168();
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar4);
  iVar2 = fn_006b84b0(uVar4);
  fn_002c330c(&pwStack_4c);
  pwStack_4c = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_48 = (char *)&DAT_00409708;
  local_40 = param_1[0x42];
  iStack_44 = iVar1 + iVar2;
  uVar4 = fn_0057a3c4(param_1);
  fn_00147974(&local_30,uVar4);
  local_20 = 0;
  local_1f = 1;
  uVar4 = fn_0022f750(&DAT_0040971c);
  fn_00147974(&local_24,uVar4);
  local_1e = 1;
  uVar4 = fn_0022f750(&DAT_00409720);
  fn_00147974(&local_2c,uVar4);
  fn_002c29a0(param_1,&pwStack_4c);
  fn_0031f8fc(param_1[0x1d],0,0,0,0xffffffff);
  iVar1 = param_1[0x1d];
  *(undefined1 *)(iVar1 + 0x81) = 0;
  fn_0031f3f4(iVar1,0);
  if (local_24 != &DAT_008f9cf4) {
    piVar3 = local_24 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar3 = local_28 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar1 = *piVar3;
    if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  (**(code **)(*param_1 + 0x144))(param_1);
  fn_005d189c(param_1,param_1[0x42]);
  return 1;
}



void fn_00408f90(int param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  *(undefined1 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 5) = param_2;
  uVar6 = 0;
  if ((((byte)DAT_008c62fc & 1) == 0) && (iVar1 = fn_00303afc(&DAT_008c62fc), iVar1 != 0)) {
    DAT_008f9e2c = uVar6;
    DAT_008f9e30 = uVar6;
    DAT_008f9e34 = uVar6;
  }
  uVar6 = fn_006f7a0c(DAT_008977e0);
  fn_00683dec(uVar6,*(undefined1 *)(param_1 + 5),&DAT_008f9e2c);
  if (*(int *)(DAT_008977d4 + 0x68) == 0) goto LAB_0040906c;
  if (*(char *)(param_1 + 5) == '\0') {
    uVar6 = fn_002b0698(DAT_008977e0);
    uVar2 = 0;
LAB_00409054:
    fn_002889cc(uVar2,uVar6);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    uVar6 = fn_002b0698(DAT_008977e0);
    uVar2 = 1;
    goto LAB_00409054;
  }
  uVar6 = fn_002b0698(DAT_008977e0);
  fn_0013af30(DAT_008977d4,uVar6);
LAB_0040906c:
  iVar1 = fn_006f7a70(DAT_008977e0);
  iVar4 = 0;
  iVar1 = *(int *)(iVar1 + 0x1c) - *(int *)(iVar1 + 0x18) >> 2;
  if (0 < iVar1) {
    do {
      iVar3 = fn_006f7a70(DAT_008977e0);
      piVar5 = *(int **)(*(int *)(iVar3 + 0x18) + iVar4 * 4);
      if ((piVar5 != (int *)0x0) && ((char)piVar5[0x5f] == '#' || (char)piVar5[0x5f] == '\"')) {
        if (*(char *)(param_1 + 5) == '\x01') {
          (**(code **)(*piVar5 + 0xd8))(piVar5);
          (**(code **)(*piVar5 + 0x58))(piVar5,0);
          *(undefined1 *)(piVar5 + 0x6d) = 0;
        }
        else {
          *(undefined1 *)(piVar5 + 0x6d) = 1;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  return;
}


