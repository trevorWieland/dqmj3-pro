#include "00423218_00423c94b.h"



void fn_00423c94(int param_1,uint param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_30 [4];
  undefined4 uStack_2c;
  uint uStack_28;
  uint uStack_24;
  int iStack_20;
  undefined1 uStack_1c;
  
  piVar2 = *(int **)(param_1 + 0x60);
  iVar5 = *piVar2;
  iVar1 = (piVar2[1] - iVar5) / 0x18;
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      if (*(byte *)(iVar5 + iVar4 * 0x18) == param_2) {
        if (iVar4 != -1) {
          *(undefined4 *)(iVar5 + iVar4 * 0x18 + 4) = param_3;
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  uStack_1c = 0;
  auStack_30[0] = (undefined1)param_2;
  uStack_28 = 0;
  uStack_24 = 0;
  iStack_20 = 0;
  uStack_2c = param_3;
  fn_00791cc8(piVar2,auStack_30);
  uVar3 = uStack_28;
  if (uStack_24 < uStack_28) {
    do {
      uVar3 = uVar3 + 4;
    } while (uVar3 != uStack_24);
  }
  fn_001008c4(uStack_28,(int)(iStack_20 - uStack_28) >> 2,0);
  return;
}



undefined4 * fn_00423bd0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *param_1 = &DAT_0083b03c;
  param_1[1] = &DAT_00859360;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined1 *)((int)param_1 + 9) = 0;
  *(undefined1 *)((int)param_1 + 10) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  iVar1 = fn_00145b00(0x80,&DAT_00812c8c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = fn_00110518();
  }
  param_1[5] = uVar2;
  param_1[6] = 0xffffffff;
  param_1[7] = 0xffffffff;
  param_1[8] = 0xffffffff;
  param_1[9] = 0xffffffff;
  fn_0011050c(param_1[5],*(undefined4 *)(DAT_008977e0 + 0x10),*(undefined4 *)(DAT_008977e0 + 0x14))
  ;
  return param_1;
}



void fn_00423880(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined1 uVar5;
  int iVar6;
  
  fn_001c93c8(*(undefined4 *)(param_1 + 0x14));
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    fn_006f7a84(DAT_008977e0);
    iVar3 = fn_006aac24();
    if (iVar3 == 0) goto switchD_004238b0_default;
    iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
    *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) & 0xfe | 1;
    uVar2 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
    uVar2 = fn_001828f0(uVar2,(char *)&DAT_00423720);
    iVar3 = fn_0068897c(uVar2,(char *)&DAT_00423730);
    if (iVar3 != 0) {
      fn_006f7a84(DAT_008977e0);
      uVar2 = fn_006aaf6c();
      uVar2 = fn_006af5dc(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar2);
      fn_00190d50(iVar3,uVar2);
    }
    if (*(int *)(param_1 + 0x20) != -1) {
      fn_00159f34(*(undefined4 *)(param_1 + 0x14));
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                         (char *)&DAT_0042376c,*(undefined4 *)(param_1 + 0x1c));
    *(undefined4 *)(param_1 + 0x20) = uVar2;
    fn_006f7a84(DAT_008977e0);
    uVar2 = fn_006aaf6c();
    *(undefined4 *)(param_1 + 0x24) = uVar2;
    uVar5 = 1;
    break;
  case 1:
  case 2:
    if (*(char *)(DAT_008977e0 + 0x170) == '\x01') {
      if (*(int *)(param_1 + 0x20) != -1) {
        fn_00159f34(*(undefined4 *)(param_1 + 0x14));
        *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
      }
      uVar5 = 4;
    }
    else {
      fn_001088e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20));
      iVar3 = fn_00154a6c();
      fn_006f7a84(DAT_008977e0);
      iVar6 = fn_006aaf6c();
      if (iVar6 == -1) {
        if (*(int *)(param_1 + 0x20) != -1) {
          fn_00159f34(*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        }
        uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                             (char *)&DAT_004237a8,*(undefined4 *)(param_1 + 0x1c));
        *(undefined4 *)(param_1 + 0x20) = uVar2;
        uVar5 = 3;
      }
      else {
        fn_006f7a84(DAT_008977e0);
        iVar6 = fn_006aaf6c();
        if (iVar6 != *(int *)(param_1 + 0x24)) {
          *(undefined1 *)(param_1 + 10) = 0;
          goto switchD_004238b0_default;
        }
        if (iVar3 == 0) goto switchD_004238b0_default;
        if (*(int *)(param_1 + 0x20) != -1) {
          fn_00159f34(*(undefined4 *)(param_1 + 0x14));
          *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
        }
        uVar2 = fn_0010887c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),
                             (char *)&DAT_0042378c,*(undefined4 *)(param_1 + 0x1c));
        *(undefined4 *)(param_1 + 0x20) = uVar2;
        uVar5 = 2;
      }
    }
    break;
  case 3:
    fn_001088e0(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x20));
    iVar3 = fn_00154a6c();
    if (iVar3 != 0) {
      *(undefined1 *)(param_1 + 10) = 0;
      *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
      iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
      *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) = *(byte *)(*(int *)(iVar3 + 0x10) + 0x44) & 0xfe;
    }
  case 4:
    if (*(char *)(DAT_008977e0 + 0x170) != '\x01') {
      *(undefined1 *)(param_1 + 10) = 0;
    }
  default:
    goto switchD_004238b0_default;
  }
  *(undefined1 *)(param_1 + 10) = uVar5;
switchD_004238b0_default:
  cVar1 = *(char *)(param_1 + 8);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(char *)(param_1 + 9) = cVar1;
  *(char *)(param_1 + 8) = *(char *)(param_1 + 10);
  if (cVar1 == *(char *)(param_1 + 10)) {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  iVar3 = fn_00178f9c(*(undefined4 *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x1c));
  iVar6 = *(int *)(iVar3 + 0x10);
  piVar4 = (int *)fn_006f7a84(DAT_008977e0);
  iVar3 = (**(code **)(*piVar4 + 0xc0))(piVar4,0);
  cVar1 = '\0';
  if (iVar3 != 0) {
    cVar1 = *(char *)(param_1 + 8);
  }
  *(byte *)(iVar6 + 0x44) = *(byte *)(iVar6 + 0x44) & 0xfe | (iVar3 != 0 && cVar1 != '\0');
  return;
}



void fn_00423820(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = fn_001481c8(*(undefined4 *)(param_1 + 0x14),L"rom:/data/Layout/common/flight_window.arc",
                       &DAT_00423874,1,1);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = fn_001923e0(*(undefined4 *)(param_1 + 0x14),(char *)&DAT_007bfb54,0,1,0xb);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  *(undefined1 *)(param_1 + 10) = 0;
  return;
}


