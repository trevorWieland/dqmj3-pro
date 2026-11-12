#include "0074dc8c_0074e3bc.h"



void fn_0074e3bc(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_1 + 0x6c));
  if (iVar1 == 0) {
    fn_00456510(param_1 + 0x98,4);
  }
  else {
    iVar2 = fn_006d3b8c(param_2);
    if (iVar2 == 0) {
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456044(iVar1,&local_20);
    }
    else {
      if (*(undefined4 **)(param_1 + 0x188) != (undefined4 *)0x0) {
        **(undefined4 **)(param_1 + 0x188) = *(undefined4 *)(param_1 + 0x13c);
      }
      local_20 = *param_2;
      uStack_1c = param_2[1];
      uStack_18 = param_2[2];
      fn_00456074(iVar1,&local_20);
    }
  }
  fn_004b2f04(param_1);
  return;
}



void fn_0074e1f4(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined1 param_7,undefined4 param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13,
                 undefined4 param_14,undefined1 param_15,undefined4 param_16,int param_17)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined1 local_78 [8];
  undefined *local_70;
  code *pcStack_6c;
  undefined4 uStack_68;
  undefined *local_64;
  undefined4 local_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_34 = param_1;
  iStack_30 = param_2;
  uStack_2c = param_3;
  uStack_28 = param_4;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  *(undefined4 *)(param_2 + 0x6c) = param_3;
  *(undefined4 *)(param_2 + 0x70) = param_4;
  puVar4 = (undefined4 *)fn_0015ecdc(4);
  if (puVar4 != (undefined4 *)0x0) {
    *puVar4 = &DAT_00854c38;
  }
  *(undefined4 **)(param_2 + 0x74) = puVar4;
  *(undefined4 *)(param_2 + 0x8c) = param_11;
  *(undefined1 *)(param_2 + 0x114) = *(undefined1 *)(param_5 + 4);
  *(undefined4 *)(param_2 + 0x118) = *(undefined4 *)(param_5 + 8);
  *(undefined4 *)(param_2 + 0x11c) = *(undefined4 *)(param_5 + 0xc);
  *(undefined4 *)(param_2 + 0x80) = param_6;
  *(undefined1 *)(param_2 + 0x78) = param_7;
  *(undefined4 *)(param_2 + 0x7c) = param_8;
  *(undefined4 *)(param_2 + 0x90) = param_12;
  *(undefined4 *)(param_2 + 0x84) = param_9;
  *(undefined4 *)(param_2 + 0x88) = param_10;
  *(undefined4 *)(param_2 + 0x17c) = param_13;
  *(undefined4 *)(param_2 + 0x180) = param_14;
  *(undefined1 *)(param_2 + 0x184) = param_15;
  *(undefined4 *)(param_2 + 0x188) = param_16;
  iVar1 = fn_001249d0();
  iVar1 = fn_0048a058(*(undefined4 *)(iVar1 + 0x10),*(undefined4 *)(param_2 + 0x6c));
  fn_0048c944(param_2 + 0x98,*(undefined4 *)(iVar1 + 0x74));
  if (param_17 == 0) {
    pcStack_6c = fn_0074eb90;
    uStack_68 = 0;
    local_64 = &DAT_0074e3b8;
    local_70 = &DAT_00853500;
    fn_00479c98(param_2,&local_70);
  }
  else {
    *(undefined1 *)(param_2 + 0x124) = *(undefined1 *)(param_17 + 4);
    fn_00170fa4(param_2 + 0x128,param_17 + 8);
    fn_007925ec(param_2 + 0x130,param_17 + 0x10);
    *(undefined4 *)(param_2 + 0x13c) = *(undefined4 *)(param_17 + 0x1c);
    fn_0079c5b8(param_2 + 0x140,param_17 + 0x20);
    pcStack_6c = fn_0074e830;
    uStack_68 = 0;
    local_64 = &DAT_0074e3b8;
    local_70 = &DAT_00853500;
    fn_00479c98(param_2,&local_70);
  }
  local_78[0] = 1;
  fn_004b8d18(local_34,local_78);
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return;
}



undefined4 * fn_0074e198(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_00854054;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    pcVar1 = *(code **)(param_1[2] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074e140(undefined4 *param_1)

{
  *param_1 = &DAT_00854030;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    fn_0014f1bc();
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074e0d4(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_0085400c;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    pcVar1 = *(code **)(param_1[2] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074e068(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_00853fe8;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    pcVar1 = *(code **)(param_1[2] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074dffc(undefined4 *param_1)

{
  code *pcVar1;
  
  *param_1 = &DAT_00853fc4;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    pcVar1 = *(code **)(param_1[2] + -8);
    if (pcVar1 == (code *)0x0) {
      fn_0030233c();
    }
    else {
      (*pcVar1)();
    }
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074dfa4(undefined4 *param_1)

{
  *param_1 = &DAT_00853fa0;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    fn_0014f1bc();
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074df4c(undefined4 *param_1)

{
  *param_1 = &DAT_00853f7c;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    fn_0014f1bc();
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074de9c(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &DAT_00853f58;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    uVar1 = 0;
    if (DAT_008b6400 != 0) {
      do {
        (*(code *)**(undefined4 **)(param_1[2] + uVar1 * 0x14))(param_1[2] + uVar1 * 0x14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_008b6400);
    }
    fn_0014f1bc(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074ddec(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &DAT_00853f34;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    uVar1 = 0;
    if (DAT_008b6400 != 0) {
      do {
        (*(code *)**(undefined4 **)(param_1[2] + uVar1 * 0x14))(param_1[2] + uVar1 * 0x14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_008b6400);
    }
    fn_0014f1bc(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074dd3c(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &DAT_00853f10;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    uVar1 = 0;
    if (DAT_008b6400 != 0) {
      do {
        (*(code *)**(undefined4 **)(param_1[2] + uVar1 * 0x14))(param_1[2] + uVar1 * 0x14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_008b6400);
    }
    fn_0014f1bc(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}



undefined4 * fn_0074dc8c(undefined4 *param_1)

{
  uint uVar1;
  
  *param_1 = &DAT_00853eec;
  fn_004a1938(&DAT_008b6508,param_1);
  if (param_1[2] != 0) {
    uVar1 = 0;
    if (DAT_008b6400 != 0) {
      do {
        (*(code *)**(undefined4 **)(param_1[2] + uVar1 * 0x14))(param_1[2] + uVar1 * 0x14);
        uVar1 = uVar1 + 1;
      } while (uVar1 < DAT_008b6400);
    }
    fn_0014f1bc(param_1[2]);
    param_1[2] = 0;
  }
  return param_1;
}


