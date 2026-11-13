#include "005d6cb4_005d76a8.h"



void fn_005d76a8(int param_1)

{
  fn_00789e34(param_1 + 0x14);
  fn_00789e34(param_1 + 0x20);
  fn_00789e34(param_1 + 0x2c);
  fn_00789e34(param_1 + 0x38);
  return;
}



void fn_005d7274(int *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 *puVar6;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  int iStack_ec;
  undefined1 *local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  int local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [32];
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  iVar2 = (**(code **)(*param_1 + 0x6c))(param_1,s_athletics_008c6714,0);
  if (iVar2 != 0) {
    fn_00102908(auStack_28,8,s_pos__d_008c671e,param_3);
    fn_007898e0(param_2);
    fn_006f6cbc(&local_e0,param_1[1],auStack_28);
    iVar2 = local_c4;
    puVar1 = local_e0;
    local_f4 = local_cc;
    uStack_f0 = uStack_c8;
    iStack_ec = local_c4;
    uStack_104 = local_dc;
    uStack_100 = uStack_d8;
    uStack_fc = uStack_d4;
    uStack_f8 = local_d0;
    if (((DAT_008919c8 & 1) == 0) && (iVar3 = fn_00303afc(&DAT_008919c8), iVar3 != 0)) {
      DAT_008919c4 = fn_002febd8(s_pos____008c749d);
    }
    uVar4 = fn_002febd8(iVar2);
    if ((DAT_008919c4 < uVar4) &&
       ((iVar2 = fn_00101c78((uint)DAT_008919c4 + iVar2,auStack_20,10), iVar2 == 0 ||
        (iVar2 = fn_00154ac8(), iVar2 != 0)))) {
      fn_0078998c(param_2,puVar1);
      puVar6 = (undefined1 *)0x0;
      if (puVar1 != (undefined1 *)0x0) {
        do {
          fn_00176ec8(auStack_b4,&uStack_104,puVar6);
          fn_0017821c(auStack_70,auStack_b4,0x44);
          local_e0 = &DAT_008f9d04;
          fn_001008cc(&local_e0,auStack_70);
          local_dc = local_50;
          uStack_d8 = uStack_4c;
          uStack_d4 = uStack_48;
          local_d0 = local_44;
          local_cc = uStack_40;
          uStack_c8 = uStack_3c;
          local_c4 = local_38;
          uStack_c0 = uStack_34;
          uStack_bc = uStack_30;
          iVar2 = *(int *)(param_2 + 4);
          if (iVar2 == *(int *)(param_2 + 8)) {
            fn_00789678(param_2,iVar2,&local_e0);
          }
          else {
            *(int *)(param_2 + 4) = iVar2 + 0x28;
            if (iVar2 != 0) {
              fn_001c6ba4(iVar2,&local_e0);
            }
          }
          if (local_e0 != &DAT_008f9d04) {
            piVar5 = (int *)(local_e0 + -0xc);
            iVar2 = *piVar5;
            if ((iVar2 == -1) || ((piVar5 != &DAT_008f9cf8 && (*piVar5 = iVar2 + -1, iVar2 == 0))))
            {
              fn_001008c4(local_e0 + -0xc,*(int *)(local_e0 + -8) + 0xe,0);
            }
          }
          puVar6 = puVar6 + 1;
        } while (puVar6 < puVar1);
      }
    }
  }
  return;
}



void fn_005d6cb4(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  short *psVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  short *local_d0;
  undefined4 *local_cc;
  char *local_c8;
  char *local_c4;
  char *local_c0;
  char *local_bc;
  undefined4 local_b8;
  char local_b4;
  undefined1 local_b3;
  int local_b0;
  int local_ac;
  int local_a8;
  char *local_a4 [2];
  undefined1 auStack_9c [20];
  char *local_88;
  char *local_84;
  undefined2 local_80;
  undefined1 auStack_7c [44];
  undefined4 local_50;
  char *local_48;
  undefined1 local_44;
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  char *local_2c [2];
  
  iVar2 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x2c;
  if (iVar2 != 0) {
    local_50 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
    iVar2 = fn_00163868(iVar2);
    iVar11 = 0;
    local_b4 = '\0';
    local_b3 = (undefined1)iVar2;
    local_cc = (undefined4 *)0x0;
    local_bc = (char *)0x0;
    local_b8 = 0;
    local_c0 = (char *)0x0;
    local_c4 = (char *)0x0;
    local_c8 = (char *)0x0;
    puVar3 = (undefined4 *)fn_00100fc6(0xc,0);
    uVar4 = fn_00100fc6(0x800,0);
    puVar3[2] = uVar4;
    *puVar3 = local_cc;
    puVar3[1] = 0x20;
    local_bc = (char *)puVar3[2];
    local_c0 = local_bc + 0x800;
    local_c4 = local_bc + 0x40;
    local_bc[8] = '\0';
    local_bc[9] = '\0';
    local_bc[10] = '\0';
    local_bc[0xb] = '\0';
    local_bc[0xc] = '\0';
    local_bc[0xd] = '\0';
    local_bc[0xe] = '\0';
    local_bc[0xf] = '\0';
    *local_bc = '\0';
    local_bc[4] = '\0';
    local_bc[5] = '\0';
    local_bc[6] = '\0';
    local_bc[7] = '\0';
    *(char **)(local_bc + 8) = local_bc;
    *(char **)(local_bc + 0xc) = local_bc;
    iVar15 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 0x2c);
    iVar2 = (*(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14)) / 0x2c;
    local_cc = puVar3;
    if (0 < iVar2) {
      do {
        piVar14 = (int *)(*(int *)(param_1 + 0x14) + iVar11 * 0x2c);
        iVar13 = *piVar14;
        iVar5 = fn_00147e6c(iVar15,iVar13,3);
        if (iVar5 == 0) {
          local_80 = fn_00101c78(iVar13 + 3,auStack_30,10);
          iVar5 = fn_001c6ba4(auStack_7c,piVar14);
          bVar16 = true;
          *(int *)(iVar5 + 0x28) = piVar14[10];
          psVar9 = (short *)(iVar5 + -4);
          pcVar12 = local_bc;
          if (*(char **)(local_bc + 4) != (char *)0x0) {
            pcVar10 = *(char **)(local_bc + 4);
            do {
              pcVar12 = pcVar10;
              bVar16 = *psVar9 < *(short *)(pcVar12 + 0x10);
              if (bVar16) {
                pcVar10 = *(char **)(pcVar12 + 8);
              }
              else {
                pcVar10 = *(char **)(pcVar12 + 0xc);
              }
            } while (pcVar10 != (char *)0x0);
          }
          if (local_b4 == '\0') {
            if (bVar16) {
              if (pcVar12 == *(char **)(local_bc + 8)) {
                local_d0 = psVar9;
                fn_0077c35c(&local_88,&local_cc);
                local_48 = local_88;
                local_44 = 1;
                goto LAB_005d6f7c;
              }
              if ((*pcVar12 == '\0') && (*(char **)(*(int *)(pcVar12 + 4) + 4) == pcVar12)) {
                pcVar12 = *(char **)(pcVar12 + 0xc);
              }
              else {
                pcVar10 = *(char **)(pcVar12 + 8);
                if (*(char **)(pcVar12 + 8) == (char *)0x0) {
                  pcVar10 = pcVar12;
                  pcVar12 = *(char **)(pcVar12 + 4);
                  while (pcVar10 == *(char **)(pcVar12 + 8)) {
                    pcVar10 = pcVar12;
                    pcVar12 = *(char **)(pcVar12 + 4);
                  }
                }
                else {
                  do {
                    pcVar12 = pcVar10;
                    pcVar10 = *(char **)(pcVar12 + 0xc);
                  } while (*(char **)(pcVar12 + 0xc) != (char *)0x0);
                }
              }
            }
            if (*(short *)(pcVar12 + 0x10) < *psVar9) {
              local_d0 = psVar9;
              fn_0077c35c(&local_84,&local_cc);
              local_48 = local_84;
              local_44 = 1;
            }
            else {
              local_44 = 0;
              local_48 = pcVar12;
            }
          }
          else {
            local_d0 = psVar9;
            fn_0077c35c(local_2c,&local_cc);
            local_48 = local_2c[0];
            local_44 = 1;
          }
LAB_005d6f7c:
          fn_002fedf4(auStack_7c);
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < iVar2);
    }
    sVar1 = fn_00101c78(iVar15 + 3,auStack_34,10);
    uVar6 = fn_006c8a2c(local_50);
    iVar2 = fn_006c89fc(local_50);
    if ((iVar2 == 2) || (iVar2 = fn_006c89fc(local_50), iVar2 == 6)) {
      uVar6 = uVar6 - 1;
    }
    pcVar10 = *(char **)(local_bc + 4);
    pcVar12 = local_bc;
    while (pcVar7 = pcVar10, pcVar7 != (char *)0x0) {
      if (*(short *)(pcVar7 + 0x10) < sVar1) {
        pcVar10 = *(char **)(pcVar7 + 0xc);
      }
      else {
        pcVar10 = *(char **)(pcVar7 + 8);
        pcVar12 = pcVar7;
      }
    }
    if ((pcVar12 == local_bc) || (sVar1 < *(short *)(pcVar12 + 0x10))) {
      pcVar12 = local_bc;
    }
    local_ac = 0;
    local_b0 = 0;
    local_a8 = 0;
    fn_00789bd4(&local_b0,0,pcVar12 + 0x14);
    pcVar10 = *(char **)(pcVar12 + 0xc);
    if (*(char **)(pcVar12 + 0xc) == (char *)0x0) {
      pcVar10 = *(char **)(pcVar12 + 4);
      while (pcVar7 = pcVar10, pcVar12 == *(char **)(pcVar7 + 0xc)) {
        pcVar10 = *(char **)(pcVar7 + 4);
        pcVar12 = pcVar7;
      }
      if (*(char **)(pcVar12 + 0xc) != pcVar7) {
        pcVar12 = pcVar7;
      }
    }
    else {
      do {
        pcVar12 = pcVar10;
        pcVar10 = *(char **)(pcVar12 + 8);
      } while (pcVar10 != (char *)0x0);
    }
    while (iVar2 = local_ac, (uint)((local_ac - local_b0) / 0x2c) <= uVar6) {
      if (pcVar12 == local_bc) {
        pcVar12 = *(char **)(local_bc + 8);
      }
      if (local_ac == local_a8) {
        fn_00789bd4(&local_b0);
      }
      else {
        iVar11 = local_ac + 0x2c;
        bVar16 = local_ac != 0;
        local_ac = iVar11;
        if (bVar16) {
          iVar2 = fn_001c6ba4(iVar2,pcVar12 + 0x14);
          *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(pcVar12 + 0x3c);
        }
      }
      pcVar10 = *(char **)(pcVar12 + 0xc);
      if (*(char **)(pcVar12 + 0xc) == (char *)0x0) {
        pcVar10 = *(char **)(pcVar12 + 4);
        while (pcVar7 = pcVar10, pcVar12 == *(char **)(pcVar7 + 0xc)) {
          pcVar10 = *(char **)(pcVar7 + 4);
          pcVar12 = pcVar7;
        }
        if (*(char **)(pcVar12 + 0xc) != pcVar7) {
          pcVar12 = pcVar7;
        }
      }
      else {
        do {
          pcVar12 = pcVar10;
          pcVar10 = *(char **)(pcVar12 + 8);
        } while (*(char **)(pcVar12 + 8) != (char *)0x0);
      }
    }
    if (pcVar12 == local_bc) {
      pcVar12 = *(char **)(local_bc + 8);
    }
    if (local_ac == local_a8) {
      fn_00789bd4(&local_b0);
    }
    else {
      iVar11 = local_ac + 0x2c;
      bVar16 = local_ac != 0;
      local_ac = iVar11;
      if (bVar16) {
        iVar2 = fn_001c6ba4(iVar2,pcVar12 + 0x14);
        *(undefined4 *)(iVar2 + 0x28) = *(undefined4 *)(pcVar12 + 0x3c);
      }
    }
    iVar2 = *(int *)(param_1 + 0x14);
    *(int *)(param_1 + 0x14) = local_b0;
    uVar4 = *(undefined4 *)(param_1 + 0x18);
    *(int *)(param_1 + 0x18) = local_ac;
    uVar8 = *(undefined4 *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = local_a8;
    local_b0 = iVar2;
    local_ac = uVar4;
    local_a8 = uVar8;
    fn_0078a298(&local_b0);
    if (local_bc != (char *)0x0) {
      local_a4[0] = local_bc;
      local_d0 = *(short **)(local_bc + 8);
      fn_0077bbbc(auStack_9c,&local_cc,&local_d0,local_a4);
      *(char **)(local_bc + 0xc) = local_c8;
      local_c8 = local_bc;
      piVar14 = local_cc;
      while (piVar14 != (int *)0x0) {
        local_cc = (undefined4 *)*piVar14;
        fn_001008c4(piVar14[2],piVar14[1],0);
        fn_001008c4(piVar14,1,0);
        piVar14 = local_cc;
      }
    }
  }
  return;
}


