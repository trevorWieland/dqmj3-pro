#include "004533ec_00453c94.h"



byte fn_00453c94(void)

{
  byte bVar1;
  int iVar2;
  undefined1 uStack_10;
  byte local_f;
  undefined1 local_c [12];
  
  if ((DAT_1ff80014 & 1) != 0) {
    return 0;
  }
  iVar2 = fn_00454244(local_c);
  if ((iVar2 < 0) && (iVar2 < 0)) {
    fn_0015e590(iVar2,0x453cc8);
  }
  iVar2 = fn_0014e494(&uStack_10,4,0x130000);
  if (iVar2 < 0) {
    fn_0015e590(iVar2,0x453ce4);
  }
  fn_0045418c(local_c[0]);
  bVar1 = local_f & 1;
  if ((local_f & 1) != 0) {
    bVar1 = 1;
  }
  return bVar1;
}



void fn_00453c5c(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = fn_0014e494(&local_28,0x1c,0xa0000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453c80);
  }
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  param_1[3] = uStack_1c;
  param_1[4] = uStack_18;
  param_1[5] = uStack_14;
  return;
}



uint fn_00453af8(void)

{
  int iVar1;
  uint local_8 [2];
  
  local_8[0] = 0xffffffff;
  iVar1 = fn_0014e494(local_8,4,0xb0000);
  if (iVar1 < 0) {
    fn_0015e590(iVar1,0x453b20);
  }
  return local_8[0] >> 0x18;
}



undefined4 fn_00453a8c(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    fn_0012a2d8();
  }
  else {
    fn_00166824();
  }
  return param_1;
}



undefined4 fn_00453a20(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_18 [8];
  
  if (param_3 != 0) {
    uVar1 = fn_00453a64(auStack_18,param_2 + 0x20);
    fn_00166824(param_3,uVar1);
  }
  if (param_2 == -0x20) {
    fn_0012a2d8();
  }
  else {
    fn_00166824();
  }
  return param_1;
}



int fn_004539a8(int param_1)

{
  *(undefined1 *)(param_1 + 0x130) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x150) = 0;
  *(undefined4 *)(param_1 + 0x154) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x15c) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  fn_0045388c(param_1);
  return param_1;
}



undefined1 * fn_00453768(int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [8];
  
  if (param_2 == 0) {
    return &DAT_e0e10bfd;
  }
  if ((param_3 & 3) == 0) {
    puVar2 = &DAT_c8e10be9;
    if (((param_3 + 0x70 < 0x19001) && (param_3 != 0)) && (param_3 < 0x18001)) {
      fn_00453ab4(auStack_30);
      uVar3 = fn_00453a64(auStack_20,param_1 + 0x20);
      fn_00166824(auStack_30,uVar3);
      fn_00453a64(auStack_28,param_1 + 0x20);
      if ((*(char *)(param_1 + 0x131) != '\0') || (iVar4 = fn_006d0108(auStack_30), iVar4 == 0)) {
        return &DAT_c8810bea;
      }
      iVar6 = 0x70;
      *(uint *)(param_1 + 0x134) = param_3;
      *(int *)(param_1 + 0x138) = param_2;
      *(uint *)(param_1 + 0xc) = param_3;
      iVar4 = (int)*(char *)(param_1 + 0x130);
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          iVar1 = iVar5 * 0xc;
          iVar4 = iVar4 + -1;
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 8 + (*(int *)(param_1 + iVar1 + 0x74) + 3U & 0xfffffffc);
        } while (iVar4 != 0);
      }
      *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + iVar6 + 0x20;
      *(int *)(param_1 + 8) = iVar6;
      puVar2 = (undefined1 *)0x0;
    }
  }
  else {
    puVar2 = (undefined1 *)0xc8a10bf2;
  }
  return puVar2;
}



undefined1 *
fn_004533ec(int param_1,int param_2,undefined4 param_3,undefined1 param_4,uint param_5,uint param_6
            ,uint param_7,undefined4 param_8,undefined4 param_9,undefined4 param_10,
            undefined4 param_11)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [12];
  
  fn_00453ab4(auStack_40);
  uVar2 = fn_00453a64(auStack_30,param_1 + 0x20);
  fn_00166824(auStack_40,uVar2);
  fn_00453a64(auStack_38,param_1 + 0x20);
  if ((*(char *)(param_1 + 0x131) != '\0') || (iVar3 = fn_006d0108(auStack_40), iVar3 == 0)) {
    fn_0045388c(param_1);
  }
  puVar4 = &DAT_e0e10bfd;
  if (param_2 != 0) {
    *(int *)(param_1 + 0x10) = param_2;
    puVar4 = (undefined1 *)0x0;
  }
  if (-1 < (int)puVar4) {
    *(undefined4 *)(param_1 + 0x18) = param_3;
    puVar4 = &DAT_e0e10bfd;
    if (param_5 < 4) {
      puVar4 = (undefined1 *)0x0;
    }
    *(undefined1 *)(param_1 + 0x34) = param_4;
    if (param_5 < 4) {
      *(char *)(param_1 + 0x35) = (char)param_5;
    }
    if (-1 < (int)puVar4) {
      uVar1 = param_7;
      if (1 < param_7) {
        uVar1 = param_6;
      }
      if (1 < uVar1) {
        puVar4 = (undefined1 *)0xe0e10bee;
      }
      *(char *)(param_1 + 0x6c) = (char)param_6;
      *(char *)(param_1 + 0x6d) = (char)param_7;
      if (((uVar1 < 2) &&
          (puVar4 = (undefined1 *)fn_0045350c(param_1,2,param_9,param_8), -1 < (int)puVar4)) &&
         (puVar4 = (undefined1 *)fn_0045350c(param_1,4,param_11,param_10), -1 < (int)puVar4)) {
        puVar4 = (undefined1 *)0x0;
      }
    }
  }
  return puVar4;
}



void fn_0045388c(undefined2 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)*(char *)(param_1 + 0x98);
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      iVar1 = iVar1 + -1;
      *(undefined4 *)(param_1 + iVar2 * 6 + 0x3a) = 0;
      *(undefined4 *)(param_1 + iVar2 * 6 + 0x38) = 0;
      iVar2 = iVar2 + 1;
    } while (iVar1 != 0);
  }
  *(undefined1 *)(param_1 + 0x98) = 0;
  fn_00301f50(param_1,0x70);
  *param_1 = 0x6060;
  *(undefined4 *)(param_1 + 0x9a) = 0;
  *(undefined1 *)((int)param_1 + 0x131) = 0;
  return;
}



undefined1 * fn_0045350c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_38 [8];
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  fn_00453ab4(auStack_38);
  uVar2 = fn_00453a64(auStack_28,param_1 + 0x20);
  fn_00166824(auStack_38,uVar2);
  fn_00453a64(auStack_30,param_1 + 0x20);
  if ((*(char *)(param_1 + 0x131) != '\0') || (iVar3 = fn_006d0108(auStack_38), iVar3 == 0)) {
    return &DAT_c8810bea;
  }
  puVar4 = (undefined1 *)fn_004538f0(param_1,param_2,param_3,param_4);
  if (-1 < (int)puVar4) {
    iVar5 = 0x70;
    iVar3 = (int)*(char *)(param_1 + 0x130);
    if (iVar3 != 0) {
      iVar6 = 0;
      do {
        iVar1 = iVar6 * 0xc;
        iVar3 = iVar3 + -1;
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 8 + (*(int *)(param_1 + iVar1 + 0x74) + 3U & 0xfffffffc);
      } while (iVar3 != 0);
    }
    *(int *)(param_1 + 4) = *(int *)(param_1 + 0x134) + iVar5 + 0x20;
    *(int *)(param_1 + 8) = iVar5;
    puVar4 = (undefined1 *)0x0;
  }
  return puVar4;
}



undefined4 fn_00453ab4(undefined4 param_1)

{
  fn_0012a2d8();
  return param_1;
}



undefined4 fn_00453a64(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    fn_0012a2d8();
  }
  else {
    fn_00166824();
  }
  return param_1;
}



undefined1 * fn_004538f0(int param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  if (0x2000 < param_3) {
    return &DAT_c8e10be9;
  }
  if (param_4 == 0) {
    return &DAT_e0e10bfd;
  }
  iVar2 = 0;
  iVar1 = (int)*(char *)(param_1 + 0x130);
  if (0 < iVar1) {
    do {
      if (*(int *)(param_1 + iVar2 * 0xc + 0x70) == param_2) {
        param_1 = param_1 + iVar2 * 0xc;
        *(uint *)(param_1 + 0x74) = param_3;
        *(int *)(param_1 + 0x78) = param_4;
        return (undefined1 *)0x0;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar1);
  }
  *(int *)(param_1 + iVar1 * 0xc + 0x70) = param_2;
  *(uint *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x74) = param_3;
  *(int *)(param_1 + *(char *)(param_1 + 0x130) * 0xc + 0x78) = param_4;
  *(char *)(param_1 + 0x130) = *(char *)(param_1 + 0x130) + '\x01';
  return (undefined1 *)0x0;
}


