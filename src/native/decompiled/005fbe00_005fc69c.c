#include "005fbe00_005fc69c.h"



void fn_005fc69c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_20 [16];
  
  uVar1 = DAT_00897800;
  uVar2 = fn_00121838(DAT_00897800,L"rom:/data/Message/LocationMessage.mes",1);
  fn_001028d4(auStack_20,(char *)&DAT_005fc708,*(undefined2 *)(*(int *)(param_1 + 0x118) + 0x74));
  fn_0025f9d8(uVar1,uVar2,auStack_20);
  fn_0015b0dc();
  fn_0025fa58(uVar1,uVar2);
  return;
}



void fn_005fc5c8(int param_1)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x148) < 7) ||
     ((*(int *)(param_1 + 0x148) == 7 &&
      (iVar1 = fn_00251a3c(*(undefined4 *)(param_1 + 0x130)), iVar1 == 0)))) {
    fn_0015b0dc(&DAT_005fc60c);
    return;
  }
  fn_0015b0dc(*(int *)(param_1 + 0x118) + 0x1c);
  return;
}



void fn_005fc4e4(int param_1,int param_2)

{
  if (param_2 != 0) {
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x31) = 0;
    fn_00749218(param_1,DAT_00898214,param_2);
  }
  *(undefined4 *)(param_1 + 0x148) = 1;
  return;
}



void fn_005fc41c(int *param_1,undefined4 param_2)

{
  undefined4 local_178;
  undefined2 local_174;
  undefined1 local_172;
  undefined4 local_170;
  undefined1 auStack_16c [256];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined1 local_5c;
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
  
  local_174 = 0;
  local_172 = 1;
  local_178 = 0;
  local_170 = 0;
  local_5c = 0;
  fn_00301f50(auStack_16c,0x100);
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_60 = 0;
  local_58 = 0;
  local_48 = 0;
  local_54 = 0;
  local_44 = 0;
  local_50 = 0;
  local_4c = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_2c = 0;
  local_1c = 0;
  (**(code **)(*param_1 + 0x1dc))(param_1,&local_178,param_2);
  if (param_1[0x51] != 5) {
    fn_00675cc4(*(undefined4 *)(param_1[0x48] + 0x44),&local_178);
    param_1[0x51] = 1;
  }
  return;
}



undefined4 fn_005fbe00(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined1 auStack_3898 [2264];
  undefined1 auStack_2fc0 [2264];
  undefined1 auStack_26e8 [864];
  undefined1 auStack_2388 [2264];
  undefined1 auStack_1ab0 [2264];
  undefined1 auStack_11d8 [2264];
  undefined1 auStack_900 [2280];
  
  switch(param_1[0x52]) {
  case 4:
    param_1[0x52] = 5;
    goto LAB_005fc15c;
  case 5:
    iVar3 = param_1[0x50];
    param_1[0x50] = iVar3 + 1U;
    if ((0x1e < iVar3 + 1U) && (iVar3 = fn_001296d0(DAT_00898840), iVar3 == 0)) {
      param_1[0x50] = 0;
      fn_0036c340(param_1[0x17]);
      param_1[0x41] = 0;
      param_1[0x52] = 0;
      *(undefined1 *)(param_1[0x17] + 0x31) = 0;
    }
    break;
  case 6:
    iVar3 = fn_001296d0(DAT_00897850);
    if (iVar3 != 0) {
      return 0;
    }
    fn_0025190c(param_1[0x4c]);
    iVar3 = 7;
    param_1[0x50] = 0;
    goto LAB_005fc28c;
  case 7:
    iVar3 = fn_00251a3c(param_1[0x4c]);
    if (iVar3 == 0) {
      fn_00251a50(param_1[0x4c]);
      return 0;
    }
    fn_00370500(*(undefined4 *)(param_1[0x44] + 0x10));
    fn_0017821c(auStack_3898,param_1[0x4c] + 0x8f0,0x1510);
    fn_00370494(*(undefined4 *)(param_1[0x44] + 0x10),auStack_3898);
    fn_0017821c(auStack_1ab0,param_1[0x4c] + 0x18,0x8d8);
    fn_0017821c(auStack_2388,auStack_1ab0,0x8d8);
    iVar3 = fn_001f84cc(auStack_2388);
    if (iVar3 != 0) {
      (**(code **)(*param_1 + 0x1f0))(param_1);
      return 0;
    }
    fn_00689930(param_1,0x3c,0);
    puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00894d28) {
          if (puVar1 != (undefined4 *)0x0) {
            fn_0017821c(auStack_900,param_1[0x4c] + 0x18,0x8d8);
            fn_0017821c(auStack_11d8,auStack_900,0x8d8);
            fn_0017821c(puVar1 + 7,auStack_11d8,0x8d8);
            *(undefined1 *)((int)puVar1 + 0x903) = 1;
            *(undefined1 *)(puVar1 + 0x241) = 1;
          }
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    iVar3 = param_1[0x46];
    fn_0017821c(auStack_11d8,param_1[0x4c] + 0x18,0x8d8);
    fn_0017821c(auStack_1ab0,auStack_11d8,0x8d8);
    fn_0017821c(iVar3 + 0x1c,auStack_1ab0,0x8d8);
    *(undefined1 *)(param_1[0x46] + 0x903) = 1;
    *(undefined1 *)(param_1[0x46] + 0x904) = 1;
    iVar3 = param_1[0x44];
    fn_0017821c(auStack_11d8,param_1[0x4c] + 0x18,0x8d8);
    fn_0017821c(auStack_900,auStack_11d8,0x8d8);
    fn_0017821c(iVar3 + 0x14,auStack_900,0x8d8);
    iVar3 = 8;
    goto LAB_005fc28c;
  case 8:
    (**(code **)(*param_1 + 0x1e8))(param_1);
    param_1[0x50] = 0;
    *(undefined1 *)(param_1[0x47] + 0xc) = 0;
    fn_0066e620(DAT_00898840,1);
    param_1[0x52] = 9;
    break;
  case 9:
    iVar3 = param_1[0x50];
    param_1[0x50] = iVar3 + 1U;
    if (iVar3 + 1U <= (uint)param_1[0x4e]) {
      return 0;
    }
    (**(code **)(*param_1 + 0x1ec))(param_1);
LAB_005fc15c:
    param_1[0x50] = 0;
    break;
  case 10:
    iVar3 = fn_0077f7d0(*(undefined4 *)(*(int *)(param_1[0x48] + 0x3c) + 4),1);
    if (iVar3 == 0) {
      iVar3 = fn_0066e3d8(DAT_00897850);
      if ((iVar3 == 0) && (*(int *)(DAT_00897850 + 0x20) != 7)) {
        return 0;
      }
      if (param_1[0x51] == 1) {
        fn_0066de6c(param_1[0x4a]);
        fn_0066e6f0(DAT_00897850,0);
        iVar3 = 4;
      }
      else {
        if (param_1[0x51] != 2) goto LAB_005fc330;
        fn_0040f564(*(undefined4 *)(param_1[0x48] + 0x3c),7);
        iVar3 = 3;
      }
      param_1[0x51] = iVar3;
      *(undefined1 *)(param_1[0x47] + 0xc) = 0;
      fn_0066e620(DAT_00898840,1);
    }
    else {
      if (param_1[0x48] == 0) {
        return 0;
      }
      if ((*(char *)(DAT_00897850 + 0x59) == '\0') &&
         (iVar3 = fn_0040f628(*(undefined4 *)(param_1[0x48] + 0x3c)), iVar3 == 1)) {
        fn_0066e620(DAT_00898840,0);
        return 1;
      }
      if (param_1[0x48] == 0) {
        return 0;
      }
      if (*(char *)(DAT_00897850 + 0x59) != '\0') {
        return 0;
      }
      iVar3 = fn_0040f628(*(undefined4 *)(param_1[0x48] + 0x3c));
      if (iVar3 != 2) {
        return 0;
      }
      if (param_1[0x51] == 1) {
        fn_0066de6c(param_1[0x4a]);
        fn_0066e6f0(DAT_00897850,0);
        iVar3 = 4;
      }
      else {
        if (param_1[0x51] != 2) goto LAB_005fc330;
        fn_0040f564(*(undefined4 *)(param_1[0x48] + 0x3c),7);
        iVar3 = 3;
      }
      param_1[0x51] = iVar3;
      *(undefined1 *)(param_1[0x47] + 0xc) = 0;
      fn_0066e620(DAT_00898840,1);
    }
LAB_005fc330:
    iVar3 = 0xd;
LAB_005fc28c:
    param_1[0x52] = iVar3;
    break;
  case 0xd:
    if (param_1[0x51] == 0) {
      fn_0017821c(auStack_2fc0,param_1[0x4c] + 0x18,0x8d8);
      fn_0017821c(auStack_3898,auStack_2fc0,0x8d8);
      fn_005fc524(param_1,auStack_3898);
      fn_0036c340(param_1[0x17]);
      (**(code **)(*param_1 + 0x1e0))(param_1);
      fn_007631a8(param_1,0x3c);
      iVar3 = DAT_00897830;
      fn_0017821c(auStack_26e8,param_1[0x4c] + 0x18,0x8d8);
      fn_0017821c(auStack_2fc0,auStack_26e8,0x8d8);
      fn_0017821c(iVar3 + 0x74,auStack_2fc0,0x8d8);
      param_1[0x41] = 10;
    }
  }
  return 0;
}



void fn_005fc524(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_108 [228];
  uint local_24;
  
  iVar1 = 0;
  do {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10);
    local_24 = (uint)(*(char *)(param_2 + 0x510) == iVar1);
    iVar2 = param_2 + iVar1 * 0xf0;
    fn_0017821c(auStack_108,iVar2 + 0x15c,0xe4);
    fn_00370438(uVar3,*(undefined4 *)(iVar2 + 0x150),*(undefined4 *)(iVar2 + 0x154),
                 *(undefined4 *)(iVar2 + 0x158));
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x110) + 0x10);
    local_24 = 0;
    fn_0017821c(auStack_108,iVar2 + 0x520,0xe4);
    fn_003704a4(uVar3,*(undefined4 *)(iVar2 + 0x514),*(undefined4 *)(iVar2 + 0x518),
                 *(undefined4 *)(iVar2 + 0x51c));
    iVar1 = iVar1 + 1;
  } while (iVar1 < 4);
  return;
}


