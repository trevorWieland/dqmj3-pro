#include "003e39e8_003e5a98.h"



void fn_003e5a98(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003e5a94(undefined4 param_1)

{
  fn_0068ab44(param_1,0x100094c);
  return;
}



void fn_003e59b8(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_38 [36];
  
  if (*(char *)(param_1 + 0xc0) == '\0') {
    fn_002c3808(param_1);
    uVar1 = DAT_008950ac;
    iVar3 = 0;
    do {
      fn_001028d4(auStack_38,uVar1,iVar3);
      iVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x70),auStack_38);
      if (iVar2 != 0) {
        *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 3);
    return;
  }
  fn_002c3808(param_1,param_2,param_3,DAT_008950ac);
  uVar1 = DAT_008950b0;
  iVar3 = 0;
  do {
    fn_001028d4(auStack_38,uVar1,iVar3);
    iVar2 = fn_00689210(*(undefined4 *)(param_1 + 0x70),auStack_38);
    if (iVar2 != 0) {
      *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  return;
}



void fn_003e5988(int param_1)

{
  int iVar1;
  
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x81) = 0;
  fn_0031f3f4();
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x83) = 0xff;
  fn_0031f954(iVar1,0);
  return;
}



void fn_003e5958(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  fn_003e5aac();
  (**(code **)(*param_1 + 0x148))(param_1,param_2);
  *(undefined1 *)(param_1[0x1d] + 0x81) = 0;
  fn_0031f3f4();
  iVar1 = param_1[0x1d];
  *(undefined1 *)(iVar1 + 0x83) = 0xff;
  fn_0031f954(iVar1,0);
  return;
}



int fn_003e5678(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = 0;
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (0 < iVar1) {
    do {
      iVar1 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar2);
      iVar2 = iVar2 + 1;
      if (*(short *)(iVar1 + 4) == param_2) {
        iVar3 = iVar3 + 1;
      }
      iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    } while (iVar2 < iVar1);
  }
  return iVar3;
}



void fn_003e563c(int param_1,byte param_2)

{
  int iVar1;
  
  iVar1 = fn_00689210(*(undefined4 *)(param_1 + 0x70),(char *)&DAT_003e5664);
  *(byte *)(iVar1 + 0x44) = *(byte *)(iVar1 + 0x44) & 0xfe | param_2;
  return;
}



void fn_003e560c(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x74);
  *(undefined1 *)(iVar1 + 0x81) = 1;
  fn_0031f3f4(iVar1,0);
  *(undefined1 *)(*(int *)(param_1 + 0x74) + 0x83) = 0;
  fn_0031f954();
  return;
}



void fn_003e5550(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 in_lr;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0xb0) + 8);
  iVar4 = fn_00660e2c();
  if ((iVar4 == 6 || iVar4 == 7) || (iVar4 == 8 || iVar4 == 9)) {
    iVar4 = 0;
    iVar3 = 0;
    iVar2 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    if (0 < iVar2) {
      do {
        iVar2 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar3);
        iVar3 = iVar3 + 1;
        if (*(short *)(iVar2 + 4) == iVar5) {
          iVar4 = iVar4 + 1;
        }
        iVar2 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
      } while (iVar3 < iVar2);
    }
  }
  else {
    iVar4 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)iVar5);
  }
  iVar5 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),"tb_num");
  iVar2 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),"tb_have");
  iVar3 = fn_0068897c(*(undefined4 *)(param_1 + 0x70),"tb_not_have");
  if (iVar4 < 1) {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe;
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe;
    bVar1 = *(byte *)(iVar3 + 0x44) & 0xfe | 1;
  }
  else {
    *(byte *)(iVar5 + 0x44) = *(byte *)(iVar5 + 0x44) & 0xfe | 1;
    fn_00688c04(iVar5,iVar4,0,param_4,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,in_lr);
    *(byte *)(iVar2 + 0x44) = *(byte *)(iVar2 + 0x44) & 0xfe | 1;
    bVar1 = *(byte *)(iVar3 + 0x44) & 0xfe;
  }
  *(byte *)(iVar3 + 0x44) = bVar1;
  return;
}



int fn_003e53e0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = fn_00660e2c();
  if ((iVar1 != 6 && iVar1 != 7) && (iVar1 != 8 && iVar1 != 9)) {
    iVar1 = fn_006b2aa0(*(undefined4 *)(DAT_00897804 + 0x14),(int)(short)param_2);
    return iVar1;
  }
  iVar2 = 0;
  iVar3 = 0;
  iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
  if (0 < iVar1) {
    do {
      iVar1 = fn_0024222c(*(undefined4 *)(DAT_00897804 + 0x18),iVar3);
      iVar3 = iVar3 + 1;
      if (*(short *)(iVar1 + 4) == param_2) {
        iVar2 = iVar2 + 1;
      }
      iVar1 = fn_006b4f84(*(undefined4 *)(DAT_00897804 + 0x18));
    } while (iVar3 < iVar1);
  }
  return iVar2;
}



void fn_003e533c(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)fn_002c4694();
  *puVar1 = &DAT_00832d90;
  *(undefined1 *)(puVar1 + 0x2c) = 0;
  *(undefined1 *)((int)puVar1 + 0xb1) = 0;
  *(undefined1 *)((int)puVar1 + 0xb2) = 0;
  *(undefined1 *)((int)puVar1 + 0xb3) = 0;
  puVar1[0x2d] = 0xffffffff;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0;
  return;
}



void fn_003e4194(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 in_lr;
  
  puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
  if (puVar1 != (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_003e41e0;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  puVar1 = (undefined4 *)0x0;
LAB_003e41e0:
  iVar3 = fn_0065c378(puVar1 + 0x248,*(undefined4 *)(*(int *)(DAT_00897804 + 8) + 4));
  if (iVar3 == 0) {
    puVar1 = (undefined4 *)fn_001f7510(param_1,0x48);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_008942d0) goto LAB_003e4268;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003e4268:
    fn_0036c658(puVar1,1);
    uVar4 = fn_0025f988(DAT_00897800,(char *)&DAT_003e42c4);
    fn_0036c13c(puVar1,uVar4);
    *(undefined1 *)(puVar1 + 0xc) = 1;
    fn_00689bd0(param_1,0x48,0);
    *(undefined1 *)(param_1 + 0xb0) = 4;
    return;
  }
  fn_0068ab44(param_1,0x100094c);
  if ((*(char *)(param_1 + 0xb1) == '\0') && (iVar3 = fn_006ad868(param_1,1), iVar3 != 0)) {
    if (*(int *)(param_1 + 0xb4) == -1) {
      fn_006899f4(param_1,0,1,1,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8,in_lr);
    }
    else {
      fn_006899f4(param_1,*(int *)(param_1 + 0xb4),1,1,unaff_r4,unaff_r5,unaff_r6,unaff_r7,unaff_r8
                   ,in_lr);
    }
    puVar1 = (undefined4 *)fn_001f74ec(param_1,0x95);
    if (puVar1 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(**(code **)*puVar1)(puVar1);
      do {
        if (puVar2 == &DAT_00894c6c) goto LAB_003e3b98;
        puVar2 = (undefined4 *)*puVar2;
      } while (puVar2 != (undefined4 *)0x0);
    }
    puVar1 = (undefined4 *)0x0;
LAB_003e3b98:
    *(undefined1 *)(puVar1 + 0x10) = 1;
    puVar1[0x27e] = 0;
    puVar1[0xc] = 0xffffffff;
    *(undefined1 *)((int)puVar1 + 0x9f7) = 1;
    *(undefined1 *)(param_1 + 0xb0) = 0xb;
  }
  return;
}



void fn_003e3a84(undefined4 param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  piVar1 = (int *)fn_001f74ec(param_1,0x95);
  if (piVar1 != (int *)0x0) {
    puVar2 = (undefined4 *)(**(code **)*piVar1)(piVar1);
    do {
      if (puVar2 == &DAT_00894c6c) goto LAB_003e3ad4;
      puVar2 = (undefined4 *)*puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  piVar1 = (int *)0x0;
LAB_003e3ad4:
  if ((char)piVar1[0x10] != '\0') {
    (**(code **)(*piVar1 + 0x10))();
  }
  fn_002c4100(param_1);
  return;
}



void fn_003e39e8(int param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  fn_0025dbc4();
  puVar2 = *(undefined4 **)(param_1 + 0x18);
  if (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(**(code **)*puVar2)(puVar2);
    do {
      if (puVar1 == &DAT_00894d28) goto LAB_003e3a30;
      puVar1 = (undefined4 *)*puVar1;
    } while (puVar1 != (undefined4 *)0x0);
  }
  puVar2 = (undefined4 *)0x0;
LAB_003e3a30:
  if (*(char *)(puVar2 + 0x23d) == '\0') {
    return;
  }
  fn_003e371c(param_1);
  return;
}


