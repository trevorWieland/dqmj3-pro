#include "0046aadc_0046af48b.h"



void fn_0046af18(void)

{
  int iVar1;
  
  iVar1 = fn_0046af48();
  if (iVar1 == 0) {
    return;
  }
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0046af38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_0046af48(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int *piVar4;
  int local_18;
  int local_14;
  undefined1 auStack_10 [4];
  
  *param_1 = &PTR_FUN_00852f50;
  piVar4 = param_1 + 0x1f;
  local_14 = param_1[0x23];
  if (local_14 != 0) {
    local_18 = *(int *)(local_14 + 8);
    fn_007654a4(auStack_10,piVar4,&local_18,&local_14);
    iVar1 = param_1[0x23];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x20];
    param_1[0x20] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  param_1[0x13] = &PTR_LAB_008533fc;
  param_1[0x14] = &DAT_0085319c;
  piVar4 = param_1 + 9;
  local_14 = param_1[0xd];
  if (local_14 != 0) {
    local_18 = *(int *)(local_14 + 8);
    fn_00766050(auStack_10,piVar4,&local_18,&local_14);
    iVar1 = param_1[0xd];
    *(undefined4 *)(iVar1 + 0xc) = param_1[10];
    param_1[10] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  piVar4 = param_1 + 2;
  local_18 = param_1[6];
  if (local_18 != 0) {
    local_14 = *(int *)(local_18 + 8);
    fn_0076fbfc(auStack_10,piVar4,&local_14,&local_18);
    iVar1 = param_1[6];
    *(undefined4 *)(iVar1 + 0xc) = param_1[3];
    param_1[3] = iVar1;
    piVar2 = (int *)*piVar4;
    while (piVar2 != (int *)0x0) {
      *piVar4 = *piVar2;
      if (piVar2[2] != 0) {
        pcVar3 = *(code **)(piVar2[2] + -8);
        if (pcVar3 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar3)();
        }
      }
      if (piVar2 != (int *)0x0) {
        if ((code *)piVar2[-2] == (code *)0x0) {
          fn_0030233c(piVar2 + -2);
        }
        else {
          (*(code *)piVar2[-2])();
        }
      }
      piVar2 = (int *)*piVar4;
    }
  }
  return param_1;
}



void fn_0046ad80(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 *puVar3;
  int iVar4;
  int *piVar5;
  
  *param_1 = &DAT_00855a78;
  *(undefined1 *)(param_1 + 1) = 8;
  iVar1 = fn_004b616c();
  *(uint *)(iVar1 + 4) = (uint)*(byte *)(param_1 + 1);
  piVar5 = param_1 + 2;
  *param_1 = &PTR_FUN_00852f50;
  *piVar5 = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)((int)param_1 + 0x21) = 0x50;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[3] = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar1 = fn_0015ece0(0xb00);
  piVar2[2] = iVar1;
  *piVar2 = *piVar5;
  piVar2[1] = 0x20;
  *piVar5 = (int)piVar2;
  iVar1 = piVar2[2];
  param_1[4] = iVar1;
  param_1[5] = iVar1 + 0xb00;
  puVar3 = (undefined1 *)param_1[4];
  param_1[4] = puVar3 + 0x58;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[6] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[6] + 8) = param_1[6];
  iVar1 = param_1[6];
  *(int *)(iVar1 + 0xc) = iVar1;
  piVar5 = param_1 + 9;
  *piVar5 = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(char *)((int)param_1 + 0x3d) = (char)iVar1;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  piVar2 = (int *)fn_0015ece0(0xc);
  iVar1 = fn_0015ece0(0x700);
  piVar2[2] = iVar1;
  *piVar2 = *piVar5;
  piVar2[1] = 0x20;
  *piVar5 = (int)piVar2;
  iVar1 = piVar2[2];
  param_1[0xb] = iVar1;
  param_1[0xc] = iVar1 + 0x700;
  puVar3 = (undefined1 *)param_1[0xb];
  param_1[0xb] = puVar3 + 0x38;
  *(undefined4 *)(puVar3 + 8) = 0;
  *(undefined4 *)(puVar3 + 0xc) = 0;
  *puVar3 = 0;
  param_1[0xd] = puVar3;
  *(undefined4 *)(puVar3 + 4) = 0;
  *(undefined4 *)(param_1[0xd] + 8) = param_1[0xd];
  *(undefined4 *)(param_1[0xd] + 0xc) = param_1[0xd];
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  iVar1 = fn_004745d8(param_1 + 0x13,1);
  iVar4 = fn_004b616c(1);
  iVar1 = fn_0045e880(iVar1 + 0x2c,*(int *)(iVar4 + 0x6c) * 3);
  *(undefined4 *)(iVar1 + 0x30) = 0;
  *(undefined4 *)(iVar1 + -0x38) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0;
  *(undefined4 *)(iVar1 + -0x34) = 0;
  return;
}


