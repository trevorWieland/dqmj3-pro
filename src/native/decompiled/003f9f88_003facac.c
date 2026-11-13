#include "003f9f88_003facac.h"



void fn_003facac(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = fn_00145b00(0xdc,&DAT_00812c8c);
  if (iVar1 == 0) {
    return;
  }
  fn_003fad58(iVar1,param_1);
  return;
}



undefined1 * fn_003fa974(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 *local_3c;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  
  iVar2 = fn_003faba0(param_1,param_2,0);
  iVar3 = fn_003faba0(param_1,param_2,1);
  iVar9 = param_1 + param_2 * 0x10 + param_3 * 4;
  piVar8 = *(int **)(iVar9 + 0x9c);
  if (param_5 == 0) {
    iVar7 = 0;
  }
  else {
    iVar7 = (int)*(short *)(param_5 + 0x1c);
  }
  fn_002b427c(piVar8,iVar7);
  (**(code **)(*piVar8 + 0x20))(piVar8,*(short *)(param_5 + 0x1c) != 0);
  if (*(short *)(param_5 + 0x1c) != 0) {
    fn_0020bbc4(auStack_38,param_5);
    uVar4 = fn_006bfe90(auStack_34);
    fn_002b4348(piVar8,uVar4);
    uVar1 = fn_006bf34c(auStack_34);
    *(undefined1 *)((int)piVar8 + 0x3d) = uVar1;
    uVar1 = fn_006bf184(auStack_34);
    *(undefined1 *)((int)piVar8 + 0x43) = uVar1;
    uVar1 = fn_001f84ac(param_5 + 0x72);
    *(undefined1 *)((int)piVar8 + 0x3f) = uVar1;
    *(bool *)((int)piVar8 + 0x27) = param_4 == iVar2;
    fn_002b3d78(piVar8,param_4 == iVar3,0);
    *(undefined1 *)((int)piVar8 + 0x41) = 1;
  }
  piVar8 = *(int **)(iVar9 + 0xbc);
  (**(code **)(*piVar8 + 0x20))(piVar8,*(short *)(param_5 + 0x1c) != 0);
  puVar6 = (undefined1 *)0x0;
  if (*(short *)(param_5 + 0x1c) != 0) {
    fn_0020bbc4(auStack_38,param_5);
    fn_00231074(&local_3c,param_5,0);
    fn_0040ffb0(piVar8,local_3c);
    *(undefined1 *)((int)piVar8 + 0x31) = *(undefined1 *)(param_5 + 0x2e);
    uVar4 = fn_006bf1d4(auStack_34);
    uVar5 = fn_006bfdec(auStack_34);
    fn_0040ffb8(piVar8,uVar5,uVar4);
    uVar1 = fn_006bf34c(auStack_34);
    *(undefined1 *)((int)piVar8 + 0x35) = uVar1;
    uVar1 = fn_006bf184(auStack_34);
    *(undefined1 *)((int)piVar8 + 0x37) = uVar1;
    if (local_3c != &DAT_008f9cf4) {
      piVar8 = local_3c + -3;
      iVar2 = *piVar8;
      if ((iVar2 == -1) || ((piVar8 != &DAT_008f9ce8 && (*piVar8 = iVar2 + -1, iVar2 == 0)))) {
        fn_001008c4(local_3c + -3,local_3c[-2] + 8,0);
      }
    }
    puVar6 = auStack_38;
  }
  return puVar6;
}



undefined4 fn_003faba0(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = *(undefined4 **)(param_1 + 0x98);
  if (param_2 == 0) {
    if (param_3 == 0) {
      if (puVar2 != (undefined4 *)0x0) {
        puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
        do {
          if (puVar1 == &DAT_008951b8) goto LAB_003fac68;
          puVar1 = (undefined4 *)*puVar1;
        } while (puVar1 != (undefined4 *)0x0);
      }
      puVar2 = (undefined4 *)0x0;
LAB_003fac68:
      return puVar2[9];
    }
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_008951b8) goto LAB_003fac30;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003fac30:
    return puVar2[10];
  }
  if (param_3 == 0) {
    if (puVar2 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar1 == &DAT_008951b8) goto LAB_003faca0;
        puVar1 = (undefined4 *)*puVar1;
      } while (puVar1 != (undefined4 *)0x0);
    }
    puVar2 = (undefined4 *)0x0;
LAB_003faca0:
    return puVar2[0xfc];
  }
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_008951b8) goto LAB_003fabf0;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003fabf0:
  return puVar2[0xfd];
}



void fn_003fa50c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  do {
    iVar2 = 0;
    do {
      iVar1 = param_1 + iVar3 * 0x10 + iVar2 * 4;
      (**(code **)(**(int **)(iVar1 + 0x9c) + 0x18))();
      if (*(int **)(iVar1 + 0x9c) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0x9c) + 4))();
      }
      *(undefined4 *)(iVar1 + 0x9c) = 0;
      (**(code **)(**(int **)(iVar1 + 0xbc) + 0x18))();
      if (*(int **)(iVar1 + 0xbc) != (int *)0x0) {
        (**(code **)(**(int **)(iVar1 + 0xbc) + 4))();
      }
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar1 + 0xbc) = 0;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 2);
  fn_0022ccb4(param_1);
  return;
}



void fn_003fa460(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_00748e14();
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_003fa4b4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003fa4b4:
  fn_005f6270(puVar1[0x11]);
  fn_005f6270(puVar1[0x12]);
  return;
}



void fn_003fa310(int param_1)

{
  if (*(int *)(*(int *)(param_1 + 0x104) + 8) == 0) {
    fn_00689878(param_1,0);
  }
  fn_006899f4(param_1,*(undefined4 *)(*(int *)(param_1 + 0x104) + 8),1);
  fn_0068ab44(param_1,0x100094c);
  *(undefined4 *)(*(int *)(param_1 + 0x104) + 0xc) = 0;
  return;
}



void fn_003fa2bc(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [8];
  
  puVar2 = auStack_18;
  if (param_3 == 0) {
    puVar2 = auStack_14;
    puVar1 = (undefined *)fn_0022f750((char *)&DAT_003fa304,param_2,0);
  }
  else {
    puVar1 = &DAT_003fa300;
  }
  fn_00168a24(param_1,puVar1,puVar2);
  return;
}



undefined4 fn_003fa164(int *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)param_1[6];
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008963e0) goto LAB_003fa1a8;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003fa1a8:
  param_1[0x41] = (int)puVar4;
  if (param_1[0x3a] == 0) {
    param_1[0x3a] = (int)(puVar4 + 4);
  }
  uVar2 = fn_0043cd80(param_1);
  puVar4 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar4 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar4)(puVar4);
    do {
      if (puVar1 == &DAT_008963ac) goto LAB_003fa214;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar4 = (undefined4 *)0x0;
LAB_003fa214:
  param_1[0x42] = (int)puVar4;
  if ((*(int *)(puVar4[0xf] + 8) == 0) || (iVar3 = fn_006c41e4(), iVar3 != 2)) {
    iVar3 = fn_006896fc(param_1,0x39);
    if (iVar3 == 0) {
      fn_00689930(param_1,0x39,0);
    }
  }
  else {
    iVar3 = fn_006896fc(param_1,0x3a);
    if (iVar3 == 0) {
      fn_00689930(param_1,0x3a,0);
    }
  }
  return uVar2;
}



void fn_003f9f88(int *param_1,int param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  bVar1 = false;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  puVar6 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_003f9fe0;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003f9fe0:
  param_1[0x42] = (int)puVar2;
  if ((*(int *)(puVar2[0xf] + 8) != 0) && (iVar4 = fn_006c41e4(), iVar4 == 2)) {
    bVar1 = true;
  }
  if (param_2 == 0x69) {
    puVar2 = (undefined4 *)fn_001f74ec(param_1,0x69);
    if (puVar2 != (undefined4 *)0x0) {
      puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
      do {
        if (puVar3 == &DAT_00894230) {
          puVar6 = puVar2;
          break;
        }
        puVar3 = (undefined4 *)*puVar3;
      } while (puVar3 != (undefined4 *)0x0);
    }
    puVar6[2] = 0xd5;
    *(bool *)((int)puVar6 + 0x1d) = bVar1;
    iVar4 = param_1[0x41];
    uVar5 = 2;
  }
  else {
    if (param_2 != 0x9f) {
      if (param_2 == 0xd6) {
        puVar6 = (undefined4 *)fn_001f74ec(param_1,0xd6);
        if (puVar6 != (undefined4 *)0x0) {
          puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
          do {
            if (puVar2 == &DAT_008963e0) goto LAB_003fa060;
            puVar2 = (undefined4 *)*puVar2;
          } while (puVar2 != (undefined4 *)0x0);
        }
        puVar6 = (undefined4 *)0x0;
LAB_003fa060:
        puVar6[2] = 0xd5;
        fn_00178290(puVar6,param_1[0x3a]);
        *(undefined4 *)(param_1[0x41] + 0xc) = 0;
      }
      return;
    }
    puVar6 = (undefined4 *)fn_001f74ec(param_1,0x9f);
    if (puVar6 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar6)(puVar6);
      do {
        if (puVar2 == &DAT_00895964) goto LAB_003fa0c8;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar6 = (undefined4 *)0x0;
LAB_003fa0c8:
    puVar6[2] = 0xd5;
    if (bVar1) {
      uVar5 = 0x3a;
    }
    else {
      uVar5 = 0x39;
    }
    puVar6[8] = uVar5;
    *(bool *)((int)puVar6 + 0xd) = bVar1;
    *(bool *)(puVar6 + 9) = bVar1;
    iVar4 = param_1[0x41];
    uVar5 = 1;
  }
  *(undefined4 *)(iVar4 + 0xc) = uVar5;
  return;
}


