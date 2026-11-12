#include "006e4490_006e54a4.h"



void fn_006e54a4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  fn_0055a6ac(param_2,param_3,param_4,param_5,param_6);
  return;
}



int fn_006e45b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  float fVar4;
  undefined1 auStack_b8 [4];
  int local_b4;
  undefined1 auStack_40 [4];
  undefined4 local_3c;
  undefined4 local_38;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  byte local_2e;
  byte local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 auStack_28 [20];
  
  local_34 = 0;
  local_33 = 0;
  local_32 = 0;
  local_31 = 0;
  local_30 = 0;
  iVar1 = fn_006e3014(param_2,auStack_40,*param_4,param_4[1],param_4[2]);
  iVar3 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_001566bc(param_3,local_3c);
    fn_005591cc(auStack_28,uVar2,0);
    iVar1 = fn_006e31a0(auStack_28,auStack_b8,0);
    iVar3 = 0;
    if (iVar1 != 0) {
      if (2 < local_b4) {
        local_b4 = 2;
      }
      iVar3 = fn_0055eae8(local_b4,param_4[5],param_4[6],param_4[7]);
      if (iVar3 != 0) {
        *(char *)(iVar3 + 0x194) = (char)param_4[1];
        *(undefined1 *)(iVar3 + 0x195) = local_2f;
        fVar4 = (float)VectorUnsignedToFloat(param_4[2] & 0xff,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar3 + 0x19c) = fVar4 * 0.007874016;
        fVar4 = (float)VectorUnsignedToFloat((uint)local_2e,(byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar3 + 0x198) = fVar4 * 0.007874016;
        *(undefined4 *)(iVar3 + 0x17c) = local_38;
        fn_00558278(iVar3 + 0x98,local_34);
        fn_005581e0(iVar3 + 0x98,local_31);
        fn_00558200(iVar3 + 0x98,local_33);
        *(undefined1 *)(iVar3 + 0xb0) = local_32;
        fn_0055814c(iVar3 + 0x98,local_30);
        fVar4 = (float)VectorSignedToFloat((uint)local_2d + param_4[4] + -0x40,
                                           (byte)(in_fpscr >> 0x16) & 3);
        *(float *)(iVar3 + 0x174) = fVar4 * 0.015873017;
        *(undefined1 *)(iVar3 + 0x196) = local_2b;
        *(undefined1 *)(iVar3 + 0x13d) = local_2c;
        *(undefined1 *)(iVar3 + 0x197) = local_2a;
        fn_0055edf0(iVar3,auStack_b8,param_4[3],0);
      }
    }
  }
  return iVar3;
}



undefined4 fn_006e4594(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x51) == '\0') {
    uVar1 = 0;
    if (*(int *)(param_1 + 0x84) != 0) {
      uVar1 = 1;
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



undefined1 fn_006e4580(int *param_1)

{
  undefined1 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = (undefined1)param_1[0x14];
  }
  return uVar1;
}



undefined4 fn_006e4560(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*param_1 != 0) {
    if (*(char *)(*param_1 + 4) == '\0') {
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
    }
  }
  return uVar1;
}



undefined4 fn_006e454c(int *param_1)

{
  if (*param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(*(int *)(*param_1 + 0x68) + 8);
}



undefined4 fn_006e4490(int param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  iVar2 = fn_0016600c(*(undefined4 *)(param_1 + 0x3c));
  uVar4 = 0;
  if (iVar2 != 0) {
    iVar3 = fn_001663f0();
    if (iVar3 == 2) {
      if (*(uint *)(param_1 + 8) < 0x2030100) {
        uVar4 = fn_006e3968(iVar2);
        uVar1 = fn_006e3928();
        *param_3 = uVar1;
        uVar7 = fn_006e38c4(uVar4);
        *(undefined4 *)(param_3 + 4) = uVar7;
        uVar6 = fn_006e38a4(uVar4);
      }
      else {
        fn_006e395c();
        puVar5 = (uint *)fn_006e3850();
        if (puVar5 == (uint *)0x0) {
          return 0;
        }
        uVar1 = (undefined1)((*puVar5 & 0xffff) >> 8);
        if ((*puVar5 & 0xffff) >> 8 != 1) {
          uVar1 = 0;
        }
        *param_3 = uVar1;
        *(uint *)(param_3 + 4) = puVar5[1];
        uVar6 = puVar5[2];
      }
      *(uint *)(param_3 + 8) = uVar6;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


