#include "003ddf90_003e313c.h"



void fn_003e313c(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_30 [4];
  char *apcStack_20 [4];
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    local_30[0] = 0xfaa;
    local_30[1] = 0xfab;
    local_30[2] = 0xfac;
    local_30[3] = 0xfad;
    iVar1 = fn_006cb7f8(param_1,param_2);
    apcStack_20[0] = "Partner_Shortcut";
    apcStack_20[1] = (char *)&DAT_00866148;
    apcStack_20[2] = (char *)&DAT_00866124;
    apcStack_20[3] = (char *)&DAT_00866110;
    if (iVar1 == 3) {
      iVar2 = fn_006b51cc(*(undefined4 *)(DAT_00897804 + 0x1c));
      if (iVar2 == 1) {
        pcVar3 = (char *)&DAT_006cb8e0;
      }
      else {
        pcVar3 = (char *)&DAT_006cb8f0;
      }
      fn_0023080c(pcVar3);
      fn_0015b0dc();
    }
    pcVar3 = apcStack_20[iVar1];
    uVar4 = fn_0022eefc((int)(short)local_30[iVar1],0);
    uVar5 = fn_0022f750(pcVar3);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar5,uVar4);
    fn_00689bd0(param_1,0x49,0);
  }
  return;
}



undefined4 * fn_003e26e8(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003870a8();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00832734;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00290ba4(iVar2,param_2);
  }
  puVar1[0x28] = uVar3;
  return puVar1;
}



void fn_003e0ff4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar4 = 0;
  iVar5 = 0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  do {
    uVar1 = (**(code **)(*param_1 + 0x11c))(param_1,iVar5);
    iVar2 = fn_0028aad0(uVar6,uVar1);
    if (((iVar2 == 0) || (iVar3 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c)), iVar3 == 0)) ||
       ((uint)(param_1[0x28] - param_1[0x27] >> 2) <= uVar4)) {
      iVar2 = 1;
    }
    else {
      local_2c = 0;
      local_30 = 1;
      local_28 = 0;
      fn_002b415c(*(undefined4 *)(param_1[0x27] + uVar4 * 4),iVar2,0,0);
      local_30 = 0;
      fn_0036e68c(*(undefined4 *)(param_1[0x2a] + uVar4 * 4),iVar2,0,0);
      iVar2 = fn_0020bbc4(&local_30,iVar2);
      if (iVar2 != 0) {
        iVar2 = iVar2 + 4;
      }
      uVar1 = fn_006bfe90(iVar2);
      iVar2 = fn_001cab7c(uVar1);
    }
    uVar4 = iVar2 + uVar4 & 0xff;
  } while ((uVar4 < 4) && (iVar5 = iVar5 + 1, iVar5 < 4));
  return;
}



void fn_003ddf90(int param_1)

{
  char cVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int extraout_r1;
  int extraout_r1_00;
  uint uVar7;
  int *piVar8;
  int iVar9;
  undefined4 local_4c [2];
  undefined4 *local_44 [2];
  undefined4 *local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  
  uVar4 = DAT_00897800;
  iVar9 = *(int *)(*(int *)(param_1 + 0x9c) + 0x1c);
  uVar3 = fn_0022fd28((char *)&DAT_003de29c);
  fn_00190d50(*(undefined4 *)(param_1 + 0xbc),uVar3);
  uVar3 = fn_0022ed64(iVar9);
  fn_00190d50(*(undefined4 *)(param_1 + 0xc0),uVar3);
  cVar1 = *(char *)(iVar9 + 4);
  if (cVar1 == '\x03') {
    piVar8 = *(int **)(param_1 + 0xa4);
    (**(code **)(*piVar8 + 0x14))(piVar8,iVar9,0);
    if (*(byte *)(iVar9 + 0xb) < 100) {
      fn_0018a618(auStack_38,3,2,&DAT_003de2c0,*(byte *)(iVar9 + 0xb));
      fn_00168a24(local_44,auStack_38,auStack_30);
    }
    else {
      uVar4 = fn_00231ca0(0x25,0);
      fn_00168a24(local_44,uVar4,&local_3c);
    }
    fn_00190d50(*(undefined4 *)(param_1 + 200),local_44[0]);
    if (local_44[0] != &DAT_008f9cf4) {
      piVar6 = local_44[0] + -3;
      iVar9 = *piVar6;
      if ((iVar9 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
        fn_001008c4(local_44[0] + -3,local_44[0][-2] + 8,0);
      }
    }
    uVar4 = fn_006c9998(piVar8);
    fn_00190d50(*(undefined4 *)(param_1 + 0xc4),uVar4);
    uVar4 = fn_006c89e4(piVar8);
    switch(uVar4) {
    case 0:
      uVar4 = fn_006c97c0(piVar8);
      fn_002317d8(&local_3c,uVar4,0);
      fn_00168a24(local_44,local_3c,auStack_34);
      if (local_3c != &DAT_008f9cf4) {
        piVar6 = local_3c + -3;
        iVar9 = *piVar6;
        if ((iVar9 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
          fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
        }
      }
      break;
    case 1:
      uVar4 = fn_006c8ad4(piVar8);
      fn_0023097c(local_44,uVar4,0);
      break;
    case 2:
      uVar4 = fn_0022fd28((char *)&DAT_003de5e4);
      fn_00168a24(local_44,uVar4,auStack_30);
      break;
    case 3:
      uVar4 = fn_0022fd28((char *)&DAT_003de5f0);
      fn_00168a24(local_44,uVar4,auStack_2c);
      break;
    case 4:
      sVar2 = fn_006c8a14(piVar8);
      fn_0023097c(local_44,(int)sVar2,0);
      break;
    case 5:
      uVar4 = fn_0022fd28((char *)&DAT_003de5fc);
      fn_00168a24(local_44,uVar4,auStack_28);
      break;
    default:
      fn_00168a24(local_44,"",auStack_38);
    }
    fn_00190d50(*(undefined4 *)(param_1 + 0xd0),local_44[0]);
    if (local_44[0] != &DAT_008f9cf4) {
      piVar6 = local_44[0] + -3;
      iVar9 = *piVar6;
      if ((iVar9 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
        fn_001008c4(local_44[0] + -3,local_44[0][-2] + 8,0);
      }
    }
    *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0xac) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe | 1;
    *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) =
         *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe | 1;
    uVar4 = fn_006afe90(*(undefined4 *)(DAT_008977e0 + 0x1c),*(undefined4 *)piVar8[0xc]);
    fn_003dde68(param_1,*(undefined4 *)(param_1 + 0xb0),uVar4);
    uVar7 = 1;
    do {
      uVar4 = fn_00230e40(uVar7 & 0xff,0);
      uVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0xb4),(&DAT_008940cc)[uVar7]);
      fn_00190d50(uVar3,uVar4);
      uVar5 = fn_006c9b8c(piVar8);
      if ((uVar5 & 1 << (uVar7 - 1 & 0xff)) == 0) {
        local_4c[0] = DAT_0089405c;
        fn_00688d44(uVar3,local_4c);
        iVar9 = extraout_r1_00;
      }
      else {
        fn_00688fd8(uVar3);
        iVar9 = extraout_r1;
      }
      uVar7 = uVar7 + 1;
    } while ((int)uVar7 < 10);
    piVar6 = *(int **)(DAT_008977e0 + 0x40);
    if (piVar6 != (int *)0x0) {
      iVar9 = *piVar6;
    }
    if ((piVar6 != (int *)0x0 && iVar9 != 0) && (*(char *)(piVar6[1] + 0x20) == '\x01')) {
      uVar4 = fn_006ca224(piVar8);
      fn_00190d50(*(undefined4 *)(param_1 + 0xc4),uVar4);
      *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe
      ;
      return;
    }
  }
  else {
    if (cVar1 == '\x01') {
      piVar8 = *(int **)(param_1 + 0xa0);
      (**(code **)(*piVar8 + 8))(piVar8,iVar9);
      iVar9 = fn_006cc234(piVar8);
      if (iVar9 == 0) {
        iVar9 = 0xd;
      }
      else {
        iVar9 = 0xe;
      }
      fn_003dde68(param_1,*(undefined4 *)(param_1 + 0xb0),(&DAT_00894090)[iVar9]);
      uVar4 = fn_0016ba34(uVar4,L"rom:/data/Message/DiscMessage.mes");
      fn_00190d50(*(undefined4 *)(param_1 + 0xc4),uVar4);
      *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe
      ;
      return;
    }
    if (cVar1 == '\x02') {
      fn_003dde68(param_1,*(undefined4 *)(param_1 + 0xb0),DAT_008940cc);
      piVar8 = *(int **)(param_1 + 0xa8);
      (**(code **)(*piVar8 + 8))(piVar8,iVar9);
      uVar3 = fn_006cbfe4(piVar8);
      fn_002317d8(local_44,uVar3,0);
      fn_0016ba84(uVar4,local_44[0]);
      if (local_44[0] != &DAT_008f9cf4) {
        piVar6 = local_44[0] + -3;
        iVar9 = *piVar6;
        if ((iVar9 == -1) || ((piVar6 != &DAT_008f9ce8 && (*piVar6 = iVar9 + -1, iVar9 == 0)))) {
          fn_001008c4(local_44[0] + -3,local_44[0][-2] + 8,0);
        }
      }
      uVar3 = fn_006cbfa4(piVar8);
      uVar4 = fn_0016ba34(uVar4,L"rom:/data/Message/DiscMessage.mes",uVar3,0);
      fn_00190d50(*(undefined4 *)(param_1 + 0xc4),uVar4);
      fn_00190d50(*(undefined4 *)(param_1 + 200),&DAT_003de2bc);
      *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb4) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0xac) + 0x44) = *(byte *)(*(int *)(param_1 + 0xac) + 0x44) & 0xfe
      ;
      *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) = *(byte *)(*(int *)(param_1 + 0xb8) + 0x44) & 0xfe
      ;
    }
  }
  return;
}


