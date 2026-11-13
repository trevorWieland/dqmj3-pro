#include "004b72ec_004b78a0.h"



void fn_004b78a0(void)

{
  int *piVar1;
  uint uVar2;
  uint *puVar3;
  bool bVar4;
  
  piVar1 = (int *)fn_004b7748();
  puVar3 = (uint *)(piVar1 + 1);
  do {
    uVar2 = *puVar3 - 1;
    bVar4 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar4);
  *puVar3 = uVar2;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)*(byte *)(piVar1 + 2);
  }
  if (bVar4 && uVar2 == 0) {
    *(undefined1 *)(piVar1 + 2) = 1;
                    /* WARNING: Could not recover jumptable at 0x004b78e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 4))();
    return;
  }
  return;
}



undefined4 fn_004b7748(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  undefined4 in_r3;
  undefined4 local_10;
  
  iVar7 = DAT_008b63d8;
  uVar2 = 0;
  local_10 = in_r3;
  if (DAT_008b637e != '\0') {
    piVar1 = (int *)(DAT_008b63d8 + 0x10);
    (**(code **)(*(int *)(DAT_008b63d8 + 0x10) + 8))();
    uVar2 = fn_0013d1a8();
    iVar8 = *(int *)(iVar7 + 0x48);
    iVar4 = iVar8;
    iVar3 = *(int *)(iVar8 + 4);
    while (iVar3 != 0) {
      if (*(uint *)(iVar3 + 0x10) < uVar2) {
        iVar3 = *(int *)(iVar3 + 0xc);
      }
      else {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar3 + 8);
      }
    }
    if ((iVar4 == iVar8) || (uVar2 < *(uint *)(iVar4 + 0x10))) {
      iVar4 = iVar8;
    }
    if (iVar4 == *(int *)(iVar7 + 0x48)) {
      local_10 = fn_0013d1a8();
      puVar5 = (undefined4 *)fn_00147a40(iVar7 + 0x38,&local_10);
      *puVar5 = *(undefined4 *)(iVar7 + 0xc);
      local_10 = fn_0013d1a8();
      puVar6 = (uint *)fn_00147a40(iVar7 + 0x38,&local_10);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    else {
      puVar6 = (uint *)(iVar4 + 0x14);
      (**(code **)(*piVar1 + 0xc))(piVar1);
    }
    uVar2 = *puVar6;
  }
  if (uVar2 == 0) {
    puVar5 = &DAT_008e76a0;
  }
  else {
    if ((uint)(DAT_008e76e4[1] - *DAT_008e76e4 >> 2) <= uVar2) {
      fn_0015ebe4(L"c:\\PiaDevelopEnv\\CTRNEX\\CTR_NEX3.10.1-S1150\\include\\OnlineCore/src/Core/InstanceTable.h"
                   ,0x48,0xe0000003,0);
      iVar7 = -1;
      goto LAB_004b7878;
    }
    puVar5 = *(undefined4 **)(*DAT_008e76e4 + uVar2 * 4);
  }
  iVar7 = puVar5[2];
  if (iVar7 == 0) {
    return 0;
  }
LAB_004b7878:
  return *(undefined4 *)(iVar7 + 0xc);
}



void fn_004b755c(int param_1,int param_2)

{
  ushort uVar1;
  ushort uVar2;
  undefined *puVar3;
  bool bVar4;
  int iVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  undefined1 auStack_30 [4];
  undefined *local_2c;
  undefined1 auStack_28 [4];
  undefined *local_24;
  
  piVar9 = (int *)(param_1 + 0x50);
  (**(code **)(*(int *)(param_1 + 0x50) + 8))(piVar9);
  piVar7 = (int *)**(int **)(param_1 + 0x88);
  if (piVar7 != *(int **)(param_1 + 0x88)) {
    do {
      fn_006d0734(auStack_30,piVar7 + 2);
      fn_006d0734(auStack_28,param_2);
      if (local_2c == local_24) {
LAB_004b75f4:
        if ((char)piVar7[0x1b] == '\0') {
          fn_0014ea80(piVar7 + 2);
        }
        uVar1 = *(ushort *)(piVar7[3] + 6);
        if (*(char *)(param_2 + 100) == '\0') {
          fn_0014ea80(param_2);
        }
        uVar2 = *(ushort *)(*(int *)(param_2 + 4) + 6);
        if ((ushort)(uVar1 << 8 | uVar1 >> 8) != (ushort)(uVar2 << 8 | uVar2 >> 8))
        goto LAB_004b7640;
        bVar4 = true;
      }
      else {
        if (local_2c == (undefined *)0x0) {
          puVar6 = local_24;
          puVar3 = &DAT_007db524;
LAB_004b75e8:
          iVar5 = fn_004b626c(puVar3,puVar6);
          if (iVar5 != 0) goto LAB_004b75f4;
        }
        else {
          if (local_24 == (undefined *)0x0) {
            puVar6 = &DAT_007db524;
            puVar3 = local_2c;
            goto LAB_004b75e8;
          }
          iVar5 = fn_00101d80();
          if (iVar5 == 0) goto LAB_004b75f4;
        }
LAB_004b7640:
        bVar4 = false;
      }
      fn_00170f54(auStack_28);
      fn_00170f54(auStack_30);
      if (bVar4) {
        (**(code **)(*piVar9 + 0xc))(piVar9);
        return;
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(param_1 + 0x88));
  }
  piVar7 = (int *)(param_1 + 0x50);
  (**(code **)(*piVar7 + 8))();
  piVar8 = *(int **)(param_1 + 0x7c);
  iVar5 = *(int *)(param_1 + 0x88);
  if (piVar8 == (int *)0x0) {
    if (*(int *)(param_1 + 0x80) == *(int *)(param_1 + 0x84)) {
      fn_0078638c(param_1 + 0x78);
    }
    piVar8 = *(int **)(param_1 + 0x80);
    *(int **)(param_1 + 0x80) = piVar8 + 0x1c;
  }
  else {
    *(int *)(param_1 + 0x7c) = *piVar8;
  }
  if (piVar8 + 2 != (int *)0x0) {
    fn_0013cd7c(piVar8 + 2,param_2);
  }
  *piVar8 = iVar5;
  piVar8[1] = *(int *)(iVar5 + 4);
  **(undefined4 **)(iVar5 + 4) = piVar8;
  *(int **)(iVar5 + 4) = piVar8;
  *(int *)(param_1 + 0x8c) = *(int *)(param_1 + 0x8c) + 1;
  (**(code **)(*piVar7 + 0xc))(piVar7);
                    /* WARNING: Could not recover jumptable at 0x004b7740. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar9 + 0xc))(piVar9);
  return;
}



void fn_004b7520(undefined4 *param_1)

{
  *param_1 = &DAT_00855b74;
  if (param_1[0xd] != 0) {
    (**(code **)(**(int **)(param_1[0xd] + 4) + 0x40))();
  }
  fn_00454d0c(param_1);
  return;
}



void fn_004b74cc(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &DAT_00855b74;
  if (param_1[0xd] != 0) {
    (**(code **)(**(int **)(param_1[0xd] + 4) + 0x40))();
  }
  iVar1 = fn_00454d0c(param_1);
  if (*(code **)(iVar1 + -8) == (code *)0x0) {
    fn_0030233c();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x004b7510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + -8))();
  return;
}



undefined4 * fn_004b73b0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_00852740;
  iVar1 = fn_0015ece0(0x20);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_004b54dc();
  }
  param_1[2] = uVar2;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_00855b74;
  param_1[3] = 0;
  param_1[4] = &DAT_80010001;
  param_1[6] = 0x6a;
  param_1[5] = &DAT_007dba44;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  iVar1 = param_1[2];
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  iVar1 = param_1[2];
  if (3 < (uint)(*(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18))) {
    *(undefined4 *)(iVar1 + 0x10) = 4;
  }
  fn_004b7268(param_1);
  if (3 < *(uint *)(param_1[2] + 0x10)) {
    param_1[3] = 4;
  }
  param_1[4] = 0x10001;
  param_1[5] = &DAT_007dba44;
  param_1[6] = 0x71;
  if (3 < *(uint *)(param_1[2] + 0x10)) {
    param_1[3] = 4;
  }
  return param_1;
}



void fn_004b72ec(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  
  param_1[2] = param_2;
  piVar2 = (int *)(param_2 + 4);
  *param_1 = &DAT_00852740;
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = *piVar2 + 1;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0;
  *param_1 = &DAT_00855b74;
  param_1[4] = &DAT_80010001;
  param_1[6] = 0x6a;
  param_1[5] = &DAT_007dba44;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  *(undefined1 *)((int)param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0x3b) = 0;
  *(undefined1 *)((int)param_1 + 0x39) = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = 0;
  *(undefined1 *)(param_1 + 0xe) = 0;
  param_1[4] = 0x10001;
  param_1[5] = &DAT_007dba44;
  param_1[6] = 0x71;
  if (3 < *(uint *)(param_1[2] + 0x10)) {
    param_1[3] = 4;
  }
  return;
}


