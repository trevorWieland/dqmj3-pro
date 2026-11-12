#include "005dc9d0_005de4c0.h"



void fn_005de4c0(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = &PTR_FUN_0084d968;
  if ((int *)param_1[0x67] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x67] + 4))();
  }
  if ((int *)param_1[0x66] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x66] + 4))();
  }
  if ((int *)param_1[100] != (int *)0x0) {
    (**(code **)(*(int *)param_1[100] + 4))();
  }
  if ((int *)param_1[99] != (int *)0x0) {
    (**(code **)(*(int *)param_1[99] + 4))();
  }
  if (param_1[0x62] != 0) {
    fn_002feef8(param_1[0x62]);
  }
  param_1[0x46] = &PTR_FUN_00854c0c;
  uVar2 = param_1[0x59];
  uVar3 = param_1[0x5a];
  if (uVar2 < uVar3) {
    if (0 < (int)(uVar3 - uVar2)) {
      for (iVar1 = (int)(uVar3 - uVar2) >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; uVar2 != uVar3; uVar2 = uVar2 + 1) {
    }
  }
  fn_0014f1bc();
  uVar2 = param_1[0x56];
  uVar3 = param_1[0x57];
  if (uVar2 < uVar3) {
    if (0 < (int)(uVar3 - uVar2)) {
      for (iVar1 = (int)(uVar3 - uVar2) >> 3; iVar1 != 0; iVar1 = iVar1 + -1) {
      }
    }
  }
  else {
    for (; uVar2 != uVar3; uVar2 = uVar2 + 4) {
    }
  }
  fn_0014f1bc();
  iVar1 = fn_00170f54(param_1 + 0x54);
  iVar1 = fn_004bb560(iVar1 + -0x38);
  fn_0074908c(iVar1 + -0x118);
  return;
}



void fn_005ddf7c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x110) == 0) {
    *(int *)(*(int *)(param_1 + 0x104) + 8) = param_2;
    if (param_2 == 0) {
      uVar1 = fn_0022f584((char *)&DAT_005de018,0);
      fn_00748808(param_1,uVar1,1,1,1,0);
      *(undefined4 *)(param_1 + 0x110) = 1;
      *(undefined4 *)(param_1 + 0x114) = 0;
    }
    else {
      if (param_2 == 1) {
        *(undefined4 *)(param_1 + 0x110) = 2;
        *(undefined4 *)(param_1 + 0x114) = 0;
        return;
      }
      if (param_2 == 2) {
        fn_00748c18(param_1);
        return;
      }
    }
  }
  return;
}



void fn_005ddf18(int param_1)

{
  if (*(int *)(param_1 + 0x110) == 0) {
    fn_00748990(param_1);
                    /* WARNING: Could not recover jumptable at 0x005ddf44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(int **)(param_1 + 0x104) + 0xc))();
    return;
  }
  return;
}



void fn_005dda8c(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  uint *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  undefined1 *puVar11;
  uint uVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  int *piVar17;
  undefined4 *local_50;
  int *local_4c;
  int *local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  undefined **local_38;
  undefined **local_34;
  undefined4 *local_30;
  uint local_2c;
  uint local_28;
  
  fn_0023d13c();
  iVar1 = fn_0023c2a8();
  local_50 = (undefined4 *)0x0;
  local_4c = (int *)0x0;
  local_48 = (int *)0x0;
  local_44 = (int *)0x0;
  local_40 = (int *)0x0;
  local_3c = 0;
  puVar2 = (undefined4 *)fn_0015ece0(0xc);
  uVar3 = fn_0015ece0(0xf00);
  puVar2[2] = uVar3;
  *puVar2 = local_50;
  puVar2[1] = 0x20;
  local_40 = (int *)puVar2[2];
  local_44 = local_40 + 0x3c0;
  local_48 = local_40 + 0x1e;
  *local_40 = (int)local_40;
  local_40[1] = (int)local_40;
  piVar17 = *(int **)(iVar1 + 0x14);
  piVar16 = (int *)*piVar17;
  iVar1 = *local_40;
  local_50 = puVar2;
  if (piVar16 != piVar17) {
    local_30 = &DAT_00853388;
    local_34 = &PTR_FUN_00854c0c;
    local_38 = &PTR_FUN_00853b40;
    do {
      if (local_4c == (int *)0x0) {
        if (local_48 == local_44) {
          if (local_50 == (undefined4 *)0x0) {
            uVar12 = 0x20;
          }
          else {
            uVar4 = local_50[1];
            uVar12 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
            if (uVar12 < uVar4 + 0x20) {
              uVar12 = uVar4 + 0x20;
            }
          }
          puVar2 = (undefined4 *)fn_0015ece0(0xc);
          uVar3 = fn_0015ece0(uVar12 * 0x78);
          puVar2[2] = uVar3;
          *puVar2 = local_50;
          puVar2[1] = uVar12;
          local_48 = (int *)puVar2[2];
          local_44 = local_48 + uVar12 * 0x1e;
          local_50 = puVar2;
        }
        piVar15 = local_48;
        local_48 = local_48 + 0x1e;
      }
      else {
        piVar15 = local_4c;
        local_4c = (int *)*local_4c;
      }
      if (piVar15 + 2 != (int *)0x0) {
        piVar15[2] = (int)local_30;
        *(char *)(piVar15 + 3) = (char)piVar16[3];
        piVar15[4] = piVar16[4];
        piVar15[5] = piVar16[5];
        piVar15[6] = piVar16[6];
        *(short *)(piVar15 + 7) = (short)piVar16[7];
        *(undefined2 *)((int)piVar15 + 0x1e) = *(undefined2 *)((int)piVar16 + 0x1e);
        piVar15[8] = piVar16[8];
        piVar15[9] = piVar16[9];
        piVar15[10] = piVar16[10];
        piVar15[0xb] = piVar16[0xb];
        iVar5 = fn_004b637c(piVar15 + 0xc,piVar16 + 0xc);
        *(undefined ***)(iVar5 + -0x28) = local_34;
        *(char *)(iVar5 + 8) = (char)piVar16[0xe];
        *(int *)(iVar5 + 0xc) = piVar16[0xf];
        iVar5 = fn_004b637c(iVar5 + 0x10,piVar16 + 0x10);
        piVar13 = (int *)(iVar5 + 8);
        *piVar13 = 0;
        *(undefined4 *)(iVar5 + 0xc) = 0;
        *(undefined4 *)(iVar5 + 0x10) = 0;
        local_2c = piVar16[0x13] - piVar16[0x12] >> 2;
        local_28 = 0x20;
        puVar8 = &local_2c;
        if (local_2c < 0x20) {
          puVar8 = &local_28;
        }
        uVar12 = *puVar8;
        puVar6 = (undefined4 *)fn_0015ece0(uVar12 << 2);
        *piVar13 = (int)puVar6;
        puVar10 = (undefined4 *)piVar16[0x13];
        for (puVar2 = (undefined4 *)piVar16[0x12]; puVar2 != puVar10; puVar2 = puVar2 + 1) {
          if (puVar6 != (undefined4 *)0x0) {
            *puVar6 = *puVar2;
          }
          puVar6 = puVar6 + 1;
        }
        piVar14 = (int *)(iVar5 + 0x14);
        *(uint *)(iVar5 + 0xc) = (piVar16[0x13] - piVar16[0x12] & 0xfffffffcU) + *piVar13;
        *(uint *)(iVar5 + 0x10) = *piVar13 + uVar12 * 4;
        *piVar14 = 0;
        *(undefined4 *)(iVar5 + 0x18) = 0;
        *(undefined4 *)(iVar5 + 0x1c) = 0;
        local_2c = piVar16[0x16] - piVar16[0x15];
        local_28 = 0x20;
        puVar8 = &local_2c;
        if ((uint)(piVar16[0x16] - piVar16[0x15]) < 0x20) {
          puVar8 = &local_28;
        }
        uVar12 = *puVar8;
        puVar7 = (undefined1 *)fn_0015ece0(uVar12);
        *piVar14 = (int)puVar7;
        puVar11 = (undefined1 *)piVar16[0x16];
        for (puVar9 = (undefined1 *)piVar16[0x15]; puVar9 != puVar11; puVar9 = puVar9 + 1) {
          if (puVar7 != (undefined1 *)0x0) {
            *puVar7 = *puVar9;
          }
          puVar7 = puVar7 + 1;
        }
        *(int *)(iVar5 + 0x18) = (piVar16[0x16] - piVar16[0x15]) + *piVar14;
        *(uint *)(iVar5 + 0x1c) = *piVar14 + uVar12;
        iVar5 = fn_004b9b4c(iVar5 + 0x20,piVar16 + 0x18);
        iVar5 = fn_004b9b4c(iVar5 + 8,piVar16 + 0x1a);
        *(int *)(iVar5 + 8) = piVar16[0x1c];
        *(int *)(iVar5 + 0xc) = piVar16[0x1d];
        *(undefined ***)(iVar5 + -0x60) = local_38;
      }
      *piVar15 = iVar1;
      piVar15[1] = *(int *)(iVar1 + 4);
      **(undefined4 **)(iVar1 + 4) = piVar15;
      *(int **)(iVar1 + 4) = piVar15;
      local_3c = local_3c + 1;
      piVar16 = (int *)*piVar16;
    } while (piVar16 != piVar17);
  }
  fn_0023c414(&local_50);
  fn_0023c898(&local_50);
  piVar16 = (int *)*local_40;
  if (piVar16 != local_40) {
    do {
      if (piVar16[4] != *(int *)(param_1 + 0x120)) {
        fn_0023d0bc();
      }
      piVar16 = (int *)*piVar16;
    } while (piVar16 != local_40);
  }
  piVar16 = local_40;
  if (local_40 != (int *)0x0) {
    piVar17 = (int *)*local_40;
    while (piVar17 != piVar16) {
      piVar15 = local_40;
      if (piVar17 != local_40) {
        piVar15 = (int *)*piVar17;
        *(int **)piVar17[1] = piVar15;
        *(int *)(*piVar17 + 4) = piVar17[1];
        local_3c = local_3c + -1;
        (**(code **)piVar17[2])(piVar17 + 2);
        *piVar17 = (int)local_4c;
        local_4c = piVar17;
      }
      piVar17 = piVar15;
    }
    *local_40 = (int)local_4c;
    local_4c = local_40;
    piVar16 = local_50;
    while (piVar16 != (int *)0x0) {
      local_50 = (undefined4 *)*piVar16;
      fn_0014f1bc(piVar16[2]);
      fn_0014f1bc(piVar16);
      piVar16 = local_50;
    }
  }
  return;
}



undefined4 fn_005dced4(undefined4 param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_005baef4();
  fn_005bcf78(param_1,(char *)&DAT_005dcf10,(char *)&DAT_005dcefc);
  return uVar1;
}



void fn_005dc9d0(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
  if (cVar1 != '\0') {
    iVar2 = *(int *)(param_1 + 0x104);
    if (iVar2 == 7) {
      if ((*(char *)(*(int *)(param_1 + 0x170) + 0x5f) != '\0') ||
         (*(char *)(param_1 + 0x160) != '\0')) {
        *(undefined4 *)(param_1 + 0x104) = 0;
        fn_00689824(param_1,1);
      }
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      fn_002ccc34(*(undefined4 *)(param_1 + 0x170));
    }
    else if (iVar2 != 0xf) {
      if (iVar2 == 0x10) {
        *(undefined4 *)(param_1 + 0x104) = 0;
        fn_00689824(param_1,1);
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      }
      else {
        fn_00763a8c(param_1);
      }
    }
    switch(*(undefined4 *)(param_1 + 0x148)) {
    case 0:
      goto switchD_005dca1c_caseD_0;
    case 1:
    case 6:
    case 8:
    case 9:
      if (cVar1 != '\x03') {
        if (cVar1 == '\x02') {
          fn_00749130(param_1,DAT_00898214,(char *)&DAT_005dc008,0,1,1,0);
          fn_005fbc24(param_1,7);
          *(undefined4 *)(param_1 + 0x148) = 0xb;
          *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
          fn_005fbae8(param_1);
          return;
        }
        return;
      }
      fn_00749218(param_1,DAT_00898214,(char *)&DAT_005dcba4);
      fn_005fbc24(param_1,1);
      *(undefined4 *)(param_1 + 0x148) = 10;
switchD_005dca1c_caseD_0:
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      break;
    default:
      fn_00763a8c(param_1);
      return;
    case 0xb:
      *(undefined4 *)(param_1 + 0x148) = 0xc;
      return;
    case 0xc:
      fn_00749218(param_1,DAT_00898214,(char *)&DAT_005dcbc4);
      iVar2 = fn_006c41e4(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x120) + 0x3c) + 8));
      if (iVar2 == 2) {
        fn_00689efc(param_1,0x3a,0,0,unaff_r4,in_lr);
      }
      else {
        fn_00689efc(param_1,0x39,0,0,unaff_r4,in_lr);
      }
      fn_0066ec10(DAT_00897850);
      *(undefined4 *)(param_1 + 0x148) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
      return;
    }
  }
  return;
}


