#include "006e1abc_006e1f68.h"



void fn_006e1f68(int param_1)

{
  if ((*(byte *)(param_1 + 0x47) & 0xf) >> 2 == 0) {
    return;
  }
  return;
}



int fn_006e1e78(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = *(int **)(param_1 + 4);
  do {
    if (piVar2 == (int *)(param_1 + 4)) {
      return 0;
    }
    iVar1 = 0;
    while (*(char *)(param_2 + iVar1) == *(char *)((int)piVar2 + iVar1 + 8)) {
      if ((*(char *)(param_2 + iVar1) == '\0') || (iVar1 = iVar1 + 1, 0x7f < iVar1)) {
        return (int)(piVar2 + 0x22);
      }
    }
    piVar2 = (int *)*piVar2;
  } while( true );
}



void fn_006e1d54(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined2 local_20;
  byte local_1e;
  byte local_1d;
  byte local_1c;
  
  uVar1 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
          ((iVar2 >> 5) - (iVar2 >> 0x1f) & 0xffffU) * 0x1c;
  local_20 = 0;
  local_1e = 0;
  local_1d = 0;
  local_1c = (byte)((uint)**(undefined4 **)(iVar2 + 0x10) >> 0x1f);
  *(undefined1 *)(param_2 + 2) = 0;
  while (iVar3 = fn_006df894(iVar2,&local_20,param_3,param_4), iVar3 != 0) {
    iVar5 = *(int *)(*(int *)(iVar2 + 0x10) + (uint)local_1e * 8);
    piVar4 = (int *)(*(int *)(iVar2 + 0x10) + ((uint)local_1d + (uint)local_1e + -1) * 8);
    iVar6 = *piVar4;
    iVar3 = piVar4[1];
    *(int *)(*param_2 + (uint)*(byte *)(param_2 + 2) * 8) = iVar5;
    *(uint *)(*param_2 + (uint)*(byte *)(param_2 + 2) * 8 + 4) =
         iVar3 + ((uint)(iVar6 - iVar5) >> local_1c);
    *(char *)(param_2 + 2) = (char)param_2[2] + '\x01';
  }
  return;
}



void fn_006e1c30(int param_1,int *param_2,int *param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar3 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar4 = (int)((longlong)(int)uVar3 * -0x6db6db6d + ((ulonglong)uVar3 << 0x20) >> 0x20);
  puVar2 = (uint *)*param_2;
  *puVar2 = *(ushort *)
             (*(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
              ((iVar4 >> 5) - (iVar4 >> 0x1f) & 0xffffU) * 0x1c + 0x18) | 0x7fff0000;
  puVar2[1] = 0xf02b0;
  puVar2 = puVar2 + 2;
  uVar3 = 0;
  *param_2 = (int)puVar2;
  bVar1 = *(byte *)(param_3 + 2);
  if (bVar1 != 0) {
    do {
      puVar5 = (uint *)(*param_3 + uVar3 * 8);
      uVar3 = uVar3 + 1;
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      *puVar2 = 1;
      puVar2[1] = 0xf025f;
      puVar2[2] = uVar6;
      puVar2[3] = 0xf0227;
      puVar2[4] = uVar7;
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
      puVar2 = puVar2 + 0x12;
      *param_2 = (int)puVar2;
    } while (uVar3 < bVar1);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}



void fn_006e1abc(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined2 local_40;
  byte local_3e;
  byte local_3d;
  byte local_3c;
  int iStack_34;
  int *piStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  uStack_28 = param_4;
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 8),*(int *)(param_1 + 0xc) << 2);
  uVar1 = param_1 - *(int *)(*(int *)(param_1 + 0x2c) + 0x40);
  iVar2 = (int)((longlong)(int)uVar1 * -0x6db6db6d + ((ulonglong)uVar1 << 0x20) >> 0x20);
  iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + 0x68) +
          ((iVar2 >> 5) - (iVar2 >> 0x1f) & 0xffffU) * 0x1c;
  puVar3 = (uint *)*param_2;
  *puVar3 = *(ushort *)(iVar2 + 0x18) | 0x7fff0000;
  puVar3[1] = 0xf02b0;
  *param_2 = (int)(puVar3 + 2);
  local_40 = 0;
  local_3e = 0;
  local_3d = 0;
  local_3c = (byte)((uint)**(undefined4 **)(iVar2 + 0x10) >> 0x1f);
  while (iVar4 = fn_006df894(iVar2,&local_40,local_2c,uStack_28), iVar4 != 0) {
    puVar5 = (undefined4 *)*param_2;
    piVar7 = (int *)(*(int *)(iVar2 + 0x10) + ((uint)local_3d + (uint)local_3e + -1) * 8);
    iVar6 = *piVar7;
    iVar4 = *(int *)(*(int *)(iVar2 + 0x10) + (uint)local_3e * 8);
    iVar8 = piVar7[1];
    *puVar5 = 1;
    puVar5[1] = 0xf025f;
    puVar5[2] = iVar4;
    puVar5[3] = 0xf0227;
    puVar5[4] = ((uint)(iVar6 - iVar4) >> local_3c) + iVar8;
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
    *param_2 = (int)(puVar5 + 0x12);
  }
  fn_0044ee24(param_2,*(undefined4 *)(param_1 + 0x18),*(int *)(param_1 + 0x1c) << 2);
  return;
}


