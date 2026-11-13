#include "005d668c_005d6bd0.h"



void fn_005d6bd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,s_ruler_008c66da,0);
  if (iVar1 == 0) {
    return;
  }
  fn_006e98a4(param_1,param_2,&DAT_008c66e0);
  return;
}



void fn_005d6b84(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,&DAT_008c66b7,0);
  if (iVar1 == 0) {
    return;
  }
  fn_006e98a4(param_1,param_2,&DAT_008c66bc);
  return;
}



void fn_005d6b38(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,s_hplane_008c66ac,0);
  if (iVar1 == 0) {
    return;
  }
  fn_006e98a4(param_1,param_2,&DAT_008c66b3);
  return;
}



void fn_005d6a54(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_18 [8];
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,&DAT_008c6692,1);
  if (iVar1 != 0) {
    fn_00102908(auStack_18,8,(char *)&DAT_007bfb91,param_3);
    fn_006e98a4(param_1,param_2,auStack_18);
  }
  return;
}



void fn_005d6a08(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x6c))(param_1,s_respawn_008c6681,0);
  if (iVar1 == 0) {
    return;
  }
  fn_006e98a4(param_1,param_2,&DAT_008c6689);
  return;
}



undefined4 fn_005d6950(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  undefined1 auStack_30 [32];
  undefined1 auStack_10 [8];
  
  if (*(int *)(param_1 + 0x10) == -1) {
    uVar1 = 0;
  }
  else {
    if (param_3 == 0) {
      pcVar3 = s__s__s_bin_008c6677;
    }
    else {
      pcVar3 = s__s_DISC__s_bin_008c6668;
    }
    fn_00102908(auStack_30,0x20,pcVar3,*(undefined4 *)(param_1 + 8),param_2);
    uVar1 = fn_006f7a9c(DAT_008977e0);
    uVar1 = fn_006b7664(uVar1,*(undefined4 *)(param_1 + 0x10));
    fn_00118624(auStack_10,uVar1);
    iVar2 = fn_006eddc0(auStack_10,auStack_30);
    if (iVar2 == 0) {
      fn_005f5d3c(auStack_10);
      return 0;
    }
    iVar2 = *(int *)(param_1 + 4);
    uVar1 = fn_00176d74(auStack_10,auStack_30);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    fn_005f5d3c(auStack_10);
    uVar1 = 1;
  }
  return uVar1;
}



bool fn_005d6930(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = fn_003035b0(*param_1,*param_2);
  return iVar1 < 0;
}



void fn_005d68e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_0043d370(param_1,param_2,(char *)&DAT_005d6908,param_3,param_4);
  *puVar1 = &PTR_LAB_0084cd78;
  puVar1[0x41] = 0;
  return;
}



void fn_005d689c(int param_1)

{
  uint uVar1;
  
  fn_00748e14();
  uVar1 = fn_006f6a5c(param_1);
  if ((uVar1 & 0x100000) == 0) {
    if ((uVar1 & 0x200000) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x18) = 2;
      return;
    }
  }
  else {
    *(undefined1 *)(*(int *)(param_1 + 0x108) + 0x18) = 1;
  }
  return;
}



void fn_005d6848(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = fn_00748844();
  if (iVar1 == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  (**(code **)(*param_1 + 0x164))(param_1,param_2);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005d6844(int *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1[0x39] == 0) {
    fn_00689878(param_1,0);
  }
  uVar1 = (**(code **)(*param_1 + 0x150))(param_1);
  uVar2 = (**(code **)(*param_1 + 0x14c))(param_1);
  fn_006899f4(param_1,param_1[0x39],uVar2,uVar1);
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_005d6740(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint *puVar3;
  undefined2 *puVar4;
  uint uVar5;
  uint local_24 [2];
  
  uVar1 = fn_00100b58(&DAT_005d6834);
  if (uVar1 == 0) {
    puVar2 = &DAT_008f9cf4;
  }
  else {
    puVar3 = local_24 + 1;
    if (0x20 < uVar1) {
      puVar3 = local_24;
    }
    local_24[0] = uVar1;
    local_24[1] = 0x20;
    uVar5 = *puVar3;
    if (0xfffffff1 < uVar5) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar5,0xfffffff1);
    }
    if (uVar5 < uVar1) {
      fn_002ff628(8,&DAT_008c7611,&DAT_008c7611,uVar1,uVar5);
    }
    if (uVar5 == 0) {
      puVar2 = &DAT_008f9ce8;
    }
    else {
      puVar2 = (undefined4 *)fn_00100fc6((uVar5 + 8) * 2,0);
      if (puVar2 != (undefined4 *)0x0) {
        *puVar2 = 0;
        puVar2[1] = 0;
        puVar2[2] = 0;
      }
      *puVar2 = 0;
      puVar2[1] = uVar5;
      puVar2[2] = uVar1;
      puVar4 = (undefined2 *)((int)puVar2 + uVar1 * 2 + 0xc);
      if (puVar4 != (undefined2 *)0x0) {
        *puVar4 = 0;
      }
    }
    puVar2 = puVar2 + 3;
  }
  *param_1 = puVar2;
  fn_00301a9c(puVar2,&DAT_005d6834,uVar1 << 1);
  return;
}



void fn_005d6734(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if ((char)param_1[3] != '\x03') {
    return;
  }
  iVar1 = fn_006ba284(param_1);
  iVar2 = fn_006ba274(param_1);
  uVar3 = iVar1 * iVar2 + param_2;
  iVar1 = 0;
  if (((int)uVar3 < 0) || ((uint)(param_1[0x3d] - param_1[0x3c] >> 4) <= uVar3)) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1[0x3c] + uVar3 * 0x10;
  }
  if (*(int *)(iVar2 + 8) == 0) {
    fn_0068ab44(param_1,0x100094d);
    return;
  }
  iVar2 = fn_006ba284(param_1);
  iVar4 = fn_006ba274(param_1);
  uVar3 = iVar2 * iVar4 + param_2;
  if ((-1 < (int)uVar3) && (uVar3 < (uint)(param_1[0x3d] - param_1[0x3c] >> 4))) {
    iVar1 = param_1[0x3c] + uVar3 * 0x10;
  }
  uVar5 = *(undefined4 *)(iVar1 + 8);
  fn_006899f4(param_1,uVar5,(int)*(char *)(iVar1 + 0xc),(int)*(char *)(iVar1 + 0xd));
  (**(code **)(*param_1 + 0x144))(param_1,uVar5);
  fn_0068ab44(param_1,0x100094b);
  return;
}



void fn_005d668c(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0xe5);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_0089914c) goto LAB_005d66d4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_005d66d4:
  *(undefined4 **)(param_1 + 0x104) = puVar1;
  puVar1 = (undefined4 *)fn_001f74d8(param_1,0xe7);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00899218) {
        puVar3 = puVar1;
        break;
      }
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  *(undefined4 **)(param_1 + 0x108) = puVar3;
  fn_0043cd80(param_1);
  return;
}


