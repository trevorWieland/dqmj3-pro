#include "00753758_007540b0.h"



void fn_00753b24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined *local_28;
  code *local_24;
  undefined4 uStack_20;
  undefined *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 local_c;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_00752f28(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0x90) == '\x02') {
    local_24 = fn_00752fa8;
    uStack_20 = 0;
    local_1c = &DAT_00753bd8;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 0xb8);
  uStack_14 = *(undefined4 *)(param_1 + 0xbc);
  uStack_10 = *(undefined4 *)(param_1 + 0xc0);
  fn_00752f28(param_1,&local_18);
  return;
}



void fn_00753990(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 local_38;
  undefined4 uStack_34;
  int local_30;
  undefined4 local_2c;
  int local_28;
  undefined4 local_24;
  int iStack_20;
  uint local_1c;
  undefined1 auStack_18 [12];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_2c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_38,&local_2c);
    fn_00752f28(param_1,uVar2);
    return;
  }
  fn_00456400(param_1 + 0x80);
  piVar4 = *(int **)(param_1 + 0x6c);
  uVar2 = fn_004b6318(auStack_18,param_1 + 0x138);
  local_24 = *(undefined4 *)(param_1 + 0x10c);
  local_1c = (uint)(9 < *(uint *)(param_1 + 0x124));
  local_28 = param_1 + 0x108;
  iStack_20 = param_1 + 0x408;
  local_30 = param_1 + 0xf8;
  local_2c = *(undefined4 *)(param_1 + 0x128);
  local_38 = *(undefined4 *)(param_1 + 0x130);
  uStack_34 = *(undefined4 *)(param_1 + 0x134);
  iVar1 = (**(code **)(*piVar4 + 0x38))(piVar4,param_1 + 0x80,uVar2,param_1 + 0x100);
  fn_00170f54(auStack_18);
  if (iVar1 == 0) {
    local_2c = 0x8001000d;
    uVar2 = fn_004b8d4c(&local_38,&local_2c);
    fn_00752f28(param_1,uVar2);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xc4));
  fn_004b2f0c(param_1);
  puVar3 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar3 != (undefined4 *)0x0) {
    *puVar3 = &DAT_00853500;
    puVar3[1] = fn_00753be0;
    puVar3[2] = 0;
    puVar3[3] = &DAT_00753b20;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar3);
  return;
}



void fn_00753be0(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  undefined4 local_68;
  int local_64;
  undefined *local_60;
  code *pcStack_5c;
  undefined4 uStack_58;
  undefined *local_54;
  int local_50;
  undefined4 uStack_4c;
  undefined4 auStack_48 [2];
  int local_40 [3];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 local_28;
  
  iVar2 = fn_001249d0();
  iVar2 = fn_0048a058(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar2 == 0) {
    local_68 = 0x80010004;
    uVar3 = fn_004b8d4c(&local_50,&local_68);
    fn_00752f28(param_1,uVar3);
    return;
  }
  bVar1 = false;
  if (*(char *)(param_1 + 0x90) == '\x02') {
    iVar2 = fn_004b626c(*(undefined4 *)(param_1 + 0x104),L"invalidurl");
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(param_1 + 0xf8);
      *(undefined4 *)(param_1 + 0x294) = *(undefined4 *)(param_1 + 0xfc);
      fn_0014ecf0(local_40 + 2);
      local_2c = 0x158;
      local_64 = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[2] + 0x18))(local_40 + 2,&local_64,&local_2c,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
      fn_00301f50(param_1 + 0x298,0x140);
      local_64 = 0;
      fn_00156234(param_1 + 0x100,&local_64);
      fn_002fec40(param_1 + 0x298,local_64);
      fn_0014f4d8(local_64);
      fn_0014ecf0(local_40 + 2);
      local_28 = 0x158;
      local_2c = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[2] + 0x18))(local_40 + 2,&local_2c,&local_28,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
      *(undefined4 *)(param_1 + 0x288) = *(undefined4 *)(param_1 + 0x108);
      fn_0014ecf0(local_40 + 2);
      local_2c = 0x158;
      local_64 = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[2] + 0x18))(local_40 + 2,&local_64,&local_2c,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
      local_68 = *(undefined4 *)(param_1 + 0x290);
      local_64 = *(int *)(param_1 + 0x294);
      (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))(*(int **)(param_1 + 0x3ec),param_1 + 0x280,0)
      ;
      local_40[1] = 0x10001;
      uVar3 = fn_004b8d4c(auStack_48,local_40 + 1);
      fn_00752f28(param_1,uVar3);
      return;
    }
    bVar6 = *(int *)(param_1 + 0x284) != 0;
    if (bVar6) {
      *(undefined4 *)(param_1 + 0x284) = 0;
      fn_0014ecf0(local_40);
      local_34 = 0x158;
      local_64 = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[0] + 0x18))(local_40,&local_64,&local_34,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
    }
    iVar2 = fn_004b6318(&local_50,param_1 + 0x138);
    iVar2 = fn_004b626c(*(undefined4 *)(iVar2 + 4),*(undefined4 *)(param_1 + 0x104));
    fn_00170f54(&local_50);
    if (iVar2 != 1) {
      fn_00301f50(param_1 + 0x298,0x140);
      local_64 = 0;
      fn_00156234(param_1 + 0x100,&local_64);
      fn_002fec40(param_1 + 0x298,local_64);
      fn_0014f4d8(local_64);
      fn_0014ecf0(local_40);
      local_30 = 0x158;
      local_34 = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[0] + 0x18))(local_40,&local_34,&local_30,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
    }
    iVar4 = *(int *)(param_1 + 0x108);
    bVar7 = *(int *)(param_1 + 0x128) != iVar4;
    if (bVar7) {
      *(int *)(param_1 + 0x288) = iVar4;
      fn_0014ecf0(local_40);
      local_34 = 0x158;
      local_64 = param_1 + 0x280;
      uVar3 = (**(code **)(local_40[0] + 0x18))(local_40,&local_64,&local_34,1);
      *(undefined4 *)(param_1 + 0x3d8) = uVar3;
    }
    bVar7 = bVar7 || (iVar2 != 1 || bVar6);
    if (*(uint *)(param_1 + 0xfc) < *(uint *)(param_1 + 0x134) ||
        *(uint *)(param_1 + 0x134) - *(uint *)(param_1 + 0xfc) <
        (uint)(*(uint *)(param_1 + 0xf8) <= *(uint *)(param_1 + 0x130))) {
      bVar1 = true;
    }
  }
  else {
    if (*(char *)(param_1 + 0x408) != '\0') {
      local_50 = *(int *)(param_1 + 0xb8);
      uStack_4c = *(undefined4 *)(param_1 + 0xbc);
      auStack_48[0] = *(undefined4 *)(param_1 + 0xc0);
      fn_00752f28(param_1,&local_50);
      return;
    }
    *(int *)(param_1 + 0x284) = *(int *)(param_1 + 0x284) + 1;
    fn_0014ecf0(&local_50);
    local_40[0] = 0x158;
    local_64 = param_1 + 0x280;
    uVar3 = (**(code **)(local_50 + 0x18))(&local_50,&local_64,local_40,1);
    *(undefined4 *)(param_1 + 0x3d8) = uVar3;
    bVar7 = true;
    bVar1 = true;
  }
  uVar5 = 0;
  if ((*(char *)(param_1 + 0x410) != '\0') &&
     ((uVar5 = 1, !bVar1 || (*(char *)(param_1 + 0x418) != '\0')))) {
    **(undefined1 **)(param_1 + 0x414) = 1;
  }
  if (bVar7) {
    local_68 = *(undefined4 *)(param_1 + 0x290);
    local_64 = *(int *)(param_1 + 0x294);
    uVar5 = (**(code **)(**(int **)(param_1 + 0x3ec) + 0xc))
                      (*(int **)(param_1 + 0x3ec),param_1 + 0x280,0);
  }
  if (!bVar1) {
    uVar5 = (uint)*(byte *)(param_1 + 0x410);
  }
  if (!bVar1 && uVar5 == 0) {
    pcStack_5c = fn_007540b0;
    uStack_58 = 0;
    local_54 = &DAT_007540a8;
    local_60 = &DAT_00853500;
    fn_00479c98(param_1,&local_60);
    return;
  }
  local_68 = 0x10001;
  uVar3 = fn_004b8d4c(&local_50,&local_68);
  fn_00752f28(param_1,uVar3);
  return;
}



void fn_007540b0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_38 [2];
  undefined *local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined2 local_20;
  undefined1 auStack_18 [16];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar1 == 0) {
    local_38[0] = 0x80010004;
    uVar3 = fn_004b8d4c(auStack_18,local_38);
    fn_00752f28(param_1,uVar3);
    return;
  }
  local_2c = 0;
  local_30 = &DAT_00855900;
  local_28 = *(undefined4 *)(param_1 + 0x130);
  uStack_24 = *(undefined4 *)(param_1 + 0x134);
  local_20 = (undefined2)((*(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) & 0x3ffffU) >> 2);
  local_38[0] = *(undefined4 *)(param_1 + 0x3f8);
  iVar1 = (**(code **)(**(int **)(param_1 + 0x70) + 0x54))
                    (*(int **)(param_1 + 0x70),param_1 + 0x80,&local_30,param_1 + 0x110);
  if (iVar1 == 0) {
    local_38[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(auStack_18,local_38);
    fn_00752f28(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x68),
               *(undefined4 *)(param_1 + 0xc4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    puVar2[1] = fn_00754204;
    *puVar2 = &DAT_00853500;
    puVar2[2] = 0;
    puVar2[3] = &DAT_007541f8;
  }
  fn_00479b1c(param_1,param_1 + 0x80,puVar2);
  return;
}



void fn_00753758(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  uint local_38;
  undefined4 local_34;
  undefined *local_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined *local_24;
  int local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar3 = fn_001249d0();
  iVar3 = fn_0048a058(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(param_1 + 0x68));
  if (iVar3 != 0) {
    bVar1 = false;
    if (*(char *)(param_1 + 0x90) != '\x04') {
      if (*(char *)(param_1 + 0x90) == '\x02') {
LAB_00753800:
        uVar5 = *(uint *)(param_1 + 0x3f4);
        uVar2 = (*(int *)(param_1 + 0x114) - *(int *)(param_1 + 0x110)) / 0x18;
        if (uVar2 <= uVar5) {
          local_38 = uVar2;
          fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,uVar5);
        }
        iVar3 = *(int *)(param_1 + 0x110) + uVar5 * 0x18;
        uVar4 = *(undefined4 *)(iVar3 + 0xc);
        *(undefined4 *)(param_1 + 0x290) = *(undefined4 *)(iVar3 + 8);
        *(undefined4 *)(param_1 + 0x294) = uVar4;
        fn_0014ecf0(&local_20);
        local_34 = 0x158;
        local_38 = param_1 + 0x280;
        uVar4 = (**(code **)(local_20 + 0x18))(&local_20,&local_38,&local_34,1);
        *(undefined4 *)(param_1 + 0x3d8) = uVar4;
        piVar6 = *(int **)(param_1 + 0x3ec);
        if (!bVar1) {
          local_38 = *(int *)(param_1 + 0x3e4) - *(int *)(param_1 + 0x3e0) >> 2;
          if (local_38 <= *(uint *)(param_1 + 0x3f0)) {
            fn_002ff628(9,&DAT_007d8abc,&DAT_007d8abc,*(uint *)(param_1 + 0x3f0));
          }
        }
        local_38 = *(uint *)(param_1 + 0x290);
        local_34 = *(undefined4 *)(param_1 + 0x294);
        (**(code **)(*piVar6 + 0xc))(piVar6,param_1 + 0x280);
        if (!bVar1) {
          *(int *)(param_1 + 0x3f0) = *(int *)(param_1 + 0x3f0) + 1;
        }
        *(int *)(param_1 + 0x3f4) = *(int *)(param_1 + 0x3f4) + 1;
        local_2c = fn_00752fa8;
        uStack_28 = 0;
        local_24 = &DAT_00753988;
        local_30 = &DAT_00853500;
        fn_00479c98(param_1,&local_30);
        return;
      }
      local_20 = *(int *)(param_1 + 0xb8);
      uStack_1c = *(undefined4 *)(param_1 + 0xbc);
      uStack_18 = *(undefined4 *)(param_1 + 0xc0);
      iVar3 = fn_006d3b44(&local_20);
      if (iVar3 == 0x69) {
        local_38 = 0x80690001;
        iVar3 = fn_006d3b74(&local_20,&local_38);
        if (iVar3 != 1) {
          bVar1 = true;
          goto LAB_00753800;
        }
      }
      fn_00752f28(param_1,&local_20);
      return;
    }
  }
  local_38 = 0x80010004;
  uVar4 = fn_004b8d4c(&local_20,&local_38);
  fn_00752f28(param_1,uVar4);
  return;
}


