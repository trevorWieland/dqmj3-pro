#include "004a5870_004a5fa4.h"



void fn_004a5fa4(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_001249d0();
  fn_0048a288(*(undefined4 *)(iVar2 + 0x10),param_2,*(undefined4 *)(param_2 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x004a5ff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_004a5f6c(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x7c) = param_3;
  fn_004a6238();
  *(undefined4 *)(param_1 + 0x7c) = 0;
  return;
}



void fn_004a5f1c(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_001249d0();
  fn_0048a288(*(undefined4 *)(iVar2 + 0x10),param_2,*(undefined4 *)(param_2 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x004a5f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



void fn_004a5ed0(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [12];
  undefined4 local_c;
  
  *(undefined1 *)(param_1 + 0x14) = 0;
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  local_c = 0x10001;
  uVar1 = fn_004b8d4c(auStack_18,&local_c);
  fn_004b8d90(param_1 + 0x20,uVar1);
  return;
}



void fn_004a5b04(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  undefined4 *puVar10;
  int iVar11;
  undefined4 local_f0 [46];
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c [2];
  
  *(undefined1 *)(param_2 + 4) = 0;
  local_34 = (uint)*(char *)(param_1 + 0x3b);
  local_38 = 0;
  if ((((local_34 != 0) ||
       ((fn_0074a4c8(param_1,param_2 + 4), *(char *)(param_1 + 4) == '\0' &&
        (fn_0074a528(param_1,&local_38), *(char *)(param_1 + 4) == '\0')))) &&
      (local_30 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
     (fn_0074a528(param_1,param_2 + 8), *(char *)(param_1 + 4) == '\0')) {
    puVar7 = *(undefined4 **)(param_2 + 0x10);
    puVar10 = *(undefined4 **)(param_2 + 0xc);
    piVar9 = (int *)(param_2 + 0xc);
    puVar6 = puVar10;
    if (puVar10 != puVar7) {
      do {
        (**(code **)*puVar6)(puVar6);
        puVar6 = puVar6 + 0x2e;
      } while (puVar6 != puVar7);
      iVar1 = (int)((longlong)((int)puVar7 - (int)puVar10) * -0x4de9bd37 +
                    ((ulonglong)(uint)((int)puVar7 - (int)puVar10) << 0x20) >> 0x20);
      *(int *)(param_2 + 0x10) = *(int *)(param_2 + 0x10) + ((iVar1 >> 7) - (iVar1 >> 0x1f)) * -0xb8
      ;
    }
    iVar1 = fn_0074a528(param_1,local_2c);
    uVar5 = local_2c[0];
    if (iVar1 != 0) {
      if (0x1642c85 < local_2c[0]) {
        local_f0[0] = 0x1642c85;
        fn_002ff628(8,&DAT_004a5ec8,&DAT_004a5ec8,local_2c[0]);
      }
      uVar2 = *(int *)(param_2 + 0x14) - *piVar9;
      iVar1 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
      if ((uint)((iVar1 >> 7) - (iVar1 >> 0x1f)) < uVar5) {
        uVar2 = *(int *)(param_2 + 0x10) - *piVar9;
        iVar1 = (int)((longlong)(int)uVar2 * -0x4de9bd37 + ((ulonglong)uVar2 << 0x20) >> 0x20);
        uVar3 = (iVar1 >> 7) - (iVar1 >> 0x1f);
        uVar2 = uVar3 + (uVar3 >> 1) + (uVar3 >> 3);
        if (uVar2 < uVar3 + 0x20) {
          uVar2 = uVar3 + 0x20;
        }
        if (uVar2 <= uVar5) {
          uVar2 = uVar5;
        }
        iVar4 = fn_0015ece0(uVar2 * 0xb8);
        iVar11 = *(int *)(param_2 + 0x10);
        iVar8 = iVar4;
        for (iVar1 = *piVar9; iVar1 != iVar11; iVar1 = iVar1 + 0xb8) {
          if (iVar8 != 0) {
            fn_00481c70(iVar8,iVar1);
          }
          iVar8 = iVar8 + 0xb8;
        }
        puVar7 = *(undefined4 **)(param_2 + 0x10);
        for (puVar6 = (undefined4 *)*piVar9; puVar6 != puVar7; puVar6 = puVar6 + 0x2e) {
          (**(code **)*puVar6)(puVar6);
        }
        fn_0014f1bc(*piVar9);
        iVar1 = *piVar9;
        *piVar9 = iVar4;
        uVar5 = *(int *)(param_2 + 0x10) - iVar1;
        iVar1 = (int)((longlong)(int)uVar5 * -0x4de9bd37 + ((ulonglong)uVar5 << 0x20) >> 0x20);
        *(int *)(param_2 + 0x10) = iVar4 + ((iVar1 >> 7) - (iVar1 >> 0x1f)) * 0xb8;
        *(uint *)(param_2 + 0x14) = iVar4 + uVar2 * 0xb8;
      }
      uVar5 = 0;
LAB_004a5e40:
      if ((uVar5 < local_2c[0]) && (*(char *)(param_1 + 4) == '\0')) {
        puVar6 = (undefined4 *)fn_0049630c(local_f0);
        *puVar6 = &DAT_00853870;
        puVar6[2] = 0;
        puVar6[3] = 0;
        fn_00496040(param_1,local_f0);
        if (*(char *)(param_1 + 4) == '\0') goto LAB_004a5df0;
        puVar7 = (undefined4 *)*piVar9;
        puVar10 = *(undefined4 **)(param_2 + 0x10);
        puVar6 = puVar7;
        if (puVar7 != puVar10) {
          do {
            (**(code **)*puVar6)(puVar6);
            puVar6 = puVar6 + 0x2e;
          } while (puVar6 != puVar10);
          iVar1 = (int)((longlong)((int)puVar10 - (int)puVar7) * -0x4de9bd37 +
                        ((ulonglong)(uint)((int)puVar10 - (int)puVar7) << 0x20) >> 0x20);
          *(int *)(param_2 + 0x10) =
               *(int *)(param_2 + 0x10) + ((iVar1 >> 7) - (iVar1 >> 0x1f)) * -0xb8;
        }
        fn_004963f0(local_f0);
      }
    }
    if (*(char *)(param_1 + 4) == '\0') {
      fn_0074a4c8(param_1,param_2 + 0x18);
      uVar2 = (uint)*(byte *)(param_1 + 4);
      uVar5 = uVar2;
      if (uVar2 == 0) {
        uVar5 = local_34;
      }
      if (uVar2 == 0 && uVar5 == 0) {
        uVar5 = local_30 + local_38;
        if ((uVar5 < *(uint *)(param_1 + 0xc)) || (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar5))
        {
          *(undefined1 *)(param_1 + 4) = 1;
        }
        else {
          *(uint *)(param_1 + 0xc) = uVar5;
        }
      }
    }
  }
  return;
LAB_004a5df0:
  iVar1 = *(int *)(param_2 + 0x10);
  if (iVar1 == *(int *)(param_2 + 0x14)) {
    fn_007928c8(piVar9,iVar1,local_f0);
  }
  else {
    *(int *)(param_2 + 0x10) = iVar1 + 0xb8;
    if (iVar1 != 0) {
      fn_00481c70(iVar1,local_f0);
    }
  }
  fn_004963f0(local_f0);
  uVar5 = uVar5 + 1;
  goto LAB_004a5e40;
}



int fn_004a5870(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  uint uVar6;
  uint extraout_r1_00;
  uint uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined4 local_28;
  
  local_28 = param_4;
  *param_1 = (int)&PTR_FUN_0085508c;
  if ((char)param_1[1] == '\0') {
    *(undefined1 *)(param_1 + 1) = 1;
    iVar8 = param_1[0x10] - param_1[0xf] >> 0x1f;
    iVar5 = (param_1[0x10] - param_1[0xf]) / 0xc + iVar8;
    iVar8 = iVar5 - iVar8;
    if (0 < iVar8) {
      iVar5 = param_1[0xf];
    }
    iVar3 = 0;
    if (0 < iVar8) {
      do {
        iVar1 = iVar3 * 2;
        iVar2 = iVar3 * 0xc;
        iVar3 = iVar3 + 1;
        *(undefined2 *)((int)&local_28 + iVar1) = *(undefined2 *)(iVar5 + iVar2);
      } while (iVar3 < iVar8);
    }
    iVar5 = 0;
    if (0 < iVar8) {
      do {
        (**(code **)(*param_1 + 0x14))(param_1,*(undefined2 *)((int)&local_28 + iVar5 * 2));
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar8);
    }
    fn_0015dfc0(param_1[0x28]);
    if ((char)param_1[0x34] != '\0') {
      fn_0013c428(param_1[0x28]);
    }
    uVar6 = 0;
    if (*(char *)(param_1[0x3f] + 0x1c) != '\0') {
      fn_0047e514();
      uVar6 = extraout_r1;
    }
    iVar5 = 0;
    do {
      iVar8 = param_1[iVar5 + 0x25];
      if (iVar8 != 0) {
        uVar6 = (uint)*(byte *)(iVar8 + 0x1c);
      }
      if (iVar8 != 0 && uVar6 != 0) {
        fn_0047e514();
        uVar6 = extraout_r1_00;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  iVar5 = 0;
  do {
    if ((int *)param_1[iVar5 + 0x25] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar5 + 0x25] + 4))();
    }
    if ((int *)param_1[iVar5 + 0x12] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar5 + 0x12] + 4))();
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 2);
  if ((int *)param_1[0x3f] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x3f] + 4))();
  }
  param_1[0x36] = (int)&DAT_0085319c;
  param_1[0x35] = (int)&PTR_LAB_008533fc;
  uVar9 = fn_004bb474(param_1 + 0x27);
  uVar6 = (uint)((ulonglong)uVar9 >> 0x20);
  iVar5 = (int)uVar9;
  *(undefined **)(iVar5 + -0x2c) = &DAT_0085319c;
  *(undefined ***)(iVar5 + -0x30) = &PTR_LAB_008533fc;
  uVar4 = *(uint *)(iVar5 + -0x3c);
  uVar7 = *(uint *)(iVar5 + -0x38);
  if (uVar4 < uVar7) {
    uVar6 = uVar7 - uVar4;
  }
  if (uVar4 < uVar7) {
    uVar6 = uVar6 << 0x1c;
  }
  if (uVar4 < uVar7) {
    uVar6 = uVar6 >> 0x1f;
  }
  else {
    uVar6 = 0;
  }
  iVar8 = uVar6 + 1;
  if (iVar8 < ((int)(uVar7 - uVar4) >> 3) + 1) {
    do {
      iVar8 = iVar8 + 2;
    } while (iVar8 < ((int)(uVar7 - uVar4) >> 3) + 1);
  }
  if (uVar4 != 0) {
    if (*(code **)(uVar4 - 8) == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (**(code **)(uVar4 - 8))();
    }
  }
  uVar6 = *(uint *)(iVar5 + -0x60);
  uVar4 = *(uint *)(iVar5 + -0x5c);
  if (uVar6 < uVar4) {
    uVar7 = (int)(uVar4 - uVar6) / 0xc & 1;
  }
  else {
    uVar7 = 0;
  }
  iVar8 = uVar7 + 1;
  if (iVar8 < (int)(uVar4 - uVar6) / 0xc + 1) {
    do {
      iVar8 = iVar8 + 2;
    } while (iVar8 < (int)(uVar4 - uVar6) / 0xc + 1);
  }
  if (uVar6 != 0) {
    if (*(code **)(uVar6 - 8) == (code *)0x0) {
      fn_0030233c(uVar6 - 8);
    }
    else {
      (**(code **)(uVar6 - 8))();
    }
  }
  *(undefined **)(iVar5 + -0x8c) = &DAT_0085319c;
  *(undefined ***)(iVar5 + -0x90) = &PTR_LAB_008533fc;
  return iVar5 + -0x9c;
}


