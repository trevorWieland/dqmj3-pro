#include "004a7f94_004d51ac.h"



void fn_004d51ac(void)

{
  if (DAT_008bf4f4 != (int *)0x0) {
    (**(code **)(*DAT_008bf4f4 + 0x38))();
    if (DAT_008bf4f4 != (int *)0x0) {
      (**(code **)(*DAT_008bf4f4 + 0x30))();
    }
    DAT_008bf4f4 = (int *)0x0;
  }
  return;
}



void fn_004b8d4c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  param_1[2] = 0x71;
  param_1[1] = &DAT_007dba44;
  return;
}



/* WARNING: Removing unreachable block (ram,0x004b0330) */
/* WARNING: Removing unreachable block (ram,0x004b05f4) */

void fn_004b022c(int param_1,undefined4 param_2)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int *local_60;
  int *local_5c;
  int *local_58;
  int *local_54;
  int *local_50;
  int local_4c;
  int *local_44;
  int *local_3c [6];
  
  piVar3 = (int *)fn_0048cbf8(param_2,0);
  if (piVar3 != (int *)0x0) {
    piVar11 = (int *)piVar3[4];
    piVar12 = (int *)*piVar11;
    while (piVar10 = piVar12, piVar10 != piVar11) {
      piVar12 = (int *)piVar3[4];
      if (piVar10 != (int *)piVar3[4]) {
        piVar12 = (int *)*piVar10;
        *(int **)piVar10[1] = piVar12;
        *(int *)(*piVar10 + 4) = piVar10[1];
        piVar3[5] = piVar3[5] + -1;
        (**(code **)piVar10[2])(piVar10 + 2);
        *piVar10 = piVar3[1];
        piVar3[1] = (int)piVar10;
      }
    }
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if ((uint)(*(int *)(iVar4 + 0x10) - iVar7) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
    }
    else {
      uVar9 = 0;
      puVar5 = (uint *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + iVar7);
      uVar8 = *puVar5;
      bVar1 = *(byte *)((int)puVar5 + 3);
      *(int *)(param_1 + 0xc) = iVar7 + 4;
      while ((uVar9 < (uVar8 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0')))
      {
        (**(code **)(*DAT_008c3dd0 + 0xc))(DAT_008c3dd0,param_1);
        piVar12 = local_54;
        if (*(char *)(param_1 + 4) != '\0') {
          piVar10 = (int *)piVar3[4];
          piVar11 = (int *)*piVar10;
          while (piVar2 = piVar11, piVar2 != piVar10) {
            piVar11 = (int *)piVar3[4];
            if (piVar2 != (int *)piVar3[4]) {
              piVar11 = (int *)*piVar2;
              *(int **)piVar2[1] = piVar11;
              *(int *)(*piVar2 + 4) = piVar2[1];
              piVar3[5] = piVar3[5] + -1;
              (**(code **)piVar2[2])(piVar2 + 2);
              *piVar2 = piVar3[1];
              piVar3[1] = (int)piVar2;
            }
          }
          if (piVar12 == (int *)0x0) {
            return;
          }
          (**(code **)(*piVar12 + 4))(piVar12);
          return;
        }
        piVar11 = (int *)piVar3[1];
        iVar4 = piVar3[4];
        if (piVar11 == (int *)0x0) {
          if (piVar3[2] == piVar3[3]) {
            if (*piVar3 == 0) {
              local_54 = (int *)&DAT_00000020;
            }
            else {
              uVar6 = *(uint *)(*piVar3 + 4);
              local_54 = (int *)(uVar6 + (uVar6 >> 1) + (uVar6 >> 3));
              if (local_54 < (int *)(uVar6 + 0x20)) {
                local_54 = (int *)(uVar6 + 0x20);
              }
            }
            local_60 = (int *)fn_0015ece0(0xc);
            iVar7 = fn_0015ece0((int)local_54 << 4);
            local_60[2] = iVar7;
            *local_60 = *piVar3;
            local_60[1] = (int)local_54;
            *piVar3 = (int)local_60;
            iVar7 = local_60[2];
            piVar3[2] = iVar7;
            piVar3[3] = iVar7 + (int)local_54 * 0x10;
          }
          piVar11 = (int *)piVar3[2];
          piVar3[2] = (int)(piVar11 + 4);
        }
        else {
          piVar3[1] = *piVar11;
        }
        if (piVar11 + 2 != (int *)0x0) {
          piVar11[3] = (int)piVar12;
          piVar12 = (int *)0x0;
          piVar11[2] = (int)&DAT_008533d0;
        }
        *piVar11 = iVar4;
        piVar11[1] = *(int *)(iVar4 + 4);
        **(undefined4 **)(iVar4 + 4) = piVar11;
        *(int **)(iVar4 + 4) = piVar11;
        piVar3[5] = piVar3[5] + 1;
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 4))(piVar12);
        }
        uVar9 = uVar9 + 1;
      }
    }
    return;
  }
  fn_00101a1c(&local_60,fn_004b4d30,0x18,1);
  piVar3 = local_50;
  piVar12 = (int *)*local_50;
  while (piVar11 = piVar12, piVar11 != piVar3) {
    piVar12 = local_50;
    if (piVar11 != local_50) {
      piVar12 = (int *)*piVar11;
      *(int **)piVar11[1] = piVar12;
      *(int *)(*piVar11 + 4) = piVar11[1];
      local_4c = local_4c + -1;
      (**(code **)piVar11[2])(piVar11 + 2);
      *piVar11 = (int)local_5c;
      local_5c = piVar11;
    }
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0xc);
  if ((uint)(*(int *)(iVar4 + 0x10) - iVar7) < 4) {
    *(undefined1 *)(param_1 + 4) = 1;
  }
  else {
    puVar5 = (uint *)(*(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0xc) + iVar7);
    uVar9 = 0;
    uVar8 = *puVar5;
    bVar1 = *(byte *)((int)puVar5 + 3);
    *(int *)(param_1 + 0xc) = iVar7 + 4;
    while ((uVar9 < (uVar8 & 0xffffff | (uint)bVar1 << 0x18) && (*(char *)(param_1 + 4) == '\0'))) {
      (**(code **)(*DAT_008c3dd0 + 0xc))(DAT_008c3dd0,param_1,local_3c);
      piVar12 = local_3c[0];
      piVar3 = local_50;
      if (*(char *)(param_1 + 4) != '\0') {
        piVar11 = (int *)*local_50;
        while (piVar10 = piVar11, piVar10 != piVar3) {
          piVar11 = local_50;
          if (piVar10 != local_50) {
            piVar11 = (int *)*piVar10;
            *(int **)piVar10[1] = piVar11;
            *(int *)(*piVar10 + 4) = piVar10[1];
            local_4c = local_4c + -1;
            (**(code **)piVar10[2])(piVar10 + 2);
            *piVar10 = (int)local_5c;
            local_5c = piVar10;
          }
        }
        if (piVar12 != (int *)0x0) {
          (**(code **)(*piVar12 + 4))(piVar12);
        }
        break;
      }
      if (local_5c == (int *)0x0) {
        if (local_58 == local_54) {
          if (local_60 == (int *)0x0) {
            local_3c[0] = (int *)&DAT_00000020;
          }
          else {
            uVar6 = local_60[1];
            local_3c[0] = (int *)(uVar6 + (uVar6 >> 1) + (uVar6 >> 3));
            if (local_3c[0] < (int *)(uVar6 + 0x20)) {
              local_3c[0] = (int *)(uVar6 + 0x20);
            }
          }
          local_44 = (int *)fn_0015ece0(0xc);
          iVar4 = fn_0015ece0((int)local_3c[0] << 4);
          local_44[2] = iVar4;
          *local_44 = (int)local_60;
          local_44[1] = (int)local_3c[0];
          local_60 = local_44;
          local_58 = (int *)local_44[2];
          local_54 = local_58 + (int)local_3c[0] * 4;
        }
        piVar11 = local_58;
        local_58 = local_58 + 4;
      }
      else {
        piVar11 = local_5c;
        local_5c = (int *)*local_5c;
      }
      if (piVar11 + 2 != (int *)0x0) {
        piVar11[3] = (int)piVar12;
        piVar12 = (int *)0x0;
        piVar11[2] = (int)&DAT_008533d0;
      }
      *piVar11 = (int)piVar3;
      piVar11[1] = piVar3[1];
      *(int **)piVar3[1] = piVar11;
      piVar3[1] = (int)piVar11;
      local_4c = local_4c + 1;
      if (piVar12 != (int *)0x0) {
        (**(code **)(*piVar12 + 4))(piVar12);
      }
      uVar9 = uVar9 + 1;
    }
  }
  fn_00100414(&local_60,fn_004b4d84,0x18,1);
  return;
}



undefined4
fn_004a7f94(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 auStack_78 [64];
  undefined4 local_38;
  int iStack_34;
  int iStack_30;
  undefined4 local_2c;
  int iStack_28;
  
  iStack_34 = param_1;
  iStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  fn_004b73b0(auStack_78);
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  fn_004ba7d4(auStack_78,1,*(undefined2 *)(param_1 + 0x20));
  iVar2 = fn_00455e10(param_2);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return 0;
  }
  local_38 = *(undefined4 *)(param_2 + 0x44);
  fn_0015ef4c(auStack_78,&local_38,4);
  local_38 = 6;
  fn_0015ef4c(auStack_78,&local_38,4);
  (**(code **)(*DAT_008c3dcc + 8))(DAT_008c3dcc,auStack_78,*(undefined4 *)(param_4 + 4));
  if (param_2 != 0) {
    fn_0048ca64(param_2,local_2c);
    fn_0048ca64(param_2,param_5);
    fn_0048ca64(param_2,param_6);
    fn_0048ca64(param_2,param_7);
  }
  DAT_008e955c = fn_004a83d8;
  if ((*(char *)(param_1 + 0x34) == '\0') || ((*(uint *)(param_1 + 0x2c) & 0x10) == 0)) {
    uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
    (**(code **)(*piVar3 + 0xc))(piVar3);
    fn_004b7520(auStack_78);
    return uVar4;
  }
  (**(code **)(*piVar3 + 0xc))(piVar3);
  uVar4 = fn_0046e0a4(param_1,param_2,auStack_78);
  fn_004b7520(auStack_78);
  return uVar4;
}


