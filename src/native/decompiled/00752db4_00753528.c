#include "00752db4_00753528.h"



void fn_00753528(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_48;
  undefined1 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34 [2];
  undefined1 auStack_2c [4];
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_28 = (undefined *)0x80010004;
    uVar3 = fn_004b8d4c(local_34,&local_28);
    fn_00752f28(param_1,uVar3);
    return;
  }
  local_44 = 0;
  local_40 = (undefined4 *)0x0;
  local_3c = (undefined4 *)0x0;
  local_38 = (undefined4 *)0x0;
  local_48 = &DAT_008557cc;
  local_40 = (undefined4 *)fn_0015ece0(0x100);
  local_38 = local_40 + 0x40;
  local_48 = &DAT_00855328;
  iVar1 = *(int *)(param_1 + 0x110);
  local_3c = local_40;
  if (*(int *)(param_1 + 0x114) != iVar1) {
    do {
      puVar2 = local_3c;
      if (*(int *)(iVar1 + 0x14) != 0 || *(int *)(iVar1 + 0x10) != 0) {
        if (local_3c == local_38) {
          fn_0079eac8(&local_40);
          puVar2 = local_3c;
        }
        else {
          puVar2 = local_3c + 2;
          if (local_3c != (undefined4 *)0x0) {
            uVar3 = *(undefined4 *)(iVar1 + 0x14);
            *local_3c = *(undefined4 *)(iVar1 + 0x10);
            local_3c[1] = uVar3;
          }
        }
      }
      local_3c = puVar2;
      iVar1 = iVar1 + 0x18;
    } while (*(int *)(param_1 + 0x114) != iVar1);
  }
  if (local_40 == local_3c) {
    local_24 = fn_00752fa8;
    uStack_20 = 0;
    local_1c = &DAT_0075374c;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    local_48 = &DAT_008557cc;
    fn_0079ec6c(&local_40);
    return;
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0x74))
                    (*(int **)(param_1 + 0x70),param_1 + 0x80,&local_48,param_1 + 0x3fc);
  if (iVar1 == 0) {
    local_34[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_2c,local_34);
    fn_00752f28(param_1,uVar3);
    local_48 = &DAT_008557cc;
    fn_0079ec6c(&local_40);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xc4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = fn_00753b24;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &DAT_0075374c;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar2);
  local_48 = &DAT_008557cc;
  fn_0079ec6c(&local_40);
  return;
}



void fn_00752fa8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  code *pcVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  ushort unaff_r8;
  undefined1 uVar9;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  undefined8 in_d8;
  ulonglong in_d9;
  uint local_98;
  int local_94;
  uint local_90;
  int local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [8];
  undefined4 local_78;
  undefined4 uStack_74;
  undefined *local_40;
  undefined4 *local_3c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 != 0) {
    if (((uint)(*(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) >> 2) <
         *(uint *)(param_1 + 0x3f0)) ||
       ((*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18 == *(int *)(param_1 + 0x3f4))
       ) {
      local_8c = 0x10001;
      uVar2 = fn_004b8d4c(&local_98,&local_8c);
      fn_00752f28(param_1,uVar2);
      return;
    }
    local_3c = &DAT_00854c58;
    local_94 = 0;
    local_40 = &DAT_00855634;
    iVar1 = *(int *)(param_1 + 0x3fc);
    uVar9 = 0;
    if (*(int *)(param_1 + 0x400) != iVar1) {
      do {
        uVar8 = *(uint *)(param_1 + 0x3f4);
        uVar6 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
        if (uVar6 <= uVar8) {
          local_98 = uVar6;
          fn_002ff628(9,&DAT_007533b0,&DAT_007533b0,uVar8);
        }
        iVar3 = *(int *)(param_1 + 0x110) + uVar8 * 0x18;
        if (*(int *)(iVar3 + 0x14) == *(int *)(iVar1 + 0xc) &&
            *(int *)(iVar1 + 8) == *(int *)(iVar3 + 0x10)) {
          uVar9 = *(undefined1 *)(iVar1 + 4);
          unaff_r10 = *(undefined4 *)(iVar1 + 8);
          unaff_r11 = *(undefined4 *)(iVar1 + 0xc);
          unaff_r8 = *(ushort *)(iVar1 + 0x18);
          in_d9 = (ulonglong)*(uint *)(iVar1 + 0x1c);
          in_d8 = *(undefined8 *)(iVar1 + 0x10);
          local_94 = 1;
        }
        iVar3 = (int)in_d9;
        iVar1 = iVar1 + 0x20;
      } while (*(int *)(param_1 + 0x400) != iVar1);
      if (local_94 != 0) {
        uVar6 = *(uint *)(param_1 + 0x3f4);
        piVar7 = *(int **)(param_1 + 0x3ec);
        local_98 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
        if (local_98 <= uVar6) {
          fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar6);
        }
        iVar1 = *(int *)(param_1 + 0x110) + uVar6 * 0x18;
        local_88 = *(undefined4 *)(iVar1 + 8);
        uStack_84 = *(undefined4 *)(iVar1 + 0xc);
        local_90 = (uint)unaff_r8;
        local_98 = (uint)((ulonglong)in_d8 >> 0x20);
        local_94 = (int)in_d8;
        pcVar5 = *(code **)(*piVar7 + 8);
        local_8c = iVar3;
        (*pcVar5)(piVar7,pcVar5,unaff_r10,unaff_r11);
        iVar1 = fn_001249d0();
        iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
        if (iVar1 != 0) {
          if (*(int **)(param_1 + 0x40c) != (int *)0x0) {
            (**(code **)(**(int **)(param_1 + 0x40c) + 4))();
          }
          puVar4 = (undefined4 *)fn_0015ecdc(0x30);
          if (puVar4 == (undefined4 *)0x0) {
            puVar4 = (undefined4 *)0x0;
          }
          else {
            uVar8 = *(uint *)(param_1 + 0x3f0);
            uVar6 = *(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) >> 2;
            if (uVar6 <= uVar8) {
              local_98 = uVar6;
              fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar8);
            }
            uVar2 = *(undefined4 *)(*(int *)(param_1 + 0x3e0) + uVar8 * 4);
            *puVar4 = &DAT_008559a4;
            puVar4[1] = uVar2;
            puVar4[2] = param_1 + 0x80;
            puVar4[4] = local_40;
            *(undefined1 *)(puVar4 + 5) = uVar9;
            puVar4[6] = unaff_r10;
            puVar4[7] = unaff_r11;
            puVar4[8] = (int)in_d8;
            puVar4[9] = (int)((ulonglong)in_d8 >> 0x20);
            *(ushort *)(puVar4 + 10) = unaff_r8;
            puVar4[0xb] = iVar3;
            puVar4[4] = local_3c;
          }
          *(undefined4 **)(param_1 + 0x40c) = puVar4;
          fn_0049e6f4(auStack_80);
          uVar8 = *(uint *)(param_1 + 0x3f4);
          uVar6 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
          if (uVar6 <= uVar8) {
            local_98 = uVar6;
            fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar8);
          }
          iVar1 = *(int *)(param_1 + 0x110) + uVar8 * 0x18;
          local_78 = *(undefined4 *)(iVar1 + 0x10);
          uStack_74 = *(undefined4 *)(iVar1 + 0x14);
          piVar7 = (int *)(*(int *)(param_1 + 0x6c) + ((int)DAT_0089a970 >> 1));
          pcVar5 = DAT_0089a96c;
          if ((DAT_0089a970 & 1) != 0) {
            pcVar5 = *(code **)(DAT_0089a96c + *piVar7);
          }
          iVar1 = (*pcVar5)(piVar7,param_1 + 0x80,auStack_80,*(undefined4 *)(param_1 + 0x40c));
          if (iVar1 == 0) {
            local_8c = -0x7ffefff3;
            uVar2 = fn_004b8d4c(&local_98,&local_8c);
            fn_00752f28(param_1,uVar2);
            fn_004aa1fc(auStack_80);
            return;
          }
          iVar1 = fn_001249d0();
          fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
                       *(undefined4 *)(param_1 + 0xc4));
          fn_004b2f0c(param_1);
          puVar4 = (undefined4 *)fn_0015ecdc(0x10);
          if (puVar4 != (undefined4 *)0x0) {
            puVar4[1] = fn_00753758;
            *puVar4 = &DAT_00853500;
            puVar4[2] = 0;
            puVar4[3] = &DAT_007533b0;
          }
          fn_00479b1c(param_1,param_1 + 0x80,puVar4);
          fn_004aa1fc(auStack_80);
          return;
        }
        goto LAB_007534bc;
      }
    }
    uVar8 = *(uint *)(param_1 + 0x3f4);
    uVar6 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
    if (uVar6 <= uVar8) {
      local_98 = uVar6;
      fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar8);
    }
    iVar1 = *(int *)(param_1 + 0x110) + uVar8 * 0x18;
    uVar2 = *(undefined4 *)(iVar1 + 0xc);
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(param_1 + 0x294) = uVar2;
    fn_0014ecf0(&local_98);
    local_88 = 0x158;
    local_8c = param_1 + 0x280;
    uVar2 = (**(code **)(local_98 + 0x18))(&local_98,&local_8c,&local_88,1);
    *(undefined4 *)(param_1 + 0x3d8) = uVar2;
    local_98 = *(uint *)(param_1 + 0x290);
    local_94 = *(undefined4 *)(param_1 + 0x294);
    (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
    iVar1 = fn_001249d0();
    iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
      return;
    }
  }
LAB_007534bc:
  local_8c = -0x7ffefffc;
  uVar2 = fn_004b8d4c(&local_98,&local_8c);
  fn_00752f28(param_1,uVar2);
  return;
}



void fn_00752f28(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x80,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    local_20 = *param_2;
    uStack_1c = param_2[1];
    uStack_18 = param_2[2];
    if (iVar2 == 0) {
      fn_00456044(iVar1,&local_20);
    }
    else {
      fn_00456074();
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_00752db4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined *local_38;
  code *local_34;
  undefined4 uStack_30;
  undefined *local_2c;
  undefined1 auStack_28 [12];
  undefined4 local_1c;
  int local_18;
  undefined4 local_14 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_3c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_48,&local_3c);
    fn_007519e0(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x90) != '\x02') {
    local_48 = *(int *)(param_1 + 0xb8);
    uStack_44 = *(undefined4 *)(param_1 + 0xbc);
    uStack_40 = *(undefined4 *)(param_1 + 0xc0);
    fn_007519e0(param_1,&local_48);
    return;
  }
  for (iVar1 = *(int *)(param_1 + 0x110); *(int *)(param_1 + 0x114) != iVar1; iVar1 = iVar1 + 0x18)
  {
  }
  if (*(int *)(param_1 + 0x110) == *(int *)(param_1 + 0x114)) {
    *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0xf8);
    *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0xfc);
    fn_0014ecf0(&local_48);
    local_14[0] = 0x158;
    local_18 = param_1 + 0x280;
    uVar2 = (**(code **)(local_48 + 0x18))(&local_48,&local_18,local_14,1);
    *(undefined4 *)(param_1 + 0x3d8) = uVar2;
    local_48 = *(int *)(param_1 + 0x290);
    uStack_44 = *(undefined4 *)(param_1 + 0x294);
    (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
    local_1c = 0x10001;
    uVar2 = fn_004b8d4c(auStack_28,&local_1c);
    fn_007519e0(param_1,uVar2);
  }
  local_34 = fn_00751fa0;
  uStack_30 = 0;
  local_2c = &DAT_00752f20;
  local_38 = &DAT_00853500;
  fn_00479c98(param_1,&local_38);
  return;
}


