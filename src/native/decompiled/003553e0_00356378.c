#include "003553e0_00356378.h"



void fn_00356378(int param_1,int param_2)

{
  int iVar1;
  float in_s0;
  float in_s1;
  float in_s2;
  float local_18;
  float local_14;
  float local_10;
  
  iVar1 = fn_00354b70();
  if (param_2 < 8) {
    *(undefined1 *)(param_1 + 0xdc) =
         *(undefined1 *)(param_1 + (param_2 % 2) * 0x20 + (param_2 / 2) * 8 + 0x114);
  }
  fn_00688ff8(*(undefined4 *)(iVar1 + 0x48));
  local_18 = in_s0 + DAT_008c7c1c;
  local_14 = in_s1 + DAT_008c7c20;
  local_10 = in_s2 + DAT_008c7c24;
  iVar1 = *(int *)(*(int *)(param_1 + 0xb0) + 0x48);
  *(float *)(iVar1 + 0x1c) = local_18;
  *(float *)(iVar1 + 0x20) = local_14;
  *(float *)(iVar1 + 0x24) = local_10;
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
  fn_0025e7cc(*(undefined4 *)(param_1 + 0xb4),&local_18);
  return;
}



void fn_003562b4(int param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 local_18 [12];
  
  if (*(int *)(param_1 + 0xd8) < 0) {
    *(undefined1 *)(param_1 + 0xd4) = 1;
    fn_00689828(param_1,0);
    *(undefined1 *)(param_1 + 0xc0) = 4;
  }
  else {
    iVar1 = (**(code **)(**(int **)(param_1 + 0xbc) + 0x6c))();
    if (7 < iVar1) {
      uVar2 = iVar1 - 8U & 0xff;
      iVar1 = param_1 + uVar2 * 0x14;
      *(byte *)(*(int *)(iVar1 + 0xec) + 0x44) = *(byte *)(*(int *)(iVar1 + 0xec) + 0x44) & 0xfe | 1
      ;
      if (uVar2 == 1) {
        *(byte *)(*(int *)(param_1 + 0xec) + 0x44) =
             *(byte *)(*(int *)(param_1 + 0xec) + 0x44) & 0xfe;
      }
      fn_00688ff8(*(undefined4 *)(iVar1 + 0xe4));
      fn_0025e378(*(undefined4 *)(param_1 + 0xb4),*(int *)(iVar1 + 0xe4) + 0x3c);
      fn_0025e7cc(*(undefined4 *)(param_1 + 0xb4),local_18);
      return;
    }
  }
  return;
}



void fn_00355fd8(int param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  undefined8 uVar8;
  undefined1 auStack_38 [4];
  undefined1 auStack_34 [16];
  
  iVar7 = 0;
  uVar8 = 0x42300000;
  do {
    uVar6 = iVar7 % 2;
    iVar4 = iVar7 / 2;
    iVar1 = 0;
    if (uVar6 == 0) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xa8) + 0x30))(*(int **)(param_1 + 0xa8),0,iVar4);
    }
    else if (uVar6 == 1) {
      iVar1 = (**(code **)(**(int **)(param_1 + 0xac) + 0x30))(*(int **)(param_1 + 0xac),0);
    }
    iVar1 = *(int *)(iVar1 + 0x4c);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(int *)(iVar1 + 0x40) = (int)uVar8;
    *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xef | 0x10;
    fn_001c9d44(*(undefined4 *)(param_1 + 0xbc),iVar7,iVar1,0);
    if (uVar6 < 2) {
      if (uVar6 == 0) {
        iVar1 = *(int *)(*(int *)(param_1 + 0x90) + (iVar7 / 2) * 4);
      }
      else {
        if (uVar6 != 1) goto LAB_00356140;
        iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + (iVar7 / 2) * 4);
      }
      if (iVar1 != 0) {
        if (uVar6 == 0) {
          iVar1 = *(int *)(*(int *)(param_1 + 0x90) + iVar4 * 4);
LAB_003560f0:
          uVar3 = 0;
          if (iVar1 != 0) {
            uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc));
            fn_0020bbc4(auStack_38,uVar3);
            uVar3 = fn_006bfe90(auStack_34);
          }
        }
        else {
          if (uVar6 == 1) {
            iVar1 = *(int *)(*(int *)(param_1 + 0x9c) + iVar4 * 4);
            goto LAB_003560f0;
          }
          uVar3 = 0;
        }
        fn_001c9c44(*(undefined4 *)(param_1 + 0xbc),uVar3,uVar6,iVar4);
      }
    }
LAB_00356140:
    iVar7 = iVar7 + 1;
    if (7 < iVar7) {
      iVar7 = 0;
      do {
        piVar2 = (int *)fn_00172c98(*(undefined4 *)(param_1 + 0x68),(&DAT_007bb3fc)[iVar7]);
        iVar1 = param_1 + iVar7 * 0x14;
        *(int **)(iVar1 + 0xe0) = piVar2;
        uVar3 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_00356278,1);
        *(undefined4 *)(iVar1 + 0xe4) = uVar3;
        fn_001c9d44(*(undefined4 *)(param_1 + 0xbc),iVar7 + 8,uVar3,0);
        iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_00356288,1);
        *(int *)(iVar1 + 0xe8) = iVar4;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        iVar4 = (**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_00356298,1);
        *(int *)(iVar1 + 0xec) = iVar4;
        *(byte *)(iVar4 + 0x44) = *(byte *)(iVar4 + 0x44) & 0xfe;
        piVar2 = (int *)(**(code **)(*piVar2 + 0x2c))(piVar2,(char *)&DAT_003562a8,1);
        if (piVar2 != (int *)0x0) {
          puVar5 = (undefined4 *)(**(code **)(*piVar2 + 8))(piVar2);
          do {
            if (puVar5 == &DAT_0089a930) goto LAB_00356244;
            puVar5 = (undefined4 *)*puVar5;
          } while (puVar5 != (undefined4 *)0x0);
        }
        piVar2 = (int *)0x0;
LAB_00356244:
        *(int **)(iVar1 + 0xf0) = piVar2;
        fn_00688fd8(piVar2);
        iVar7 = iVar7 + 1;
        if (1 < iVar7) {
          return;
        }
      } while( true );
    }
  } while( true );
}



void fn_00355748(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = fn_006a7b78(DAT_008977e4);
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x5c) = 0;
  *(undefined4 *)(iVar1 + 0x60) = 0;
  *(undefined4 *)(iVar1 + 100) = 0;
  *(undefined4 *)(iVar1 + 0x68) = 0;
  *(undefined4 *)(iVar1 + 0x6c) = 0;
  uVar4 = *(undefined4 *)(DAT_00897804 + 0xc);
  fn_003566b8(param_1,&local_28,uVar4,0x10,0x14);
  fn_003566b8(param_1,&local_28,uVar4,0x18,0x1c);
  pcVar2 = (char *)(iVar1 + 0x5c);
  if ((char)local_24 != '\0') {
    *pcVar2 = (char)local_24;
  }
  uVar3 = (uint)((char)local_24 != '\0');
  if (((unsigned int)(local_24) >> 8) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_24) >> 8) & 0xff;
  }
  if (((unsigned int)(local_24) >> 8) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_24) >> 16) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_24) >> 16) & 0xff;
  }
  if (((unsigned int)(local_24) >> 16) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_24) >> 24) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_24) >> 24) & 0xff;
  }
  pcVar2 = (char *)(iVar1 + 0x60);
  if ((char)local_20 != '\0') {
    *pcVar2 = (char)local_20;
  }
  uVar3 = (uint)((char)local_20 != '\0');
  if (((unsigned int)(local_20) >> 8) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_20) >> 8) & 0xff;
  }
  if (((unsigned int)(local_20) >> 8) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_20) >> 16) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_20) >> 16) & 0xff;
  }
  if (((unsigned int)(local_20) >> 16) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_20) >> 24) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_20) >> 24) & 0xff;
  }
  pcVar2 = (char *)(iVar1 + 0x68);
  if ((char)local_18 != '\0') {
    *pcVar2 = (char)local_18;
  }
  uVar3 = (uint)((char)local_18 != '\0');
  if (((unsigned int)(local_18) >> 8) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_18) >> 8) & 0xff;
  }
  if (((unsigned int)(local_18) >> 8) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_18) >> 16) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_18) >> 16) & 0xff;
  }
  if (((unsigned int)(local_18) >> 16) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_18) >> 24) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_18) >> 24) & 0xff;
  }
  pcVar2 = (char *)(iVar1 + 0x6c);
  if ((char)local_14 != '\0') {
    *pcVar2 = (char)local_14;
  }
  uVar3 = (uint)((char)local_14 != '\0');
  if (((unsigned int)(local_14) >> 8) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_14) >> 8) & 0xff;
  }
  if (((unsigned int)(local_14) >> 8) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_14) >> 16) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_14) >> 16) & 0xff;
  }
  if (((unsigned int)(local_14) >> 16) & 0xff != '\0') {
    uVar3 = uVar3 + 1;
  }
  if (((unsigned int)(local_14) >> 24) & 0xff != '\0') {
    pcVar2[uVar3] = ((unsigned int)(local_14) >> 24) & 0xff;
  }
  fn_003542e4(param_1,iVar1 + 0x5c,iVar1 + 0x60);
  *(undefined1 *)(iVar1 + 0x58) = 1;
  return;
}



void fn_003555a0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  uVar7 = param_2 % 2;
  iVar1 = param_2 / 2;
  if (uVar7 < 2) {
    uVar6 = 0;
    if (uVar7 == 0) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar1 * 4);
    }
    else if (uVar7 == 1) {
      uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar1 * 4);
    }
    iVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar6);
    if (iVar3 == 0) {
      return;
    }
    *(int *)(param_1 + 0xd0) = param_2;
    fn_0020bbc4(auStack_28);
    uVar4 = fn_006bfda8(auStack_24);
    fn_002b427c(*(undefined4 *)(param_1 + 0xb0),uVar4);
    uVar4 = fn_006bfe90(auStack_24);
    fn_002b4348(*(undefined4 *)(param_1 + 0xb0),uVar4);
    iVar3 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006bf34c(auStack_24);
    *(undefined1 *)(iVar3 + 0x3d) = uVar2;
    iVar3 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006bf184(auStack_24);
    *(undefined1 *)(iVar3 + 0x43) = uVar2;
    iVar3 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006c0334(auStack_24);
    *(undefined1 *)(iVar3 + 0x45) = uVar2;
    uVar4 = fn_006bfe90(auStack_24);
    fn_0025e868(*(undefined4 *)(param_1 + 0xb4),uVar4);
    fn_00356ff8(param_1,uVar6);
    (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),1);
  }
  piVar5 = (int *)fn_00354b70(param_1,param_2);
  (**(code **)(*piVar5 + 0x20))(piVar5,0);
  *(undefined1 *)((int)piVar5 + 0x2f) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xd4) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),uVar7,iVar1,0);
  *(undefined1 *)(param_1 + 0xc0) = 1;
  return;
}



void fn_003553e0(int param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  
  *(int *)(param_1 + 0xd0) = param_2;
  uVar6 = param_2 % 2;
  iVar1 = param_2 / 2;
  (**(code **)(**(int **)(param_1 + 0xb0) + 0x20))(*(int **)(param_1 + 0xb0),1);
  if (uVar6 < 2) {
    uVar5 = 0;
    if (uVar6 == 0) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x90) + iVar1 * 4);
    }
    else if (uVar6 == 1) {
      uVar5 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + iVar1 * 4);
    }
    uVar3 = fn_0028aad0(*(undefined4 *)(DAT_00897804 + 0xc),uVar5);
    fn_0020bbc4(auStack_28,uVar3);
    uVar3 = fn_006bfda8(auStack_24);
    fn_002b427c(*(undefined4 *)(param_1 + 0xb0),uVar3);
    uVar3 = fn_006bfe90(auStack_24);
    fn_002b4348(*(undefined4 *)(param_1 + 0xb0),uVar3);
    iVar7 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006bf34c(auStack_24);
    *(undefined1 *)(iVar7 + 0x3d) = uVar2;
    iVar7 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006bf184(auStack_24);
    *(undefined1 *)(iVar7 + 0x43) = uVar2;
    iVar7 = *(int *)(param_1 + 0xb0);
    uVar2 = fn_006c0334(auStack_24);
    *(undefined1 *)(iVar7 + 0x45) = uVar2;
    uVar3 = fn_006bfe90(auStack_24);
    fn_0025e868(*(undefined4 *)(param_1 + 0xb4),uVar3);
    fn_00356ff8(param_1,uVar5);
    fn_006bfe90(auStack_24);
    uVar2 = fn_0068b334();
    *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xe4) = uVar2;
  }
  piVar4 = (int *)fn_00354b70(param_1,param_2);
  (**(code **)(*piVar4 + 0x20))(piVar4,0);
  *(undefined1 *)((int)piVar4 + 0x2f) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0xd4) = 0;
  (**(code **)(**(int **)(param_1 + 0xbc) + 0x2c))(*(int **)(param_1 + 0xbc),uVar6,iVar1,0);
  *(undefined1 *)(*(int *)(param_1 + 0xbc) + 0x48) = 0;
  *(undefined1 *)(param_1 + 0xc0) = 2;
  return;
}


