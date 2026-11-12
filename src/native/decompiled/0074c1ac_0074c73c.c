#include "0074c1ac_0074c73c.h"



undefined4 * fn_0074c73c(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  int local_18;
  undefined1 auStack_14 [4];
  
  *param_1 = &DAT_00853340;
  (**(code **)(param_1[4] + 8))();
  iVar1 = param_1[0x13];
  while (iVar1 != 0) {
    local_18 = *(int *)(param_1[0x12] + 8);
    fn_00777a24(auStack_14,param_1 + 0xe,&local_18);
    iVar1 = param_1[0x13];
  }
  (**(code **)(param_1[4] + 0xc))(param_1 + 4);
  iVar1 = param_1[0x12];
  piVar6 = param_1 + 0xe;
  if (iVar1 != 0) {
    iVar5 = *(int *)(iVar1 + 8);
    iVar2 = local_18;
    if (param_1[0x13] == 0) {
      while (local_18 = iVar5, local_18 != iVar1) {
        iVar2 = *(int *)(local_18 + 0xc);
        if (*(int *)(local_18 + 0xc) == 0) {
          iVar2 = *(int *)(local_18 + 4);
          iVar5 = local_18;
          if (local_18 == *(int *)(iVar2 + 0xc)) {
            do {
              iVar5 = iVar2;
              iVar2 = *(int *)(iVar5 + 4);
            } while (iVar5 == *(int *)(iVar2 + 0xc));
          }
          if (*(int *)(iVar5 + 0xc) != iVar2) {
            iVar5 = iVar2;
          }
        }
        else {
          do {
            iVar5 = iVar2;
            iVar2 = *(int *)(iVar5 + 8);
          } while (*(int *)(iVar5 + 8) != 0);
        }
        fn_00777a24(auStack_14,piVar6,&local_18);
        iVar2 = local_18;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_00778080(piVar6,*(undefined4 *)(iVar1 + 0xc));
        iVar2 = *(int *)(iVar1 + 8);
        *(undefined4 *)(iVar1 + 0xc) = param_1[0xf];
        param_1[0xf] = iVar1;
        iVar1 = iVar2;
      }
      *(undefined4 *)(param_1[0x12] + 8) = param_1[0x12];
      *(undefined4 *)(param_1[0x12] + 4) = 0;
      *(undefined4 *)(param_1[0x12] + 0xc) = param_1[0x12];
      param_1[0x13] = 0;
      iVar2 = local_18;
    }
    local_18 = iVar2;
    iVar1 = param_1[0x12];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0xf];
    param_1[0xf] = iVar1;
    piVar3 = (int *)*piVar6;
    while (piVar3 != (int *)0x0) {
      *piVar6 = *piVar3;
      if (piVar3[2] != 0) {
        pcVar4 = *(code **)(piVar3[2] + -8);
        if (pcVar4 == (code *)0x0) {
          fn_0030233c();
        }
        else {
          (*pcVar4)();
        }
      }
      if (piVar3 != (int *)0x0) {
        if ((code *)piVar3[-2] == (code *)0x0) {
          fn_0030233c(piVar3 + -2);
        }
        else {
          (*(code *)piVar3[-2])();
        }
      }
      piVar3 = (int *)*piVar6;
    }
  }
  param_1[4] = &PTR_LAB_008533fc;
  param_1[5] = &DAT_0085319c;
  *param_1 = &DAT_00853a0c;
  fn_004885e4(DAT_008b64a4,param_1);
  return param_1;
}



void fn_0074c6d0(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_1 + 0x4c);
  while (iVar2 != 0) {
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 8);
    fn_00777a24(auStack_14,param_1 + 0x38,&local_18);
    iVar2 = *(int *)(param_1 + 0x4c);
  }
                    /* WARNING: Could not recover jumptable at 0x0074c738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0074c630(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined1 auStack_14 [4];
  
  piVar1 = (int *)(param_1 + 0x10);
  (**(code **)(*piVar1 + 8))();
  iVar3 = *(int *)(param_1 + 0x48);
  iVar4 = iVar3;
  iVar2 = *(int *)(iVar3 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar4 == iVar3) || (param_2 < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  if (iVar4 != iVar3) {
    local_18 = iVar4;
    fn_00777a24(auStack_14,param_1 + 0x38,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x0074c6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



undefined4 * fn_0074c3ec(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  code *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  int local_20;
  undefined1 auStack_1c [4];
  
  *param_1 = &DAT_00853324;
  (**(code **)(param_1[9] + 8))();
  iVar1 = param_1[0x18];
  while (iVar1 != 0) {
    local_20 = *(int *)(param_1[0x17] + 8);
    fn_00776260(auStack_1c,param_1 + 0x13,&local_20);
    iVar1 = param_1[0x18];
  }
  (**(code **)(param_1[9] + 0xc))(param_1 + 9);
  iVar1 = param_1[0x17];
  piVar6 = param_1 + 0x13;
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 8);
    iVar7 = local_20;
    if (param_1[0x18] == 0) {
      while (local_20 = iVar4, local_20 != iVar1) {
        iVar7 = *(int *)(local_20 + 0xc);
        if (*(int *)(local_20 + 0xc) == 0) {
          iVar7 = *(int *)(local_20 + 4);
          iVar4 = local_20;
          if (local_20 == *(int *)(iVar7 + 0xc)) {
            do {
              iVar4 = iVar7;
              iVar7 = *(int *)(iVar4 + 4);
            } while (iVar4 == *(int *)(iVar7 + 0xc));
          }
          if (*(int *)(iVar4 + 0xc) != iVar7) {
            iVar4 = iVar7;
          }
        }
        else {
          do {
            iVar4 = iVar7;
            iVar7 = *(int *)(iVar4 + 8);
          } while (*(int *)(iVar4 + 8) != 0);
        }
        fn_00776260(auStack_1c,piVar6,&local_20);
        iVar7 = local_20;
      }
    }
    else {
      iVar1 = *(int *)(iVar1 + 4);
      while (iVar1 != 0) {
        fn_007768c8(piVar6,*(undefined4 *)(iVar1 + 0xc));
        iVar7 = *(int *)(iVar1 + 8);
        *(undefined4 *)(iVar1 + 0xc) = param_1[0x14];
        fn_004b4f20(iVar1 + 0x14);
        param_1[0x14] = iVar1;
        iVar1 = iVar7;
      }
      *(undefined4 *)(param_1[0x17] + 8) = param_1[0x17];
      *(undefined4 *)(param_1[0x17] + 4) = 0;
      *(undefined4 *)(param_1[0x17] + 0xc) = param_1[0x17];
      param_1[0x18] = 0;
      iVar7 = local_20;
    }
    local_20 = iVar7;
    iVar1 = param_1[0x17];
    *(undefined4 *)(iVar1 + 0xc) = param_1[0x14];
    param_1[0x14] = iVar1;
    piVar2 = (int *)*piVar6;
    while (piVar2 != (int *)0x0) {
      *piVar6 = *piVar2;
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
      piVar2 = (int *)*piVar6;
    }
  }
  param_1[9] = &PTR_LAB_008533fc;
  param_1[10] = &DAT_0085319c;
  iVar1 = fn_004b4f20(param_1 + 3);
  puVar5 = (undefined4 *)(iVar1 + -0xc);
  *puVar5 = &DAT_00853a0c;
  fn_004885e4(DAT_008b64a4,puVar5);
  return puVar5;
}



int fn_0074c2b8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint local_18;
  uint local_14;
  
  piVar1 = (int *)(param_1 + 0x24);
  (**(code **)(*piVar1 + 8))();
  iVar2 = fn_00169c08(&local_18,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  iVar5 = *(int *)(param_1 + 0x5c);
  iVar2 = iVar5;
  iVar3 = *(int *)(iVar5 + 4);
  while (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0x10) < local_18) {
      iVar3 = *(int *)(iVar3 + 0xc);
    }
    else {
      iVar2 = iVar3;
      iVar3 = *(int *)(iVar3 + 8);
    }
  }
  if ((iVar2 == iVar5) || (local_18 < *(uint *)(iVar2 + 0x10))) {
    iVar2 = iVar5;
  }
  if (iVar2 != iVar5) {
    (**(code **)(*piVar1 + 0xc))(piVar1);
    return iVar2 + 0x14;
  }
  iVar2 = fn_00169c08(&local_14,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_18 = local_14;
  uVar4 = fn_00785c48(param_1 + 0x4c,&local_18);
  fn_00786a18(uVar4,param_1 + 0xc);
  iVar2 = fn_00169c08(&local_14,0xffff8000);
  if (iVar2 < 0) {
    fn_0015e294();
  }
  local_18 = local_14;
  iVar2 = fn_00785c48(param_1 + 0x4c,&local_18);
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return iVar2;
}



void fn_0074c24c(int param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 local_18;
  undefined1 auStack_14 [8];
  
  piVar1 = (int *)(param_1 + 0x24);
  (**(code **)(*piVar1 + 8))();
  iVar2 = *(int *)(param_1 + 0x60);
  while (iVar2 != 0) {
    local_18 = *(undefined4 *)(*(int *)(param_1 + 0x5c) + 8);
    fn_00776260(auStack_14,param_1 + 0x4c,&local_18);
    iVar2 = *(int *)(param_1 + 0x60);
  }
                    /* WARNING: Could not recover jumptable at 0x0074c2b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}



void fn_0074c1ac(int param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_18;
  undefined1 auStack_14 [4];
  
  piVar1 = (int *)(param_1 + 0x24);
  (**(code **)(*piVar1 + 8))();
  iVar3 = *(int *)(param_1 + 0x5c);
  iVar4 = iVar3;
  iVar2 = *(int *)(iVar3 + 4);
  while (iVar2 != 0) {
    if (*(uint *)(iVar2 + 0x10) < param_2) {
      iVar2 = *(int *)(iVar2 + 0xc);
    }
    else {
      iVar4 = iVar2;
      iVar2 = *(int *)(iVar2 + 8);
    }
  }
  if ((iVar4 == iVar3) || (param_2 < *(uint *)(iVar4 + 0x10))) {
    iVar4 = iVar3;
  }
  if (iVar4 != iVar3) {
    local_18 = iVar4;
    fn_00776260(auStack_14,param_1 + 0x4c,&local_18);
  }
                    /* WARNING: Could not recover jumptable at 0x0074c248. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar1 + 0xc))(piVar1);
  return;
}


