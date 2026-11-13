#include "004680fc_004688f4b.h"



void fn_004688f4(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)param_1[0x8b];
  *param_1 = &PTR_FUN_00852e9c;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 4))(piVar2);
  }
  *param_1 = &DAT_00853b08;
  iVar1 = fn_0014f2b0(param_1 + 2);
  if (*(code **)(iVar1 + -0x10) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00468944. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -0x10))();
  return;
}



undefined4 * fn_00468824(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 auStack_30 [36];
  
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[2] = &DAT_008558c4;
  param_1[6] = 0;
  param_1[7] = 0;
  *param_1 = &PTR_FUN_00852e9c;
  param_1[8] = 5;
  param_1[9] = 0x40;
  *(undefined1 *)((int)param_1 + 0x22a) = 1;
  iVar1 = fn_0015ece0(0x28);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004745d8(iVar1,0x20000000);
  }
  param_1[0x8b] = uVar2;
  local_38 = 0x43;
  local_37 = 0x44;
  local_36 = 0x26;
  local_35 = 0x4d;
  local_34 = 0x4c;
  fn_0014f24c(auStack_30,&local_38,5);
  fn_0048b3d8(param_1,auStack_30);
  fn_0014f2b0(auStack_30);
  return param_1;
}



undefined4 fn_004687f4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_004b5540(param_3);
  (**(code **)(*param_1 + 0xc))(param_1,param_3);
  return 0;
}



undefined4 fn_004687d4(undefined4 param_1,int param_2)

{
  fn_004686ac(param_1,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(undefined4 *)(param_2 + 0x10));
  return 0;
}



undefined4 fn_004687a4(int *param_1,undefined4 param_2,undefined4 param_3)

{
  fn_004b5540(param_3);
  (**(code **)(*param_1 + 0x14))(param_1,param_3);
  return 0;
}



void fn_004686ac(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  piVar2 = *(int **)(param_1 + 0x22c);
  (**(code **)(*piVar2 + 8))();
  if (*(int *)(param_1 + 0x18) != *(int *)(param_1 + 0x14)) {
    if (*(char *)(param_1 + 0x22a) != '\0') {
      *(undefined1 *)(param_1 + 0x229) = 0;
      *(undefined1 *)(param_1 + 0x228) = 0;
      fn_0017821c(param_1 + 0x128,param_1 + 0x28,0x100);
    }
    uVar4 = (uint)*(byte *)(param_1 + 0x228);
    uVar5 = (uint)*(byte *)(param_1 + 0x229);
    for (; param_3 != 0; param_3 = param_3 + -1) {
      uVar4 = uVar4 + 1 & 0xff;
      iVar3 = param_1 + uVar4;
      bVar1 = *(byte *)(iVar3 + 0x128);
      uVar5 = bVar1 + uVar5 & 0xff;
      *(undefined1 *)(iVar3 + 0x128) = *(undefined1 *)(param_1 + uVar5 + 0x128);
      *(byte *)(param_1 + uVar5 + 0x128) = bVar1;
      *param_2 = *(byte *)(((uint)*(byte *)(iVar3 + 0x128) + (uint)bVar1 & 0xff) + param_1 + 0x128)
                 ^ *param_2;
      param_2 = param_2 + 1;
    }
    *(char *)(param_1 + 0x228) = (char)uVar4;
    *(char *)(param_1 + 0x229) = (char)uVar5;
  }
                    /* WARNING: Could not recover jumptable at 0x004686ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0xc))(piVar2);
  return;
}


