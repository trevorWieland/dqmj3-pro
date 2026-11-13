#include "00443f74_00444f0c.h"



void fn_00444f0c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x7b);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00893d28) goto LAB_00444f54;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_00444f54:
  *(undefined4 **)(param_1 + 0x108) = puVar1;
  return;
}



undefined1 * fn_00444e68(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined2 local_1c;
  
  puVar3 = *(undefined4 **)(*(int *)(param_1 + 0x108) + 0x10);
  piVar1 = (int *)fn_006896fc(param_1,0x7a);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)(*piVar1 + 0xc))(piVar1);
    do {
      if (puVar2 == &DAT_00893c88) goto LAB_00444eb8;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_00444eb8:
  local_30 = *puVar3;
  local_2c = puVar3[1];
  local_28 = puVar3[2];
  local_24 = puVar3[3];
  local_20 = puVar3[4];
  local_1c = *(undefined2 *)(puVar3 + 5);
  fn_00307d64(piVar1,&local_30);
  return (undefined1 *)&local_30;
}



void fn_00444568(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_10 [4];
  undefined1 auStack_c [12];
  
  if (param_3 == 0) {
    fn_00168a24(param_1,&LAB_004445a0,auStack_c);
    return;
  }
  fn_00168a24(param_1,&LAB_004445a0,auStack_10);
  return;
}



undefined4 fn_0044445c(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008963ac) goto LAB_004444b4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004444b4:
  DAT_008930f4 = puVar1;
  puVar1 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_008964f4) goto LAB_004444fc;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_004444fc:
  param_1[0x42] = (int)puVar1;
  *(undefined4 *)(param_1[0x17] + 0x38) = 0;
  fn_0074879c(param_1,DAT_00898214,(char *)&DAT_00444544,1,1,1,0);
  return 1;
}



bool fn_0044442c(int param_1)

{
  return *(char *)(param_1 + 0x104) == '\f';
}



bool fn_00444418(int param_1)

{
  return *(char *)(param_1 + 0x104) == '\r';
}



void fn_00444384(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d884();
  puVar1[0x3c] = 0;
  *puVar1 = &PTR_LAB_0083e11c;
  puVar1[0x3d] = 0;
  puVar1[0x3e] = 0;
  puVar1[0x3f] = 0;
  puVar1[0x40] = 0;
  puVar1[0x41] = 0;
  puVar1[0x42] = &DAT_00859420;
  puVar1[0x43] = 0;
  puVar1[0x44] = 0;
  puVar1[0x45] = 0;
  puVar1[0x46] = 0;
  puVar1[0x47] = 0;
  puVar1[0x48] = 0;
  return;
}



bool fn_004442e8(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar2 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x10));
  iVar1 = (**(code **)(*param_1 + 8))(param_1);
  uVar3 = fn_0028ec90(*(undefined4 *)(*(int *)(iVar1 + 0x18) + 0x14));
  return (uVar2 & uVar3) != 0;
}



void fn_004442ac(int param_1)

{
  uint uVar1;
  
  uVar1 = fn_006f6a5c();
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0xf8) + 0x18) = 1;
  }
  return;
}



undefined4 fn_00444154(int *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  uVar1 = fn_0043d3a0();
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 8))(param_1);
  puVar5 = (undefined4 *)0x0;
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008963ac) goto LAB_004441ac;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_004441ac:
  param_1[0x3c] = (int)puVar2;
  iVar4 = *(int *)(puVar2[0x10] + 4);
  param_1[0x3f] = iVar4;
  param_1[0x40] = *(int *)(iVar4 + 8);
  puVar2 = (undefined4 *)fn_00689c1c(param_1,0x80);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_008964f4) goto LAB_00444204;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00444204:
  param_1[0x41] = (int)puVar2;
  puVar2 = (undefined4 *)fn_001f74ec(param_1,0xdf);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00893064) goto LAB_00444248;
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_00444248:
  param_1[0x3d] = (int)puVar2;
  puVar2 = (undefined4 *)fn_001f74d8(param_1,0x3b);
  if (puVar2 != (undefined4 *)0x0) {
    puVar3 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar3 == &DAT_00894d28) {
        puVar5 = puVar2;
        break;
      }
      puVar3 = (undefined4 *)*puVar3;
    } while (puVar3 != (undefined4 *)0x0);
  }
  param_1[0x3e] = (int)puVar5;
  return uVar1;
}



void fn_004440a4(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_108 [248];
  
  puVar1 = auStack_108;
  iVar5 = *param_3;
  if (iVar5 < 2) {
    fn_0017821c(auStack_108,param_2,0xf8);
    iVar2 = 0;
    iVar4 = 0;
    if (iVar5 < 1) {
      fn_00301a9c(param_1,auStack_108,0x80);
      return;
    }
    do {
      iVar3 = iVar4;
      iVar2 = iVar2 + 1;
      puVar1 = puVar1 + 0x80;
      iVar4 = iVar3 + 0x80;
    } while (iVar2 < iVar5);
    fn_00301a9c(param_1,puVar1,0x80);
    if (0xf8 < iVar4) {
      fn_00158f6c((0x80 - (iVar3 + -0x78)) + param_1);
    }
  }
  return;
}



void fn_0044409c(undefined4 param_1)

{
  fn_00158f6c(param_1,0x80);
  return;
}



bool fn_00444000(undefined4 param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  int in_r12;
  bool bVar3;
  
  uVar2 = 0x1dec;
  if (0 < *param_2) {
    uVar2 = *param_2 + 4;
  }
  bVar3 = (uVar2 & 0x7f) != 0;
  if (bVar3) {
    in_r12 = 1;
  }
  if (!bVar3) {
    in_r12 = 0;
  }
  iVar1 = *param_3;
  bVar3 = in_r12 + ((int)(uVar2 + ((uint)((int)uVar2 >> 0x1f) >> 0x19)) >> 7) <= iVar1;
  if (!bVar3) {
    if ((int)uVar2 < iVar1 * 0x80 + 0x80) {
      fn_00158f6c(param_1,0x80);
      fn_00301a9c(param_1,param_2 + iVar1 * 0x20,uVar2 + iVar1 * -0x80);
      bVar3 = true;
    }
    else {
      fn_00301a9c(param_1,param_2 + iVar1 * 0x20,0x80);
    }
  }
  return bVar3;
}



void fn_00443f74(int param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_aa8 [2704];
  
  puVar2 = auStack_aa8;
  iVar5 = *param_3;
  if (iVar5 < 0x16) {
    fn_0017821c(auStack_aa8,param_2,0xa88);
    iVar4 = 0;
    iVar1 = 0;
    puVar3 = auStack_aa8;
    if (0 < iVar5) {
      do {
        iVar1 = iVar1 + 1;
        puVar2 = puVar2 + 0x80;
        iVar4 = iVar4 + 0x80;
        puVar3 = puVar2;
      } while (iVar1 < iVar5);
    }
    fn_00301a9c(param_1,puVar3,0x80);
    if (0xa88 < iVar4) {
      fn_00158f6c((0x80 - (iVar4 + -0xa88)) + param_1);
    }
  }
  return;
}


