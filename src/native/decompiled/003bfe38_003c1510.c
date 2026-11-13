#include "003bfe38_003c1510.h"



void fn_003c1510(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
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
  undefined4 local_18;
  
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
  local_18 = 0;
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = fn_002999a0(*(undefined4 *)(param_1 + 0x1fc),iVar1 * iVar2 + param_2);
  fn_0022f818(&local_40,0x15,uVar3,0);
  uVar3 = fn_0022f2b0(uVar3);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),&local_40,uVar3);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_003c12f4(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_60;
  undefined4 local_5c;
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
  undefined1 auStack_30 [8];
  undefined4 local_28;
  undefined4 local_24 [2];
  
  uVar7 = 0;
  iVar4 = 0;
  iVar1 = fn_006ba274();
  if (0 < iVar1) {
    uVar6 = 0;
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar5 = iVar1 * iVar2 + iVar4;
      if ((int)uVar5 < *(int *)(param_1 + 500)) {
        fn_0020bbc4(auStack_30,*(undefined4 *)(param_1 + 0x100));
        local_60 = uVar6;
        local_5c = uVar6;
        local_58 = uVar6;
        local_54 = uVar6;
        local_50 = uVar6;
        local_4c = uVar6;
        local_48 = uVar6;
        local_44 = uVar6;
        local_40 = uVar6;
        local_3c = uVar6;
        local_38 = uVar6;
        uVar3 = fn_002999a0(*(undefined4 *)(param_1 + 0x1fc),uVar5);
        fn_0022f818(&local_60,0x15,uVar3,0);
        fn_0031b78c(param_1,iVar4,1,&local_60);
        iVar1 = fn_006aed20(auStack_30,uVar5 & 0xffff);
        if (iVar1 == 0) {
          uVar7 = fn_00231ca0(0x3c,0);
          local_34 = DAT_008959c4;
          fn_002c37e0(param_1,iVar4,&local_34);
        }
        else if (iVar1 == 1) {
          uVar7 = fn_00231ca0(0x24,0);
          local_24[0] = DAT_008959c4;
          fn_002c37e0(param_1,iVar4,local_24);
        }
        else if (iVar1 == 2) {
          uVar7 = fn_00231ca0(0x23,0);
          local_28 = DAT_008959cc;
          fn_002c37e0(param_1,iVar4,&local_28);
        }
        fn_0031b78c(param_1,iVar4,7,uVar7);
      }
      else if (7 < *(int *)(param_1 + 500)) {
        fn_0031b78c(param_1,iVar4,1,&LAB_003c14e8);
        fn_0031b78c(param_1,iVar4,7,&LAB_003c14e8);
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar4 < iVar1);
  }
  return;
}



void fn_003c12dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [8];
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  fn_002c3e78();
  uVar7 = 0;
  iVar4 = 0;
  iVar1 = fn_006ba274();
  if (0 < iVar1) {
    uVar6 = 0;
    do {
      iVar1 = fn_006ba284(param_1);
      iVar2 = fn_006ba274(param_1);
      uVar5 = iVar1 * iVar2 + iVar4;
      if ((int)uVar5 < *(int *)(param_1 + 500)) {
        fn_0020bbc4(auStack_30,*(undefined4 *)(param_1 + 0x100));
        uStack_60 = uVar6;
        uStack_5c = uVar6;
        uStack_58 = uVar6;
        uStack_54 = uVar6;
        uStack_50 = uVar6;
        uStack_4c = uVar6;
        uStack_48 = uVar6;
        uStack_44 = uVar6;
        uStack_40 = uVar6;
        uStack_3c = uVar6;
        uStack_38 = uVar6;
        uVar3 = fn_002999a0(*(undefined4 *)(param_1 + 0x1fc),uVar5);
        fn_0022f818(&uStack_60,0x15,uVar3,0);
        fn_0031b78c(param_1,iVar4,1,&uStack_60);
        iVar1 = fn_006aed20(auStack_30,uVar5 & 0xffff);
        if (iVar1 == 0) {
          uVar7 = fn_00231ca0(0x3c,0);
          uStack_34 = DAT_008959c4;
          fn_002c37e0(param_1,iVar4,&uStack_34);
        }
        else if (iVar1 == 1) {
          uVar7 = fn_00231ca0(0x24,0);
          auStack_24[0] = DAT_008959c4;
          fn_002c37e0(param_1,iVar4,auStack_24);
        }
        else if (iVar1 == 2) {
          uVar7 = fn_00231ca0(0x23,0);
          uStack_28 = DAT_008959cc;
          fn_002c37e0(param_1,iVar4,&uStack_28);
        }
        fn_0031b78c(param_1,iVar4,7,uVar7);
      }
      else if (7 < *(int *)(param_1 + 500)) {
        fn_0031b78c(param_1,iVar4,1,&LAB_003c14e8);
        fn_0031b78c(param_1,iVar4,7,&LAB_003c14e8);
      }
      iVar4 = iVar4 + 1;
      iVar1 = fn_006ba274(param_1);
    } while (iVar4 < iVar1);
  }
  return;
}



undefined4 fn_003c0e10(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0xbc) = 3;
  *(undefined4 *)(param_1 + 0xf8) = 1;
  fn_003fe7ac(param_1);
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 0xbc)) {
    do {
      uVar1 = fn_0022f750((&DAT_00894fd4)[iVar2]);
      fn_0031b78c(param_1,iVar2,0,uVar1);
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 0xbc));
  }
  fn_003e5b40(param_1);
  fn_003e5550(param_1);
  fn_00689efc(param_1,0x90,0);
  return 1;
}



void fn_003bfe38(int *param_1)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  int local_40;
  uint uStack_3c;
  undefined4 local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  
  uVar3 = param_1[0x27];
  bVar10 = *(int *)(*(int *)(uVar3 + 0x8f8) + -4) == 0;
  uVar4 = uVar3;
  if (bVar10) {
    uVar4 = (uint)*(byte *)(uVar3 + 0x901);
  }
  if (bVar10 && uVar4 == 0) {
    if (*(int *)(*(int *)(uVar3 + 0x8fc) + -4) == 0) {
      fn_0039c438(param_1);
    }
    else {
      fn_0039bf58();
    }
  }
  else {
    iVar5 = fn_00689210(*(undefined4 *)(param_1[0x1d] + 0x10),DAT_00894e24);
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    fn_0039bdb0(param_1,*(undefined4 *)(uVar3 + 0x8f8));
    if (*(char *)(param_1[0x27] + 0x901) == '\0') {
      fn_0039c39c(param_1,DAT_00894e28,0);
    }
    else {
      fn_0039c39c(param_1,DAT_00894e28,1);
      fn_0039bcf8(param_1,*(undefined2 *)(uVar3 + 0x74),DAT_00894e28);
    }
  }
  fn_0031c7bc(param_1);
  fn_0031ca48(param_1);
  fn_0031c02c(param_1);
  uVar2 = (**(code **)(*param_1 + 0x120))(param_1);
  fn_0036e8fc(*(undefined4 *)(param_1[0x1d] + 0x10),uVar2);
  uVar7 = *(undefined4 *)(param_1[0x1d] + 0x10);
  iVar5 = 0;
  do {
    iVar8 = param_1[0x2a];
    uVar6 = fn_0036e9e4(uVar7,iVar5,param_1[1],param_1[0x12]);
    *(undefined4 *)(iVar8 + iVar5 * 4) = uVar6;
    local_40 = param_1[0x1a];
    uStack_3c = param_1[0x1b];
    iVar9 = param_1[0x2d];
    uVar6 = fn_0036eaa8(uVar7,iVar5,param_1[1],param_1[0x12]);
    iVar8 = iVar5 + 1;
    *(undefined4 *)(iVar9 + iVar5 * 4) = uVar6;
    iVar5 = iVar8;
  } while (iVar8 < 4);
  uVar4 = 0;
  iVar5 = 0;
  local_28 = (int)*(char *)(param_1[0x27] + 0x903);
  cVar1 = *(char *)(param_1[0x27] + 0x904);
  do {
    local_2c = (uint)(*(char *)(uVar3 + 0x52c) == iVar5);
    bVar10 = *(char *)(uVar3 + 0x52d) == iVar5;
    if (bVar10) {
      local_2c = 1;
    }
    local_34 = (uint)(*(char *)(param_1[0x27] + 0x900) != '\0');
    local_30 = local_28;
    iVar8 = uVar3 + iVar5 * 0xf0;
    iVar9 = iVar8 + 0x16c;
    if (((iVar9 == 0) || (iVar8 = fn_001a46f4((int)*(short *)(iVar8 + 0x188)), iVar8 == 0)) ||
       ((uint)(param_1[0x2b] - param_1[0x2a] >> 2) <= uVar4)) {
      iVar8 = 1;
    }
    else {
      local_38 = 0;
      local_40 = 1;
      uStack_3c = (uint)bVar10;
      fn_002b415c(*(undefined4 *)(param_1[0x2a] + uVar4 * 4),iVar9,local_2c);
      local_40 = (int)cVar1;
      fn_0036e68c(*(undefined4 *)(param_1[0x2d] + uVar4 * 4),iVar9,local_34,local_30);
      iVar8 = fn_0020bbc4(&local_40,iVar9);
      if (iVar8 != 0) {
        iVar8 = iVar8 + 4;
      }
      uVar7 = fn_006bfe90(iVar8);
      iVar8 = fn_001cab7c(uVar7);
    }
    uVar4 = iVar8 + uVar4 & 0xff;
  } while ((uVar4 < 4) && (iVar5 = iVar5 + 1, iVar5 < 4));
  return;
}


