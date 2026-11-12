#include "004a7bf4_004a86f8.h"



undefined4
fn_004a86f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_28;
  
  local_28 = param_4;
  iVar1 = fn_001249d0();
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(iVar1 + 0xc);
  }
  piVar3 = (int *)(iVar2 + 0x50);
  (**(code **)(*piVar3 + 8))();
  iVar2 = fn_00455e10(param_1);
  if (iVar2 == 0) {
    (**(code **)(*piVar3 + 0xc))(piVar3);
    return 0;
  }
  local_28 = *(undefined4 *)(param_1 + 0x44);
  fn_0015ef4c(param_2,&local_28,4);
  local_28 = 3;
  fn_0015ef4c(param_2,&local_28,4);
  fn_0015ef4c(param_2,param_4,4);
  fn_0015ef4c(param_2,param_5,4);
  if (param_1 != 0) {
    fn_0048ca64(param_1,param_3);
    fn_0048ca64(param_1,param_6);
  }
  DAT_008e9550 = fn_004a8144;
  (**(code **)(*piVar3 + 0xc))(piVar3);
  return 1;
}



void fn_004a83d8(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_110 [248];
  
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00101a1c(auStack_110,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_110);
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    fn_0046d70c(param_1);
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 != '\0') {
    return;
  }
  puVar3 = *(uint **)(*(int *)(param_2 + 0x60) + 4);
  if (puVar3 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4)
    goto LAB_004a8584;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar5 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
      *puVar3 = 0;
    }
    else {
      puVar6 = (uint *)(*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0xc) + *(int *)(param_1 + 0xc));
      *puVar3 = *puVar6 & 0xffffff | (uint)*(byte *)((int)puVar6 + 3) << 0x18;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0x60) + 8);
  if (iVar5 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (3 < (uint)(*(int *)(iVar4 + 0x10) - iVar7)) {
      puVar3 = (uint *)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + iVar7);
      uVar8 = *puVar3;
      bVar2 = *(byte *)((int)puVar3 + 3);
      *(int *)(param_1 + 0xc) = iVar7 + 4;
      uVar8 = uVar8 & 0xffffff | (uint)bVar2 << 0x18;
      if (uVar8 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar7 + 4))) {
        iVar4 = fn_004b72d8(param_1);
        fn_0015ef58(iVar5,*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + *(int *)(param_1 + 0xc),
                     uVar8,0xffffffff);
        uVar8 = *(int *)(param_1 + 0xc) + uVar8;
        if (uVar8 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
          *(uint *)(param_1 + 0xc) = uVar8;
        }
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
LAB_004a8684:
        if (*(int *)(*(int *)(param_2 + 0x60) + 0xc) == 0) {
          fn_00101a1c(auStack_110,fn_0047f300,0xf8,1);
          fn_00493490(param_1,auStack_110);
          fn_00100414(auStack_110,&LAB_0047f3b0,0xf8,1);
          return;
        }
        fn_00493490(param_1);
        return;
      }
    }
LAB_004a8584:
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  fn_00101a1c(auStack_110,fn_004b54dc,0x20,1);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (3 < (uint)(*(int *)(iVar5 + 0x10) - iVar4)) {
    puVar3 = (uint *)(*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x18) + iVar4);
    uVar8 = *puVar3;
    bVar2 = *(byte *)((int)puVar3 + 3);
    *(int *)(param_1 + 0xc) = iVar4 + 4;
    uVar8 = uVar8 & 0xffffff | (uint)bVar2 << 0x18;
    if (uVar8 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar4 + 4))) {
      iVar5 = fn_004b72d8(param_1);
      fn_0015ef58(auStack_110,
                   *(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x18) + *(int *)(param_1 + 0xc),uVar8,
                   0xffffffff);
      uVar8 = *(int *)(param_1 + 0xc) + uVar8;
      if (uVar8 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
        *(uint *)(param_1 + 0xc) = uVar8;
      }
      if (*(char *)(param_1 + 4) == '\0') {
        fn_00100414(auStack_110,fn_0014f480,0x20,1);
        goto LAB_004a8684;
      }
      goto LAB_004a8654;
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_004a8654:
  fn_00100414(auStack_110,fn_0014f480,0x20,1);
  return;
}



undefined4 * fn_004a834c(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  uint local_20 [3];
  undefined4 local_14 [2];
  
  fn_0074a528(param_2,local_20);
  local_20[0] = local_20[0] & 0x7fff;
  if ((local_20[0] == 0) || (6 < local_20[0])) {
    local_14[0] = 0x80010002;
    puVar1 = (undefined4 *)fn_004b8d4c(local_20,local_14);
  }
  else {
    puVar1 = &DAT_008e9548 + local_20[0];
    if (*(code **)(&DAT_008e9544 + local_20[0] * 4) != (code *)0x0) {
                    /* WARNING: Could not emulate address calculation at 0x004a83b0 */
                    /* WARNING: Treating indirect jump as call */
      puVar1 = (undefined4 *)(**(code **)(&DAT_008e9544 + local_20[0] * 4))(param_2,param_3);
      return puVar1;
    }
  }
  return puVar1;
}



void fn_004a8144(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_38 [36];
  
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00101a1c(auStack_38,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_38);
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    fn_0046d70c(param_1);
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 != '\0') {
    return;
  }
  iVar7 = *(int *)(*(int *)(param_2 + 0x60) + 4);
  if (iVar7 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    if (3 < (uint)(*(int *)(iVar3 + 0x10) - iVar5)) {
      puVar4 = (uint *)(*(int *)(iVar3 + 0x18) + *(int *)(iVar3 + 0xc) + iVar5);
      uVar6 = *puVar4;
      bVar2 = *(byte *)((int)puVar4 + 3);
      *(int *)(param_1 + 0xc) = iVar5 + 4;
      uVar6 = uVar6 & 0xffffff | (uint)bVar2 << 0x18;
      if (uVar6 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar5 + 4))) {
        iVar3 = fn_004b72d8(param_1);
        fn_0015ef58(iVar7,*(int *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x18) + *(int *)(param_1 + 0xc),
                     uVar6,0xffffffff);
        uVar6 = *(int *)(param_1 + 0xc) + uVar6;
        if (*(uint *)(*(int *)(param_1 + 8) + 0x10) < uVar6) {
          return;
        }
        *(uint *)(param_1 + 0xc) = uVar6;
        return;
      }
    }
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  fn_00101a1c(auStack_38,fn_004b54dc,0x20,1);
  iVar7 = *(int *)(param_1 + 8);
  iVar3 = *(int *)(param_1 + 0xc);
  if (3 < (uint)(*(int *)(iVar7 + 0x10) - iVar3)) {
    puVar4 = (uint *)(*(int *)(iVar7 + 0x18) + *(int *)(iVar7 + 0xc) + iVar3);
    uVar6 = *puVar4;
    bVar2 = *(byte *)((int)puVar4 + 3);
    *(int *)(param_1 + 0xc) = iVar3 + 4;
    uVar6 = uVar6 & 0xffffff | (uint)bVar2 << 0x18;
    if (uVar6 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar3 + 4))) {
      iVar7 = fn_004b72d8(param_1);
      fn_0015ef58(auStack_38,
                   *(int *)(iVar7 + 0xc) + *(int *)(iVar7 + 0x18) + *(int *)(param_1 + 0xc),uVar6,
                   0xffffffff);
      uVar6 = *(int *)(param_1 + 0xc) + uVar6;
      if (uVar6 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
        *(uint *)(param_1 + 0xc) = uVar6;
      }
      goto LAB_004a8324;
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_004a8324:
  fn_00100414(auStack_38,fn_0014f480,0x20,1);
  return;
}



void fn_004a7bf4(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_110 [248];
  
  if (**(int **)(param_2 + 0x60) == 0) {
    fn_00101a1c(auStack_110,fn_004b8d6c,0xc,1);
    fn_0046d70c(param_1,auStack_110);
    cVar1 = *(char *)(param_1 + 4);
  }
  else {
    fn_0046d70c(param_1);
    cVar1 = *(char *)(param_1 + 4);
  }
  if (cVar1 != '\0') {
    return;
  }
  puVar3 = *(uint **)(*(int *)(param_2 + 0x60) + 4);
  if (puVar3 == (uint *)0x0) {
    if ((uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - *(int *)(param_1 + 0xc)) < 4)
    goto LAB_004a7da0;
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
  }
  else {
    iVar5 = *(int *)(param_1 + 8);
    if ((uint)(*(int *)(iVar5 + 0x10) - *(int *)(param_1 + 0xc)) < 4) {
      *(undefined1 *)(param_1 + 4) = 1;
      *puVar3 = 0;
    }
    else {
      puVar6 = (uint *)(*(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0xc) + *(int *)(param_1 + 0xc));
      *puVar3 = *puVar6 & 0xffffff | (uint)*(byte *)((int)puVar6 + 3) << 0x18;
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 4;
    }
    if (*(char *)(param_1 + 4) != '\0') {
      return;
    }
  }
  iVar5 = *(int *)(*(int *)(param_2 + 0x60) + 8);
  if (iVar5 != 0) {
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = *(int *)(param_1 + 0xc);
    if (3 < (uint)(*(int *)(iVar4 + 0x10) - iVar7)) {
      puVar3 = (uint *)(*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + iVar7);
      uVar8 = *puVar3;
      bVar2 = *(byte *)((int)puVar3 + 3);
      *(int *)(param_1 + 0xc) = iVar7 + 4;
      uVar8 = uVar8 & 0xffffff | (uint)bVar2 << 0x18;
      if (uVar8 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar7 + 4))) {
        iVar4 = fn_004b72d8(param_1);
        fn_0015ef58(iVar5,*(int *)(iVar4 + 0xc) + *(int *)(iVar4 + 0x18) + *(int *)(param_1 + 0xc),
                     uVar8,0xffffffff);
        uVar8 = *(int *)(param_1 + 0xc) + uVar8;
        if (uVar8 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
          *(uint *)(param_1 + 0xc) = uVar8;
        }
        if (*(char *)(param_1 + 4) != '\0') {
          return;
        }
LAB_004a7ea0:
        if (*(int *)(*(int *)(param_2 + 0x60) + 0xc) == 0) {
          fn_00101a1c(auStack_110,fn_0047f300,0xf8,1);
          fn_00493490(param_1,auStack_110);
          if (*(char *)(param_1 + 4) != '\0') {
            fn_00100414(auStack_110,&LAB_0047f3b0,0xf8,1);
            return;
          }
          fn_00100414(auStack_110,&LAB_0047f3b0,0xf8,1);
        }
        else {
          fn_00493490(param_1);
          if (*(char *)(param_1 + 4) != '\0') {
            return;
          }
        }
        if (*(int *)(*(int *)(param_2 + 0x60) + 0x10) == 0) {
          fn_00101a1c(auStack_110,fn_0013d40c,8,1);
          fn_0045f7f0(param_1,auStack_110);
          fn_00100414(auStack_110,fn_00170f54,8,1);
          return;
        }
        fn_0045f7f0(param_1);
        return;
      }
    }
LAB_004a7da0:
    *(undefined1 *)(param_1 + 4) = 1;
    return;
  }
  fn_00101a1c(auStack_110,fn_004b54dc,0x20,1);
  iVar5 = *(int *)(param_1 + 8);
  iVar4 = *(int *)(param_1 + 0xc);
  if (3 < (uint)(*(int *)(iVar5 + 0x10) - iVar4)) {
    puVar3 = (uint *)(*(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x18) + iVar4);
    uVar8 = *puVar3;
    bVar2 = *(byte *)((int)puVar3 + 3);
    *(int *)(param_1 + 0xc) = iVar4 + 4;
    uVar8 = uVar8 & 0xffffff | (uint)bVar2 << 0x18;
    if (uVar8 <= (uint)(*(int *)(*(int *)(param_1 + 8) + 0x10) - (iVar4 + 4))) {
      iVar5 = fn_004b72d8(param_1);
      fn_0015ef58(auStack_110,
                   *(int *)(iVar5 + 0xc) + *(int *)(iVar5 + 0x18) + *(int *)(param_1 + 0xc),uVar8,
                   0xffffffff);
      uVar8 = *(int *)(param_1 + 0xc) + uVar8;
      if (uVar8 <= *(uint *)(*(int *)(param_1 + 8) + 0x10)) {
        *(uint *)(param_1 + 0xc) = uVar8;
      }
      if (*(char *)(param_1 + 4) == '\0') {
        fn_00100414(auStack_110,fn_0014f480,0x20,1);
        goto LAB_004a7ea0;
      }
      goto LAB_004a7e70;
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_004a7e70:
  fn_00100414(auStack_110,fn_0014f480,0x20,1);
  return;
}


