#include "003845ec_00385b74b.h"



void fn_00385b74(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  local_10 = param_4;
  uVar1 = fn_0068897c(*(undefined4 *)(*(int *)(param_1 + 0x94) + 8),(char *)&DAT_0031c5ac);
  local_10 = *param_2;
  fn_00688d44(uVar1,&local_10);
  return;
}



void fn_00385b60(int param_1)

{
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  fn_0031c0e0();
  return;
}



void fn_00385ac8(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00397a0c();
  *puVar1 = &DAT_00829b00;
  puVar1[0x39] = 0;
  puVar1[0x3a] = 0;
  puVar1[0x3b] = 0;
  puVar1[0x3c] = 0;
  puVar1[0x3d] = 0;
  *(undefined1 *)(puVar1 + 0x3e) = 0;
  return;
}



void fn_003859cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  iVar1 = fn_006ba284();
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  if (((int)uVar3 < 0) ||
     ((uint)(*(int *)(param_1 + 0xf0) - *(int *)(param_1 + 0xec) >> 4) <= uVar3)) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = (int *)(*(int *)(param_1 + 0xec) + uVar3 * 0x10);
  }
  if (*piVar4 == 0) {
    *(undefined2 *)(*(int *)(param_1 + 0xe8) + 0x558) = 0;
    iVar1 = *(int *)(param_1 + 0xe8);
    *(undefined4 *)(iVar1 + 0x55c) = 0;
    *(undefined4 *)(iVar1 + 0x560) = 0;
    *(undefined4 *)(iVar1 + 0x564) = 0;
    *(undefined4 *)(iVar1 + 0x568) = 0;
    return;
  }
  *(undefined2 *)(*(int *)(param_1 + 0xe8) + 0x558) = *(undefined2 *)((int)piVar4 + 10);
  *(undefined1 *)(*(int *)(param_1 + 0xe8) + 0x56c) = 1;
  puVar5 = (undefined4 *)fn_00242540(*(undefined4 *)(DAT_00897804 + 0x18),piVar4[1]);
  if (puVar5 == (undefined4 *)0x0) {
    iVar1 = *(int *)(param_1 + 0xe8);
    *(undefined4 *)(iVar1 + 0x55c) = 0;
    *(undefined4 *)(iVar1 + 0x560) = 0;
    *(undefined4 *)(iVar1 + 0x564) = 0;
    *(undefined4 *)(iVar1 + 0x568) = 0;
    return;
  }
  uVar6 = puVar5[1];
  uVar7 = puVar5[2];
  uVar8 = puVar5[3];
  iVar1 = *(int *)(param_1 + 0xe8);
  *(undefined4 *)(iVar1 + 0x55c) = *puVar5;
  *(undefined4 *)(iVar1 + 0x560) = uVar6;
  *(undefined4 *)(iVar1 + 0x564) = uVar7;
  *(undefined4 *)(iVar1 + 0x568) = uVar8;
  return;
}



void fn_00385850(int *param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_0036bb70(*(undefined4 *)(param_1[0x39] + 0x10));
  *(undefined4 *)(param_1[0x39] + 0x10) = uVar1;
  fn_0036baa0(uVar1,param_1[0x29],param_1[0x3b] + 0x10,param_1[0x3c]);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_0068ab44(param_1,0x1000950);
  return;
}



void fn_00384a00(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  
  uVar7 = *(undefined4 *)(*(int *)(param_1 + 0xe4) + 0x14);
  iVar5 = *(int *)(*(int *)(param_1 + 0xe4) + 0x18);
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  uVar6 = *(undefined4 *)(DAT_00897804 + 0x18);
  iVar2 = fn_00242540(uVar6,param_2[1]);
  if (iVar2 != 0) {
    uVar3 = fn_0024eecc();
    *(undefined2 *)(iVar2 + (uint)*(byte *)((int)param_2 + 9) * 2 + 8) = 0;
    fn_0024ec28(iVar2,uVar3);
    fn_0028a5c0(uVar8,iVar2);
  }
  cVar1 = (char)iVar5;
  fn_00242170(uVar6,uVar7,(int)cVar1);
  puVar4 = (undefined4 *)fn_00242540(uVar6,uVar7);
  uVar7 = fn_0024eecc();
  uVar3 = fn_00250030(param_2);
  *(undefined2 *)((int)puVar4 + iVar5 * 2 + 8) = *(undefined2 *)((int)param_2 + 10);
  fn_0024ec28(puVar4,uVar7);
  fn_0028a5c0(uVar8,puVar4);
  iVar2 = fn_00242104(uVar6,*param_2);
  *(undefined4 *)(iVar2 + 4) = *puVar4;
  *(char *)(iVar2 + 9) = cVar1;
  fn_0024f974(iVar2,uVar3);
  return;
}


