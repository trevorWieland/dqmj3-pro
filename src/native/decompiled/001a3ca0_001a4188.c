#include "001a3ca0_001a4188.h"



void fn_001a4188(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (*(char *)(param_2 + 0x1a) == '\0') {
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        iVar3 = *(int *)(param_2 + iVar1 * 4);
        if (iVar3 != 0) {
          if (iVar3 != param_1) {
            fn_0019f2a8(iVar3,1);
            fn_0018a33c(iVar3);
          }
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  else {
    *(undefined1 *)(param_2 + 0x1b) = 1;
    iVar1 = 0;
    if (0 < *(int *)(param_2 + 8)) {
      do {
        if (*(int *)(param_2 + iVar1 * 4) == param_1) {
          *(undefined4 *)(param_2 + iVar1 * 4) = 0;
          return;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_2 + 8));
    }
  }
  *(undefined1 *)(param_2 + 0x17) = 0;
  *(undefined1 *)(param_2 + 0x15) = 0;
  *(undefined4 *)(param_2 + 8) = 0;
  uVar2 = fn_0018b794();
  fn_001960ec(uVar2,param_2);
  *(undefined1 *)(param_2 + 0x14) = 0;
  if (*(code **)(param_2 + 0xc) == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a426c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0xc))(param_2,3,*(undefined4 *)(param_2 + 0x10));
  return;
}



void fn_001a4138(undefined4 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  *param_2 = 0;
  *(undefined1 *)((int)param_2 + 0x17) = 0;
  *(undefined1 *)((int)param_2 + 0x15) = 0;
  param_2[2] = 0;
  uVar1 = fn_0018b794();
  fn_001960ec(uVar1,param_2);
  *(undefined1 *)(param_2 + 5) = 0;
  if ((code *)param_2[3] == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001a4180. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_2[3])(param_2,3,param_2[4]);
  return;
}



uint fn_001a40cc(uint param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_2 == 0) {
    uVar2 = param_1;
  }
  else if (param_2 == 1) {
    uVar2 = param_1 << 1;
  }
  else if (param_2 == 3) {
    iVar1 = param_1 + (uint)((ulonglong)param_1 * 0x49249249 + 0x49249249 >> 0x22) * -0xe;
    uVar2 = (uint)((ulonglong)param_1 * 0x49249249 + 0x49249249 >> 0x22) * 0x10;
    if (iVar1 != 0) {
      uVar2 = uVar2 + iVar1 + 2;
    }
    uVar2 = uVar2 >> 1;
  }
  return uVar2;
}



void fn_001a40b8(undefined4 param_1,undefined2 *param_2)

{
  *param_2 = 0;
  return;
}



void fn_001a3ec4(undefined4 param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int in_stack_00000008;
  int in_stack_0000000c;
  int local_18;
  int local_14;
  
  local_18 = *param_2;
  if (in_stack_00000008 == 0 || in_stack_0000000c == 0) {
    local_14 = local_18;
    local_14 = fn_001ab7ac(param_3,local_18,1);
    fn_00194b70(&local_18,param_2);
    return;
  }
  puVar3 = (undefined4 *)(in_stack_00000008 + (local_18 - in_stack_0000000c));
  *puVar3 = 0;
  puVar3[1] = &DAT_00200080;
  puVar3[2] = 0;
  puVar3[3] = 0;
  puVar3[4] = (uint)(*(char *)(param_3 + 0x1c) != '\x05') |
              (uint)(*(char *)(param_3 + 0x58) != '\0') << 1 |
              (uint)(*(char *)(param_3 + 0x7c) != '\0') << 2 | (uint)*(byte *)(param_3 + 0xa1) << 8
              | (uint)(*(char *)(param_3 + 0xa0) != '\0') << 10 |
              (uint)(*(char *)(param_3 + 0x7d) != '\0') << 0xd | 0x1000;
  puVar3[5] = 0xf0080;
  puVar3[6] = (uint)(*(char *)(param_3 + 0x1c) != '\x05') |
              (uint)(*(char *)(param_3 + 0x58) != '\0') << 1 |
              (uint)(*(char *)(param_3 + 0x7c) != '\0') << 2 | (uint)*(byte *)(param_3 + 0xa1) << 8
              | (uint)(*(char *)(param_3 + 0xa0) != '\0') << 10 |
              (uint)(*(char *)(param_3 + 0x7d) != '\0') << 0xd | 0x11000;
  puVar3[7] = 0xf0080;
  uVar1 = fn_001ab34c(param_3,puVar3 + 8,0);
  uVar1 = fn_001ab5e4(param_3 + 0x3c,uVar1,0);
  uVar1 = fn_001ab7ec(param_3 + 0x60,uVar1,0);
  puVar2 = (undefined4 *)fn_001a8734(param_3 + 0x84,uVar1,0);
  uVar4 = ((int)puVar2 - (int)puVar3 & 0xfffffffcU) + 8;
  if (((uVar4 & 0xf) != 0) && (uVar4 = 4 - ((uVar4 & 0xf) >> 2), 0 < (int)uVar4)) {
    puVar3 = puVar2 + -1;
    if ((uVar4 & 1) != 0) {
      *puVar2 = 0;
      puVar3 = puVar2;
    }
    for (iVar5 = (int)uVar4 >> 1; iVar5 != 0; iVar5 = iVar5 + -1) {
      puVar3[1] = 0;
      puVar3 = puVar3 + 2;
      *puVar3 = 0;
    }
    puVar2 = puVar2 + uVar4;
  }
  fn_00189790(puVar2,1);
  return;
}



int fn_001a3e8c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_10;
  
  local_10 = 0;
  iVar1 = fn_0014fe94(&local_10,param_2,param_3,0);
  if (-1 < iVar1) {
    *param_1 = local_10;
  }
  return iVar1;
}



void fn_001a3d48(int param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  uint in_fpscr;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  
  fVar3 = *(float *)(param_1 + 0xc);
  iVar2 = *(int *)(param_1 + 4);
  iVar6 = VectorUnsignedToFloat(iVar2,(byte)(in_fpscr >> 0x16) & 3);
  iVar8 = iVar6;
  if (0x409c6a7f < iVar6) {
    iVar8 = iVar2;
  }
  *(int *)(param_1 + 0xf0) = iVar2;
  *(float *)(param_1 + 0xf4) = fVar3;
  *(int *)(param_1 + 0xf8) = *(int *)(param_1 + 0x30);
  *(int *)(param_1 + 0xfc) = *(int *)(param_1 + 0x34);
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x38);
  iVar2 = *(int *)(param_1 + 0x30) * 4;
  iVar1 = *(int *)(param_1 + 0x34) * 4;
  if (iVar6 < 0x409c6a80) {
    fVar7 = 4.888;
  }
  else {
    fVar7 = (float)VectorUnsignedToFloat(iVar8,(byte)(in_fpscr >> 0x16) & 3);
  }
  iVar8 = VectorFloatToUnsigned(fVar7 * 0.20458265,3);
  iVar6 = VectorUnsignedToFloat(fVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar7 = 4.888;
  if (0x409c6a7f < iVar6) {
    fVar7 = fVar3;
  }
  uVar4 = *(int *)(param_1 + 0x28) + 0x1fU & 0xffffffe0;
  if (0x409c6a7f < iVar6) {
    fVar7 = (float)VectorUnsignedToFloat(fVar7,(byte)(in_fpscr >> 0x16) & 3);
  }
  *(uint *)(param_1 + 0x3c) = uVar4;
  iVar6 = uVar4 + iVar8 * 0x280;
  *(int *)(param_1 + 0x4c) = iVar6;
  iVar5 = VectorFloatToUnsigned(fVar7 * 0.20458265,3);
  iVar6 = iVar6 + iVar5 * 0x280;
  *(int *)(param_1 + 0x5c) = iVar6;
  iVar6 = iVar6 + iVar2;
  *(int *)(param_1 + 0x60) = iVar6;
  iVar6 = iVar6 + iVar1;
  *(int *)(param_1 + 0x7c) = iVar6;
  iVar6 = iVar6 + *(int *)(param_1 + 0x38) * 4;
  iVar8 = iVar8 * 0x280 + iVar6;
  *(int *)(param_1 + 0x40) = iVar6;
  *(int *)(param_1 + 0x50) = iVar8;
  iVar8 = iVar8 + iVar5 * 0x280;
  *(int *)(param_1 + 100) = iVar8;
  iVar8 = iVar8 + iVar2;
  *(int *)(param_1 + 0x68) = iVar8;
  *(int *)(param_1 + 0x80) = iVar8 + iVar1;
  fn_001a7efc(param_1);
  *(undefined1 *)(param_1 + 0x104) = 1;
  return;
}



undefined4 fn_001a3ca0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  if (*(char *)(param_1 + 0x56) == '\0') {
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 4);
    *(undefined1 *)(param_1 + 0x54) = *(undefined1 *)(param_1 + 0x10);
    iVar4 = *(int *)(param_1 + 0x3c);
    iVar6 = *(int *)(param_1 + 0x14);
    uVar5 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar5 != 0) {
      iVar7 = 0;
      do {
        iVar2 = iVar4 * 0x280 * iVar7;
        iVar1 = iVar7 * 4;
        uVar5 = uVar5 - 1;
        iVar7 = iVar7 + 1;
        *(uint *)(param_1 + iVar1 + 0x1c) = iVar2 + (iVar6 + 0x1fU & 0xffffffe0);
      } while (uVar5 != 0);
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    fn_00158f6c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
    uVar5 = (uint)*(byte *)(param_1 + 0x55);
    if (uVar5 != 0) {
      iVar4 = 0;
      do {
        iVar6 = iVar4 * 4;
        uVar5 = uVar5 - 1;
        iVar4 = iVar4 + 1;
        *(undefined4 *)(param_1 + iVar6 + 0x2c) = 0;
      } while (uVar5 != 0);
    }
    uVar3 = 1;
    *(undefined1 *)(param_1 + 0x56) = 1;
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}


