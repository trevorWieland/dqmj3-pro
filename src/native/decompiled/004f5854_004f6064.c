#include "004f5854_004f6064.h"



longlong fn_004f6064(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint extraout_r1;
  uint uVar5;
  bool bVar6;
  longlong lVar7;
  
  uVar5 = (uint)*(byte *)(DAT_008bf4e0 + 99);
  if (0xb < uVar5) {
    iVar3 = DAT_008bf4e0;
    if (DAT_008c0630 != 0) {
      iVar3 = 8;
    }
    return CONCAT44(iVar3,&DAT_e0a14827);
  }
  uVar1 = (uint)*(byte *)(param_2 + 5);
  uVar4 = param_1[0xf] + 1U & 0xff;
  if (uVar1 < uVar4) {
    bVar6 = uVar1 != uVar5;
    if (bVar6) {
      uVar4 = param_1[0x10];
    }
    if (uVar5 < uVar1) {
      uVar1 = uVar1 - 1;
    }
    if (bVar6) {
      iVar3 = uVar4 + uVar1 * 0x68;
      if (*(char *)(param_2 + 4) == '\0') {
        iVar2 = (**(code **)(*param_1 + 0xc))(param_1);
        lVar7 = fn_0051783c(iVar3,param_1[4],iVar2 << 0x10 | 1,uVar5,*(undefined1 *)(param_2 + 5));
        return lVar7;
      }
      if (*(char *)(param_2 + 4) == '\x01') {
        fn_005175e4(iVar3);
        return (ulonglong)extraout_r1 << 0x20;
      }
      if (DAT_008c0630 != 0) {
        uVar4 = 8;
      }
    }
    else if (DAT_008c0630 != 0) {
      uVar4 = 8;
    }
  }
  else if (DAT_008c0630 != 0) {
    uVar4 = 8;
  }
  return CONCAT44(uVar4,0xe0e14826);
}



undefined4 fn_004f5f68(int param_1,undefined1 param_2)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  
  if (((*(int *)(DAT_008bf4cc + 0xa4) == 0) || (0xb < *(byte *)(DAT_008bf4e0 + 99))) ||
     (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) != *(byte *)(DAT_008bf4e0 + 99))) {
    return 0;
  }
  uVar2 = 0;
  **(undefined1 **)(param_1 + 0x4c) = 0x41;
  *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = param_2;
  if (*(int *)(param_1 + 0x3c) != 0) {
    do {
      iVar1 = fn_006db038(*(int *)(param_1 + 0x40) + uVar2 * 0x68);
      if (((iVar1 != 0) &&
          (iVar1 = fn_00517cf0(*(int *)(param_1 + 0x40) + uVar2 * 0x68,
                                *(undefined4 *)(param_1 + 0x4c),2), -1 < iVar1)) &&
         (DAT_008bf4a0 != 0)) {
        iVar1 = *(int *)(param_1 + 0x40);
        uVar3 = fn_004eea84(DAT_008bf4a0,7);
        fn_004f15b4((int)uVar3,(int)((ulonglong)uVar3 >> 0x20),
                     *(undefined4 *)(iVar1 + uVar2 * 0x68 + 0x1c),0);
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x3c));
  }
  return 1;
}



undefined4 fn_004f5e18(int param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  if (*(int *)(DAT_008bf4cc + 0xa4) != 0) {
    bVar1 = *(byte *)(DAT_008bf4e0 + 99);
    if (((0xb < bVar1) || (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) != bVar1)) ||
       (puVar2 = (undefined4 *)fn_0050b080(DAT_008bf4cc), puVar2 == (undefined4 *)0x0)) {
      return 0;
    }
    uStack_1c = *(undefined4 *)(param_1 + 0xc);
    iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),&uStack_1c,puVar2 + 1,2,0);
    if (iVar3 - 0x100000U < 0x3ff00000) {
      **(undefined1 **)(param_1 + 0x4c) = 0x11;
      *(byte *)(*(int *)(param_1 + 0x4c) + 1) = bVar1;
      fn_001694d4(iVar3,*(undefined4 *)(param_1 + 0x4c));
      iVar3 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      if (-1 < iVar3) {
        local_18 = *(undefined4 *)(param_1 + 0xc);
        iVar3 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),&local_18,puVar2 + 1,2,1);
        if (iVar3 - 0x100000U < 0x3ff00000) {
          fn_001694d4(iVar3,*(undefined4 *)(param_1 + 0x4c));
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
        }
      }
      return 1;
    }
    (**(code **)*puVar2)(puVar2,*(code **)*puVar2,0x80000000,0);
  }
  return 0;
}



void fn_004f5db4(undefined4 param_1,undefined1 *param_2)

{
  int iVar1;
  undefined4 local_10;
  
  iVar1 = *(int *)(DAT_008bf4cc + 0xa4);
  *param_2 = 1;
  param_2[1] = *(undefined1 *)(iVar1 + 0x14);
  param_2[3] = 0;
  param_2[2] = 0;
  local_10 = 0;
  fn_006d6e58(iVar1 + 4,param_2 + 4,&local_10,8);
  return;
}



int fn_004f5cb0(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if ((((*(int *)(DAT_008bf4cc + 0xa4) != 0) &&
       (uVar3 = (uint)*(byte *)(DAT_008bf4e0 + 99), uVar3 < 0xc)) &&
      (*(byte *)(*(int *)(DAT_008bf4cc + 0xa4) + 0x14) == uVar3)) &&
     (iVar1 = fn_0050b080(DAT_008bf4cc,param_2), iVar1 != 0)) {
    if (uVar3 <= param_2) {
      param_2 = param_2 - 1;
    }
    iVar4 = *(int *)(param_1 + 0x40) + param_2 * 0x68;
    iVar1 = fn_006db038(iVar4);
    if (iVar1 != 0) {
      **(undefined1 **)(param_1 + 0x4c) = 0x44;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = param_3;
      iVar1 = fn_00517cf0(iVar4,*(undefined4 *)(param_1 + 0x4c),2);
      if ((-1 < iVar1) && (DAT_008bf4a0 != 0)) {
        uVar2 = *(undefined4 *)(iVar4 + 0x1c);
        uVar5 = fn_004eea84(DAT_008bf4a0,7);
        fn_004f15b4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar2,0);
      }
      return (iVar1 >> 0x1f) + 1;
    }
  }
  return 0;
}



void fn_004f5b58(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 auStack_34 [3];
  undefined4 local_28;
  undefined1 auStack_24 [4];
  
  iVar2 = *(int *)(DAT_008bf4cc + 0xa4);
  if (iVar2 - 0x100000U < 0x3ff00000) {
    local_28 = *(undefined4 *)(param_1 + 0xc);
    iVar1 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                      (*(int **)(param_1 + 0x10),&local_28,param_2 + 1,0xc,0);
    if (iVar1 - 0x100000U < 0x3ff00000) {
      **(undefined1 **)(param_1 + 0x4c) = 8;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = *(undefined1 *)(iVar2 + 0x14);
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 3) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 2) = 0;
      fn_006d6e58(iVar2 + 4,*(int *)(param_1 + 0x4c) + 4,auStack_24,*(int *)(param_1 + 0x48) + -4);
      fn_001694d4(iVar1,*(undefined4 *)(param_1 + 0x4c));
      iVar2 = fn_0050a490(*(undefined4 *)(param_1 + 0x10));
      if (-1 < iVar2) {
        auStack_34[0] = *(undefined4 *)(param_1 + 0xc);
        iVar2 = (**(code **)(**(int **)(param_1 + 0x10) + 0x18))
                          (*(int **)(param_1 + 0x10),auStack_34,param_2 + 1,0xc,1);
        if (iVar2 - 0x100000U < 0x3ff00000) {
          fn_001694d4(iVar2,*(undefined4 *)(param_1 + 0x4c));
          fn_0050a490(*(undefined4 *)(param_1 + 0x10));
          return;
        }
      }
    }
    else {
      (**(code **)*param_2)(param_2,*(code **)*param_2,0,1);
    }
  }
  return;
}



int fn_004f5a9c(int param_1,uint param_2,undefined1 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  
  if (*(byte *)(DAT_008bf4e0 + 99) < 0xc) {
    if (*(byte *)(DAT_008bf4e0 + 99) <= param_2) {
      param_2 = param_2 - 1;
    }
    iVar4 = *(int *)(param_1 + 0x40) + param_2 * 0x68;
    iVar2 = fn_006db038(iVar4);
    iVar1 = 0;
    if (iVar2 != 0) {
      **(undefined1 **)(param_1 + 0x4c) = 0x21;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 1) = param_3;
      iVar1 = fn_00517cf0(iVar4,*(undefined4 *)(param_1 + 0x4c),2);
      if ((-1 < iVar1) && (DAT_008bf4a0 != 0)) {
        uVar3 = *(undefined4 *)(iVar4 + 0x1c);
        uVar5 = fn_004eea84(DAT_008bf4a0,7);
        fn_004f15b4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar3,0);
      }
      iVar1 = (iVar1 >> 0x1f) + 1;
    }
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}



void fn_004f5854(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  undefined8 uVar9;
  int local_18;
  
  local_18 = param_4;
  iVar2 = fn_0050b080(DAT_008bf4cc,*(undefined1 *)(DAT_008bf4e0 + 0x62));
  iVar4 = 0x3ff00000;
  if ((iVar2 - 0x100000U < 0x3ff00000) &&
     (iVar6 = *(int *)(DAT_008bf4cc + 0xa4), iVar6 - 0x100000U < 0x3ff00000)) {
    uVar3 = (uint)*(byte *)(iVar2 + 0x14);
    bVar1 = *(byte *)(iVar6 + 0x14);
    uVar7 = (uint)bVar1;
    if ((uVar3 < 0xc) && (uVar7 < 0xc)) {
      bVar8 = uVar3 != uVar7;
      if (bVar8) {
        iVar4 = *(int *)(param_1 + 0x40);
      }
      if (uVar7 < uVar3) {
        uVar3 = uVar3 - 1;
      }
      if (bVar8) {
        iVar4 = iVar4 + uVar3 * 0x68;
        iVar2 = fn_006db038(iVar4);
        if (iVar2 != 0) {
          **(undefined1 **)(param_1 + 0x4c) = 4;
          *(byte *)(*(int *)(param_1 + 0x4c) + 1) = bVar1;
          *(undefined1 *)(*(int *)(param_1 + 0x4c) + 3) = 0;
          *(undefined1 *)(*(int *)(param_1 + 0x4c) + 2) = 0;
          local_18 = 0;
          fn_006d6e58(iVar6 + 4,*(int *)(param_1 + 0x4c) + 4,&local_18,
                       *(int *)(param_1 + 0x48) + -4);
          iVar2 = fn_00517cf0(iVar4,*(undefined4 *)(param_1 + 0x4c),local_18 + 4);
          if ((-1 < iVar2) && (DAT_008bf4a0 != 0)) {
            uVar5 = *(undefined4 *)(iVar4 + 0x1c);
            uVar9 = fn_004eea84(DAT_008bf4a0,7);
            fn_004f15b4((int)uVar9,(int)((ulonglong)uVar9 >> 0x20),uVar5,0);
          }
        }
      }
    }
  }
  return;
}


