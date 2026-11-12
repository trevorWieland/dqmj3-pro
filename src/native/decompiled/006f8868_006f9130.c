#include "006f8868_006f9130.h"



void fn_006f9130(int param_1)

{
  fn_00496810(param_1 + 8);
  return;
}



void fn_006f90d8(int param_1,undefined4 param_2,int param_3)

{
                    /* WARNING: Subroutine does not return */
  fn_006d30f0(param_1 + -0x10,param_3 + 0x30);
}



void fn_006f90c0(int param_1)

{
  fn_0049b024(param_1 + 8);
  return;
}



void fn_006f9070(int param_1)

{
  fn_00496810(param_1 + 8);
  return;
}



void fn_006f8f68(int param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x210);
  if (((piVar1 == (int *)0x0) || (iVar2 = (**(code **)(*piVar1 + 8))(piVar1,param_2), iVar2 == 0))
     && (iVar2 = fn_006e3c70(param_1,param_2), iVar2 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x006f8fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + -0xc) + 0x10))((int *)(param_1 + -0xc),param_2);
    return;
  }
  return;
}



undefined4 fn_006f8e0c(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_1c = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_004a8c20(param_1 + -0x68,uVar2);
    return 0;
  }
  if ((uint)((*(int *)(param_1 + 0xec) - *(int *)(param_1 + 0xe8)) + param_3) < 0x81) {
    fn_0079bde8(param_1 + 0xe8,*(int *)(param_1 + 0xec),param_2,param_2 + param_3);
    return 1;
  }
  fn_00456510(param_1 + 0x28,4);
  *(undefined1 *)(param_1 + 0xf8) = 1;
  return 0;
}



void fn_006f8d84(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_14[0] = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_20,local_14);
    fn_004a8c20(param_1 + -0x68,uVar2);
  }
  else {
    param_2[2] = *(int *)(param_1 + 0x1c);
    iVar1 = *(int *)(param_1 + 0xdc);
    if (iVar1 != *(int *)(param_1 + 0xe0)) {
                    /* WARNING: Could not recover jumptable at 0x006f8ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x54))(param_2,iVar1,*(int *)(param_1 + 0xe0) - iVar1);
      return;
    }
  }
  return;
}



void fn_006f8cc8(int param_1,int *param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [12];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_14 = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_20,&local_14);
    fn_00493e68(param_1 + -0x68,uVar2);
  }
  else {
    *(int *)(param_1 + 0x80) = param_3;
    if (param_3 == 0x133) {
      (**(code **)(*param_2 + 0x4c))(param_2,(char *)&DAT_007d8e60,param_1 + 0x94);
    }
    if (*(int *)(param_1 + 0x80) - 1U < 299) {
                    /* WARNING: Could not recover jumptable at 0x006f8d4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x14) + 0x10))(*(int **)(param_1 + 0x14),param_2,param_3);
      return;
    }
  }
  return;
}



undefined4
fn_006f8c30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30 [3];
  undefined4 local_24 [4];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_24[0] = 0x80010004;
    uVar2 = fn_004b8d4c(local_30,local_24);
    fn_00493e68(param_1 + -0x68,uVar2);
    return 0;
  }
  local_30[0] = param_5;
  uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0xc))
                    (*(int **)(param_1 + 0x14),param_2,param_3,param_4);
  return uVar2;
}



undefined4 fn_006f8b40(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [12];
  undefined4 local_1c [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_1c[0] = 0x80010004;
    uVar2 = fn_004b8d4c(auStack_28,local_1c);
    fn_00493e68(param_1 + -0x68,uVar2);
    return 0;
  }
  if (*(int *)(param_1 + 0x80) - 1U < 299) {
    if (*(char *)(param_1 + 0x10) != '\x02') {
                    /* WARNING: Could not recover jumptable at 0x006f8bac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(**(int **)(param_1 + 0x14) + 0x14))
                        (*(int **)(param_1 + 0x14),param_2,param_3);
      return uVar2;
    }
  }
  else if ((uint)((*(int *)(param_1 + 0x88) - *(int *)(param_1 + 0x84)) + param_3) < 0x2801) {
    fn_0079bde8(param_1 + 0x84,*(int *)(param_1 + 0x88),param_2,param_2 + param_3);
  }
  else {
    *(undefined1 *)(param_1 + 0x90) = 1;
    fn_00456510(param_1 + 0x18,4);
  }
  return 1;
}



void fn_006f8a5c(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined1 auStack_20 [12];
  undefined1 *local_14;
  
  iVar5 = param_1 + -0x68;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_14 = (undefined1 *)0x80010004;
    uVar2 = fn_004b8d4c(auStack_20,&local_14);
    fn_00493e68(iVar5,uVar2);
    return;
  }
  uVar4 = 0;
  do {
    iVar1 = iVar5 + uVar4 * 0xc;
    iVar3 = *(int *)(iVar1 + 0x108);
    iVar1 = (**(code **)(*param_2 + 0x54))(param_2,iVar3,*(int *)(iVar1 + 0x10c) - iVar3);
    if (iVar1 == 0) {
      local_14 = &DAT_80010001;
      uVar2 = fn_004b8d4c(auStack_20,&local_14);
      fn_00493e68(iVar5,uVar2);
      return;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 4);
  *(undefined1 *)((int)param_2 + 0xd) = 0;
  *(undefined1 *)((int)param_2 + 0xe) = 0;
                    /* WARNING: Could not recover jumptable at 0x006f8ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(*(int **)(param_1 + 0x14),param_2);
  return;
}



void fn_006f8984(int param_1,int *param_2)

{
  int iVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [4];
  undefined4 local_14;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 != 0) {
    fn_0013d40c(auStack_18);
    pcVar3 = *(code **)(*param_2 + 0x4c);
    iVar1 = (*pcVar3)(param_2,(char *)&DAT_007d8f14,auStack_18);
    if (iVar1 != 0) {
      local_1c = 0;
      local_20 = 0;
      fn_00156234(auStack_18,&local_20);
      pcVar2 = (code *)fn_00102c18(local_20,&local_1c,10);
      fn_0014f4d8(local_20);
      if (pcVar2 != (code *)0x0) {
        pcVar3 = *(code **)(param_1 + 0x104);
      }
      if (pcVar2 != (code *)0x0 && pcVar3 != pcVar2) {
        local_20 = local_14;
        *(undefined1 *)(param_1 + 0x165) = 1;
        fn_00456510(param_1 + 0x30,4,pcVar2);
      }
    }
    fn_00170f54(auStack_18);
  }
  return;
}



void fn_006f8868(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c [2];
  undefined1 auStack_24 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    local_38[0] = 0x80010004;
    uVar2 = fn_004b8d4c(&local_30,local_38);
    fn_0074f214(param_1 + -0x68,uVar2);
  }
  else {
    param_2[2] = *(int *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x58))(param_2,*(undefined4 *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 0xf8);
    if (*(int *)(param_1 + 0xfc) != iVar1) {
      do {
        local_30 = 0;
        local_2c[0] = 0;
        fn_00156234(iVar1 + 8,&local_30);
        fn_00156234(iVar1 + 0x10,local_2c);
        (**(code **)(*param_2 + 0xc))(auStack_24,param_2,local_30,local_2c[0]);
        fn_0014f4d8(local_30);
        fn_0014f4d8(local_2c[0]);
        iVar1 = iVar1 + 0x18;
      } while (*(int *)(param_1 + 0xfc) != iVar1);
    }
    iVar1 = *(int *)(param_1 + 0x108);
    if (iVar1 != *(int *)(param_1 + 0x10c)) {
                    /* WARNING: Could not recover jumptable at 0x006f8944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x54))(param_2,iVar1,*(int *)(param_1 + 0x10c) - iVar1);
      return;
    }
  }
  return;
}


