#include "00178fb8_00179728a.h"



int fn_00179470(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  
  iVar1 = fn_001912b0();
  uVar3 = 0;
  if (iVar1 == 2) {
    iVar4 = *(int *)(param_1 + 0xc);
    iVar1 = iVar4 + 1;
    if (0xb < iVar1) {
      uVar3 = 8;
    }
    *(int *)(param_1 + 0xc) = iVar1;
    if (0xb < iVar1) {
      *(undefined4 *)(param_1 + 0xc) = uVar3;
    }
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    *(int *)(param_1 + 8) = iVar4 + 1;
    if (7 < iVar4 + 1) {
      *(undefined4 *)(param_1 + 8) = 0;
    }
  }
  uVar2 = fn_0016678c(param_1,0xd);
  bVar5 = uVar2 == 0;
  if (bVar5) {
    uVar2 = (uint)*(byte *)(param_1 + 0x38);
  }
  if (bVar5 && uVar2 == 0) {
    fn_0015a394(param_1,iVar4,param_2);
  }
  return iVar4;
}



undefined4 fn_001793c4(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = DAT_008cfddc;
  iVar3 = *(int *)(DAT_008cfddc + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < param_1) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar1 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  iVar3 = DAT_008cfddc;
  if ((iVar1 != DAT_008cfddc) && (*(uint *)(iVar1 + 0x10) <= param_1)) {
    iVar3 = iVar1;
  }
  if (((iVar3 == DAT_008cfddc) || (iVar1 = *(int *)(iVar3 + 0x14), iVar1 < 0)) ||
     (DAT_0089814c <= iVar1)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(DAT_00898150 + iVar1 * 4);
  }
  return uVar2;
}



undefined4 fn_00178fb8(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 auStack_12c [136];
  undefined1 auStack_a4 [108];
  uint local_38;
  int *local_34;
  uint local_30;
  int *piStack_2c;
  uint local_28;
  int *local_24;
  undefined4 local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  
  param_1[0x17] = 1;
  param_1[0x18] = 0;
  fn_001ac0f8(auStack_12c,*(undefined4 *)(param_1[0x7e] + 0x8c),0,&LAB_001854dc,param_1);
  local_34 = (int *)fn_0019ba68(*(undefined4 *)(param_1[0x7e] + 0x8c),&DAT_00179350,0xffffffff);
  local_38 = 0x8000010;
  if (local_34 != (int *)0x0) {
    local_34[1] = local_34[1] + 1;
    fn_0019e864(auStack_a4,&local_38);
    if (((local_38 & 0x8000000) != 0) &&
       (iVar1 = local_34[1], local_34[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_34 + 8))();
    }
    param_1[1] = (int)auStack_12c;
    fn_001a93d4(&local_28,auStack_12c,&DAT_0017935c,0xffffffff);
    local_30 = local_28;
    piStack_2c = local_24;
    fn_001a931c(param_1[1],&local_30);
    iVar1 = param_1[1];
    iVar4 = param_1[3];
    piVar2 = *(int **)(iVar1 + 0x94);
    uVar3 = *(uint *)(iVar1 + 0x90);
    *(int *)(iVar1 + 0x94) = iVar4;
    uVar5 = param_1[2];
    *(uint *)(iVar1 + 0x90) = uVar5;
    if ((uVar5 & 0x8000000) != 0) {
      *(int *)(iVar4 + 4) = *(int *)(iVar4 + 4) + 1;
    }
    if (((uVar3 & 0x8000000) != 0) && (iVar1 = piVar2[1], piVar2[1] = iVar1 + -1, iVar1 + -1 == 0))
    {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    iVar1 = *(int *)(param_1[1] + 8);
    iVar4 = fn_001a531c(param_1 + 0x1e);
    if (iVar4 == 0) {
      iVar4 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar4;
      while (0 < iVar4) {
        while( true ) {
          fn_0018550c(param_1);
          if (param_1[6] == 0x7d) break;
          iVar4 = *param_1;
          if (iVar4 == 0x3b) {
            iVar4 = fn_001a9c90(param_1 + 4);
            *param_1 = iVar4;
            break;
          }
          if (param_1[6] == 10) break;
          if (iVar4 == 0) goto LAB_0017925c;
          if (iVar4 != 0x7d) {
            fn_00102cc8(&DAT_008f9d08,(char *)&DAT_0017936c,auStack_12c);
            param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
            fn_001a5350(param_1 + 0x1e,1);
          }
        }
        iVar4 = *param_1;
      }
LAB_0017925c:
      if (*(int *)(param_1[1] + 8) != iVar1) {
        fn_001a7410(param_1[1],iVar1);
      }
      fn_001a7368(param_1[1],param_1[7],(int)(char)param_1[0x16],1);
      local_1c = 0x13;
      local_1b = 0xff;
      local_20 = 0;
      local_1a = 0;
      local_19 = 0;
      fn_001a759c(param_1[1],&local_20);
      fn_001a7410(param_1[1],0);
      local_24 = (int *)fn_001a8b1c(param_1[1]);
      local_28 = 0x8002000;
      if (local_24 != (int *)0x0) {
        local_24[1] = local_24[1] + 1;
        fn_0019e864(param_2,&local_28);
        if (((local_28 & 0x8000000) != 0) &&
           (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_24 + 8))();
        }
        fn_001ac354(auStack_12c);
        return 1;
      }
    }
    else {
      if (*(char *)((int)param_1 + 0x59) != '\0') {
        pcVar6 = *(code **)(*(int *)(param_1[0x7e] + 0x8c) + 0xa0);
        if (pcVar6 != (code *)0x0) {
          (*pcVar6)(param_1[0x7e],param_1[0x1c]);
        }
      }
      local_24 = (int *)fn_0019ba68(*(undefined4 *)(param_1[0x7e] + 0x8c),param_1[0x1c],0xffffffff)
      ;
      local_28 = 0x8000010;
      if (local_24 != (int *)0x0) {
        local_24[1] = local_24[1] + 1;
        fn_0019e864(param_1[0x7e] + 0x40,&local_28);
        if (((local_28 & 0x8000000) != 0) &&
           (iVar1 = local_24[1], local_24[1] = iVar1 + -1, iVar1 + -1 == 0)) {
          (**(code **)(*local_24 + 8))();
        }
        fn_001ac354(auStack_12c);
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}


