#include "00382e6c_00384288.h"



undefined4 * fn_00384288(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint uVar13;
  uint local_28;
  uint local_24;
  
  puVar1 = (undefined4 *)fn_0069eaa0();
  *puVar1 = &DAT_00829888;
  puVar1[0x1f] = 0;
  puVar1[0x20] = 0;
  puVar1[0x21] = *(undefined4 *)(param_2 + 8);
  uVar10 = *(undefined4 *)(param_2 + 0x14);
  puVar1[0x23] = 0xffffffff;
  puVar1[0x22] = uVar10;
  puVar1[0x24] = 0xffffffff;
  puVar1[0x25] = 0xffffffff;
  puVar1[0x26] = 0;
  puVar1[0x2b] = 0;
  puVar1[0x2c] = 0;
  puVar12 = puVar1 + 0x2c;
  puVar1[0x2d] = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  puVar1[0x31] = 0;
  puVar1[0x32] = 0;
  puVar1[0x33] = 0;
  puVar1[0x34] = 0;
  *(undefined1 *)(puVar1 + 0x35) = 0;
  *(undefined1 *)((int)puVar1 + 0xd5) = 0;
  *(undefined1 *)((int)puVar1 + 0xd6) = 0;
  puVar1[0x36] = 0;
  local_28 = 0xe;
  uVar13 = (int)(puVar1[0x2d] - puVar1[0x2c]) >> 2;
  local_24 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
  if (local_24 < uVar13 + 0x20) {
    local_24 = uVar13 + 0x20;
  }
  puVar5 = &local_24;
  if (local_24 < 0xf) {
    puVar5 = &local_28;
  }
  uVar13 = *puVar5;
  puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
  puVar8 = puVar2;
  for (puVar6 = (undefined4 *)*puVar12; puVar6 != (undefined4 *)0x0; puVar6 = puVar6 + 1) {
    if (puVar8 != (undefined4 *)0x0) {
      *puVar8 = *puVar6;
    }
    puVar8 = puVar8 + 1;
  }
  iVar7 = 0xe;
  puVar6 = (undefined4 *)((-*puVar12 & 0xfffffffc) + (int)puVar2);
  do {
    if (puVar6 != (undefined4 *)0x0) {
      *puVar6 = 0xffffffff;
    }
    iVar7 = iVar7 + -1;
    puVar6 = puVar6 + 1;
  } while (iVar7 != 0);
  puVar11 = (undefined4 *)puVar1[0x2d];
  puVar6 = (undefined4 *)0x0;
  puVar8 = puVar2 + ((int)-*puVar12 >> 2) + 0xe;
  if (puVar11 != (undefined4 *)0x0) {
    do {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar6;
      }
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    } while (puVar6 != puVar11);
  }
  uVar3 = *puVar12;
  uVar9 = puVar1[0x2d];
  uVar4 = uVar3;
  if (uVar9 < uVar3) {
    do {
      uVar4 = uVar4 + 4;
    } while (uVar4 != uVar9);
  }
  fn_001008c4(uVar3,(int)(puVar1[0x2e] - uVar3) >> 2,0);
  puVar1[0x2e] = puVar2 + uVar13;
  puVar1[0x2d] = puVar2 + ((int)(uVar9 - uVar3) >> 2) + 0xe;
  *puVar12 = (uint)puVar2;
  local_28 = 4;
  puVar12 = puVar1 + 0x2f;
  if ((uint)((int)(puVar1[0x31] - puVar1[0x2f]) >> 2) < 4) {
    uVar13 = (int)(puVar1[0x30] - puVar1[0x2f]) >> 2;
    local_24 = uVar13 + (uVar13 >> 1) + (uVar13 >> 3);
    if (local_24 < uVar13 + 0x20) {
      local_24 = uVar13 + 0x20;
    }
    puVar5 = &local_24;
    if (local_24 < 5) {
      puVar5 = &local_28;
    }
    uVar13 = *puVar5;
    puVar2 = (undefined4 *)fn_00100fc6(uVar13 << 2,0);
    puVar11 = (undefined4 *)puVar1[0x30];
    puVar8 = puVar2;
    for (puVar6 = (undefined4 *)*puVar12; puVar6 != puVar11; puVar6 = puVar6 + 1) {
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar6;
      }
      puVar8 = puVar8 + 1;
    }
    uVar3 = *puVar12;
    uVar4 = uVar3;
    if ((uint)puVar1[0x30] < uVar3) {
      do {
        uVar4 = uVar4 + 4;
      } while (uVar4 != puVar1[0x30]);
    }
    fn_001008c4(uVar3,(int)(puVar1[0x31] - uVar3) >> 2,0);
    uVar4 = *puVar12;
    puVar1[0x2f] = puVar2;
    puVar1[0x30] = (puVar1[0x30] - uVar4 & 0xfffffffc) + (int)puVar2;
    puVar1[0x31] = puVar2 + uVar13;
  }
  puVar1[0x27] = 0;
  return puVar1;
}



void fn_00384264(int param_1)

{
  int iVar1;
  
  iVar1 = fn_00178f9c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x90));
  *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar1 + 0x10) + 0x44) & 0xfe;
  return;
}



void fn_003840f0(int param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  
  if (param_4 == 0) {
    iVar1 = *(int *)(param_1 + 0x98);
    *(int *)(param_1 + 0x98) = param_2;
  }
  else {
    iVar1 = *(int *)(param_1 + 0xac);
    *(int *)(param_1 + 0xac) = param_2;
  }
  piVar3 = (int *)(*(int *)(param_1 + 0xb0) + iVar1 * 4);
  if (*piVar3 != -1) {
    fn_00159f34(*(undefined4 *)(param_1 + 0x84));
    *piVar3 = -1;
  }
  uVar2 = fn_001c9278(*(undefined4 *)(param_1 + 0x84),(&PTR_s_bg_star_00_00894acc)[param_2],
                       *(undefined4 *)(param_1 + 0x90));
  *(undefined4 *)(*(int *)(param_1 + 0xb0) + param_2 * 4) = uVar2;
  piVar3 = (int *)fn_001c9330(*(undefined4 *)(param_1 + 0x84),uVar2);
  (**(code **)(*piVar3 + 0x10))(piVar3,1);
                    /* WARNING: Could not recover jumptable at 0x00384194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar3 + 0x50))(piVar3,param_3);
  return;
}



void fn_00383fb8(int param_1,int param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20 [6];
  
  if (param_2 == 3) {
    local_20[0] = fn_0023ddec(*(undefined4 *)(param_1 + 0x88),0xc73c);
    fn_0079d450(param_1 + 0xbc,local_20);
    return;
  }
  if (param_2 == 5) {
    local_24 = fn_0023ddec(*(undefined4 *)(param_1 + 0x88),0xc73d);
    fn_0079d450(param_1 + 0xbc,&local_24);
    return;
  }
  if (param_2 == 7 || param_2 == 9) {
    local_28 = fn_0023ddec(*(undefined4 *)(param_1 + 0x88),0xc73f);
    fn_0079d450(param_1 + 0xbc,&local_28);
    local_28 = fn_0023ddec(*(undefined4 *)(param_1 + 0x88),0xc73e);
    fn_0079d450(param_1 + 0xbc,&local_28);
  }
  return;
}



undefined4 fn_003831c8(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  puVar5 = *(undefined4 **)(param_1 + 0x18);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_00894aac) goto LAB_00383214;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00383214:
  *(undefined4 **)(param_1 + 0x80) = puVar5;
  puVar5 = (undefined4 *)fn_001f7510(param_1,0x48);
  if (puVar5 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar5)(puVar5);
    do {
      if (puVar1 == &DAT_008942d0) goto LAB_00383258;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar5 = (undefined4 *)0x0;
LAB_00383258:
  *(undefined4 **)(param_1 + 0x7c) = puVar5;
  local_28 = 1;
  uVar2 = fn_001481c8(*(undefined4 *)(param_1 + 0x84),DAT_00894ab8,&DAT_0038344c,1);
  *(undefined4 *)(param_1 + 0x8c) = uVar2;
  local_28 = 0;
  uStack_24 = 1;
  local_20 = 0;
  uVar2 = fn_001480d0(*(undefined4 *)(param_1 + 0x84),uVar2,DAT_00894abc,&DAT_00383454);
  *(undefined4 *)(param_1 + 0x90) = uVar2;
  fn_002a4648(*(undefined4 *)(param_1 + 0x88),0xc73c);
  fn_002a4648(*(undefined4 *)(param_1 + 0x88),0xc73d);
  fn_002a4648(*(undefined4 *)(param_1 + 0x88),0xc73e);
  fn_002a4648(*(undefined4 *)(param_1 + 0x88),0xc73f);
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x90));
  piVar4 = (int *)(**(code **)(**(int **)(iVar3 + 0x10) + 0x2c))
                            (*(int **)(iVar3 + 0x10),(char *)&DAT_00383468,1);
  uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_00383474,1);
  *(undefined4 *)(param_1 + 200) = uVar2;
  uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_00383488,1);
  *(undefined4 *)(param_1 + 0xcc) = uVar2;
  uVar2 = (**(code **)(*piVar4 + 0x2c))(piVar4,(char *)&DAT_00383498,1);
  *(undefined4 *)(param_1 + 0xd0) = uVar2;
  uVar2 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  fn_0020bbd8(&local_20,uVar2,*(int *)(param_1 + 0x80) + 8);
  local_28 = local_20;
  uStack_24 = uStack_1c;
  fn_0025bafc(*(undefined4 *)(DAT_00897804 + 8),&local_28);
  *(undefined1 *)(param_1 + 0xd6) = 0;
  if (*(char *)(*(int *)(param_1 + 0x80) + 0xe15) != '\x01') {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  *(undefined1 *)(param_1 + 0xd4) = 0;
  *(undefined1 *)(param_1 + 0xd5) = 0;
  iVar3 = fn_0065baa0(*(int *)(param_1 + 0x80) + 8,*(undefined4 *)(param_1 + 0x98));
  if (iVar3 == 10) {
    *(undefined4 *)(param_1 + 0x70) = 2;
    *(undefined4 *)(param_1 + 0x6c) = 2;
    *(undefined4 *)(param_1 + 0x68) = 2;
    *(undefined4 *)(param_1 + 0x78) = 0;
    if (((*(char *)(*(int *)(param_1 + 0x80) + 0xe12) != '\0') &&
        (*(char *)(*(int *)(param_1 + 0x80) + 0xe13) == '\0')) &&
       (iVar3 = fn_00154ac8(0x33e), iVar3 == 0)) {
      *(undefined1 *)(param_1 + 0xd5) = 1;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x70) = 0;
    *(undefined4 *)(param_1 + 0x78) = 0;
    *(undefined4 *)(param_1 + 0x6c) = 0;
    *(undefined4 *)(param_1 + 0x68) = 0;
  }
  *(undefined1 *)(*(int *)(param_1 + 0x80) + 0xe11) = 0;
  return 1;
}



void fn_00382fec(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(*(int *)(param_1 + 0x80) + 0xe14) == '\0') {
    iVar1 = 0;
    iVar2 = *(int *)(param_1 + 0xc0) - *(int *)(param_1 + 0xbc) >> 2;
    if (0 < iVar2) {
      do {
        (**(code **)(**(int **)(param_1 + 0x88) + 0xc))
                  (*(int **)(param_1 + 0x88),*(undefined4 *)(*(int *)(param_1 + 0xbc) + iVar1 * 4));
        iVar1 = iVar1 + 1;
      } while (iVar1 < iVar2);
    }
  }
  fn_0023d3f4(*(undefined4 *)(param_1 + 0x88),0xc73f);
  fn_0023d3f4(*(undefined4 *)(param_1 + 0x88),0xc73e);
  fn_0023d3f4(*(undefined4 *)(param_1 + 0x88),0xc73d);
  fn_0023d3f4(*(undefined4 *)(param_1 + 0x88),0xc73c);
  iVar2 = 0;
  do {
    piVar3 = (int *)(*(int *)(param_1 + 0xb0) + iVar2 * 4);
    if (*piVar3 != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x84));
      *piVar3 = -1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0xe);
  fn_0016a43c(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x90));
                    /* WARNING: Subroutine does not return */
  fn_001482f4(*(undefined4 *)(param_1 + 0x84),*(undefined4 *)(param_1 + 0x8c));
}



undefined4 * fn_00382e6c(void)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)fn_002c27a8();
  puVar5 = (undefined4 *)0x0;
  *puVar2 = &DAT_008296e4;
  puVar2[0x34] = 0;
  puVar2[0x35] = 0;
  puVar2[0x36] = 0;
  puVar2[0x37] = 0;
  puVar2[0x38] = 0;
  puVar2[0x39] = 0;
  puVar2[0x3a] = 0;
  puVar2[0x3b] = 0;
  puVar2[0x3d] = 1;
  puVar2[0x3c] = 3;
  puVar2[0x3f] = 0;
  puVar2[0x40] = 0;
  *(undefined1 *)(puVar2 + 0x41) = 0;
  uVar1 = fn_00154ac8(0x3c);
  *(undefined1 *)((int)puVar2 + 0x105) = uVar1;
  uVar1 = fn_00154ac8(0x33f);
  *(undefined1 *)((int)puVar2 + 0x106) = uVar1;
  puVar3 = (undefined4 *)fn_001f74d8(puVar2,0x2d);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_008951dc) goto LAB_00382f18;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_00382f18:
  puVar2[0x34] = puVar3;
  puVar3 = (undefined4 *)fn_001f74ec(puVar2,0x4d);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00894688) {
        puVar5 = puVar3;
        break;
      }
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar2[0x35] = puVar5;
  return puVar2;
}


