#include "0015af10_0015b374.h"



undefined * fn_0015b374(undefined4 param_1,char param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined **ppuVar5;
  
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_001754ac(uVar1,param_2);
  iVar3 = fn_0016c0d0();
  iVar4 = fn_0016c2b8((int)param_2);
  if (iVar2 == 0) {
    iVar4 = iVar4 + 4;
  }
  uVar1 = fn_00182994(DAT_008977e4);
  iVar2 = fn_00174bac(uVar1,param_2);
  if (iVar2 == 1) {
    return (&PTR_s_camera_101_ALLYN4_00_007bb930)[iVar3 * 8 + iVar4];
  }
  if (iVar2 == 2) {
    ppuVar5 = &PTR_s_camera_101_ALLYM4_00_007bba30;
  }
  else {
    ppuVar5 = &PTR_s_camera_101_ALLYS4_00_007bb830;
  }
  return ppuVar5[iVar3 * 8 + iVar4];
}



undefined4 * fn_0015b1c0(void)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  
  puVar1 = (undefined4 *)fn_0016a50c();
  *puVar1 = &DAT_0081e58c;
  puVar2 = (undefined1 *)fn_00145b00(0x128,&DAT_00812c8c);
  if (puVar2 == (undefined1 *)0x0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    *puVar2 = 0;
    puVar2[1] = 0;
    puVar2[2] = 0;
    puVar2[3] = 0;
    *(undefined4 *)(puVar2 + 4) = 0;
    *(undefined4 *)(puVar2 + 8) = 0;
    *(undefined4 *)(puVar2 + 0xc) = 0;
    *(undefined4 *)(puVar2 + 0x10) = 0;
    *(undefined4 *)(puVar2 + 0x14) = 0;
    *(undefined4 *)(puVar2 + 0x18) = 0;
    puVar2[0x1c] = 0;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    *(undefined4 *)(puVar2 + 0x30) = 0;
    *(undefined4 *)(puVar2 + 0x34) = 0;
    *(undefined4 *)(puVar2 + 0x38) = 0;
    *(undefined4 *)(puVar2 + 0x3c) = 0;
    *(undefined4 *)(puVar2 + 0xa0) = 0;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x40) = *puVar3;
    *(undefined4 *)(puVar2 + 0x44) = uVar5;
    *(undefined4 *)(puVar2 + 0x48) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x4c) = *puVar3;
    *(undefined4 *)(puVar2 + 0x50) = uVar5;
    *(undefined4 *)(puVar2 + 0x54) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x58) = *puVar3;
    *(undefined4 *)(puVar2 + 0x5c) = uVar5;
    *(undefined4 *)(puVar2 + 0x60) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 100) = *puVar3;
    *(undefined4 *)(puVar2 + 0x68) = uVar5;
    *(undefined4 *)(puVar2 + 0x6c) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x70) = *puVar3;
    *(undefined4 *)(puVar2 + 0x74) = uVar5;
    *(undefined4 *)(puVar2 + 0x78) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x7c) = *puVar3;
    *(undefined4 *)(puVar2 + 0x80) = uVar5;
    *(undefined4 *)(puVar2 + 0x84) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x88) = *puVar3;
    *(undefined4 *)(puVar2 + 0x8c) = uVar5;
    *(undefined4 *)(puVar2 + 0x90) = uVar7;
    puVar3 = (undefined4 *)fn_00171634();
    uVar5 = puVar3[1];
    uVar7 = puVar3[2];
    *(undefined4 *)(puVar2 + 0x94) = *puVar3;
    *(undefined4 *)(puVar2 + 0x98) = uVar5;
    *(undefined4 *)(puVar2 + 0x9c) = uVar7;
    *(undefined4 *)(puVar2 + 0x20) = 0;
    *(undefined4 *)(puVar2 + 0x28) = 0;
    *(undefined4 *)(puVar2 + 0x24) = 0;
    *(undefined4 *)(puVar2 + 0x2c) = 0;
    uVar6 = *(uint *)(puVar2 + 0x34);
    uVar8 = *(uint *)(puVar2 + 0x38);
    if (uVar6 != uVar8) {
      uVar4 = uVar6;
      if (uVar8 <= uVar6) {
        do {
          uVar4 = uVar4 + 4;
        } while (uVar4 != uVar8);
      }
      *(uint *)(puVar2 + 0x38) = uVar8 - (uVar8 - uVar6 & 0xfffffffc);
    }
    *(undefined4 *)(puVar2 + 0xa4) = 0;
    *(undefined4 *)(puVar2 + 0xb4) = 0;
    *(undefined4 *)(puVar2 + 0xa8) = 0;
    *(undefined4 *)(puVar2 + 0xb8) = 0;
    *(undefined4 *)(puVar2 + 0xac) = 0;
    *(undefined4 *)(puVar2 + 0xbc) = 0;
    *(undefined4 *)(puVar2 + 0xb0) = 0;
    *(undefined4 *)(puVar2 + 0xc0) = 0;
    fn_00301f50(puVar2 + 0xc4,0x61);
  }
  puVar1[1] = puVar2;
  return puVar1;
}



void fn_0015b0f8(undefined4 param_1)

{
  fn_0016bad4(DAT_00897800,param_1);
  return;
}



void fn_0015b0f0(undefined4 param_1,undefined4 param_2)

{
  fn_0016bad4(DAT_00897800,param_2);
  return;
}



void fn_0015b0dc(undefined4 param_1)

{
  fn_0016ba84(DAT_00897800,param_1);
  return;
}



void fn_0015b0c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  fn_0015b054();
  uVar1 = fn_0016a82c(param_2);
  fn_0016ba84(DAT_00897800,uVar1);
  return;
}



void fn_0015b064(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_30 [36];
  
  uVar1 = DAT_00898210;
  fn_0017d96c(auStack_30,0x20,0x1f,(char *)&DAT_0015b0b4,param_1);
  fn_0016ba34(DAT_00897800,uVar1,auStack_30,0);
  return;
}



void fn_0015b054(void)

{
  fn_0016ba78(DAT_00897800);
  return;
}



undefined4 fn_0015af18(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int local_28;
  int local_24;
  undefined4 local_20;
  
  iVar1 = fn_00164a34();
  if (iVar1 != 0 && param_3 != 0) {
    local_28 = 0;
    local_24 = 0;
    local_20 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    iVar1 = local_24 - local_28 >> 0x1f;
    if ((((local_24 - local_28) / 0xc + iVar1 != iVar1) &&
        (iVar1 = fn_00145b00(0x24,&DAT_00812c8c), iVar1 != 0)) &&
       (iVar1 = fn_0015c954(iVar1,param_2,&local_28,param_4), iVar1 != 0)) {
      if (param_4 < (uint)((local_24 - local_28) / 0xc)) {
        fn_0015aabc(param_1,param_2);
      }
      else {
        fn_0015aabc(param_1,param_2);
      }
      uVar2 = fn_0015a130(param_1,iVar1);
      fn_00168b28(&local_28);
      return uVar2;
    }
    fn_00168b28(&local_28);
  }
  return 0xffffffff;
}



undefined4 fn_0015af10(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  
  iVar2 = fn_00164a34();
  if (iVar2 != 0 && param_3 != 0) {
    iStack_28 = 0;
    iStack_24 = 0;
    uStack_20 = 0;
    fn_00163edc(param_1,*(undefined4 *)(*(int *)(param_1 + 0x94) + *(int *)(param_1 + 0xbc) * 4));
    iVar2 = iStack_24 - iStack_28 >> 0x1f;
    if ((((iStack_24 - iStack_28) / 0xc + iVar2 != iVar2) &&
        (iVar2 = fn_00145b00(0x24,&DAT_00812c8c), iVar2 != 0)) &&
       (iVar2 = fn_0015c954(iVar2,param_2,&iStack_28,0), iVar2 != 0)) {
      iVar1 = iStack_24 - iStack_28 >> 0x1f;
      if ((iStack_24 - iStack_28) / 0xc + iVar1 == iVar1) {
        fn_0015aabc(param_1,param_2);
      }
      else {
        fn_0015aabc(param_1,param_2);
      }
      uVar3 = fn_0015a130(param_1,iVar2);
      fn_00168b28(&iStack_28);
      return uVar3;
    }
    fn_00168b28(&iStack_28);
  }
  return 0xffffffff;
}


