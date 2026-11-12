#include "007b89a8_007b8bd8.h"



void fn_007b8bd8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (param_1 < param_2) {
    if (0 < (int)param_2 - (int)param_1) {
      uVar1 = ((int)param_2 - (int)param_1) / 0x34;
      puVar2 = param_1;
      if ((uVar1 & 1) != 0) {
        uVar4 = param_3[1];
        uVar5 = param_3[2];
        uVar6 = param_3[3];
        uVar7 = param_3[4];
        uVar8 = param_3[5];
        uVar9 = param_3[6];
        uVar10 = param_3[7];
        *param_1 = *param_3;
        param_1[1] = uVar4;
        param_1[2] = uVar5;
        param_1[3] = uVar6;
        param_1[4] = uVar7;
        param_1[5] = uVar8;
        param_1[6] = uVar9;
        param_1[7] = uVar10;
        puVar2 = param_1 + 0xd;
        uVar4 = param_3[9];
        uVar5 = param_3[10];
        uVar6 = param_3[0xb];
        uVar7 = param_3[0xc];
        param_1[8] = param_3[8];
        param_1[9] = uVar4;
        param_1[10] = uVar5;
        param_1[0xb] = uVar6;
        param_1[0xc] = uVar7;
      }
      iVar3 = (int)uVar1 >> 1;
      if (iVar3 != 0) {
        do {
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          iVar3 = iVar3 + -1;
          *puVar2 = *param_3;
          puVar2[1] = uVar4;
          puVar2[2] = uVar5;
          puVar2[3] = uVar6;
          puVar2[4] = uVar7;
          puVar2[5] = uVar8;
          puVar2[6] = uVar9;
          puVar2[7] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[8] = param_3[8];
          puVar2[9] = uVar4;
          puVar2[10] = uVar5;
          puVar2[0xb] = uVar6;
          puVar2[0xc] = uVar7;
          uVar4 = param_3[1];
          uVar5 = param_3[2];
          uVar6 = param_3[3];
          uVar7 = param_3[4];
          uVar8 = param_3[5];
          uVar9 = param_3[6];
          uVar10 = param_3[7];
          puVar2[0xd] = *param_3;
          puVar2[0xe] = uVar4;
          puVar2[0xf] = uVar5;
          puVar2[0x10] = uVar6;
          puVar2[0x11] = uVar7;
          puVar2[0x12] = uVar8;
          puVar2[0x13] = uVar9;
          puVar2[0x14] = uVar10;
          uVar4 = param_3[9];
          uVar5 = param_3[10];
          uVar6 = param_3[0xb];
          uVar7 = param_3[0xc];
          puVar2[0x15] = param_3[8];
          puVar2[0x16] = uVar4;
          puVar2[0x17] = uVar5;
          puVar2[0x18] = uVar6;
          puVar2[0x19] = uVar7;
          puVar2 = puVar2 + 0x1a;
        } while (iVar3 != 0);
        return;
      }
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 0xd) {
      uVar4 = param_3[1];
      uVar5 = param_3[2];
      uVar6 = param_3[3];
      uVar7 = param_3[4];
      uVar8 = param_3[5];
      uVar9 = param_3[6];
      uVar10 = param_3[7];
      *param_1 = *param_3;
      param_1[1] = uVar4;
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = uVar7;
      param_1[5] = uVar8;
      param_1[6] = uVar9;
      param_1[7] = uVar10;
      uVar4 = param_3[9];
      uVar5 = param_3[10];
      uVar6 = param_3[0xb];
      uVar7 = param_3[0xc];
      param_1[8] = param_3[8];
      param_1[9] = uVar4;
      param_1[10] = uVar5;
      param_1[0xb] = uVar6;
      param_1[0xc] = uVar7;
    }
  }
  return;
}



undefined4 * fn_007b8b4c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 < param_2) {
    uVar3 = (int)param_2 - (int)param_1;
    if (0 < (int)uVar3) {
      uVar1 = (uVar3 & 7) >> 2;
      if (uVar1 != 0) {
        *param_3 = *param_1;
      }
      uVar2 = (uint)(uVar1 != 0);
      for (; (int)uVar1 < (int)uVar3 >> 2; uVar1 = uVar1 + 2) {
        param_3[uVar2] = param_1[uVar2];
        param_3[uVar2 + 1] = param_1[uVar2 + 1];
        uVar2 = uVar2 + 2;
      }
      param_3 = (undefined4 *)((int)param_3 + (uVar3 & 0xfffffffc));
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      *param_3 = *param_1;
      param_3 = param_3 + 1;
    }
  }
  return param_3;
}



undefined4 * fn_007b8ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  if (param_1 < param_2) {
    uVar4 = (int)param_2 - (int)param_1;
    if (0 < (int)uVar4) {
      puVar1 = param_3 + -2;
      puVar2 = param_1 + -2;
      if ((int)(uVar4 * 0x10000000) < 0) {
        uVar5 = param_1[1];
        *param_3 = *param_1;
        param_3[1] = uVar5;
        puVar1 = param_3;
        puVar2 = param_1;
      }
      for (iVar3 = (int)uVar4 >> 4; iVar3 != 0; iVar3 = iVar3 + -1) {
        uVar5 = puVar2[3];
        puVar1[2] = puVar2[2];
        puVar1[3] = uVar5;
        uVar5 = puVar2[5];
        puVar1[4] = puVar2[4];
        puVar1[5] = uVar5;
        puVar1 = puVar1 + 4;
        puVar2 = puVar2 + 4;
      }
      param_3 = (undefined4 *)((int)param_3 + (uVar4 & 0xfffffff8));
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 2) {
      uVar5 = param_1[1];
      *param_3 = *param_1;
      param_3[1] = uVar5;
      param_3 = param_3 + 2;
    }
  }
  return param_3;
}



int fn_007b8a24(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x34) {
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_1 + 4);
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_1 + 5);
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_1 + 6);
    *(undefined4 *)(param_3 + 8) = *(undefined4 *)(param_1 + 8);
    fn_006f94f4(param_3 + 0xc,param_1 + 0xc);
    *(undefined4 *)(param_3 + 0xc) = *(undefined4 *)(param_1 + 0xc);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    *(undefined2 *)(param_3 + 0xc) = *(undefined2 *)(param_1 + 0xc);
    *(undefined1 *)(param_3 + 0x16) = *(undefined1 *)(param_1 + 0x16);
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    uVar2 = *(undefined4 *)(param_1 + 0x20);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    uVar4 = *(undefined4 *)(param_1 + 0x28);
    uVar5 = *(undefined4 *)(param_1 + 0x2c);
    uVar6 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_3 + 0x18) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(param_3 + 0x1c) = uVar1;
    *(undefined4 *)(param_3 + 0x20) = uVar2;
    *(undefined4 *)(param_3 + 0x24) = uVar3;
    *(undefined4 *)(param_3 + 0x28) = uVar4;
    *(undefined4 *)(param_3 + 0x2c) = uVar5;
    *(undefined4 *)(param_3 + 0x30) = uVar6;
    param_3 = param_3 + 0x34;
  }
  return param_3;
}



undefined4 * fn_007b89a8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 < param_2) {
    uVar4 = (int)param_2 - (int)param_1;
    if (0 < (int)uVar4) {
      puVar1 = param_3 + -1;
      puVar2 = param_1 + -1;
      if ((int)(uVar4 * 0x20000000) < 0) {
        *param_3 = *param_1;
        puVar1 = param_3;
        puVar2 = param_1;
      }
      for (iVar3 = (int)uVar4 >> 3; iVar3 != 0; iVar3 = iVar3 + -1) {
        puVar1[1] = puVar2[1];
        puVar2 = puVar2 + 2;
        puVar1 = puVar1 + 2;
        *puVar1 = *puVar2;
      }
      param_3 = (undefined4 *)((int)param_3 + (uVar4 & 0xfffffffc));
    }
  }
  else {
    for (; param_1 != param_2; param_1 = param_1 + 1) {
      *param_3 = *param_1;
      param_3 = param_3 + 1;
    }
  }
  return param_3;
}


