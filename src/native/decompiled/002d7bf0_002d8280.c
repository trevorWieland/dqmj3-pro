#include "002d7bf0_002d8280.h"

static void svc_0xa(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0xa }
#endif
}


void fn_002d8280(int param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == 0) {
    return;
  }
  if (DAT_0089a508 == '\0') {
    return;
  }
  iVar1 = fn_00124ffc();
  fn_0014e774(*(undefined4 *)(iVar1 + 4),param_1);
  piVar2 = (int *)fn_00124ffc();
                    /* WARNING: Could not recover jumptable at 0x00143b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2,param_1);
  return;
}



bool fn_002d8258(int param_1)

{
  int iVar1;
  
  svc_0xa();
  iVar1 = fn_00145aac(*(undefined4 *)(param_1 + 8),0);
  return iVar1 != 0;
}



void fn_002d8248(int param_1)

{
  fn_0012a26c(*(undefined4 *)(param_1 + 8));
  return;
}



bool fn_002d81fc(int param_1)

{
  int iVar1;
  
  iVar1 = fn_0011c1b4(*(undefined4 *)(param_1 + 4),0,0,0,0,0,0,0,5);
  *(int *)(param_1 + 8) = iVar1;
  return iVar1 != 0;
}



void fn_002d81e0(int param_1)

{
  fn_0012d73c(*(undefined4 *)(param_1 + 8));
  *(undefined4 *)(param_1 + 8) = 0;
  return;
}



void fn_002d81b8(void)

{
  DAT_008924f8 = 0;
  DAT_008924fc = 0;
  return;
}



int fn_002d81a0(int param_1)

{
  return (int)*(short *)(DAT_008924f8 + param_1 * 2);
}



void fn_002d80cc(undefined4 *param_1)

{
  *param_1 = &DAT_008201f8;
  if ((int *)param_1[7] != (int *)0x0) {
    (**(code **)(*(int *)param_1[7] + 4))();
  }
  fn_002cb3ec(param_1);
  fn_002feef8();
  return;
}



void fn_002d8094(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002cb3c0();
  *puVar1 = &DAT_008201f8;
  puVar1[7] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined1 *)(puVar1 + 0xc) = 0;
  *(undefined1 *)((int)puVar1 + 0x31) = 0;
  return;
}



void fn_002d8084(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x002d8090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x18))();
  return;
}



undefined4 fn_002d805c(int param_1)

{
  fn_002caccc();
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return 0;
}



void fn_002d8038(int param_1)

{
  fn_002caccc();
                    /* WARNING: Could not recover jumptable at 0x002d8058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



void fn_002d7e20(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x24) = param_3;
  *(undefined4 *)(param_1 + 0x28) = param_4;
  *(undefined4 *)(param_1 + 0x2c) = param_5;
  *(undefined1 *)(param_1 + 0x30) = 0;
  *(undefined1 *)(param_1 + 0x31) = 0;
  iVar1 = fn_00145b00(0x28,&DAT_00812c8c,param_3,param_4,param_4);
  piVar2 = (int *)0x0;
  if (iVar1 != 0) {
    piVar2 = (int *)fn_002e4578(iVar1,*(undefined4 *)(param_1 + 0x24),
                                 *(undefined4 *)(param_1 + 0x2c),0,*(undefined4 *)(param_1 + 0x28));
  }
  piVar3 = *(int **)(param_1 + 0x1c);
  if (piVar3 != piVar2) {
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 4))(piVar3);
    }
    *(int **)(param_1 + 0x1c) = piVar2;
  }
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x002d7ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 0x1c) + 0x20))(*(int **)(param_1 + 0x1c),0);
  return;
}



undefined * fn_002d7e10(int param_1)

{
  return (&PTR_DAT_008992b0)[param_1];
}



undefined4 fn_002d7e00(int param_1)

{
  return *(undefined4 *)(&DAT_008992d4 + param_1 * 4);
}



void fn_002d7db4(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  if (param_3 == param_4) {
    *param_1 = param_4;
    *param_2 = 2;
  }
  else {
    if (param_3 == 1) {
      *param_1 = param_4;
      *param_2 = 1;
      return;
    }
    if (param_4 == 8) {
      *param_1 = param_3;
      *param_2 = 0;
      return;
    }
  }
  return;
}



void fn_002d7bf0(int param_1,int param_2)

{
  char *pcVar1;
  undefined4 *puVar2;
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
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  if (param_1 == param_2) {
    if (0x77 < param_2) {
      fn_0022f750((char *)&DAT_002d7d98);
      return;
    }
    local_88 = 0;
    local_7c = 0;
    local_84 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_68 = 0;
    local_70 = 0;
    local_6c = 0;
    local_64 = 0;
    local_60 = 0;
    local_54 = 0;
    local_5c = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    fn_0018a618(&local_88,0x20,0x1f,&DAT_002d7d78,param_2);
    fn_0015b0dc(&local_88);
    pcVar1 = (char *)&DAT_002d7d80;
  }
  else {
    local_7c = 0;
    local_88 = 0;
    local_84 = 0;
    local_68 = 0;
    local_80 = 0;
    local_78 = 0;
    local_74 = 0;
    local_70 = 0;
    local_54 = 0;
    local_6c = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_40 = 0;
    local_58 = 0;
    local_50 = 0;
    local_4c = 0;
    local_48 = 0;
    local_2c = 0;
    local_44 = 0;
    local_3c = 0;
    local_38 = 0;
    local_34 = 0;
    local_18 = 0;
    local_30 = 0;
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    local_1c = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    fn_0018a618(&local_88,0x20,0x1f,&DAT_002d7d78,param_1);
    fn_0015b0dc(&local_88);
    if (param_2 < 0x78) {
      fn_0018a618(&local_48,0x20,0x1f,&DAT_002d7d78,param_2);
      puVar2 = &local_48;
    }
    else {
      puVar2 = (undefined4 *)fn_0022f750((char *)&DAT_002d7d98);
    }
    fn_0015b0dc(puVar2);
    pcVar1 = (char *)&DAT_002d7da8;
  }
  fn_0022f750(pcVar1);
  return;
}


