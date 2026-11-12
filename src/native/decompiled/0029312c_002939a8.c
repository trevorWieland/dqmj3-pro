#include "0029312c_002939a8.h"



void fn_002939a8(void)

{
  undefined1 auStack_1398 [28];
  undefined4 local_137c;
  undefined4 local_1376;
  undefined4 local_1372;
  undefined2 local_136e;
  undefined4 local_136c;
  undefined4 local_1368;
  undefined2 local_1364;
  undefined2 local_1362;
  undefined4 local_1338;
  undefined1 auStack_12c8 [82];
  undefined4 local_1276;
  undefined4 local_1272;
  undefined2 local_126e;
  undefined4 local_126c;
  undefined4 uStack_1268;
  undefined4 uStack_1264;
  undefined4 uStack_1260;
  undefined4 local_125c;
  undefined4 local_1258;
  undefined4 uStack_1254;
  undefined4 uStack_1250;
  undefined4 uStack_124c;
  undefined4 uStack_1248;
  undefined4 local_ac0;
  undefined1 local_927;
  undefined1 auStack_910 [24];
  undefined4 local_8f8;
  undefined4 local_8f2;
  undefined4 local_8ee;
  undefined2 local_8ea;
  undefined4 local_8e8;
  undefined4 local_8e4;
  undefined2 local_8e0;
  undefined2 local_8de;
  undefined4 local_8b4;
  undefined1 auStack_844 [82];
  undefined4 local_7f2;
  undefined4 local_7ee;
  undefined2 local_7ea;
  undefined4 local_7e8;
  undefined4 uStack_7e4;
  undefined4 uStack_7e0;
  undefined4 uStack_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 local_3c;
  
  fn_0017821c(auStack_1398,*(int *)(DAT_00897820 + 0x28) + 0x48,0xa88);
  fn_002908c8(auStack_910);
  local_137c = local_8f8;
  local_1376 = local_8f2;
  local_1372 = local_8ee;
  local_136e = local_8ea;
  local_136c = local_8e8;
  local_1368 = local_8e4;
  local_1364 = local_8e0;
  local_1362 = local_8de;
  local_1338 = local_8b4;
  fn_0017821c(auStack_12c8,auStack_844,0x50);
  local_1276 = local_7f2;
  local_1272 = local_7ee;
  local_126e = local_7ea;
  local_126c = local_7e8;
  uStack_1268 = uStack_7e4;
  uStack_1264 = uStack_7e0;
  uStack_1260 = uStack_7dc;
  local_125c = local_7d8;
  local_1258 = local_7d4;
  uStack_1254 = uStack_7d0;
  uStack_1250 = uStack_7cc;
  uStack_124c = uStack_7c8;
  uStack_1248 = uStack_7c4;
  local_ac0 = local_3c;
  local_927 = 3;
  fn_0017821c(*(int *)(DAT_00897820 + 0x28) + 0x48,auStack_1398,0xa88);
  return;
}



void fn_002937a8(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_1fcc [4];
  undefined1 auStack_1fc8 [2696];
  undefined1 auStack_1540 [2696];
  undefined1 auStack_ab8 [2720];
  
  fn_00301f50(auStack_ab8,0xa88);
  fn_00664a8c(auStack_1fcc);
  fn_006649e0(auStack_1fcc);
  iVar1 = fn_00662bd0();
  puVar2 = (undefined4 *)(iVar1 + 8);
  fn_00662d30(*puVar2,iVar1 + 0xc,1,0,0,0);
  uVar3 = fn_006f5d90(iVar1 + 0xc,0);
  fn_0017821c(auStack_1fc8,uVar3,0x1510);
  fn_006647e8(auStack_1540,auStack_ab8);
  fn_006638f8(*puVar2,iVar1 + 0xc,1);
  fn_00663a04(puVar2,auStack_1fc8);
  fn_006636c8(*puVar2,iVar1 + 0x18,1);
  fn_00664a14(auStack_1fcc);
  fn_00664a98(auStack_1fcc);
  return;
}



void fn_0029376c(undefined4 param_1)

{
  undefined1 auStack_aa0 [4];
  undefined1 auStack_a9c [2700];
  
  fn_00301f50(auStack_aa0,0xa88);
  fn_00290734(auStack_a9c);
  fn_0044aa54(param_1,auStack_aa0);
  return;
}



undefined4 fn_00293638(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_2a50 [2676];
  uint local_1fdc;
  undefined1 auStack_1fc4 [4];
  undefined1 auStack_1fc0 [2696];
  undefined1 auStack_1538 [2696];
  undefined1 auStack_ab0 [2712];
  
  fn_0017821c(auStack_2a50,param_1,0xa88);
  fn_00664a8c(auStack_1fc4);
  fn_006649e0(auStack_1fc4);
  iVar1 = fn_00662bd0();
  puVar2 = (undefined4 *)(iVar1 + 8);
  fn_00662d30(*puVar2,iVar1 + 0xc,1,0,0,0);
  uVar3 = fn_006f5d90(iVar1 + 0xc,0);
  fn_0017821c(auStack_1fc0,uVar3,0x1510);
  fn_0017821c(auStack_ab0,*(int *)(DAT_00897820 + 0x28) + 0x48,0xa88);
  uVar3 = fn_00293ce4(auStack_ab0,auStack_2a50);
  local_1fdc = local_1fdc & 0xffffffd0;
  fn_006647e8(auStack_1538,auStack_2a50);
  fn_006638f8(*puVar2,iVar1 + 0xc,1);
  fn_00663a04(puVar2,auStack_1fc0);
  fn_006636c8(*puVar2,iVar1 + 0x18,1);
  fn_00664a14(auStack_1fc4);
  fn_00664a98(auStack_1fc4);
  return uVar3;
}



void fn_00293604(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0xa70) == '\x06') {
    uVar1 = fn_002ea524((int)*(short *)(param_1 + 0xa72));
    fn_002508f4(uVar1,*(undefined4 *)(param_1 + 0xa80));
    return;
  }
  return;
}



char * fn_002934a8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  undefined1 auStack_28 [4];
  int local_24 [2];
  
  pcVar4 = (char *)0x0;
  uVar3 = 0;
  do {
    iVar2 = param_1 + 0x154 + uVar3 * 0xf0;
    iVar1 = fn_001a46f4((int)*(short *)(iVar2 + 0x1c));
    if (iVar1 != 0) {
      local_24[0] = iVar2;
      if ((iVar2 == 0) || (iVar1 = fn_0024e350(), iVar1 == 0)) {
        fn_00246e68(auStack_28);
        fn_00246e00(auStack_28);
        iVar1 = fn_006b5424(auStack_28,iVar2 + 4);
        fn_00246e74(auStack_28);
        if (iVar1 == 0) {
          iVar1 = fn_006bf198(local_24);
          if ((iVar1 == 0) || (iVar1 = fn_006bf2b4(local_24), iVar1 == 0)) {
            pcVar4 = (char *)0x0;
            goto LAB_00293580;
          }
          pcVar4 = "MenuMessagePassingErrorGuest";
        }
        else {
          pcVar4 = "MenuMessagePassingErrorMonsterName";
        }
      }
      else {
        pcVar4 = "MenuMessagePassingErrorMonster";
      }
      if (pcVar4 != (char *)0x0) goto LAB_002935cc;
    }
LAB_00293580:
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  fn_00246e68(auStack_28);
  fn_00246e00(auStack_28);
  iVar1 = fn_006b5424(auStack_28,param_1 + 4);
  fn_00246e74(auStack_28);
  if (iVar1 != 0) {
    pcVar4 = "MenuMessagePassingErrorPlayerName";
  }
LAB_002935cc:
  return pcVar4;
}



char * fn_00293330(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 auStack_28 [4];
  int local_24 [2];
  
  pcVar4 = (char *)0x0;
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar1 = fn_006b83e4(uVar6);
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      iVar2 = fn_0028b0a0(uVar6,iVar5);
      local_24[0] = iVar2;
      if ((iVar2 == 0) || (iVar3 = fn_0024e350(), iVar3 == 0)) {
        fn_00246e68(auStack_28);
        fn_00246e00(auStack_28);
        iVar2 = fn_006b5424(auStack_28,iVar2 + 4);
        fn_00246e74(auStack_28);
        if (iVar2 != 0) {
          pcVar4 = "MenuMessagePassingErrorMonsterName";
          goto LAB_00293398;
        }
        iVar2 = fn_006bf198(local_24);
        if ((iVar2 != 0) && (iVar2 = fn_006bf2b4(local_24), iVar2 != 0)) {
          pcVar4 = "MenuMessagePassingErrorGuest";
          goto LAB_00293398;
        }
        pcVar4 = (char *)0x0;
      }
      else {
        pcVar4 = "MenuMessagePassingErrorMonster";
LAB_00293398:
        if (pcVar4 != (char *)0x0) goto LAB_00293468;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar1);
  }
  uVar6 = *(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4);
  fn_00246e68(auStack_28);
  fn_00246e00(auStack_28);
  iVar1 = fn_006b5424(auStack_28,uVar6);
  fn_00246e74(auStack_28);
  if (iVar1 != 0) {
    pcVar4 = "MenuMessagePassingErrorStartPlayerName";
  }
LAB_00293468:
  return pcVar4;
}



void fn_0029331c(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = 0x74;
  *param_2 = 10;
  return;
}



void fn_0029312c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_2018 [4];
  undefined1 auStack_2014 [88];
  undefined2 local_1fbc;
  undefined8 local_1738;
  undefined4 uStack_1730;
  undefined4 uStack_172c;
  undefined4 uStack_1728;
  undefined4 uStack_1724;
  undefined4 uStack_1720;
  undefined4 uStack_171c;
  undefined4 local_1718;
  undefined4 uStack_1714;
  undefined8 local_1590;
  undefined4 local_1588;
  undefined4 local_1584;
  undefined4 local_1580;
  undefined4 local_157c;
  undefined4 local_1578;
  undefined4 local_1574;
  undefined4 local_1570;
  undefined4 local_156c;
  undefined1 auStack_1564 [4];
  undefined4 local_1560;
  undefined4 uStack_155c;
  undefined4 local_1558;
  undefined4 uStack_1554;
  undefined1 auStack_1550 [5424];
  
  fn_00664a8c(auStack_1564);
  fn_006649e0(auStack_1564);
  iVar2 = fn_00662bd0();
  puVar5 = (undefined4 *)(iVar2 + 8);
  fn_00662d30(*(undefined4 *)(iVar2 + 8),iVar2 + 0xc,1,0,0,0);
  fn_00662a34(auStack_1550);
  iVar3 = *(int *)(iVar2 + 0x10) - *(int *)(iVar2 + 0xc);
  iVar1 = iVar3 >> 0x1f;
  if (iVar3 / 0x1528 + iVar1 != iVar1) {
    uVar4 = fn_006f5d90(iVar2 + 0xc,0);
    fn_0017821c(auStack_1550,uVar4,0x1510);
  }
  fn_0017821c(auStack_2018,*(int *)(DAT_00897820 + 0x28) + 0x48,0xa88);
  local_1590 = (local_1590 & ~((unsigned int)0xffffffff << 0)) | ((unsigned int)(0) & 0xffffffff);
  local_1590 = (local_1590 & ~((unsigned long long)0xffffffff << 32)) | (((unsigned long long)(0) & 0xffffffff) << 32);
  local_1588 = 0;
  local_1584 = 0;
  local_1580 = 0;
  local_157c = 0;
  local_1578 = 0;
  local_1574 = 0;
  local_1570 = 0;
  local_156c = 0;
  fn_00114248(&local_1558);
  local_1560 = local_1558;
  uStack_155c = uStack_1554;
  local_1590 = fn_00691514(&local_1560);
  fn_001003e0(&local_1584,auStack_2014);
  local_1588 = CONCAT22(local_1fbc,(undefined2)local_1588);
  uStack_1730 = local_1588;
  uStack_172c = local_1584;
  uStack_1728 = local_1580;
  uStack_1724 = local_157c;
  uStack_1720 = local_1578;
  uStack_171c = local_1574;
  local_1718 = local_1570;
  uStack_1714 = local_156c;
  local_1738 = local_1590;
  fn_006647e8(auStack_1550,auStack_2018);
  fn_006638f8(*puVar5,iVar2 + 0xc,1);
  fn_00663a04(puVar5,auStack_1550);
  fn_006636c8(*puVar5,iVar2 + 0x18,1);
  fn_00664a14(auStack_1564);
  uVar6 = fn_00453de4(0x1acb);
  fn_0028bb7c(*(undefined4 *)(DAT_00897804 + 0x38),*(undefined4 *)(DAT_00897804 + 0x38),(int)uVar6,
               (int)((ulonglong)uVar6 >> 0x20));
  fn_00664a98(auStack_1564);
  return;
}


