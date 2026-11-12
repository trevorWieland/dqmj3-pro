#include "005c5958_005c642c.h"



void fn_005c642c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) goto LAB_005c6474;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005c6474:
  *(undefined4 **)(param_1 + 0x118) = puVar1;
  fn_0043cd28(param_1);
  return;
}



void fn_005c6368(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  fn_004113f0();
  cVar1 = *(char *)(param_1 + 0x104);
  if (cVar1 == '\x03') {
    *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x38) = 0xf2;
    return;
  }
  if (cVar1 == '\x06') {
    *(undefined4 *)(*(int *)(param_1 + 0x10c) + 0x18) = 0xea;
    return;
  }
  if (cVar1 == '\a') {
    iVar2 = *(int *)(param_1 + 0x10c);
    uVar3 = 0xeb;
  }
  else {
    if (cVar1 != '\b') {
      return;
    }
    iVar2 = *(int *)(param_1 + 0x10c);
    uVar3 = 0xef;
  }
  *(undefined4 *)(iVar2 + 0x18) = uVar3;
  return;
}



void fn_005c6074(int param_1)

{
  fn_00689828(param_1,1);
  fn_00327a7c(*(undefined4 *)(param_1 + 0x114));
  *(undefined1 *)(param_1 + 0x118) = 0;
  return;
}



void fn_005c5fd0(int *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;
  undefined4 local_1c;
  float fStack_18;
  undefined4 local_14;
  
  fn_00689828(param_1,0);
  param_1[0x48] = param_2;
  param_1[0x47] = (int)param_3;
  uVar1 = (**(code **)(*param_1 + 0x174))(param_1);
  fVar2 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  fStack_18 = fVar2 * -18.0 + -76.0;
  local_1c = 0;
  local_14 = 0;
  fn_00327a24(param_1[0x45],1,uVar1,*param_3,&local_1c);
  *(undefined1 *)(param_1 + 0x46) = 1;
  return;
}



void fn_005c5e44(int *param_1)

{
  if ((char)param_1[0x46] == '\0') {
    return;
  }
  (**(code **)(*param_1 + 0x170))(param_1);
  (**(code **)(*param_1 + 0x16c))(param_1);
  if (param_1[0x44] < param_1[0x43]) {
    if (param_1[0x48] == 0) {
      param_1[0x44] = param_1[0x43];
    }
    else if (param_1[0x48] == 1) {
      param_1[0x43] = param_1[0x44];
    }
  }
  fn_005c5ee4(param_1,0,param_1[0x43]);
  fn_005c5ee4(param_1,1,param_1[0x44]);
  return;
}



void fn_005c5ee4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  puVar2 = &local_58;
  iVar1 = (**(code **)(*param_1 + 0x174))(param_1);
  if (param_3 < iVar1) {
    fn_0018a618(&local_58,0x20,0x1f,&LAB_005c5fc0,param_3);
  }
  else {
    puVar2 = (undefined4 *)fn_0022f750((char *)&DAT_005c5fb0);
  }
  fn_0031b6ec(*(undefined4 *)(param_1[0x1e] + param_2 * 4),4,1);
  fn_0031b7c4(*(undefined4 *)(param_1[0x1e] + param_2 * 4),4,puVar2);
  return;
}



undefined4 * fn_005c5c18(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined1 auStack_5d0 [96];
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_568;
  undefined4 local_564;
  undefined4 local_560;
  undefined1 local_55c;
  undefined4 local_420;
  undefined1 auStack_418 [8];
  undefined4 local_410;
  undefined1 local_40c;
  undefined1 local_40b;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 uStack_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined1 auStack_3e8 [960];
  undefined4 local_28 [2];
  
  local_28[0] = 0;
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1,local_28);
  iVar1 = *(int *)(iVar1 + param_2 * 0x10 + 8);
  if (iVar1 == 0xea) {
    if (param_2 == 0) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x168))(param_1,0,param_1 + 0x43);
      return puVar2;
    }
    puVar2 = (undefined4 *)0xea;
    if (param_2 == 1) {
      puVar2 = (undefined4 *)(**(code **)(*param_1 + 0x168))(param_1,1,param_1 + 0x44);
      return puVar2;
    }
  }
  else {
    if (iVar1 == 0xe5) {
      puVar4 = *(undefined4 **)(param_1[0x41] + 0x10);
      fn_0037cbbc(puVar4,1);
      *(char *)((int)puVar4 + 10) = (char)param_1[0x43];
      *(char *)((int)puVar4 + 0xb) = (char)param_1[0x44];
      puVar2 = (undefined4 *)fn_001f74d8(param_1,0xe7);
      if (puVar2 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar3 == &DAT_00899218) goto LAB_005c5d30;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_005c5d30:
      fn_0017821c(auStack_5d0,puVar2 + 0x156,0x1b0);
      local_420 = puVar2[0x1c2];
      iVar1 = fn_004b9b4c(auStack_418,puVar2 + 0x1c4);
      *(undefined4 *)(iVar1 + 8) = puVar2[0x1c6];
      *(undefined1 *)(iVar1 + 0xc) = *(undefined1 *)(puVar2 + 0x1c7);
      *(undefined1 *)(iVar1 + 0xd) = *(undefined1 *)((int)puVar2 + 0x71d);
      uVar5 = puVar2[0x1c9];
      uVar6 = puVar2[0x1ca];
      uVar7 = puVar2[0x1cb];
      uVar8 = puVar2[0x1cc];
      uVar9 = puVar2[0x1cd];
      uVar10 = puVar2[0x1ce];
      uVar11 = puVar2[0x1cf];
      *(undefined4 *)(iVar1 + 0x10) = puVar2[0x1c8];
      *(undefined4 *)(iVar1 + 0x14) = uVar5;
      *(undefined4 *)(iVar1 + 0x18) = uVar6;
      *(undefined4 *)(iVar1 + 0x1c) = uVar7;
      *(undefined4 *)(iVar1 + 0x20) = uVar8;
      *(undefined4 *)(iVar1 + 0x24) = uVar9;
      *(undefined4 *)(iVar1 + 0x28) = uVar10;
      *(undefined4 *)(iVar1 + 0x2c) = uVar11;
      fn_0017821c(iVar1 + 0x30,puVar2 + 0x1d0,0x3c0);
      local_570 = *puVar4;
      local_56c = puVar4[1];
      local_568 = puVar4[2];
      local_564 = puVar4[3];
      local_560 = puVar4[4];
      local_55c = *(undefined1 *)(puVar4 + 5);
      fn_0017821c(puVar2 + 0x156,auStack_5d0,0x1b0);
      puVar2[0x1c2] = local_420;
      fn_0014f510(puVar2 + 0x1c4,auStack_418);
      puVar2[0x1c6] = local_410;
      *(undefined1 *)(puVar2 + 0x1c7) = local_40c;
      *(undefined1 *)((int)puVar2 + 0x71d) = local_40b;
      puVar2[0x1c8] = local_408;
      puVar2[0x1c9] = uStack_404;
      puVar2[0x1ca] = uStack_400;
      puVar2[0x1cb] = uStack_3fc;
      puVar2[0x1cc] = uStack_3f8;
      puVar2[0x1cd] = uStack_3f4;
      puVar2[0x1ce] = uStack_3f0;
      puVar2[0x1cf] = uStack_3ec;
      fn_0017821c(puVar2 + 0x1d0,auStack_3e8,0x3c0);
      fn_005d6734(param_1,param_2);
      return &local_570;
    }
    puVar2 = (undefined4 *)fn_005d6734(param_1,param_2);
  }
  return puVar2;
}



void fn_005c5aa8(undefined4 *param_1)

{
  *param_1 = &DAT_0084a744;
  if ((int *)param_1[0x46] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x46] + 4))();
  }
  fn_0074908c(param_1);
  fn_002feef8();
  return;
}



undefined4 * fn_005c5958(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  int iVar4;
  
  iVar1 = fn_00145b00(0x11c,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0043d370(iVar1,param_1,(char *)&DAT_005c5a78,0xdd,1,unaff_r4);
  iVar4 = 0;
  *puVar2 = &DAT_0084a744;
  puVar2[0x41] = 0;
  puVar2[0x43] = &DAT_0085a9f4;
  puVar2[0x44] = 0;
  puVar2[0x45] = 0;
  iVar1 = fn_00145b00(0x120,&DAT_00812c8c);
  if (iVar1 != 0) {
    puVar3 = (undefined4 *)fn_005f62c0();
    puVar3[8] = &DAT_00859420;
    puVar3[9] = 0;
    puVar3[10] = 0;
    puVar3[0xb] = 0;
    puVar3[0xc] = 0;
    puVar3[0xd] = 0;
    *puVar3 = &DAT_00859b38;
    iVar1 = fn_00119b40(puVar3 + 0x10);
    fn_0066ddbc();
    fn_002fec40(iVar1 + 0x18,s_TaskNexGatheringCreate_008c6ee2);
    *(undefined **)(iVar1 + -0x40) = &DAT_0085a13c;
    iVar1 = fn_00124930(iVar1 + 0x60);
    iVar4 = fn_0013d40c(iVar1 + 0x74);
    fn_0013d1d0(iVar4 + -0x74);
    *(undefined4 *)(iVar4 + -4) = 0;
    fn_0013d438(iVar4,&DAT_008c6e84);
    iVar4 = iVar4 + -0x114;
    fn_0067802c(iVar4);
  }
  puVar2[0x46] = iVar4;
  return puVar2;
}


