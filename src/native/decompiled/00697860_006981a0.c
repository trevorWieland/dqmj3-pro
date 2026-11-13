#include "00697860_006981a0.h"



void fn_006981a0(int param_1)

{
  if (*(char *)(param_1 + 0x16c) == '\x06') {
    return;
  }
  *(undefined1 *)(param_1 + 0x16c) = 6;
  *(undefined1 *)(param_1 + 0x16e) = 1;
  fn_003b682c(param_1);
  fn_001ea890(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4),0);
  *(undefined **)(param_1 + 0x178) = &DAT_00696bf0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  fn_00699014(param_1,1);
  return;
}



undefined4 fn_00698120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  iVar1 = fn_006f7ad0(param_1,1);
  uVar2 = 0;
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x170) != -1) {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 0xff;
    }
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00697f90(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = DAT_008977e0;
  if (*(int *)(param_1 + 0x60) == -1) {
    return;
  }
  *(undefined1 *)(DAT_008977e0 + 0x22a) = 1;
  piVar2 = *(int **)(*(int *)(*(int *)(*(int *)(iVar1 + 4) + 4) + *(int *)(iVar1 + 0x60) * 4) + 4);
                    /* WARNING: Could not recover jumptable at 0x00697fcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x54))(piVar2,0);
  return;
}



void fn_00697d94(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_48;
  undefined1 local_44;
  
  fn_0011a24c(&local_48);
  local_44 = 0;
  local_48 = param_2;
  uVar1 = fn_006c3a84(*(undefined4 *)
                        (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) + *(int *)(param_1 + 0x70) * 4
                                 ) + 0x30));
  fn_006f77d4(param_1,&local_48,*(undefined4 *)(param_1 + 0xa8),param_2,uVar1);
  fn_006949f8(param_1,&local_48);
  *(undefined1 *)(param_1 + 0x16e) = 0;
  *(code **)(param_1 + 0x178) = fn_00697fd8;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  fn_003b682c(param_1);
  return;
}



undefined4 fn_00697fd8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined4 uStack_18;
  
  iVar1 = *(int *)(param_1 + 0x174);
  uStack_18 = param_4;
  if (iVar1 == 0) {
    if ((*(int **)(param_1 + 0x28) != (int *)0x0) &&
       (iVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0x2c))(), iVar1 != 0)) {
      return 0;
    }
    uVar2 = 1;
  }
  else {
    if (iVar1 != 1) {
      if (iVar1 != 2) {
        return 0;
      }
      iVar1 = fn_006f7ad0(param_1,1);
      if (iVar1 == 0) {
        return 0;
      }
      fn_00694a10(param_1);
      return 1;
    }
    if (*(char *)(param_1 + 0x170) != '\x01') {
      if (*(char *)(param_1 + 0x170) == '\0') {
        fn_00699014(param_1,0);
      }
      *(undefined1 *)(param_1 + 0x170) = 1;
    }
    uVar2 = fn_001603f8(&uStack_18,0xffffffff);
    fn_00163988(DAT_00897808,uVar2,0x14);
    uVar2 = fn_001603f8(&uStack_18,0xffffffff);
    fn_00163988(DAT_0089780c,uVar2,0x14);
    iVar1 = *(int *)(param_1 + 0xe0);
    bVar3 = iVar1 < 0;
    if (!bVar3) {
      iVar1 = (int)*(char *)(param_1 + 0x108);
    }
    if ((bVar3 || iVar1 < 0) || (iVar1 = fn_006f612c(*(undefined4 *)(param_1 + 0x3c)), iVar1 != 0))
    {
      fn_0068326c(*(undefined4 *)(param_1 + 0x3c));
    }
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x174) = uVar2;
  return 0;
}



void fn_00697d48(int param_1)

{
  undefined1 auStack_40 [56];
  
  fn_0011a24c(auStack_40);
  fn_006f76f0(param_1,auStack_40);
  fn_006949f8(param_1,auStack_40);
  *(undefined1 *)(param_1 + 0x16c) = 0xff;
  *(undefined1 *)(param_1 + 0x16e) = 0;
  fn_00694a10(param_1);
  return;
}



void fn_00697c44(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  char *local_98;
  char local_94 [4];
  char *local_90 [14];
  int local_58 [15];
  
  local_98 = (char *)&DAT_00860ae4;
  local_94[0] = '\x11';
  local_94[1] = '\0';
  local_94[2] = '\0';
  local_94[3] = '\0';
  local_90[0] = (char *)0x7eb;
  local_90[1] = (char *)&DAT_00860ae4;
  local_90[2] = (char *)0x12;
  local_90[3] = (char *)0x7e7;
  local_90[4] = (char *)&DAT_00860ae4;
  local_90[5] = (char *)0x13;
  local_90[6] = (char *)0x7e8;
  local_90[7] = (char *)&DAT_00860ae4;
  local_90[8] = (char *)0xf;
  local_90[9] = (char *)0x32b;
  local_90[10] = (char *)&DAT_00860ae4;
  local_90[0xb] = (char *)0x10;
  local_90[0xc] = (char *)0x32b;
  if (param_2 != -1) {
    if ((param_2 == 0xd) ||
       ((((param_2 != 9 && param_2 != 0xb && (param_2 != 0xc && param_2 != 0xe)) &&
         (param_2 != 0xf && param_2 != 0x10)) &&
        ((param_2 != 0x11 && param_2 != 1) && param_2 != 0x12)))) {
      local_58[0] = *(int *)(param_1 + 0xa8);
    }
    else {
      fn_0011a24c(local_58);
      fn_006f76f0(param_1,local_58);
    }
    uVar2 = 0;
    while ((iVar1 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),
                                 *(undefined4 *)(local_94 + uVar2 * 0xc + -4)), iVar1 != local_58[0]
           || (local_94[uVar2 * 0xc] != param_2))) {
      uVar2 = uVar2 + 1;
      if (4 < uVar2) {
        return;
      }
    }
    fn_00144834(local_90[uVar2 * 3],1);
  }
  return;
}



void fn_00697b84(int param_1)

{
  int iVar1;
  
  iVar1 = DAT_008977e0;
  *(undefined1 *)(DAT_008977e0 + 0x21b) = 1;
  if (*(char *)(param_1 + 0x16c) == '\x05') {
    return;
  }
  iVar1 = fn_006f6fc4(*(undefined4 *)(iVar1 + 0x40));
  if (((iVar1 != 0) || (iVar1 = fn_006f700c(*(undefined4 *)(DAT_008977e0 + 0x40)), iVar1 != 0)) ||
     (iVar1 = fn_006f6fe8(*(undefined4 *)(DAT_008977e0 + 0x40)), iVar1 != 0)) {
    *(undefined1 *)(param_1 + 0x16c) = 5;
    *(undefined1 *)(param_1 + 0x16e) = 2;
  }
  fn_003b682c(param_1);
  fn_001ea890(*(undefined4 *)
                (*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) +
                         *(int *)(DAT_008977e0 + 0x60) * 4) + 4),0);
  *(undefined **)(param_1 + 0x178) = &DAT_00696bf0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  fn_00699014(param_1,1);
  return;
}



void fn_00697af8(int param_1)

{
  *(undefined1 *)(param_1 + 0x16c) = 1;
  *(undefined1 *)(param_1 + 0x16e) = 1;
  *(code **)(param_1 + 0x178) = fn_00695198;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_003b682c(param_1);
  fn_00697124(param_1);
  fn_002cefe8(DAT_00897834,&LAB_001b5788);
                    /* WARNING: Subroutine does not return */
  fn_0011dda8();
}



void fn_006979b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_48;
  undefined1 local_44;
  undefined4 local_30;
  undefined1 local_20;
  
  fn_0011a24c(&local_48);
  local_44 = 2;
  local_48 = param_2;
  local_30 = param_3;
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                           *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x24) + 0x24))();
  local_20 = fn_006c3a84(*(undefined4 *)
                           (*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                    *(int *)(param_1 + 0x70) * 4) + 0x30));
  (**(code **)(**(int **)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 4) +
                                           *(int *)(param_1 + 0x70) * 4) + 0x30) + 0x28) + 0x2c))();
  fn_006949f8(param_1,&local_48);
  *(undefined1 *)(param_1 + 0x16e) = 1;
  *(code **)(param_1 + 0x178) = fn_006960c0;
  *(undefined4 *)(param_1 + 0x17c) = 0;
  if (*(char *)(param_1 + 0x170) != '\0') {
    fn_00699014(param_1,1);
    *(undefined1 *)(param_1 + 0x170) = 0;
  }
  fn_00699014(param_1,1);
  fn_003b682c(param_1);
  fn_00365c70(*(undefined4 *)
                (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 100) * 4));
  if ((*(code **)(param_1 + 0x1d8) != (code *)0x0) &&
     ((**(code **)(param_1 + 0x1d8))(), *(char *)(param_1 + 0x1a7) != '\0')) {
    *(undefined4 *)(param_1 + 0x1d8) = 0;
    *(undefined1 *)(param_1 + 0x1a7) = 0;
  }
  return;
}



undefined4 fn_00697860(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  if (*(char *)(param_1 + 0x170) != '\x01') {
    if (*(char *)(param_1 + 0x170) == '\0') {
      fn_00699014(param_1,0);
    }
    *(undefined1 *)(param_1 + 0x170) = 1;
  }
  if (*(int *)(param_1 + 0x174) == 0) {
    iVar2 = fn_006a8d68(*(undefined4 *)(param_1 + 0x30));
    if (iVar2 == 0) {
      uVar1 = fn_001603f8(&uStack_10,0);
      fn_00163988(DAT_00897808,uVar1,0x14);
      uVar1 = fn_001603f8(&uStack_10,0);
      fn_00163988(DAT_0089780c,uVar1,0x14);
      uVar1 = fn_001603f8(&uStack_10,0);
      fn_00163988(DAT_00897810,uVar1,0x14);
      *(undefined4 *)(param_1 + 0x174) = 1;
    }
  }
  else if ((*(int *)(param_1 + 0x174) == 1) && (iVar2 = fn_006f7ad0(param_1,1,0), iVar2 != 0)) {
    fn_002d8628(*(undefined4 *)
                  (*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x90) * 4));
    fn_002a6b5c(*(undefined4 *)(*(int *)(param_1 + 0x40) + 0x10));
    *(undefined1 *)
     (*(int *)(*(int *)(*(int *)(*(int *)(DAT_008977e0 + 4) + 4) + *(int *)(DAT_008977e0 + 0x60) * 4
                       ) + 4) + 0x3e1) = 1;
    return 1;
  }
  return 0;
}


