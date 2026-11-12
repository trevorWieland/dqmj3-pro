#include "00152a3c_001920f4.h"



void fn_001920f4(int param_1)

{
  if (param_1 == 0) {
    return;
  }
  fn_0015e5c0(*DAT_008bf604);
  return;
}



void fn_0019204c(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  iVar1 = fn_001b0de8(0);
  if (iVar1 < 1) {
    iVar1 = 0;
  }
  else {
    iVar1 = fn_00192124(iVar1,0x20);
    fn_001b0de8(iVar1,param_2,param_3);
  }
  fn_002397d4(param_1,iVar1,param_4);
  if (param_4 != 0x10000) {
    fn_001467fc();
    fn_00146578();
    fn_0011b34c();
    fn_0011b5fc();
    fn_0012b574();
    fn_00146578();
  }
  if (iVar1 == 0) {
    return;
  }
  fn_0015e5c0(*DAT_008bf604);
  return;
}



void fn_0018d16c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x148);
  iVar1 = 0;
  if (*(int *)(iVar2 + 0x78) != 0) {
    if (*(int *)(iVar2 + 0x7c) == 0) {
      iVar1 = 1;
    }
    else if (*(int *)(iVar2 + 0x80) == 0) {
      iVar1 = 2;
    }
    else if (*(int *)(iVar2 + 0x84) == 0) {
      iVar1 = 3;
    }
    else if (*(int *)(iVar2 + 0x88) == 0) {
      iVar1 = 4;
    }
    else {
      iVar1 = -1;
    }
  }
  *(undefined4 *)(iVar2 + iVar1 * 4 + 0x78) = param_2;
  return;
}



undefined4 * fn_0018a794(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 4);
  if (iVar3 != 0) {
    iVar1 = fn_0019bbb0(param_2);
    iVar1 = (**(code **)(*DAT_0089a918 + 8))
                      (DAT_0089a918,iVar1 * 4 + 0x38,4,*(code **)(*DAT_0089a918 + 8),param_4);
    if (iVar1 != 0) {
      puVar2 = (undefined4 *)fn_0019530c();
      *puVar2 = &DAT_00857ac0;
      puVar2[0xc] = 0;
      puVar2[0xd] = 0;
      fn_0054ab60(puVar2,iVar3,*(undefined4 *)(param_1 + 0x24));
      fn_0017d948(param_1 + 4,param_1 + 8,puVar2 + 1);
      fn_00194c7c(puVar2,param_2,*(undefined4 *)(param_1 + 0x14),iVar1 + 0x38,param_3);
      return puVar2;
    }
  }
  return (undefined4 *)0x0;
}



void fn_0017d90c(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  *(int **)(iVar1 + 4) = piVar2;
  *piVar2 = iVar1;
  *param_1 = *param_1 + -1;
  *param_2 = 0;
  param_2[1] = 0;
  return;
}



void fn_001707b4(int *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[2];
  param_1[2] = iVar2 + -1;
  if (iVar2 + -1 != 0) {
    return;
  }
  param_1[1] = 0;
  do {
    iVar3 = *param_1;
    iVar2 = -iVar3;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = iVar2;
  if (iVar3 != -1 && 0 < iVar2) {
    fn_00147e54(DAT_008c0334,param_1,0,1,0,0);
  }
  return;
}



void fn_0016aae0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = fn_00145b00(0x1c,&DAT_00812c8c);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = fn_0014a674(iVar1,param_2,param_3);
  }
  iVar1 = *(int *)(iVar2 + 4);
  if (iVar1 != 0) {
    iVar4 = *(int *)(iVar1 + 0xc);
    iVar3 = 0;
    if (iVar4 == iVar2) {
      *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(iVar2 + 8);
    }
    else {
      iVar3 = iVar4;
      for (iVar4 = *(int *)(iVar4 + 8); iVar4 != iVar2; iVar4 = *(int *)(iVar4 + 8)) {
        iVar3 = iVar4;
      }
      *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 8);
    }
    if (*(int *)(iVar1 + 0x10) == iVar2) {
      *(int *)(iVar1 + 0x10) = iVar3;
    }
    *(undefined4 *)(iVar2 + 8) = 0;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  *(int *)(iVar2 + 4) = param_1 + 0x24;
  iVar1 = *(int *)(param_1 + 0x30);
  if (iVar1 == 0) {
    *(int *)(param_1 + 0x34) = iVar2;
    *(int *)(param_1 + 0x30) = iVar2;
    return;
  }
  iVar3 = *(int *)(iVar2 + 0x14);
  if (*(int *)(*(int *)(param_1 + 0x34) + 0x14) < iVar3) {
    if (iVar3 <= *(int *)(iVar1 + 0x14)) {
      iVar4 = *(int *)(*(int *)(iVar1 + 8) + 0x14);
      while (iVar3 <= iVar4) {
        iVar1 = *(int *)(iVar1 + 8);
        iVar4 = *(int *)(*(int *)(iVar1 + 8) + 0x14);
      }
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar1 + 8);
      *(int *)(iVar1 + 8) = iVar2;
      return;
    }
    *(int *)(iVar2 + 8) = iVar1;
    *(int *)(param_1 + 0x30) = iVar2;
  }
  else {
    *(int *)(*(int *)(param_1 + 0x34) + 8) = iVar2;
    *(int *)(param_1 + 0x34) = iVar2;
  }
  return;
}



void fn_0016a888(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898204;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0016a8d8,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0016a82c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898218;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0016a87c,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0016a7c4(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898208;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0016a814,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



undefined4 fn_0016a6d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_r7;
  undefined4 local_20 [3];
  
  iVar1 = fn_00164a34();
  if (((iVar1 != 0) && (local_20[0] = param_2, iVar1 = fn_00164a34(param_1,param_2), iVar1 != 0))
     && (iVar1 = fn_0017484c(DAT_008977e4), iVar1 != 0)) {
    iVar1 = fn_00165bb4(iVar1,local_20);
    if (iVar1 != 0) {
      unaff_r7 = *(int *)(iVar1 + 4);
    }
    if (((iVar1 != 0 && unaff_r7 != 0) && (iVar1 = fn_00145b00(0x14,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_0015ca84(iVar1,param_2,param_3,unaff_r7), iVar1 != 0)) {
      uVar2 = fn_0015a130(param_1);
      return uVar2;
    }
  }
  return 0xffffffff;
}



undefined4 * fn_0015ece0(int param_1)

{
  undefined4 *puVar1;
  
  if (DAT_008b63b4 == (code *)0x0) {
    puVar1 = (undefined4 *)fn_002fecec((param_1 + 3U & 0xfffffffc) + 8);
  }
  else {
    puVar1 = (undefined4 *)(*DAT_008b63b4)();
  }
  *puVar1 = DAT_008b63b8;
  return puVar1 + 2;
}



void fn_00154ac8(undefined4 param_1)

{
  fn_001560b4(*(undefined4 *)(DAT_00897804 + 8),param_1);
  return;
}



void fn_00152a3c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  if (param_1 == 0x10000) {
    fn_00143a58(param_2);
    return;
  }
  if (param_1 == 0x20000) {
    iVar1 = *DAT_0089a514;
  }
  else {
    if (param_1 != 0x30000) {
      return;
    }
    iVar1 = DAT_0089a514[1];
  }
  piVar4 = *(int **)(iVar1 + 4);
  iVar1 = *piVar4;
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(int *)(iVar1 + 0x10) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  if (*(int *)(iVar1 + 4) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 4) + 8) = *(undefined4 *)(iVar1 + 8);
  }
  if (*(int *)(iVar1 + 8) != 0) {
    *(undefined4 *)(*(int *)(iVar1 + 8) + 4) = *(undefined4 *)(iVar1 + 4);
  }
  if (*piVar4 == iVar1) {
    *piVar4 = *(int *)(iVar1 + 4);
  }
  if (piVar4[1] == iVar1) {
    piVar4[1] = *(int *)(iVar1 + 8);
  }
  *(undefined4 *)(iVar1 + 8) = 0;
  *(undefined4 *)(iVar1 + 4) = 0;
  iVar3 = *(int *)(iVar1 + 0x14);
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar1 = *(int *)(iVar1 + 0x10);
  fn_00143d68(piVar4);
  fn_00143b98(piVar4,iVar1 - iVar2,iVar3 + iVar2);
  return;
}


