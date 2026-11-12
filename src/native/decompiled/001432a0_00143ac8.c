#include "001432a0_00143ac8.h"



undefined4 fn_00143ac8(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((DAT_0089a508 & DAT_0089a509) == 0) {
    return 0;
  }
  fn_00170704(&DAT_008e3058);
  uVar1 = fn_001709d8(&DAT_008e3000,param_1,param_2,0,0,0);
  fn_001707b4(&DAT_008e3058);
  return uVar1;
}



void fn_001439d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 in_r3;
  undefined4 in_stack_00000000;
  undefined4 in_stack_00000004;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 in_stack_00000010;
  undefined4 in_stack_00000014;
  
  puVar1 = (undefined4 *)fn_00153bfc();
  puVar2 = puVar1 + 2;
  *puVar1 = &DAT_00858ed8;
  if (puVar2 != (undefined4 *)0x0) {
    puVar1[3] = in_r3;
    *puVar2 = &DAT_00858e90;
    *(undefined1 *)(puVar1 + 0xc) = 0;
    puVar1[6] = 0xffffffff;
    puVar1[7] = 0xffffffff;
    puVar1[8] = in_stack_00000008;
    puVar1[9] = in_stack_0000000c;
    puVar1[10] = in_stack_00000010;
    puVar1[0xb] = in_stack_00000014;
    puVar1[4] = in_stack_00000000;
    puVar1[5] = in_stack_00000004;
  }
  puVar1[0xe] = puVar2;
  return;
}



undefined4 * fn_001438fc(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  
  *param_1 = &DAT_00858e5c;
  param_1[1] = 0;
  piVar1 = (int *)fn_00145b00(4,&DAT_00812c8c);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = 0;
    fn_00117984();
    piVar2 = (int *)fn_00153970();
    piVar3 = (int *)*piVar1;
    if (piVar3 != piVar2) {
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
      *piVar1 = (int)piVar2;
    }
    fn_001539e4(piVar1,param_2,param_3);
  }
  piVar2 = (int *)param_1[1];
  if (piVar2 != piVar1) {
    if (piVar2 != (int *)0x0) {
      if ((int *)*piVar2 != (int *)0x0) {
        (**(code **)(*(int *)*piVar2 + 8))();
      }
      fn_002feef8(piVar2);
    }
    param_1[1] = piVar1;
  }
  return param_1;
}



int * fn_00143828(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  
  if (*param_1 != 0) {
    fn_00150ed8();
    for (piVar4 = (int *)param_1[2]; (int *)param_1[3] != piVar4; piVar4 = piVar4 + 2) {
      if ((char)piVar4[1] != '\0') {
        iVar3 = *piVar4;
        fn_00150e8c(*param_1,param_1[1],iVar3);
        *(undefined1 *)(param_1[2] + iVar3 * 8 + 5) = 0xff;
        *(undefined1 *)(param_1[2] + iVar3 * 8 + 4) = 0;
      }
    }
    (*(code *)**(undefined4 **)*param_1)();
    fn_00143b48(*param_1);
    *param_1 = 0;
  }
  param_1[1] = 0;
  uVar2 = param_1[2];
  uVar1 = uVar2;
  if ((uint)param_1[3] <= uVar2) {
    for (; uVar1 != param_1[3]; uVar1 = uVar1 + 8) {
    }
  }
  fn_001008c4(uVar2,(int)(param_1[4] - uVar2) >> 3,0);
  return param_1;
}



void fn_00143498(int param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint local_38;
  uint local_34 [4];
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar8 = &local_38;
  param_2[8] = 0;
  uVar2 = (**(code **)(*param_2 + 0xc))(param_2);
  puVar1[1] = uVar2;
  iVar3 = fn_001287dc(0x4e8,0x80);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = fn_00151100(iVar3,param_2);
  }
  *puVar1 = uVar2;
  puVar12 = puVar1 + 2;
  local_34[0] = param_2[5];
  if (0x1fffffff < (uint)param_2[5]) {
    local_38 = 0x1fffffff;
    fn_002ff628(8,&DAT_008c7639);
  }
  if ((uint)((int)(puVar1[4] - *puVar12) >> 3) < local_34[0]) {
    uVar17 = (int)(puVar1[3] - *puVar12) >> 3;
    local_38 = uVar17 + (uVar17 >> 1) + (uVar17 >> 3);
    if (local_38 < uVar17 + 0x20) {
      local_38 = uVar17 + 0x20;
    }
    if (local_38 <= local_34[0]) {
      puVar8 = local_34;
    }
    uVar17 = *puVar8;
    puVar4 = (undefined4 *)fn_00100fc6(uVar17 << 3,0);
    puVar16 = (undefined4 *)puVar1[3];
    puVar11 = puVar4;
    for (puVar5 = (undefined4 *)*puVar12; puVar5 != puVar16; puVar5 = puVar5 + 2) {
      if (puVar11 != (undefined4 *)0x0) {
        uVar2 = puVar5[1];
        *puVar11 = *puVar5;
        puVar11[1] = uVar2;
      }
      puVar11 = puVar11 + 2;
    }
    uVar6 = *puVar12;
    uVar7 = uVar6;
    if ((uint)puVar1[3] < uVar6) {
      do {
        uVar7 = uVar7 + 8;
      } while (uVar7 != puVar1[3]);
    }
    fn_001008c4(uVar6,(int)(puVar1[4] - uVar6) >> 3,0);
    uVar7 = *puVar12;
    puVar1[2] = puVar4;
    puVar1[3] = (puVar1[3] - uVar7 & 0xfffffff8) + (int)puVar4;
    puVar1[4] = puVar4 + uVar17 * 2;
  }
  uVar17 = 0;
  if (param_2[5] != 0) {
    do {
      puVar12 = puVar1 + 2;
      puVar8 = (uint *)puVar1[3];
      uVar7 = 0xff00;
      if (puVar8 == (uint *)puVar1[4]) {
        uVar6 = (int)((int)puVar8 - *puVar12) >> 3;
        if (uVar6 < (uint)((int)((int)puVar1[4] - *puVar12) >> 3)) {
          puVar1[3] = puVar8 + 2;
          if (puVar8 != (uint *)0x0) {
            *puVar8 = puVar8[-2];
            puVar8[1] = puVar8[-1];
          }
          puVar12 = puVar8 + -2;
          puVar13 = puVar8;
          if (puVar8 < puVar12) {
            iVar3 = (int)puVar12 - (int)puVar8;
            if (0 < iVar3) {
              if (iVar3 * 0x10000000 < 0) {
                puVar12 = puVar8 + -4;
                puVar13 = puVar8 + -2;
                *puVar13 = *puVar12;
                puVar8[-1] = puVar8[-3];
              }
              for (iVar3 = iVar3 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
                uVar7 = puVar12[-1];
                puVar13[-2] = puVar12[-2];
                puVar13[-1] = uVar7;
                uVar7 = puVar12[-3];
                puVar13[-4] = puVar12[-4];
                puVar13[-3] = uVar7;
                puVar13 = puVar13 + -4;
                puVar12 = puVar12 + -4;
              }
            }
          }
          else {
            while (puVar8 != puVar12) {
              uVar7 = puVar12[-1];
              puVar13[-2] = puVar12[-2];
              puVar13[-1] = uVar7;
              puVar13 = puVar13 + -2;
              puVar12 = puVar12 + -2;
            }
          }
          *puVar8 = uVar17;
          puVar8[1] = 0xff00;
        }
        else {
          uVar18 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
          if (uVar18 < uVar6 + 0x20) {
            uVar18 = uVar6 + 0x20;
          }
          puVar9 = (uint *)fn_00100fc6(uVar18 << 3,0);
          puVar14 = puVar9;
          for (puVar13 = (uint *)*puVar12; puVar13 != puVar8; puVar13 = puVar13 + 2) {
            if (puVar14 != (uint *)0x0) {
              uVar6 = puVar13[1];
              *puVar14 = *puVar13;
              puVar14[1] = uVar6;
            }
            puVar14 = puVar14 + 2;
          }
          puVar13 = (uint *)(((int)puVar8 - *puVar12 & 0xfffffff8) + (int)puVar9);
          if (puVar13 != (uint *)0x0) {
            *puVar13 = uVar17;
            puVar13[1] = uVar7;
          }
          puVar14 = (uint *)puVar1[3];
          puVar13 = (uint *)(((int)puVar8 - *puVar12 & 0xfffffff8) + (int)puVar9);
          for (; puVar8 != puVar14; puVar8 = puVar8 + 2) {
            puVar10 = puVar13 + 2;
            if (puVar10 != (uint *)0x0) {
              uVar7 = puVar8[1];
              *puVar10 = *puVar8;
              puVar13[3] = uVar7;
            }
            puVar13 = puVar10;
          }
          uVar6 = *puVar12;
          uVar15 = puVar1[3];
          uVar7 = uVar6;
          if (uVar15 < uVar6) {
            do {
              uVar7 = uVar7 + 8;
            } while (uVar7 != uVar15);
          }
          fn_001008c4(uVar6,(int)(puVar1[4] - uVar6) >> 3,0);
          puVar1[4] = puVar9 + uVar18 * 2;
          puVar1[3] = puVar9 + ((int)(uVar15 - uVar6) >> 3) * 2 + 2;
          *puVar12 = (uint)puVar9;
        }
      }
      else {
        puVar1[3] = puVar8 + 2;
        if (puVar8 != (uint *)0x0) {
          *puVar8 = uVar17;
          puVar8[1] = 0xff00;
        }
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < (uint)param_2[5]);
  }
  return;
}



void fn_001433d8(int *param_1)

{
  if (param_1[10] != 0) {
    fn_00152a3c(0x30000);
    param_1[10] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_00152a3c(0x20000);
    param_1[0xb] = 0;
  }
  if (param_1[0xc] != 0) {
    fn_00152a3c(0x30000);
    param_1[0xc] = 0;
  }
  if (param_1[9] != 0) {
    fn_00152a3c(0x30000);
    param_1[9] = 0;
  }
  if (param_1[8] != 0) {
    fn_00143a58();
    param_1[8] = 0;
  }
  if (param_1[3] != 0) {
    fn_00143b48();
    param_1[3] = 0;
  }
  if (param_1[7] != 0) {
    fn_00143b48();
    param_1[7] = 0;
  }
  if (*param_1 != 0) {
    fn_002feef8();
    *param_1 = 0;
  }
  return;
}



void fn_00143a58(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  if ((DAT_0089a508 & DAT_0089a509) == 0) {
    return;
  }
  fn_0014e774(&DAT_008e3000,param_1);
  fn_00170704(&DAT_008e3058);
  fn_0015e5c0(&DAT_008e3000,param_1);
  fn_001707b4(&DAT_008e3058);
  return;
}



void fn_001432a0(int param_1)

{
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  *(undefined1 *)(param_1 + 10) = 3;
  *(undefined1 *)(param_1 + 0xb) = 5;
  *(undefined1 *)(param_1 + 0x12) = 0x19;
  *(undefined1 *)(param_1 + 0x13) = 0x54;
  return;
}


