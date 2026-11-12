#include "0052685c_00526e08.h"

static void svc_0x32(void)
{
#if defined(__CC_ARM) || defined(__ARMCC_VERSION)
  __asm { svc #0x32 }
#endif
}


void fn_00526e08(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_78 [16];
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar2 = 0;
  local_38 = *(uint *)(param_1 + 0x50);
  local_34 = *(uint *)(param_1 + 0x54);
  local_30 = *(uint *)(param_1 + 0x58);
  local_2c = *(uint *)(param_1 + 0x5c);
  local_28 = *(uint *)(param_1 + 0x60);
  do {
    uVar8 = *(uint *)(param_1 + iVar2 * 4 + 4);
    local_78[iVar2] =
         uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x10);
  uVar3 = 0;
  uVar9 = local_2c;
  uVar6 = local_38;
  uVar10 = local_34;
  uVar7 = local_28;
  uVar8 = local_30;
  do {
    uVar11 = uVar8;
    uVar5 = uVar6;
    uVar4 = uVar9;
    if (0xf < (int)uVar3) {
      uVar8 = local_78[uVar3 - 0x10 & 0xf] ^ local_78[uVar3 - 0xe & 0xf] ^
              local_78[uVar3 - 8 & 0xf] ^ local_78[uVar3 - 3 & 0xf];
      local_78[uVar3 & 0xf] = uVar8 >> 0x1f | uVar8 << 1;
    }
    uVar9 = uVar3 & 0xf;
    uVar8 = uVar10 >> 2 | uVar10 << 0x1e;
    uVar3 = uVar3 + 1;
    uVar6 = local_78[uVar9] + (uVar4 & ~uVar10 | uVar10 & uVar11) + 0x5a827999 +
            uVar7 + (uVar5 >> 0x1b | uVar5 << 5);
    uVar9 = uVar11;
    uVar10 = uVar5;
    uVar7 = uVar4;
  } while ((int)uVar3 < 0x14);
  for (; uVar10 = uVar6, uVar9 = uVar8, (int)uVar3 < 0x28; uVar3 = uVar3 + 1) {
    if (0xf < (int)uVar3) {
      uVar8 = local_78[uVar3 - 0x10 & 0xf] ^ local_78[uVar3 - 0xe & 0xf] ^
              local_78[uVar3 - 8 & 0xf] ^ local_78[uVar3 - 3 & 0xf];
      local_78[uVar3 & 0xf] = uVar8 >> 0x1f | uVar8 << 1;
    }
    uVar6 = uVar3 & 0xf;
    uVar8 = uVar5 >> 2 | uVar5 << 0x1e;
    uVar6 = local_78[uVar6] + (uVar5 ^ uVar9 ^ uVar11) + 0x6ed9eba1 +
            uVar4 + (uVar10 >> 0x1b | uVar10 << 5);
    uVar4 = uVar11;
    uVar5 = uVar10;
    uVar11 = uVar9;
  }
  for (; uVar6 = uVar10, uVar8 = uVar11, (int)uVar3 < 0x3c; uVar3 = uVar3 + 1) {
    if (0xf < (int)uVar3) {
      uVar10 = local_78[uVar3 - 0x10 & 0xf] ^ local_78[uVar3 - 0xe & 0xf] ^
               local_78[uVar3 - 8 & 0xf] ^ local_78[uVar3 - 3 & 0xf];
      local_78[uVar3 & 0xf] = uVar10 >> 0x1f | uVar10 << 1;
    }
    uVar10 = uVar3 & 0xf;
    uVar7 = uVar5 >> 2;
    uVar1 = uVar5 << 0x1e;
    uVar11 = uVar9;
    uVar10 = local_78[uVar10] + ((uVar9 | uVar8) & uVar5 | uVar9 & uVar8) + 0x8f1bbcdc +
             uVar4 + (uVar6 >> 0x1b | uVar6 << 5);
    uVar5 = uVar6;
    uVar4 = uVar8;
    uVar9 = uVar7 | uVar1;
  }
  for (; uVar7 = uVar6, uVar10 = uVar8, (int)uVar3 < 0x50; uVar3 = uVar3 + 1) {
    if (0xf < (int)uVar3) {
      uVar8 = local_78[uVar3 - 0x10 & 0xf] ^ local_78[uVar3 - 0xe & 0xf] ^
              local_78[uVar3 - 8 & 0xf] ^ local_78[uVar3 - 3 & 0xf];
      local_78[uVar3 & 0xf] = uVar8 >> 0x1f | uVar8 << 1;
    }
    uVar6 = uVar3 & 0xf;
    uVar11 = uVar5 >> 2;
    uVar1 = uVar5 << 0x1e;
    uVar8 = uVar9;
    uVar6 = local_78[uVar6] + (uVar5 ^ uVar9 ^ uVar10) + 0xca62c1d6 +
            uVar4 + (uVar7 >> 0x1b | uVar7 << 5);
    uVar5 = uVar7;
    uVar4 = uVar10;
    uVar9 = uVar11 | uVar1;
  }
  *(uint *)(param_1 + 0x5c) = uVar10 + local_2c;
  *(uint *)(param_1 + 0x60) = local_28 + uVar4;
  *(uint *)(param_1 + 0x50) = uVar7 + local_38;
  *(uint *)(param_1 + 0x54) = uVar5 + local_34;
  *(uint *)(param_1 + 0x58) = uVar9 + local_30;
  return;
}



void fn_00526ad0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  
  iVar10 = 0;
  piVar9 = (int *)(param_1 + 0x18);
  piVar1 = &DAT_007e34b8;
  uVar3 = *(uint *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 8);
  uVar5 = *(uint *)(param_1 + 0xc);
  piVar7 = piVar9;
  uVar11 = *(uint *)(param_1 + 0x10);
  do {
    uVar3 = uVar3 + (uVar4 & uVar5 | uVar11 & ~uVar4) + *piVar7 + *piVar1;
    uVar3 = uVar4 + (uVar3 >> 0x19 | uVar3 * 0x80);
    uVar11 = uVar11 + (uVar5 & ~uVar3 | uVar3 & uVar4) + piVar7[1] + piVar1[1];
    piVar6 = piVar7 + 3;
    uVar11 = uVar3 + (uVar11 >> 0x14 | uVar11 * 0x1000);
    piVar2 = piVar1 + 3;
    uVar5 = uVar5 + (uVar11 & uVar3 | uVar4 & ~uVar11) + piVar7[2] + piVar1[2];
    piVar7 = piVar7 + 4;
    uVar5 = uVar11 + (uVar5 >> 0xf | uVar5 * 0x20000);
    piVar1 = piVar1 + 4;
    uVar4 = uVar4 + (uVar5 & uVar11 | uVar3 & ~uVar5) + *piVar6 + *piVar2;
    iVar10 = iVar10 + 1;
    uVar4 = uVar5 + (uVar4 >> 10 | uVar4 * 0x400000);
  } while (iVar10 < 4);
  piVar7 = &DAT_007e35b8;
  iVar10 = 0;
  do {
    piVar6 = piVar7 + 2;
    iVar10 = iVar10 + 1;
    uVar3 = uVar3 + (uVar5 & ~uVar11 | uVar4 & uVar11) + piVar9[*piVar7] + *piVar1;
    uVar3 = uVar4 + (uVar3 >> 0x1b | uVar3 * 0x20);
    piVar8 = piVar7 + 3;
    uVar11 = uVar11 + (uVar3 & uVar5 | uVar4 & ~uVar5) + piVar9[piVar7[1]] + piVar1[1];
    piVar2 = piVar1 + 3;
    uVar11 = uVar3 + (uVar11 >> 0x17 | uVar11 * 0x200);
    piVar7 = piVar7 + 4;
    uVar5 = uVar5 + (uVar3 & ~uVar4 | uVar11 & uVar4) + piVar9[*piVar6] + piVar1[2];
    uVar5 = uVar11 + (uVar5 >> 0x12 | uVar5 * 0x4000);
    piVar1 = piVar1 + 4;
    uVar4 = uVar4 + (uVar11 & ~uVar3 | uVar5 & uVar3) + piVar9[*piVar8] + *piVar2;
    uVar4 = uVar5 + (uVar4 >> 0xc | uVar4 * 0x100000);
  } while (iVar10 < 4);
  iVar10 = 0;
  do {
    piVar6 = piVar7 + 2;
    uVar3 = piVar9[*piVar7] + (uVar4 ^ uVar5 ^ uVar11) + uVar3 + *piVar1;
    uVar3 = uVar4 + (uVar3 >> 0x1c | uVar3 * 0x10);
    piVar8 = piVar7 + 3;
    uVar11 = uVar11 + (uVar3 ^ uVar4 ^ uVar5) + piVar9[piVar7[1]] + piVar1[1];
    piVar2 = piVar1 + 3;
    uVar11 = uVar3 + (uVar11 >> 0x15 | uVar11 * 0x800);
    piVar7 = piVar7 + 4;
    uVar5 = uVar5 + (uVar11 ^ uVar3 ^ uVar4) + piVar9[*piVar6] + piVar1[2];
    iVar10 = iVar10 + 1;
    uVar5 = uVar11 + (uVar5 >> 0x10 | uVar5 * 0x10000);
    piVar1 = piVar1 + 4;
    uVar4 = uVar4 + (uVar5 ^ uVar11 ^ uVar3) + piVar9[*piVar8] + *piVar2;
    uVar4 = uVar5 + (uVar4 >> 9 | uVar4 * 0x800000);
  } while (iVar10 < 4);
  iVar10 = 0;
  do {
    uVar3 = uVar3 + ((~uVar11 | uVar4) ^ uVar5) + piVar9[*piVar7] + *piVar1;
    piVar6 = piVar7 + 2;
    uVar3 = uVar4 + (uVar3 >> 0x1a | uVar3 * 0x40);
    uVar11 = uVar11 + ((uVar3 | ~uVar5) ^ uVar4) + piVar9[piVar7[1]] + piVar1[1];
    piVar8 = piVar7 + 3;
    uVar11 = uVar3 + (uVar11 >> 0x16 | uVar11 * 0x400);
    piVar2 = piVar1 + 3;
    piVar7 = piVar7 + 4;
    uVar5 = uVar5 + ((uVar11 | ~uVar4) ^ uVar3) + piVar9[*piVar6] + piVar1[2];
    uVar5 = uVar11 + (uVar5 >> 0x11 | uVar5 * 0x8000);
    piVar1 = piVar1 + 4;
    uVar4 = uVar4 + ((~uVar3 | uVar5) ^ uVar11) + piVar9[*piVar8] + *piVar2;
    iVar10 = iVar10 + 1;
    uVar4 = uVar5 + (uVar4 >> 0xb | uVar4 * 0x200000);
  } while (iVar10 < 4);
  *(uint *)(param_1 + 4) = uVar3 + *(uint *)(param_1 + 4);
  *(uint *)(param_1 + 8) = uVar4 + *(uint *)(param_1 + 8);
  *(uint *)(param_1 + 0xc) = uVar5 + *(uint *)(param_1 + 0xc);
  *(uint *)(param_1 + 0x10) = uVar11 + *(uint *)(param_1 + 0x10);
  return;
}



undefined4
fn_00526a84(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_005269d4(param_1,param_2,param_3 + -0x10,param_3,param_4,param_5);
  fn_001257a8();
  return uVar1;
}



undefined4
fn_00526a38(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  
  fn_00125694();
  uVar1 = fn_00526970(param_1,param_2,param_3 + -0x10,param_3,param_4,param_5);
  fn_001257a8();
  return uVar1;
}



int fn_005269d4(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined1 **)(iVar2 + 0x80) = &LAB_00530104;
  *(int *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_3 << 4 | 0xc;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_00526970(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x470104;
  *(int *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_3 << 4 | 0xc;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052690c(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x520104;
  *(int *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_3 << 4 | 0xc;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_005268a8(undefined4 param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined4 *)(iVar2 + 0x80) = 0x460104;
  *(int *)(iVar2 + 0x84) = param_3;
  *(int *)(iVar2 + 0x88) = param_4;
  *(undefined4 *)(iVar2 + 0x8c) = param_5;
  *(undefined4 *)(iVar2 + 0x90) = param_6;
  *(undefined4 *)(iVar2 + 0x98) = param_2;
  *(undefined4 *)(iVar2 + 0xa0) = param_1;
  *(uint *)(iVar2 + 0x9c) = param_3 << 4 | 0xc;
  *(uint *)(iVar2 + 0x94) = param_4 << 4 | 10;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}



int fn_0052685c(undefined1 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined1 param_5)

{
  int iVar1;
  int iVar2;
  
  iVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  *(undefined1 **)(iVar2 + 0x80) = &LAB_00310100;
  *(undefined1 *)(iVar2 + 0x84) = param_1;
  *(undefined4 *)(iVar2 + 0x88) = param_3;
  *(undefined4 *)(iVar2 + 0x8c) = param_4;
  *(undefined1 *)(iVar2 + 0x90) = param_5;
  svc_0x32();
  iVar1 = DAT_008bfb30;
  if (-1 < DAT_008bfb30) {
    iVar1 = *(int *)(iVar2 + 0x84);
  }
  return iVar1;
}


