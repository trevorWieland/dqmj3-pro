#include "0048be70_0048c3a4ab.h"



void fn_0048bfc0(int param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 extraout_r1;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined8 uVar9;
  
  (**(code **)(DAT_008e76e8 + 8))();
  if (*(int *)(param_1 + 0x24) != 0) goto LAB_0048c0fc;
  (**(code **)(DAT_008e76e8 + 8))();
  cVar1 = *(char *)(DAT_008b63dc + 0x18c);
  (**(code **)(DAT_008e76e8 + 0xc))(&DAT_008e76e8);
  if ((cVar1 == '\0') || (iVar2 = fn_0048c29c(), iVar2 == 0)) goto LAB_0048c0fc;
  uVar9 = fn_004b7748();
  uVar5 = (undefined4)((ulonglong)uVar9 >> 0x20);
  iVar2 = (int)uVar9;
  piVar3 = (int *)0x0;
  if (iVar2 != 0) {
    piVar3 = *(int **)(iVar2 + 0x90);
  }
  if (iVar2 != 0 && piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 0x3c))();
    uVar5 = extraout_r1;
  }
  fn_0048be70(param_1,uVar5,&DAT_00801000,0x80);
  piVar3 = *(int **)(param_1 + 0x3c);
  if (piVar3 != (int *)0x0) {
    if ((char)piVar3[3] != '\0') {
      uVar6 = piVar3[1];
      *(undefined1 *)(piVar3 + 3) = 0;
      if (uVar6 != 0) {
        uVar4 = uVar6 & 1;
        if (uVar4 == 1) {
          *(undefined4 *)(*piVar3 + 0x10) = 0;
        }
        for (; uVar4 < uVar6; uVar4 = uVar4 + 2) {
          *(undefined4 *)(*piVar3 + uVar4 * 0x34 + 0x10) = 0;
          *(undefined4 *)(*piVar3 + uVar4 * 0x34 + 0x44) = 0;
        }
      }
      iVar2 = *piVar3;
      bVar8 = iVar2 == 0;
      if (!bVar8) {
        iVar2 = iVar2 + -8;
        bVar8 = iVar2 == 0;
      }
      if (!bVar8) {
        if (*(code **)(iVar2 + -8) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar2 + -8))();
        }
      }
      *piVar3 = 0;
      if ((int *)piVar3[4] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[4] + 4))();
        piVar3[4] = 0;
      }
      if (*(int *)(param_1 + 0x3c) == 0) goto LAB_0048c168;
    }
    pcVar7 = *(code **)(*(int *)(param_1 + 0x3c) + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar7)();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
LAB_0048c168:
  piVar3 = *(int **)(param_1 + 0x38);
  if (piVar3 != (int *)0x0) {
    if ((char)piVar3[3] != '\0') {
      uVar6 = piVar3[1];
      *(undefined1 *)(piVar3 + 3) = 0;
      if (uVar6 != 0) {
        uVar4 = uVar6 & 1;
        if (uVar4 == 1) {
          *(undefined4 *)(*piVar3 + 0x10) = 0;
        }
        for (; uVar4 < uVar6; uVar4 = uVar4 + 2) {
          *(undefined4 *)(*piVar3 + uVar4 * 0x34 + 0x10) = 0;
          *(undefined4 *)(uVar4 * 0x34 + *piVar3 + 0x44) = 0;
        }
      }
      iVar2 = *piVar3;
      bVar8 = iVar2 == 0;
      if (!bVar8) {
        iVar2 = iVar2 + -8;
        bVar8 = iVar2 == 0;
      }
      if (!bVar8) {
        if (*(code **)(iVar2 + -8) == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (**(code **)(iVar2 + -8))();
        }
      }
      *piVar3 = 0;
      if ((int *)piVar3[4] != (int *)0x0) {
        (**(code **)(*(int *)piVar3[4] + 4))();
        piVar3[4] = 0;
      }
      if (*(int *)(param_1 + 0x38) == 0) goto LAB_0048c254;
    }
    pcVar7 = *(code **)(*(int *)(param_1 + 0x38) + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar7)();
    }
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
LAB_0048c254:
  if (*(int *)(param_1 + 0x1c) != 0) {
    pcVar7 = *(code **)(*(int *)(param_1 + 0x1c) + -8);
    if (pcVar7 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar7)();
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 0x34) = 0;
LAB_0048c0fc:
                    /* WARNING: Could not recover jumptable at 0x0048c10c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(DAT_008e76e8 + 0xc))(&DAT_008e76e8);
  return;
}


