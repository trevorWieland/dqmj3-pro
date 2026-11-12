#include "0057148c_005718fc.h"



void fn_005718fc(int param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  uint local_2c;
  uint uStack_28;
  
  piVar7 = (int *)(param_1 + 0x14);
  uVar1 = fn_002febd8(param_2);
  puVar8 = &DAT_008f9cf8;
  puVar2 = (undefined1 *)*piVar7;
  if (uVar1 == 0) {
    piVar3 = (int *)(puVar2 + -0xc);
    iVar6 = *piVar3;
    if (iVar6 != 0) {
      if ((puVar2 != &DAT_008f9d04) &&
         ((iVar6 == -1 || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))))) {
        fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
      }
      *piVar7 = (int)&DAT_008f9d04;
      return;
    }
    *(undefined4 *)(puVar2 + -4) = 0;
    puVar2 = (undefined1 *)*piVar7;
  }
  else {
    if (((1 < *(int *)(puVar2 + -0xc) + 1U) || (*(uint *)(puVar2 + -8) < uVar1)) ||
       ((param_2 != (undefined1 *)0x0 &&
        ((puVar2 <= param_2 && (param_2 < puVar2 + *(int *)(puVar2 + -4))))))) {
      uVar4 = *(uint *)(puVar2 + -4);
      local_2c = uVar4 + (uVar4 >> 1) + (uVar4 >> 3);
      if (local_2c < uVar4 + 0x80) {
        local_2c = uVar4 + 0x80;
      }
      puVar5 = &uStack_28;
      if (uVar1 <= local_2c) {
        puVar5 = &local_2c;
      }
      uStack_28 = uVar1;
      uVar4 = *puVar5;
      if (0xfffffff1 < uVar4) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar4,0xfffffff1);
      }
      if (uVar4 < uVar1) {
        fn_002ff628(8,&DAT_008c7615,&DAT_008c7615,uVar1,uVar4);
      }
      if (uVar4 != 0) {
        puVar8 = (undefined4 *)fn_00100fc6(uVar4 + 0xe,0);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = 0;
          puVar8[1] = 0;
          puVar8[2] = 0;
        }
        puVar2 = (undefined1 *)((int)puVar8 + uVar1 + 0xc);
        *puVar8 = 0;
        puVar8[1] = uVar4;
        puVar8[2] = uVar1;
        if (puVar2 != (undefined1 *)0x0) {
          *puVar2 = 0;
        }
      }
      fn_00301a9c(puVar8 + 3,param_2,uVar1);
      if ((undefined1 *)*piVar7 != &DAT_008f9d04) {
        piVar3 = (int *)((undefined1 *)*piVar7 + -0xc);
        iVar6 = *piVar3;
        if ((iVar6 == -1) || ((piVar3 != &DAT_008f9cf8 && (*piVar3 = iVar6 + -1, iVar6 == 0)))) {
          fn_001008c4(*piVar7 + -0xc,*(int *)(*piVar7 + -8) + 0xe,0);
        }
      }
      *piVar7 = (int)(puVar8 + 3);
      return;
    }
    fn_00301b24(puVar2,param_2,uVar1);
    *(uint *)(*piVar7 + -4) = uVar1;
    puVar2 = (undefined1 *)(*piVar7 + uVar1);
  }
  *puVar2 = 0;
  return;
}



undefined4 * fn_00571884(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_00840e34;
  puVar1[0x19] = &DAT_00859100;
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0;
  puVar1[0x1e] = 0;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = 0;
  return puVar1;
}



void fn_005717d4(int param_1)

{
  code *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    pcVar1 = *(code **)(param_1 + 0x68);
    if ((*(uint *)(param_1 + 0x6c) & 1) != 0) {
      pcVar1 = *(code **)(pcVar1 + *(int *)(param_1 + ((int)*(uint *)(param_1 + 0x6c) >> 1)));
    }
    (*pcVar1)();
    uVar2 = *(uint *)(param_1 + 0x7c);
    iVar4 = *(int *)(param_1 + 0x68);
    uVar3 = *(uint *)(param_1 + 0x6c);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(param_1 + 0x78);
    *(int *)(param_1 + 0x70) = iVar4;
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x74) = uVar3;
    *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
    if ((iVar4 == *(int *)(param_1 + 0x68)) &&
       (((iVar4 == 0 && (((*(byte *)(param_1 + 0x74) | uVar2) & 1) == 0)) || (uVar3 == uVar2)))) {
      iVar4 = *(int *)(param_1 + 0x84) + 1;
    }
    else {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x84) = iVar4;
  }
  return;
}



void fn_0057148c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int local_20;
  int local_1c [2];
  
  iVar1 = fn_002f68a4();
  if (*(int *)(param_1 + 0x84) == 0) {
    puVar3 = (undefined4 *)fn_002f7e70();
    uVar4 = *puVar3;
    iVar2 = fn_002f6240(param_1);
    if (iVar2 == 2) {
      local_20 = 0;
      local_1c[0] = 0;
      fn_002f68fc(&local_20,local_1c);
      fn_0015b0dc(uVar4);
      fn_0015b0f8(local_20);
      fn_0015b0f8(local_1c[0]);
      uVar4 = fn_0022f584((char *)&DAT_00571740,0);
      fn_0068974c(param_1,uVar4,0,1);
      if (local_1c[0] < local_20) {
        uVar4 = fn_0022f584((char *)&DAT_00571724,0);
        fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar4);
        return;
      }
      uVar4 = fn_0022f584((char *)&DAT_00571758,0);
      fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar4);
      return;
    }
    iVar2 = fn_002f5d5c(iVar1);
    if (iVar2 == 0) {
      iVar2 = fn_002f61a4(iVar1);
      if (iVar2 == 0) {
        fn_0015b0f8(iVar1);
        uVar4 = fn_0022f584((char *)&DAT_00571788,0);
        fn_0068974c(param_1,uVar4,0,1);
        return;
      }
      fn_0015b0dc(uVar4);
      uVar4 = fn_0022f584((char *)&DAT_00571770,0);
      fn_0068974c(param_1,uVar4,0,1);
      uVar4 = fn_0022f584((char *)&DAT_00571758,0);
      fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar4);
      return;
    }
    fn_0015b0dc(uVar4);
    uVar4 = fn_0022f584((char *)&DAT_0057170c,0);
    fn_0068974c(param_1,uVar4,0,1);
    uVar4 = fn_0022f584((char *)&DAT_00571724,0);
    fn_0036c13c(*(undefined4 *)(param_1 + 0x5c),uVar4);
    fn_00203440(0x1000026);
    *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 0;
  }
  else {
    iVar2 = fn_006adb80();
    if (iVar2 == 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x5c) + 0x30) = 1;
    }
    iVar2 = fn_006f6a6c(param_1);
    if (iVar2 == 1) {
      if (iVar1 < 3) {
        fn_002f6c2c(param_1,iVar1 + 1);
        fn_006899f4(param_1,0xdf,0);
        return;
      }
      fn_002f6c2c(param_1,1);
      fn_006899f4(param_1,0xe3,0);
      return;
    }
  }
  return;
}


