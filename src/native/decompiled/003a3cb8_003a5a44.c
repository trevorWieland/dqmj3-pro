#include "003a3cb8_003a5a44.h"



void fn_003a5a44(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  *(undefined1 *)(param_1 + 0xe3) = 0;
  fn_003a7f50(param_1,0);
  *(undefined1 *)(param_1 + 0x7d) = 0x10;
  iVar2 = fn_00353250(*(undefined4 *)(param_1 + 0x70),param_1 + 0x7d);
  if (iVar2 == 0) {
    fn_003a6d3c(param_1,param_1 + 0x7d,0x10,*(undefined1 *)(param_1 + 0x83),1,1);
  }
  if (param_2 == 0) {
    return;
  }
  iVar2 = 0x10;
  if (*(char *)(param_1 + 0x83) != '\0') {
    do {
      uVar4 = (uint)(char)((char)iVar2 + -0x10);
      uVar1 = *(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xd4) >> 2;
      if (uVar1 <= uVar4) {
        fn_002ff628(9,&DAT_008c764d,&DAT_008c764d,uVar4,uVar1);
      }
      fn_0025e4dc(*(undefined4 *)(*(int *)(param_1 + 0xd4) + uVar4 * 4),0);
      iVar2 = (int)(char)((char)iVar2 + '\x01');
    } while (iVar2 + -0x10 < (int)(uint)*(byte *)(param_1 + 0x83));
  }
  uVar3 = *(undefined4 *)(param_1 + 0xcc);
  iVar2 = fn_00353a38(*(undefined4 *)(param_1 + 0x70),0x10);
  fn_0025e868(uVar3,(int)*(char *)(iVar2 + 0x4c));
  fn_0025e7cc(uVar3,*(int *)(iVar2 + 0xa0) + 0x1c);
  return;
}



void fn_003a58f4(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0x78) + 0x60))();
  if ((iVar1 != 0) && (uVar2 = 0, *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2 != 0)) {
    do {
      uVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
      if (uVar5 <= uVar2) {
        fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar2,uVar5);
        param_4 = uVar5;
      }
      if (*(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar2 * 4) + 4) == iVar1) {
        fn_003a755c(param_1,uVar2 & 0xff);
        *(char *)(param_1 + 0x7c) = (char)uVar2;
        (**(code **)(**(int **)(param_1 + 0x78) + 0x2c))
                  (*(int **)(param_1 + 0x78),0,uVar2 & 0xff,0,param_4);
        uVar3 = (uint)*(byte *)(param_1 + 0x7c);
        uVar5 = *(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2;
        if (uVar5 <= uVar3) {
          fn_002ff628(9,&DAT_008c7660,&DAT_008c7660,uVar3);
          param_4 = uVar5;
        }
        iVar4 = *(int *)(*(int *)(*(int *)(param_1 + 0x98) + uVar3 * 4) + 4);
        fn_0025e378(*(undefined4 *)(param_1 + 200),iVar4 + 0x3c);
        fn_0025e7cc(*(undefined4 *)(param_1 + 200),iVar4 + 0x1c);
        fn_003a755c(param_1,*(undefined1 *)(param_1 + 0x7c));
        fn_0025e378(*(undefined4 *)(param_1 + 200),iVar1 + 0x3c);
        fn_0025e7cc(*(undefined4 *)(param_1 + 200),iVar1 + 0x1c);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < (uint)(*(int *)(param_1 + 0x9c) - *(int *)(param_1 + 0x98) >> 2));
  }
  return;
}



void fn_003a58d4(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0x68) == 0) {
    return;
  }
  fn_00178eec(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x88),param_2);
  return;
}



undefined4 fn_003a4438(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  return 1;
}



undefined4 *
fn_003a4328(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 unaff_r4;
  undefined4 *puVar4;
  undefined4 uVar5;
  
  iVar1 = fn_00145b00(0x68,&DAT_00812c8c);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)fn_0068ab5c(iVar1,param_1);
  *puVar2 = &DAT_0082db88;
  puVar2[0x19] = 0;
  iVar1 = fn_00145b00(0x5c,&DAT_00812c8c);
  uVar5 = 0;
  if (iVar1 != 0) {
    puVar4 = (undefined4 *)puVar2[1];
    uVar5 = puVar2[0x12];
    if (puVar4 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar4)(puVar4);
      do {
        if (puVar3 == &DAT_00890360) goto LAB_003a43c8;
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4 = (undefined4 *)0x0;
LAB_003a43c8:
    uVar5 = fn_00588e54(iVar1,puVar4,uVar5,param_4,unaff_r4);
  }
  puVar2[0x19] = uVar5;
  return puVar2;
}



undefined4 fn_003a42b4(int param_1)

{
  (**(code **)(**(int **)(param_1 + 100) + 0xc))(*(int **)(param_1 + 100),0xffffffff,0);
  (**(code **)(**(int **)(param_1 + 100) + 8))(*(int **)(param_1 + 100),0xffffffff);
  fn_00588d98(*(undefined4 *)(param_1 + 100));
  fn_003cfd6c(*(undefined4 *)(param_1 + 100));
  (**(code **)(**(int **)(param_1 + 100) + 0x18))(*(int **)(param_1 + 100),0,1);
  return 1;
}



void fn_003a4274(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00328ad4();
  puVar1[0x1c] = 0;
  *puVar1 = &PTR_FUN_0082da78;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  return;
}



void fn_003a4240(int param_1)

{
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x44));
  fn_005f6270(*(undefined4 *)(*(int *)(param_1 + 0x70) + 0x48));
  func_0x002043d8(DAT_00897840);
  return;
}



void fn_003a41f4(int param_1)

{
  int iVar1;
  
  if ((0 < *(int *)(param_1 + 0x80)) &&
     (iVar1 = *(int *)(param_1 + 0x80) + -1, *(int *)(param_1 + 0x80) = iVar1, iVar1 < 1)) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    fn_0036c340(*(undefined4 *)(param_1 + 0x5c));
  }
  if (*(char *)(*(int *)(param_1 + 0x5c) + 0x31) == '\x01') {
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x6c);
  }
  return;
}



void fn_003a403c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  fn_00328a70(param_1,param_2,0,1,param_5,0);
  *(undefined4 *)(param_1 + 0x80) = param_4;
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  return;
}



void fn_003a3ffc(int param_1,undefined4 param_2,undefined4 param_3)

{
  fn_00328a70(param_1,param_2,0,1,1,0);
  *(undefined4 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x6c) = param_3;
  *(undefined4 *)(param_1 + 0x80) = 0;
  return;
}



int fn_003a3f68(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x10);
  uVar1 = uVar2;
  if (*(uint *)(param_1 + 0x14) < uVar2) {
    do {
      uVar1 = uVar1 + 0xc;
    } while (uVar1 != *(uint *)(param_1 + 0x14));
  }
  fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0x18) - uVar2) / 0xc,0);
  uVar2 = *(uint *)(param_1 + 4);
  uVar1 = uVar2;
  if (*(uint *)(param_1 + 8) <= uVar2) {
    for (; uVar1 != *(uint *)(param_1 + 8); uVar1 = uVar1 + 4) {
    }
  }
  fn_001008c4(uVar2,(int)(*(int *)(param_1 + 0xc) - uVar2) >> 2,0);
  return param_1;
}



void fn_003a3cb8(uint *param_1,uint param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint local_20;
  uint local_1c [2];
  
  puVar1 = &local_20;
  puVar6 = &local_20;
  *param_1 = param_2;
  puVar9 = param_1 + 1;
  local_1c[0] = param_2;
  if (0x3fffffff < param_2) {
    local_20 = 0x3fffffff;
    fn_002ff628(8,&DAT_008c7671,&DAT_008c7671,param_2);
  }
  if ((uint)((int)(param_1[3] - *puVar9) >> 2) < local_1c[0]) {
    uVar10 = (int)(param_1[2] - *puVar9) >> 2;
    local_20 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_20 < uVar10 + 0x20) {
      local_20 = uVar10 + 0x20;
    }
    if (local_20 <= local_1c[0]) {
      puVar1 = local_1c;
    }
    uVar10 = *puVar1;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 << 2,0);
    puVar8 = (undefined4 *)param_1[2];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar9; puVar7 != puVar8; puVar7 = puVar7 + 1) {
      if (puVar3 != (undefined4 *)0x0) {
        *puVar3 = *puVar7;
      }
      puVar3 = puVar3 + 1;
    }
    uVar4 = *puVar9;
    uVar5 = uVar4;
    if (param_1[2] < uVar4) {
      do {
        uVar5 = uVar5 + 4;
      } while (uVar5 != param_1[2]);
    }
    fn_001008c4(uVar4,(int)(param_1[3] - uVar4) >> 2,0);
    uVar5 = *puVar9;
    *puVar9 = (uint)puVar2;
    param_1[2] = (param_1[2] - uVar5 & 0xfffffffc) + (int)puVar2;
    param_1[3] = (uint)(puVar2 + uVar10);
  }
  puVar1 = param_1 + 4;
  local_1c[0] = *(uint *)(&DAT_007c670c + *param_1 * 4);
  if (0x15555555 < *(uint *)(&DAT_007c670c + *param_1 * 4)) {
    local_20 = 0x15555555;
    fn_002ff628(8,&DAT_008c762d);
  }
  if ((uint)((int)(param_1[6] - *puVar1) / 0xc) < local_1c[0]) {
    uVar10 = (int)(param_1[5] - *puVar1) / 0xc;
    local_20 = uVar10 + (uVar10 >> 1) + (uVar10 >> 3);
    if (local_20 < uVar10 + 0x20) {
      local_20 = uVar10 + 0x20;
    }
    if (local_20 <= local_1c[0]) {
      puVar6 = local_1c;
    }
    uVar10 = *puVar6;
    puVar2 = (undefined4 *)fn_00100fc6(uVar10 * 0xc,0);
    puVar8 = (undefined4 *)param_1[5];
    puVar3 = puVar2;
    for (puVar7 = (undefined4 *)*puVar1; puVar7 != puVar8; puVar7 = puVar7 + 3) {
      if (puVar3 != (undefined4 *)0x0) {
        uVar11 = puVar7[1];
        uVar12 = puVar7[2];
        *puVar3 = *puVar7;
        puVar3[1] = uVar11;
        puVar3[2] = uVar12;
      }
      puVar3 = puVar3 + 3;
    }
    uVar4 = *puVar1;
    uVar5 = uVar4;
    if (param_1[5] < uVar4) {
      do {
        uVar5 = uVar5 + 0xc;
      } while (uVar5 != param_1[5]);
    }
    fn_001008c4(uVar4,(int)(param_1[6] - uVar4) / 0xc,0);
    uVar5 = *puVar1;
    *puVar1 = (uint)puVar2;
    param_1[5] = (uint)(puVar2 + ((int)(param_1[5] - uVar5) / 0xc) * 3);
    param_1[6] = (uint)(puVar2 + uVar10 * 3);
  }
  return;
}


