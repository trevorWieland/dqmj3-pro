#include "003f9920_003fd8a0.h"



void fn_003fd8a0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_20 [4];
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    local_20[0] = 0xfbe;
    local_20[1] = 0xfbf;
    local_20[2] = 0xfc0;
    local_20[3] = 0xfc1;
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
    if ((iVar1 < 1) && (2 < param_2)) {
      param_2 = param_2 + 1;
    }
    uVar2 = fn_00391d98(param_2);
    uVar3 = fn_0022eefc((int)(short)local_20[param_2],0);
    uVar2 = fn_0022f750(uVar2);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
  }
  return;
}



undefined4 fn_003fd4d0(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined1 local_23;
  undefined1 local_1e;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x60);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894b34) goto LAB_003fd520;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003fd520:
  *(undefined4 **)(param_1 + 0xb8) = puVar1;
  fn_002c330c(&local_50);
  local_50 = DAT_00894b9c;
  local_4c = DAT_00894ba0;
  iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
  if (iVar3 < 1) {
    local_48 = 3;
  }
  else {
    local_48 = 4;
  }
  local_48 = local_48 + 1;
  iVar3 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),0x3ec);
  if (iVar3 < 1) {
    local_3c = 3;
  }
  else {
    local_3c = 4;
  }
  local_44 = 0;
  uVar4 = fn_0022f750((char *)&DAT_003fd6fc);
  fn_00147974(&local_34,uVar4);
  local_1e = 1;
  local_23 = 1;
  uVar4 = fn_0022f750((char *)&DAT_003fd70c);
  fn_00147974(&local_28,uVar4);
  fn_002c29a0(param_1,&local_50);
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar5 = local_34 + -3;
    iVar3 = *piVar5;
    if ((iVar3 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar3 + -1, iVar3 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  return 1;
}



undefined4 * fn_003fc6fc(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003e2cbc();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_0083626c;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00290ba4(iVar2,param_2);
  }
  puVar1[0x28] = uVar3;
  return puVar1;
}



undefined4 * fn_003fbe64(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)fn_003e2a68();
  puVar1[0x27] = 0;
  *puVar1 = &DAT_00835ff8;
  iVar2 = fn_00145b00(0x10,&DAT_00812c8c);
  uVar3 = 0;
  if (iVar2 != 0) {
    uVar3 = fn_00290ba4(iVar2,param_2);
  }
  puVar1[0x28] = uVar3;
  return puVar1;
}



undefined4 fn_003fa5a4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  int iVar12;
  undefined1 *local_150;
  int iStack_14c;
  int iStack_148;
  undefined1 *local_144;
  undefined1 auStack_140 [28];
  short local_124;
  undefined1 auStack_50 [32];
  int local_30;
  int *local_2c;
  
  param_1[0x1f] = 4;
  (**(code **)(*param_1 + 0x118))(param_1,DAT_00895410,DAT_00895414,DAT_00895418);
  uVar2 = fn_0022f750((char *)&DAT_003fa924);
  fn_0022cd58(param_1,uVar2);
  puVar7 = (undefined4 *)param_1[0x26];
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_003fa624;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_003fa624:
  fn_00385b60(param_1,puVar7[0xb]);
  local_30 = fn_00178f9c(param_1[0x19],param_1[0x1b]);
  puVar7 = (undefined4 *)param_1[0x26];
  uVar2 = *(undefined4 *)(local_30 + 0x10);
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
    do {
      if (puVar3 == &DAT_008951b8) goto LAB_003fa684;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar7 = (undefined4 *)0x0;
LAB_003fa684:
  uVar4 = puVar7[7];
  uVar2 = fn_0068897c(uVar2,(char *)&DAT_003fa934);
  fn_00190d50(uVar2,uVar4);
  iVar8 = 0;
  do {
    iVar11 = 0;
    local_2c = param_1 + iVar8 * 4;
    iVar9 = 0;
    iVar12 = 0;
    do {
      puVar10 = (undefined1 *)(iVar11 + iVar8 * 4);
      local_150 = puVar10;
      fn_0017d96c(auStack_50,0x20,0x1f,(char *)&DAT_003fa948);
      uVar2 = fn_00689220(local_30,auStack_50);
      iVar5 = fn_00145b00(0xd4,&DAT_00812c8c);
      piVar6 = (int *)0x0;
      if (iVar5 != 0) {
        local_150 = (undefined1 *)param_1[0x12];
        piVar6 = (int *)fn_002b44c0(iVar5,param_1[1],uVar2,1);
      }
      (**(code **)(*piVar6 + 0x10))(piVar6);
      piVar1 = local_2c;
      local_2c[iVar11 + 0x27] = (int)piVar6;
      local_150 = puVar10;
      fn_0017d96c(auStack_50,0x20,0x1f,(char *)&DAT_003fa95c);
      uVar2 = fn_00689220(local_30,auStack_50);
      iVar5 = fn_00145b00(0x38,&DAT_00812c8c);
      piVar6 = (int *)0x0;
      if (iVar5 != 0) {
        local_150 = (undefined1 *)param_1[0x12];
        iStack_14c = param_1[0x1a];
        iStack_148 = param_1[0x1b];
        local_144 = auStack_50;
        piVar6 = (int *)fn_004101f4(iVar5,param_1[1],uVar2,1);
      }
      (**(code **)(*piVar6 + 0x10))(piVar6);
      piVar1[iVar11 + 0x2f] = (int)piVar6;
      fn_00301f50(auStack_140,0xf0);
      while (local_124 == 0) {
        if ((3 < iVar9) || (0 < iVar12)) goto LAB_003fa8dc;
        puVar7 = (undefined4 *)param_1[0x26];
        if (iVar8 == 0) {
          if (puVar7 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
            do {
              if (puVar3 == &DAT_008951b8) goto LAB_003fa878;
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
          puVar7 = (undefined4 *)0x0;
LAB_003fa878:
          uVar2 = fn_006ce918(puVar7,iVar9);
        }
        else {
          if (puVar7 != (undefined4 *)0x0) {
            puVar3 = (undefined4 *)(**(code **)*puVar7)(puVar7);
            do {
              if (puVar3 == &DAT_008951b8) goto LAB_003fa814;
              puVar3 = (undefined4 *)*puVar3;
            } while (puVar3 != (undefined4 *)0x0);
          }
          puVar7 = (undefined4 *)0x0;
LAB_003fa814:
          uVar2 = fn_006ce908(puVar7,iVar9);
        }
        fn_0017821c(auStack_140,uVar2,0xf0);
        iVar9 = iVar9 + 1;
      }
      fn_0020bbc4(&local_150,auStack_140);
      fn_006bfe90(&iStack_14c);
      iVar12 = fn_001cab7c();
LAB_003fa8dc:
      local_150 = auStack_140;
      fn_003fa974(param_1,iVar8,iVar11,iVar9 + -1);
      iVar11 = iVar11 + 1;
      iVar12 = iVar12 + -1;
    } while (iVar11 < 4);
    iVar8 = iVar8 + 1;
    if (1 < iVar8) {
      return 1;
    }
  } while( true );
}



undefined4 fn_003f9920(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint in_fpscr;
  wchar16 *local_a8;
  char *pcStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  int local_94;
  undefined4 local_90;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [4];
  undefined1 auStack_84 [4];
  undefined1 auStack_80 [4];
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_74;
  undefined1 local_70;
  undefined1 auStack_6c [4];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [16];
  undefined1 auStack_48 [36];
  
  iVar1 = (**(code **)(*param_1 + 0x140))(param_1);
  uVar8 = *(undefined4 *)(iVar1 + 0xc);
  uVar5 = *(undefined4 *)(iVar1 + 0x10);
  iVar7 = *(int *)(iVar1 + 0x14);
  uVar2 = *(undefined4 *)(iVar1 + 0x18);
  uVar3 = *(undefined4 *)(iVar1 + 0x1c);
  fn_00397774(&local_a8);
  local_74 = 3;
  local_70 = 0;
  fn_001028d4(auStack_48,(char *)&DAT_003f9b2c,uVar8);
  uVar8 = fn_0025f9d8(DAT_00897800,uVar2,auStack_48);
  fn_00147974(auStack_68,uVar8);
  fn_001028d4(auStack_48,&DAT_003f9b40,uVar5);
  uVar3 = fn_0025f9d8(DAT_00897800,uVar3,auStack_48);
  fn_00147974(auStack_60,uVar3);
  fn_001028d4(auStack_48,(char *)&DAT_003f9b4c,iVar7);
  uVar2 = fn_0025f9d8(DAT_00897800,uVar2,auStack_48);
  fn_00147974(auStack_58,uVar2);
  iVar4 = 0;
  iVar6 = 0;
  local_a8 = L"rom:/data/Layout/common/common_0200.arc";
  pcStack_a4 = (char *)&DAT_003f9b5c;
  iVar1 = fn_00410384();
  if (0 < iVar1) {
    do {
      iVar1 = fn_004103b0(iVar6);
      if ((iVar1 == iVar7) && (iVar1 = fn_004103d8(iVar6), iVar1 != 0)) {
        iVar4 = iVar4 + 1;
      }
      iVar6 = iVar6 + 1;
      iVar1 = fn_00410384();
    } while (iVar6 < iVar1);
  }
  local_a0 = 6;
  uStack_9c = 0;
  local_90 = VectorSignedToFloat(iVar4,(byte)(in_fpscr >> 0x16) & 3);
  local_98 = 0;
  local_94 = iVar4;
  uVar2 = fn_0022f750((char *)&DAT_003f9b70);
  fn_00147974(auStack_8c,uVar2);
  fn_00147974(auStack_88,&DAT_003f9b48);
  fn_00147974(auStack_84,&DAT_003f9b48);
  fn_00147974(auStack_80,&DAT_003f9b48);
  local_7c = 1;
  local_7b = 0;
  local_7a = 0;
  local_79 = 0;
  uVar2 = fn_00397618(param_1,&local_a8);
  fn_00100414(auStack_6c,&LAB_0059e0e0,8,4);
  iVar1 = fn_001588d4(auStack_80);
  iVar1 = fn_001588d4(iVar1 + -4);
  iVar1 = fn_001588d4(iVar1 + -4);
  fn_001588d4(iVar1 + -4);
  return uVar2;
}


