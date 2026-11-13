#include "0023591c_00236450.h"



void fn_00236450(int param_1,short param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_18;
  
  local_18 = param_4;
  local_18 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
  uVar1 = fn_006c0010(&local_18);
  uVar2 = fn_006bfda8(&local_18);
  fn_002364c0(param_1,uVar2,uVar1,param_3);
  fn_00235170(*(int *)(param_1 + 0xa0) + -0x90,1,(int)param_2);
  return;
}



void fn_002363a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 local_b8 [2];
  undefined1 local_af;
  undefined1 auStack_90 [112];
  
  fn_00120aa8(local_b8,0,2);
  local_af = param_5 == 0;
  fn_002354c4(local_b8,0,param_3,param_4);
  fn_00235500(local_b8,param_2);
  local_b8[0] = param_6;
  fn_0023512c(local_b8,param_7);
  fn_0017821c(auStack_90,param_8,100);
  fn_0078b084(param_1 + 0x9c,local_b8);
  fn_0023587c(local_b8);
  return;
}



void fn_0023624c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  int unaff_r11;
  uint local_38;
  undefined4 local_2c;
  uint local_28;
  
  iVar1 = fn_006b3a38(param_1,0);
  iVar2 = fn_006b3a38(param_1,1);
  iVar3 = fn_006b38f4(param_1 + 0x90);
  if (iVar1 + iVar2 < iVar3) {
    iVar3 = fn_006b38f4(param_1 + 0x90);
    local_28 = iVar3 - (iVar1 + iVar2);
    if (local_28 != 0) {
      unaff_r11 = 0x38e38e39;
    }
    uVar9 = 0;
    if (local_28 != 0) {
      do {
        local_2c = fn_006b3af0(param_1);
        uVar4 = fn_006bfda8(&local_2c);
        uVar5 = fn_006c0010(&local_2c);
        iVar1 = fn_006b3a38(param_1,0);
        uVar8 = 0;
        iVar2 = (int)((ulonglong)
                      ((longlong)unaff_r11 *
                      (longlong)(*(int *)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c))) >> 0x20);
        local_38 = (iVar2 >> 5) - (iVar2 >> 0x1f);
        if (local_38 != 0) {
          do {
            piVar7 = *(int **)(param_1 + 0xa0);
            for (piVar6 = *(int **)(param_1 + 0x9c); piVar6 != piVar7; piVar6 = piVar6 + 0x24) {
              iVar2 = fn_006b2ef8(piVar6);
              if ((iVar2 != 0) && (*piVar6 == iVar1 + uVar8)) goto LAB_0023633c;
            }
            piVar6 = piVar7;
LAB_0023633c:
            if (piVar6 == *(int **)(param_1 + 0xa0)) {
              local_38 = uVar8;
              break;
            }
            uVar8 = uVar8 + 1;
            iVar2 = (int)((ulonglong)
                          ((longlong)unaff_r11 *
                          (longlong)((int)*(int **)(param_1 + 0xa0) - *(int *)(param_1 + 0x9c))) >>
                         0x20);
          } while (uVar8 < (uint)((iVar2 >> 5) - (iVar2 >> 0x1f)));
        }
        fn_002364c0(param_1,uVar4,uVar5,local_38);
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_28);
    }
  }
  return;
}



void fn_00236200(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_00236190(undefined4 *param_1)

{
  *param_1 = &DAT_00851994;
  if ((int *)param_1[3] != (int *)0x0) {
    (**(code **)(*(int *)param_1[3] + 4))();
  }
  if (param_1[2] != 0) {
    fn_0023587c();
    fn_002feef8();
  }
  if (param_1[1] != 0) {
    fn_002feef8(param_1[1]);
  }
  fn_002feef8(param_1);
  return;
}



void fn_0023617c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851984;
  return;
}



void fn_00235c3c(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851930;
  return;
}



undefined4 * fn_00235be8(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  *param_1 = &DAT_008518dc;
  uVar1 = param_1[2];
  uVar2 = uVar1;
  if ((uint)param_1[3] < uVar1) {
    do {
      uVar2 = uVar2 + 8;
    } while (uVar2 != param_1[3]);
  }
  fn_001008c4(uVar1,(int)(param_1[4] - uVar1) >> 3,0);
  return param_1;
}



int fn_00235bc8(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = &DAT_008518dc;
  param_1[1] = param_2;
  iVar1 = fn_00235020(param_1 + 2);
  return iVar1 + -8;
}



void fn_00235bb4(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851888;
  return;
}



void fn_00235ba0(undefined4 *param_1,undefined4 param_2)

{
  param_1[1] = param_2;
  *param_1 = &DAT_00851834;
  return;
}



void fn_00235ad0(int param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 8);
  uVar1 = *(uint *)(param_1 + 0x1c);
  uVar2 = *(uint *)(param_1 + 0xc);
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 0x18);
  *(uint *)(param_1 + 0x14) = uVar2;
  *(uint *)(param_1 + 0xc) = uVar1;
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  if ((iVar3 == *(int *)(param_1 + 0x18)) &&
     (((iVar3 == 0 && (((*(byte *)(param_1 + 0x14) | uVar1) & 1) == 0)) || (uVar2 == uVar1)))) {
    iVar3 = *(int *)(param_1 + 0x24) + 1;
  }
  else {
    iVar3 = 0;
  }
  *(int *)(param_1 + 0x24) = iVar3;
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((*(int *)(param_1 + 8) == 0) && ((uVar1 & 1) == 0 || uVar1 == 0)) {
    return;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 8);
  if ((uVar1 & 1) != 0) {
    UNRECOVERED_JUMPTABLE =
         *(code **)(UNRECOVERED_JUMPTABLE + *(int *)(param_1 + ((int)uVar1 >> 1)));
  }
                    /* WARNING: Could not recover jumptable at 0x00235b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



void fn_00235aac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x28) = param_2;
  *(code **)(param_1 + 0x18) = fn_002359d0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  return;
}



undefined4 fn_002359d0(int param_1)

{
  undefined4 local_18;
  
  if (*(int *)(param_1 + 0x24) == 0) {
    local_18 = 0xff000000;
    fn_00163988(DAT_00897808,&local_18,*(undefined4 *)(param_1 + 0x28));
    local_18 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_18,*(undefined4 *)(param_1 + 0x28));
  }
  if ((*(int *)(DAT_00897808 + 0x14) == *(int *)(DAT_00897808 + 0xc)) &&
     (*(int *)(DAT_0089780c + 0x14) == *(int *)(DAT_0089780c + 0xc))) {
    *(code **)(param_1 + 0x18) = fn_00235a64;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 0;
}



bool fn_00235a64(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = *(uint *)(param_1 + 0x24);
  if (2 < uVar1) {
    uVar2 = fn_00615ee4(uVar1);
    fn_0010706c(uVar2,&LAB_006a78b0,2);
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  return 2 < uVar1;
}



bool fn_002359a8(void)

{
  return *(int *)(DAT_00897850 + 0x20) == 9;
}



undefined4 * fn_0023591c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  fn_00235500(param_1,param_2 + 1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)((int)param_1 + 9) = *(undefined1 *)((int)param_2 + 9);
  param_1[3] = param_2[3];
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((int)param_1 + 0x12) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined4 *)((int)param_1 + 0x16) = *(undefined4 *)((int)param_2 + 0x16);
  *(undefined4 *)((int)param_1 + 0x1a) = *(undefined4 *)((int)param_2 + 0x1a);
  *(undefined4 *)((int)param_1 + 0x1e) = *(undefined4 *)((int)param_2 + 0x1e);
  *(undefined2 *)((int)param_1 + 0x22) = *(undefined2 *)((int)param_2 + 0x22);
  param_1[9] = param_2[9];
  fn_0017821c(param_1 + 10,param_2 + 10,100);
  param_1[0x23] = param_2[0x23];
  return param_1;
}


