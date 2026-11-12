#include "004ef2b0_004efab0.h"



void fn_004efab0(undefined1 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  short sVar2;
  undefined2 uVar3;
  undefined4 unaff_r4;
  undefined4 in_lr;
  
  fn_00158f40(param_1,0x10,0xff);
  param_1[1] = param_2;
  *param_1 = 0xc;
  sVar1 = fn_004ef8e8();
  sVar2 = fn_004efb40();
  *(short *)(param_1 + 4) = sVar2 + sVar1 + 0x10;
  fn_004ef86c(param_1 + 0x10);
  fn_00158f40(param_1 + 0x4c0,0x3f0,0xff,param_4,unaff_r4,in_lr);
  param_1[0x4c0] = 0xc;
  param_1[0x4c1] = 1;
  uVar3 = fn_004efb40();
  *(undefined2 *)(param_1 + 0x4c4) = uVar3;
  *(undefined4 *)(param_1 + 0x8ac) = 0x5069614d;
  return;
}



void fn_004ef8f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x1a0) = 0xffff;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1a8) = 0xff;
  *(undefined1 *)(param_1 + 0x1a9) = 0xff;
  *(undefined1 *)(param_1 + 0x1aa) = 0xff;
  *(undefined1 *)(param_1 + 0x1ab) = 0xff;
  *(undefined1 *)(param_1 + 0x1e4) = 0xff;
  *(undefined1 *)(param_1 + 0x1e6) = 0xff;
  *(undefined4 *)(param_1 + 0x1e8) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x1ec) = 0xff;
  *(undefined1 *)(param_1 + 0x1ed) = 0xff;
  *(undefined1 *)(param_1 + 0x1ee) = 0xff;
  *(undefined1 *)(param_1 + 0x1ef) = 0xff;
  *(undefined1 *)(param_1 + 0x228) = 0xff;
  iVar1 = 0;
  iVar2 = 6;
  *(undefined1 *)(param_1 + 0x22a) = 0xff;
  do {
    iVar4 = param_1 + iVar1 * 4;
    *(undefined4 *)(iVar4 + 0x188) = 0xffffffff;
    *(undefined1 *)(param_1 + iVar1 + 0x1ac) = 0xff;
    *(undefined4 *)(iVar4 + 0x1b4) = 0xff;
    *(undefined4 *)(iVar4 + 0x1cc) = 0xff;
    *(undefined1 *)(param_1 + iVar1 + 0x1f0) = 0xff;
    *(undefined4 *)(iVar4 + 0x1f8) = 0xff;
    iVar2 = iVar2 + -1;
    iVar1 = iVar1 + 1;
    *(undefined4 *)(iVar4 + 0x210) = 0xff;
  } while (iVar2 != 0);
  *(undefined1 *)(param_1 + 0x22c) = 0xff;
  *(undefined1 *)(param_1 + 0x22d) = 0xff;
  *(undefined4 *)(param_1 + 0x230) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x234) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x238) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x23c) = 0xff;
  *(undefined1 *)(param_1 + 0x23d) = 0xff;
  *(undefined4 *)(param_1 + 0x240) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x244) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x248) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x24c) = 0xff;
  *(undefined1 *)(param_1 + 0x24d) = 0xff;
  *(undefined2 *)(param_1 + 0x88) = 0xffff;
  *(undefined4 *)(param_1 + 0x8c) = 0xffffffff;
  *(undefined2 *)(param_1 + 0x90) = 0xffff;
  *(undefined4 *)(param_1 + 0x94) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa4) = 0xff;
  *(undefined1 *)(param_1 + 0xa5) = 0xff;
  *(undefined1 *)(param_1 + 0xa6) = 0xff;
  *(undefined4 *)(param_1 + 0xa8) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  iVar1 = 1;
  *(undefined1 *)(param_1 + 0xb0) = 0xff;
  iVar2 = 1;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  do {
    iVar4 = iVar1 + 1;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(param_1 + iVar1 * 4 + 0xb4) = 0xffffffff;
    iVar1 = iVar1 + 2;
    *(undefined4 *)(param_1 + iVar4 * 4 + 0xb4) = 0xffffffff;
  } while (iVar2 < 0x17);
  iVar1 = 0;
  iVar2 = 0;
  *(undefined1 *)(param_1 + 0x110) = 0xff;
  do {
    iVar4 = iVar1 + 1;
    iVar2 = iVar2 + 2;
    *(undefined4 *)(param_1 + iVar1 * 4 + 0x114) = 0xffffffff;
    iVar1 = iVar1 + 2;
    *(undefined4 *)(param_1 + iVar4 * 4 + 0x114) = 0xffffffff;
  } while (iVar2 < 0xc);
  *(undefined2 *)(param_1 + 0x144) = 0xffff;
  *(undefined4 *)(param_1 + 600) = 0xffffffff;
  iVar2 = 0;
  iVar1 = 0x17;
  *(undefined4 *)(param_1 + 0x254) = 0xffffffff;
  do {
    iVar4 = param_1 + iVar2 * 4;
    iVar3 = param_1 + iVar2;
    *(undefined4 *)(iVar4 + 0x274) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x2d0) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x32c) = 0xffffffff;
    *(undefined4 *)(iVar4 + 0x388) = 0xffffffff;
    iVar1 = iVar1 + -1;
    *(undefined4 *)(iVar4 + 0x3e4) = 0xff;
    iVar2 = iVar2 + 1;
    *(undefined1 *)(iVar3 + 0x440) = 0xff;
  } while (iVar1 != 0);
  *(undefined2 *)(param_1 + 0x4a0) = 0xffff;
  *(undefined2 *)(param_1 + 0x4a2) = 0xffff;
  *(undefined2 *)(param_1 + 0x49e) = 0xffff;
  *(undefined1 *)(param_1 + 0x49c) = 0xff;
  *(undefined1 *)(param_1 + 0x49d) = 0xff;
  *(undefined2 *)(param_1 + 0x262) = 0xffff;
  *(undefined2 *)(param_1 + 0x264) = 0xffff;
  *(undefined4 *)(param_1 + 0x268) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26c) = 0xffffffff;
  return;
}



void fn_004ef86c(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined2 uVar1;
  undefined4 local_10;
  
  local_10 = param_4;
  fn_00158f40(param_1,0x4b0,0xff);
  *param_1 = 0xc;
  param_1[1] = 0;
  uVar1 = fn_004ef8e8();
  *(undefined2 *)(param_1 + 4) = uVar1;
  *(undefined4 *)(param_1 + 0x10) = 0x40a03ff;
  param_1[0x1c] = 3;
  param_1[0x1d] = 2;
  fn_001237bc();
  fn_00453e48(&local_10);
  param_1[0x1e] = (char)((uint)local_10 >> 0x18);
  param_1[0x1f] = (char)((uint)local_10 >> 0x10);
  fn_0013c674();
  *(undefined4 *)(param_1 + 0x4ac) = 0x5069614d;
  return;
}



void fn_004ef828(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  short sVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined1 auStack_90 [128];
  
  uVar3 = (undefined2)((uint)param_4 >> 0x18);
  fn_00158f40(param_1,0x10,0xff);
  *param_1 = 0xc;
  param_1[1] = 0;
  sVar1 = fn_004ef8e8();
  *(short *)(param_1 + 4) = sVar1 + 0x10;
  fn_00158f40(param_1 + 0x10,0x4b0,0xff);
  param_1[0x10] = 0xc;
  param_1[0x11] = 0;
  uVar2 = fn_004ef8e8();
  *(undefined2 *)(param_1 + 0x14) = uVar2;
  *(undefined4 *)(param_1 + 0x20) = 0x40a03ff;
  param_1[0x2c] = 3;
  param_1[0x2d] = 2;
  fn_001237bc();
  fn_00453e48(auStack_90 + 0x80);
  param_1[0x2e] = (char)((ushort)uVar3 >> 8);
  param_1[0x2f] = (char)uVar3;
  fn_0013c674();
  *(undefined4 *)(param_1 + 0x4bc) = 0x5069614d;
  return;
}



undefined4 fn_004ef80c(uint param_1)

{
  undefined4 uVar1;
  
  if ((param_1 < 0xc) || (param_1 == 0xfd)) {
    uVar1 = 1;
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



void fn_004ef7f0(undefined4 *param_1)

{
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = &DAT_00856d2c;
  return;
}



int fn_004ef7ac(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xb4) = 1;
  fn_00657410(param_1 + 0xa0);
  fn_00657904(param_1 + 0x10);
  iVar1 = fn_00657488(param_1 + 0xa0);
  iVar1 = fn_00657b88(iVar1 + -0x90);
  return iVar1 + -0x10;
}



int fn_004ef6c0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *local_20;
  char *local_1c;
  
  param_1[2] = fn_004ef55c;
  param_1[3] = 0;
  *param_1 = &DAT_008599f0;
  param_1[1] = param_1;
  uVar1 = fn_004ed2e8();
  local_1c = "Pia BackgroundScheduler";
  local_20 = &DAT_00859700;
  iVar2 = fn_00656b40(param_1 + 4,&local_20,param_1,uVar1,param_2,1,0x7fffffff,0x1000,0x20);
  *(undefined4 *)(iVar2 + 0x8c) = param_3;
  iVar2 = fn_00657430(iVar2 + 0x90,0);
  *(undefined1 *)(iVar2 + 0x14) = 0;
  *(undefined4 *)(iVar2 + 0x1c) = 0;
  *(undefined4 *)(iVar2 + 0x20) = 0;
  fn_004f0c04(iVar2 + 0x18);
  *(undefined4 *)(iVar2 + 0x28) = 0xffffffff;
  fn_006577f4(iVar2 + -0x90);
  *(undefined4 *)(iVar2 + 0x28) = 0x18;
  return iVar2 + -0xa0;
}



void fn_004ef55c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint local_28;
  int iStack_24;
  
  uVar5 = *(undefined4 *)(param_1 + 0x9c);
  uVar1 = uVar5;
  do {
    fn_004edc34(uVar1);
    while( true ) {
      if (*(char *)(param_1 + 0xb4) != '\0') {
        (**(code **)(*param_2 + 0x18))(param_2,0);
        fn_004edc70(uVar5);
        return;
      }
      if (*(int *)(param_1 + 0xc4) == 0) break;
      if (*(int *)(param_1 + 0xbc) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = *(int *)(param_1 + 0xbc) - *(int *)(param_1 + 200);
      }
      local_28 = 0;
      iStack_24 = 0;
      fn_004f01f4(&local_28);
      iVar3 = *(uint *)(iVar2 + 0x10) - local_28;
      iVar4 = *(int *)(iVar2 + 0x14) - (iStack_24 + (uint)(*(uint *)(iVar2 + 0x10) < local_28));
      if ((int)-(iVar4 + (uint)(iVar3 != 0)) < 0 ==
          (SBORROW4(0,iVar4) != SBORROW4(-iVar4,(uint)(iVar3 != 0)))) {
        fn_004f0a20(param_1 + 0xb8,-iVar3);
        fn_004efe44(iVar2,1);
        fn_00657358(param_1 + 0xa0);
      }
      else {
        fn_004edc70(*(undefined4 *)(param_1 + 0x9c));
        fn_00657378(param_1 + 0xa0,extraout_r1,iVar3,iVar4);
        fn_004edc34(*(undefined4 *)(param_1 + 0x9c));
      }
    }
    fn_004edc70(*(undefined4 *)(param_1 + 0x9c));
    fn_006573e8(param_1 + 0xa0);
    uVar1 = *(undefined4 *)(param_1 + 0x9c);
  } while( true );
}



undefined4 fn_004ef2bc(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 8);
  if ((0x223 < param_2) && (param_2 < 0x5b7)) {
    iVar3 = param_2 - 0x18;
    iVar1 = fn_004f0dfc(iVar3);
    if ((iVar1 != 0) && (iVar1 = fn_004f0db8(iVar2), iVar1 != 0)) {
      iVar4 = (iVar3 - iVar2) + -0xe;
      iVar1 = fn_004f0848(iVar4);
      if (iVar1 != 0) {
        fn_004f0dd4(iVar3);
        fn_004f0d94(iVar2);
        fn_004f0820(iVar4);
        *(uint *)(param_1 + 4) = param_2;
        *(int *)(param_1 + 8) = iVar2;
        return 0;
      }
    }
  }
  return 0xe0e14826;
}



undefined4 fn_004ef2b0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 4);
  if ((0x223 < uVar2) && (uVar2 < 0x5b7)) {
    iVar3 = uVar2 - 0x18;
    iVar1 = fn_004f0dfc(iVar3);
    if ((iVar1 != 0) && (iVar1 = fn_004f0db8(param_2), iVar1 != 0)) {
      iVar4 = (iVar3 - param_2) + -0xe;
      iVar1 = fn_004f0848(iVar4);
      if (iVar1 != 0) {
        fn_004f0dd4(iVar3);
        fn_004f0d94(param_2);
        fn_004f0820(iVar4);
        *(uint *)(param_1 + 4) = uVar2;
        *(int *)(param_1 + 8) = param_2;
        return 0;
      }
    }
  }
  return 0xe0e14826;
}


