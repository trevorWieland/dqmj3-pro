#include "00451214_00451c18.h"



undefined1 * fn_00451c18(int *param_1)

{
  undefined1 *puVar1;
  
  if (param_1[1] == 0) {
    return &DAT_c8810bea;
  }
  (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0,0,0);
  puVar1 = (undefined1 *)fn_0045216c(param_1);
  param_1[1] = 0;
  fn_00451214(param_1,0);
  return puVar1;
}



undefined1 *
fn_004517c0(int *param_1,uint param_2,int param_3,int param_4,undefined4 param_5,undefined4 param_6
            ,undefined4 param_7,uint param_8,int param_9,int param_10,uint param_11,uint param_12,
            uint param_13)

{
  undefined1 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  undefined1 *local_60;
  int local_5c;
  int iStack_58;
  undefined1 auStack_50 [4];
  undefined1 auStack_4c [4];
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int *piStack_34;
  uint uStack_30;
  int local_2c;
  int local_28;
  
  piStack_34 = param_1;
  uStack_30 = param_2;
  local_2c = param_3;
  local_28 = param_4;
  fn_00450058();
  puVar1 = (undefined1 *)0x1;
  DAT_0089a619 = '\x01';
  if (param_2 == 0) {
    puVar1 = &DAT_c8810bea;
  }
  param_1[1] = param_2;
  if (param_2 == 0) {
    return puVar1;
  }
  puVar5 = &DAT_e0e10bfd;
  uVar4 = param_9 + param_10;
  bVar8 = 0xfffff < uVar4;
  bVar7 = uVar4 == 0x100000;
  if (uVar4 < 0x100001) {
    bVar8 = 0x62 < param_11;
    bVar7 = param_11 == 99;
  }
  if (bVar8 && !bVar7) {
LAB_00451898:
    if (puVar1 == (undefined1 *)0x0) goto LAB_004518a8;
  }
  else {
    bVar8 = 0x62 < param_12;
    bVar7 = param_12 == 99;
    if (param_12 < 100) {
      bVar8 = 0x18fff < param_13;
      bVar7 = param_13 == 0x19000;
    }
    if (((bVar8 && !bVar7) || (param_11 == 0 || param_12 == 0)) ||
       ((param_9 == 0 || param_10 == 0) || param_13 == 0)) goto LAB_00451898;
    if (local_28 == 0) goto LAB_004518a8;
    uVar4 = fn_00451c84(param_1,0);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        uVar2 = fn_00452690(param_1 + uVar6 * 4 + 7);
        if (uVar2 >> 8 == param_2 >> 8) {
          puVar5 = (undefined1 *)0xc8e10868;
          goto LAB_0045187c;
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
    uVar4 = fn_00451c84(param_1,1);
    if (uVar4 < 0xc) {
      puVar5 = (undefined1 *)0x0;
    }
    else {
      puVar5 = (undefined1 *)0xc8e10867;
    }
LAB_0045187c:
    if (-1 < (int)puVar5) {
      param_1[0x81] = param_9;
      param_1[0xed] = param_10;
      param_1[0x83] = param_11;
      local_60 = auStack_4c;
      param_1[0xef] = param_12;
      param_1[0x86] = param_13;
      param_1[0xf2] = param_13;
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0xb,8);
      local_60 = auStack_50;
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0xc,8);
      fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
      local_60 = auStack_50;
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0xd,8);
      fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
      local_60 = (undefined1 *)0x0;
      iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0);
      if (-1 < iVar3) {
        fn_004514a0(param_1);
      }
      fn_00301f50(param_1 + 0x67,0x60);
      *(undefined2 *)(param_1 + 0x67) = 0x6363;
      param_1[0x68] = param_2;
      *(undefined1 *)((int)param_1 + 0x1a9) = 1;
      param_1[0x69] = local_2c;
      *(undefined1 *)(param_1 + 0x6a) = 1;
      fn_00301a9c(param_1 + 0x6b,local_28,0x20);
      fn_00114248(&local_40);
      local_48 = local_40;
      uStack_44 = uStack_3c;
      fn_006d02f4(&local_60,&local_48);
      param_1[0x74] = (int)local_60;
      param_1[0x75] = local_5c;
      param_1[0x76] = iStack_58;
      puVar1 = (undefined1 *)fn_00452128(param_1);
      if ((int)puVar1 < 0) {
        local_60 = (undefined1 *)0x0;
        local_5c = 0;
        (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
        fn_0045216c(param_1);
        fn_00451214(param_1,0);
      }
      else {
        puVar1 = (undefined1 *)fn_0045216c(param_1);
        if ((int)puVar1 < 0) {
          local_60 = (undefined1 *)0x0;
          local_5c = 0;
          (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
          fn_0045216c(param_1);
          fn_00451214(param_1,0);
        }
        else {
          if (param_8 < 0x81) {
            puVar1 = (undefined1 *)fn_00451ed0(param_1,0x6e,param_7);
          }
          else {
            puVar1 = (undefined1 *)0xc8e1086a;
          }
          if ((int)puVar1 < 0) {
            local_60 = (undefined1 *)0x0;
            local_5c = 0;
            (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
            fn_0045216c(param_1);
            fn_00451214(param_1,0);
          }
          else {
            puVar1 = (undefined1 *)fn_00451ed0(param_1,0x65,param_5,param_6);
            if (-1 < (int)puVar1) {
              DAT_0089a618 = 1;
              return (undefined1 *)0x0;
            }
            local_60 = (undefined1 *)0x0;
            local_5c = 0;
            (**(code **)(*param_1 + 0x24))(param_1,param_1[1],0xb,0);
            fn_0045216c(param_1);
            fn_00451214(param_1,0);
          }
        }
      }
      if (DAT_0089a619 != '\0') {
        fn_0044ff38(0);
      }
      param_1[1] = 0;
      return puVar1;
    }
    if (DAT_0089a619 == '\0') goto LAB_004518a8;
  }
  fn_0044ff38(0);
LAB_004518a8:
  param_1[1] = 0;
  return puVar5;
}



void fn_004516fc(int *param_1)

{
  undefined1 auStack_c [4];
  
  if (param_1[1] != 0) {
    if (*(char *)((int)param_1 + 10) != '\0') {
      fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
    }
    if (*(char *)((int)param_1 + 0xb) != '\0') {
      fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
    }
    if (DAT_0089a618 != '\0') {
      (**(code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,auStack_c);
      fn_00452128(param_1);
    }
  }
  (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  return;
}



int fn_004514a0(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int local_2c;
  int local_28;
  
  if (param_1[1] != 0) {
    local_28 = 0;
    local_2c = 0;
    uVar1 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
    if ((uVar1 * -0x400000 != 0x2400000) &&
       (((local_2c != 0 &&
         ((((uVar1 & 0x3fc00) != 0x4400 || ((uVar1 & 0x3ff) < 100)) || (0xb3 < (uVar1 & 0x3ff)))))
        || (iVar2 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0), -1 < iVar2)))) {
      iVar2 = fn_00453ac8(800,4);
      if (iVar2 == 0) {
        param_1[0x158] = 0;
      }
      else {
        iVar3 = (**(code **)(*param_1 + 0x34))(param_1,iVar2,local_2c,&local_28,param_1[1],5,0x12);
        if (-1 < iVar3) {
          if (local_28 != 0) {
            fn_00166824(param_1 + 0x157,iVar2);
          }
          if (((short)param_1[0x157] == 0x6767) && (param_1[0x158] == local_2c - 8U >> 3)) {
LAB_004516a8:
            uVar1 = 0;
            iVar3 = iVar2;
            if (param_1[0x158] != 0) {
              do {
                iVar3 = iVar3 + 8;
                fn_00166824(param_1 + uVar1 * 2 + 0x159,iVar3);
                uVar1 = uVar1 + 1;
              } while (uVar1 < (uint)param_1[0x158]);
            }
            fn_004539f4(iVar2);
            return param_1[0x158];
          }
          iVar3 = (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,0);
          if (-1 < iVar3) {
            iVar3 = (**(code **)(*param_1 + 8))(param_1,param_1[1],5,2,&local_2c);
            if (-1 < iVar3) {
              iVar3 = (**(code **)(*param_1 + 0x34))
                                (param_1,iVar2,local_2c,&local_28,param_1[1],5,0x12);
              if (((-1 < iVar3) &&
                  (fn_00166824(param_1 + 0x157,iVar2), (short)param_1[0x157] == 0x6767)) &&
                 (param_1[0x158] == local_2c - 8U >> 3)) goto LAB_004516a8;
            }
            param_1[0x158] = 0;
          }
        }
        fn_004539f4(iVar2);
      }
    }
  }
  return 0;
}



void fn_00451410(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  
  iVar1 = fn_0045270c(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if ((iVar1 < 0) && (iVar1 == -0x375ef410)) {
    fn_0044fd88(1,0);
    DAT_0089a619 = 1;
    fn_0045270c(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return;
}



void fn_00451214(int *param_1,int param_2)

{
  undefined1 auStack_24 [8];
  
  fn_00170704(&DAT_008e323c);
  if (param_2 == 0) {
    if (param_1[1] != 0) {
      if (*(char *)((int)param_1 + 10) != '\0') {
        fn_00450670(param_1,0,param_1 + 0x7f,param_1 + 0x87);
      }
      if (*(char *)((int)param_1 + 0xb) != '\0') {
        fn_00450670(param_1,1,param_1 + 0xeb,param_1 + 0xf3);
      }
      if (DAT_0089a618 != '\0') {
        (**(code **)(*param_1 + 8))(param_1,param_1[1],0x96,0x14,auStack_24);
        fn_00452128(param_1);
      }
    }
    (**(code **)(*param_1 + 0x28))(param_1,param_1[1],0,0,5);
  }
  param_1[1] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0xeb] = 0;
  param_1[0xec] = 0;
  param_1[0xed] = 0;
  param_1[0xee] = 0;
  param_1[0xef] = 0;
  param_1[0xf0] = 0;
  param_1[0xf1] = 0;
  param_1[0xf2] = 0;
  fn_00301f50(param_1 + 0x87,0x18c);
  fn_00301f50(param_1 + 0xf3,0x18c);
  param_1[0x157] = 0;
  param_1[0x158] = 0;
  fn_00301f50(param_1 + 0x159,0x318);
  fn_00170704();
  if (DAT_0089a61b != '\0') {
    fn_004539f4(param_1[0xea]);
    DAT_0089a61b = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  fn_00170704();
  if (DAT_0089a61c != '\0') {
    fn_004539f4(param_1[0x156]);
    DAT_0089a61c = '\0';
  }
  fn_001707b4(&DAT_008e3248);
  *(undefined2 *)(param_1 + 0x7f) = 0x6262;
  *(undefined2 *)(param_1 + 0xeb) = 0x6262;
  *(undefined2 *)(param_1 + 0x157) = 0x6767;
  if (param_2 == 0) {
    fn_0044ff38(0);
    DAT_0089a619 = 0;
  }
  DAT_0089a618 = 0;
  fn_001707b4(&DAT_008e323c);
  return;
}


