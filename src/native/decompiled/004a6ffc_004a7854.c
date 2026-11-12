#include "004a6ffc_004a7854.h"



void fn_004a7854(int param_1,int param_2)

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
    goto LAB_004a7a00;
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
LAB_004a7b00:
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
LAB_004a7a00:
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
        goto LAB_004a7b00;
      }
      goto LAB_004a7ad0;
    }
  }
  *(undefined1 *)(param_1 + 4) = 1;
LAB_004a7ad0:
  fn_00100414(auStack_110,fn_0014f480,0x20,1);
  return;
}



undefined4 fn_004a749c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  undefined *puStack_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 local_28;
  
  uVar5 = 0;
  if (*(int *)(param_1 + 0x21c) != 0) {
    do {
      if ((*(char *)(param_1 + 0x121) != '\0') || (*(char *)(param_1 + 0x40) == '\0')) {
        return 0;
      }
      puStack_48 = &DAT_008528bc;
      local_40 = 0;
      local_44 = 0x200;
      iVar1 = *(int *)(param_1 + 0x19c);
      *(undefined4 *)(iVar1 + 0x10) = 0;
      *(undefined4 *)(iVar1 + 0x18) = 0;
      iVar1 = *(int *)(param_1 + 0x19c);
      if (param_2 == 0) {
        local_28 = 0;
        iVar2 = fn_004b6080(param_1,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc),
                             *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18),&local_28,&puStack_48,0
                            );
      }
      else {
        local_28 = 0;
        iVar2 = fn_004b6080(param_1,*(int *)(iVar1 + 0x18) + *(int *)(iVar1 + 0xc),
                             *(int *)(iVar1 + 0x14) - *(int *)(iVar1 + 0x18),&local_28,&puStack_48,1
                            );
      }
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined4 *)(iVar1 + 0x10) = local_28;
      uVar3 = *(undefined4 *)(param_1 + 0x19c);
      (**(code **)(*(int *)(param_1 + 0x16c) + 8))();
      piVar4 = (int *)fn_0048892c(param_1 + 0x120);
      iVar1 = 0;
      if (piVar4 != (int *)0x0) {
        iVar1 = *piVar4;
      }
      if (piVar4 != (int *)0x0 && iVar1 != 0) {
        fn_004b5540(iVar1,uVar3);
        piVar4[2] = local_44;
        piVar4[3] = local_40;
        piVar4[4] = iStack_3c;
        piVar4[5] = iStack_38;
        piVar4[6] = iStack_34;
        piVar4[7] = iStack_30;
        piVar4[8] = iStack_2c;
      }
      (**(code **)(*(int *)(param_1 + 0x16c) + 0xc))((int *)(param_1 + 0x16c));
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 0x21c));
  }
  return 1;
}



undefined4 fn_004a7300(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 extraout_r1;
  byte *pbVar3;
  undefined4 *puVar4;
  int *piVar5;
  uint uVar6;
  
  uVar6 = 0;
  if (*(int *)(param_1 + 0x220) != 0) {
    piVar5 = (int *)(param_1 + 0x1ec);
    do {
      if (*(char *)(param_1 + 0x1a0) != '\x01') {
        return 0;
      }
      if (*(char *)(param_1 + 0x40) == '\0') {
        return 0;
      }
      pbVar3 = (byte *)(param_1 + 0x1a0);
      (**(code **)(*piVar5 + 8))(piVar5);
      puVar4 = (undefined4 *)0x0;
      if (*(int *)(param_1 + 0x1bc) == 0) {
LAB_004a747c:
        bVar1 = 1;
      }
      else {
        puVar4 = *(undefined4 **)(*(int *)(param_1 + 0x1a8) + *(int *)(param_1 + 0x1b8) * 4);
        iVar2 = *(int *)(param_1 + 0x1b8) + 1;
        *(int *)(param_1 + 0x1b8) = iVar2;
        fn_00169f1c(iVar2,*(undefined4 *)(param_1 + 0x1c0));
        iVar2 = *(int *)(param_1 + 0x1bc) + -1;
        *(int *)(param_1 + 0x1bc) = iVar2;
        bVar1 = 0;
        *(undefined4 *)(param_1 + 0x1b8) = extraout_r1;
        if (iVar2 == 0) goto LAB_004a747c;
      }
      *pbVar3 = bVar1 ^ 1;
      *(bool *)(param_1 + 0x1a1) = *(int *)(param_1 + 0x1bc) == *(int *)(param_1 + 0x1c0);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      if (puVar4 != (undefined4 *)0x0) {
        pbVar3 = (byte *)*puVar4;
      }
      if (puVar4 == (undefined4 *)0x0 || pbVar3 == (byte *)0x0) {
        return 0;
      }
      bVar1 = pbVar3[0x1d];
      if (bVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),bVar1);
      }
      iVar2 = fn_004b5f90(param_1,*(int *)(pbVar3 + 0x18) + *(int *)(pbVar3 + 0xc),
                           *(undefined4 *)(pbVar3 + 0x10),puVar4 + 1);
      if (bVar1 != 0) {
        (**(code **)(**(int **)(param_1 + 0x3c) + 0x28))(*(int **)(param_1 + 0x3c),0x40);
      }
      (**(code **)(*piVar5 + 8))(piVar5);
      fn_00488a7c(param_1 + 0x1a0,puVar4);
      (**(code **)(*piVar5 + 0xc))(piVar5);
      if (iVar2 != 0) {
        return 0;
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < *(uint *)(param_1 + 0x220));
  }
  return 1;
}



undefined4 fn_004a7120(int param_1,undefined4 param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  int extraout_r1_00;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  
  piVar8 = (int *)(param_1 + 0x16c);
  (**(code **)(*(int *)(param_1 + 0x16c) + 8))(piVar8);
  piVar7 = (int *)0x0;
  if (*(int *)(param_1 + 0x13c) != 0) {
    piVar7 = *(int **)(*(int *)(param_1 + 0x128) + *(int *)(param_1 + 0x138) * 4);
    iVar2 = *(int *)(param_1 + 0x138) + 1;
    *(int *)(param_1 + 0x138) = iVar2;
    fn_00169f1c(iVar2,*(undefined4 *)(param_1 + 0x140));
    iVar2 = *(int *)(param_1 + 0x13c) + -1;
    *(int *)(param_1 + 0x13c) = iVar2;
    bVar1 = 0;
    *(undefined4 *)(param_1 + 0x138) = extraout_r1;
    if (iVar2 != 0) goto LAB_004a718c;
  }
  bVar1 = 1;
LAB_004a718c:
  *(byte *)(param_1 + 0x120) = bVar1 ^ 1;
  *(bool *)(param_1 + 0x121) = *(int *)(param_1 + 0x13c) == *(int *)(param_1 + 0x140);
  (**(code **)(*piVar8 + 0xc))(piVar8);
  iVar2 = extraout_r1_00;
  if (piVar7 != (int *)0x0) {
    iVar2 = *piVar7;
  }
  if (piVar7 != (int *)0x0 && iVar2 != 0) {
    fn_004b5540(param_2);
    iVar2 = piVar7[3];
    iVar4 = piVar7[4];
    iVar5 = piVar7[5];
    iVar6 = piVar7[6];
    iVar9 = piVar7[7];
    iVar10 = piVar7[8];
    *(int *)(param_3 + 4) = piVar7[2];
    *(int *)(param_3 + 8) = iVar2;
    *(int *)(param_3 + 0xc) = iVar4;
    *(int *)(param_3 + 0x10) = iVar5;
    *(int *)(param_3 + 0x14) = iVar6;
    *(int *)(param_3 + 0x18) = iVar9;
    *(int *)(param_3 + 0x1c) = iVar10;
    (**(code **)(*piVar8 + 8))(piVar8);
    fn_00488a7c(param_1 + 0x120,piVar7);
    (**(code **)(*piVar8 + 0xc))(piVar8);
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}



void fn_004a6ffc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 uStack_10;
  
  puVar2 = &uStack_10;
  uStack_10 = param_4;
  puVar1 = (undefined1 *)fn_0048cbf8(param_2,0);
  if (puVar1 != (undefined1 *)0x0) {
    puVar2 = (undefined4 *)puVar1;
  }
  fn_00454da8(param_1,puVar2);
  return;
}


