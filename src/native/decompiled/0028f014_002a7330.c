#include "0028f014_002a7330.h"



void fn_002a7330(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_00154ac8(0x358);
  if (iVar1 == 0) {
    fn_00144834(0x358,1);
    uVar2 = fn_0022fb24(*(undefined1 *)(param_1 + 0x1b5),1);
    uVar3 = fn_006f75ac(DAT_008977e0);
    fn_0038fee8(uVar3,uVar2);
    uVar2 = fn_006f75ac(DAT_008977e0);
    fn_0038ff40(uVar2,0,1,1,0);
    return;
  }
  uVar2 = fn_0022fb24(*(undefined1 *)(param_1 + 0x1b5),0);
  fn_003b679c(*(undefined4 *)(DAT_008977e0 + 0x54),uVar2,*(undefined4 *)(DAT_008977e0 + 0x54),
               param_4);
  return;
}



void fn_002a6b5c(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(char *)(*(int *)(DAT_00897804 + 8) + 8) == '\0') {
    fn_0025b35c(*(undefined4 *)(DAT_00897804 + 8));
  }
  iVar7 = *(int *)(DAT_008977e0 + 0x40);
  iVar2 = fn_006f6fc4(iVar7);
  if (((iVar2 != 0) && (*(char *)(*(int *)(iVar7 + 4) + 0x20) != '\x01')) ||
     (iVar2 = fn_006f6fe8(iVar7), iVar2 != 0)) {
    fn_00144834(0x16,1);
  }
  iVar2 = fn_006f6e40(iVar7);
  if (iVar2 == 1) {
    uVar1 = 4;
LAB_002a6de8:
    *param_1 = uVar1;
    return;
  }
  if (iVar2 == 2) {
    fn_00697500(DAT_008977e0,0xc,&LAB_0060b6fc,0);
    uVar4 = *(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 4);
    uVar5 = fn_006f75ac(DAT_008977e0);
    uVar3 = DAT_00897800;
    fn_006cbfe4(uVar4);
    uVar6 = fn_0015b064();
    fn_0016ba84(uVar3,uVar6);
    fn_0038ff40(uVar5,0,0,1,0);
    uVar4 = fn_006cbfa4(uVar4);
    uVar3 = fn_0016ba34(uVar3,L"rom:/data/Message/DiscMessage.mes",uVar4,0);
    fn_0038fee8(uVar5,uVar3);
    *param_1 = 2;
    return;
  }
  if (iVar2 == 3) {
    if (*(char *)(*(int *)(iVar7 + 4) + 0x20) == '\x01') {
      fn_00697500(DAT_008977e0,0xc,&LAB_0060b6fc,0);
      fn_00697500(DAT_008977e0,9,&LAB_0060b670,0);
      fn_0015b0f8(0xf,0x1a4);
      uVar3 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a6eb8,0);
      uVar4 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar4,0,0,1,0);
      fn_0038fee8(uVar4,uVar3);
    }
    else {
      fn_00697500(DAT_008977e0,9,&LAB_0060b670,0);
      fn_00697500(DAT_008977e0,10,&LAB_0060b72c,0);
      fn_00697500(DAT_008977e0,0xb,&LAB_0060b6c4,0);
      iVar2 = fn_00154ac8(0x17);
      if (iVar2 == 0) {
        fn_00144834(0x17,1);
        uVar3 = fn_0016ba34(DAT_00897800,L"rom:/data/Message/DiscMessage.mes",(char *)&DAT_002a6ec8,0);
        uVar4 = fn_006f75ac(DAT_008977e0);
        fn_0038ff40(uVar4,0,0,1,0);
        fn_0038fee8(uVar4,uVar3);
        uVar1 = 1;
        goto LAB_002a6de8;
      }
      iVar2 = *(int *)(*(int *)(DAT_008977e0 + 0x40) + 4);
      iVar7 = fn_006c89fc();
      if (iVar7 == 1) {
        uVar3 = fn_0035afb4(*(char *)(iVar2 + 0x20) == '\x01');
        fn_0035af2c(*(undefined4 *)(*(int *)(DAT_008977e0 + 0x40) + 0xc),uVar3);
      }
      uVar3 = fn_006f75ac(DAT_008977e0);
      fn_0038ff40(uVar3,0,0,1,0);
      uVar4 = fn_006ca2f4(iVar2);
      fn_0038fee8(uVar3,uVar4);
    }
    *param_1 = 2;
  }
  return;
}



void fn_00295ee0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x2a) = 1;
  uVar1 = fn_00615ee4();
  fn_0010706c(uVar1,&LAB_001b5788,2);
  fn_001076bc(2);
  fn_005f3c30(2);
  if (*(int *)(param_1 + 0x2c) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x2c) + -8);
  }
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if (*(int *)(param_1 + 0x34) != 0) {
    fn_002feca8(*(int *)(param_1 + 0x34) + -8);
  }
  *(undefined4 *)(param_1 + 0x34) = 0;
  iVar2 = 0;
  do {
    iVar3 = param_1 + iVar2 * 4;
    fn_002feef8(*(undefined4 *)(iVar3 + 700));
    iVar2 = iVar2 + 1;
    *(undefined4 *)(iVar3 + 700) = 0;
  } while (iVar2 < 3);
  iVar2 = *DAT_008977e8;
  if (*(int *)(iVar2 + 0x328) != 0) {
    fn_00113a24();
    if (*(int **)(iVar2 + 0x328) != (int *)0x0) {
      (**(code **)(**(int **)(iVar2 + 0x328) + 4))();
      *(undefined4 *)(iVar2 + 0x328) = 0;
    }
  }
  return;
}



void fn_00291f88(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = fn_006bcce8(*(undefined4 *)(DAT_00897820 + 0x44),param_1);
  fn_00301f50(param_2,0xa88);
  *(char *)(param_2 + 0xa70) = (char)param_1;
  *(undefined2 *)(param_2 + 0xa72) = *(undefined2 *)(iVar1 + 0x18);
  *(undefined4 *)(param_2 + 0xa84) = *(undefined4 *)(iVar1 + 0xc);
  *(uint *)(param_2 + 0xa74) = *(uint *)(param_2 + 0xa74) | 0x10;
  uVar2 = fn_0022f584(*(undefined4 *)(iVar1 + 0x10),0);
  fn_00101144(param_2 + 4,uVar2,0xc);
  *(undefined1 *)(param_2 + 0x5e) = 0x2a;
  *(undefined2 *)(param_2 + 0x5c) = 0xf2;
  *(undefined2 *)(param_2 + 0x120) = *(undefined2 *)(iVar1 + 10);
  iVar4 = 0;
  *(undefined1 *)(param_2 + 0x514) = *(undefined1 *)(iVar1 + 8);
  *(undefined1 *)(param_2 + 0x515) = 0xff;
  do {
    psVar5 = (short *)(iVar1 + iVar4 * 2);
    iVar3 = fn_0013add0((int)*psVar5);
    if (iVar3 != 0) {
      iVar3 = param_2 + 0x154 + iVar4 * 0xf0;
      fn_00237c74(iVar3,(int)*psVar5,0xff,0);
      uVar2 = fn_0015b064((int)*(short *)(iVar3 + 0x1c));
      fn_00101a50(iVar3 + 4,0x18,uVar2);
      *(short *)(param_2 + iVar4 * 2 + 0xa78) = *psVar5;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  *(undefined1 *)(param_2 + 0xa71) = 3;
  return;
}



undefined4 fn_0028f014(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  bool bVar13;
  bool bVar14;
  wchar16 *pwStack_64;
  char *pcStack_60;
  int local_5c;
  undefined4 local_58;
  int local_50;
  undefined4 *local_48;
  undefined4 *local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_34;
  undefined1 local_32;
  undefined1 local_31;
  uint local_30;
  uint auStack_2c [2];
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x9f);
  puVar11 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00895964) goto LAB_0028f060;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_0028f060:
  *(undefined4 **)(param_1 + 0xb0) = puVar1;
  *(undefined4 *)(param_1 + 0xb4) = puVar1[4];
  fn_002c330c(&pwStack_64);
  local_50 = 3;
  local_5c = 3;
  pwStack_64 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_60 = (char *)&DAT_0028f41c;
  uVar3 = fn_00154ac8(0x38);
  if ((uVar3 & (int)DAT_00895970) == 0) {
    local_50 = local_50 + -1;
    local_5c = local_5c + -1;
  }
  local_58 = *(undefined4 *)(param_1 + 0xb4);
  puVar1 = (undefined4 *)fn_0022f750((char *)&DAT_00866ea8);
  uVar3 = fn_00100b58();
  puVar2 = &DAT_008f9ce8;
  if (uVar3 == 0) {
    piVar4 = local_48 + -3;
    iVar8 = *piVar4;
    if (iVar8 != 0) {
      if ((local_48 != &DAT_008f9cf4) &&
         ((iVar8 == -1 || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))))) {
        fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
      }
      local_48 = &DAT_008f9cf4;
      goto LAB_0028f2ec;
    }
    local_48[-1] = 0;
    puVar1 = local_48;
  }
  else {
    uVar9 = local_48[-3] + 1;
    bVar14 = local_48[-3] != -1;
    bVar13 = uVar9 == 1;
    if (uVar9 < 2) {
      bVar14 = (uint)local_48[-2] <= uVar3;
      bVar13 = uVar3 == local_48[-2];
    }
    if (bVar14 && !bVar13) {
LAB_0028f13c:
      uVar9 = local_48[-1];
      uVar6 = uVar9 + (uVar9 >> 1) + (uVar9 >> 3);
      local_30 = uVar9 + 0x80;
      if (uVar9 + 0x80 <= uVar6) {
        local_30 = uVar6;
      }
      puVar10 = auStack_2c;
      if (uVar3 <= local_30) {
        puVar10 = &local_30;
      }
      auStack_2c[0] = uVar3;
      uVar9 = *puVar10;
      if (0xfffffff1 < uVar9) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar9,0xfffffff1);
      }
      if (uVar9 < uVar3) {
        fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar3,uVar9);
      }
      if (uVar9 != 0) {
        puVar2 = (undefined4 *)fn_00100fc6((uVar9 + 8) * 2,0);
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        puVar2[2] = uVar3;
        puVar7 = (undefined2 *)((int)puVar2 + uVar3 * 2 + 0xc);
        *puVar2 = 0;
        puVar2[1] = uVar9;
        if (puVar7 != (undefined2 *)0x0) {
          *puVar7 = 0;
        }
      }
      fn_00301a9c(puVar2 + 3,puVar1,uVar3 << 1);
      if (local_48 != &DAT_008f9cf4) {
        piVar4 = local_48 + -3;
        iVar8 = *piVar4;
        if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
          fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
        }
      }
      local_48 = puVar2 + 3;
      goto LAB_0028f2ec;
    }
    if (puVar1 != (undefined4 *)0x0) {
      bVar13 = puVar1 <= local_48;
      if (local_48 <= puVar1) {
        bVar13 = (undefined4 *)((int)local_48 + local_48[-1] * 2) <= puVar1;
      }
      if (!bVar13) goto LAB_0028f13c;
    }
    fn_001006ac(local_48,puVar1,uVar3);
    local_48[-1] = uVar3;
    puVar1 = (undefined4 *)((int)local_48 + uVar3 * 2);
  }
  *(undefined2 *)puVar1 = 0;
LAB_0028f2ec:
  local_34 = 0;
  local_32 = 1;
  local_38 = 0;
  local_31 = 0xff;
  local_37 = 0;
  fn_002c29a0(param_1,&pwStack_64);
  if (local_3c != &DAT_008f9cf4) {
    piVar4 = local_3c + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
    }
  }
  if (local_40 != &DAT_008f9cf4) {
    piVar4 = local_40 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_40 + -3,local_40[-2] + 8,0);
    }
  }
  if (local_44 != &DAT_008f9cf4) {
    piVar4 = local_44 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_44 + -3,local_44[-2] + 8,0);
    }
  }
  if (local_48 != &DAT_008f9cf4) {
    piVar4 = local_48 + -3;
    iVar8 = *piVar4;
    if ((iVar8 == -1) || ((piVar4 != &DAT_008f9ce8 && (*piVar4 = iVar8 + -1, iVar8 == 0)))) {
      fn_001008c4(local_48 + -3,local_48[-2] + 8,0);
    }
  }
  iVar12 = 3;
  uVar3 = fn_00154ac8(0x38);
  iVar8 = 0;
  if ((uVar3 & (int)DAT_00895970) == 0) {
    iVar12 = 2;
  }
  do {
    uVar5 = fn_0022f750((&DAT_007c7610)[iVar8]);
    fn_0031b78c(param_1,iVar8,0,uVar5);
    iVar8 = iVar8 + 1;
  } while (iVar8 < iVar12);
  iVar8 = *(int *)(*(int *)(param_1 + 0xb0) + 0x20);
  if ((iVar8 != 0) && (fn_00689efc(param_1,iVar8,0), iVar8 == 0x2c)) {
    puVar1 = (undefined4 *)fn_001f74d8(param_1,0x2c);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008951d8) {
          puVar11 = puVar1;
          break;
        }
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    uVar5 = fn_006b64b0(*(undefined4 *)(DAT_00897804 + 8));
    puVar11[8] = uVar5;
  }
  return 1;
}


