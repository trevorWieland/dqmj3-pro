#include "004a1dbc_004a23e4.h"



void fn_004a23e4(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_bc;
  undefined1 *local_b8;
  undefined1 *local_b4;
  undefined1 *local_b0;
  undefined1 *local_ac;
  undefined4 local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined1 *local_90;
  undefined1 local_8c;
  undefined1 local_8b;
  undefined *local_88;
  undefined1 local_84;
  undefined1 local_83;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  undefined2 local_6e;
  undefined *local_64 [2];
  undefined4 local_5c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined1 auStack_28 [8];
  
  *(undefined4 *)(param_1 + 8) = 0;
  uVar2 = fn_0013d3e8(auStack_28,&DAT_004a2784);
  fn_00170fa4(param_1 + 0xc,uVar2);
  fn_00170f54(auStack_28);
  *(undefined2 *)(param_1 + 0x14) = 0;
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  iVar3 = fn_0048b218(local_64,3,&local_9c);
  *(undefined1 *)(param_1 + 0x3c) = *(undefined1 *)(iVar3 + 4);
  *(undefined1 *)(param_1 + 0x3d) = *(undefined1 *)(iVar3 + 5);
  fn_0079dd48(param_1 + 0x40,iVar3 + 8);
  local_64[0] = &DAT_00854bdc;
  fn_0014f1bc(local_5c);
  fn_0014f1bc(local_9c);
  local_9c = 0;
  local_98 = 0;
  local_94 = 0;
  iVar3 = fn_0048b218(local_64,3,&local_9c);
  *(undefined1 *)(param_1 + 0x50) = *(undefined1 *)(iVar3 + 4);
  *(undefined1 *)(param_1 + 0x51) = *(undefined1 *)(iVar3 + 5);
  fn_0079dd48(param_1 + 0x54,iVar3 + 8);
  local_64[0] = &DAT_00854bdc;
  fn_0014f1bc(local_5c);
  fn_0014f1bc(local_9c);
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined2 *)(param_1 + 100) = 0x5a;
  *(undefined4 *)(param_1 + 0x68) = 0;
  local_38 = (undefined4 *)0x0;
  local_34 = (undefined4 *)0x0;
  local_30 = 0;
  fn_0079448c(param_1 + 0x6c,&local_38);
  puVar4 = local_34;
  for (puVar6 = local_38; puVar6 != puVar4; puVar6 = puVar6 + 2) {
    (**(code **)*puVar6)(puVar6);
  }
  fn_0014f1bc(local_38);
  fn_004b8974(param_1 + 0x18);
  *(undefined1 *)(param_1 + 0x88) = 0;
  *(undefined2 *)(param_1 + 0x8a) = 0xffff;
  *(undefined1 *)(param_1 + 0x8c) = 1;
  local_b8 = (undefined1 *)0x0;
  local_bc = (undefined4 *)0x0;
  local_a4 = (uint)(byte)((char)param_1 + 0x84) << 8;
  local_b4 = (undefined1 *)0x0;
  local_b0 = (undefined1 *)0x0;
  local_ac = (undefined1 *)0x0;
  local_a8 = 0;
  puVar4 = (undefined4 *)fn_0015ece0(0xc);
  uVar2 = fn_0015ece0(0x700);
  puVar4[2] = uVar2;
  *puVar4 = local_bc;
  puVar4[1] = 0x20;
  local_ac = (undefined1 *)puVar4[2];
  local_b0 = local_ac + 0x700;
  local_b4 = local_ac + 0x38;
  *(undefined4 *)(local_ac + 8) = 0;
  *(undefined4 *)(local_ac + 0xc) = 0;
  *local_ac = 0;
  *(undefined4 *)(local_ac + 4) = 0;
  *(undefined1 **)(local_ac + 8) = local_ac;
  *(undefined1 **)(local_ac + 0xc) = local_ac;
  puVar8 = *(undefined4 **)(param_1 + 0x7c);
  puVar9 = *(undefined4 **)(param_1 + 0x78);
  puVar6 = puVar9;
  local_bc = puVar4;
  if (puVar9 != puVar8) {
    do {
      (**(code **)*puVar6)(puVar6);
      puVar6 = puVar6 + 10;
    } while (puVar6 != puVar8);
    *(int *)(param_1 + 0x7c) =
         *(int *)(param_1 + 0x7c) + (((int)puVar8 - (int)puVar9) / 0x28) * -0x28;
  }
  puVar7 = *(undefined1 **)(local_ac + 8);
  if (puVar7 != local_ac) {
    do {
      local_8c = 0;
      local_88 = &DAT_008549ec;
      local_90 = &DAT_00855674;
      local_8b = puVar7[0x10];
      local_84 = puVar7[0x1c];
      local_83 = puVar7[0x1d];
      local_82 = puVar7[0x1e];
      local_81 = puVar7[0x1f];
      local_80 = *(undefined4 *)(puVar7 + 0x20);
      uStack_7c = *(undefined4 *)(puVar7 + 0x24);
      local_78 = *(undefined4 *)(puVar7 + 0x28);
      local_74 = *(undefined4 *)(puVar7 + 0x2c);
      local_70 = puVar7[0x30];
      local_6e = *(undefined2 *)(puVar7 + 0x32);
      puVar6 = *(undefined4 **)(param_1 + 0x7c);
      if (puVar6 == *(undefined4 **)(param_1 + 0x80)) {
        fn_00793cec(param_1 + 0x78,puVar6,&local_90);
      }
      else {
        *(undefined4 **)(param_1 + 0x7c) = puVar6 + 10;
        if (puVar6 != (undefined4 *)0x0) {
          *puVar6 = &DAT_00855830;
          *(undefined1 *)(puVar6 + 1) = 0;
          *(undefined1 *)((int)puVar6 + 5) = local_8b;
          puVar6[2] = &DAT_008554d0;
          *(undefined1 *)(puVar6 + 3) = local_84;
          *(undefined1 *)((int)puVar6 + 0xd) = local_83;
          *(undefined1 *)((int)puVar6 + 0xe) = local_82;
          *(undefined1 *)((int)puVar6 + 0xf) = local_81;
          puVar6[4] = local_80;
          puVar6[5] = uStack_7c;
          puVar6[6] = local_78;
          puVar6[7] = local_74;
          *(undefined1 *)(puVar6 + 8) = local_70;
          *(undefined2 *)((int)puVar6 + 0x22) = local_6e;
          puVar6[2] = &DAT_008549ec;
          *puVar6 = &DAT_00855674;
        }
      }
      local_90 = &DAT_00855830;
      puVar5 = *(undefined1 **)(puVar7 + 0xc);
      if (*(undefined1 **)(puVar7 + 0xc) == (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(puVar7 + 4);
        if (puVar7 == *(undefined1 **)(puVar5 + 0xc)) {
          do {
            puVar7 = puVar5;
            puVar5 = *(undefined1 **)(puVar7 + 4);
          } while (puVar7 == *(undefined1 **)(puVar5 + 0xc));
        }
        if (*(undefined1 **)(puVar7 + 0xc) != puVar5) {
          puVar7 = puVar5;
        }
      }
      else {
        do {
          puVar7 = puVar5;
          puVar5 = *(undefined1 **)(puVar7 + 8);
        } while (*(undefined1 **)(puVar7 + 8) != (undefined1 *)0x0);
      }
    } while (puVar7 != local_ac);
  }
  if (local_ac != (undefined1 *)0x0) {
    local_a0 = *(undefined4 *)(local_ac + 8);
    local_90 = local_ac;
    fn_00771bbc(&local_8c,&local_bc,&local_a0,&local_90);
    *(undefined1 **)(local_ac + 0xc) = local_b8;
    local_b8 = local_ac;
    piVar1 = local_bc;
    while (local_bc = piVar1, piVar1 != (int *)0x0) {
      local_bc = (undefined4 *)*piVar1;
      fn_0014f1bc(piVar1[2]);
      fn_0014f1bc(piVar1);
      piVar1 = local_bc;
    }
  }
  puVar4 = *(undefined4 **)(param_1 + 0x90);
  puVar8 = *(undefined4 **)(param_1 + 0x94);
  puVar6 = puVar4;
  if (puVar4 != puVar8) {
    do {
      (**(code **)*puVar6)(puVar6);
      puVar6 = puVar6 + 2;
    } while (puVar6 != puVar8);
    *(uint *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - ((int)puVar8 - (int)puVar4 & 0xfffffff8U)
    ;
  }
  return;
}



int fn_004a2190(int param_1,int param_2)

{
  fn_00473520();
  *(undefined1 *)(param_1 + 0x30) = *(undefined1 *)(param_2 + 0x30);
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_2 + 0x34);
  fn_00170fa4(param_1 + 0x38,param_2 + 0x38);
  fn_0079dd48(param_1 + 0x40,param_2 + 0x40);
  fn_0079c5b8(param_1 + 0x4c,param_2 + 0x4c);
  fn_0014f510(param_1 + 0x58,param_2 + 0x58);
  fn_0014f510(param_1 + 0x60,param_2 + 0x60);
  *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_2 + 0x68);
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(param_2 + 0x6c);
  return param_1;
}



void fn_004a2148(void)

{
  fn_004a2158();
  fn_00455018();
  return;
}



void fn_004a2158(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = &PTR_FUN_00854c0c;
  fn_0014f1bc(param_1[0x13]);
  fn_0014f1bc(param_1[0x10]);
  iVar1 = fn_00170f54(param_1 + 0xe);
  fn_004bb560(iVar1 + -0x38);
  return;
}



void fn_004a1fa4(int param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int local_48 [2];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  fn_004732fc();
  if (*(char *)(param_1 + 4) == '\0') {
    *(undefined1 *)(param_2 + 0x30) = 0;
    cVar1 = *(char *)(param_1 + 0x3b);
    local_48[0] = 0;
    if ((((cVar1 != '\0') ||
         ((fn_0074a4c8(param_1,param_2 + 0x30), *(char *)(param_1 + 4) == '\0' &&
          (fn_0074a528(param_1,local_48), *(char *)(param_1 + 4) == '\0')))) &&
        (iVar3 = *(int *)(param_1 + 0xc), *(char *)(param_1 + 4) == '\0')) &&
       ((((fn_0074a528(param_1,param_2 + 0x34), *(char *)(param_1 + 4) == '\0' &&
          (fn_0045f7f0(param_1,param_2 + 0x38), *(char *)(param_1 + 4) == '\0')) &&
         (fn_0074b4b8(param_1,param_2 + 0x40), *(char *)(param_1 + 4) == '\0')) &&
        (fn_0074af34(param_1,param_2 + 0x4c), *(char *)(param_1 + 4) == '\0')))) {
      fn_0074a5fc(param_1,&local_20);
      local_40 = local_20;
      uStack_3c = uStack_1c;
      fn_0014f510(param_2 + 0x58,&local_40);
      if (*(char *)(param_1 + 4) == '\0') {
        fn_0074a5fc(param_1,&local_28);
        local_38 = local_28;
        uStack_34 = uStack_24;
        fn_0014f510(param_2 + 0x60,&local_38);
        if (((*(char *)(param_1 + 4) == '\0') &&
            (fn_0074a528(param_1,param_2 + 0x68), *(char *)(param_1 + 4) == '\0')) &&
           (fn_0074a528(param_1,param_2 + 0x6c), *(char *)(param_1 + 4) == '\0' && cVar1 == '\0'))
        {
          uVar2 = local_48[0] + iVar3;
          if ((uVar2 < *(uint *)(param_1 + 0xc)) ||
             (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar2)) {
            *(undefined1 *)(param_1 + 4) = 1;
          }
          else {
            *(uint *)(param_1 + 0xc) = uVar2;
          }
        }
      }
    }
  }
  return;
}



void fn_004a1dbc(int param_1,int param_2)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char local_48 [8];
  undefined8 local_40;
  undefined8 local_38;
  uint local_30;
  undefined4 local_2c [2];
  int local_24 [2];
  
  fn_00473198();
  cVar1 = *(char *)(param_1 + 0x3b);
  iVar5 = 0;
  if (cVar1 == '\0') {
    local_30 = local_30 & 0xffffff00;
    local_48[0] = *(char *)(param_2 + 0x30);
    puVar2 = (uint *)local_48;
    if (local_48[0] != '\0') {
      puVar2 = &local_30;
    }
    fn_0015ef4c(param_1,puVar2,1);
    iVar5 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    local_2c[0] = 0;
    fn_0015ef4c(param_1,local_2c,4);
  }
  fn_0015ef4c(param_1,param_2 + 0x34,4);
  fn_0045f6f0(param_1,param_2 + 0x38);
  local_24[0] = *(int *)(param_2 + 0x44) - *(int *)(param_2 + 0x40) >> 2;
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x44);
  for (iVar3 = *(int *)(param_2 + 0x40); iVar3 != iVar4; iVar3 = iVar3 + 4) {
    fn_0015ef4c(param_1,iVar3,4);
  }
  local_24[0] = *(int *)(param_2 + 0x50) - *(int *)(param_2 + 0x4c);
  fn_0015ef4c(param_1,local_24,4);
  iVar4 = *(int *)(param_2 + 0x50);
  for (iVar3 = *(int *)(param_2 + 0x4c); iVar3 != iVar4; iVar3 = iVar3 + 1) {
    fn_0015ef4c(param_1,iVar3,1);
  }
  local_40 = fn_006d3e5c(param_2 + 0x58);
  fn_0015ef4c(param_1,&local_40,8);
  local_38 = fn_006d3e5c(param_2 + 0x60);
  fn_0015ef4c(param_1,&local_38,8);
  fn_0015ef4c(param_1,param_2 + 0x68,4);
  fn_0015ef4c(param_1,param_2 + 0x6c,4);
  if (cVar1 == '\0') {
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 0x10);
    fn_00454cbc(param_1,iVar5);
    local_30 = (iVar3 - iVar5) - 4;
    fn_0015ef4c(param_1,&local_30,4);
    fn_00454cbc(param_1,iVar3);
  }
  return;
}


