#include "006e0a34_006e1168.h"



void fn_006e1168(int param_1,undefined4 *param_2,int param_3,int *param_4,int param_5,
                 undefined4 param_6)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 auStack_58 [52];
  
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar2 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  fn_001ad39c(auStack_58,param_6,
               *(int *)(param_3 + 0x14) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
                       ((iVar3 >> 5) - (iVar3 >> 0x1f) & 0xffffU) * 0x1c + 0x1a) * 0x30);
  puVar5 = (uint *)*param_2;
  *puVar5 = *(byte *)(param_5 + 2) | 0x80000000;
  puVar5[1] = 0xf02c0;
  fn_001ad578(puVar5 + 2,auStack_58,0xbf02c1);
  *param_2 = puVar5 + 0x10;
  uVar2 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar3 = (int)((longlong)(int)uVar2 * -0x6db6db6d + ((ulonglong)uVar2 << 0x20) >> 0x20);
  puVar5[0x10] = *(ushort *)
                  (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
                   ((iVar3 >> 5) - (iVar3 >> 0x1f) & 0xffffU) * 0x1c + 0x18) | 0x7fff0000;
  puVar5[0x11] = 0xf02b0;
  *param_2 = puVar5 + 0x12;
  bVar1 = *(byte *)(param_4 + 2);
  uVar2 = 0;
  if (bVar1 != 0) {
    do {
      puVar4 = (undefined4 *)*param_2;
      puVar6 = (undefined4 *)(*param_4 + uVar2 * 8);
      uVar2 = uVar2 + 1;
      uVar7 = *puVar6;
      uVar8 = puVar6[1];
      *puVar4 = 1;
      puVar4[1] = 0xf025f;
      puVar4[2] = uVar7;
      puVar4[3] = 0xf0227;
      puVar4[4] = uVar8;
      puVar4[5] = 0xf0228;
      puVar4[6] = 0;
      puVar4[7] = 0x10245;
      puVar4[8] = 1;
      puVar4[9] = 0xf022f;
      puVar4[10] = 1;
      puVar4[0xb] = 0x10245;
      puVar4[0xc] = 1;
      puVar4[0xd] = 0xf0231;
      puVar4[0xe] = 0;
      puVar4[0xf] = 0x8025e;
      puVar4[0x10] = 0;
      puVar4[0x11] = 0x8025e;
      *param_2 = puVar4 + 0x12;
    } while (uVar2 < bVar1);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e0fc4(int param_1,undefined4 *param_2,int param_3,int *param_4,int param_5)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  puVar7 = (uint *)*param_2;
  uVar3 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar6 = *(int *)(param_3 + 0x14);
  uVar2 = *(ushort *)
           (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
            ((iVar4 >> 5) - (iVar4 >> 0x1f) & 0xffffU) * 0x1c + 0x1a);
  *puVar7 = *(byte *)(param_5 + 2) | 0x80000000;
  puVar7[1] = 0xf02c0;
  fn_001ad578(puVar7 + 2,iVar6 + (uint)uVar2 * 0x30,0xbf02c1);
  *param_2 = puVar7 + 0x10;
  uVar3 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  puVar7[0x10] = *(ushort *)
                  (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
                   ((iVar4 >> 5) - (iVar4 >> 0x1f) & 0xffffU) * 0x1c + 0x18) | 0x7fff0000;
  puVar7[0x11] = 0xf02b0;
  *param_2 = puVar7 + 0x12;
  bVar1 = *(byte *)(param_4 + 2);
  uVar3 = 0;
  if (bVar1 != 0) {
    do {
      puVar5 = (undefined4 *)*param_2;
      puVar8 = (undefined4 *)(*param_4 + uVar3 * 8);
      uVar3 = uVar3 + 1;
      uVar9 = *puVar8;
      uVar10 = puVar8[1];
      *puVar5 = 1;
      puVar5[1] = 0xf025f;
      puVar5[2] = uVar9;
      puVar5[3] = 0xf0227;
      puVar5[4] = uVar10;
      puVar5[5] = 0xf0228;
      puVar5[6] = 0;
      puVar5[7] = 0x10245;
      puVar5[8] = 1;
      puVar5[9] = 0xf022f;
      puVar5[10] = 1;
      puVar5[0xb] = 0x10245;
      puVar5[0xc] = 1;
      puVar5[0xd] = 0xf0231;
      puVar5[0xe] = 0;
      puVar5[0xf] = 0x8025e;
      puVar5[0x10] = 0;
      puVar5[0x11] = 0x8025e;
      *param_2 = puVar5 + 0x12;
    } while (uVar3 < bVar1);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e0db0(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,undefined4 param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  undefined2 local_60;
  byte local_5e;
  byte local_5d;
  byte local_5c;
  undefined1 auStack_58 [52];
  
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar1 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  fn_001ad39c(auStack_58,param_7,
               *(int *)(param_3 + 0x14) +
               (uint)*(ushort *)
                      (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
                       ((iVar2 >> 5) - (iVar2 >> 0x1f) & 0xffffU) * 0x1c + 0x1a) * 0x30);
  puVar6 = (uint *)*param_2;
  *puVar6 = *(byte *)(param_6 + 2) | 0x80000000;
  puVar6[1] = 0xf02c0;
  fn_001ad578(puVar6 + 2,auStack_58,0xbf02c1);
  *param_2 = puVar6 + 0x10;
  uVar1 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
          ((iVar2 >> 5) - (iVar2 >> 0x1f) & 0xffffU) * 0x1c;
  puVar6[0x10] = *(ushort *)(iVar2 + 0x18) | 0x7fff0000;
  puVar6[0x11] = 0xf02b0;
  *param_2 = puVar6 + 0x12;
  local_60 = 0;
  local_5e = 0;
  local_5d = 0;
  local_5c = (byte)((uint)**(undefined4 **)(iVar2 + 0x10) >> 0x1f);
  while (iVar3 = fn_006df894(iVar2,&local_60,param_4,param_5), iVar3 != 0) {
    puVar4 = (undefined4 *)*param_2;
    piVar7 = (int *)(*(int *)(iVar2 + 0x10) + ((uint)local_5d + (uint)local_5e + -1) * 8);
    iVar5 = *piVar7;
    iVar3 = *(int *)(*(int *)(iVar2 + 0x10) + (uint)local_5e * 8);
    iVar8 = piVar7[1];
    *puVar4 = 1;
    puVar4[1] = 0xf025f;
    puVar4[2] = iVar3;
    puVar4[3] = 0xf0227;
    puVar4[4] = ((uint)(iVar5 - iVar3) >> local_5c) + iVar8;
    puVar4[5] = 0xf0228;
    puVar4[6] = 0;
    puVar4[7] = 0x10245;
    puVar4[8] = 1;
    puVar4[9] = 0xf022f;
    puVar4[10] = 1;
    puVar4[0xb] = 0x10245;
    puVar4[0xc] = 1;
    puVar4[0xd] = 0xf0231;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0x8025e;
    puVar4[0x10] = 0;
    puVar4[0x11] = 0x8025e;
    *param_2 = puVar4 + 0x12;
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e0bb8(int param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int *piVar8;
  int iVar9;
  undefined2 local_30;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar3 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  puVar7 = (uint *)*param_2;
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar5 = *(int *)(param_3 + 0x14);
  uVar1 = *(ushort *)
           (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
            ((iVar4 >> 5) - (iVar4 >> 0x1f) & 0xffffU) * 0x1c + 0x1a);
  *puVar7 = *(byte *)(param_6 + 2) | 0x80000000;
  puVar7[1] = 0xf02c0;
  fn_001ad578(puVar7 + 2,iVar5 + (uint)uVar1 * 0x30,0xbf02c1);
  *param_2 = (int)(puVar7 + 0x10);
  uVar3 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  iVar4 = *(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
          ((iVar4 >> 5) - (iVar4 >> 0x1f) & 0xffffU) * 0x1c;
  puVar7[0x10] = *(ushort *)(iVar4 + 0x18) | 0x7fff0000;
  puVar7[0x11] = 0xf02b0;
  *param_2 = (int)(puVar7 + 0x12);
  local_30 = 0;
  local_2e = 0;
  local_2d = 0;
  local_2c = (byte)((uint)**(undefined4 **)(iVar4 + 0x10) >> 0x1f);
  while (iVar5 = fn_006df894(iVar4,&local_30,param_4,param_5), iVar5 != 0) {
    puVar2 = (undefined4 *)*param_2;
    piVar8 = (int *)(*(int *)(iVar4 + 0x10) + ((uint)local_2d + (uint)local_2e + -1) * 8);
    iVar6 = *piVar8;
    iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + (uint)local_2e * 8);
    iVar9 = piVar8[1];
    *puVar2 = 1;
    puVar2[1] = 0xf025f;
    puVar2[2] = iVar5;
    puVar2[3] = 0xf0227;
    puVar2[4] = ((uint)(iVar6 - iVar5) >> local_2c) + iVar9;
    puVar2[5] = 0xf0228;
    puVar2[6] = 0;
    puVar2[7] = 0x10245;
    puVar2[8] = 1;
    puVar2[9] = 0xf022f;
    puVar2[10] = 1;
    puVar2[0xb] = 0x10245;
    puVar2[0xc] = 1;
    puVar2[0xd] = 0xf0231;
    puVar2[0xe] = 0;
    puVar2[0xf] = 0x8025e;
    puVar2[0x10] = 0;
    puVar2[0x11] = 0x8025e;
    *param_2 = (int)(puVar2 + 0x12);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e0b54(int param_1,undefined4 param_2)

{
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  if (*(int *)(param_1 + 0x14) * -0x34 != 0) {
    fn_0044ee24(param_2,*(undefined4 *)(*(int *)(param_1 + 0x10) + 0x2c),
                 *(int *)(*(int *)(param_1 + 0x10) + 0x30) << 2);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e0a34(int param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_30 [9];
  
  puVar2 = local_30;
  if ((*(uint *)(param_1 + 8) & 0x20) == 0) {
    if ((*(uint *)(param_1 + 8) & 4) == 0) {
      fn_00780998(*(undefined4 *)(param_1 + 0xc),param_2 + 1);
    }
    else {
      puVar3 = *(uint **)(param_1 + 0xc);
      uVar1 = puVar3[1];
      uVar4 = puVar3[2];
      param_2[1] = *puVar3;
      param_2[2] = uVar1;
      param_2[3] = uVar4;
    }
    uVar1 = *param_2 & 0xfd7fffff;
    *param_2 = uVar1;
  }
  else {
    uVar1 = *param_2;
  }
  *param_2 = uVar1 & 0xf3ffffff;
  if ((*(uint *)(param_1 + 8) & 0x10) == 0) {
    if ((*(uint *)(param_1 + 8) & 2) == 0) {
      fn_00780898(*(undefined4 *)(param_1 + 0x10),local_30);
    }
    else {
      puVar2 = *(uint **)(param_1 + 0x10);
    }
    if ((*(uint *)(param_1 + 8) & 8) == 0) {
      fn_0052555c(param_2 + 4,puVar2,1);
    }
    else {
      uVar1 = param_2[7];
      uVar4 = param_2[0xb];
      uVar5 = param_2[0xf];
      fn_0052555c(param_2 + 4,puVar2,1);
      param_2[7] = uVar1;
      param_2[0xb] = uVar4;
      param_2[0xf] = uVar5;
    }
  }
  if ((*(uint *)(param_1 + 8) & 8) == 0) {
    puVar2 = *(uint **)(param_1 + 0x14);
    if ((*(uint *)(param_1 + 8) & 1) == 0) {
      fn_00780998(*(uint **)(param_1 + 0x14),local_30);
      puVar2 = local_30;
    }
    param_2[7] = *puVar2;
    param_2[0xb] = puVar2[1];
    param_2[0xf] = puVar2[2];
  }
  return;
}


