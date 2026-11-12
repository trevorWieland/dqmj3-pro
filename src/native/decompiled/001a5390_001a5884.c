#include "001a5390_001a5884.h"



void fn_001a5884(int *param_1,int param_2,int param_3)

{
  bool bVar1;
  undefined1 uVar2;
  byte bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_78;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_68;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  uint uStack_5c;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined1 local_48 [8];
  undefined4 local_40;
  undefined1 local_3c;
  byte local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined1 local_38 [8];
  undefined1 local_30 [12];
  
  iVar6 = *param_1;
  iVar7 = 0;
  iVar4 = *(int *)(param_1[1] + 100);
  while( true ) {
    if (iVar6 == param_3) {
      if (param_2 == 0x2c) {
        fn_001a7908(param_1[1],iVar4 + -1,1,iVar7);
      }
      iVar7 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar7;
      return;
    }
    bVar8 = false;
    bVar1 = false;
    if (param_2 == 0x3b) {
      bVar8 = *param_1 == 0x140;
      if (bVar8) {
        iVar6 = param_1[1];
        local_73 = fn_001a72b0(iVar6,0xffffffff);
        local_74 = 0x1e;
        local_72 = 0;
        local_78 = 0;
        local_71 = 0;
        fn_001a759c(iVar6,&local_78);
        iVar6 = fn_001a9c90(param_1 + 4);
        *param_1 = iVar6;
        fn_001a5884(param_1,0x2c,0x141);
      }
      if (*param_1 == 0x142) {
        bVar1 = true;
        iVar6 = fn_001a9c90(param_1 + 4);
        *param_1 = iVar6;
      }
    }
    iVar6 = *param_1;
    if (iVar6 == 0x5b) {
      iVar6 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar6;
      fn_001a725c(param_1);
      fn_001a8854(&local_58,param_1,0x5d);
      fn_001a8854(&local_58,param_1,0x3d);
      fn_0019d970(&local_58,param_1,0);
    }
    else if (iVar6 == 0x11d || iVar6 == 0x136) {
      iVar5 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar5;
      if (iVar6 == 0x11d) {
        fn_001a8854(local_38,param_1,0x102);
      }
      else {
        fn_001a93d4(local_30,param_1[1],(char *)&DAT_001a5c0c,0xffffffff);
      }
      fn_001a8854(local_38,param_1,0x28);
      iVar6 = param_1[1];
      uVar2 = fn_001a72b0(iVar6,0xffffffff);
      local_58 = fn_001a9170(param_1[1],local_48);
      local_54 = (uint)CONCAT11(uVar2,1);
      fn_001a759c(iVar6,&local_58);
      fn_001a5390(param_1,local_48);
      iVar6 = param_1[1];
      local_4b = fn_001a72b0(iVar6,0xffffffff);
      local_4c = 0x30;
      local_50 = *(int *)(param_1[1] + 0x40) + -1;
      local_4a = 0;
      local_49 = 0;
      fn_001a759c(iVar6,&local_50);
    }
    else {
      iVar6 = param_1[1];
      uVar2 = fn_001a72b0(iVar6,0xffffffff);
      fn_001a8854(&local_58,param_1,0x102);
      local_60 = local_58;
      uStack_5c = local_54;
      local_68 = fn_001a9170(param_1[1],&local_60);
      local_64 = 1;
      local_62 = 0;
      local_61 = 0;
      local_63 = uVar2;
      fn_001a759c(iVar6,&local_68);
      fn_001a8854(&local_58,param_1,0x3d);
      fn_0019d970(&local_58,param_1,0);
    }
    if (*param_1 == param_2) {
      iVar6 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar6;
    }
    iVar7 = iVar7 + 1;
    uVar2 = fn_001a9704(param_1[1]);
    iVar6 = fn_001a9704(param_1[1]);
    if ((bVar8) && (iVar5 = fn_001a9704(param_1[1]), iVar5 != iVar6 + -1)) break;
    if (bVar1) {
      bVar3 = 2;
    }
    else {
      bVar3 = 0;
    }
    local_40 = fn_001a9808(param_1[1]);
    local_3c = 0x3c;
    local_3a = (undefined1)iVar6;
    local_3b = bVar8 | bVar3;
    local_39 = uVar2;
    fn_001a759c(param_1[1],&local_40);
    iVar6 = *param_1;
  }
                    /* WARNING: Subroutine does not return */
  fn_00146590();
}



void fn_001a5390(int *param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int extraout_r1;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined1 auStack_5c [4];
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined4 local_30;
  undefined4 uStack_2c;
  
  iVar1 = fn_001ac07c(param_1[1],*(undefined4 *)(param_1[0x7e] + 0x8c));
  uVar7 = *(uint *)(iVar1 + 0x88);
  piVar6 = *(int **)(iVar1 + 0x8c);
  *(uint *)(iVar1 + 0x8c) = param_2[1];
  uVar8 = *param_2;
  *(uint *)(iVar1 + 0x88) = uVar8;
  if ((uVar8 & 0x8000000) != 0) {
    *(int *)(*(int *)(iVar1 + 0x8c) + 4) = *(int *)(*(int *)(iVar1 + 0x8c) + 4) + 1;
  }
  if (((uVar7 & 0x8000000) != 0) && (iVar2 = piVar6[1], piVar6[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  fn_001a93d4(&local_58,param_1[1],&DAT_001a57b4,0xffffffff);
  local_30 = local_58;
  uStack_2c = uStack_54;
  fn_001a931c(iVar1,&local_30);
  piVar6 = *(int **)(iVar1 + 0x94);
  uVar8 = *(uint *)(iVar1 + 0x90);
  *(int *)(iVar1 + 0x94) = param_1[3];
  uVar7 = param_1[2];
  *(uint *)(iVar1 + 0x90) = uVar7;
  if ((uVar7 & 0x8000000) != 0) {
    *(int *)(*(int *)(iVar1 + 0x94) + 4) = *(int *)(*(int *)(iVar1 + 0x94) + 4) + 1;
  }
  if (((uVar8 & 0x8000000) != 0) && (iVar2 = piVar6[1], piVar6[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  iVar2 = *param_1;
  iVar9 = 0;
  while (iVar2 != 0x29) {
    if (iVar2 == 0x138) {
      if (0 < iVar9) {
        fn_00102cc8(&DAT_008f9d08,
                     "function with default parameters cannot have variable number of parameters",
                     auStack_5c);
        param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_1 + 0x1e,1);
      }
      *(undefined1 *)(iVar1 + 0x20) = 1;
      iVar2 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar2;
      if (iVar2 != 0x29) {
        fn_00102cc8(&DAT_008f9d08,"expected \')\'",auStack_5c);
        param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_1 + 0x1e,1);
      }
      break;
    }
    fn_001a8854(&local_50,param_1,0x102);
    local_40 = local_50;
    uStack_3c = uStack_4c;
    fn_001a931c(iVar1,&local_40);
    if (*param_1 == 0x3d) {
      iVar2 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar2;
      fn_0019d970(&local_50,param_1,0);
      uVar3 = fn_001a9808(param_1[1]);
      if (*(uint *)(iVar1 + 0xcc) <= *(uint *)(iVar1 + 200)) {
        iVar2 = *(uint *)(iVar1 + 200) << 1;
        if (iVar2 == 0) {
          iVar2 = 4;
        }
        uVar4 = fn_0018388c(*(undefined4 *)(iVar1 + 0xc4),*(uint *)(iVar1 + 0xcc) << 2,iVar2 << 2);
        *(undefined4 *)(iVar1 + 0xc4) = uVar4;
        *(int *)(iVar1 + 0xcc) = iVar2;
      }
      iVar9 = iVar9 + 1;
      puVar5 = (undefined4 *)(*(int *)(iVar1 + 0xc4) + *(int *)(iVar1 + 200) * 4);
      *(int *)(iVar1 + 200) = *(int *)(iVar1 + 200) + 1;
      iVar2 = iVar1;
      if (puVar5 != (undefined4 *)0x0) {
        *puVar5 = uVar3;
      }
    }
    else {
      iVar2 = extraout_r1;
      if (0 < iVar9) {
        fn_00102cc8(&DAT_008f9d08,"expected \'=\'",auStack_5c);
        param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
        fn_001a5350(param_1 + 0x1e,1);
      }
    }
    if (*param_1 != 0x2c) {
      if (*param_1 != 0x29) goto LAB_001a56bc;
      break;
    }
    iVar2 = fn_001a9c90(param_1 + 4,iVar2);
    *param_1 = iVar2;
  }
  fn_001a8854(&local_50,param_1,0x29);
  iVar2 = 0;
  if (0 < iVar9) {
    do {
      fn_001a9704(param_1[1]);
      iVar2 = iVar2 + 1;
    } while (iVar2 < iVar9);
  }
  if (*param_1 == 0x3a) {
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
    fn_001a8854(&local_58,param_1,0x28);
    iVar2 = *param_1;
    while (iVar2 != 0x29) {
      fn_001a8854(&local_58,param_1,0x102);
      local_40 = local_58;
      uStack_3c = uStack_54;
      fn_001ab9f0(iVar1,&local_40);
      if (*param_1 != 0x2c) {
        if (*param_1 != 0x29) {
LAB_001a56bc:
          fn_00102cc8(&DAT_008f9d08,"expected \')\' or \',\'",auStack_5c);
          param_1[0x1c] = (int)&DAT_008f9d08;
                    /* WARNING: Subroutine does not return */
          fn_001a5350(param_1 + 0x1e,1);
        }
        break;
      }
      iVar2 = fn_001a9c90(param_1 + 4);
      *param_1 = iVar2;
    }
    iVar2 = fn_001a9c90(param_1 + 4);
    *param_1 = iVar2;
  }
  iVar2 = param_1[1];
  param_1[1] = iVar1;
  fn_0018550c(param_1);
  if (param_1[6] == 10) {
    iVar9 = param_1[8];
  }
  else {
    iVar9 = param_1[7];
  }
  fn_001a7368(iVar1,iVar9,(int)(char)param_1[0x16],1);
  local_34 = 0x13;
  local_33 = 0xff;
  local_38 = 0;
  local_32 = 0;
  local_31 = 0;
  fn_001a759c(iVar1,&local_38);
  fn_001a7410(iVar1,0);
  piVar6 = (int *)fn_001a8b1c(iVar1);
  param_1[1] = iVar2;
  piVar10 = (int *)(iVar2 + 0x3c);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  piVar6[1] = piVar6[1] + 1;
  if (*(uint *)(iVar2 + 0x44) <= *(uint *)(iVar2 + 0x40)) {
    iVar1 = *(uint *)(iVar2 + 0x40) << 1;
    if (iVar1 == 0) {
      iVar1 = 4;
    }
    iVar9 = fn_0018388c(*piVar10,*(uint *)(iVar2 + 0x44) << 3,iVar1 << 3);
    *piVar10 = iVar9;
    *(int *)(iVar2 + 0x44) = iVar1;
  }
  puVar5 = (undefined4 *)(*piVar10 + *(int *)(iVar2 + 0x40) * 8);
  *(int *)(iVar2 + 0x40) = *(int *)(iVar2 + 0x40) + 1;
  if (puVar5 != (undefined4 *)0x0) {
    puVar5[1] = piVar6;
    *puVar5 = 0x8002000;
    piVar6[1] = piVar6[1] + 1;
  }
  iVar1 = piVar6[1];
  piVar6[1] = iVar1 + -1;
  if (iVar1 + -1 == 0) {
    (**(code **)(*piVar6 + 8))(piVar6);
  }
  fn_001ac040(param_1[1]);
  return;
}


