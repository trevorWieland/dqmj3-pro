#include "00197fe0_00198578.h"



undefined4
fn_00198578(int param_1,int *param_2,uint *param_3,uint *param_4,undefined4 param_5,int param_6)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  
  iVar1 = *param_2;
  if (iVar1 == 0x8000040) {
    if ((*param_3 & 0x4000000) != 0) {
      if (*param_3 == 0x5000004) {
        puVar2 = (uint *)(int)(float)param_3[1];
      }
      else {
        puVar2 = (uint *)param_3[1];
      }
      bVar9 = puVar2 == (uint *)0x0;
      if (-1 < (int)puVar2) {
        param_3 = *(uint **)(param_2[1] + 0x1c);
        bVar9 = param_3 == puVar2;
      }
      if (bVar9 || (-1 >= (int)puVar2 || (int)param_3 < (int)puVar2)) {
        return 0;
      }
      puVar2 = (uint *)(*(int *)(param_2[1] + 0x18) + (int)puVar2 * 8);
      uVar3 = *puVar2;
      uVar7 = puVar2[1];
      if (uVar3 == 0x8010000) {
        uVar3 = *(uint *)(uVar7 + 0xc);
        uVar7 = *(uint *)(uVar7 + 0x10);
      }
      uVar6 = *param_4;
      *param_4 = uVar3;
      piVar5 = (int *)param_4[1];
      param_4[1] = uVar7;
      if ((uVar3 & 0x8000000) != 0) {
        *(int *)(uVar7 + 4) = *(int *)(uVar7 + 4) + 1;
      }
      if ((uVar6 & 0x8000000) == 0) {
        return 1;
      }
      iVar1 = piVar5[1];
      piVar5[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar5 + 8))();
        return 1;
      }
      return 1;
    }
  }
  else if (iVar1 == 0xa000020) {
    iVar1 = fn_001a1dc8(param_2[1],param_3,param_4);
    if (iVar1 != 0) {
      return 1;
    }
  }
  else if (iVar1 == 0xa008000) {
    iVar8 = param_2[1];
    iVar1 = fn_001a1dc8(*(undefined4 *)(*(int *)(iVar8 + 0x1c) + 0x18),param_3,param_4);
    if (iVar1 != 0) {
      piVar5 = (int *)param_4[1];
      if (((uint)piVar5 & 0x2000000) == 0) {
        fn_0019e864(param_4,*(int *)(*(int *)(iVar8 + 0x1c) + 0x2c) +
                             ((uint)piVar5 & 0xffffff) * 0x10);
        return 1;
      }
      iVar8 = iVar8 + ((uint)piVar5 & 0xffffff) * 8;
      uVar3 = *(uint *)(iVar8 + 0x2c);
      uVar7 = *(uint *)(iVar8 + 0x30);
      if (uVar3 == 0x8010000) {
        uVar3 = *(uint *)(uVar7 + 0xc);
        uVar7 = *(uint *)(uVar7 + 0x10);
      }
      param_4[1] = uVar7;
      uVar7 = *param_4;
      *param_4 = uVar3;
      if ((uVar3 & 0x8000000) != 0) {
        *(int *)(param_4[1] + 4) = *(int *)(param_4[1] + 4) + 1;
      }
      if ((uVar7 & 0x8000000) == 0) {
        return 1;
      }
      iVar1 = piVar5[1];
      piVar5[1] = iVar1 + -1;
      if (iVar1 + -1 == 0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        return 1;
      }
      return 1;
    }
  }
  iVar1 = fn_00197b18(param_1,param_2,param_3,param_4,param_5);
  if (iVar1 != 0) {
    return 1;
  }
  if (param_6 != 0) {
    if ((*(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x34) * 8 + 4) == param_2[1]) &&
       (*(int *)(*(int *)(param_1 + 0x18) + *(int *)(param_1 + 0x34) * 8) == *param_2)) {
      uVar4 = fn_001a1dc8(*(undefined4 *)(param_1 + 0x3c),param_3,param_4);
      return uVar4;
    }
  }
  return 0;
}



undefined4 fn_00198418(int param_1,int param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint *puVar5;
  uint uVar6;
  uint local_20;
  int *local_1c;
  
  local_1c = (int *)fn_00190c50(param_2);
  local_20 = 0xa008000;
  if (local_1c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    fn_00146590();
  }
  local_1c[1] = local_1c[1] + 1;
  fn_0019e864(param_3,&local_20);
  if (((local_20 & 0x8000000) != 0) &&
     (iVar2 = local_1c[1], local_1c[1] = iVar2 + -1, iVar2 + -1 == 0)) {
    (**(code **)(*local_1c + 8))();
  }
  iVar2 = fn_001a1dc8(*(undefined4 *)(param_2 + 0x18),*(int *)(param_1 + 0x8c) + 0x3c,param_4);
  if (iVar2 == 0) {
    puVar3 = &DAT_008c06e8;
  }
  else {
    piVar4 = (int *)param_4[1];
    if (((uint)piVar4 & 0x2000000) != 0) {
      puVar5 = (uint *)(*(int *)(param_2 + 0x20) + ((uint)piVar4 & 0xffffff) * 0x10);
      uVar1 = *puVar5;
      uVar6 = puVar5[1];
      if (uVar1 == 0x8010000) {
        uVar1 = *(uint *)(uVar6 + 0xc);
        uVar6 = *(uint *)(uVar6 + 0x10);
      }
      param_4[1] = uVar6;
      uVar6 = *param_4;
      *param_4 = uVar1;
      if ((uVar1 & 0x8000000) != 0) {
        *(int *)(param_4[1] + 4) = *(int *)(param_4[1] + 4) + 1;
      }
      if ((uVar6 & 0x8000000) == 0) {
        return 1;
      }
      iVar2 = piVar4[1];
      piVar4[1] = iVar2 + -1;
      if (iVar2 + -1 == 0) {
        (**(code **)(*piVar4 + 8))(piVar4);
        return 1;
      }
      return 1;
    }
    puVar3 = (undefined4 *)(*(int *)(param_2 + 0x2c) + ((uint)piVar4 & 0xffffff) * 0x10);
  }
  fn_0019e864(param_4,puVar3);
  return 1;
}



void fn_00198320(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint local_18;
  int *local_14;
  
  if (*(int *)(param_1 + 0x48) != 0x1000001) {
    local_18 = 0x1000001;
    local_14 = (int *)0x0;
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_1 + 0x38);
    iVar1 = *(int *)(param_1 + 0x30);
    *(int *)(param_1 + 0x30) = iVar1 + 1;
    fn_0019e864(*(int *)(param_1 + 0x18) + iVar1 * 8,param_2);
    fn_0017ffac(param_1,param_1 + 0x48,2,*(int *)(param_1 + 0x30) + -2,&local_18,0);
    iVar1 = 0;
    do {
      iVar2 = *(int *)(param_1 + 0x30) + -1;
      *(int *)(param_1 + 0x30) = iVar2;
      fn_0019e864(*(int *)(param_1 + 0x18) + iVar2 * 8,&DAT_008c06e8);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 2);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar1 = local_14[1], local_14[1] = iVar1 + -1, iVar1 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
  }
  return;
}



uint fn_00197fe0(int param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18;
  int *local_14;
  
  local_18 = *param_2;
  if (local_18 == 0x5000002) {
    uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0x33);
    fn_001028d4(uVar2,&DAT_00198130,param_2[1]);
    uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
    uVar1 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar2,0xffffffff);
    return uVar1;
  }
  if (local_18 == 0x5000004) {
    uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0x33);
    fn_001028d4(uVar2,(char *)&DAT_00198134,SUB84((double)(float)param_2[1],0),
                 (int)((ulonglong)(double)(float)param_2[1] >> 0x20));
    uVar2 = fn_001a36d4(*(undefined4 *)(param_1 + 0x8c),0xffffffff);
    uVar1 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar2,0xffffffff);
    return uVar1;
  }
  if (local_18 == 0x8000010) {
    uVar1 = param_2[1];
  }
  else {
    local_14 = (int *)param_2[1];
    if ((local_18 & 0x8000000) != 0) {
      local_14[1] = local_14[1] + 1;
    }
    uVar2 = fn_00191f20(&local_18);
    uVar1 = fn_0019ba68(*(undefined4 *)(param_1 + 0x8c),uVar2,0xffffffff);
    if (((local_18 & 0x8000000) != 0) &&
       (iVar3 = local_14[1], local_14[1] = iVar3 + -1, iVar3 + -1 == 0)) {
      (**(code **)(*local_14 + 8))();
    }
  }
  return uVar1;
}


