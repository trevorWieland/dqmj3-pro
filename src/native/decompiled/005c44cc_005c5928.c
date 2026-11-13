#include "005c44cc_005c5928.h"



void fn_005c5928(int param_1)

{
  fn_00748990();
  (**(code **)(**(int **)(param_1 + 0x104) + 0xc))();
  *(undefined4 *)(param_1 + 0x110) = 3;
  *(undefined4 *)(param_1 + 0x114) = 0;
  return;
}



void fn_005c51a8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x104);
  iVar2 = fn_00100b58(iVar1 + 0x18);
  if (iVar2 == 0) {
    uVar3 = fn_0022f584((char *)&DAT_005c53a8,0);
    fn_00748808(param_1,uVar3,0,1,1,0);
    *(undefined4 *)(param_1 + 0x110) = 2;
    *(undefined4 *)(param_1 + 0x114) = 0;
    return;
  }
  iVar2 = fn_0023c310(iVar1 + 0x60);
  if (iVar2 != 0) {
    uVar3 = fn_0022f584((char *)&DAT_005c538c,0);
    fn_00748808(param_1,uVar3,0,1,1,0);
    *(undefined4 *)(param_1 + 0x110) = 2;
    *(undefined4 *)(param_1 + 0x114) = 0;
    return;
  }
  iVar2 = fn_00100b58(iVar1 + 0x3c);
  if (iVar2 == 0) {
    uVar3 = fn_0022f584((char *)&DAT_005c53ec,0);
    fn_00748808(param_1,uVar3,0,1,1,0);
    *(undefined4 *)(param_1 + 0x110) = 2;
    *(undefined4 *)(param_1 + 0x114) = 0;
    return;
  }
  fn_00246e68(auStack_20);
  fn_00246e00(auStack_20);
  iVar2 = fn_006b5404(auStack_20,iVar1 + 0x18);
  iVar4 = fn_006b5404(auStack_20,iVar1 + 0x60);
  iVar1 = fn_006b5404(auStack_20,iVar1 + 0x3c);
  if (iVar2 + iVar4 + iVar1 < 6) {
    fn_00246e74(auStack_20);
    uVar3 = fn_0022f584((char *)&DAT_005c540c,0);
    fn_00748808(param_1,uVar3,1,1,1,0);
    *(undefined4 *)(param_1 + 0x110) = 1;
    *(undefined4 *)(param_1 + 0x114) = 0;
    return;
  }
  uVar3 = fn_0022f584((char *)&DAT_005c53cc,0);
  fn_00748808(param_1,uVar3,0,1,1,0);
  *(undefined4 *)(param_1 + 0x110) = 2;
  *(undefined4 *)(param_1 + 0x114) = 0;
  fn_00246e74(auStack_20);
  return;
}



void fn_005c489c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  
  switch(*(undefined4 *)(param_1 + 0x114)) {
  case 0:
    iVar4 = fn_006f6a6c(param_1);
    if (iVar4 == 2) {
      *(undefined4 *)(param_1 + 0x110) = 0;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else if (iVar4 == 3) {
      fn_005c4b90(param_1);
      uVar1 = fn_0022f584((char *)&DAT_005c4b1c,0);
      fn_00748898(param_1,uVar1);
      uVar1 = 1;
      goto LAB_005c4a60;
    }
    break;
  case 1:
    fn_005f6270(*(undefined4 *)(param_1 + 0x118));
    iVar4 = fn_0023c3b8(*(undefined4 *)(param_1 + 0x118),*(undefined4 *)(param_1 + 0x5c),1);
    if (iVar4 == 0) {
      return;
    }
    if (*(int *)(*(int *)(param_1 + 0x118) + 0x44) == 0) {
      puVar2 = (undefined4 *)fn_001f74ec(param_1,0xdd);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_0089902c) goto LAB_005c49d8;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_005c49d8:
      *(undefined1 *)(puVar2 + 5) = 1;
      fn_005c5488(param_1);
      uVar1 = fn_0022f584((char *)&DAT_005c4b5c,0);
      fn_00748808(param_1,uVar1,0,1,1,0);
      uVar1 = 2;
    }
    else {
      uVar1 = fn_0022f584((char *)&DAT_005c4b38,0);
      fn_00748808(param_1,uVar1,0,1,1,0);
      uVar1 = 4;
    }
    goto LAB_005c4a60;
  case 2:
    iVar4 = fn_006f6a6c(param_1);
    if (iVar4 != 1) {
      return;
    }
    iVar4 = fn_0066e158(DAT_00898840);
    if (iVar4 == 0) {
      fn_0023d3d0(*(undefined4 *)(*(int *)(param_1 + 4) + 0x18));
      uVar1 = 3;
      goto LAB_005c4a60;
    }
    goto LAB_005c4a48;
  case 3:
    iVar4 = fn_0023c2bc();
    if (iVar4 == 0) {
      return;
    }
    puVar2 = (undefined4 *)fn_00689c1c(param_1,0x80);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_008964f4) goto LAB_005c4ac0;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_005c4ac0:
    if (*(char *)((int)puVar2 + 9) == '\0') {
LAB_005c4ae4:
      fn_006899f4(param_1,0xdd,1);
      (**(code **)(**(int **)(param_1 + 0x104) + 0xc))();
      *(undefined4 *)(param_1 + 0x110) = 3;
      *(undefined4 *)(param_1 + 0x114) = 0;
      return;
    }
LAB_005c4a48:
    uVar1 = 5;
LAB_005c4a60:
    *(undefined4 *)(param_1 + 0x114) = uVar1;
    return;
  case 4:
    iVar4 = fn_006f6a6c(param_1);
    if (iVar4 == 1) goto LAB_005c4ae4;
  }
  return;
}



void fn_005c5488(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  undefined1 *puVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 *local_58;
  int *local_54;
  int *local_50;
  int *local_4c;
  int *local_48;
  int local_44;
  undefined **local_40;
  undefined **local_3c;
  undefined4 *local_38;
  uint local_34;
  uint local_30 [2];
  int local_28;
  
  local_28 = param_1;
  fn_0023d13c();
  iVar1 = fn_0023c2a8();
  local_58 = (undefined4 *)0x0;
  local_54 = (int *)0x0;
  local_50 = (int *)0x0;
  local_4c = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = 0;
  puVar2 = (undefined4 *)fn_0015ece0(0xc);
  uVar3 = fn_0015ece0(0xf00);
  puVar2[2] = uVar3;
  *puVar2 = local_58;
  puVar2[1] = 0x20;
  local_48 = (int *)puVar2[2];
  local_4c = local_48 + 0x3c0;
  local_50 = local_48 + 0x1e;
  *local_48 = (int)local_48;
  local_48[1] = (int)local_48;
  piVar16 = *(int **)(iVar1 + 0x14);
  piVar15 = (int *)*piVar16;
  iVar1 = *local_48;
  local_58 = puVar2;
  if (piVar15 != piVar16) {
    local_38 = &DAT_00853388;
    local_3c = &PTR_FUN_00854c0c;
    local_40 = &PTR_FUN_00853b40;
    do {
      if (local_54 == (int *)0x0) {
        if (local_50 == local_4c) {
          if (local_58 == (undefined4 *)0x0) {
            uVar13 = 0x20;
          }
          else {
            uVar4 = local_58[1];
            uVar13 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar13 < uVar4 + 0x20) {
              uVar13 = uVar4 + 0x20;
            }
          }
          puVar2 = (undefined4 *)fn_0015ece0(0xc);
          uVar3 = fn_0015ece0(uVar13 * 0x78);
          puVar2[2] = uVar3;
          *puVar2 = local_58;
          puVar2[1] = uVar13;
          local_50 = (int *)puVar2[2];
          local_4c = local_50 + uVar13 * 0x1e;
          local_58 = puVar2;
        }
        piVar14 = local_50;
        local_50 = local_50 + 0x1e;
      }
      else {
        piVar14 = local_54;
        local_54 = (int *)*local_54;
      }
      if (piVar14 + 2 != (int *)0x0) {
        piVar14[2] = (int)local_38;
        *(char *)(piVar14 + 3) = (char)piVar15[3];
        piVar14[4] = piVar15[4];
        piVar14[5] = piVar15[5];
        piVar14[6] = piVar15[6];
        *(short *)(piVar14 + 7) = (short)piVar15[7];
        *(undefined2 *)((int)piVar14 + 0x1e) = *(undefined2 *)((int)piVar15 + 0x1e);
        piVar14[8] = piVar15[8];
        piVar14[9] = piVar15[9];
        piVar14[10] = piVar15[10];
        piVar14[0xb] = piVar15[0xb];
        iVar5 = fn_004b637c(piVar14 + 0xc,piVar15 + 0xc);
        *(undefined ***)(iVar5 + -0x28) = local_3c;
        *(char *)(iVar5 + 8) = (char)piVar15[0xe];
        *(int *)(iVar5 + 0xc) = piVar15[0xf];
        iVar5 = fn_004b637c(iVar5 + 0x10,piVar15 + 0x10);
        *(undefined4 *)(iVar5 + 8) = 0;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        local_34 = piVar15[0x13] - piVar15[0x12] >> 2;
        local_30[0] = 0x20;
        puVar9 = &local_34;
        if (local_34 < 0x20) {
          puVar9 = local_30;
        }
        uVar13 = *puVar9;
        puVar6 = (undefined4 *)fn_0015ece0(uVar13 << 2);
        *(int *)(iVar5 + 8) = (int)puVar6;
        puVar11 = (undefined4 *)piVar15[0x13];
        for (puVar2 = (undefined4 *)piVar15[0x12]; puVar2 != puVar11; puVar2 = puVar2 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar2;
          }
          puVar6 = puVar6 + 1;
        }
        iVar7 = *(int *)(iVar5 + 8);
        *(uint *)(iVar5 + 0xc) = (piVar15[0x13] - piVar15[0x12] & 0xfffffffcU) + iVar7;
        *(uint *)(iVar5 + 0x10) = iVar7 + uVar13 * 4;
        *(undefined4 *)(iVar5 + 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        local_34 = piVar15[0x16] - piVar15[0x15];
        local_30[0] = 0x20;
        puVar9 = &local_34;
        if ((uint)(piVar15[0x16] - piVar15[0x15]) < 0x20) {
          puVar9 = local_30;
        }
        uVar13 = *puVar9;
        puVar8 = (undefined1 *)fn_0015ece0(uVar13);
        *(int *)(iVar5 + 0x14) = (int)puVar8;
        puVar12 = (undefined1 *)piVar15[0x16];
        for (puVar10 = (undefined1 *)piVar15[0x15]; puVar10 != puVar12; puVar10 = puVar10 + 1) {
          if (puVar8 != (undefined1 *)0x0) {
            *puVar8 = *puVar10;
          }
          puVar8 = puVar8 + 1;
        }
        iVar7 = *(int *)(iVar5 + 0x14);
        *(int *)(iVar5 + 0x18) = (piVar15[0x16] - piVar15[0x15]) + iVar7;
        *(uint *)(iVar5 + 0x1c) = iVar7 + uVar13;
        iVar5 = fn_004b9b4c(iVar5 + 0x20,piVar15 + 0x18);
        iVar5 = fn_004b9b4c(iVar5 + 8,piVar15 + 0x1a);
        *(int *)(iVar5 + 8) = piVar15[0x1c];
        *(int *)(iVar5 + 0xc) = piVar15[0x1d];
        *(undefined ***)(iVar5 + -0x60) = local_40;
      }
      *piVar14 = iVar1;
      piVar14[1] = *(int *)(iVar1 + 4);
      **(undefined4 **)(iVar1 + 4) = piVar14;
      *(int **)(iVar1 + 4) = piVar14;
      local_44 = local_44 + 1;
      piVar15 = (int *)*piVar15;
    } while (piVar15 != piVar16);
  }
  fn_0023c414(&local_58);
  fn_0023c898(&local_58);
  piVar15 = (int *)*local_48;
  if (piVar15 != local_48) {
    do {
      fn_0023d0bc(piVar15[4]);
      piVar15 = (int *)*piVar15;
    } while (piVar15 != local_48);
  }
  if (*(char *)(*(int *)(local_28 + 0x104) + 0x1c8) == '\0') {
    fn_0023d0bc(*(undefined4 *)(*(int *)(local_28 + 0x118) + 0x9c));
  }
  piVar15 = local_48;
  if (local_48 != (int *)0x0) {
    piVar16 = (int *)*local_48;
    while (piVar14 = piVar16, piVar14 != piVar15) {
      if (piVar14 == local_48) {
        piVar16 = local_48;
      }
      else {
        piVar16 = (int *)*piVar14;
        *(int **)piVar14[1] = piVar16;
        *(int *)(*piVar14 + 4) = piVar14[1];
        local_44 = local_44 + -1;
        (**(code **)piVar14[2])(piVar14 + 2);
        *piVar14 = (int)local_54;
        local_54 = piVar14;
      }
    }
    *local_48 = (int)local_54;
    local_54 = local_48;
    piVar15 = local_58;
    while (piVar15 != (int *)0x0) {
      local_58 = (undefined4 *)*piVar15;
      fn_0014f1bc(piVar15[2]);
      fn_0014f1bc(piVar15);
      piVar15 = local_58;
    }
  }
  return;
}



void fn_005c44cc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  puVar1[0x2c] = 0;
  *puVar1 = &DAT_0084a600;
  *(undefined1 *)(puVar1 + 0x2d) = 0;
  *(undefined2 *)((int)puVar1 + 0xb6) = 0;
  puVar1[0x2e] = 0;
  *(undefined1 *)(puVar1 + 0x2f) = 0;
  return;
}


