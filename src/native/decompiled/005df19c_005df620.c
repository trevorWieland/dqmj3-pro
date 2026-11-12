#include "005df19c_005df620.h"



undefined4
fn_005df620(int param_1,undefined4 param_2,undefined4 param_3,undefined *param_4,undefined4 param_5
            ,wchar16 *param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,
            undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  bool bVar4;
  
  if (param_4 == (undefined *)0x0) {
    param_4 = &DAT_007cc5a0;
    param_5 = 0x1200;
  }
  if (param_6 == (wchar16 *)0x0) {
    param_6 = L"DUMMY TITLE";
    param_7 = 0x80;
  }
  puVar2 = (undefined1 *)
           fn_004517c0(param_1 + 8,*(undefined4 *)(param_1 + 0x8c4),param_2,param_3,param_4,param_5
                        ,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
  if (((uint)puVar2 & 0x80000000) != 0) {
    if (puVar2 == (undefined1 *)0xc8e10868) {
      return 3;
    }
    if (puVar2 == (undefined1 *)0xc8e10867) {
      return 6;
    }
    iVar3 = 0x1f1ef403;
    bVar4 = puVar2 != &DAT_e0e10bfd;
    if (bVar4) {
      iVar3 = 0x371ef796;
    }
    puVar1 = puVar2 + iVar3;
    if (bVar4 && puVar1 != (undefined1 *)0x0) {
      iVar3 = 0x371ef417;
    }
    if (((bVar4 && puVar1 != (undefined1 *)0x0) && puVar2 + iVar3 != (undefined1 *)0x0) &&
       (puVar2 == (undefined1 *)0xc8a10bf0)) {
      return 5;
    }
    fn_00146594(puVar2);
  }
  return 2;
}



void fn_005df5bc(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x8c8) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x8c8) + -8);
  }
  iVar1 = fn_0044ff38(0);
  if (iVar1 < 0) {
    fn_00146594();
    return;
  }
  return;
}



void fn_005df594(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_24 [12];
  
  iVar1 = fn_006cfe7c(param_1 + 8);
  if (iVar1 == 0) {
    return;
  }
  piVar2 = (int *)(param_1 + 8);
  fn_00170704(&DAT_008e323c);
  if (*(int *)(param_1 + 0xc) != 0) {
    if (*(char *)(param_1 + 0x12) != '\0') {
      fn_00450670(piVar2,0,param_1 + 0x204,param_1 + 0x224);
    }
    if (*(char *)(param_1 + 0x13) != '\0') {
      fn_00450670(piVar2,1,param_1 + 0x3b4,param_1 + 0x3d4);
    }
    if (DAT_0089a618 != '\0') {
      (**(code **)(*piVar2 + 8))(piVar2,*(undefined4 *)(param_1 + 0xc),0x96,0x14,auStack_24);
      fn_00452128(piVar2);
    }
  }
  (**(code **)(*piVar2 + 0x28))(piVar2,*(undefined4 *)(param_1 + 0xc),0,0,5);
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x204) = 0;
  *(undefined4 *)(param_1 + 0x208) = 0;
  *(undefined4 *)(param_1 + 0x20c) = 0;
  *(undefined4 *)(param_1 + 0x210) = 0;
  *(undefined4 *)(param_1 + 0x214) = 0;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined4 *)(param_1 + 0x3b4) = 0;
  *(undefined4 *)(param_1 + 0x3b8) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3c0) = 0;
  *(undefined4 *)(param_1 + 0x3c4) = 0;
  *(undefined4 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  fn_00301f50(param_1 + 0x224,0x18c);
  fn_00301f50(param_1 + 0x3d4,0x18c);
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined4 *)(param_1 + 0x568) = 0;
  fn_00301f50(param_1 + 0x56c,0x318);
  fn_00170704();
  if (DAT_0089a61b != '\0') {
    fn_004539f4(*(undefined4 *)(param_1 + 0x3b0));
    DAT_0089a61b = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  fn_00170704();
  if (DAT_0089a61c != '\0') {
    fn_004539f4(*(undefined4 *)(param_1 + 0x560));
    DAT_0089a61c = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  *(undefined2 *)(param_1 + 0x204) = 0x6262;
  *(undefined2 *)(param_1 + 0x3b4) = 0x6262;
  *(undefined2 *)(param_1 + 0x564) = 0x6767;
  fn_0044ff38(0);
  DAT_0089a619 = 0;
  DAT_0089a618 = 0;
  fn_001707b4(&DAT_008e323c);
  return;
}



undefined4 fn_005df508(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  
  iVar1 = fn_00453d0c();
  if (iVar1 == 0) {
    uVar2 = 8;
  }
  else {
    iVar1 = fn_00453da4(iVar1);
    if (iVar1 == 0) {
      puVar3 = (undefined1 *)fn_00451020(param_1 + 8,*(undefined4 *)(param_1 + 0x8c4),param_2);
      if (((uint)puVar3 & 0x80000000) != 0) {
        if (puVar3 == (undefined1 *)0xc8810bef) {
          return 4;
        }
        if (puVar3 == &DAT_c8810bea) {
          return 1;
        }
        if (puVar3 == (undefined1 *)0xc8a10bf0) {
          return 5;
        }
        fn_00146594(puVar3);
      }
      uVar2 = 2;
    }
    else {
      uVar2 = 9;
    }
  }
  return uVar2;
}



undefined4 fn_005df4ec(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_00451d7c(param_1 + 8);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_005df490(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  int iVar3;
  
  puVar1 = (undefined1 *)fn_00453768(*(int *)(param_1 + 0x8c8) + param_2 * 0x168,param_3,param_4);
  if (((uint)puVar1 & 0x80000000) == 0) {
    uVar2 = 2;
  }
  else {
    iVar3 = 0x1f1ef403;
    if (puVar1 != &DAT_e0e10bfd) {
      iVar3 = 0x375ef40e;
    }
    if (puVar1 != &DAT_e0e10bfd && puVar1 + iVar3 != (undefined1 *)0x0) {
      iVar3 = 0x371ef417;
    }
    fn_00146594(puVar1,iVar3);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_005df474(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = fn_00450d24(param_1 + 8);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = 2;
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_005df3dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined *param_8,undefined4 param_9,
            wchar16 *param_10,undefined4 param_11)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (param_8 == (undefined *)0x0) {
    param_8 = &DAT_007cd820;
    param_9 = 0xc80;
  }
  if (param_10 == (wchar16 *)0x0) {
    param_10 = L"DUMMY TITLE";
    param_11 = 0x80;
  }
  uVar1 = fn_004533ec(*(int *)(param_1 + 0x8c8) + param_2 * 0x168,*(undefined4 *)(param_1 + 0x8c4),
                       param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,param_11);
  if ((uVar1 & 0x80000000) == 0) {
    uVar2 = 2;
  }
  else {
    fn_00146594(uVar1,0x1f1ef403);
    uVar2 = 1;
  }
  return uVar2;
}



undefined4
fn_005df2e8(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  undefined1 *puVar1;
  int iVar2;
  
  puVar1 = (undefined1 *)
           fn_00450748(param_1 + 8,*(int *)(param_1 + 0x8c8) + param_2 * 0x168,param_3,param_5,
                        param_4);
  if (((uint)puVar1 & 0x80000000) == 0) {
    return 2;
  }
  if (puVar1 == (undefined1 *)0xe0a1086c) {
    return 8;
  }
  if (puVar1 == (undefined1 *)0xe0a1086d) {
    return 9;
  }
  iVar2 = 0x371ef797;
  if (puVar1 != (undefined1 *)0xc8e10869) {
    iVar2 = 0x377ef411;
  }
  if (puVar1 != (undefined1 *)0xc8e10869 && puVar1 + iVar2 != (undefined1 *)0x0) {
    iVar2 = -0x1f1ef412;
    if (puVar1 != (undefined1 *)0xe0e10bee) {
      iVar2 = 0x371ef417;
    }
    if (puVar1 != (undefined1 *)0xe0e10bee && puVar1 + iVar2 != (undefined1 *)0x0) {
      iVar2 = 0x371ef79b;
      if (puVar1 != (undefined1 *)0xc8e10865) {
        iVar2 = 0x371ef79a;
      }
      if (puVar1 == (undefined1 *)0xc8e10865 || puVar1 + iVar2 == (undefined1 *)0x0) {
        return 7;
      }
      if (puVar1 == &DAT_c8810bea) {
        return 1;
      }
      if (puVar1 == (undefined1 *)0xc8a10bf0) {
        return 5;
      }
    }
  }
  fn_00146594(puVar1);
  return 1;
}



undefined4
fn_005df19c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 auStack_188 [12];
  int local_17c;
  
  fn_004539a8(auStack_188);
  fn_006cf95c(&local_190,param_1 + 8,param_6,param_2);
  fn_00166824(param_3,&local_190);
  uVar1 = fn_006cfa60(param_1 + 8,param_6,param_2);
  uVar2 = (**(code **)(**(int **)(param_1 + 4) + 8))(*(int **)(param_1 + 4),uVar1,4);
  local_190 = param_6;
  local_18c = param_3;
  puVar3 = (undefined1 *)fn_00450620(param_1 + 8,auStack_188,uVar2,uVar1);
  if (((uint)puVar3 & 0x80000000) == 0) {
    fn_006d000c(auStack_188,param_4,param_5);
    (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),uVar2);
    if (param_5 == local_17c) {
      uVar1 = 2;
    }
    else {
      uVar1 = 10;
    }
    return uVar1;
  }
  iVar4 = 0x377ef416;
  if (puVar3 != &DAT_c8810bea) {
    iVar4 = 0x1f1ef403;
  }
  if (puVar3 != &DAT_c8810bea && puVar3 + iVar4 != (undefined1 *)0x0) {
    if (puVar3 == (undefined1 *)0xc8a10bf0) {
      (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),uVar2);
      return 5;
    }
    fn_00146594();
  }
  (**(code **)(**(int **)(param_1 + 4) + 0xc))(*(int **)(param_1 + 4),uVar2);
  return 1;
}


