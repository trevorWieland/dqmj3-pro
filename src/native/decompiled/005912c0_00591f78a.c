#include "005912c0_00591f78a.h"



void fn_0059198c(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_005919d0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005919d0:
  *(undefined1 *)(puVar1 + 6) = 2;
  return;
}



void fn_00591938(undefined4 param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_00591980;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00591980:
  *(undefined1 *)(puVar1 + 6) = 1;
  return;
}



void fn_00591884(undefined4 param_1,undefined2 param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_8f8 [88];
  undefined2 local_8a0;
  
  fn_00112e3c(*(undefined4 *)(DAT_00897804 + 8),param_2);
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0x3c);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894d28) goto LAB_005918ec;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005918ec:
  fn_0017821c(auStack_8f8,puVar1 + 7,0x8d8);
  local_8a0 = param_2;
  fn_0017821c(puVar1 + 7,auStack_8f8,0x8d8);
  fn_0042f204(puVar1,1);
  return;
}



undefined4 * fn_0059173c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0068ab5c();
  *puVar1 = &DAT_0084447c;
  puVar1[0x19] = &DAT_00859130;
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



void fn_0059168c(int param_1)

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



void fn_005912c0(int param_1)

{
  char cVar1;
  undefined4 **ppuVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 **local_64;
  undefined4 *local_60 [2];
  char *apcStack_58 [6];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(int *)(param_1 + 0x84) != 0) {
    cVar1 = *(char *)(*(int *)(param_1 + 0x5c) + 0x31);
    if (cVar1 == '\x03') {
      *(code **)(param_1 + 0x78) = fn_00590fdc;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      fn_00689bd0(param_1,0,0);
      return;
    }
    if (cVar1 == '\x02') {
      fn_00689878(param_1,0);
      *(undefined **)(param_1 + 0x78) = &DAT_00590fa0;
      *(undefined4 *)(param_1 + 0x7c) = 0;
      return;
    }
    return;
  }
  local_64 = local_60;
  puVar10 = *(undefined4 **)(param_1 + 0x18);
  if (puVar10 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar10)(puVar10);
    do {
      if (puVar3 == &DAT_00895df0) goto LAB_00591364;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar10 = (undefined4 *)0x0;
LAB_00591364:
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    puVar4 = (undefined4 *)(**(code **)*puVar3)(puVar3);
    do {
      if (puVar4 == &DAT_00895df0) goto LAB_0059139c;
      puVar4 = (undefined4 *)*puVar4;
    } while (puVar4 != (undefined4 *)0x0);
  }
  puVar3 = (undefined4 *)0x0;
LAB_0059139c:
  fn_006f5bec(puVar3[0x43],puVar10 + 5,&local_70);
  local_30 = local_70;
  local_2c = local_6c;
  local_40 = local_70;
  uStack_3c = local_6c;
  apcStack_58[0] = "MenuMessageBronzeCoin";
  apcStack_58[1] = (char *)&DAT_00867b84;
  apcStack_58[2] = (char *)&DAT_00867b58;
  apcStack_58[3] = (char *)&DAT_00867b40;
  local_60[0] = &DAT_008f9cf4;
  if (DAT_008f9cec < 0x100) {
    uVar9 = 0x100;
    if (DAT_008f9cf0 < 0x101) {
      uVar9 = DAT_008f9cf0;
    }
    if (0x100 < uVar9) {
      local_70 = 0x100;
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9);
    }
    puVar10 = (undefined4 *)fn_00100fc6(0x210,0);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = 0;
      puVar10[1] = 0;
      puVar10[2] = 0;
    }
    puVar10[2] = uVar9;
    puVar7 = (undefined2 *)((int)puVar10 + uVar9 * 2 + 0xc);
    *puVar10 = 0;
    puVar10[1] = 0x100;
    if (puVar7 != (undefined2 *)0x0) {
      *puVar7 = 0;
    }
    fn_00301a9c(puVar10 + 3,local_60[0],local_60[0][-1] << 1);
    if (local_60[0] != &DAT_008f9cf4) {
      piVar5 = local_60[0] + -3;
      iVar8 = *piVar5;
      if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
        fn_001008c4(local_60[0] + -3,local_60[0][-2] + 8,0);
      }
    }
    local_60[0] = puVar10 + 3;
  }
  iVar8 = 3;
  do {
    if (0 < *(short *)((int)apcStack_58 + iVar8 * 2 + 0x18)) {
      fn_0015b0f8();
      uVar6 = fn_0022f584(apcStack_58[iVar8],0);
      uVar11 = local_60[0][-1];
      local_70 = fn_00100b58(uVar6);
      local_6c = 0;
      local_68 = local_70;
      fn_00177c88(local_64,uVar11,0,uVar6);
      uVar6 = local_60[0][-1];
      local_70 = fn_00100b58(&DAT_00591638);
      local_6c = 0;
      local_68 = local_70;
      fn_00177c88(local_64,uVar6,0,&DAT_00591638);
    }
    ppuVar2 = local_64;
    iVar8 = iVar8 + -1;
  } while (-1 < iVar8);
  uVar6 = fn_0022f584((char *)&DAT_0059163c,0);
  uVar11 = local_60[0][-1];
  local_70 = fn_00100b58(uVar6);
  local_6c = 0;
  local_68 = local_70;
  fn_00177c88(ppuVar2,uVar11,0,uVar6);
  fn_0068974c(param_1,local_60[0],1);
  if (local_60[0] != &DAT_008f9cf4) {
    piVar5 = local_60[0] + -3;
    iVar8 = *piVar5;
    if ((iVar8 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_60[0] + -3,local_60[0][-2] + 8,0);
      return;
    }
  }
  return;
}


