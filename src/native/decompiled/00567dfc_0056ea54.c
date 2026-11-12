#include "00567dfc_0056ea54.h"



void fn_0056ea54(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_28;
  int local_24 [2];
  
  iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x34))();
  iVar3 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x38))();
  if (iVar2 != 0 || iVar3 != 0) {
    local_24[0] = 0;
    local_28 = 0;
    (**(code **)(**(int **)(param_1 + 0xf0) + 0x30))(*(int **)(param_1 + 0xf0),local_24,&local_28);
    if (iVar2 == 0) {
      local_28 = 0;
    }
    else {
      local_28 = 3;
    }
    if (local_24[0] == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 0x124);
      uVar1 = uVar4;
      if (uVar4 == 0) {
        uVar1 = local_28;
      }
      if (uVar4 == 0 && uVar1 == 3) {
        local_28 = 2;
      }
      fn_0056e838(param_1,0,local_28);
      fn_0068ab44(param_1,0x100094e);
    }
    else if (local_24[0] == 1) {
      if (iVar2 != 0) {
        iVar2 = *(int *)(param_1 + 0xa4) + -1;
        *(int *)(param_1 + 0xa8) = iVar2;
        *(int *)(*(int *)(param_1 + 0xb0) + 0x24) = iVar2;
        *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
        fn_00290100(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa8));
      }
      if (iVar3 != 0) {
        *(undefined4 *)(param_1 + 0xa8) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xb0) + 0x24) = 0;
        *(undefined4 *)(*(int *)(param_1 + 0xb4) + 0x3c) = *(undefined4 *)(param_1 + 0xa8);
        fn_00290100(*(undefined4 *)(param_1 + 0xd4),*(undefined4 *)(param_1 + 0xa8));
      }
      local_24[0] = 3;
      if (*(int *)(param_1 + 0xf8) - 1U < 3) {
        local_24[0] = *(int *)(param_1 + 0xf8);
      }
      fn_0068ab44(param_1,0x100094e);
      fn_0056e838(param_1,local_24[0],local_28);
    }
    fn_002b20a4(*(undefined4 *)(param_1 + 0xbc),0);
    fn_002b20a4(*(undefined4 *)(param_1 + 0xc0),0);
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0x54))();
  if (-1 < iVar2) {
    fn_0056e578(param_1,iVar2);
    fn_0025e314(*(undefined4 *)(param_1 + 200),1);
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0xa8))();
  if (-1 < iVar2) {
    fn_0068ab44(param_1,0x100094e);
    fn_0056e578(param_1,1);
    return;
  }
  iVar2 = (**(code **)(**(int **)(param_1 + 0xf0) + 0xb8))();
  if (iVar2 < 0) {
    fn_0056d658(param_1,*(undefined4 *)(param_1 + 0xf0),1);
    return;
  }
  uVar5 = fn_0022f750((char *)&DAT_0056fa1c);
  uVar6 = fn_0022eefc(0x6a5,0);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar5,uVar6);
  fn_00689bd0(param_1,0x49,0);
  return;
}



void fn_0056b270(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = fn_006e9d4c(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2));
  iVar2 = fn_0034516c();
  if (iVar2 != 0) {
    fn_00230374(uVar1);
    fn_0015b0dc();
    fn_0015b0dc(iVar2);
    uVar3 = fn_0022eefc(0x3a5,0);
    *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
    fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
    fn_00689bd0(param_1,0x48,0);
    return;
  }
  iVar2 = fn_00154ac8(0x33);
  if ((iVar2 == 0) || ((byte)(&DAT_00893f49)[(uint)*(byte *)(param_1 + 0xe2) * 2] == uVar1)) {
    iVar2 = fn_006ba284(param_1);
    fn_005daecc(*(undefined4 *)(param_1 + 0xe4),*(undefined1 *)(param_1 + 0xe2),iVar2 * 9 + param_2
                );
    fn_006899f4(param_1,0x6d,0);
    fn_0068ab44(param_1,0x100094b);
    return;
  }
  uVar3 = fn_0022eefc(0x3b6,0);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0x100094d;
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar3,1,0,1,1,0,0,1);
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0056943c(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_2,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar1)();
    do {
      bVar3 = puVar1 != &DAT_00892ee4;
      if (bVar3) {
        puVar1 = (undefined4 *)*puVar1;
      }
    } while (bVar3 && puVar1 != (undefined4 *)0x0);
  }
  if (param_3 == 0) {
    uVar2 = fn_0022f750((char *)&DAT_005694d0);
    fn_00168a24(param_1,uVar2,auStack_14);
    return;
  }
  fn_00168a24(param_1,&DAT_005694cc,auStack_18);
  return;
}



undefined4 fn_00568f84(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_0039a744();
  uVar1 = fn_0022f750(&DAT_00568fc0);
  fn_0022cd58(param_1,uVar1);
  uVar1 = fn_0022f750((char *)&DAT_00568fc8);
  fn_0039ae28(param_1,uVar1);
  return 1;
}



undefined4 fn_00568ba8(undefined4 param_1)

{
  undefined4 uVar1;
  
  fn_0039a744();
  uVar1 = fn_0022f750((char *)&DAT_00568be4);
  fn_0022cd58(param_1,uVar1);
  uVar1 = fn_0022f750((char *)&DAT_00568bec);
  fn_0039ae28(param_1,uVar1);
  return 1;
}



void fn_00568b44(undefined4 param_1,undefined4 param_2,byte *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  iVar1 = fn_002fdf94(param_1,param_2,3);
  puVar2 = (undefined4 *)fn_003f2f54(iVar1 + 0x58);
  puVar2[6] = 0;
  *puVar2 = &DAT_008400d4;
  puVar2[-0x16] = &DAT_0084009c;
  if (param_3 == (byte *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)*param_3;
  }
  puVar2[6] = uVar3;
  return;
}



void fn_0056835c(undefined4 param_1,undefined4 param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x14);
  puVar1[0x18] = 0xffffffff;
  *puVar1 = &DAT_00840074;
  *(undefined1 *)(puVar1 + 0x16) = *param_3;
  puVar1[0x17] = *(undefined4 *)(param_3 + 4);
  return;
}



void fn_0056828c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x26);
  *puVar1 = &DAT_0084004c;
  return;
}



void fn_00568218(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002fdf94(param_1,param_2,0x2e);
  *puVar1 = &DAT_00840024;
  return;
}



void fn_00567f0c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float local_30;
  float fStack_2c;
  float local_28;
  
  if ((*(byte *)(*(int *)(param_1 + 0x14) + 0x39c) & 8) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    uVar4 = *(int *)(param_1 + 0x18) + 1;
    *(uint *)(param_1 + 0x18) = uVar4;
    if (0x3c < uVar4) goto LAB_00568004;
  }
  iVar1 = fn_006b0d10(*(int *)(param_1 + 0x14),0);
  if (iVar1 != 0) {
    fVar10 = 0.0;
    iVar2 = fn_006bd500(param_1,iVar1,0);
    if (iVar2 == 0) {
      fn_001c7764(*(undefined4 *)(param_1 + 0x14),(float *)(iVar1 + 0x20));
      iVar2 = *(int *)(param_1 + 0x14);
      fVar6 = *(float *)(iVar1 + 0x20) - *(float *)(iVar2 + 0x20);
      fVar9 = *(float *)(iVar1 + 0x24) - *(float *)(iVar2 + 0x24);
      fVar8 = *(float *)(iVar1 + 0x28) - *(float *)(iVar2 + 0x28);
      *(float *)(param_1 + 0x30) = fVar6;
      *(float *)(param_1 + 0x34) = fVar9;
      *(float *)(param_1 + 0x38) = fVar8;
      if ((fVar6 != fVar10 || (fVar6 != fVar10 || fVar9 != fVar10)) ||
         (fVar7 = fVar10, fVar5 = fVar10, fVar8 != fVar10)) {
        fVar5 = 1.0 / SQRT(fVar6 * fVar6 + fVar9 * fVar9 + fVar8 * fVar8);
        fVar10 = fVar9 * fVar5;
        *(float *)(param_1 + 0x30) = fVar6 * fVar5;
        *(float *)(param_1 + 0x34) = fVar10;
        *(float *)(param_1 + 0x38) = fVar8 * fVar5;
        fVar7 = *(float *)(param_1 + 0x38);
        fVar5 = fVar6 * fVar5;
      }
      *(float *)(param_1 + 0x30) = fVar5;
      *(float *)(param_1 + 0x34) = fVar10;
      *(float *)(param_1 + 0x38) = fVar7;
      piVar3 = *(int **)(param_1 + 0x14);
      (**(code **)(*piVar3 + 0x94))();
      local_30 = *(float *)(param_1 + 0x30) * fVar10;
      fStack_2c = *(float *)(param_1 + 0x34) * fVar10;
      local_28 = *(float *)(param_1 + 0x38) * fVar10;
      (**(code **)(*piVar3 + 0x38))(piVar3,&local_30,1);
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),1,4,0);
      return;
    }
    fn_00215e38(*(undefined4 *)(param_1 + 0x14),6,1);
    iVar1 = fn_00214640(iVar1,*(undefined4 *)(*(int *)(param_1 + 0x14) + 0x13c),2,0x25);
    if (iVar1 != 0) {
      fn_00216784(*(undefined4 *)(param_1 + 0x14));
      (**(code **)(**(int **)(param_1 + 0x14) + 0x44))(*(int **)(param_1 + 0x14),0x17,4,0);
      fn_0069eed8(*(undefined4 *)(*(int *)(param_1 + 0x14) + 0xe4),0);
      *(undefined4 *)(param_1 + 0xc) = 5;
      *(undefined4 *)(param_1 + 0x10) = 0;
      return;
    }
  }
LAB_00568004:
  fn_0021718c(param_1,1,0x3c);
  return;
}



void fn_00567dfc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_00390794(param_1,param_2,0xd);
  *puVar1 = &DAT_0083ffec;
  return;
}


