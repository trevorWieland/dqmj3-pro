#include "001d2428_001d2cac.h"



void fn_001d2cac(int param_1)

{
  int iVar1;
  undefined2 *puVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  
  iVar1 = fn_00174828(DAT_008977e4);
  uVar3 = 0;
  do {
    iVar4 = param_1 + uVar3 * 0x24;
    psVar5 = (short *)(iVar4 + 0x11e4);
    if (*psVar5 != 0) {
      iVar4 = fn_001a46f4((int)*(short *)(iVar4 + 0x11e6));
      if (iVar4 != 0) {
        fn_001d068c(param_1,psVar5,iVar1 + (char)((char)uVar3 + '\x14') * 0x418 + -0x4080);
      }
    }
    uVar3 = uVar3 + 1;
  } while (uVar3 < 4);
  puVar2 = (undefined2 *)(iVar1 + 0x4288);
  iVar4 = fn_00174870(param_1);
  *puVar2 = *(undefined2 *)(iVar4 + 0x22);
  puVar2 = (undefined2 *)(iVar1 + 0x4298);
  iVar1 = fn_00174870(param_1);
  *puVar2 = *(undefined2 *)(iVar1 + 0x24);
  return;
}



undefined1 * fn_001d2a90(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined4 extraout_r1;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined1 auStack_28 [8];
  char local_20 [4];
  
  iVar1 = fn_00174828(DAT_008977e4);
  uVar6 = *(undefined4 *)(DAT_00897804 + 0xc);
  if ((param_2 != 0) && (iVar2 = fn_0028aec8(uVar6), iVar2 != 0)) {
    fn_0028b568(uVar6);
  }
  uVar7 = fn_006b83e4(uVar6);
  uVar3 = (undefined4)((ulonglong)uVar7 >> 0x20);
  iVar2 = 0;
  if (0 < (int)uVar7) {
    do {
      local_20[0] = (char)iVar2 + '\x10';
      uVar3 = fn_0028b0a0(uVar6,iVar2);
      fn_0020bbc4(auStack_28,uVar3);
      switch(*(undefined1 *)(param_1 + 4)) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
        uVar3 = 1;
        break;
      default:
        uVar3 = 0;
      }
      fn_003585b4(auStack_28,iVar1 + local_20[0] * 0x418 + -0x4080,uVar3);
      uVar3 = fn_00182988(DAT_008977e4);
      uVar3 = fn_0026a548(uVar3,local_20);
      fn_001d0628(param_1,auStack_28,uVar3);
      iVar2 = iVar2 + 1;
      uVar3 = extraout_r1;
    } while (iVar2 < (int)uVar7);
  }
  puVar4 = (undefined1 *)fn_006f4868(iVar1 + 0xe8,uVar3,0x20,0);
  if ((puVar4 == (undefined1 *)0x0) && (puVar4 = &DAT_00000001, *(char *)(iVar1 + 0xf9) != '\x01'))
  {
    puVar5 = (undefined1 *)fn_006b84b0(uVar6);
    iVar2 = 0;
    puVar4 = puVar5;
    if (0 < (int)puVar5) {
      do {
        local_20[0] = (char)iVar2 + '\x18';
        uVar3 = fn_0028b348(uVar6,iVar2);
        fn_0020bbc4(auStack_28,uVar3);
        switch(*(undefined1 *)(param_1 + 4)) {
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
          uVar3 = 1;
          break;
        default:
          uVar3 = 0;
        }
        fn_003585b4(auStack_28,iVar1 + local_20[0] * 0x418 + -0x4080,uVar3);
        uVar3 = fn_00182988(DAT_008977e4);
        uVar3 = fn_0026a548(uVar3,local_20);
        fn_001d0628(param_1,auStack_28,uVar3);
        iVar2 = iVar2 + 1;
        puVar4 = auStack_28;
      } while (iVar2 < (int)puVar5);
    }
  }
  return puVar4;
}



void fn_001d29b8(void)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  
  iVar3 = fn_00174828(DAT_008977e4);
  uVar8 = *(undefined4 *)(DAT_00897804 + 0xc);
  iVar4 = fn_006b83e4(uVar8);
  iVar7 = 0;
  if (0 < iVar4) {
    while( true ) {
      iVar5 = fn_00144df4(uVar8,iVar7);
      iVar6 = fn_006b846c(uVar8);
      if (iVar5 == iVar6) break;
      iVar7 = iVar7 + 1;
      if (iVar4 <= iVar7) {
        return;
      }
    }
    cVar1 = (char)iVar7 + '\x10';
    if ((int)cVar1 - 0x10U < 8) {
      iVar4 = iVar3 + cVar1 * 0x418;
      if (0 < *(short *)(iVar4 + -0x4080)) {
        cVar2 = *(char *)(iVar4 + -0x4019);
        bVar9 = cVar2 == '\0';
        if (bVar9) {
          cVar2 = *(char *)(iVar4 + -0x400a);
        }
        bVar10 = bVar9 && cVar2 == '\0';
        if (bVar9 && cVar2 == '\0') {
          bVar10 = *(char *)(iVar4 + -0x4018) == '\0';
        }
        if (bVar10) {
          fn_0017419c((short *)(iVar4 + -0x4080),1);
          *(char *)(iVar3 + 0x4282) = cVar1;
        }
      }
    }
  }
  return;
}



void fn_001d2900(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_38 [32];
  undefined1 local_18 [4];
  
  iVar1 = fn_00174828(DAT_008977e4);
  iVar2 = fn_00174870(param_1);
  *(short *)(iVar1 + 0x4288) = *(short *)(iVar2 + 0x22);
  iVar2 = fn_0069ccf8();
  if (iVar2 != 0) {
    *(undefined1 *)(iVar1 + 0x428c) = 1;
    if (*(short *)(iVar1 + 0x4288) == 1) {
      local_18[0] = 0x21;
      uVar3 = fn_00182988(DAT_008977e4);
      uVar3 = fn_0026a558(uVar3,local_18);
      fn_00301a9c(auStack_38,&DAT_007ba154,0x1e);
      fn_0029432c(*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4),auStack_38);
      fn_0033819c(uVar3,auStack_38);
    }
  }
  return;
}



void fn_001d2810(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  undefined4 *local_1c;
  
  uVar3 = 1;
  if (param_2 == 0) {
    fn_001d19e4(param_1,param_1 + 0x127e,param_1 + 0x1296,0,1);
  }
  else {
    uVar3 = 0x1b;
    fn_0022eb78(&local_1c);
    fn_001d19e4(param_1,local_1c,param_1 + 0x1296,param_1 + 0x1a38,1);
    if (local_1c != &DAT_008f9cf4) {
      piVar1 = local_1c + -3;
      iVar2 = *piVar1;
      if (iVar2 != -1) {
        if (piVar1 == &DAT_008f9ce8) goto LAB_001d28d4;
        *piVar1 = iVar2 + -1;
        if (iVar2 != 0) goto LAB_001d28d4;
      }
      fn_001008c4(local_1c + -3,local_1c[-2] + 8,0);
    }
  }
LAB_001d28d4:
  iVar2 = fn_00174828(DAT_008977e4);
  *(undefined2 *)(iVar2 + 0x4280) = uVar3;
  return;
}



void fn_001d2428(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  char cVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  undefined4 local_30;
  undefined1 auStack_2c [4];
  char local_28 [4];
  
  iVar5 = fn_00174828(DAT_008977e4);
  uVar9 = 0;
  do {
    fn_0020bbc4(&local_30,param_2 + uVar9 * 0xf0 + 100);
    uVar12 = fn_006bfda8(auStack_2c);
    uVar7 = (undefined4)((ulonglong)uVar12 >> 0x20);
    if ((int)uVar12 == 0) break;
    local_28[0] = (char)uVar9 + '\x14';
    switch(*(undefined1 *)(param_1 + 4)) {
    case 2:
    case 3:
    case 4:
    case 5:
    case 7:
      uVar7 = 1;
      break;
    default:
      uVar7 = 0;
    }
    fn_003585b4(&local_30,iVar5 + local_28[0] * 0x418 + -0x4080,uVar7);
    uVar7 = fn_00182988(DAT_008977e4);
    uVar7 = fn_0026a548(uVar7,local_28);
    fn_001d0628(param_1,&local_30,uVar7);
    uVar9 = uVar9 + 1;
    uVar7 = extraout_r1;
  } while (uVar9 < 4);
  iVar6 = fn_006f4868(iVar5 + 0xe8,uVar7,0x20,0);
  if ((iVar6 == 0) && (*(char *)(iVar5 + 0xf9) != '\x01')) {
    uVar9 = 0;
    do {
      fn_0020bbc4(&local_30,param_2 + uVar9 * 0xf0 + 0x424);
      iVar6 = fn_006bfda8(auStack_2c);
      if (iVar6 == 0) break;
      local_28[0] = (char)uVar9 + '\x1c';
      switch(*(undefined1 *)(param_1 + 4)) {
      case 2:
      case 3:
      case 4:
      case 5:
      case 7:
        uVar7 = 1;
        break;
      default:
        uVar7 = 0;
      }
      fn_003585b4(&local_30,iVar5 + local_28[0] * 0x418 + -0x4080,uVar7);
      uVar7 = fn_00182988(DAT_008977e4);
      uVar7 = fn_0026a548(uVar7,local_28);
      fn_001d0628(param_1,&local_30,uVar7);
      uVar9 = uVar9 + 1;
    } while (uVar9 < 4);
  }
  if (*(char *)(param_2 + 0x7e4) == '\0') {
    iVar5 = fn_00174870(param_1);
    if (*(short *)(iVar5 + 0x22) == 0) {
      uVar4 = 1;
    }
    else {
      iVar5 = fn_00174870(param_1);
      uVar4 = *(undefined2 *)(iVar5 + 0x22);
    }
    iVar5 = fn_00182988(DAT_008977e4);
    bVar1 = *(byte *)(iVar5 + 0x39c);
    iVar5 = fn_00174828(DAT_008977e4);
    *(undefined2 *)(iVar5 + 0x4288) = uVar4;
    *(byte *)(iVar5 + 0x428c) = bVar1 ^ 1;
  }
  else {
    iVar5 = fn_00182988(DAT_008977e4);
    bVar1 = *(byte *)(iVar5 + 0x39c);
    iVar5 = fn_00174828(DAT_008977e4);
    *(undefined2 *)(iVar5 + 0x4288) = 0x1b;
    *(byte *)(iVar5 + 0x428c) = bVar1 ^ 1;
    local_30 = 0;
    fn_001d19e4(param_1,param_2 + 0x2e,param_2 + 0x46,param_2 + 0x7e8);
  }
  iVar5 = fn_00182988(DAT_008977e4);
  bVar1 = *(byte *)(iVar5 + 0x39c);
  iVar5 = fn_00174828(DAT_008977e4);
  iVar6 = fn_00174870(param_1);
  uVar4 = fn_001cad10(*(undefined1 *)(iVar6 + 0x24));
  *(undefined2 *)(iVar5 + 0x4298) = uVar4;
  *(byte *)(iVar5 + 0x429c) = bVar1 ^ 1;
  iVar8 = (int)*(char *)(iVar5 + 0x4298);
  iVar6 = fn_00174870(param_1,extraout_r1_00,iVar8);
  if ((*(char *)(iVar6 + 0x27) != -1) &&
     ((*(char *)(iVar6 + 0x27) < '\0' || (iVar6 = fn_0069ccf8(iVar8), iVar6 != 0)))) {
    iVar6 = fn_00174870(param_1);
    cVar3 = *(char *)(iVar6 + 0x27) + '\x14';
    if (((int)cVar3 - 0x10U < 8) && (iVar6 = fn_001c2ef4(0), iVar6 != 0)) {
      iVar6 = iVar5 + cVar3 * 0x418;
      if (0 < *(short *)(iVar6 + -0x4080)) {
        cVar2 = *(char *)(iVar6 + -0x4019);
        bVar10 = cVar2 == '\0';
        if (bVar10) {
          cVar2 = *(char *)(iVar6 + -0x400a);
        }
        bVar11 = bVar10 && cVar2 == '\0';
        if (bVar10 && cVar2 == '\0') {
          bVar11 = *(char *)(iVar6 + -0x4018) == '\0';
        }
        if (bVar11) {
          fn_00174398((short *)(iVar6 + -0x4080),1);
          *(char *)(iVar5 + 0x429a) = cVar3;
        }
      }
    }
  }
  fn_001d22ac(param_1);
  fn_001d42e4(param_1);
  return;
}


