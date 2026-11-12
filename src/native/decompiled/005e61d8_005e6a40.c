#include "005e61d8_005e6a40.h"



void fn_005e6a40(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  return;
}



void fn_005e6a14(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_00858ae8;
  fn_002feef8(param_1[7]);
  fn_005df880(param_1);
  fn_002feef8();
  return;
}



void fn_005e69b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (*(char *)param_1[7] == '\0') {
    fn_00117984();
    iVar1 = fn_0010fa2c();
    if (iVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_1 + 0xc))(param_1);
  for (piVar2 = (int *)param_1[3]; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[2]) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  return;
}



void fn_005e692c(undefined4 param_1)

{
  undefined4 local_10;
  
  local_10 = 0;
  fn_0012bc84(0x208,&local_10);
  fn_00123600(param_1,local_10);
  return;
}



void fn_005e68a0(int param_1,int *param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar2 = *(int *)(param_1 + 4);
  if ((*param_2 - param_2[1] & 0xfffffffcU) != 0) {
    local_18 = param_4;
    fn_001467e4();
    fn_00146578();
    iVar1 = param_2[4];
    *(int *)(iVar2 + 4) = iVar1;
    if (iVar1 == 0) {
      fn_0012b994();
      local_18 = 0;
      fn_0012bc84(0x208,&local_18);
      *(uint *)(iVar2 + 4) = local_18 - param_2[1] & 0xfffffffc;
      return;
    }
    fn_00734eb8();
    local_18 = 0;
    fn_0012bc84(0x208,&local_18);
    fn_0044ede8(param_2,local_18);
  }
  return;
}



void fn_005e6724(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int local_30;
  undefined4 uStack_2c;
  int local_28;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar5 = *(int *)(iVar1 + 0x48);
  iVar4 = *(int *)(iVar1 + 0x4c);
  if (iVar5 == 0) {
    puVar3 = (uint *)*param_2;
    iVar4 = *(int *)(iVar1 + 0x44);
    *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
    puVar3[1] = 0xf02c0;
    fn_001ad578(puVar3 + 2,iVar4 + 0x148,0xbf02c1);
    *param_2 = (int)(puVar3 + 0x10);
    return;
  }
  iVar2 = fn_006e9fcc(iVar1 + 8);
  iVar2 = *(int *)(iVar2 + 0xd0);
  fn_005483e4(iVar2);
  puVar3 = *(uint **)(iVar2 + 0x5c);
  *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
  puVar3[1] = 0xf02c0;
  fn_001ad578(puVar3 + 2,iVar5 + 0x148,0xbf02c1);
  *(uint **)(iVar2 + 0x5c) = puVar3 + 0x10;
  puVar3 = *(uint **)(iVar2 + 0x60);
  *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
  puVar3[1] = 0xf02c0;
  fn_001ad578(puVar3 + 2,iVar4 + 0x148,0xbf02c1);
  *(uint **)(iVar2 + 0x60) = puVar3 + 0x10;
  fn_00548624(&local_30,iVar2);
  iVar1 = *param_2;
  if (iVar1 != 0 && local_30 != 0) {
    iVar1 = fn_0044ef7c(iVar1,(iVar1 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = iVar1;
    iVar1 = fn_0044efc8(iVar1,&local_28,local_30,uStack_2c);
    *param_2 = iVar1;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)(iVar1 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_28;
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  return;
}



void fn_005e657c(int param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int local_b0 [2];
  int local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_80 [48];
  undefined1 auStack_50 [52];
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 0x48);
  if (iVar2 == 0) {
    fn_001ad06c(local_b0,*(int *)(iVar1 + 0x44) + 0x148);
    puVar3 = (uint *)*param_2;
    *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
    puVar3[1] = 0xf02c0;
    fn_001ad578(puVar3 + 2,local_b0,0xbf02c1);
    *param_2 = (int)(puVar3 + 0x10);
    return;
  }
  fn_001ad06c(auStack_50,*(int *)(iVar1 + 0x4c) + 0x148);
  fn_001ad06c(auStack_80,iVar2 + 0x148,param_3);
  iVar2 = fn_006e9fcc(iVar1 + 8);
  iVar2 = *(int *)(iVar2 + 0xd0);
  fn_005483e4(iVar2);
  puVar3 = *(uint **)(iVar2 + 0x5c);
  *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
  puVar3[1] = 0xf02c0;
  fn_001ad578(puVar3 + 2,auStack_80,0xbf02c1);
  *(uint **)(iVar2 + 0x5c) = puVar3 + 0x10;
  puVar3 = *(uint **)(iVar2 + 0x60);
  *puVar3 = *(byte *)(*(int *)(iVar1 + 0x24) + 10) | 0x80000000;
  puVar3[1] = 0xf02c0;
  fn_001ad578(puVar3 + 2,auStack_50,0xbf02c1);
  *(uint **)(iVar2 + 0x60) = puVar3 + 0x10;
  fn_00548624(&local_a8,iVar2);
  iVar1 = *param_2;
  if (iVar1 != 0 && local_a8 != 0) {
    iVar1 = fn_0044ef7c(iVar1,(iVar1 - param_2[2] & 0xfffffffcU) + 0x18);
    *param_2 = iVar1;
    iVar1 = fn_0044efc8(iVar1,local_b0,local_a8,uStack_a4);
    *param_2 = iVar1;
    if ((uint *)param_2[3] != (uint *)0x0) {
      *(uint *)param_2[3] = (uint)(iVar1 - param_2[2]) >> 3;
    }
    param_2[2] = *param_2;
    param_2[3] = local_b0[0];
    if (param_2[4] == 0) {
      param_2[4] = *param_2 - param_2[1] & 0xfffffffc;
    }
  }
  return;
}



void fn_005e6304(int param_1,undefined4 *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  int iVar10;
  ushort *puVar11;
  byte *pbVar12;
  undefined4 uVar13;
  undefined4 local_30;
  ushort local_2c [4];
  
  iVar3 = *(int *)(param_1 + 4);
  if ((*(byte *)(iVar3 + 0x40) & 1) == 0) {
    pbVar4 = (byte *)fn_005e19c8(iVar3 + 8);
    iVar5 = fn_006e9fcc(iVar3 + 8);
    puVar6 = (undefined4 *)*param_2;
    *puVar6 = 1;
    puVar6[1] = 0xf0111;
    puVar6[2] = 1;
    puVar6[3] = 0xf0110;
    *param_2 = puVar6 + 4;
    piVar7 = *(int **)(iVar3 + 0x18);
    if ((*(int **)(pbVar4 + 4) == (int *)0x0) || (*piVar7 != **(int **)(pbVar4 + 4))) {
      if (((*pbVar4 & 3) == 0) && ((**(ushort **)(iVar3 + 0x1c) & 0x100) == 0)) {
        fn_006dd3dc(piVar7,param_2,*(ushort **)(iVar3 + 0x1c),iVar5);
      }
      else {
        fn_006dde58(piVar7,param_2,*(undefined4 *)(iVar3 + 0x1c),iVar5);
      }
      puVar6 = (undefined4 *)*param_2;
      *puVar6 = 1;
      puVar6[1] = 0xf0111;
      puVar6[2] = 1;
      puVar6[3] = 0xf0110;
      *param_2 = puVar6 + 4;
      fn_006de414(*(undefined4 *)(iVar3 + 0x18),param_2,*(undefined4 *)(iVar3 + 0x1c));
      fn_006dd9cc(*(undefined4 *)(iVar3 + 0x18),param_2,*(undefined4 *)(iVar3 + 0x1c),iVar5);
    }
    else {
      iVar10 = *(int *)(iVar3 + 0x1c);
      uVar8 = fn_006f941c(param_2,piVar7 + 4);
      uVar8 = fn_006f941c(uVar8,iVar10 + 0x140);
      uVar8 = fn_006f941c(uVar8,iVar10 + 0x148);
      fn_006f941c(uVar8,iVar10 + 0x150);
      puVar11 = *(ushort **)(iVar3 + 0x1c);
      uVar8 = *(undefined4 *)(pbVar4 + 8);
      local_30 = (uint)((unsigned int)(local_30) >> 16) & 0xffff << 0x10;
      local_2c[0] = 0;
      fn_005e61d8(iVar3,&local_30,puVar11);
      fn_005e61d8(iVar3,local_2c,uVar8);
      *puVar11 = local_2c[0] | *puVar11;
      uVar1 = (ushort)local_30;
      fn_006de414(*(undefined4 *)(iVar3 + 0x18),param_2,*(undefined4 *)(iVar3 + 0x1c));
      fn_006dd9cc(*(undefined4 *)(iVar3 + 0x18),param_2,*(undefined4 *)(iVar3 + 0x1c),iVar5);
      **(ushort **)(iVar3 + 0x1c) = **(ushort **)(iVar3 + 0x1c) & ~(uVar1 ^ 0xfe00);
    }
    puVar6 = (undefined4 *)(iVar3 + 0x18);
    if ((**(byte **)(iVar3 + 0x1c) & 1) != 0) {
      fn_006de18c(*puVar6,param_2,*(byte **)(iVar3 + 0x1c),iVar5);
    }
    pbVar12 = *(byte **)(iVar3 + 0x1c);
    uVar13 = *puVar6;
    iVar10 = fn_005e19c8(iVar3 + 8);
    uVar8 = fn_006e9fcc(iVar3 + 8);
    if ((*pbVar12 & 0x10) == 0) {
      puVar9 = (undefined4 *)*param_2;
      *puVar9 = 0;
      puVar9[1] = 0x100e0;
      *param_2 = puVar9 + 2;
    }
    else {
      local_30 = (uint)*(ushort *)(iVar10 + 2);
      uVar2 = fn_006dd8f8(uVar13,param_2,pbVar12,uVar8);
      *(undefined2 *)(iVar10 + 2) = uVar2;
    }
    if (*(int *)(iVar3 + 0x48) != 0) {
      fn_00549f40(param_2,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar5 + 0xd0));
    }
    *(undefined4 *)(pbVar4 + 4) = *puVar6;
    *(undefined4 *)(pbVar4 + 8) = *(undefined4 *)(iVar3 + 0x1c);
  }
  return;
}



void fn_005e6268(int param_1,int *param_2,float *param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  **(int **)(param_1 + 4) = (int)param_2;
  if (param_2 != (int *)0x0) {
    uVar1 = (**(code **)(*param_2 + 4))();
    fn_006ea028(uVar1,param_4);
    local_20 = (int)*param_3;
    local_1c = (int)param_3[1];
    uStack_18 = VectorFloatToUnsigned(param_3[2] - *param_3,3);
    local_14 = VectorFloatToUnsigned(param_3[3] - param_3[1],3);
    uVar1 = fn_00145464(&local_20,*param_4);
    *param_4 = uVar1;
  }
  return;
}



void fn_005e61d8(undefined4 param_1,ushort *param_2,ushort *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  
  uVar1 = *param_3;
  uVar3 = 0x200;
  if ((~uVar1 & 0x200) != 0) {
    uVar3 = 0;
  }
  uVar4 = 0x400;
  if ((~uVar1 & 0x400) != 0) {
    uVar4 = 0;
  }
  uVar5 = 0x800;
  if ((~uVar1 & 0x800) != 0) {
    uVar5 = 0;
  }
  uVar6 = 0x1000;
  if ((~uVar1 & 0x1000) != 0) {
    uVar6 = 0;
  }
  uVar7 = 0x2000;
  if ((~uVar1 & 0x2000) != 0) {
    uVar7 = 0;
  }
  uVar8 = 0x4000;
  uVar2 = 0x8000;
  if ((~uVar1 & 0x4000) != 0) {
    uVar8 = 0;
  }
  if ((~uVar1 & 0x8000) != 0) {
    uVar2 = 0;
  }
  *param_2 = uVar2 | uVar8 | *param_2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7;
  return;
}


