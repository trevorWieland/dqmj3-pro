#include "00688aa0_006890bc.h"



void fn_006890bc(int param_1)

{
  uint in_fpscr;
  float fVar1;
  
  if (0 < *(int *)(param_1 + 0x1c)) {
    fVar1 = (float)VectorSignedToFloat(*(undefined4 *)(param_1 + 0x1c),(byte)(in_fpscr >> 0x16) & 3)
    ;
    fVar1 = 1.0 / fVar1;
    *(float *)(param_1 + 4) =
         *(float *)(param_1 + 4) + (*(float *)(param_1 + 0x10) - *(float *)(param_1 + 4)) * fVar1;
    *(float *)(param_1 + 8) =
         *(float *)(param_1 + 8) + (*(float *)(param_1 + 0x14) - *(float *)(param_1 + 8)) * fVar1;
    *(float *)(param_1 + 0xc) =
         *(float *)(param_1 + 0xc) +
         (*(float *)(param_1 + 0x18) - *(float *)(param_1 + 0xc)) * fVar1;
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  return;
}



void fn_006890a0(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  *(undefined4 *)(param_1 + 4) = *param_2;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = uVar2;
  *(undefined4 *)(param_1 + 0x1c) = param_4;
  return;
}



void fn_00689080(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_008981b4;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = DAT_008981b4;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_00689030(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  param_1 = param_1 + param_2 * 0x14;
  *(byte *)(*(int *)(param_1 + 0xe4) + 0x44) =
       *(byte *)(*(int *)(param_1 + 0xe4) + 0x44) & 0xfe | (byte)param_3;
  *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) =
       (byte)param_3 ^ 1 | *(byte *)(*(int *)(param_1 + 0xe8) + 0x44) & 0xfe;
  uVar1 = DAT_008981b4;
  iVar2 = *(int *)(param_1 + 0xf0);
  if (param_3 != 0) {
    fn_00688fd8();
    return;
  }
  if (iVar2 != 0) {
    *(undefined4 *)(iVar2 + 0xac) = DAT_008981b4;
    *(undefined4 *)(iVar2 + 0xb0) = uVar1;
  }
  return;
}



void fn_00688ff8(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 0xc); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
  }
  return;
}



void fn_00688e80(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_008981bc;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = DAT_008981bc;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_00688e60(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = DAT_008981b8;
  if (param_1 != 0) {
    *(undefined4 *)(param_1 + 0xac) = DAT_008981b8;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_00688d5c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  float in_s0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_8c = 0;
  local_98 = 0;
  local_78 = 0;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0;
  local_84 = 0;
  local_64 = 0;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_60 = 0;
  local_5c = 0;
  fn_0018a618(&local_98,0x20,0x1f,L"%%.%df",param_2);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  fn_0018a618(&local_58,0x20,0x1f,&local_98,(double)in_s0);
  iVar1 = fn_00100b58(&local_58);
  fn_00190d78(param_1,&local_58,iVar1 + 1);
  return;
}



void fn_00688d44(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *param_2;
    *(undefined4 *)(param_1 + 0xac) = uVar1;
    *(undefined4 *)(param_1 + 0xb0) = uVar1;
  }
  return;
}



void fn_00688bf4(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  piVar1 = *(int **)(*param_1 + 0xc);
  if (piVar1 == (int *)0x0) {
    return;
  }
  uStack_3c = 0;
  uStack_48 = 0;
  uStack_28 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_14 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  uStack_10 = 0;
  uStack_c = 0;
  fn_0018a618(&uStack_48,0x20,0x1f,L"%05d",param_2);
  iVar2 = fn_00100b58(&uStack_48);
  (**(code **)(*piVar1 + 0x58))(piVar1,(iVar2 + 1U & 0x7fff) << 1,0);
  (**(code **)(*piVar1 + 0x68))(piVar1,&uStack_48,0);
  return;
}



void fn_00688ad4(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_1 == 0 || param_2 == 0) {
    return;
  }
  piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x10) + 0x2c))
                            (*(int **)(param_1 + 0x10),param_2,1);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 8))(piVar1);
    do {
      if (puVar2 == &DAT_0089a930) goto LAB_00688b3c;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00688b3c:
  if (piVar1 != (int *)0x0) {
    local_58 = 0;
    local_4c = 0;
    local_54 = 0;
    local_50 = 0;
    local_48 = 0;
    local_44 = 0;
    local_38 = 0;
    local_40 = 0;
    local_3c = 0;
    local_34 = 0;
    local_30 = 0;
    local_24 = 0;
    local_2c = 0;
    local_28 = 0;
    local_20 = 0;
    local_1c = 0;
    fn_0018a618(&local_58,0x20,0x1f,(&PTR_DAT_007ce734)[param_4],param_3);
    iVar3 = fn_00100b58(&local_58);
    (**(code **)(*piVar1 + 0x58))(piVar1,(iVar3 + 1U & 0x7fff) << 1,0);
    (**(code **)(*piVar1 + 0x68))(piVar1,&local_58,0);
  }
  return;
}



void fn_00688aa0(int *param_1,undefined4 param_2)

{
  (**(code **)(*param_1 + 0x5c))(param_1);
                    /* WARNING: Could not recover jumptable at 0x00688ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1,param_2);
  return;
}


