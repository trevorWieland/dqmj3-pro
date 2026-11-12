#include "004ac184_004ac810.h"



void fn_004ac810(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  char local_60 [4];
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50 [2];
  int local_48;
  undefined1 local_44 [4];
  int local_40;
  undefined4 local_3c;
  int local_38 [3];
  undefined1 local_2c [4];
  undefined4 local_28;
  
  local_40 = (int)*(char *)(param_1 + 0x3b);
  local_54 = 0;
  if (local_40 == 0) {
    local_5c = local_5c & 0xffffff00;
    local_60[0] = *(char *)(param_2 + 4);
    puVar3 = &local_5c;
    if (local_60[0] == '\0') {
      puVar3 = (uint *)local_60;
    }
    fn_0015ef4c(param_1,puVar3,1);
    local_54 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_58 = 0;
    fn_0015ef4c(param_1,&local_58,4);
  }
  fn_0015ef4c(param_1,param_2 + 8,4);
  fn_0045f6f0(param_1,param_2 + 0xc);
  fn_0015ef4c(param_1,param_2 + 0x14,2);
  fn_0046d5f8(param_1,param_2 + 0x18);
  fn_0074cd60(param_1,param_2 + 0x38);
  fn_0074cd60(param_1,param_2 + 0x4c);
  fn_0015ef4c(param_1,param_2 + 0x60,4);
  fn_0015ef4c(param_1,param_2 + 100,2);
  fn_0015ef4c(param_1,param_2 + 0x68,4);
  local_50[0] = *(int *)(param_2 + 0x70) - *(int *)(param_2 + 0x6c) >> 3;
  fn_0015ef4c(param_1,local_50,4);
  iVar6 = *(int *)(param_2 + 0x70);
  for (iVar5 = *(int *)(param_2 + 0x6c); iVar5 != iVar6; iVar5 = iVar5 + 8) {
    fn_0045f6f0(param_1,iVar5);
  }
  local_38[0] = (*(int *)(param_2 + 0x7c) - *(int *)(param_2 + 0x78)) / 0x28;
  fn_0015ef4c(param_1,local_38,4);
  iVar6 = *(int *)(param_2 + 0x7c);
  for (iVar5 = *(int *)(param_2 + 0x78); iVar5 != iVar6; iVar5 = iVar5 + 0x28) {
    cVar1 = *(char *)(param_1 + 0x3b);
    iVar8 = 0;
    if (cVar1 == '\0') {
      local_2c[0] = 0;
      piVar4 = &local_48;
      if (*(char *)(iVar5 + 4) != '\0') {
        piVar4 = (int *)local_2c;
      }
      uVar2 = (uint)local_48 >> 8;
      local_48 = CONCAT31((int3)uVar2,*(char *)(iVar5 + 4));
      fn_0015ef4c(param_1,piVar4,1);
      iVar8 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      local_28 = 0;
      fn_0015ef4c(param_1,&local_28,4);
    }
    fn_0015ef4c(param_1,iVar5 + 5,1);
    fn_004aa248(param_1,iVar5 + 8);
    if (cVar1 == '\0') {
      iVar7 = *(int *)(*(int *)(param_1 + 8) + 0x10);
      fn_00454cbc(param_1,iVar8);
      local_48 = (iVar7 - iVar8) + -4;
      fn_0015ef4c(param_1,&local_48,4);
      fn_00454cbc(param_1,iVar7);
    }
  }
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_44[0] = 0;
    piVar4 = (int *)local_44;
    if (*(char *)(param_2 + 0x88) == '\0') {
      piVar4 = local_50;
    }
    uVar2 = (uint)local_50[0] >> 8;
    local_50[0] = CONCAT31((int3)uVar2,*(char *)(param_2 + 0x88));
    fn_0015ef4c(param_1,piVar4,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_3c = 0;
    fn_0015ef4c(param_1,&local_3c,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x8a,2);
  fn_00454d74(param_1,param_2 + 0x8c);
  if (cVar1 == '\0') {
    iVar6 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_50[0] = (iVar6 - iVar5) + -4;
    fn_0015ef4c(param_1,local_50,4);
    fn_00454cbc(param_1,iVar6);
  }
  local_50[0] = *(int *)(param_2 + 0x94) - *(int *)(param_2 + 0x90) >> 3;
  fn_0015ef4c(param_1,local_50,4);
  iVar6 = *(int *)(param_2 + 0x94);
  for (iVar5 = *(int *)(param_2 + 0x90); iVar5 != iVar6; iVar5 = iVar5 + 8) {
    fn_0045f6f0(param_1,iVar5);
  }
  if (local_40 == 0) {
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,local_54);
    local_5c = (iVar5 - local_54) - 4;
    fn_0015ef4c(param_1,&local_5c,4);
    fn_00454cbc(param_1,iVar5);
  }
  return;
}



undefined4 * fn_004ac794(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_0046e6d0(param_1,1);
  *puVar1 = &DAT_008555c0;
  if (param_2 != 0) {
    *(short *)(puVar1 + 8) = (short)param_2;
    iVar2 = fn_0015ecdc(0x44);
    if (iVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_004ac794(iVar2,0);
    }
    iVar2 = fn_0045c8f4();
    fn_0047f194(*(undefined4 *)(iVar2 + 0xc),param_2,uVar3);
  }
  return puVar1;
}



void fn_004ac184(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  int *piVar13;
  int *local_138;
  int *local_134;
  int *local_130;
  int *piStack_12c;
  int *local_128;
  int local_124;
  undefined *local_120;
  undefined1 local_11c [4];
  undefined1 auStack_118 [104];
  undefined4 local_b0;
  undefined *local_ac;
  undefined1 local_a8 [4];
  undefined1 auStack_a4 [104];
  undefined4 local_3c;
  int local_38;
  int local_34 [2];
  int local_2c;
  int iStack_28;
  
  local_2c = param_1;
  iStack_28 = param_2;
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00454da8(param_1,&local_138);
    cVar1 = *(char *)(local_2c + 4);
  }
  else {
    fn_00454da8(param_1);
    cVar1 = *(char *)(local_2c + 4);
  }
  if (cVar1 == '\0') {
    piVar11 = *(int **)(*(int *)(param_2 + 0x60) + 4);
    if (piVar11 == (int *)0x0) {
      fn_00101a1c(&local_138,fn_004b4ca4,0x18,1);
      piVar11 = local_128;
      piVar13 = (int *)*local_128;
      local_38 = local_2c;
      while (piVar12 = piVar13, piVar12 != piVar11) {
        piVar13 = local_128;
        if (piVar12 != local_128) {
          piVar13 = (int *)*piVar12;
          *(int **)piVar12[1] = piVar13;
          *(int *)(*piVar12 + 4) = piVar12[1];
          local_124 = local_124 + -1;
          (**(code **)piVar12[2])(piVar12 + 2);
          *piVar12 = (int)local_134;
          local_134 = piVar12;
        }
      }
      iVar7 = *(int *)(local_38 + 8);
      iVar9 = *(int *)(local_38 + 0xc);
      uVar10 = 0;
      if ((uint)(*(int *)(iVar7 + 0x10) - iVar9) < 4) {
        *(undefined1 *)(local_38 + 4) = 1;
      }
      else {
        puVar8 = (uint *)(*(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0xc) + iVar9);
        uVar10 = *puVar8;
        bVar2 = *(byte *)((int)puVar8 + 3);
        *(int *)(local_38 + 0xc) = iVar9 + 4;
        uVar10 = uVar10 & 0xffffff | (uint)bVar2 << 0x18;
      }
      uVar4 = 0;
      if (uVar10 != 0) {
        do {
          local_120 = &DAT_00853b88;
          local_11c[0] = 0;
          iVar9 = fn_0013ce04(auStack_118);
          iVar7 = local_38;
          *(undefined **)(iVar9 + -8) = &DAT_008530ac;
          local_11c[0] = 0;
          cVar1 = *(char *)(local_38 + 0x3b);
          local_34[0] = 0;
          if ((((cVar1 != '\0') ||
               ((fn_0074a4c8(local_38,local_11c), *(char *)(iVar7 + 4) == '\0' &&
                (fn_0074a528(iVar7,local_34), *(char *)(iVar7 + 4) == '\0')))) &&
              (iVar9 = *(int *)(iVar7 + 0xc), *(char *)(iVar7 + 4) == '\0')) &&
             ((fn_0047fba4(iVar7,auStack_118), *(char *)(iVar7 + 4) == '\0' &&
              (fn_0074a528(iVar7,&local_b0), *(char *)(iVar7 + 4) == '\0' && cVar1 == '\0')))) {
            uVar5 = local_34[0] + iVar9;
            if ((uVar5 < *(uint *)(iVar7 + 0xc)) || (*(uint *)(*(int *)(iVar7 + 8) + 0x10) < uVar5))
            {
              *(undefined1 *)(iVar7 + 4) = 1;
            }
            else {
              *(uint *)(iVar7 + 0xc) = uVar5;
            }
          }
          piVar11 = local_128;
          if (local_134 == (int *)0x0) {
            if (local_130 == piStack_12c) {
              if (local_138 == (int *)0x0) {
                uVar5 = 0x20;
              }
              else {
                uVar6 = local_138[1];
                uVar5 = uVar6 + (uVar6 >> 1) + (uVar6 >> 3);
                if (uVar5 < uVar6 + 0x20) {
                  uVar5 = uVar6 + 0x20;
                }
              }
              piVar13 = (int *)fn_0015ece0(0xc);
              iVar7 = fn_0015ece0(uVar5 * 0x7c);
              piVar13[2] = iVar7;
              *piVar13 = (int)local_138;
              piVar13[1] = uVar5;
              local_130 = (int *)piVar13[2];
              piStack_12c = local_130 + uVar5 * 0x1f;
              local_138 = piVar13;
            }
            piVar13 = local_130;
            local_130 = local_130 + 0x1f;
          }
          else {
            piVar13 = local_134;
            local_134 = (int *)*local_134;
          }
          if (piVar13 + 2 != (int *)0x0) {
            piVar13[2] = (int)&DAT_00853b88;
            *(undefined1 *)(piVar13 + 3) = local_11c[0];
            iVar7 = fn_0013cd7c(piVar13 + 4,auStack_118);
            *(undefined4 *)(iVar7 + 0x68) = local_b0;
            *(undefined **)(iVar7 + -8) = &DAT_008530ac;
          }
          *piVar13 = (int)piVar11;
          piVar13[1] = piVar11[1];
          *(int **)piVar11[1] = piVar13;
          piVar11[1] = (int)piVar13;
          local_120 = &DAT_00853b88;
          local_124 = local_124 + 1;
          fn_0013ce98(auStack_118);
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar10);
      }
      fn_00100414(&local_138,fn_004b4d24,0x18,1);
      return;
    }
    piVar12 = (int *)piVar11[4];
    piVar13 = (int *)*piVar12;
    local_134 = (int *)local_2c;
    while (piVar3 = piVar13, piVar3 != piVar12) {
      piVar13 = (int *)piVar11[4];
      if (piVar3 != (int *)piVar11[4]) {
        piVar13 = (int *)*piVar3;
        *(int **)piVar3[1] = piVar13;
        *(int *)(*piVar3 + 4) = piVar3[1];
        piVar11[5] = piVar11[5] + -1;
        (**(code **)piVar3[2])(piVar3 + 2);
        *piVar3 = piVar11[1];
        piVar11[1] = (int)piVar3;
      }
    }
    iVar7 = *(int *)((int)local_134 + 8);
    iVar9 = *(int *)((int)local_134 + 0xc);
    if ((uint)(*(int *)(iVar7 + 0x10) - iVar9) < 4) {
      *(undefined1 *)((int)local_134 + 4) = 1;
      local_138 = (int *)0x0;
    }
    else {
      puVar8 = (uint *)(*(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0xc) + iVar9);
      uVar10 = *puVar8;
      bVar2 = *(byte *)((int)puVar8 + 3);
      *(int *)((int)local_134 + 0xc) = iVar9 + 4;
      local_138 = (int *)(uVar10 & 0xffffff | (uint)bVar2 << 0x18);
    }
    piVar13 = (int *)0x0;
    if (local_138 != (int *)0x0) {
      do {
        local_ac = &DAT_00853b88;
        local_a8[0] = 0;
        iVar7 = fn_0013ce04(auStack_a4);
        piVar12 = local_134;
        *(undefined **)(iVar7 + -8) = &DAT_008530ac;
        local_a8[0] = 0;
        cVar1 = *(char *)((int)local_134 + 0x3b);
        local_130 = (int *)0x0;
        if (((cVar1 != '\0') ||
            ((fn_0074a4c8(local_134,local_a8), *(char *)((int)piVar12 + 4) == '\0' &&
             (fn_0074a528(piVar12,&local_130), *(char *)((int)piVar12 + 4) == '\0')))) &&
           ((iVar7 = *(int *)((int)piVar12 + 0xc), *(char *)((int)piVar12 + 4) == '\0' &&
            ((fn_0047fba4(piVar12,auStack_a4), *(char *)((int)piVar12 + 4) == '\0' &&
             (fn_0074a528(piVar12,&local_3c), *(char *)((int)piVar12 + 4) == '\0' && cVar1 == '\0')
             ))))) {
          uVar10 = (int)local_130 + iVar7;
          if ((uVar10 < *(uint *)((int)piVar12 + 0xc)) ||
             (*(uint *)(*(int *)((int)piVar12 + 8) + 0x10) < uVar10)) {
            *(undefined1 *)((int)piVar12 + 4) = 1;
          }
          else {
            *(uint *)((int)piVar12 + 0xc) = uVar10;
          }
        }
        piVar12 = (int *)piVar11[1];
        iVar7 = piVar11[4];
        if (piVar12 == (int *)0x0) {
          if (piVar11[2] == piVar11[3]) {
            if (*piVar11 == 0) {
              uVar10 = 0x20;
            }
            else {
              uVar4 = *(uint *)(*piVar11 + 4);
              uVar10 = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
              if (uVar10 < uVar4 + 0x20) {
                uVar10 = uVar4 + 0x20;
              }
            }
            piVar12 = (int *)fn_0015ece0(0xc);
            iVar9 = fn_0015ece0(uVar10 * 0x7c);
            piVar12[2] = iVar9;
            *piVar12 = *piVar11;
            piVar12[1] = uVar10;
            *piVar11 = (int)piVar12;
            iVar9 = piVar12[2];
            piVar11[2] = iVar9;
            piVar11[3] = iVar9 + uVar10 * 0x7c;
          }
          piVar12 = (int *)piVar11[2];
          piVar11[2] = (int)(piVar12 + 0x1f);
        }
        else {
          piVar11[1] = *piVar12;
        }
        if (piVar12 + 2 != (int *)0x0) {
          piVar12[2] = (int)&DAT_00853b88;
          *(undefined1 *)(piVar12 + 3) = local_a8[0];
          iVar9 = fn_0013cd7c(piVar12 + 4,auStack_a4);
          *(undefined4 *)(iVar9 + 0x68) = local_3c;
          *(undefined **)(iVar9 + -8) = &DAT_008530ac;
        }
        *piVar12 = iVar7;
        piVar12[1] = *(int *)(iVar7 + 4);
        **(undefined4 **)(iVar7 + 4) = piVar12;
        *(int **)(iVar7 + 4) = piVar12;
        piVar11[5] = piVar11[5] + 1;
        local_ac = &DAT_00853b88;
        fn_0013ce98(auStack_a4);
        piVar13 = (int *)((int)piVar13 + 1);
      } while (piVar13 < local_138);
    }
  }
  return;
}


