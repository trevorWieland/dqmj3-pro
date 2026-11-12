#include "001921a8_0019285c.h"



void fn_0019285c(int param_1,int param_2,undefined1 param_3,undefined4 param_4,undefined1 param_5,
                 undefined1 param_6)

{
  *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 5) = param_3;
  *(undefined4 *)(*(int *)(param_1 + 0x60) + param_2 * 8) = param_4;
  *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 6) = param_5;
  *(undefined1 *)(*(int *)(param_1 + 0x60) + param_2 * 8 + 7) = param_6;
  return;
}



undefined4 fn_00192720(int param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint local_30;
  int *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  uVar4 = *(undefined4 *)(param_1 + 8);
  local_24 = 0;
  local_2c = (int *)param_2[1];
  local_30 = *param_2;
  if ((local_30 & 0x8000000) != 0) {
    local_2c[1] = local_2c[1] + 1;
  }
  local_28 = *(undefined4 *)(param_1 + 100);
  local_20 = *(undefined4 *)(param_1 + 8);
  if (*(uint *)(param_1 + 0xc) <= *(uint *)(param_1 + 8)) {
    iVar2 = *(uint *)(param_1 + 8) << 1;
    if (iVar2 == 0) {
      iVar2 = 4;
    }
    uVar1 = fn_0018388c(*(undefined4 *)(param_1 + 4),*(uint *)(param_1 + 0xc) * 0x14,iVar2 * 0x14);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *(int *)(param_1 + 0xc) = iVar2;
  }
  puVar3 = (undefined4 *)(*(int *)(param_1 + 4) + *(int *)(param_1 + 8) * 0x14);
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
  if (puVar3 != (undefined4 *)0x0) {
    puVar3[1] = 0;
    *puVar3 = 0x1000001;
    fn_0019e864(puVar3,&local_30);
    puVar3[2] = local_28;
    puVar3[3] = local_24;
    puVar3[4] = local_20;
  }
  if (*(uint *)(param_1 + 0x1c) < *(uint *)(param_1 + 8)) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 8);
  }
  if (((local_30 & 0x8000000) != 0) &&
     (iVar2 = local_2c[1], local_2c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  return uVar4;
}



void fn_00192628(uint *param_1,int param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_38;
  int *local_34;
  uint local_30;
  int *local_2c;
  
  uVar4 = *(undefined4 *)(param_2 + 0xdc);
  local_2c = (int *)fn_002fece8(0x2c);
  if (local_2c != (int *)0x0) {
    fn_0019b998(local_2c,uVar4,0);
  }
  local_2c[6] = 0;
  local_30 = 0xa000020;
  if (local_2c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_2c[1] = local_2c[1] + 1;
  local_38 = 0x5000002;
  local_34 = (int *)&DAT_00000001;
  fn_0019b728(*(undefined4 *)(param_2 + 0x84),&local_30,&local_38);
  if (((local_38 & 0x8000000) != 0) &&
     (iVar3 = local_34[1], local_34[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_34 + 8))();
  }
  piVar2 = local_2c;
  uVar1 = local_30;
  if (((local_30 & 0x8000000) != 0) &&
     (iVar3 = local_2c[1], local_2c[1] = iVar3 + -1, iVar3 + -1 == 0)) {
    (**(code **)(*local_2c + 8))();
  }
  *param_1 = uVar1;
  param_1[1] = (uint)piVar2;
  return;
}



int fn_00192548(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  param_1[1] = 0;
  *param_1 = &DAT_0081bd48;
  param_1[2] = 0;
  iVar1 = fn_00101a1c(param_1 + 0xb,&LAB_001a36c0,8,1);
  iVar8 = iVar1 + -0x2c;
  *(undefined4 *)(iVar1 + -4) = param_4;
  *(int *)(iVar1 + -0x10) = param_3;
  uVar7 = *(uint *)(param_3 + 0x24);
  uVar2 = 0;
  if (uVar7 != 0) {
    do {
      iVar3 = iVar8 + uVar2 * 8;
      puVar4 = (uint *)(iVar3 + 0x2c);
      if (puVar4 != (uint *)0x0) {
        puVar5 = (uint *)(*(int *)(*(int *)(iVar1 + -0x10) + 0x20) + uVar2 * 0x10);
        uVar9 = *puVar5;
        *puVar4 = uVar9;
        uVar6 = puVar5[1];
        *(uint *)(iVar3 + 0x30) = uVar6;
        if ((uVar9 & 0x8000000) != 0) {
          *(int *)(uVar6 + 4) = *(int *)(uVar6 + 4) + 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar7);
  }
  *(undefined4 *)(iVar1 + -0xc) = 0;
  *(undefined4 *)(iVar1 + -8) = 0;
  *(int *)(*(int *)(iVar1 + -0x10) + 4) = *(int *)(*(int *)(iVar1 + -0x10) + 4) + 1;
  *(undefined4 *)(iVar1 + -0x14) = *(undefined4 *)(*(int *)(iVar1 + -0x10) + 0x18);
  *(undefined4 *)(iVar1 + -0x20) = 0;
  *(int *)(iVar1 + -0x18) = param_2;
  *(undefined4 *)(iVar1 + -0x1c) = 0;
  fn_0019e8c4(param_2 + 0x44,iVar8);
  return iVar8;
}



undefined4 fn_00192518(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (iVar1 == param_2) break;
    iVar1 = *(int *)(iVar1 + 0x1c);
  }
  return 1;
}



undefined4 fn_001924ec(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 8)) {
      return 0;
    }
    if (puVar1[-0xb] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[-8];
}



undefined4 fn_001924e0(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  while( true ) {
    if (puVar1 == (undefined4 *)(param_1 + 8)) {
      return 0;
    }
    if (puVar1[-0xb] == *(int *)(param_1 + param_2 * 4 + 0x80)) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1[-8];
}



undefined4
fn_001923e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined1 local_2c;
  undefined1 local_2b;
  
  iVar1 = fn_00145b00(0x3c,&DAT_00812c8c);
  if (iVar1 == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = (int *)fn_00172cfc();
  }
  iVar1 = fn_0019d91c(param_1,param_2,0x626c7974);
  if (iVar1 != 0) {
    local_2c = 1;
    local_2b = 0;
    iVar1 = fn_00172be0(piVar3,param_2,iVar1,0,*(undefined4 *)(param_1 + 0x74),&local_2c);
    if (iVar1 != 0) {
      uVar2 = fn_0016a318(param_1,piVar3,param_2,param_3,param_4,param_5,1);
      return uVar2;
    }
  }
  if (piVar3 != (int *)0x0) {
    (**(code **)(*piVar3 + 8))(piVar3);
  }
  return 0xffffffff;
}



void fn_001921a8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined4 param_6)

{
  int iVar1;
  
  iVar1 = fn_00191f08();
  if (iVar1 != 0) {
    iVar1 = fn_00192114();
    *(undefined1 *)(iVar1 + 0xc0) = 1;
    iVar1 = fn_00192114();
    *(undefined4 *)(iVar1 + 200) = 10;
  }
  *(undefined1 *)(param_1 + 0x13) = param_5;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = param_6;
  *(undefined4 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  *(undefined1 *)(param_1 + 0x10) = 0;
  *(code **)(param_1 + 0xc) = fn_0019d684;
  fn_0019d684(param_1,0);
  return;
}


