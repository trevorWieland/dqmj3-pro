#include "003efe54_003f0e9caa.h"



void fn_003f0198(undefined4 param_1)

{
  fn_002feef8(param_1);
  return;
}



void fn_003eff3c(int param_1,int *param_2,int *param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint in_fpscr;
  float fVar9;
  float fVar11;
  undefined8 uVar10;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  int iStack_34;
  int *piStack_30;
  int *local_2c;
  int iStack_28;
  
  iVar8 = 0;
  iVar5 = param_4;
  if (param_4 != 0) {
    do {
      iVar8 = iVar8 + 1;
      iVar5 = iVar5 / 10;
    } while (iVar5 != 0);
    if (iVar8 != 0) goto LAB_003eff84;
  }
  iVar8 = 1;
LAB_003eff84:
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x24);
  uVar10 = 0x4120000000000000;
  param_2[7] = *(int *)(param_1 + 0x1c);
  param_2[8] = iVar5;
  param_2[9] = iVar6;
  uVar7 = 0;
  *(byte *)(param_2 + 0x11) = *(byte *)(param_2 + 0x11) & 0xef | 0x10;
  iStack_34 = param_1;
  piStack_30 = param_2;
  local_2c = param_3;
  iStack_28 = param_4;
  do {
    local_6c = 0;
    local_70 = 0;
    local_68 = 0;
    local_58 = 0;
    local_64 = 0;
    local_60 = 0;
    local_5c = 0;
    local_54 = 0;
    fn_0017d96c(&local_70,0x20,0x1f,(char *)&DAT_003f0168,uVar7);
    piVar3 = (int *)(**(code **)(*param_2 + 0x2c))(param_2,&local_70,1);
    if (piVar3 != (int *)0x0) {
      puVar4 = (undefined4 *)(**(code **)(*piVar3 + 8))(piVar3);
      do {
        if (puVar4 == &DAT_0089a92c) goto LAB_003f005c;
        puVar4 = (undefined4 *)*puVar4;
      } while (puVar4 != (undefined4 *)0x0);
    }
    piVar3 = (int *)0x0;
LAB_003f005c:
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_80 = 0;
    local_84 = 0;
    local_7c = 0;
    local_78 = 0;
    local_74 = 0;
    fn_0017d96c(&local_90,0x20,0x1f,(char *)&DAT_003f0174,param_4 % 10 & 0xffff);
    iVar5 = (**(code **)(*local_2c + 0x14))(local_2c,&local_90);
    iVar6 = (**(code **)(*piVar3 + 0x28))(piVar3,0);
    fn_0019501c(*(undefined4 *)(iVar6 + 0x78),iVar5);
    *(byte *)(iVar6 + 0x7c) = *(byte *)(iVar6 + 0x7c) & 0xf7;
    iVar6 = VectorUnsignedToFloat((uint)*(ushort *)(iVar5 + 6),(byte)(in_fpscr >> 0x16) & 3);
    iVar5 = VectorUnsignedToFloat((uint)*(ushort *)(iVar5 + 4),(byte)(in_fpscr >> 0x16) & 3);
    piVar3[0xf] = iVar5;
    piVar3[0x10] = iVar6;
    bVar1 = *(byte *)(piVar3 + 0x11);
    fVar11 = (float)((ulonglong)uVar10 >> 0x20);
    fVar9 = DAT_0089618c + (float)uVar10;
    uVar10 = CONCAT44(fVar11,fVar9);
    piVar3[7] = (int)(fVar11 - fVar9);
    *(byte *)(piVar3 + 0x11) = bVar1 & 0xef | 0x10;
    bVar1 = bVar1 & 0xee;
    bVar2 = bVar1 | 0x10;
    if ((int)uVar7 < iVar8) {
      bVar2 = bVar1 | 0x11;
    }
    *(byte *)(piVar3 + 0x11) = bVar2;
    uVar7 = uVar7 + 1 & 0xffff;
    param_4 = param_4 / 10;
    if (9 < uVar7) {
      return;
    }
  } while( true );
}



void fn_003efe54(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int param_5)

{
  undefined4 uVar1;
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
  
  uVar1 = fn_0016ba34(DAT_00897800,DAT_00898780,param_3,0);
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
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
  fn_00100b58(uVar1);
  fn_00101a50(&local_58,0x20,&DAT_003eff34,param_4);
  if (param_5 == 0) {
    fn_001003e0(param_1,uVar1);
    fn_0010313a(param_1,&local_58);
    return;
  }
  fn_001003e0(param_1,&local_58);
  fn_0010313a(param_1,uVar1);
  return;
}


