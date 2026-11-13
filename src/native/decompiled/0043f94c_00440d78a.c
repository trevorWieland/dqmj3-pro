#include "0043f94c_00440d78a.h"



void fn_004400a0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xc4);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895c24) goto LAB_004400e8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004400e8:
  iVar7 = puVar1[2];
  if (*(int *)(param_1 + 0x70) != iVar7) {
    uVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x6c));
    uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402ac);
    fn_00688c04(uVar4,iVar7,0);
    if (*(int *)(DAT_0089783c + 0x30) < iVar7) {
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402bc);
      fn_00190d50(uVar4,&DAT_00440304);
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402d0);
      fn_00190d50(uVar4,&DAT_00440304);
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402e4);
      fn_00190d50(uVar4,&DAT_00440304);
      uVar3 = fn_001827b0(uVar3,(char *)&DAT_004402f4);
      fn_00190d50(uVar3,&DAT_00440304);
    }
    else {
      iVar5 = *(int *)(DAT_0089783c + 0x2c);
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402bc);
      fn_00190d50(uVar4,iVar5 + iVar7 * 0x128 + -0x104);
      uVar8 = *(uint *)(*(int *)(DAT_0089783c + 0x2c) + iVar7 * 0x128 + -0x124);
      iVar5 = (int)((longlong)(int)uVar8 * -0x6e5d4c3b + ((ulonglong)uVar8 << 0x20) >> 0x20);
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402d0);
      fn_00688c04(uVar4,(iVar5 >> 10) - (iVar5 >> 0x1f),0);
      iVar5 = (int)((longlong)(int)uVar8 * -0x77777777 + ((ulonglong)uVar8 << 0x20) >> 0x20);
      uVar6 = (iVar5 >> 4) - (iVar5 >> 0x1f);
      iVar5 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
      uVar4 = fn_001827b0(uVar3,(char *)&DAT_004402e4);
      fn_00688c04(uVar4,uVar6 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x3c,2);
      iVar5 = (int)((longlong)(int)uVar8 * -0x77777777 + ((ulonglong)uVar8 << 0x20) >> 0x20);
      uVar6 = (uVar8 + ((iVar5 >> 4) - (iVar5 >> 0x1f)) * -0x1e) * 100;
      iVar5 = (int)((longlong)(int)uVar6 * -0x77777777 + ((ulonglong)uVar6 << 0x20) >> 0x20);
      uVar3 = fn_001827b0(uVar3,(char *)&DAT_004402f4);
      fn_00688c04(uVar3,(iVar5 >> 4) - (iVar5 >> 0x1f),2);
    }
    *(int *)(param_1 + 0x70) = iVar7;
  }
  return;
}



void fn_00440070(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x74,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_00440308(iVar1,param_1);
  return;
}



undefined4 fn_0043ffb8(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 100),
                       L"rom:/data/Layout/menu/wifi_ranking_gcup/upper/gcup_replay_data.arc",
                       &DAT_0044003c,1,1);
  *(undefined4 *)(param_1 + 0x68) = uVar1;
  uVar1 = fn_001480d0(*(undefined4 *)(param_1 + 100),uVar1,(char *)&DAT_00440048,&DAT_00440044,0
                       ,1,0);
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  uVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 100),uVar1);
  iVar2 = DAT_0089783c + 0xaa;
  uVar1 = fn_001827b0(uVar1,(char *)&DAT_00440064);
  fn_00190d50(uVar1,iVar2);
  return 1;
}



void fn_0043ff30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0x70,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_0043ff64(iVar1,param_1);
  return;
}



void fn_0043ff64(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0083d6e0;
  puVar1[0x19] = *(undefined4 *)(param_2 + 8);
  return;
}



void fn_0043f94c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_0089715c) goto LAB_0043f994;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0043f994:
  if (*(char *)(puVar2 + 0x42) == '\0') {
    return;
  }
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_0089715c) goto LAB_0043f9d4;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0043f9d4:
  *(undefined1 *)(puVar2 + 0x42) = 0;
  fn_0043f3d4(param_1);
  return;
}


