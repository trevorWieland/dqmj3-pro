#include "004bb58c_004bc4e4a.h"



void fn_004bb58c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 uVar8;
  bool bVar9;
  undefined4 uVar10;
  undefined1 auStack_34 [4];
  undefined *local_30;
  code *pcStack_2c;
  undefined4 uStack_28;
  undefined *puStack_24;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  uVar8 = 0;
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_2);
  if (iVar2 != 0) {
    piVar4 = *(int **)(param_1 + 0x120);
    if (piVar4 != (int *)0x0) {
      if (*(char *)((int)piVar4 + 0x22) != '\x05') goto LAB_004bb5f8;
      puVar7 = (uint *)(piVar4 + 1);
      do {
        uVar6 = *puVar7 - 1;
        bVar9 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar9);
      *puVar7 = uVar6;
      bVar9 = uVar6 == 0;
      if (bVar9) {
        uVar6 = (uint)*(byte *)(piVar4 + 2);
      }
      if (bVar9 && uVar6 == 0) {
        *(undefined1 *)(piVar4 + 2) = 1;
        (**(code **)(*piVar4 + 4))();
      }
      *(undefined4 *)(param_1 + 0x120) = 0;
    }
    iVar2 = fn_0015ecdc(0xd0);
    if (iVar2 == 0) {
      iVar2 = 0;
    }
    else {
      uVar10 = *(undefined4 *)(param_2 + 0x44);
      puVar5 = (undefined4 *)fn_00479cd8(iVar2,2,auStack_34);
      *puVar5 = &DAT_00852ae8;
      iVar1 = fn_004565fc(puVar5 + 0x1c);
      *(int *)(iVar1 + -8) = param_1;
      iVar2 = iVar1 + -0x70;
      *(undefined4 *)(iVar1 + -4) = uVar10;
      *(undefined4 *)(iVar1 + -0x10) = 0x1000;
      *(undefined4 *)(iVar1 + -0xc) = 0;
      pcStack_2c = fn_0045b4d0;
      uStack_28 = 0;
      local_30 = &DAT_00853500;
      puStack_24 = &DAT_007d94a0;
      fn_00479c98(iVar2,&local_30);
    }
    piVar4 = (int *)(iVar2 + 4);
    *(int *)(param_1 + 0x120) = iVar2;
    do {
      bVar9 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar9);
    *piVar4 = *piVar4 + 1;
    iVar2 = fn_001249d0();
    if (iVar2 != 0) {
      uVar8 = *(undefined4 *)(iVar2 + 0xc);
    }
    fn_004bdba4(uVar8,*(undefined4 *)(param_1 + 0x120),0);
  }
LAB_004bb5f8:
                    /* WARNING: Could not recover jumptable at 0x004bb610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}


