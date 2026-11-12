#include "00356428_00356aec.h"



undefined1 * fn_00356aec(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar4 = 0;
  do {
    iVar1 = fn_0036ee88(*(undefined4 *)(param_1 + 0xb8),iVar4);
    if (iVar1 == 0) {
      puVar3 = (undefined1 *)fn_001c9c44(*(undefined4 *)(param_1 + 0xbc),0,1,iVar4);
    }
    else {
      fn_0020bbc4(auStack_20);
      uVar2 = fn_006bfe90(auStack_1c);
      fn_001c9c44(*(undefined4 *)(param_1 + 0xbc),uVar2,1,iVar4);
      iVar1 = fn_001cab7c(uVar2);
      iVar4 = iVar1 + iVar4 + -1;
      puVar3 = auStack_20;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return puVar3;
}



void fn_003569f0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 local_10;
  undefined4 local_c;
  
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x30))(*(int **)(param_1 + 0xbc),&local_10,&local_c);
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x34))();
  iVar3 = **(int **)(param_1 + 0xbc);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(iVar3 + 0x38))();
    iVar3 = **(int **)(param_1 + 0xbc);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(iVar3 + 0x3c))();
      piVar2 = *(int **)(param_1 + 0xbc);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(*piVar2 + 0x40))();
        if (iVar1 == 0) {
          return;
        }
        piVar2 = *(int **)(param_1 + 0xbc);
        pcVar5 = *(code **)(*piVar2 + 0x2c);
        uVar4 = 0;
      }
      else {
        pcVar5 = *(code **)(*piVar2 + 0x2c);
        uVar4 = 1;
      }
      (*pcVar5)(piVar2,uVar4,local_c,0);
    }
    else {
      (**(code **)(iVar3 + 0x2c))(*(int **)(param_1 + 0xbc),local_10,0);
    }
  }
  else {
    (**(code **)(iVar3 + 0x2c))(*(int **)(param_1 + 0xbc),local_10,4,0);
  }
  fn_0068ab44(param_1,0x100094e);
  return;
}



undefined1 * fn_003567b8(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20;
  undefined4 local_1c [2];
  
  iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x30))(*(int **)(param_1 + 0xbc),&local_20,local_1c);
  iVar5 = *(int *)(param_1 + 0xd0) % 2;
  iVar2 = *(int *)(param_1 + 0xd0) / 2;
  uVar3 = 0;
  if (iVar5 == 0) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar2 * 4);
  }
  else if (iVar5 == 1) {
    uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar2 * 4);
  }
  uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar3);
  fn_0020bbc4(auStack_28,uVar3);
  fn_006bfe90(auStack_24);
  iVar2 = fn_001cab7c();
  iVar5 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x3c))();
  iVar4 = **(int **)(param_1 + 0xbc);
  if (iVar5 == 0) {
    iVar5 = (**(code **)(iVar4 + 0x40))();
    iVar4 = **(int **)(param_1 + 0xbc);
    if (iVar5 == 0) {
      iVar5 = (**(code **)(iVar4 + 0x34))();
      if (iVar5 != 0) {
        (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))
                  (*(int **)(param_1 + 0xbc),local_20,4 - iVar2,0);
        uVar3 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
        fn_00356378(param_1,uVar3);
        return auStack_28;
      }
      if (iVar1 < 0) {
        return auStack_28;
      }
      if (iVar1 + iVar2 * 2 + -2 < 8) {
        fn_00356378(param_1,iVar1);
        return auStack_28;
      }
      (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),local_20,0);
      uVar3 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
      fn_00356378(param_1,uVar3);
      return auStack_28;
    }
    (**(code **)(iVar4 + 0x2c))(*(int **)(param_1 + 0xbc),0,local_1c[0]);
    iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
  }
  else {
    (**(code **)(iVar4 + 0x2c))(*(int **)(param_1 + 0xbc),1,local_1c[0],0);
    iVar2 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
  }
  if (-1 < iVar2) {
    fn_00356378(param_1);
    fn_0068ab44(param_1,0x100094e);
  }
  return auStack_28;
}



void fn_003566b8(int param_1,int param_2,undefined4 param_3,int param_4,int param_5)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = param_4;
  while (iVar4 < param_5) {
    if (param_4 == 0x10) {
      piVar2 = (int *)fn_0028b0a0(param_3,iVar4 + -0x10);
    }
    else {
      piVar2 = (int *)fn_0028b348(param_3,iVar4 - param_4);
    }
    cVar1 = (char)iVar4;
    if (piVar2 != (int *)0x0) {
      iVar6 = *piVar2;
      piVar2 = *(int **)(param_1 + 0x90);
      iVar4 = -1;
      if (*piVar2 == iVar6) {
        iVar4 = 0;
      }
      piVar3 = *(int **)(param_1 + 0x9c);
      if (piVar2[1] == iVar6) {
        iVar4 = 1;
      }
      if (piVar2[2] == iVar6) {
        iVar4 = 2;
      }
      if (piVar2[3] == iVar6) {
        iVar4 = 3;
      }
      iVar5 = -1;
      if (*piVar3 == iVar6) {
        iVar5 = 0;
      }
      if (piVar3[1] == iVar6) {
        iVar5 = 1;
      }
      if (piVar3[2] == iVar6) {
        iVar5 = 2;
      }
      if (piVar3[3] == iVar6) {
        iVar5 = 3;
      }
      if (iVar4 == -1) {
        if (iVar5 != -1) {
          *(char *)(param_2 + iVar5 + 8) = cVar1;
        }
      }
      else {
        *(char *)(param_2 + iVar4 + 4) = cVar1;
      }
    }
    iVar4 = (int)(char)(cVar1 + '\x01');
  }
  return;
}



void fn_003565ac(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined1 local_20 [16];
  
  uVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 100))();
  if (uVar1 < 8) {
    iVar2 = fn_006a833c(*(undefined4 *)(param_1 + 0xbc),uVar1);
    if (iVar2 < 8) {
      *(undefined1 *)(param_1 + 0xdc) =
           *(undefined1 *)(param_1 + (iVar2 % 2) * 0x20 + (iVar2 / 2) * 8 + 0x114);
    }
    iVar2 = fn_00354b70(param_1,iVar2);
    *(undefined1 *)(iVar2 + 0x2f) = 1;
    fn_0025e3d4(*(undefined4 *)(param_1 + 0xb4),(int)*(char *)(iVar2 + 0x1b));
    fn_00688ff8(*(undefined4 *)(iVar2 + 0x4c));
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xb4),local_20);
  }
  else if (7 < (int)uVar1) {
    iVar2 = param_1 + (uVar1 - 8 & 0xff) * 0x14;
    *(byte *)(*(int *)(iVar2 + 0xec) + 0x44) = *(byte *)(*(int *)(iVar2 + 0xec) + 0x44) & 0xfe | 1;
    fn_00688ff8(*(undefined4 *)(iVar2 + 0xe4));
    fn_0025e378(*(undefined4 *)(param_1 + 0xb4),*(int *)(iVar2 + 0xe4) + 0x3c);
    fn_0025e7cc(*(undefined4 *)(param_1 + 0xb4),local_20);
    return;
  }
  return;
}



undefined1 * fn_00356504(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 auStack_20 [4];
  undefined1 auStack_1c [8];
  
  iVar4 = 0;
  do {
    iVar1 = fn_0036fb68(*(undefined4 *)(param_1 + 0xb8),iVar4);
    if (iVar1 == 0) {
      puVar3 = (undefined1 *)fn_001c9c44(*(undefined4 *)(param_1 + 0xbc),0,0,iVar4);
    }
    else {
      fn_0020bbc4(auStack_20);
      uVar2 = fn_006bfe90(auStack_1c);
      fn_001c9c44(*(undefined4 *)(param_1 + 0xbc),uVar2,0,iVar4);
      iVar1 = fn_001cab7c(uVar2);
      iVar4 = iVar1 + iVar4 + -1;
      puVar3 = auStack_20;
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  return puVar3;
}



void fn_00356428(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint in_fpscr;
  float fVar3;
  float local_20;
  float local_1c;
  float local_18;
  
  if (param_2 < 8) {
    *(undefined1 *)(param_1 + 0xdc) =
         *(undefined1 *)(param_1 + (param_2 % 2) * 0x20 + (param_2 / 2) * 8 + 0x114);
  }
  uVar1 = fn_006f6ac0(param_1);
  fVar3 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  uVar1 = fn_006f6acc(param_1);
  local_1c = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x16) & 3);
  local_20 = fVar3 + DAT_008c7c28;
  local_1c = local_1c + DAT_008c7c2c;
  local_18 = DAT_008c7c30 + 0.0;
  iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0x48);
  *(float *)(iVar2 + 0x1c) = local_20;
  *(float *)(iVar2 + 0x20) = local_1c;
  *(float *)(iVar2 + 0x24) = local_18;
  *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xef | 0x10;
  fn_0025e7cc(*(undefined4 *)(param_1 + 0xb4),&local_20);
  return;
}


