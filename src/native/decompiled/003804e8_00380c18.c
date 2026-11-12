#include "003804e8_00380c18.h"



void fn_00380c18(int *param_1,int *param_2)

{
  int iVar1;
  
  if ((char)param_1[0x3f] != '\0') {
    if (*param_2 == 1) {
      iVar1 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (*(char *)((int)param_1 + 0xfd) == '\x01' && iVar1 == 1) {
        if (*(char *)((int)param_1 + 0xe5) == '\0') {
          (**(code **)(*param_1 + 0x1b8))(param_1,1);
          *(undefined1 *)((int)param_1 + 0xe5) = 1;
        }
        else {
          (**(code **)(*param_1 + 0x1b8))(param_1,0);
          *(undefined1 *)((int)param_1 + 0xe5) = 0;
        }
        fn_0068ab44(param_1,0x100094b);
                    /* WARNING: Could not recover jumptable at 0x00380d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*param_1 + 0x1b4))(param_1);
        return;
      }
      iVar1 = param_2[3];
      if ((char)param_1[0x3f] != '\0') {
        if (param_1[0x3d] == iVar1) {
          iVar1 = 0;
        }
        param_1[0x3d] = iVar1;
        if ((iVar1 != 0) && (iVar1 == param_1[0x3e])) {
          param_1[0x3e] = 0;
          fn_0037feb4(param_1,1);
        }
        fn_0037feb4(param_1,0);
        fn_0068ab44(param_1,0x100094b);
        return;
      }
    }
    else if (*param_2 != 4) {
      fn_0068ab44(param_1,0x100094d);
      return;
    }
  }
  return;
}



void fn_00380bb0(int *param_1)

{
  if (*(char *)((int)param_1 + 0xe5) == '\x01') {
    (**(code **)(*param_1 + 0x1b8))(param_1,0);
    *(undefined1 *)((int)param_1 + 0xe5) = 0;
    fn_0068ab44(param_1,0x100094c);
  }
  else {
    fn_002c1f84(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00380bdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x1b4))(param_1);
  return;
}



void fn_00380aec(int *param_1,int param_2)

{
  int iVar1;
  
  if (*(char *)((int)param_1 + 0xe5) != '\x01') {
    fn_002c1d14(param_1);
                    /* WARNING: Could not recover jumptable at 0x00380b18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x1b4))(param_1);
    return;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if ((char)param_1[0x3f] == '\0') {
    return;
  }
  if (param_1[0x3e] == iVar1) {
    iVar1 = 0;
  }
  param_1[0x3e] = iVar1;
  if ((iVar1 != 0) && (iVar1 == param_1[0x3d])) {
    param_1[0x3d] = 0;
    fn_0037feb4(param_1,0);
  }
  fn_0037feb4(param_1,1);
  fn_0068ab44(param_1,0x100094b);
  return;
}



undefined4 fn_00380ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_003804e8();
  if ((iVar1 != 0) || (iVar1 = fn_003804e8(param_1,param_3,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



undefined4 fn_00380a50(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = fn_003804e8();
  if ((iVar1 != 0) || (iVar1 = fn_003804e8(param_1,param_3,param_2), uVar2 = 0, iVar1 != 0)) {
    uVar2 = 1;
  }
  return uVar2;
}



void fn_00380914(undefined4 param_1,byte param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint local_28 [2];
  
  piVar2 = (int *)fn_002c11d0(param_1,2,0);
  piVar8 = piVar2 + 1;
  local_28[1] = 0x20;
  local_28[0] = piVar2[2] - *piVar8 >> 2;
  puVar3 = local_28;
  if (local_28[0] < 0x20) {
    puVar3 = local_28 + 1;
  }
  uVar11 = *puVar3;
  puVar4 = (undefined4 *)fn_00100fc6(uVar11 << 2,0);
  puVar6 = (undefined4 *)piVar2[2];
  puVar10 = puVar4;
  for (puVar7 = (undefined4 *)*piVar8; puVar7 != puVar6; puVar7 = puVar7 + 1) {
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = *puVar7;
    }
    puVar10 = puVar10 + 1;
  }
  iVar9 = 0;
  puVar7 = puVar4 + (piVar2[2] - *piVar8 >> 2);
  iVar1 = (int)puVar7 - (int)puVar4 >> 2;
  if (0 < iVar1) {
    do {
      iVar5 = (**(code **)(*piVar2 + 0xc))(piVar2,iVar9);
      iVar9 = iVar9 + 1;
      *(byte *)(iVar5 + 0x35) = param_2 ^ 1;
    } while (iVar9 < iVar1);
  }
  puVar10 = puVar4;
  if (puVar7 < puVar4) {
    do {
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar7);
  }
  fn_002feef8(puVar4,(int)(uVar11 * 4) >> 2,0);
  return;
}



void fn_003808f4(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  
  iVar1 = fn_002c11d0(param_1,1,0);
  *(undefined1 *)(*(int *)(iVar1 + 0x10) + 0xe7) = param_2;
  return;
}



void fn_003808c0(void)

{
  int iVar1;
  
  iVar1 = fn_00430b08();
  *(undefined4 **)(iVar1 + 0x60) = &DAT_008f9cf4;
  *(undefined4 **)(iVar1 + 100) = &DAT_008f9cf4;
  *(undefined1 *)(iVar1 + 0x68) = 1;
  *(undefined1 *)(iVar1 + 0x69) = 1;
  *(undefined1 *)(iVar1 + 0x6a) = 1;
  *(undefined1 *)(iVar1 + 0x6b) = 0;
  return;
}



void fn_003807f4(int param_1,int param_2,int param_3,int param_4)

{
  if (*(char *)(param_1 + 0xfc) != '\0') {
    if (param_4 == 0) {
      if (*(int *)(param_1 + 0xf4) == param_2) {
        param_2 = 0;
      }
      *(int *)(param_1 + 0xf4) = param_2;
      if ((param_2 != 0) && (param_2 == *(int *)(param_1 + 0xf8))) {
        *(undefined4 *)(param_1 + 0xf8) = 0;
        fn_0037feb4(param_1,1);
      }
    }
    else {
      if (*(int *)(param_1 + 0xf8) == param_2) {
        param_2 = 0;
      }
      *(int *)(param_1 + 0xf8) = param_2;
      if ((param_2 != 0) && (param_2 == *(int *)(param_1 + 0xf4))) {
        *(undefined4 *)(param_1 + 0xf4) = 0;
        fn_0037feb4(param_1,0);
      }
    }
    fn_0037feb4(param_1,param_4);
    if (param_3 != 0) {
      fn_0068ab44(param_1,0x100094b);
      return;
    }
  }
  return;
}



void fn_003807a8(undefined4 param_1,byte param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)fn_002c11d0(param_1,4,0);
  uVar3 = 0;
  do {
    iVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,uVar3);
    uVar3 = uVar3 + 1;
    *(byte *)(iVar2 + 0x35) = param_2 ^ 1;
  } while (uVar3 < 0xc);
  return;
}



void fn_003805c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  char cVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  ulonglong uVar7;
  
  uVar7 = (ulonglong)param_5;
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x47] + 0x46) = 0;
    uVar2 = (uint)*(byte *)(param_1 + 0x48);
    iVar4 = 0;
    if (uVar2 == 1) {
      iVar5 = 1;
    }
    else {
      iVar5 = 2;
    }
    do {
      if (iVar4 != 0) {
        uVar2 = param_1[0x46];
      }
      if (iVar4 == 0 || uVar2 == 0) {
        fn_002b20a4(param_1[0x45],0);
        uVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x45] + 0x1c));
      }
      else {
        fn_002b20a4(uVar2,0);
        uVar2 = (**(code **)(*param_1 + 0x168))(param_1,*(undefined4 *)(param_1[0x46] + 0x1c));
      }
      param_5 = (uint)uVar7;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  fn_004309e8(param_1,param_2,param_3,param_4,param_5);
  if (param_1[0x19] == 7) {
    *(undefined1 *)(param_1[0x47] + 0x46) = 1;
    uVar3 = param_3;
    if ((char)param_1[0x48] == '\x01') {
      uVar3 = 0;
    }
    (**(code **)(*(int *)param_1[0x47] + 0x2c))((int *)param_1[0x47],uVar3,0);
    fn_00414d6c(param_1,param_3,1);
  }
  if (5 < param_2) {
    (**(code **)(*param_1 + 400))(param_1,0);
  }
  cVar1 = (char)param_1[0x3f];
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = *(char *)((int)param_1 + 0xe5);
  }
  if ((bVar6 && cVar1 == '\0') && (iVar4 = param_1[0x3c], iVar4 != 0)) {
    *(bool *)(iVar4 + 0x7f) = param_2 == 1;
    fn_0031ef00(iVar4,0,0);
    return;
  }
  return;
}



undefined4 fn_003804e8(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_10 [4];
  undefined1 auStack_c [4];
  
  if ((((*(char *)(param_1 + 0x109) != '\0') && (*param_2 == 4)) && (param_2[3] != 0)) &&
     (iVar1 = *param_3, (iVar1 == 1 || iVar1 == 2) || iVar1 == 5)) {
    uVar2 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
    fn_0020bbc4(auStack_10,uVar2);
    iVar1 = fn_006bf184(auStack_c);
    if (((iVar1 != 0) && (iVar1 = fn_00154ac8(0x463), iVar1 == 0)) ||
       ((iVar1 = fn_006bf34c(auStack_c), iVar1 != 0 && (iVar1 = fn_00154ac8(0x19), iVar1 == 0))))
    {
      return 1;
    }
  }
  return 0;
}


