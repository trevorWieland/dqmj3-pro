#include "0037e8dc_0037fbf0a.h"



void fn_0037f0c4(void)

{
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



bool fn_0037ee28(int param_1)

{
  int iVar1;
  uint in_fpscr;
  
  iVar1 = *(int *)(param_1 + 0xc0) + 1;
  *(int *)(param_1 + 0xc0) = iVar1;
  VectorSignedToFloat(10 - iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0069e2d0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84));
  iVar1 = 10 - *(int *)(param_1 + 0xc0);
  VectorSignedToFloat(iVar1,(byte)(in_fpscr >> 0x16) & 3);
  fn_0069e2d0(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x88),iVar1);
  return 9 < *(int *)(param_1 + 0xc0);
}



undefined4 fn_0037ea20(int param_1)

{
  short sVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 local_48;
  float local_44;
  undefined4 local_40;
  undefined4 *local_3c;
  float local_38;
  float local_34;
  float local_30;
  
  puVar7 = *(undefined4 **)(param_1 + 0x18);
  if (puVar7 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar2 == &DAT_00893d34) goto LAB_0037ea70;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_0037ea70:
  *(undefined4 **)(param_1 + 100) = puVar7;
  *(undefined4 *)(param_1 + 0xc4) = puVar7[0x12];
  local_48 = 1;
  uVar3 = fn_001481c8(*(undefined4 *)(param_1 + 0x68),DAT_00893d40,&DAT_0037ed5c,1);
  *(undefined4 *)(param_1 + 0x74) = uVar3;
  local_48 = 0;
  local_44 = 1.4013e-45;
  local_40 = 0;
  uVar3 = fn_001480d0(*(undefined4 *)(param_1 + 0x68),uVar3,DAT_00893d44,&DAT_0037ed64);
  *(undefined4 *)(param_1 + 0x78) = uVar3;
  iVar4 = fn_00178f9c(*(undefined4 *)(param_1 + 0x68),uVar3);
  piVar5 = (int *)(**(code **)(**(int **)(iVar4 + 0x10) + 0x2c))
                            (*(int **)(iVar4 + 0x10),(char *)&DAT_0037ed68,1);
  if (piVar5 != (int *)0x0) {
    puVar7 = (undefined4 *)(**(code **)(*piVar5 + 8))(piVar5);
    do {
      if (puVar7 == &DAT_0089a930) goto LAB_0037eb14;
      puVar7 = (undefined4 *)*puVar7;
    } while (puVar7 != (undefined4 *)0x0);
  }
  piVar5 = (int *)0x0;
LAB_0037eb14:
  fn_002317d8(&local_3c,(int)*(short *)(*(int *)(param_1 + 100) + 10),0);
  fn_00190d50(piVar5,local_3c);
  fn_002a4648(*(undefined4 *)(param_1 + 0x70),0xc739);
  fn_002a4648(*(undefined4 *)(param_1 + 0x70),0xc73a);
  fn_002a4648(*(undefined4 *)(param_1 + 0x70),0xc73b);
  iVar4 = (int)*(short *)(*(int *)(param_1 + 100) + 10);
  uVar3 = fn_002b1634(*(undefined4 *)(param_1 + 0x6c),iVar4,*(int *)(param_1 + 100) + 0xc,1);
  *(undefined4 *)(param_1 + 0x80) = uVar3;
  iVar4 = fn_00242984(iVar4);
  fVar9 = -10.0;
  uVar3 = 0xc28c0000;
  local_44 = *(float *)(iVar4 + 4) + -10.0;
  local_40 = 0xc28c0000;
  local_48 = 0;
  fn_002b18e8(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80),&local_48);
  local_38 = *(float *)(iVar4 + 8) * 0.5;
  local_34 = local_38;
  local_30 = local_38;
  fn_002b1b20(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80),&local_38);
  fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x80),0);
  iVar4 = *(int *)(param_1 + 100);
  if (*(short *)(iVar4 + 0x46) == 0) {
    sVar1 = *(short *)(iVar4 + 0x1e);
    uVar6 = fn_002b1634(*(undefined4 *)(param_1 + 0x6c),(int)sVar1,iVar4 + 0x20,1);
    *(undefined4 *)(param_1 + 0x84) = uVar6;
    iVar4 = fn_00242984((int)sVar1);
    fVar10 = 0.4;
    local_44 = *(float *)(iVar4 + 4) + fVar9;
    fVar8 = *(float *)(iVar4 + 8) * 0.4;
    local_48 = 0xc1f00000;
    local_40 = uVar3;
    fn_002b18e8(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_48);
    local_38 = fVar8;
    local_34 = fVar8;
    local_30 = fVar8;
    fn_002b1b20(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),&local_38);
    fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x84),0);
    iVar4 = (int)*(short *)(*(int *)(param_1 + 100) + 0x32);
    uVar6 = fn_002b1634(*(undefined4 *)(param_1 + 0x6c),iVar4,*(int *)(param_1 + 100) + 0x34,1);
    *(undefined4 *)(param_1 + 0x88) = uVar6;
    iVar4 = fn_00242984(iVar4);
    local_48 = 0x41f00000;
    local_44 = *(float *)(iVar4 + 4) + fVar9;
    local_40 = uVar3;
    fVar9 = *(float *)(iVar4 + 8) * fVar10;
    fn_002b18e8(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x88),&local_48);
    local_38 = fVar9;
    local_34 = local_38;
    local_30 = local_38;
    fn_002b1b20(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x88),&local_38);
    fn_002b1b54(*(undefined4 *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x88),0);
  }
  if (local_3c != &DAT_008f9cf4) {
    piVar5 = local_3c + -3;
    iVar4 = *piVar5;
    if ((iVar4 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  return 1;
}



byte fn_0037e8dc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  code *local_10;
  undefined4 uStack_c;
  
  iVar2 = fn_001854ac(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x7c));
  bVar1 = *(byte *)(iVar2 + 0x2c) & 1;
  if ((*(byte *)(iVar2 + 0x2c) & 1) != 0) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x7c));
    uVar3 = fn_001853ec(*(undefined4 *)(param_1 + 0x68),(char *)&DAT_0037e968,
                         *(undefined4 *)(param_1 + 0x78));
    *(undefined4 *)(param_1 + 0x7c) = uVar3;
    piVar4 = (int *)fn_001854ac(*(undefined4 *)(param_1 + 0x68),uVar3);
    (**(code **)(*piVar4 + 0x50))(piVar4,1);
    local_10 = fn_0037e774;
    uStack_c = 0;
    fn_00789478(param_1 + 0xb0,&local_10);
    bVar1 = 1;
  }
  return bVar1;
}


