#include "0050c53c_0050c848.h"



undefined1 * fn_0050c848(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x18) == '\0') {
    puVar1 = &DAT_e0a14827;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x14);
    piVar3 = (int *)(*(int *)(param_1 + 0xc) - iVar2);
    while( true ) {
      if (piVar3 == (int *)((param_1 - iVar2) + 8)) {
        return (undefined1 *)0x0;
      }
      puVar1 = (undefined1 *)(**(code **)(*piVar3 + 0x10))(piVar3,param_2);
      if ((int)puVar1 < 0) break;
      piVar3 = (int *)(*(int *)((int)piVar3 + *(int *)(param_1 + 0x14) + 4) -
                      *(int *)(param_1 + 0x14));
    }
    iVar2 = *(int *)(param_1 + 0x14);
    for (piVar3 = (int *)(*(int *)(param_1 + 0xc) - iVar2); piVar3 != (int *)((param_1 - iVar2) + 8)
        ; piVar3 = (int *)(*(int *)((int)piVar3 + *(int *)(param_1 + 0x14) + 4) -
                          *(int *)(param_1 + 0x14))) {
      (**(code **)(*piVar3 + 0x14))(piVar3);
    }
  }
  return puVar1;
}



void fn_0050c7f0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)(param_1 + 0x14);
  for (piVar2 = (int *)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14));
      piVar2 != (int *)((param_1 - iVar1) + 8);
      piVar2 = (int *)(*(int *)((int)piVar2 + *(int *)(param_1 + 0x14) + 4) -
                      *(int *)(param_1 + 0x14))) {
    (**(code **)(*piVar2 + 0x14))(piVar2);
  }
  return;
}



void fn_0050c738(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(*(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14));
  while( true ) {
    if (piVar2 == (int *)((param_1 - *(int *)(param_1 + 0x14)) + 8)) {
      return;
    }
    if (piVar2[3] == param_2) break;
    piVar2 = (int *)(*(int *)((int)piVar2 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)
                    );
  }
  iVar1 = (**(code **)(*piVar2 + 0x20))(piVar2);
  if (iVar1 == 0) {
    fn_0051c4e4(DAT_008c0680,(uint)piVar2[3] >> 0x10);
  }
  fn_004f0c1c(param_1 + 4,*(int *)(param_1 + 0x14) + (int)piVar2);
  if (piVar2 == (int *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0050c7cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 4))(piVar2);
  return;
}



int fn_0050c6d8(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_2 >> 0x10 == param_3) {
    for (iVar1 = *(int *)(param_1 + 0xc) - *(int *)(param_1 + 0x14);
        iVar1 != (param_1 - *(int *)(param_1 + 0x14)) + 8;
        iVar1 = *(int *)(iVar1 + *(int *)(param_1 + 0x14) + 4) - *(int *)(param_1 + 0x14)) {
      if (*(uint *)(iVar1 + 0xc) == param_2) {
        return iVar1;
      }
    }
  }
  return 0;
}



undefined4 fn_0050c67c(int param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 0;
  return 0;
}



int fn_0050c5fc(int param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_r1;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x10);
  if (iVar4 != 0) {
    uVar1 = fn_00656b0c(iVar4);
    uVar3 = 0;
    iVar2 = uVar1 * -0x5470961d;
    if (uVar1 / 0x5f8 != 0) {
      do {
        fn_004f0788(iVar4 + uVar3 * 0x5f8,iVar2);
        uVar3 = uVar3 + 1;
        iVar2 = extraout_r1;
      } while (uVar3 < uVar1 / 0x5f8);
    }
    fn_00656b7c(iVar4);
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar4 = fn_004f0788(param_1 + 0x40);
  return iVar4 + -0x40;
}



int fn_0050c590(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  iVar1 = fn_004edc74(param_1 + 9,0xffffffff);
  fn_0065754c(iVar1 + 0xc);
  iVar1 = fn_004f0700(iVar1 + 0x1c);
  *(undefined4 *)(iVar1 + 0x5f0) = 0;
  *(undefined4 *)(iVar1 + 0x5f4) = 0;
  fn_0050c2e8(iVar1 + -0x40,param_2);
  return iVar1 + -0x40;
}



ulonglong fn_0050c53c(int *param_1)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_20;
  int iStack_1c;
  uint local_18;
  
  if ((param_1[5] - 0x100000U < 0x3ff00000) || (0x3fefffff < param_1[6] - 0x100000U)) {
    if ((0x3fefffff < param_1[5] - 0x100000U) || (param_1[6] - 0x100000U < 0x3ff00000)) {
      return 0x3ff00000e0a14827;
    }
    local_20 = 0;
    iStack_1c = 0;
    fn_004f01f4(&local_20);
    iVar5 = 0;
    if (param_1[3] < param_1[1]) {
      do {
        iVar5 = (**(code **)(*(int *)param_1[5] + 8))((int *)param_1[5],param_1 + 0x10);
        if (iVar5 < 0) {
          if (iVar5 == -0x2e9eb7d8) {
            iVar5 = 0;
          }
          break;
        }
        fn_004edc34(param_1 + 9);
        iVar8 = param_1[7];
        iVar4 = param_1[8];
        fn_004edc70(param_1 + 9);
        uVar3 = fn_006575c0(param_1 + 0xc);
        lVar1 = (ulonglong)(uint)(iVar4 - iVar8) * (ulonglong)uVar3;
        iVar4 = (int)((ulonglong)lVar1 >> 0x20);
        uVar9 = iVar8 + iVar4;
        puVar2 = (uint *)fn_004f0ce8(iVar4,(int)lVar1);
        uVar7 = *puVar2;
        uVar6 = puVar2[1];
        lVar1 = (ulonglong)uVar9 * (ulonglong)uVar7;
        uVar3 = (uint)lVar1;
        param_1[0x18c] = uVar3 + local_20;
        param_1[0x18d] =
             uVar7 * ((int)uVar9 >> 0x1f) + uVar6 * uVar9 + (int)((ulonglong)lVar1 >> 0x20) +
             iStack_1c + (uint)CARRY4(uVar3,local_20);
        iVar4 = param_1[3];
        iVar8 = param_1[1];
        if (iVar4 < iVar8) {
          param_1[3] = iVar4 + 1;
          iVar4 = iVar4 + param_1[2];
          if (iVar8 <= iVar4) {
            iVar4 = iVar4 - iVar8;
          }
          iVar8 = *param_1 + iVar4 * 0x5f8;
          fn_004f06f4(iVar8,param_1 + 0x10);
          iVar4 = param_1[0x18d];
          *(int *)(iVar8 + 0x5f0) = param_1[0x18c];
          *(int *)(iVar8 + 0x5f4) = iVar4;
        }
      } while (param_1[3] < param_1[1]);
    }
    iVar4 = param_1[1];
    if ((iVar4 <= param_1[3]) && (DAT_008c0630 != 0)) {
      iVar4 = 4;
    }
    return CONCAT44(iVar4,iVar5);
  }
  local_18 = 0;
  fn_004f01f4(&local_18);
  iVar4 = param_1[3];
  uVar3 = 0;
  iVar5 = 0;
  if (iVar4 != 0) {
    while( true ) {
      if (iVar4 < 1) {
        iVar5 = *param_1;
      }
      else {
        iVar5 = param_1[2];
        if (param_1[1] <= iVar5) {
          iVar5 = iVar5 - param_1[1];
        }
        iVar5 = *param_1 + iVar5 * 0x5f8;
      }
      uVar6 = *(uint *)(iVar5 + 0x5f4);
      bVar10 = local_18 <= *(uint *)(iVar5 + 0x5f0);
      iVar5 = uVar6 - !bVar10;
      if (uVar6 != 0 || uVar6 < bVar10) goto LAB_0050c0d4;
      if (iVar4 < 1) {
        iVar5 = *param_1;
      }
      else {
        iVar5 = param_1[2];
        if (param_1[1] <= iVar5) {
          iVar5 = iVar5 - param_1[1];
        }
        iVar5 = *param_1 + iVar5 * 0x5f8;
      }
      uVar3 = (**(code **)(*(int *)param_1[6] + 0xc))((int *)param_1[6],iVar5);
      if (0 < param_1[3]) {
        iVar5 = param_1[2];
        param_1[2] = iVar5 + 1;
        if (param_1[1] <= iVar5 + 1) {
          param_1[2] = 0;
        }
        param_1[3] = param_1[3] + -1;
      }
      if ((int)uVar3 < 0) break;
      iVar4 = param_1[3];
      if (iVar4 == 0) {
        return (ulonglong)uVar3;
      }
    }
    iVar5 = -0x279eb7d4;
    if (uVar3 == 0xd861482c) {
      uVar3 = 0;
    }
  }
LAB_0050c0d4:
  return CONCAT44(iVar5,uVar3);
}


