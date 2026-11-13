#include "0047525c_00475d44.h"



void fn_00475c20(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_28;
  int iStack_24;
  int iStack_20;
  undefined1 auStack_1c [12];
  undefined4 local_10 [2];
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_10[0] = 0x80010004;
    uVar3 = fn_004b8d4c(&local_28,local_10);
    fn_004b2e84(param_1,uVar3);
    return;
  }
  fn_00456400(param_1 + 0xa0);
  iStack_20 = param_1 + 0x14c;
  iStack_24 = param_1 + 0x144;
  local_28 = param_1 + 300;
  fn_004a6a7c(auStack_1c,param_1 + 0x140,param_1 + 0xa0,*(undefined4 *)(param_1 + 0x128));
  iVar1 = fn_006d3b8c(auStack_1c);
  if (iVar1 == 0) {
    local_10[0] = 0x8001000d;
    uVar3 = fn_004b8d4c(&local_28,local_10);
    fn_004b2e84(param_1,uVar3);
    return;
  }
  iVar1 = fn_001249d0();
  fn_0048a6e8(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c),
               *(undefined4 *)(param_1 + 0xe4));
  fn_004b2f0c(param_1);
  puVar2 = (undefined4 *)fn_0015ecdc(0x10);
  if (puVar2 != (undefined4 *)0x0) {
    *puVar2 = &DAT_00853500;
    puVar2[1] = fn_00475d44;
    puVar2[2] = 0;
    puVar2[3] = &DAT_00475d38;
  }
  fn_00479b1c(param_1,param_1 + 0xa0,puVar2);
  return;
}



void fn_00475d44(int param_1)

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
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    local_c = 0x80010004;
    uVar2 = fn_004b8d4c(&local_18,&local_c);
    fn_004b2e84(param_1,uVar2);
    return;
  }
  if (*(char *)(param_1 + 0xb0) == '\x02') {
    local_24 = fn_00475e00;
    uStack_20 = 0;
    local_1c = &DAT_00475df8;
    local_28 = &DAT_00853500;
    fn_00479c98(param_1,&local_28);
    return;
  }
  local_18 = *(undefined4 *)(param_1 + 0xd8);
  uStack_14 = *(undefined4 *)(param_1 + 0xdc);
  uStack_10 = *(undefined4 *)(param_1 + 0xe0);
  fn_004b2e84(param_1,&local_18);
  return;
}



void fn_004753cc(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined1 auStack_2e0 [4];
  undefined4 local_2dc;
  undefined1 auStack_230 [8];
  undefined1 auStack_228 [16];
  undefined1 auStack_218 [8];
  undefined1 auStack_210 [328];
  undefined4 *local_c8;
  undefined1 local_c4;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [32];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined4 *local_68;
  undefined1 local_64;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  puVar8 = *(undefined4 **)(param_1 + 0x158);
  puVar7 = *(undefined4 **)(param_1 + 0x15c);
  puVar1 = puVar8;
  if (puVar8 != puVar7) {
    do {
      (**(code **)*puVar1)(puVar1);
      puVar1 = puVar1 + 6;
    } while (puVar1 != puVar7);
    *(int *)(param_1 + 0x15c) =
         *(int *)(param_1 + 0x15c) + (((int)puVar7 - (int)puVar8) / 0x18) * -0x18;
  }
  puVar1 = (undefined4 *)fn_0014f1e0(auStack_b0);
  *puVar1 = &DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  fn_0014ee88(auStack_2e0);
  fn_004b637c(auStack_230,param_1 + 0x134);
  while (uVar3 = fn_00156284(auStack_230), uVar3 < 0x10) {
    uVar2 = fn_0013d3e8(auStack_210,&DAT_0047578c);
    fn_004b6424(auStack_230,uVar2);
    fn_00170f54(auStack_210);
  }
  uVar2 = fn_004b310c(auStack_228,auStack_230);
  fn_0014f200(auStack_2e0,uVar2);
  fn_0014f2b0(auStack_228);
  fn_0045ad28(auStack_2e0,param_1 + 0x7c,auStack_b0);
  fn_00170f54(auStack_230);
  fn_0045af48(auStack_2e0);
  puVar1 = (undefined4 *)fn_0014f1e0(auStack_90);
  *puVar1 = &DAT_00855a18;
  uVar2 = fn_0014f470();
  fn_0014f440(puVar1,uVar2,0);
  fn_0014ee88(auStack_2e0);
  fn_004b637c(auStack_218,param_1 + 0x14c);
  while (uVar3 = fn_00156284(auStack_218), uVar3 < 0x10) {
    uVar2 = fn_0013d3e8(auStack_210,&DAT_0047578c);
    fn_004b6424(auStack_218,uVar2);
    fn_00170f54(auStack_210);
  }
  uVar2 = fn_004b310c(auStack_230,param_1 + 0x14c);
  fn_0014f200(auStack_2e0,uVar2);
  fn_0014f2b0(auStack_230);
  fn_0045ad28(auStack_2e0,param_1 + 0x7c,auStack_90);
  fn_00170f54(auStack_218);
  fn_0045af48(auStack_2e0);
  fn_0013d40c(auStack_40);
  fn_004b6230(auStack_40,&DAT_00475790,*(undefined4 *)(param_1 + 0x128));
  uVar2 = fn_004b6318(auStack_48,&DAT_00475798);
  local_c8 = &DAT_00854534;
  local_c4 = 0;
  iVar4 = fn_0013d40c(auStack_c0);
  iVar4 = fn_0013d40c(iVar4 + 8);
  *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
  fn_00170fa4(iVar4 + -8,uVar2);
  fn_00170fa4(iVar4,auStack_40);
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
    fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
  }
  else {
    *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00854534;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
      iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
      iVar4 = fn_004b637c(iVar5 + 8,iVar4);
      *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    }
  }
  local_c8 = &DAT_00854534;
  iVar4 = fn_00170f54(auStack_b8);
  fn_00170f54(iVar4 + -8);
  fn_00170f54(auStack_48);
  uVar2 = fn_004b6318(auStack_48,(char *)&DAT_004757a4);
  uVar6 = fn_004b6318(auStack_70,(char *)&DAT_004757ac);
  local_c8 = &DAT_00854534;
  local_c4 = 0;
  iVar4 = fn_0013d40c(auStack_c0);
  iVar4 = fn_0013d40c(iVar4 + 8);
  *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
  fn_00170fa4(iVar4 + -8,uVar2);
  fn_00170fa4(iVar4,uVar6);
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
    fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
  }
  else {
    *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00854534;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
      iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
      iVar4 = fn_004b637c(iVar5 + 8,iVar4);
      *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    }
  }
  local_c8 = &DAT_00854534;
  iVar4 = fn_00170f54(auStack_b8);
  fn_00170f54(iVar4 + -8);
  fn_00170f54(auStack_70);
  fn_00170f54(auStack_48);
  uVar2 = fn_004b6318(auStack_70,(char *)&DAT_00475b84);
  local_c8 = &DAT_00854534;
  local_c4 = 0;
  iVar4 = fn_0013d40c(auStack_c0);
  iVar4 = fn_0013d40c(iVar4 + 8);
  *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
  fn_00170fa4(iVar4 + -8,uVar2);
  fn_00170fa4(iVar4,param_1 + 0x144);
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
    fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
  }
  else {
    *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00854534;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
      iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
      iVar4 = fn_004b637c(iVar5 + 8,iVar4);
      *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    }
  }
  local_c8 = &DAT_00854534;
  iVar4 = fn_00170f54(auStack_b8);
  fn_00170f54(iVar4 + -8);
  fn_00170f54(auStack_70);
  uVar2 = fn_004b6318(auStack_70,(char *)&DAT_00475b8c);
  fn_006d373c(auStack_50,auStack_b0);
  local_c8 = &DAT_00854534;
  local_c4 = 0;
  iVar4 = fn_0013d40c(auStack_c0);
  iVar4 = fn_0013d40c(iVar4 + 8);
  *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
  fn_00170fa4(iVar4 + -8,uVar2);
  fn_00170fa4(iVar4,auStack_50);
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
    fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
  }
  else {
    *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00854534;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
      iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
      iVar4 = fn_004b637c(iVar5 + 8,iVar4);
      *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    }
  }
  local_c8 = &DAT_00854534;
  iVar4 = fn_00170f54(auStack_b8);
  fn_00170f54(iVar4 + -8);
  fn_00170f54(auStack_50);
  fn_00170f54(auStack_70);
  uVar2 = fn_004b6318(auStack_70,(char *)&DAT_00475b98);
  fn_006d373c(auStack_50,auStack_90);
  local_c8 = &DAT_00854534;
  local_c4 = 0;
  iVar4 = fn_0013d40c(auStack_c0);
  iVar4 = fn_0013d40c(iVar4 + 8);
  *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
  fn_00170fa4(iVar4 + -8,uVar2);
  fn_00170fa4(iVar4,auStack_50);
  puVar1 = *(undefined4 **)(param_1 + 0x15c);
  if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
    fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
  }
  else {
    *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &DAT_00854534;
      *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
      iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
      iVar4 = fn_004b637c(iVar5 + 8,iVar4);
      *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    }
  }
  local_c8 = &DAT_00854534;
  iVar4 = fn_00170f54(auStack_b8);
  fn_00170f54(iVar4 + -8);
  fn_00170f54(auStack_50);
  fn_00170f54(auStack_70);
  if (*(char *)(param_1 + 0x17c) != '\0') {
    fn_0045f27c(auStack_2e0);
    fn_0045f058(auStack_2e0,*(undefined1 *)(param_1 + 0x17c));
    uVar2 = fn_004b6318(auStack_38,(char *)&DAT_00475ba4);
    uVar6 = fn_0013d3e8(auStack_30,local_2dc);
    local_68 = &DAT_00854534;
    local_64 = 0;
    iVar4 = fn_0013d40c(auStack_60);
    iVar4 = fn_0013d40c(iVar4 + 8);
    *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
    fn_00170fa4(iVar4 + -8,uVar2);
    fn_00170fa4(iVar4,uVar6);
    puVar1 = *(undefined4 **)(param_1 + 0x15c);
    if (puVar1 == *(undefined4 **)(param_1 + 0x160)) {
      fn_00792354(param_1 + 0x158,puVar1,iVar4 + -0x10);
    }
    else {
      *(undefined4 **)(param_1 + 0x15c) = puVar1 + 6;
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &DAT_00854534;
        *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(iVar4 + -0xc);
        iVar5 = fn_004b637c(puVar1 + 2,iVar4 + -8);
        iVar4 = fn_004b637c(iVar5 + 8,iVar4);
        *(undefined **)(iVar4 + -0x10) = &DAT_00853860;
      }
    }
    local_68 = &DAT_00854534;
    iVar4 = fn_00170f54(auStack_58);
    fn_00170f54(iVar4 + -8);
    fn_00170f54(auStack_30);
    fn_00170f54(auStack_38);
    fn_0045f2ec(auStack_2e0);
  }
  fn_00170f54(auStack_40);
  fn_0014f480(auStack_90);
  fn_0014f480(auStack_b0);
  return;
}



void fn_0047525c(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_90 [8];
  int local_88;
  uint local_84;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [32];
  undefined1 auStack_20 [8];
  
  iVar1 = *param_3;
  iVar3 = param_3[1];
  if ((uint)(iVar3 - iVar1) < 5) {
    local_50 = 0x80050001;
    fn_004b8d4c(param_1,&local_50);
    return;
  }
  puVar2 = (undefined4 *)fn_0014f1e0(auStack_40);
  *puVar2 = &DAT_00855a18;
  fn_0014f440(puVar2,iVar3 - iVar1,0);
  fn_0015ef58(auStack_40,*param_3,param_3[1] - *param_3,0xffffffff);
  fn_004b72ec(auStack_90,auStack_40);
  fn_004b8d6c(&local_4c);
  fn_004ba978(auStack_90,&local_4c);
  iVar1 = fn_0048a034(auStack_90);
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x44) != *(int *)(param_2 + 0x6c))) {
    if (local_84 - 4 <= *(uint *)(local_88 + 0x10)) {
      local_84 = local_84 - 4;
    }
    fn_0074a528(auStack_90,auStack_20);
    local_50 = 0x80050001;
    fn_004b8d4c(param_1,&local_50);
    fn_004b7520(auStack_90);
    fn_0014f480(auStack_40);
    return;
  }
  iVar3 = fn_006d3b8c(&local_4c);
  if (iVar3 != 0) {
    (**(code **)(**(int **)(param_2 + 0x9c) + 0x50))(*(int **)(param_2 + 0x9c),auStack_90,iVar1);
  }
  *param_1 = local_4c;
  param_1[1] = uStack_48;
  param_1[2] = uStack_44;
  fn_004b7520(auStack_90);
  fn_0014f480(auStack_40);
  return;
}


