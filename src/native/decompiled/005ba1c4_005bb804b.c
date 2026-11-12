#include "005ba1c4_005bb804b.h"



void fn_005bb804(int *param_1)

{
  if (param_1[0x43] == 0) {
    fn_002c3d68(param_1);
    fn_006899f4(param_1,0xf3,0,1);
                    /* WARNING: Could not recover jumptable at 0x005bb844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x158))(param_1);
    return;
  }
  return;
}



void fn_005bb41c(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_0023c3b8(param_1[0x45],param_1[0x17],0,param_4,param_4);
  if (iVar1 != 0) {
    iVar1 = fn_006f5ed4(param_1[0x45]);
    if (iVar1 == 0) {
      if (*(int *)(param_1[0x45] + 0x44) != 0) {
        fn_0036c340(param_1[0x17]);
        fn_006899f4(param_1,0xf3,0,1);
                    /* WARNING: Could not recover jumptable at 0x005bb4f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x158))(param_1);
        return;
      }
      param_1[0x44] = 6;
    }
    else {
      if (iVar1 == 1) {
        fn_0036c340(param_1[0x17]);
        uVar2 = fn_0022f584((char *)&DAT_005bb580,0);
        fn_005bc954(param_1,uVar2,0,1,1);
        param_1[0x43] = 2;
        param_1[0x44] = 0;
        return;
      }
      if (iVar1 == 2) {
        fn_0036c340(param_1[0x17]);
        uVar2 = fn_0022f584((char *)&DAT_005bb598,0);
        fn_005bc954(param_1,uVar2,0,1,1);
        param_1[0x44] = 1;
        return;
      }
      if (iVar1 == 3) {
        fn_0036c340(param_1[0x17]);
        uVar2 = fn_0022f584((char *)&DAT_005bb564,0);
        fn_005bc954(param_1,uVar2,0,1,1);
        param_1[0x43] = 2;
        param_1[0x44] = 0;
      }
    }
  }
  return;
}



void fn_005baf54(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint *puVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined1 *puVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *puVar19;
  uint uVar20;
  int *local_58;
  undefined4 local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 *local_48;
  undefined4 local_44;
  undefined **local_40;
  undefined **local_3c;
  undefined4 *local_38;
  uint local_34 [3];
  int *local_28;
  
  local_28 = param_1;
  iVar2 = fn_0023c3b8(param_1[0x67],param_1[0x17],1);
  if (iVar2 == 0) {
    return;
  }
  if (*(int *)(local_28[0x67] + 0x44) == 0) {
    iVar2 = fn_0023c2a8();
    local_28[0x66] = iVar2;
    local_58 = (int *)0x0;
    local_54 = 0;
    local_50 = (undefined4 *)0x0;
    local_4c = (undefined4 *)0x0;
    local_48 = (undefined4 *)0x0;
    local_44 = 0;
    piVar3 = (int *)fn_0015ece0(0xc);
    iVar2 = fn_0015ece0(0x78);
    piVar3[2] = iVar2;
    *piVar3 = (int)local_58;
    piVar3[1] = 1;
    local_48 = (undefined4 *)piVar3[2];
    local_50 = local_48 + 0x1e;
    *local_48 = local_48;
    local_48[1] = local_48;
    local_58 = piVar3;
    local_4c = local_50;
    fn_0023ce58(local_28[0x67] + 0x98,&local_58);
    puVar1 = local_48;
    iVar2 = local_28[0x66];
    piVar3 = (int *)(iVar2 + 4);
    if ((int **)piVar3 != &local_58) {
      piVar18 = *(int **)(iVar2 + 0x14);
      puVar17 = (undefined4 *)*local_48;
      for (piVar15 = (int *)*piVar18; piVar15 != piVar18 && puVar17 != puVar1;
          piVar15 = (int *)*piVar15) {
        fn_004a2190(piVar15 + 2,puVar17 + 2);
        puVar17 = (undefined4 *)*puVar17;
      }
      if (puVar17 == puVar1) {
        while (piVar3 = piVar15, piVar3 != piVar18) {
          piVar15 = *(int **)(iVar2 + 0x14);
          if (piVar3 != *(int **)(iVar2 + 0x14)) {
            piVar15 = (int *)*piVar3;
            *(int **)piVar3[1] = piVar15;
            *(int *)(*piVar3 + 4) = piVar3[1];
            *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + -1;
            (**(code **)piVar3[2])(piVar3 + 2);
            *piVar3 = *(int *)(iVar2 + 8);
            *(int **)(iVar2 + 8) = piVar3;
          }
        }
      }
      else {
        local_38 = &DAT_00853388;
        local_3c = &PTR_FUN_00854c0c;
        local_40 = &PTR_FUN_00853b40;
        do {
          puVar19 = *(undefined4 **)(iVar2 + 8);
          if (puVar19 == (undefined4 *)0x0) {
            if (*(int *)(iVar2 + 0xc) == *(int *)(iVar2 + 0x10)) {
              if (*piVar3 == 0) {
                uVar20 = 0x20;
              }
              else {
                uVar4 = *(uint *)(*piVar3 + 4);
                uVar20 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
                if (uVar20 < uVar4 + 0x20) {
                  uVar20 = uVar4 + 0x20;
                }
              }
              piVar15 = (int *)fn_0015ece0(0xc);
              iVar5 = fn_0015ece0(uVar20 * 0x78);
              piVar15[2] = iVar5;
              *piVar15 = *piVar3;
              piVar15[1] = uVar20;
              *piVar3 = (int)piVar15;
              iVar5 = piVar15[2];
              *(int *)(iVar2 + 0xc) = iVar5;
              *(uint *)(iVar2 + 0x10) = iVar5 + uVar20 * 0x78;
            }
            puVar19 = *(undefined4 **)(iVar2 + 0xc);
            *(undefined4 **)(iVar2 + 0xc) = puVar19 + 0x1e;
          }
          else {
            *(undefined4 *)(iVar2 + 8) = *puVar19;
          }
          if (puVar19 + 2 != (undefined4 *)0x0) {
            puVar19[2] = local_38;
            *(undefined1 *)(puVar19 + 3) = *(undefined1 *)(puVar17 + 3);
            puVar19[4] = puVar17[4];
            puVar19[5] = puVar17[5];
            puVar19[6] = puVar17[6];
            *(undefined2 *)(puVar19 + 7) = *(undefined2 *)(puVar17 + 7);
            *(undefined2 *)((int)puVar19 + 0x1e) = *(undefined2 *)((int)puVar17 + 0x1e);
            puVar19[8] = puVar17[8];
            puVar19[9] = puVar17[9];
            puVar19[10] = puVar17[10];
            puVar19[0xb] = puVar17[0xb];
            iVar5 = fn_004b637c(puVar19 + 0xc,puVar17 + 0xc);
            *(undefined ***)(iVar5 + -0x28) = local_3c;
            *(undefined1 *)(iVar5 + 8) = *(undefined1 *)(puVar17 + 0xe);
            *(undefined4 *)(iVar5 + 0xc) = puVar17[0xf];
            iVar5 = fn_004b637c(iVar5 + 0x10,puVar17 + 0x10);
            piVar15 = (int *)(iVar5 + 8);
            *piVar15 = 0;
            *(undefined4 *)(iVar5 + 0xc) = 0;
            *(undefined4 *)(iVar5 + 0x10) = 0;
            local_34[0] = (int)(puVar17[0x13] - puVar17[0x12]) >> 2;
            local_34[1] = 0x20;
            puVar7 = local_34;
            if (local_34[0] < 0x20) {
              puVar7 = local_34 + 1;
            }
            uVar20 = *puVar7;
            puVar6 = (undefined4 *)fn_0015ece0(uVar20 << 2);
            *piVar15 = (int)puVar6;
            puVar13 = (undefined4 *)puVar17[0x13];
            for (puVar10 = (undefined4 *)puVar17[0x12]; puVar10 != puVar13; puVar10 = puVar10 + 1) {
              if (puVar6 != (undefined4 *)0x0) {
                *puVar6 = *puVar10;
              }
              puVar6 = puVar6 + 1;
            }
            *(uint *)(iVar5 + 0xc) = (puVar17[0x13] - puVar17[0x12] & 0xfffffffc) + *piVar15;
            piVar16 = (int *)(iVar5 + 0x14);
            *(uint *)(iVar5 + 0x10) = *piVar15 + uVar20 * 4;
            *piVar16 = 0;
            *(undefined4 *)(iVar5 + 0x18) = 0;
            *(undefined4 *)(iVar5 + 0x1c) = 0;
            local_34[0] = puVar17[0x16] - puVar17[0x15];
            local_34[1] = 0x20;
            puVar7 = local_34;
            if ((uint)(puVar17[0x16] - puVar17[0x15]) < 0x20) {
              puVar7 = local_34 + 1;
            }
            uVar20 = *puVar7;
            puVar8 = (undefined1 *)fn_0015ece0(uVar20);
            *piVar16 = (int)puVar8;
            puVar14 = (undefined1 *)puVar17[0x16];
            for (puVar11 = (undefined1 *)puVar17[0x15]; puVar11 != puVar14; puVar11 = puVar11 + 1) {
              if (puVar8 != (undefined1 *)0x0) {
                *puVar8 = *puVar11;
              }
              puVar8 = puVar8 + 1;
            }
            iVar9 = puVar17[0x16];
            iVar12 = puVar17[0x15];
            *(uint *)(iVar5 + 0x1c) = *piVar16 + uVar20;
            *(int *)(iVar5 + 0x18) = (iVar9 - iVar12) + *piVar16;
            iVar5 = fn_004b9b4c(iVar5 + 0x20,puVar17 + 0x18);
            iVar5 = fn_004b9b4c(iVar5 + 8,puVar17 + 0x1a);
            *(undefined4 *)(iVar5 + 8) = puVar17[0x1c];
            *(undefined4 *)(iVar5 + 0xc) = puVar17[0x1d];
            *(undefined ***)(iVar5 + -0x60) = local_40;
          }
          *puVar19 = piVar18;
          puVar19[1] = piVar18[1];
          *(undefined4 **)piVar18[1] = puVar19;
          piVar18[1] = (int)puVar19;
          *(int *)(iVar2 + 0x18) = *(int *)(iVar2 + 0x18) + 1;
          puVar17 = (undefined4 *)*puVar17;
        } while (puVar17 != puVar1);
      }
    }
    fn_0023d34c(&local_58);
    fn_004b51c4(&local_58);
  }
  iVar2 = fn_0023c2a8();
  fn_004a2190(iVar2 + 0x30,local_28 + 0x46);
  fn_006899f4(local_28,0xfb,0,1);
                    /* WARNING: Could not recover jumptable at 0x005bb404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*local_28 + 0x158))(local_28);
  return;
}



void fn_005baf24(int *param_1)

{
  int iVar1;
  
  iVar1 = fn_006f6a6c();
  if (iVar1 == 1) {
                    /* WARNING: Could not recover jumptable at 0x005baf48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x15c))(param_1);
    return;
  }
  return;
}



undefined4 fn_005baef4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_005bc9e4();
  iVar2 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x1a0) = *(undefined4 *)(iVar2 + 0x2c);
  iVar2 = fn_0023c2a8();
  *(undefined4 *)(param_1 + 0x1a4) = *(undefined4 *)(iVar2 + 0x24);
  return uVar1;
}


