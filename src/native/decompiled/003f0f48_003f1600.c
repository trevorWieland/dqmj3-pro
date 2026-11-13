#include "003f0f48_003f1600.h"



void fn_003f1600(int param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0xd8) == '\0') {
    iVar2 = fn_006ba220(param_1);
    if (iVar2 != 0) {
      fn_0068ab44(param_1,0x100094c);
      puVar5 = *(undefined4 **)(param_1 + 0x18);
      if (puVar5 != (undefined4 *)0x0) {
        puVar3 = (undefined4 *)(**(code **)*puVar5)(puVar5);
        do {
          if (puVar3 == &DAT_00893b1c) goto LAB_003f1678;
          puVar3 = (undefined4 *)*puVar3;
        } while (puVar3 != (undefined4 *)0x0);
      }
      puVar5 = (undefined4 *)0x0;
LAB_003f1678:
      if (puVar5[2] == 0) {
        fn_006899f4(param_1,0,0);
        fn_00689d04(param_1,0);
        fn_00689878(param_1,0);
        return;
      }
      fn_006899f4(param_1,puVar5[2],0,1);
      return;
    }
    if (param_2 == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      iVar2 = fn_0066eb04(DAT_00897850);
      if (iVar2 == 0) {
        uVar4 = fn_0022f584((char *)&DAT_003f18d4,0);
        fn_0068974c(param_1,uVar4,1);
      }
      else {
        uVar4 = fn_0022f584((char *)&DAT_003f18ac,0);
        fn_0068974c(param_1,uVar4,1);
      }
      fn_0068ab44(param_1,0x100094b);
      *(undefined1 *)(param_1 + 0xd8) = 1;
      return;
    }
    if (param_2 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      iVar2 = fn_0066eb04(DAT_00897850);
      if (iVar2 == 0) {
        uVar4 = fn_0022f584((char *)&DAT_003f1918,0);
        fn_0068974c(param_1,uVar4,1);
      }
      else {
        uVar4 = fn_0022f584((char *)&DAT_003f18f4,0);
        fn_0068974c(param_1,uVar4,1);
      }
      fn_0068ab44(param_1,0x100094b);
      uVar1 = 3;
    }
    else {
      if (param_2 != 2) {
        return;
      }
      iVar6 = *(int *)(DAT_008977e0 + 0xa8);
      iVar2 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_003f1884);
      *(undefined4 *)(*(int *)(param_1 + 0x5c) + 0x38) = 0;
      if (iVar6 == iVar2) {
        fn_0068ab44(param_1,0x100094d);
        uVar4 = fn_0022f584((char *)&DAT_003f193c,0);
        fn_0068974c(param_1,uVar4,0,1);
        return;
      }
      uVar4 = fn_0022f584((char *)&DAT_003f188c);
      fn_0068974c(param_1,uVar4,1);
      fn_0068ab44(param_1,0x100094b);
      uVar1 = 5;
    }
    *(undefined1 *)(param_1 + 0xd8) = uVar1;
  }
  return;
}



void fn_003f1488(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xd8) != '\0') {
    return;
  }
  fn_002c3d68(param_1);
  fn_0068ab44(param_1,0x100094c);
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00893b1c) goto LAB_003f14f0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003f14f0:
  if (puVar2[2] == 0) {
    fn_006899f4(param_1,0,0);
    fn_00689d04(param_1,0);
    fn_00689878(param_1,0);
    return;
  }
  fn_006899f4(param_1,puVar2[2],0,1);
  return;
}



void fn_003f145c(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((uVar1 & 0x100000) == 0 && *(char *)(param_1 + 0xd8) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x18) = 2;
  }
  return;
}



void fn_003f1430(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6ab4();
  if ((uVar1 & 0x200000) == 0 && *(char *)(param_1 + 0xd8) == '\0') {
    *(undefined1 *)(*(int *)(param_1 + 0xd0) + 0x18) = 1;
  }
  return;
}



void fn_003f132c(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  uint uVar4;
  undefined4 *local_2c;
  short asStack_28 [4];
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003f1410);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | 1;
  uVar2 = fn_006b64a4(*(undefined4 *)(DAT_00897804 + 8));
  fn_00166824(asStack_28,uVar2);
  uVar4 = 3;
  do {
    fn_002301d8(&local_2c,uVar4 & 0xff,(int)asStack_28[uVar4],2,0);
    uVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(uVar4 * 4 + 0x8919e8));
    fn_00190d50(uVar2,local_2c);
    if (local_2c != &DAT_008f9cf4) {
      piVar3 = local_2c + -3;
      iVar1 = *piVar3;
      if ((iVar1 == -1) || ((piVar3 != &DAT_008f9ce8 && (*piVar3 = iVar1 + -1, iVar1 == 0)))) {
        fn_001008c4(local_2c + -3,local_2c[-2] + 8,0);
      }
    }
    uVar4 = uVar4 - 1;
  } while (-1 < (int)uVar4);
  return;
}



void fn_003f1078(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = fn_006f6a6c();
  if (iVar2 == 2) {
    uVar1 = 0;
  }
  else {
    if (iVar2 != 3) {
      return;
    }
    uVar3 = fn_00129d4c(*(undefined4 *)(DAT_008977e0 + 0x1c),(char *)&DAT_003f10f0);
    uVar3 = fn_006afd2c(*(undefined4 *)(DAT_008977e0 + 0x1c),uVar3,0,0,param_4);
    fn_002a8244(*(undefined4 *)(param_1 + 0xd4),0xd,uVar3,0x14,1);
    uVar1 = 6;
  }
  *(undefined1 *)(param_1 + 0xd8) = uVar1;
  return;
}



void fn_003f1034(undefined4 *param_1)

{
  *param_1 = &DAT_00834a60;
  if ((int *)param_1[0x68] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x68] + 4))();
  }
  fn_001dc088(param_1);
  fn_002feef8();
  return;
}



undefined4 fn_003f0f48(int *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  
  if ((((char)param_1[0x16] == '\0') || ((char)param_1[0x67] != '\0')) ||
     (iVar1 = (**(code **)(*param_1 + 0x134))(param_1), iVar1 == 0)) {
    return 0;
  }
  piVar2 = (int *)fn_006f7508(DAT_008977e0);
  iVar1 = (**(code **)(*piVar2 + 0x70))();
  iVar4 = 0;
  if (0 < iVar1) {
    do {
      piVar2 = (int *)fn_006f7508(DAT_008977e0);
      uVar3 = (**(code **)(*piVar2 + 0x74))(piVar2,iVar4);
      fn_00683320(uVar3,10,0);
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar1);
  }
  param_1[0x69] = 3;
  *(undefined1 *)(param_1 + 0x67) = 1;
                    /* WARNING: Subroutine does not return */
  fn_001638a0();
}


