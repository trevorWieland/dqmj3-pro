#include "004582d0_00458500.h"



void fn_00458500(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uStack_30;
  undefined *puStack_2c;
  undefined4 uStack_28;
  
  if (DAT_008b6389 != '\0') {
    iVar1 = fn_001249d0();
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0xc);
    }
    piVar3 = (int *)(iVar2 + 0x50);
    (**(code **)(*piVar3 + 8))();
    piVar5 = (int *)**(undefined4 **)(param_1 + 0x80);
    while (piVar5 != *(int **)(param_1 + 0x80)) {
      piVar4 = (int *)piVar5[2];
      if ((param_2 == 0) && ((char)piVar4[0x23] != '\0')) {
        uStack_30 = 0x80050007;
        puStack_2c = &DAT_007dba44;
        uStack_28 = 0x71;
        fn_0045fc0c(piVar4,&uStack_30);
        piVar5 = (int *)*piVar5;
      }
      else {
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 4))();
        }
        piVar4 = *(int **)(param_1 + 0x80);
        if (piVar5 != piVar4) {
          piVar4 = (int *)*piVar5;
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
          *piVar5 = *(int *)(param_1 + 0x74);
          *(int **)(param_1 + 0x74) = piVar5;
        }
        piVar5 = piVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x0045858c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return;
  }
  piVar5 = (int *)**(undefined4 **)(param_1 + 0x80);
  while (piVar5 != *(int **)(param_1 + 0x80)) {
    piVar3 = (int *)piVar5[2];
    if ((param_2 == 0) && ((char)piVar3[0x23] != '\0')) {
      uStack_30 = 0x80050007;
      puStack_2c = &DAT_007dba44;
      uStack_28 = 0x71;
      fn_0045fc0c(piVar3,&uStack_30);
      piVar5 = (int *)*piVar5;
    }
    else {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 4))();
      }
      piVar3 = *(int **)(param_1 + 0x80);
      if (piVar5 != piVar3) {
        piVar3 = (int *)*piVar5;
        *(int *)piVar5[1] = *piVar5;
        *(int *)(*piVar5 + 4) = piVar5[1];
        *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + -1;
        *piVar5 = *(int *)(param_1 + 0x74);
        *(int **)(param_1 + 0x74) = piVar5;
      }
      piVar5 = piVar3;
    }
  }
  return;
}



void fn_004582d0(int param_1,int *param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int extraout_r1;
  int iVar5;
  uint uVar6;
  undefined8 uVar7;
  int local_50;
  undefined *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined1 local_28 [4];
  int local_24;
  undefined1 auStack_20 [8];
  
  if ((param_2[0x20] == 0) &&
     (uVar7 = (**(code **)(*param_2 + 0x30))(param_2), iVar5 = (int)((ulonglong)uVar7 >> 0x20),
     (int)uVar7 == 0)) {
    piVar1 = (int *)param_2[1];
    if ((piVar1 != (int *)0x0) && (iVar5 = 0, param_2[0x1e] != 0)) {
      (**(code **)(*piVar1 + 0x7c))(piVar1,param_2[0x1e],param_2);
      iVar5 = extraout_r1;
    }
    param_2[0x1e] = 0;
    piVar1 = (int *)param_2[1];
    if (piVar1 != (int *)0x0) {
      iVar5 = param_2[0x1f];
    }
    if (piVar1 != (int *)0x0 && iVar5 != 0) {
      (**(code **)(*piVar1 + 0x74))(piVar1,iVar5,param_2);
    }
    param_2[0x1f] = 0;
    local_28[0] = fn_006d0810(param_2 + 2,&DAT_007d9e30,0);
    if ((char)param_2[0x1b] == '\0') {
      fn_0014ea80(param_2 + 2);
    }
    iVar5 = fn_0047edec(param_1 + 0x54,param_2[3],local_28);
    if (iVar5 != 0) {
      if ((char)param_2[0x1b] == '\0') {
        fn_0014ea80(param_2 + 2);
      }
      iVar5 = param_2[3];
      local_2c = fn_006d0810(param_2 + 2,&DAT_007d9e30,0);
      local_4c = &DAT_008528bc;
      local_48 = *(undefined4 *)(iVar5 + 4);
      local_44 = *(undefined4 *)(iVar5 + 8);
      uStack_40 = *(undefined4 *)(iVar5 + 0xc);
      uStack_3c = *(undefined4 *)(iVar5 + 0x10);
      uStack_38 = *(undefined4 *)(iVar5 + 0x14);
      uStack_34 = *(undefined4 *)(iVar5 + 0x18);
      uStack_30 = *(undefined4 *)(iVar5 + 0x1c);
      fn_007858d0(&local_24,param_1 + 0x54,&local_4c);
      if (local_24 != *(int *)(param_1 + 100)) {
        local_50 = local_24;
        fn_007669a4(auStack_20,param_1 + 0x54,&local_50);
      }
      piVar1 = *(int **)(param_1 + 0x74);
      iVar5 = *(int *)(param_1 + 0x80);
      if (piVar1 == (int *)0x0) {
        piVar1 = *(int **)(param_1 + 0x78);
        if (piVar1 == *(int **)(param_1 + 0x7c)) {
          if (*(int *)(param_1 + 0x70) == 0) {
            uVar6 = 0x20;
          }
          else {
            uVar2 = *(uint *)(*(int *)(param_1 + 0x70) + 4);
            uVar6 = uVar2 + (uVar2 >> 1) + (uVar2 >> 3);
            if (uVar6 < uVar2 + 0x20) {
              uVar6 = uVar2 + 0x20;
            }
          }
          puVar3 = (undefined4 *)fn_0015ece0(0xc);
          uVar4 = fn_0015ece0(uVar6 * 0xc);
          puVar3[2] = uVar4;
          *puVar3 = *(undefined4 *)(param_1 + 0x70);
          puVar3[1] = uVar6;
          *(undefined4 **)(param_1 + 0x70) = puVar3;
          piVar1 = (int *)puVar3[2];
          *(int **)(param_1 + 0x78) = piVar1;
          *(int **)(param_1 + 0x7c) = piVar1 + uVar6 * 3;
        }
        *(int **)(param_1 + 0x78) = piVar1 + 3;
      }
      else {
        *(int *)(param_1 + 0x74) = *piVar1;
      }
      if (piVar1 + 2 != (int *)0x0) {
        piVar1[2] = (int)param_2;
      }
      *piVar1 = iVar5;
      piVar1[1] = *(int *)(iVar5 + 4);
      **(int **)(iVar5 + 4) = (int)piVar1;
      *(int **)(iVar5 + 4) = piVar1;
      *(int *)(param_1 + 0x84) = *(int *)(param_1 + 0x84) + 1;
    }
  }
  return;
}


