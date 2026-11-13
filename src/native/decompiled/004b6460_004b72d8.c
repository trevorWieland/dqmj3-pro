#include "004b6460_004b72d8.h"



undefined4 fn_004b72d8(int param_1)

{
  fn_004b7268();
  return *(undefined4 *)(param_1 + 8);
}



void fn_004b7268(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  undefined1 local_15;
  
  uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 8) + 0x10) = 0;
  iVar1 = uVar2 - 4;
  local_18 = (undefined1)iVar1;
  local_17 = (undefined1)((uint)iVar1 >> 8);
  local_16 = (undefined1)((uint)iVar1 >> 0x10);
  local_15 = (undefined1)((uint)iVar1 >> 0x18);
  fn_0015ef58(*(undefined4 *)(param_1 + 8),&local_18,4,0xffffffff);
  iVar1 = *(int *)(param_1 + 8);
  if (uVar2 <= (uint)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18))) {
    *(uint *)(iVar1 + 0x10) = uVar2;
  }
  return;
}



void fn_004b7244(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  fn_0015ef58(*(undefined4 *)(param_1 + 8),*(int *)(iVar1 + 0xc) + *(int *)(iVar1 + 0x18) + 4,
               *(int *)(iVar1 + 0x10) + -4,0xffffffff);
  return;
}



void fn_004b716c(void)

{
  int iVar1;
  
  iVar1 = fn_004b719c();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b718c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



void fn_004b6ee4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_34;
  int local_30;
  int local_2c;
  int iStack_28;
  
  iVar2 = *(int *)(param_2 + 0x7c);
  if (iVar2 != *(int *)(param_2 + 0x80)) {
    iVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x14))
                      (*(int **)(param_2 + 0x8c),iVar2,*(int *)(param_2 + 0x80) - iVar2);
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x68));
    if (iVar1 == 0) {
      *param_1 = -0x7ffefffc;
      param_1[1] = (int)&DAT_007dba44;
      param_1[2] = 0x71;
      return;
    }
    if (iVar2 == 0) goto LAB_004b707c;
    if (*(int *)(param_2 + 0x7c) != *(int *)(param_2 + 0x80)) {
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x7c);
    }
  }
  while( true ) {
    local_34 = 0;
    fn_0079c308(param_2 + 0x7c,*(undefined4 *)(param_2 + 0x90),0);
    (**(code **)(**(int **)(param_2 + 0x6c) + 0x30))
              (&local_30,*(int **)(param_2 + 0x6c),*(int *)(param_2 + 0x7c),&local_34,
               *(int *)(param_2 + 0x80) - *(int *)(param_2 + 0x7c));
    if (local_30 < 0) {
      *param_1 = local_30;
      param_1[1] = local_2c;
      param_1[2] = iStack_28;
      return;
    }
    fn_0079c308(param_2 + 0x7c,local_34,0);
    iVar2 = *(int *)(param_2 + 0x7c);
    if (iVar2 == *(int *)(param_2 + 0x80)) break;
    iVar2 = (**(code **)(**(int **)(param_2 + 0x8c) + 0x14))
                      (*(int **)(param_2 + 0x8c),iVar2,*(int *)(param_2 + 0x80) - iVar2);
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x68));
    if (iVar1 == 0) {
      iVar2 = -0x7ffefffc;
      goto LAB_004b700c;
    }
    if (iVar2 == 0) goto LAB_004b707c;
    if (*(int *)(param_2 + 0x7c) != *(int *)(param_2 + 0x80)) {
      *(int *)(param_2 + 0x80) = *(int *)(param_2 + 0x7c);
    }
  }
  iVar2 = (**(code **)(**(int **)(param_2 + 0x6c) + 0x44))();
  if (iVar2 != 0) {
    iVar2 = 0x10001;
LAB_004b700c:
    *param_1 = iVar2;
    param_1[1] = (int)&DAT_007dba44;
    param_1[2] = 0x71;
    return;
  }
LAB_004b707c:
  *param_1 = -0x7ffaffea;
  param_1[1] = (int)&DAT_007dba44;
  param_1[2] = 0x71;
  return;
}



void fn_004b6780(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x68) = param_3;
  fn_00170fa4(param_2 + 0x70,param_4);
  *(undefined1 *)(param_2 + 0x78) = param_5;
  *(undefined4 *)(param_2 + 0x8c) = param_6;
  *(undefined4 *)(param_2 + 0x90) = param_7;
  pcVar4 = fn_004b709c;
  uVar5 = 0;
  fn_0013d0fc(&local_30);
  *(undefined4 *)(param_2 + 0x40) = local_30;
  *(undefined4 *)(param_2 + 0x44) = uStack_2c;
  *(code **)(param_2 + 0x50) = pcVar4;
  *(undefined4 *)(param_2 + 0x54) = uVar5;
  *(undefined **)(param_2 + 0x58) = &DAT_007db524;
  *param_1 = 0x10001;
  param_1[1] = &DAT_007dba44;
  param_1[2] = 0x7f;
                    /* WARNING: Could not recover jumptable at 0x004b6840. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_004b709c(int param_1)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 local_30;
  undefined *puStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int local_20 [5];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_30 = 0x80010004;
    puStack_2c = &DAT_007dba44;
    local_28 = 0x71;
    fn_004b6850(param_1,&local_30);
    return;
  }
  fn_004b6900(local_20,param_1);
  if (local_20[0] < 0) {
    fn_004b6850(param_1,local_20);
    return;
  }
  pcVar2 = fn_004b6a88;
  uVar3 = 0;
  fn_0013d0fc(&local_28);
  *(undefined4 *)(param_1 + 0x40) = local_28;
  *(undefined4 *)(param_1 + 0x44) = uStack_24;
  *(code **)(param_1 + 0x50) = pcVar2;
  *(undefined4 *)(param_1 + 0x54) = uVar3;
  *(undefined **)(param_1 + 0x58) = &DAT_004b7160;
  return;
}



void fn_004b6850(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_18;
  int iStack_14;
  int iStack_10;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    local_18 = *param_2;
    iStack_14 = param_2[1];
    iStack_10 = param_2[2];
    if (local_18 < 0) {
      uVar2 = 3;
    }
    else {
      uVar2 = 2;
    }
    fn_00455e8c(iVar1,uVar2,&local_18,1);
  }
  if (*(int **)(param_1 + 0x6c) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x6c) + 4))();
    DAT_008b6460 = DAT_008b6460 + -1;
    if (DAT_008b6464 != (int *)0x0) {
      (**(code **)(*DAT_008b6464 + 0xc))();
    }
    *(undefined4 *)(param_1 + 0x6c) = 0;
  }
  fn_004b301c(param_1,5);
  return;
}



void fn_004b66ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = (undefined4 *)fn_0014f1e0();
  *puVar1 = &DAT_00855aa4;
  iVar2 = fn_004b5404(puVar1 + 3,param_2);
  *(undefined4 *)(iVar2 + 0x24) = param_3;
  iVar2 = fn_004b3294(iVar2 + 0x28);
  iVar2 = fn_00124be8(iVar2 + 0x1c);
  *(undefined1 *)(iVar2 + -0x47) = 0;
  return;
}



void fn_004b6460(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 auStack_368 [8];
  undefined1 auStack_360 [8];
  undefined4 local_358;
  undefined1 auStack_348 [12];
  int local_33c;
  undefined4 uStack_338;
  int local_330;
  undefined1 auStack_320 [488];
  undefined1 auStack_138 [176];
  undefined1 auStack_88 [8];
  undefined4 local_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [32];
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  fn_004bb1c4(auStack_360);
  uVar1 = fn_006d35c8(param_2 + 0x2e4);
  iVar2 = fn_006d370c(param_2 + 0x2e4);
  fn_004baf70(auStack_360,uVar1,iVar2 << 3);
  uVar1 = fn_006d35c8(param_3);
  iVar2 = fn_006d370c(param_3);
  fn_004baf70(auStack_360,uVar1,iVar2 << 3);
  fn_0014ecf0(auStack_320);
  puVar3 = (undefined4 *)fn_0014f1e0(auStack_348);
  *puVar3 = &DAT_00855a18;
  uVar1 = fn_0014f470();
  fn_0014f440(puVar3,uVar1,0);
  fn_0014ec64(auStack_320,local_358,auStack_348);
  fn_0014f24c(auStack_70,local_330 + local_33c,uStack_338);
  fn_0014f480(auStack_348);
  fn_004bb288(auStack_360);
  fn_004bb1c4(auStack_88);
  fn_0014ee88(auStack_138);
  iVar2 = fn_0014f200(auStack_138,auStack_70);
  if (iVar2 == 0) {
    fn_0045af48(auStack_138);
  }
  else {
    fn_004b5404(auStack_58,param_1 + 0xc);
    iVar2 = fn_00480f60(auStack_138,auStack_58);
    if (iVar2 != 0) {
      fn_00468824(auStack_368);
      iVar2 = fn_0048b3d8(auStack_368,auStack_70);
      if (iVar2 != 0) {
        iVar2 = fn_004687a4(auStack_368,auStack_58,local_80);
        fn_00468958(auStack_368);
        fn_0014f480(auStack_58);
        fn_0045af48(auStack_138);
        if (iVar2 == 0) {
          *(undefined1 *)(param_1 + 9) = 1;
          fn_004baf50(auStack_88);
          fn_004bad60(auStack_88,&local_38,8,1);
          local_30 = local_38;
          uStack_2c = uStack_34;
          fn_0014f510(param_1 + 0x50);
          fn_004bad60(auStack_88,param_1 + 0x2c,4,1);
          uVar1 = fn_004b30f0(param_1 + 0x34,0x20);
          fn_004bad6c(auStack_88,uVar1,0x100);
        }
        goto LAB_004b6678;
      }
      fn_00468958(auStack_368);
    }
    fn_0014f480(auStack_58);
    fn_0045af48(auStack_138);
  }
LAB_004b6678:
  fn_004bb288(auStack_88);
  fn_0014f2b0(auStack_70);
  return;
}


