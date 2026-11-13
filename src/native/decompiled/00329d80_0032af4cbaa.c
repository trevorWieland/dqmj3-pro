#include "00329d80_0032af4cbaa.h"



undefined4 fn_0032a8e8(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  int iVar7;
  int iVar8;
  byte extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 *puVar9;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  ushort local_1558 [2];
  char local_1554;
  ushort local_1550 [2];
  byte local_154c;
  undefined4 local_1548;
  undefined1 auStack_1540 [2264];
  undefined4 local_c68;
  uint local_acc;
  undefined1 auStack_ab8 [2696];
  undefined1 auStack_30 [8];
  
  local_1548 = *(undefined4 *)(DAT_00897804 + 0x30);
  uVar1 = fn_00292f20();
  fn_00664a8c(auStack_30);
  iVar2 = fn_006649e0(auStack_30);
  if (iVar2 == 2) {
    iVar2 = fn_00662bd0();
    fn_00662d30(*(undefined4 *)(iVar2 + 0x30),iVar2 + 0x34,0,0,&LAB_002922fc,fn_00292868);
    uVar13 = (*(int *)(iVar2 + 0x38) - *(int *)(iVar2 + 0x34)) / 0x1528;
    if (uVar13 == 0) {
      fn_0032a7e0(param_1);
    }
    else {
      uVar11 = 0;
      do {
        uVar3 = fn_006be118(uVar1);
        if (7 < uVar3) break;
        uVar10 = *(undefined4 *)(DAT_00897804 + 0x30);
        uVar4 = fn_006b86f4(uVar10);
        fn_00166824(local_1550,uVar4);
        if (local_154c < 100) {
          iVar5 = fn_00292f20(local_154c,100);
          if (*(char *)(iVar5 + 0xad3) != '\0') {
            iVar5 = fn_00292f20();
            *(undefined1 *)(iVar5 + 0xad3) = 0;
            uVar3 = fn_0032ac8c(param_1);
            local_154c = local_154c + 1;
            goto LAB_0032aa24;
          }
        }
        else {
          fn_00300f74();
          local_154c = extraout_r1;
          iVar5 = fn_00163868(2);
          uVar3 = (uint)(byte)(&DAT_007c7f5e)[iVar5];
LAB_0032aa24:
          if (uVar3 != 0) {
            fn_00291f88(uVar3,auStack_ab8);
            uVar4 = fn_00292f20();
            fn_0030cf58(uVar4,auStack_ab8,&DAT_0032a8e0);
            local_1550[0] = local_1550[0] + 1;
            puVar6 = &DAT_007c7f5c;
            if (local_1550[0] < 10000) {
              puVar6 = local_1550;
            }
            local_1550[0] = *puVar6;
          }
        }
        fn_00166818(uVar10,local_1550);
        iVar5 = fn_006f5d90(iVar2 + 0x34,uVar11);
        iVar7 = fn_006be118(uVar1);
        iVar8 = fn_006f5ce4(iVar5);
        if (8 < (uint)(iVar8 + iVar7)) break;
        uVar4 = fn_006b86f4(local_1548);
        fn_00166824(local_1558,uVar4);
        iVar7 = 0;
        do {
          iVar12 = iVar5 + iVar7 * 0xa88;
          iVar8 = fn_006f5ddc(iVar12);
          if (iVar8 != 0) {
            fn_006f5dbc(iVar12,auStack_1540);
            fn_002e2a18(*(undefined4 *)(DAT_00897804 + 0x58),local_c68);
            fn_00293604(auStack_1540);
            puVar9 = &LAB_0032ac1c;
            if (iVar7 != 0) {
              local_acc = local_acc | 0x20;
              iVar8 = fn_006be118(uVar1,extraout_r1_00,&LAB_0032ac1c);
              iVar8 = fn_006be0f4(uVar1,iVar8 + -1);
              puVar9 = (undefined1 *)(iVar8 + 4);
            }
            fn_0030cf58(uVar1,auStack_1540,puVar9);
            local_1554 = local_1554 + '\x01';
            local_1558[0] = local_1558[0] + 1;
            if (9999 < local_1558[0]) {
              local_1558[0] = 9999;
            }
          }
          iVar7 = iVar7 + 1;
        } while (iVar7 < 2);
        fn_00166818(local_1548,local_1558);
        fn_00663868(*(undefined4 *)(iVar2 + 0x30),iVar2 + 0x34,uVar11,0);
        uVar11 = uVar11 + 1;
      } while (uVar11 < uVar13);
    }
  }
  fn_00664a14(auStack_30);
  uVar1 = fn_006be118(uVar1);
  fn_00664a98(auStack_30);
  return uVar1;
}


