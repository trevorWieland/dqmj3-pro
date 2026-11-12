#include "002de130_002e4b4c.h"



void fn_002e4b4c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = fn_006ba220();
  if (iVar1 == 0) {
    uVar2 = fn_0022f750(*(undefined4 *)(*(int *)(param_1 + 0xb4) + param_2 * 0xc));
    uVar3 = fn_0022eefc((int)*(short *)(*(int *)(param_1 + 0xb4) + param_2 * 0xc + 8),0);
    fn_00321118(*(undefined4 *)(param_1 + 0x58),uVar2,uVar3);
    fn_00689bd0(param_1,0x49,0);
    return;
  }
  return;
}



undefined4 fn_002e47ac(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  undefined4 local_40;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined1 local_1f;
  undefined1 local_1a;
  
  puVar6 = (undefined4 *)param_1[6];
  if (puVar6 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar6)(puVar6);
    do {
      if (puVar1 == &DAT_008939c0) goto LAB_002e47f8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar6 = (undefined4 *)0x0;
LAB_002e47f8:
  param_1[0x2c] = (int)puVar6;
  iVar2 = fn_00154ac8(0x34);
  if (iVar2 == 0) {
    fn_0078cf1c(param_1 + 0x2d,2,0,0,0);
    uVar3 = 0;
    iVar2 = param_1[0x2e] - param_1[0x2d] >> 0x1f;
    if ((param_1[0x2e] - param_1[0x2d]) / 0xc + iVar2 != iVar2) {
      do {
        uVar4 = uVar3 + 1;
        uVar7 = (&DAT_007c6a24)[uVar3 * 3];
        uVar8 = (&DAT_007c6a28)[uVar3 * 3];
        puVar6 = (undefined4 *)(param_1[0x2d] + uVar3 * 0xc);
        *puVar6 = (&DAT_007c6a20)[uVar3 * 3];
        puVar6[1] = uVar7;
        puVar6[2] = uVar8;
        uVar3 = uVar4;
      } while (uVar4 < (uint)((param_1[0x2e] - param_1[0x2d]) / 0xc));
    }
  }
  else {
    fn_0078cf1c(param_1 + 0x2d,6,0,0,0);
    uVar3 = 0;
    iVar2 = param_1[0x2e] - param_1[0x2d] >> 0x1f;
    if ((param_1[0x2e] - param_1[0x2d]) / 0xc + iVar2 != iVar2) {
      do {
        uVar4 = uVar3 + 1;
        uVar7 = (&DAT_007c69dc)[uVar3 * 3];
        uVar8 = (&DAT_007c69e0)[uVar3 * 3];
        puVar6 = (undefined4 *)(param_1[0x2d] + uVar3 * 0xc);
        *puVar6 = (&DAT_007c69d8)[uVar3 * 3];
        puVar6[1] = uVar7;
        puVar6[2] = uVar8;
        uVar3 = uVar4;
      } while (uVar4 < (uint)((param_1[0x2e] - param_1[0x2d]) / 0xc));
    }
  }
  fn_002c330c(&local_4c);
  local_4c = DAT_008938e0;
  local_48 = DAT_008938e4;
  uVar7 = fn_0022f750((char *)&DAT_002e4ad8);
  fn_00147974(&local_30,uVar7);
  local_44 = (param_1[0x2e] - param_1[0x2d]) / 0xc;
  local_40 = *(undefined4 *)(param_1[0x2c] + 8);
  local_1f = 1;
  uVar7 = fn_0022f750(&DAT_002e4ae4);
  fn_00147974(&local_24,uVar7);
  local_1a = 1;
  fn_002c29a0(param_1,&local_4c);
  (**(code **)(*param_1 + 0x124))(param_1);
  fn_00689efc(param_1,0x90,0);
  if (local_24 != &DAT_008f9cf4) {
    piVar5 = local_24 + -3;
    iVar2 = *piVar5;
    if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_24 + -3,local_24[-2] + 8,0);
    }
  }
  if (local_28 != &DAT_008f9cf4) {
    piVar5 = local_28 + -3;
    iVar2 = *piVar5;
    if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_28 + -3,local_28[-2] + 8,0);
    }
  }
  if (local_2c != &DAT_008f9cf4) {
    piVar5 = local_2c + -3;
    iVar2 = *piVar5;
    if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar5 = local_30 + -3;
    iVar2 = *piVar5;
    if ((iVar2 == -1) || ((piVar5 != &DAT_008f9ce8 && (*piVar5 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  return 1;
}



/* WARNING: Removing unreachable block (ram,0x002defa0) */

void fn_002deec4(int param_1)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  *(bool *)(param_1 + 0xfd) = *(char *)(param_1 + 0xfd) == '\0';
  fn_0022e4a8(*(undefined4 *)(param_1 + 0xf4),*(undefined1 *)(param_1 + 0xfd));
  fn_002de434(param_1);
  uVar2 = 0;
  if ((*(char *)(param_1 + 0xfd) == '\0') || (*(char *)(param_1 + 0xfd) == '\x01')) {
    uVar2 = fn_00231cb8();
  }
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
  iVar3 = *(int *)(param_1 + 0x74);
  uVar1 = 0xff;
  if (*(byte *)(param_1 + 0xfd) < 2) {
    uVar1 = 0;
  }
  *(undefined1 *)(iVar3 + 0x83) = uVar1;
  fn_0031f954(iVar3,0);
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}



void fn_002de950(int param_1,short param_2,undefined4 param_3,undefined4 *param_4)

{
  short sVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *local_10;
  
  local_10 = param_4;
  fn_0036312c();
  sVar1 = fn_006ba284(param_1);
  uVar2 = fn_002b1390(*(undefined4 *)(param_1 + 0xf4),(int)(short)(param_2 + sVar1 * 10));
  fn_0023097c(&local_10,uVar2,0);
  uVar2 = fn_0022ee7c(uVar2);
  fn_00321118(*(undefined4 *)(param_1 + 0x58),local_10,uVar2);
  fn_00689bd0(param_1,0x49,0);
  if (local_10 != &DAT_008f9cf4) {
    piVar3 = local_10 + -3;
    iVar4 = *piVar3;
    if ((iVar4 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar4 + -1, iVar4 == 0)))) {
      fn_001008c4(local_10 + -3,local_10[-2] + 8,0);
    }
  }
  return;
}



undefined4 fn_002de130(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  wchar16 *local_54;
  char *pcStack_50;
  int local_4c;
  undefined4 local_48;
  int local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined4 *local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
  undefined4 local_20;
  undefined4 local_1c [2];
  
  fn_00362e84();
  local_1c[0] = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x14);
  local_20 = *(undefined4 *)(*(int *)(param_1 + 0xf0) + 0x10);
  fn_002c374c(param_1,local_1c,&local_20,10,
               (int)(short)(*(int *)(*(int *)(param_1 + 0xf4) + 8) -
                            *(int *)(*(int *)(param_1 + 0xf4) + 4) >> 1));
  fn_002c330c(&local_54);
  local_54 = L"rom:/data/Layout/common/common_0100.arc";
  pcStack_50 = "common_0100.bflyt";
  local_40 = (int)(short)(*(int *)(*(int *)(param_1 + 0xf4) + 8) -
                          *(int *)(*(int *)(param_1 + 0xf4) + 4) >> 1);
  if ((short)(*(int *)(*(int *)(param_1 + 0xf4) + 8) - *(int *)(*(int *)(param_1 + 0xf4) + 4) >> 1)
      < 10) {
    local_4c = local_40;
  }
  else {
    local_4c = 10;
  }
  local_48 = local_1c[0];
  uVar1 = fn_0036307c(param_1);
  fn_00147974(&local_38,uVar1);
  local_28 = 1;
  local_27 = 0;
  local_26 = 1;
  uVar1 = fn_0022f750((char *)&DAT_002de6dc);
  fn_00147974(&local_34,uVar1);
  local_25 = 1;
  uVar1 = 0;
  if ((*(char *)(param_1 + 0xfd) == '\0') || (*(char *)(param_1 + 0xfd) == '\x01')) {
    uVar1 = fn_00231cb8();
  }
  fn_00147974(&local_30,uVar1);
  local_3c = 0x428c0000;
  fn_002c29a0(param_1,&local_54);
  fn_0031f8fc(*(undefined4 *)(param_1 + 0x74),0,0,0,0xffffffff);
  iVar2 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar2 + 0x81) = 1;
  fn_0031f3f4(iVar2,0);
  if (local_2c != &DAT_008f9cf4) {
    piVar3 = local_2c + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
    }
  }
  if (local_30 != &DAT_008f9cf4) {
    piVar3 = local_30 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_30 + -3,local_30[-2] + 8,0);
    }
  }
  if (local_34 != &DAT_008f9cf4) {
    piVar3 = local_34 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_34 + -3,local_34[-2] + 8,0);
    }
  }
  if (local_38 != &DAT_008f9cf4) {
    piVar3 = local_38 + -3;
    iVar2 = *piVar3;
    if ((iVar2 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar2 + -1, iVar2 == 0)))) {
      fn_001008c4(local_38 + -3,local_38[-2] + 8,0);
    }
  }
  fn_0025f2d0(*(undefined4 *)(param_1 + 0x9c),local_20);
  *(undefined4 *)(*(int *)(param_1 + 0x90) + 0x3c) = local_20;
  *(undefined1 *)(param_1 + 0xfd) = *(undefined1 *)(*(int *)(param_1 + 0xf0) + 0xc);
  fn_002deee4(param_1,1);
  fn_002de434(param_1);
  fn_00689efc(param_1,0x2c,0);
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)(param_1 + 0xe4);
  *(undefined1 *)(param_1 + 0x104) = 1;
  return 1;
}



void fn_002deee4(int param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_2 == 0) {
    *(bool *)(param_1 + 0xfd) = *(char *)(param_1 + 0xfd) == '\0';
  }
  fn_0022e4a8(*(undefined4 *)(param_1 + 0xf4),*(undefined1 *)(param_1 + 0xfd));
  fn_002de434(param_1);
  uVar2 = 0;
  if ((*(char *)(param_1 + 0xfd) == '\0') || (*(char *)(param_1 + 0xfd) == '\x01')) {
    uVar2 = fn_00231cb8();
  }
  fn_00243550(*(undefined4 *)(param_1 + 0xa4),uVar2);
  iVar3 = *(int *)(param_1 + 0x74);
  uVar1 = 0xff;
  if (*(byte *)(param_1 + 0xfd) < 2) {
    uVar1 = 0;
  }
  *(undefined1 *)(iVar3 + 0x83) = uVar1;
  fn_0031f954(iVar3,0);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_001638a0();
  }
  return;
}


