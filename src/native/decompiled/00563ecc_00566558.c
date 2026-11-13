#include "00563ecc_00566558.h"



void fn_00566558(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  fn_005ab938();
  bVar1 = *(byte *)(param_1 + 0x100);
  if (bVar1 != 0xd) {
    if (bVar1 < 0xe) {
      if (bVar1 == 4) {
        iVar3 = fn_00145b00(0xc,&DAT_00812c8c);
        uVar4 = 0;
        if (iVar3 != 0) {
          uVar4 = fn_003d2db4(iVar3,*(undefined4 *)(param_1 + 0xe4));
        }
        *(undefined4 *)(param_1 + 0xf0) = uVar4;
        fn_005e0bd4(*(undefined4 *)(param_1 + 0xec),uVar4);
        uVar4 = fn_005ab774(param_1,(char *)&DAT_005660bc);
        *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
        *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x51) = 1;
        fn_005ab6e0(param_1,uVar4,3,1);
        uVar2 = 5;
      }
      else {
        if (bVar1 != 5) {
          return;
        }
        iVar3 = *(int *)(param_1 + 0xfc) + 1;
        *(int *)(param_1 + 0xfc) = iVar3;
        if (iVar3 < 0x3d) {
          return;
        }
        if (*(char *)(*(int *)(param_1 + 0xf0) + 8) == '\0') {
          return;
        }
        fn_00689bd0(param_1,0,0);
        fn_00127fb4(*(undefined4 *)(param_1 + 0xec),*(undefined4 *)(param_1 + 0xf0));
        *(undefined4 *)(param_1 + 0xf0) = 0;
        *(undefined4 *)(param_1 + 0xfc) = 0;
        if (*(int *)(*(int *)(param_1 + 0xe4) + 0x10) - *(int *)(*(int *)(param_1 + 0xe4) + 0xc) >>
            1 == 0) {
          uVar4 = fn_005ab774(param_1,(char *)&DAT_0056640c);
          fn_005ab6e0(param_1,uVar4,3,1);
          goto LAB_005666ec;
        }
        *(undefined4 *)(param_1 + 0x104) = 0xde;
        fn_00689824(param_1,0);
        uVar2 = 0xe;
      }
      *(undefined1 *)(param_1 + 0x100) = uVar2;
    }
    else {
      if (bVar1 == 0xe) {
        fn_006899f4(param_1,*(undefined4 *)(param_1 + 0x104),0);
        return;
      }
      if (bVar1 == 0xf) {
        fn_005c8048(*(undefined4 *)(param_1 + 0xe4));
        fn_006899f4(param_1,0xd4,0,1);
        fn_006898b8(param_1,0xe1,0);
LAB_005666ec:
        *(undefined1 *)(param_1 + 0x100) = 0xd;
        return;
      }
    }
  }
  return;
}



void fn_00566508(int param_1,int param_2)

{
  undefined1 uVar1;
  
  *(int *)(*(int *)(param_1 + 0xe4) + 0x40) = param_2;
  if (param_2 == 4) {
    uVar1 = 4;
  }
  else {
    *(undefined4 *)(param_1 + 0x104) = 0xdd;
    fn_00689824(param_1,0);
    uVar1 = 0xe;
  }
  *(undefined1 *)(param_1 + 0x100) = uVar1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005664d8(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x108,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00566718(iVar1,param_1);
  return;
}



void fn_00566490(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  fn_005ab920();
  uVar1 = fn_005ab794(param_1,param_2);
  uVar2 = fn_005ab774(param_1,(&PTR_s_CoplingSearchHelpSearchParent_00890ef4)[param_2]);
  fn_005ab578(param_1,uVar1,uVar2);
  return;
}



void fn_00566424(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
  if ((uVar2 & uVar3) != 0) {
    fn_005ab918(param_1);
    fn_00689824(param_1,0);
    *(undefined1 *)(param_1 + 0x40) = 0xf;
  }
  return;
}



void fn_00565b3c(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar5 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar1 = fn_001287d4((*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2) * 0xf0,
                       &DAT_00812c8c);
  *(undefined4 *)(param_1 + 0x124) = uVar1;
  puVar2 = *(undefined4 **)(param_1 + 0x10c);
  iVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x110) != puVar2) {
    do {
      fn_00301f50(*(int *)(param_1 + 0x124) + iVar4 * 0xf0,0xf0);
      uVar1 = fn_0028aad0(uVar5,*puVar2);
      fn_0017821c(*(int *)(param_1 + 0x124) + iVar4 * 0xf0,uVar1,0xf0);
      puVar2 = puVar2 + 1;
      iVar4 = iVar4 + 1;
    } while (*(undefined4 **)(param_1 + 0x110) != puVar2);
  }
  fn_001221d4(uVar5,*(undefined4 *)(param_1 + 0x11c),0);
  uVar3 = 0;
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 != 0) {
    do {
      uVar1 = fn_0028a284(*(undefined4 *)(DAT_00897804 + 0xc),
                           *(int *)(param_1 + 0x124) + uVar3 * 0xf0);
      uVar1 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar1);
      fn_0024f108(uVar1,0);
      uVar3 = uVar3 + 1;
    } while (uVar3 < (uint)(*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2));
  }
  fn_00311198(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  *(undefined1 *)(param_1 + 0x118) = 2;
  uVar1 = fn_00689b18(param_1);
  fn_0026a494(DAT_00897818,uVar1,1);
  return;
}



void fn_005657b8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x118) = 1;
  *(undefined1 *)(param_1 + 0x119) = 0xc;
  uVar1 = fn_0022f584(DAT_00898a8c,0);
  fn_0068974c(param_1,uVar1,1,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = 0;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_00565564(int param_1,undefined4 param_2)

{
  fn_00689efc(param_1,0x2d,0);
  fn_0025f354(*(undefined4 *)(param_1 + 0xf0),param_2);
  return;
}



void fn_00565440(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  local_18 = param_4;
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 == 0) {
    fn_001221d4(*(undefined4 *)(DAT_00897804 + 0xc),*(undefined4 *)(param_1 + 0x11c),0);
    fn_00565070(param_1);
    local_18 = 0xff000000;
    fn_00163988(DAT_00897808,&local_18,10);
    local_18 = 0xff000000;
    fn_00163988(DAT_0089780c,&local_18,10);
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  iVar2 = fn_00154ac8(0x397);
  if (iVar2 == 0) {
    fn_00144834(0x397,1);
    uVar1 = 0xf;
  }
  else {
    uVar1 = 0xe;
  }
  *(undefined1 *)(param_1 + 0x119) = uVar1;
  uVar3 = fn_0022f584(DAT_00898a94,0);
  fn_0068974c(param_1,uVar3,0,1);
  iVar2 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar2 + 0x38) = param_2;
  *(undefined1 *)(iVar2 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



void fn_00565070(int param_1)

{
  undefined4 local_10;
  
  local_10 = 0xff000000;
  fn_00163988(DAT_00897808,&local_10,10);
  local_10 = 0xff000000;
  fn_00163988(DAT_0089780c,&local_10,10);
  *(undefined1 *)(param_1 + 0x118) = 3;
  return;
}



void fn_00564278(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_00311508(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
  if (iVar1 == 0) {
    fn_0031154c(*(undefined4 *)(*(int *)(param_1 + 0x100) + 0x2c));
    fn_0015b0f8();
    *(undefined1 *)(param_1 + 0x119) = 8;
    uVar2 = fn_0022f584(DAT_00898a7c,0);
    fn_0068974c(param_1,uVar2,0,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 ==
      *(int *)(*(int *)(param_1 + 0x104) + 0x10)) {
    *(undefined1 *)(param_1 + 0x119) = 9;
    uVar2 = fn_0022f584(DAT_00898a80,0);
    fn_0068974c(param_1,uVar2,0,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    return;
  }
  if (*(int *)(param_1 + 0x120) + (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2) < 500
     ) {
    *(undefined1 *)(param_1 + 0x119) = 0xb;
    uVar2 = fn_0022f584(DAT_00898a88,0);
    fn_0068974c(param_1,uVar2,1,1);
    iVar1 = *(int *)(param_1 + 0x5c);
    *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
    *(undefined1 *)(iVar1 + 0x5f) = 1;
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
    *(undefined1 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 9) = 0;
    return;
  }
  *(undefined1 *)(param_1 + 0x119) = 10;
  uVar2 = fn_0022f584(DAT_00898a84,0);
  fn_0068974c(param_1,uVar2,0,1);
  iVar1 = *(int *)(param_1 + 0x5c);
  *(undefined4 *)(iVar1 + 0x38) = 0x100094b;
  *(undefined1 *)(iVar1 + 0x5f) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x3c) = 0;
  *(undefined1 *)(param_1 + 0x118) = 1;
  return;
}



undefined4 fn_00563f98(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_005ce2ec(*(undefined4 *)(param_1 + 100));
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),0,1);
  return 1;
}



void fn_00563ecc(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_003a4274();
  *puVar1 = &DAT_0083f478;
  puVar1[0x21] = 0;
  puVar1[0x22] = 0;
  puVar1[0x23] = 0;
  puVar1[0x24] = 0;
  puVar1[0x25] = 0;
  puVar1[0x27] = 0;
  puVar1[0x28] = 0;
  *(undefined1 *)(puVar1 + 0x29) = 0;
  *(undefined1 *)((int)puVar1 + 0xa5) = 0;
  puVar1[0x2a] = 0;
  puVar1[0x2b] = 0;
  return;
}


