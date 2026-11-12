#include "002317d8_002506ac.h"



void fn_002506ac(int param_1)

{
  if (*(int *)(DAT_0088fcd8 + param_1 * 4) == 0) {
    fn_0028aa48(*(undefined4 *)(DAT_00897804 + 0xc));
    return;
  }
  return;
}



void fn_0024d7ec(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int local_28;
  
  iVar2 = *(int *)(param_1 + 0x8c);
  local_28 = 0;
  (**(code **)(**(int **)(iVar2 + 0x4c) + 0xc))(*(int **)(iVar2 + 0x4c),&local_28);
  piVar3 = *(int **)(iVar2 + 0x20);
  uVar4 = 0;
  iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0x4c) + 0x3c) + 0x28);
  if (*(int *)(iVar2 + 0x18) != 0) {
    do {
      if (*piVar3 != 0x1000001) {
        fn_0024d77c(piVar3,&local_28);
      }
      uVar4 = uVar4 + 1;
      piVar3 = piVar3 + 4;
    } while (uVar4 < *(uint *)(iVar2 + 0x18));
  }
  fn_0024d77c(iVar2 + 0x2c,&local_28);
  fn_0024d77c(iVar2 + 0x34,&local_28);
  fn_0024d77c(iVar2 + 4,&local_28);
  fn_0024d77c(iVar2 + 0x50,&local_28);
  fn_0024d77c(iVar2 + 0x58,&local_28);
  fn_0024d77c(iVar2 + 0x60,&local_28);
  fn_0024d77c(iVar2 + 0x68,&local_28);
  fn_0024d77c(iVar2 + 0x70,&local_28);
  fn_0024d77c(iVar2 + 0x80,&local_28);
  fn_0024d77c(iVar2 + 0x78,&local_28);
  fn_0024d77c(iVar2 + 0x88,&local_28);
  fn_0024d77c(iVar2 + 0x90,&local_28);
  fn_0024d77c(iVar2 + 0x98,&local_28);
  piVar3 = *(int **)(iVar2 + 0x44);
  iVar1 = local_28;
  if (piVar3 != (int *)0x0) {
    piVar3[1] = piVar3[1] + 1;
    do {
      (**(code **)(*piVar3 + 0x10))(piVar3);
      piVar5 = (int *)piVar3[3];
      if (piVar5 != (int *)0x0) {
        piVar5[1] = piVar5[1] + 1;
      }
      iVar1 = piVar3[1];
      piVar3[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar3 + 8))(piVar3);
      }
      piVar3 = piVar5;
      iVar1 = local_28;
    } while (piVar5 != (int *)0x0);
  }
  for (; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc)) {
    fn_0024d76c(iVar1);
  }
  *(int *)(iVar2 + 0x44) = local_28;
  iVar2 = *(int *)(*(int *)(*(int *)(iVar2 + 0x4c) + 0x3c) + 0x28);
  if (iVar2 != iVar6) {
                    /* WARNING: Subroutine does not return */
    fn_00146590(iVar2);
  }
  return;
}



void fn_0024c760(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  if (DAT_00896f54 == 0) {
    iVar1 = fn_00145b00(4,&DAT_00812c8c);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = fn_0024c7a0(iVar1,param_1);
    }
    DAT_00896f54 = iVar2;
  }
  return;
}



void fn_0023ddec(void)

{
  fn_0023de00();
  return;
}



undefined4 fn_00235c84(undefined4 *param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  undefined2 *puVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint local_2c0;
  int local_2bc;
  undefined4 *local_2b8;
  uint local_2b4;
  undefined4 *local_2b0;
  undefined1 local_2ac [4];
  undefined4 local_2a8;
  undefined1 local_2a0 [4];
  undefined4 *local_29c;
  undefined4 *local_294;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  uint local_26c [2];
  undefined4 local_264;
  undefined4 local_260;
  undefined1 local_25c [380];
  undefined1 auStack_e0 [98];
  undefined1 auStack_7e [14];
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69 [4];
  undefined1 local_65;
  int local_5c [9];
  undefined1 auStack_38 [8];
  undefined4 *local_30;
  uint uStack_2c;
  int iStack_28;
  
  local_30 = param_1;
  uStack_2c = param_2;
  iStack_28 = param_3;
  uVar1 = fn_0066e530(DAT_00897850);
  *param_1 = uVar1;
  fn_00235bc8(local_5c,local_30);
  fn_00234da4(local_5c);
  local_2a8 = local_5c;
  local_294 = local_30;
  iVar2 = fn_001fb834();
  uVar10 = 0;
  iVar3 = fn_0066e3bc(DAT_00897850);
  if (iVar3 != 0) {
    do {
      uVar10 = uVar10 + 1;
      uVar4 = fn_0066e3bc(DAT_00897850);
    } while (uVar10 < uVar4);
  }
  iVar3 = 0;
  if (0 < iVar2) {
    do {
      iVar5 = fn_0066e530(DAT_00897850);
      if (iVar5 == iVar3) {
        local_288 = 0;
        local_284 = 0;
        local_280 = 0;
        local_27c = 0;
        local_278 = 0;
        local_274 = 0;
        fn_0066e368(DAT_00897850,iVar3,&local_288);
        local_29c = &local_288;
        uVar10 = fn_00100b58();
        puVar12 = &DAT_008f9cf4;
        if (uVar10 != 0) {
          puVar8 = &local_2b4;
          if (0x20 < uVar10) {
            puVar8 = local_26c;
          }
          local_26c[0] = uVar10;
          local_2b4 = 0x20;
          uVar4 = *puVar8;
          if (0xfffffff1 < uVar4) {
            local_2c0 = 0xfffffff1;
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar4);
          }
          if (uVar4 < uVar10) {
            local_2c0 = uVar4;
            fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar10);
          }
          if (uVar4 == 0) {
            puVar12 = &DAT_008f9ce8;
          }
          else {
            puVar12 = (undefined4 *)fn_00100fc6((uVar4 + 8) * 2,0);
            if (puVar12 != (undefined4 *)0x0) {
              *puVar12 = 0;
              puVar12[1] = 0;
              puVar12[2] = 0;
            }
            puVar9 = (undefined2 *)((int)puVar12 + uVar10 * 2 + 0xc);
            *puVar12 = 0;
            puVar12[1] = uVar4;
            puVar12[2] = uVar10;
            if (puVar9 != (undefined2 *)0x0) {
              *puVar9 = 0;
            }
          }
          puVar12 = puVar12 + 3;
        }
        local_2b8 = puVar12;
        fn_00301a9c(puVar12,local_29c,uVar10 << 1);
        fn_00235500(local_294,&local_2b8);
        if (local_2b8 != &DAT_008f9cf4) {
          piVar6 = local_2b8 + -3;
          iVar5 = *piVar6;
          if ((iVar5 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))) {
            iVar5 = local_2b8[-2];
            puVar12 = local_2b8;
            goto LAB_00235f7c;
          }
        }
      }
      else {
        uVar1 = fn_001fbdcc(iVar3);
        iVar5 = fn_001a46f4();
        if (iVar5 == 0) {
          fn_00235be8(local_5c);
          return 0;
        }
        puVar12 = *(undefined4 **)(*(int *)(param_3 + 0x9c) + iVar3 * 0x94 + 4);
        (**(code **)(local_5c[0] + 8))(&local_2b0,local_2a8,iVar3);
        iVar5 = *(int *)(param_3 + 0x9c);
        local_288 = 0;
        local_284 = 0;
        local_280 = 0;
        local_27c = 0;
        local_278 = 0;
        fn_001fbac8(&local_288,iVar3);
        local_2c0 = param_2;
        local_2bc = iVar3;
        local_2b8 = puVar12;
        local_2b4 = iVar5 + iVar3 * 0x94 + 0xc;
        fn_002363a0(local_294,&local_2b0,uVar1,&local_288);
        if (local_2b0 != &DAT_008f9cf4) {
          piVar6 = local_2b0 + -3;
          iVar5 = *piVar6;
          if ((iVar5 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar5 + -1, iVar5 == 0)))) {
            iVar5 = local_2b0[-2];
            puVar12 = local_2b0;
LAB_00235f7c:
            fn_001008c4(puVar12 + -3,iVar5 + 8,0);
          }
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < iVar2);
  }
  iVar11 = *(int *)(param_3 + 0x9c);
  iVar3 = fn_001fc040();
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      if (param_2 == 0) {
        uVar1 = fn_001fb428(iVar5);
        fn_002364c0(local_294,uVar1,iVar11 + iVar5 * 0x12 + 0x70,iVar5);
      }
      (**(code **)(local_5c[0] + 8))(&local_2b0,local_2a8,iVar2 + iVar5);
      uVar1 = (**(code **)(local_5c[0] + 0x2c))(local_2a8,iVar5);
      iVar7 = fn_006b3e50(local_294,iVar2 + iVar5);
      fn_00235500(iVar7,&local_2b0);
      *(undefined4 *)(iVar7 + 0x8c) = uVar1;
      if (local_2b0 != &DAT_008f9cf4) {
        piVar6 = local_2b0 + -3;
        iVar7 = *piVar6;
        if ((iVar7 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar7 + -1, iVar7 == 0)))) {
          fn_001008c4(local_2b0 + -3,local_2b0[-2] + 8,0);
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar3);
  }
  puVar12 = local_30;
  local_70 = 0x5a;
  local_6f = 0xff;
  local_6e = 1;
  local_6d = 1;
  iVar2 = 0;
  do {
    fn_001003e0(auStack_e0 + iVar2 * 0x18,&DAT_008c7328);
    local_69[iVar2] = 0;
    *(undefined4 *)(local_25c + iVar2 * 0x60 + -4) = 0;
    local_25c[iVar2 * 0x60] = 0;
    iVar3 = iVar2 + 1;
    iVar2 = iVar2 * 0x12;
    local_2ac[iVar2] = 0;
    local_2ac[iVar2 + 6] = 0;
    local_2a0[iVar2] = 0;
    iVar2 = iVar3;
  } while (iVar3 < 4);
  fn_0011a604(auStack_7e);
  local_6a = 0;
  local_264 = 0;
  local_65 = 0;
  local_6c = 1;
  local_6b = 0;
  fn_0023617c(auStack_38,puVar12);
  fn_0068c6c4(DAT_008977e8,&local_2c0);
  fn_006b3490(auStack_38,&local_2c0,local_5c);
  fn_0068c764(DAT_008977e8,&local_2c0);
  fn_00235be8(local_5c);
  return 1;
}



void fn_002317d8(undefined4 param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined1 auStack_70 [30];
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 auStack_30 [16];
  
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  iVar3 = param_2;
  puVar4 = param_3;
  if (param_2 == 0) {
    puVar4 = &uStack_52;
    iVar3 = 8;
  }
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  if (param_2 == 0) {
    do {
      puVar4[1] = 0;
      iVar3 = iVar3 + -1;
      puVar4 = puVar4 + 2;
      *puVar4 = 0;
    } while (iVar3 != 0);
  }
  else {
    uVar1 = fn_00661094(iVar3);
    uVar2 = fn_00230e40(uVar1,param_3);
    uVar1 = DAT_00898210;
    fn_0017d96c(auStack_70,0x20,0x1f,(char *)&DAT_0015b0b4,param_2);
    uVar1 = fn_0016ba34(DAT_00897800,uVar1,auStack_70,0);
    fn_0018a618(&local_50,0x10,0xf,L"%ls%ls",uVar2,uVar1);
  }
  fn_00168a24(param_1,&local_50,auStack_30);
  return;
}


