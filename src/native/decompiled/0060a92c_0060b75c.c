#include "0060a92c_0060b75c.h"



void fn_0060b75c(int param_1,uint param_2,int param_3,uint param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 local_38;
  int iStack_34;
  uint local_30;
  int iStack_2c;
  uint uStack_28;
  
  iVar5 = 0;
  iStack_34 = param_1;
  local_30 = param_2;
  iStack_2c = param_3;
  uStack_28 = param_4;
  if (0 < param_3) {
    do {
      pbVar6 = (byte *)(local_30 + iVar5 * 0xe);
      uVar2 = local_30;
      if (param_4 != 7) {
        uVar2 = (uint)*pbVar6;
      }
      if (param_4 == 7 || uVar2 == param_4) {
        uVar2 = 0;
        do {
          sVar1 = *(short *)(pbVar6 + uVar2 * 2 + 2);
          iVar3 = fn_00163940((int)sVar1);
          if (iVar3 != 0) {
            local_38 = CONCAT22(1,sVar1);
            puVar4 = *(undefined4 **)(param_1 + 4);
            if (puVar4 == *(undefined4 **)(param_1 + 8)) {
              fn_0078a2f0(param_1,puVar4,&local_38);
            }
            else {
              *(undefined4 **)(param_1 + 4) = puVar4 + 1;
              if (puVar4 != (undefined4 *)0x0) {
                *puVar4 = local_38;
              }
            }
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 6);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < param_3);
  }
  return;
}



void fn_0060b5d4(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  iVar1 = fn_0060e880();
  puVar2 = (undefined4 *)fn_001f74ec(param_1,*(undefined4 *)(iVar1 + 8));
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00898ce0) goto LAB_0060b624;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0060b624:
  iVar1 = fn_0060e880(param_1);
  fn_00659544(puVar2,iVar1 + 0x14);
  fn_0060f180(param_1);
  return;
}



void fn_0060b3d8(undefined4 param_1,int param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  iVar6 = *(int *)(&DAT_007d471c + param_2 * 0xc);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,iVar6);
  if (iVar6 == 0x50) {
    uVar7 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar5 == &DAT_008944b4) goto LAB_0060b464;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0060b464:
    puVar2[4] = 0xd9;
    puVar2[5] = 0xd9;
    *(undefined1 *)(puVar2 + 6) = 0;
    iVar3 = fn_0060e880(param_1);
    if ((*(char *)(iVar3 + 0xd) == '\x01') &&
       (iVar3 = fn_0060e880(param_1), *(char *)(iVar3 + 0x428) != '\0')) {
      uVar1 = 2;
    }
    else {
      uVar1 = 0;
    }
    *(undefined1 *)(puVar2 + 2) = uVar1;
    fn_0060e880(param_1);
    fn_00659468();
  }
  else if (iVar6 == 0x56) {
    uVar7 = 1;
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar5 == &DAT_00894498) goto LAB_0060b4f4;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0060b4f4:
    fn_0060e880(param_1);
    *(undefined1 *)((int)puVar2 + 0x11) = 0;
    fn_005c19c4(puVar2,0xd9);
    fn_0060e880(param_1);
    fn_00659474();
  }
  else if (iVar6 == 0xda) {
    uVar4 = fn_0060e880(param_1);
    if (puVar2 != (undefined4 *)0x0) {
      puVar5 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar5 == &DAT_00898ce0) goto LAB_0060b584;
        puVar5 = (undefined4 *)*puVar5;
      } while (puVar5 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_0060b584:
    fn_006594f4(puVar2,0xd9,uVar4);
    fn_0060e880(param_1);
    fn_0065942c();
  }
  fn_006899f4(param_1,iVar6,0,uVar7);
  return;
}



void fn_0060b35c(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = fn_0022f584(*(undefined4 *)(&DAT_007d4718 + param_2 * 0xc),0);
  fn_0036c5f4(*(undefined4 *)(param_1 + 0x5c),uVar1,1,0,1,1,0,0,1);
  *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
  fn_00689bd0(param_1,0x48,0);
  return;
}



void fn_0060adc8(undefined4 param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  fn_0060e8cc();
  iVar1 = fn_0060e880(param_1);
  puVar2 = (undefined4 *)fn_001f74ec(param_1,*(undefined4 *)(iVar1 + 8));
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00898cec) goto LAB_0060ae20;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_0060ae20:
  iVar1 = fn_0060e880(param_1);
  uVar4 = *(undefined4 *)(iVar1 + 0x1c);
  uVar5 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  uVar7 = *(undefined4 *)(iVar1 + 0x28);
  uVar8 = *(undefined4 *)(iVar1 + 0x2c);
  uVar9 = *(undefined4 *)(iVar1 + 0x30);
  uVar10 = *(undefined4 *)(iVar1 + 0x34);
  puVar2[5] = *(undefined4 *)(iVar1 + 0x18);
  puVar2[6] = uVar4;
  puVar2[7] = uVar5;
  puVar2[8] = uVar6;
  puVar2[9] = uVar7;
  puVar2[10] = uVar8;
  puVar2[0xb] = uVar9;
  puVar2[0xc] = uVar10;
  uVar4 = *(undefined4 *)(iVar1 + 0x3c);
  uVar5 = *(undefined4 *)(iVar1 + 0x40);
  uVar6 = *(undefined4 *)(iVar1 + 0x44);
  uVar7 = *(undefined4 *)(iVar1 + 0x48);
  uVar8 = *(undefined4 *)(iVar1 + 0x4c);
  uVar9 = *(undefined4 *)(iVar1 + 0x50);
  uVar10 = *(undefined4 *)(iVar1 + 0x54);
  puVar2[0xd] = *(undefined4 *)(iVar1 + 0x38);
  puVar2[0xe] = uVar4;
  puVar2[0xf] = uVar5;
  puVar2[0x10] = uVar6;
  puVar2[0x11] = uVar7;
  puVar2[0x12] = uVar8;
  puVar2[0x13] = uVar9;
  puVar2[0x14] = uVar10;
  uVar4 = *(undefined4 *)(iVar1 + 0x5c);
  puVar2[0x15] = *(undefined4 *)(iVar1 + 0x58);
  puVar2[0x16] = uVar4;
  uVar4 = *(undefined4 *)(iVar1 + 100);
  puVar2[0x17] = *(undefined4 *)(iVar1 + 0x60);
  puVar2[0x18] = uVar4;
  fn_0017821c(puVar2 + 0x19,iVar1 + 0x68,0x3c0);
  *(undefined1 *)(puVar2 + 0x109) = *(undefined1 *)(iVar1 + 0x428);
  puVar2[0x10a] = *(undefined4 *)(iVar1 + 0x42c);
  puVar2[0x10b] = *(undefined4 *)(iVar1 + 0x430);
  uVar4 = *(undefined4 *)(iVar1 + 0x438);
  uVar5 = *(undefined4 *)(iVar1 + 0x43c);
  uVar6 = *(undefined4 *)(iVar1 + 0x440);
  uVar7 = *(undefined4 *)(iVar1 + 0x444);
  uVar8 = *(undefined4 *)(iVar1 + 0x448);
  puVar2[0x10c] = *(undefined4 *)(iVar1 + 0x434);
  puVar2[0x10d] = uVar4;
  puVar2[0x10e] = uVar5;
  puVar2[0x10f] = uVar6;
  puVar2[0x110] = uVar7;
  puVar2[0x111] = uVar8;
  fn_0017821c(puVar2 + 0x112,iVar1 + 0x44c,0x1e);
  *(undefined1 *)((int)puVar2 + 0x466) = *(undefined1 *)(iVar1 + 0x46a);
  fn_0017821c(puVar2 + 0x11a,iVar1 + 0x46c,0x60);
  fn_0060f180(param_1);
  return;
}



void fn_0060ac20(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = *(int *)(&DAT_007d4784 + param_2 * 0x10);
  puVar1 = (undefined4 *)fn_001f74ec(param_1,iVar5);
  puVar4 = (undefined4 *)0x0;
  if (iVar5 == 0xd9) {
    uVar2 = fn_0060e880(param_1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar3 == &DAT_00898ce0) {
          puVar4 = puVar1;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    fn_006594f4(puVar4,0xd8,uVar2);
    fn_0060e880(param_1);
    fn_0065942c();
  }
  else if (iVar5 == 0x9f) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar3 == &DAT_00895964) {
          puVar4 = puVar1;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4[2] = 0xd8;
    puVar4[8] = 0xdd;
    fn_0060e880(param_1);
    fn_0065945c();
  }
  else if (iVar5 == 0x69) {
    if (puVar1 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar3 == &DAT_00894230) {
          puVar4 = puVar1;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar4[2] = 0xd8;
    fn_0060e880(param_1);
    fn_0065945c();
  }
  fn_006899f4(param_1,iVar5,0);
  return;
}



undefined4 fn_0060a92c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(&DAT_007d4784 + param_2 * 0x10);
  if (((iVar2 == 0) ||
      ((iVar2 == 0x69 && (iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18)), iVar1 < 1))))
     || ((iVar1 = fn_0060e880(param_1), *(char *)(iVar1 + 0xd) == '\x01' &&
         ((iVar2 == 0x9f || iVar2 == 0x69 && (*(char *)(param_1 + 0x4f8) != '\0')))))) {
    return 0;
  }
  return 1;
}


