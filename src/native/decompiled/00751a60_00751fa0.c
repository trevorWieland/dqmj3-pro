#include "00751a60_00751fa0.h"



void fn_00751fa0(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  undefined *local_50;
  undefined1 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined *local_38;
  code *local_34;
  undefined4 local_30;
  undefined *local_2c;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar2 == 0) {
    local_30 = 0x80010004;
    uVar7 = fn_004b8d4c(&local_3c,&local_30);
    fn_007519e0(param_1,uVar7);
    return;
  }
  local_4c = 0;
  local_48 = (undefined4 *)0x0;
  local_44 = (undefined4 *)0x0;
  local_40 = (undefined4 *)0x0;
  local_50 = &DAT_008557fc;
  local_48 = (undefined4 *)fn_0015ece0(0x80);
  local_40 = local_48 + 0x20;
  local_50 = &DAT_00855654;
  iVar2 = *(int *)(param_1 + 0x110);
  local_44 = local_48;
  if (*(int *)(param_1 + 0x114) != iVar2) {
    do {
      puVar6 = local_44;
      if (*(int *)(iVar2 + 0x10) != 0) {
        puVar9 = (undefined4 *)(iVar2 + 0x10);
        if (local_44 == local_40) {
          uVar1 = (int)local_44 - (int)local_48 >> 2;
          if (uVar1 < (uint)((int)local_40 - (int)local_48 >> 2)) {
            if (local_44 != (undefined4 *)0x0) {
              *local_44 = local_44[-1];
            }
            puVar6 = local_44 + -1;
            iVar8 = (int)puVar6 - (int)local_44;
            if (0 < iVar8 >> 2) {
              puVar5 = local_44;
              if (iVar8 * 0x20000000 < 0) {
                puVar6 = local_44 + -2;
                puVar5 = local_44 + -1;
                *puVar5 = *puVar6;
              }
              for (iVar8 = iVar8 >> 3; iVar8 != 0; iVar8 = iVar8 + -1) {
                puVar5[-1] = puVar6[-1];
                puVar6 = puVar6 + -2;
                puVar5 = puVar5 + -2;
                *puVar5 = *puVar6;
              }
            }
            *local_44 = *puVar9;
            puVar6 = local_44 + 1;
          }
          else {
            uVar10 = uVar1 + (uVar1 >> 1) + (uVar1 >> 3);
            if (uVar10 < uVar1 + 0x20) {
              uVar10 = uVar1 + 0x20;
            }
            puVar3 = (undefined4 *)fn_0015ece0(uVar10 << 2);
            puVar4 = puVar3;
            for (puVar5 = local_48; puVar5 != puVar6; puVar5 = puVar5 + 1) {
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = *puVar5;
              }
              puVar4 = puVar4 + 1;
            }
            puVar5 = (undefined4 *)(((int)puVar6 - (int)local_48 & 0xfffffffcU) + (int)puVar3);
            if (puVar5 != (undefined4 *)0x0) {
              *puVar5 = *puVar9;
            }
            puVar9 = (undefined4 *)(((int)puVar6 - (int)local_48 & 0xfffffffcU) + (int)puVar3);
            for (; puVar6 != local_44; puVar6 = puVar6 + 1) {
              puVar9 = puVar9 + 1;
              if (puVar9 != (undefined4 *)0x0) {
                *puVar9 = *puVar6;
              }
            }
            iVar8 = (int)local_44 - (int)local_48;
            fn_0014f1bc();
            local_40 = puVar3 + uVar10;
            local_48 = puVar3;
            puVar6 = puVar3 + (iVar8 >> 2) + 1;
          }
        }
        else {
          puVar6 = local_44 + 1;
          if (local_44 != (undefined4 *)0x0) {
            *local_44 = *puVar9;
          }
        }
      }
      local_44 = puVar6;
      iVar2 = iVar2 + 0x18;
    } while (*(int *)(param_1 + 0x114) != iVar2);
  }
  if (local_48 == local_44) {
    local_34 = fn_00751a60;
    local_30 = 0;
    local_2c = &DAT_007522fc;
    local_38 = &DAT_00853500;
    fn_00479c98(param_1,&local_38);
    local_50 = &DAT_008557fc;
    fn_0014f1bc(local_48);
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0x70) + 0x78))
                    (*(int **)(param_1 + 0x70),param_1 + 0x80,&local_50,param_1 + 0x3fc);
  if (iVar2 == 0) {
    local_3c = 0x8001000d;
    uVar7 = fn_004b8d4c(&local_38,&local_3c);
    fn_007519e0(param_1,uVar7);
    local_50 = &DAT_008557fc;
    fn_0014f1bc(local_48);
    return;
  }
  iVar2 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xc4));
  fn_004b2f0c(param_1);
  puVar6 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar6 != (undefined4 *)0x0) {
    *puVar6 = &DAT_00853500;
    puVar6[1] = fn_007526d4;
    puVar6[2] = 0;
    puVar6[3] = &DAT_007522fc;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar6);
  local_50 = &DAT_008557fc;
  fn_0014f1bc(local_48);
  return;
}



void fn_00751a60(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint unaff_r8;
  undefined1 uVar7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  code *pcVar8;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 local_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_60;
  int local_5c;
  undefined *local_48;
  undefined4 *local_44;
  undefined *local_40;
  undefined1 local_3c;
  undefined4 local_38;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    if (((uint)(*(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) >> 2) <
         *(uint *)(param_1 + 0x3f0)) ||
       ((*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18 == *(int *)(param_1 + 0x3f4))
       ) {
      local_6c = 0x10001;
      uVar2 = fn_004b8d4c(&local_78,&local_6c);
      fn_007519e0(param_1,uVar2);
      return;
    }
    local_44 = &DAT_00855170;
    local_5c = 0;
    local_48 = &DAT_00855770;
    iVar1 = *(int *)(param_1 + 0x3fc);
    uVar7 = 0;
    if (*(int *)(param_1 + 0x400) != iVar1) {
      do {
        uVar6 = *(uint *)(param_1 + 0x3f4);
        uVar4 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
        if (uVar4 <= uVar6) {
          local_78 = uVar4;
          fn_002ff628(9,&DAT_00751e38,&DAT_00751e38,uVar6);
        }
        if (*(int *)(iVar1 + 8) == *(int *)(*(int *)(param_1 + 0x110) + uVar6 * 0x18 + 0x10)) {
          uVar7 = *(undefined1 *)(iVar1 + 4);
          unaff_r8 = *(uint *)(iVar1 + 0x14);
          local_60 = *(undefined4 *)(iVar1 + 0x10);
          unaff_r10 = *(undefined4 *)(iVar1 + 8);
          unaff_r11 = *(undefined4 *)(iVar1 + 0xc);
          local_5c = 1;
        }
        iVar1 = iVar1 + 0x18;
      } while (*(int *)(param_1 + 0x400) != iVar1);
      if (local_5c != 0) {
        uVar4 = *(uint *)(param_1 + 0x3f4);
        piVar5 = *(int **)(param_1 + 0x3ec);
        local_78 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
        if (local_78 <= uVar4) {
          fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar4);
        }
        local_78 = unaff_r8 & 0xffff;
        iVar1 = *(int *)(param_1 + 0x110) + uVar4 * 0x18;
        local_74 = unaff_r8 >> 0x10;
        local_70 = *(undefined4 *)(iVar1 + 8);
        local_6c = *(undefined4 *)(iVar1 + 0xc);
        (**(code **)(*piVar5 + 8))(piVar5,unaff_r10,local_60,unaff_r11);
        iVar1 = fn_001249d0();
        iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
        if (iVar1 != 0) {
          if (*(int **)(param_1 + 0x40c) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x40c) + 4))();
          }
          puVar3 = (undefined4 *)fn_0015ecdc(0x24);
          if (puVar3 == (undefined4 *)0x0) {
            puVar3 = (undefined4 *)0x0;
          }
          else {
            uVar6 = *(uint *)(param_1 + 0x3f0);
            uVar4 = *(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) >> 2;
            if (uVar4 <= uVar6) {
              local_78 = uVar4;
              fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar6);
            }
            uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3e0) + uVar6 * 4);
            *puVar3 = &DAT_00855988;
            puVar3[1] = uVar2;
            puVar3[2] = param_1 + 0x80;
            puVar3[3] = local_48;
            *(undefined1 *)(puVar3 + 4) = uVar7;
            puVar3[5] = unaff_r10;
            puVar3[6] = unaff_r11;
            puVar3[7] = local_60;
            *(short *)(puVar3 + 8) = (short)unaff_r8;
            *(short *)((int)puVar3 + 0x22) = (short)(unaff_r8 >> 0x10);
            puVar3[3] = local_44;
          }
          *(undefined4 **)(param_1 + 0x40c) = puVar3;
          local_3c = 0;
          local_38 = 0;
          local_40 = &DAT_00854fe4;
          uVar6 = *(uint *)(param_1 + 0x3f4);
          uVar4 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
          if (uVar4 <= uVar6) {
            local_78 = uVar4;
            fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar6);
          }
          local_38 = *(undefined4 *)(*(int *)(param_1 + 0x110) + uVar6 * 0x18 + 0x10);
          piVar5 = (int *)(*(int *)(param_1 + 0x6c) + ((int)DAT_0089a968 >> 1));
          pcVar8 = DAT_0089a964;
          if ((DAT_0089a968 & 1) != 0) {
            pcVar8 = *(code **)(DAT_0089a964 + *piVar5);
          }
          iVar1 = (*pcVar8)(piVar5,param_1 + 0x80,&local_40,*(undefined4 *)(param_1 + 0x40c));
          if (iVar1 == 0) {
            local_6c = 0x8001000d;
            uVar2 = fn_004b8d4c(&local_78,&local_6c);
            fn_007519e0(param_1,uVar2);
            return;
          }
          iVar1 = fn_001249d0();
          fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0xc4));
          fn_004b2f0c(param_1);
          puVar3 = (undefined4 *)fn_0015ecdc(0x10);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = &DAT_00853500;
            puVar3[1] = fn_00752308;
            puVar3[2] = 0;
            puVar3[3] = &DAT_00751e38;
          }
          fn_00479b1c(param_1,param_1 + 0x80,puVar3);
          return;
        }
        goto LAB_00751f44;
      }
    }
    uVar6 = *(uint *)(param_1 + 0x3f4);
    uVar4 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
    if (uVar4 <= uVar6) {
      local_78 = uVar4;
      fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar6);
    }
    iVar1 = *(int *)(param_1 + 0x110) + uVar6 * 0x18;
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 0x294) = uVar2;
    fn_0014ecf0(&local_78);
    local_64 = 0x158;
    local_68 = param_1 + 0x280;
    uVar2 = (**(code **)(local_78 + 0x18))(&local_78,&local_68,&local_64,1);
    *(undefined4 *)(param_1 + 0x3d8) = uVar2;
    local_78 = *(uint *)(param_1 + 0x290);
    local_74 = *(uint *)(param_1 + 0x294);
    (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      return;
    }
  }
LAB_00751f44:
  local_6c = 0x80010004;
  uVar2 = fn_004b8d4c(&local_78,&local_6c);
  fn_007519e0(param_1,uVar2);
  return;
}


